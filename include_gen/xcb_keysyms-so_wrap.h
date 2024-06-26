#ifndef DYLIBLOAD_WRAPPER_XCB_KEYSYMS
#define DYLIBLOAD_WRAPPER_XCB_KEYSYMS
/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xcb/xcb_keysyms.h --sys-include xcb-so_wrap.h --sys-include <xcb/xcb_keysyms.h> --soname libxcb-keysyms.so.1 --init-name xcb_keysyms --output-header include_gen/xcb_keysyms-so_wrap.h --output-implementation src_gen/xcb_keysyms-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xcb_key_symbols_alloc xcb_key_symbols_alloc_dylibloader_orig_xcb_keysyms
#define xcb_key_symbols_free xcb_key_symbols_free_dylibloader_orig_xcb_keysyms
#define xcb_key_symbols_get_keysym xcb_key_symbols_get_keysym_dylibloader_orig_xcb_keysyms
#define xcb_key_symbols_get_keycode xcb_key_symbols_get_keycode_dylibloader_orig_xcb_keysyms
#define xcb_key_press_lookup_keysym xcb_key_press_lookup_keysym_dylibloader_orig_xcb_keysyms
#define xcb_key_release_lookup_keysym xcb_key_release_lookup_keysym_dylibloader_orig_xcb_keysyms
#define xcb_refresh_keyboard_mapping xcb_refresh_keyboard_mapping_dylibloader_orig_xcb_keysyms
#define xcb_is_keypad_key xcb_is_keypad_key_dylibloader_orig_xcb_keysyms
#define xcb_is_private_keypad_key xcb_is_private_keypad_key_dylibloader_orig_xcb_keysyms
#define xcb_is_cursor_key xcb_is_cursor_key_dylibloader_orig_xcb_keysyms
#define xcb_is_pf_key xcb_is_pf_key_dylibloader_orig_xcb_keysyms
#define xcb_is_function_key xcb_is_function_key_dylibloader_orig_xcb_keysyms
#define xcb_is_misc_function_key xcb_is_misc_function_key_dylibloader_orig_xcb_keysyms
#define xcb_is_modifier_key xcb_is_modifier_key_dylibloader_orig_xcb_keysyms
#include "xcb-so_wrap.h"
#include <xcb/xcb_keysyms.h>
#undef xcb_key_symbols_alloc
#undef xcb_key_symbols_free
#undef xcb_key_symbols_get_keysym
#undef xcb_key_symbols_get_keycode
#undef xcb_key_press_lookup_keysym
#undef xcb_key_release_lookup_keysym
#undef xcb_refresh_keyboard_mapping
#undef xcb_is_keypad_key
#undef xcb_is_private_keypad_key
#undef xcb_is_cursor_key
#undef xcb_is_pf_key
#undef xcb_is_function_key
#undef xcb_is_misc_function_key
#undef xcb_is_modifier_key
#ifdef __cplusplus
extern "C" {
#endif
#define xcb_key_symbols_alloc xcb_key_symbols_alloc_dylibloader_wrapper_xcb_keysyms
#define xcb_key_symbols_free xcb_key_symbols_free_dylibloader_wrapper_xcb_keysyms
#define xcb_key_symbols_get_keysym xcb_key_symbols_get_keysym_dylibloader_wrapper_xcb_keysyms
#define xcb_key_symbols_get_keycode xcb_key_symbols_get_keycode_dylibloader_wrapper_xcb_keysyms
#define xcb_key_press_lookup_keysym xcb_key_press_lookup_keysym_dylibloader_wrapper_xcb_keysyms
#define xcb_key_release_lookup_keysym xcb_key_release_lookup_keysym_dylibloader_wrapper_xcb_keysyms
#define xcb_refresh_keyboard_mapping xcb_refresh_keyboard_mapping_dylibloader_wrapper_xcb_keysyms
#define xcb_is_keypad_key xcb_is_keypad_key_dylibloader_wrapper_xcb_keysyms
#define xcb_is_private_keypad_key xcb_is_private_keypad_key_dylibloader_wrapper_xcb_keysyms
#define xcb_is_cursor_key xcb_is_cursor_key_dylibloader_wrapper_xcb_keysyms
#define xcb_is_pf_key xcb_is_pf_key_dylibloader_wrapper_xcb_keysyms
#define xcb_is_function_key xcb_is_function_key_dylibloader_wrapper_xcb_keysyms
#define xcb_is_misc_function_key xcb_is_misc_function_key_dylibloader_wrapper_xcb_keysyms
#define xcb_is_modifier_key xcb_is_modifier_key_dylibloader_wrapper_xcb_keysyms
extern xcb_key_symbols_t *(*xcb_key_symbols_alloc_dylibloader_wrapper_xcb_keysyms)(xcb_connection_t *);
extern void (*xcb_key_symbols_free_dylibloader_wrapper_xcb_keysyms)(xcb_key_symbols_t *);
extern xcb_keysym_t (*xcb_key_symbols_get_keysym_dylibloader_wrapper_xcb_keysyms)(xcb_key_symbols_t *, xcb_keycode_t, int);
extern xcb_keycode_t *(*xcb_key_symbols_get_keycode_dylibloader_wrapper_xcb_keysyms)(xcb_key_symbols_t *, xcb_keysym_t);
extern xcb_keysym_t (*xcb_key_press_lookup_keysym_dylibloader_wrapper_xcb_keysyms)(xcb_key_symbols_t *, xcb_key_press_event_t *, int);
extern xcb_keysym_t (*xcb_key_release_lookup_keysym_dylibloader_wrapper_xcb_keysyms)(xcb_key_symbols_t *, xcb_key_release_event_t *, int);
extern int (*xcb_refresh_keyboard_mapping_dylibloader_wrapper_xcb_keysyms)(xcb_key_symbols_t *, xcb_mapping_notify_event_t *);
extern int (*xcb_is_keypad_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
extern int (*xcb_is_private_keypad_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
extern int (*xcb_is_cursor_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
extern int (*xcb_is_pf_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
extern int (*xcb_is_function_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
extern int (*xcb_is_misc_function_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
extern int (*xcb_is_modifier_key_dylibloader_wrapper_xcb_keysyms)(xcb_keysym_t);
int initialize_xcb_keysyms(int verbose);
#ifdef __cplusplus
}
#endif
#endif
