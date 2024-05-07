#!/usr/bin/env python3
import hashlib
from os import path
import os
import re
import sys
import shutil
import subprocess
import tarfile
import urllib.request

SOURCES_PATH='sources'
INCLUDE_PATH='include'
GENTMP_PATH='gentmp'

# List of sources for selective extraction of headers.
#
# The versions used define the interface, thus the lowest version package
# required on the user's system.
#
SOURCES=[
    # The following header versions are the same as depends on
    # bitcoin commit `c05c214f2e9cfd6070a3c7680bfa09358fd9d97a`, with (see issue #29977):
    # - `7cb88c8b46723d306b96953a6a60c90a4ab211e3` (depends: xcb-proto 1.15.2) reverted for compatibility with Ubuntu 20.04 and 22.04.
    # - freetype downgraded to 2.10.1 to be compatible with Ubuntu 20.04
    #
    # For reference, package versions in various Ubuntu LTS:
    #
    #                       20.04LTS     22.04LTS
    #                       --------     --------
    # - libfontconfig       2.13.1       2.13.1
    # - libfreetype         2.10.1       2.11.1
    # - libxkbcommon        0.10.0       1.4.0
    # - libxcb              1.14         1.14
    # - libxcb-util         0.4.0        0.4.0
    # - libxcb-image        0.4.0        0.4.0
    # - libxcb-keysyms      0.4.0        0.4.0
    # - libxcb-render-util  0.3.9        0.3.9
    # - libxcb-icccm        0.4.1        0.4.1    (=xcb-util-wm)
    # - xcb-proto           1.14         1.14
    #
    ('fontconfig',
        # Download URL
        'https://www.freedesktop.org/software/fontconfig/release/',
        # Filename
        'fontconfig-2.12.6.tar.bz2',
        # SHA256 hash of archive (will be checked before extracting).
        'cf0c30807d08f6a28ab46c61b8dbd55c97d2f292cf88f3a07d3384687f31f017',
        # List of source spec wildcard, destination path to install headers to.
        [
            ('fontconfig/*.h',          'fontconfig'),
        ],
    ),
    ('freetype',
        'https://download-mirror.savannah.gnu.org/releases/freetype/',
        'freetype-2.10.1.tar.xz',
        '16dbfa488a21fe827dc27eaf708f42f7aa3bb997d745d31a19781628c36ba26f',
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

#-----------------------------------------------------------------------------
# implementation

def match_wildcard(exp: str, s: str) -> str:
    '''
    Match a filename against a path expression.
    A version of fn_match that handles * with / correctly.
    '''
    return re.match(re.escape(exp).replace('\\*', '[^/]*') + '$', s)

def download() -> None:
    '''
    Download and check the upstream archives to `sources/`, if they don't exist yet.
    '''
    os.makedirs(SOURCES_PATH, exist_ok=True)
    error = False
    for (libname, url, filename, sha256, _) in SOURCES:
        dl_url = url + filename
        dl_path = path.join(SOURCES_PATH, filename)
        if not path.exists(dl_path):
            print(f'Downloading {dl_url} to {dl_path}')
            try:
                with urllib.request.urlopen(dl_url) as f:
                    data = f.read()
            except urllib.error.HTTPError as e:
                print(f'Download error for {dl_path}: {e}')
                error = True
                continue
            data_sha256 = hashlib.sha256(data).hexdigest()

            if sha256 != data_sha256:
                print(f'Hash mismatch for {dl_path}')
                error = True
                continue
            with open(dl_path, 'wb') as file:
                file.write(data)

    if error:
        print('There were errors during download, exiting.')
        sys.exit(1)

def _extract_wildcard(tar: tarfile.TarFile, src: str, dest: str) -> list[str]:
    '''
    Extract files designated by path expression 'src' to directory 'dest',
    creating it if not existent. Returns the list of files extracted.
    '''
    out = []
    for member in tar.getmembers():
        # strip first component
        components = member.name.split('/')[1:]
        src_path = '/'.join(components)
        if match_wildcard(src, src_path):
            os.makedirs(dest, exist_ok=True)
            print(f'  {"/".join(components)} to {dest}')
            dest_path = path.join(dest, components[-1])
            with tar.extractfile(member) as file:
                with open(dest_path, 'wb') as outfile:
                    outfile.write(file.read())
            out.append(dest_path)
    return out

def extract() -> None:
    '''
    Extract external headers from downloaded archives and put them in
    'include/' subtreesa as expected by Qt.
    '''
    for (_, _, filename, _, headers) in SOURCES:
        print(f'Processing {filename}')
        dl_path = path.join(SOURCES_PATH, filename)
        tar = tarfile.open(dl_path, 'r:*')

        for (src, dst) in headers:
            _extract_wildcard(tar, src, path.join(INCLUDE_PATH, dst))

def extract_generate_xcbproto() -> None:
    '''
    Extract and generate the XCB proto headers using c_client.py from libxcb.
    '''
    print('Extracting XCB protocol generator...')
    # Get handle to xcb_proto and libxcb tar files.
    tars = {}
    for (libname, _, filename, _, headers) in SOURCES:
        dl_path = path.join(SOURCES_PATH, filename)
        if libname in {'xcb_proto', 'libxcb'}:
            tars[libname] = tarfile.open(dl_path, 'r:*')

    xml_dir = path.join(GENTMP_PATH, 'xml')

    # Extract src/*.xml library from xcbproto
    xml_files = _extract_wildcard(tars['xcb_proto'], 'src/*.xml', xml_dir)
    # Extract xcbgen/*.py python library from xcbproto
    _extract_wildcard(tars['xcb_proto'], 'xcbgen/*.py', path.join(GENTMP_PATH, 'xcbgen'))
    # Extract src/c_client.py from libxcb
    _extract_wildcard(tars['libxcb'], 'src/c_client.py', GENTMP_PATH)

    # Run:c_client.py on every protocol xml file, copy out header.
    orig_path = os.getcwd()
    xcb_include_path = path.join(orig_path, INCLUDE_PATH, 'xcb')
    os.chdir(GENTMP_PATH)

    print('Generating XCB protocol headers...')

    for filename in xml_files:
        filename = path.relpath(filename, GENTMP_PATH)
        header_name = path.basename(filename).removesuffix('.xml') + '.h'
        target = path.join(xcb_include_path, header_name)
        print(f'  Generating XCB protocol file {path.basename(filename)} to {path.relpath(target, orig_path)}...')
        subprocess.run([sys.executable, 'c_client.py', '-c', '', '-l', '', '-s', '3', filename], check=True)
        # Copy generated protocol header.
        shutil.copyfile(header_name, target)

    os.chdir(orig_path)

def main() -> None:
    '''Main function.'''
    download()

    print(f'Cleaning up {INCLUDE_PATH}.')
    if path.isdir(INCLUDE_PATH):
        shutil.rmtree(INCLUDE_PATH)

    extract()
    extract_generate_xcbproto()

if __name__ == '__main__':
    main()
