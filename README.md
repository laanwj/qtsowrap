    FWIW, i was (lightly) involved in the integration of wayland to Godot, there are definitely parallels with our GUI situation and games, in that they are binaries that need to run in an unpredictable, maybe even hostile environment. One think id like to do is dynamically load all dependencies at runtime. Anything to do with input, output, system integration. This reduces or even removes compile-time dependency on anything (headers can often be vendored).
    i will look into how to do this with Qt6, so we can know before we start integration

     [libfontconfig.so.1]           fontconfig/fontconfig.h fontconfig/fcfreetype.h
     [libfreetype.so.6]             ft2build.h
     [libxcb.so.1]                  xcb/xcb.h
     [libxcb-icccm.so.4]            xcb/xcb_icccm.h
     [libxcb-image.so.0]            xcb/xcb_image.h
     [libxcb-keysyms.so.1]          xcb/xcb_keysyms.h
     [libxcb-randr.so.0]            xcb/randr.h
     [libxcb-render.so.0]           xcb/render.h
     [libxcb-render-util.so.0]      xcb/xcb_renderutil.h
     [libxcb-shape.so.0]            xcb/shape.h
     [libxcb-shm.so.0]              xcb/shm.h
     [libxcb-sync.so.1]             xcb/sync.h
     [libxcb-xfixes.so.0]           xcb/xfixes.h
     [libxcb-xinerama.so.0]         xcb/xinerama.h
     [libxcb-xkb.so.1]              xcb/xkb.h
     [libxkbcommon.so.0]            xkbcommon/xkbcommon.h
     [libxkbcommon-x11.so.0]        xkbcommon/xkbcommon-x11.h

disabled:
     libxcb-xinput.so.0             xcb/xinput.h

     need to wrap these libraries, then load at runtime
     generate stub from header (should be possible with godot's shim)
     platform/linuxbsd/x11/dynwrappers/xlib-so_wrap.c

     https://github.com/hpvb/dynload-wrapper



Notes:

  had to edit   include/freetype/config/integer-types.h   to insert dummy types  (the reason we don't care is because the original header will be included for the types, anyhow)
  had to edit   include/fontconfig/fcfreetype.h   to include  fontconfig/fontconfig.h 
  had to edit   include/freetype/fterrors.h       to include  freetype/fttypes.h>

the last two can be solved by consecutively loading the headers, instead of one at a time
the first one could be solved by passing some defines

