#ifndef DYLIBLOAD_WRAPPER_XKBCOMMON_X11
#define DYLIBLOAD_WRAPPER_XKBCOMMON_X11
/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xkbcommon/xkbcommon-x11.h --sys-include xcb-so_wrap.h --sys-include xkbcommon-so_wrap.h --sys-include <xkbcommon/xkbcommon-x11.h> --soname libxkbcommon-x11.so.0 --init-name xkbcommon_x11 --output-header include_gen/xkbcommon_x11-so_wrap.h --output-implementation src_gen/xkbcommon_x11-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xkb_x11_setup_xkb_extension xkb_x11_setup_xkb_extension_dylibloader_orig_xkbcommon_x11
#define xkb_x11_get_core_keyboard_device_id xkb_x11_get_core_keyboard_device_id_dylibloader_orig_xkbcommon_x11
#define xkb_x11_keymap_new_from_device xkb_x11_keymap_new_from_device_dylibloader_orig_xkbcommon_x11
#define xkb_x11_state_new_from_device xkb_x11_state_new_from_device_dylibloader_orig_xkbcommon_x11
#include "xcb-so_wrap.h"
#include "xkbcommon-so_wrap.h"
#include <xkbcommon/xkbcommon-x11.h>
#undef xkb_x11_setup_xkb_extension
#undef xkb_x11_get_core_keyboard_device_id
#undef xkb_x11_keymap_new_from_device
#undef xkb_x11_state_new_from_device
#ifdef __cplusplus
extern "C" {
#endif
#define xkb_x11_setup_xkb_extension xkb_x11_setup_xkb_extension_dylibloader_wrapper_xkbcommon_x11
#define xkb_x11_get_core_keyboard_device_id xkb_x11_get_core_keyboard_device_id_dylibloader_wrapper_xkbcommon_x11
#define xkb_x11_keymap_new_from_device xkb_x11_keymap_new_from_device_dylibloader_wrapper_xkbcommon_x11
#define xkb_x11_state_new_from_device xkb_x11_state_new_from_device_dylibloader_wrapper_xkbcommon_x11
extern int (*xkb_x11_setup_xkb_extension_dylibloader_wrapper_xkbcommon_x11)(xcb_connection_t *, uint16_t, uint16_t, enum xkb_x11_setup_xkb_extension_flags, uint16_t *, uint16_t *, uint8_t *, uint8_t *);
extern int32_t (*xkb_x11_get_core_keyboard_device_id_dylibloader_wrapper_xkbcommon_x11)(xcb_connection_t *);
extern struct xkb_keymap *(*xkb_x11_keymap_new_from_device_dylibloader_wrapper_xkbcommon_x11)(struct xkb_context *, xcb_connection_t *, int32_t, enum xkb_keymap_compile_flags);
extern struct xkb_state *(*xkb_x11_state_new_from_device_dylibloader_wrapper_xkbcommon_x11)(struct xkb_keymap *, xcb_connection_t *, int32_t);
int initialize_xkbcommon_x11(int verbose);
#ifdef __cplusplus
}
#endif
#endif
