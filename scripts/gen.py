#!/usr/bin/env python3
from itertools import chain
import os
import subprocess

GEN='dynload-wrapper/generate-wrapper.py'
ALL_LIBS = [
('xcb',             'libxcb.so.1',                 ['xcb/xcb.h']),
('xcb_icccm',       'libxcb-icccm.so.4',           ['xcb/xcb_icccm.h']),
('xcb_image',       'libxcb-image.so.0',           ['xcb/xcb_image.h']),
('xcb_keysyms',     'libxcb-keysyms.so.1',         ['xcb/xcb_keysyms.h']),
('xcb_randr',       'libxcb-randr.so.0',           ['xcb/randr.h']),
('xcb_render',      'libxcb-render.so.0',          ['xcb/render.h']),
('xcb_render_util', 'libxcb-render-util.so.0',     ['xcb/xcb_renderutil.h']),
('xcb_shape',       'libxcb-shape.so.0',           ['xcb/shape.h']),
('xcb_shm',         'libxcb-shm.so.0',             ['xcb/shm.h']),
('xcb_sync',        'libxcb-sync.so.1',            ['xcb/sync.h']),
('xcb_xfixes',      'libxcb-xfixes.so.0',          ['xcb/xfixes.h']),
('xcb_xinerama',    'libxcb-xinerama.so.0',        ['xcb/xinerama.h']),
('xcb_xkb',         'libxcb-xkb.so.1',             ['xcb/xkb.h']),
#('xcb_xinput',      'libxcb-xinput.so.0',          ['xcb/xinput.h'),

('xkbcommon',       'libxkbcommon.so.0',           ['xkbcommon/xkbcommon.h']),
('xkbcommon_x11',   'libxkbcommon-x11.so.0',       ['xkbcommon/xkbcommon-x11.h']),

('fontconfig',      'libfontconfig.so.1',          ['fontconfig/fontconfig.h', 'fontconfig/fcfreetype.h']),

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
]),
]
INC_DIR = 'include'
OUT_DIR = 'output'

def main():
    for (base, soname, incnames) in ALL_LIBS:
        out_hdr  = os.path.join(OUT_DIR, base + '-so_wrap.h')
        out_impl = os.path.join(OUT_DIR, base + '-so_wrap.c')
        subprocess.run([GEN] +
            list(chain.from_iterable(['--include', os.path.join(INC_DIR, incname)] for incname in incnames)) +
            list(chain.from_iterable(['--sys-include', '<' + incname + '>'] for incname in incnames)) +
            ['--soname', soname,
            '--init-name', base,
            '--output-header', out_hdr,
            '--output-implementation', out_impl,
            '--ignore-other',
            '--include-dir', INC_DIR
        ], check=True)

if __name__ == '__main__':
    main()
