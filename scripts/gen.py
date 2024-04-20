#!/usr/bin/env python3
'''
(Re)_generate source files and build system file.
'''
from itertools import chain
import os
import subprocess

GEN='scripts/generate-wrapper.py'
# important: these are grouped by what symbols are defined in what shared library.
# so e.g.: the symbols from xproto.h are defined in libxcb.so.1, so it's grouped under there.
ALL_LIBS = [
# shortname         # soname                       # includes to scan            # shortnames of inter-dependencies
#################################################################################################################################

# the reason we're including xcbext.h here is because Qt builds a special version of xcb-xinput internally,
# an optional dependency to handle XInput2, that's often missing on user's systems. AFAIK this is only used for tablet support,
# so stripping it out would be another option, but that is more incisive into Qt code.
('xcb',             'libxcb.so.1',                 ['xcb/xproto.h', 'xcb/xcb.h', 'xcb/xcbext.h'],[]),
('xcb_icccm',       'libxcb-icccm.so.4',           ['xcb/xcb_icccm.h'],          ['xcb']),
('xcb_image',       'libxcb-image.so.0',           ['xcb/xcb_image.h'],          ['xcb', 'xcb_shm']),
('xcb_keysyms',     'libxcb-keysyms.so.1',         ['xcb/xcb_keysyms.h'],        ['xcb']),
('xcb_randr',       'libxcb-randr.so.0',           ['xcb/randr.h'],              ['xcb', 'xcb_render']),
('xcb_render',      'libxcb-render.so.0',          ['xcb/render.h'],             ['xcb']),
('xcb_render_util', 'libxcb-render-util.so.0',     ['xcb/xcb_renderutil.h'],     ['xcb', 'xcb_render']),
('xcb_shape',       'libxcb-shape.so.0',           ['xcb/shape.h'],              ['xcb']),
('xcb_shm',         'libxcb-shm.so.0',             ['xcb/shm.h'],                ['xcb']),
('xcb_sync',        'libxcb-sync.so.1',            ['xcb/sync.h'],               ['xcb']),
('xcb_xfixes',      'libxcb-xfixes.so.0',          ['xcb/xfixes.h'],             ['xcb', 'xcb_render', 'xcb_shape']),
('xcb_xinerama',    'libxcb-xinerama.so.0',        ['xcb/xinerama.h'],           ['xcb']),
('xcb_xkb',         'libxcb-xkb.so.1',             ['xcb/xkb.h'],                ['xcb']),

('xkbcommon',       'libxkbcommon.so.0',           ['xkbcommon/xkbcommon.h'],    []),
('xkbcommon_x11',   'libxkbcommon-x11.so.0',       ['xkbcommon/xkbcommon-x11.h'],['xcb', 'xkbcommon']),

('freetype',        'libfreetype.so.6',            [
    'ft2build.h',
    # from src/platformsupport/fontdatabases/freetype/qfontengine_ft.cpp
    'freetype/freetype.h', # include FT_FREETYPE_H
    'freetype/ftoutln.h',  # include FT_OUTLINE_H
    'freetype/ftsynth.h',  # include FT_SYNTHESIS_H
    'freetype/tttables.h', # include FT_TRUETYPE_TABLES_H
    'freetype/t1tables.h', # include FT_TYPE1_TABLES_H
    'freetype/ftglyph.h',  # include FT_GLYPH_H
    'freetype/ftmodapi.h', # include FT_MODULE_H
    'freetype/ftlcdfil.h', # include FT_LCD_FILTER_H
    'freetype/config/ftoption.h', # include FT_CONFIG_OPTIONS_H
    'freetype/ftfntfmt.h', # include FT_FONT_FORMATS_H
    'freetype/fterrors.h', # include FT_ERRORS_H
], []),

('fontconfig',      'libfontconfig.so.1',          ['fontconfig/fontconfig.h', 'fontconfig/fcfreetype.h'],  ['freetype']),
]

INC_DIR = 'include'
OUT_DIR_H = 'include_gen'
OUT_DIR_C = 'src_gen'

OUT_H_SUFFIX = '-so_wrap.h'
OUT_C_SUFFIX = '-so_wrap.c'

def main():
    header_files = []
    source_files = []
    for (base, soname, incnames, deps) in ALL_LIBS:
        out_hdr_base = base + OUT_H_SUFFIX
        out_hdr = os.path.join(OUT_DIR_H, out_hdr_base)
        out_impl_base = base + OUT_C_SUFFIX
        out_impl = os.path.join(OUT_DIR_C, out_impl_base)

        header_files.append(out_hdr_base)
        source_files.append(out_impl_base)

        sys_include = []
        for depname in deps:
            # for inter-dependencies (files that include each other), first include the already-wrapped library.
            # this makes sure its definitions don't get clobbered by a direct include.
            sys_include.extend(['--sys-include', depname + OUT_H_SUFFIX])
        for incname in incnames:
            sys_include.extend(['--sys-include', '<' + incname + '>'])

        subprocess.run([GEN] +
            list(chain.from_iterable(['--include', os.path.join(INC_DIR, incname)] for incname in incnames)) +
            sys_include +
            ['--soname', soname,
            '--init-name', base,
            '--output-header', out_hdr,
            '--output-implementation', out_impl,
            '--ignore-other',
            '--include-dir', INC_DIR
        ], check=True)

    # Generate CMake build file.
    # Avoids having to use globbing.
    with open('src_gen/CMakeLists.txt', 'w') as f:
        f.write('add_library(qtsowrap STATIC\n')
        for source_file in source_files:
            f.write(f'  {source_file}\n')

        f.write(')\n')
        f.write('target_sources(qtsowrap\n')
        f.write(f'  PUBLIC\n')
        for source_file in header_files:
            f.write(f'  ../include_gen/{source_file}\n')
        f.write(')\n')
        f.write('set_property(TARGET qtsowrap PROPERTY PUBLIC_HEADER\n')
        for source_file in header_files:
            f.write(f'  ../include_gen/{source_file}\n')
        f.write(')\n')
        f.write('install(TARGETS qtsowrap PUBLIC_HEADER)\n')

        f.write('\n')
        # Also install all the base headers from include/ 
        # These need to preserve the hierarchy, so don't specify them as PUBLIC_HEADER.
        prefix = 'include'
        for root, dirs, files in sorted(os.walk(prefix)):
            f.write('install(FILES\n')
            flies = sorted(files) # determinism
            for file in files:
                filename = os.path.join(root, file)
                f.write(f'  ../{filename}\n')
            f.write('  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/' + os.path.relpath(root, prefix) + '\n')
            f.write(')\n')

if __name__ == '__main__':
    main()
