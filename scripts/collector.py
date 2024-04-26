#!/usr/bin/env python3
import hashlib
from os import path
import os
import re
import sys
import requests as req
import shutil
import subprocess
import tarfile

SOURCES_PATH='sources'
INCLUDE_PATH='include'
GENTMP_PATH='gentmp'

def match_wildcard(exp, s):
    '''Version of fn_match that handles * with / correctly.'''
    return re.match(re.escape(exp).replace('\\*', '[^/]*'), s)

# Selective extraction of headers.
SOURCES=[
    # The following header versions are, as currently, in `include/` - same as depends on
    # bitcoin commit `c05c214f2e9cfd6070a3c7680bfa09358fd9d97a`
    # with `7cb88c8b46723d306b96953a6a60c90a4ab211e3` (depends: xcb-proto 1.15.2) reverted:

    ('fontconfig',
        'https://www.freedesktop.org/software/fontconfig/release/',
        'fontconfig-2.12.6.tar.bz2',
        'cf0c30807d08f6a28ab46c61b8dbd55c97d2f292cf88f3a07d3384687f31f017',
        [    # src, dest  paths to install headers from
            ('fontconfig/*.h',          'fontconfig'),
        ],
    ),
    ('freetype',
        'https://download.savannah.gnu.org/releases/freetype/',
        'freetype-2.11.0.tar.xz',
        '8bee39bd3968c4804b70614a0a3ad597299ad0e824bc8aad5ce8aaf48067bde7',
        [
            ('include/*.h',             ''),   # ft2build.h
            ('include/freetype/*.h',    'freetype'),
            ('include/freetype/config/*.h', 'freetype/config'),
        ],
    ),
    ('libxkbcommon',
        'https://xkbcommon.org/download/',
        'libxkbcommon-0.8.4.tar.xz',
        '60ddcff932b7fd352752d51a5c4f04f3d0403230a584df9a2e0d5ed87c486c8b',
        [
            ('xkbcommon/*.h',           'xkbcommon'),
        ]
    ),
    ('xcb_proto',
        'https://xorg.freedesktop.org/archive/individual/proto/',
        'xcb-proto-1.14.1.tar.xz',
        'f04add9a972ac334ea11d9d7eb4fc7f8883835da3e4859c9afa971efdf57fcc3',
        [],
    ),
    ('libxcb',
        'https://xcb.freedesktop.org/dist/',
        'libxcb-1.14.tar.xz',
        'a55ed6db98d43469801262d81dc2572ed124edc3db31059d4e9916eb9f844c34',
        [
            ('src/xcb.h',               'xcb'),
            ('src/xcbext.h',            'xcb'),
        ],
    ),
    ('libxcb_util',
        'https://xcb.freedesktop.org/dist/',
        'xcb-util-0.4.0.tar.bz2',
        '46e49469cb3b594af1d33176cd7565def2be3fa8be4371d62271fabb5eae50e9',
        [
            ('src/*.h',                 'xcb'),
        ],
    ),
    ('libxcb_util_image',
        'https://xcb.freedesktop.org/dist/',
        'xcb-util-image-0.4.0.tar.bz2',
        '2db96a37d78831d643538dd1b595d7d712e04bdccf8896a5e18ce0f398ea2ffc',
        [
            ('image/*.h',               'xcb'),
        ],
    ),
    ('libxcb_util_keysyms',
        'https://xcb.freedesktop.org/dist/',
        'xcb-util-keysyms-0.4.0.tar.bz2',
        '0ef8490ff1dede52b7de533158547f8b454b241aa3e4dcca369507f66f216dd9',
        [
            ('keysyms/*.h',             'xcb'),
        ],
    ),
    ('libxcb_util_render',
        'https://xcb.freedesktop.org/dist/',
        'xcb-util-renderutil-0.3.9.tar.bz2',
        'c6e97e48fb1286d6394dddb1c1732f00227c70bd1bedb7d1acabefdd340bea5b',
        [
            ('renderutil/*.h',          'xcb'),
        ],
    ),
    ('libxcb_util_wm',
        'https://xcb.freedesktop.org/dist/',
        'xcb-util-wm-0.4.1.tar.bz2',
        '28bf8179640eaa89276d2b0f1ce4285103d136be6c98262b6151aaee1d3c2a3f',
        [
            ('icccm/*.h',               'xcb'),
        ],
    ),
]

def download():
    os.makedirs(SOURCES_PATH, exist_ok=True)
    error = False
    for (libname, url, filename, sha256, _) in SOURCES:
        dl_url = url + filename
        dl_path = path.join(SOURCES_PATH, filename)
        if not path.exists(dl_path):
            print(f'Downloading {dl_url} to {dl_path}')
            request = req.get(dl_url)
            if request.status_code != 200:
                print(f'Download error (status {request.status_code} for {dl_path}')
                error = True
                continue
            data = request.content
            data_sha256 = hashlib.sha256(data).hexdigest()

            if sha256 != data_sha256:
                print(f'Hash mismatch for {dl_path}')
                error = True
                continue
            with open(dl_path, 'wb') as file:
                file.write(data)

    if error:
        sys.exit(1)

def _extract_wildcard(tar, src, dest):
    out = []
    for member in tar.getmembers():
        # strip first component
        components = member.name.split('/')[1:]
        src_path = '/'.join(components)
        if match_wildcard(src, src_path):
            os.makedirs(dest, exist_ok=True)
            print('/'.join(components), 'to', dest)
            dest_path = path.join(dest, components[-1])
            with tar.extractfile(member) as file:
                with open(dest_path, 'wb') as outfile:
                    outfile.write(file.read())
            out.append(dest_path)
    return out

def extract():
    for (_, _, filename, _, headers) in SOURCES:
        print(f'Processing {filename}')
        dl_path = path.join(SOURCES_PATH, filename)
        tar = tarfile.open(dl_path, 'r:*')

        for (src, dst) in headers:
            _extract_wildcard(tar, src, path.join(INCLUDE_PATH, dst))

def extract_generate_xcbproto():
    '''
    Extract and generate the XCB proto headers.
    '''
    # Get handle to xcb_proto and libxcb tar files.
    tars = {}
    for (libname, _, filename, _, headers) in SOURCES:
        dl_path = path.join(SOURCES_PATH, filename)
        if libname in {'xcb_proto', 'libxcb'}:
            tars[libname] = tarfile.open(dl_path, 'r:*')

    # Extract src/*.xml library from xcbproto
    xml_files = _extract_wildcard(tars['xcb_proto'], 'src/*.xml', path.join(GENTMP_PATH, 'xml'))
    # Extract xcbgen/*.py python library from xcbproto
    _extract_wildcard(tars['xcb_proto'], 'xcbgen/*.py', path.join(GENTMP_PATH, 'xcbgen'))
    # Extract src/c_client.py from libxcb
    _extract_wildcard(tars['libxcb'], 'src/c_client.py', GENTMP_PATH)

    # Run:c_client on xml files
    orig_path = os.getcwd()
    xcb_include_path = path.join(orig_path, INCLUDE_PATH, 'xcb')
    os.chdir(GENTMP_PATH)

    for filename in xml_files:
        filename = path.relpath(filename, GENTMP_PATH)
        header_name = path.basename(filename).removesuffix('.xml') + '.h'
        print(f'Processing XCB protocol file {filename} to {header_name}...')
        subprocess.run([sys.executable, 'c_client.py', '-c', 'libxcb 1.14', '-l', 'X Version 11', '-s', '3', filename], check=True)
        # Copy generated protocol header.
        shutil.copyfile(header_name, path.join(xcb_include_path, header_name))

    os.chdir(orig_path)

def main():
    download()
    print(f'Cleaning up {INCLUDE_PATH}.')
    shutil.rmtree(INCLUDE_PATH)
    extract()
    extract_generate_xcbproto()

if __name__ == '__main__':
    main()
