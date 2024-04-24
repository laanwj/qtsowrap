#ifndef DYLIBLOAD_WRAPPER_WAYLAND_CURSOR
#define DYLIBLOAD_WRAPPER_WAYLAND_CURSOR
/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/wayland-cursor.h --sys-include wayland_client-so_wrap.h --sys-include <wayland-cursor.h> --soname libwayland-cursor.so.0 --init-name wayland_cursor --output-header include_gen/wayland_cursor-so_wrap.h --output-implementation src_gen/wayland_cursor-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define wl_cursor_theme_load wl_cursor_theme_load_dylibloader_orig_wayland_cursor
#define wl_cursor_theme_destroy wl_cursor_theme_destroy_dylibloader_orig_wayland_cursor
#define wl_cursor_theme_get_cursor wl_cursor_theme_get_cursor_dylibloader_orig_wayland_cursor
#define wl_cursor_image_get_buffer wl_cursor_image_get_buffer_dylibloader_orig_wayland_cursor
#define wl_cursor_frame wl_cursor_frame_dylibloader_orig_wayland_cursor
#define wl_cursor_frame_and_duration wl_cursor_frame_and_duration_dylibloader_orig_wayland_cursor
#include "wayland_client-so_wrap.h"
#include <wayland-cursor.h>
#undef wl_cursor_theme_load
#undef wl_cursor_theme_destroy
#undef wl_cursor_theme_get_cursor
#undef wl_cursor_image_get_buffer
#undef wl_cursor_frame
#undef wl_cursor_frame_and_duration
#ifdef __cplusplus
extern "C" {
#endif
#define wl_cursor_theme_load wl_cursor_theme_load_dylibloader_wrapper_wayland_cursor
#define wl_cursor_theme_destroy wl_cursor_theme_destroy_dylibloader_wrapper_wayland_cursor
#define wl_cursor_theme_get_cursor wl_cursor_theme_get_cursor_dylibloader_wrapper_wayland_cursor
#define wl_cursor_image_get_buffer wl_cursor_image_get_buffer_dylibloader_wrapper_wayland_cursor
#define wl_cursor_frame wl_cursor_frame_dylibloader_wrapper_wayland_cursor
#define wl_cursor_frame_and_duration wl_cursor_frame_and_duration_dylibloader_wrapper_wayland_cursor
extern struct wl_cursor_theme *(*wl_cursor_theme_load_dylibloader_wrapper_wayland_cursor)(const char *, int, struct wl_shm *);
extern void (*wl_cursor_theme_destroy_dylibloader_wrapper_wayland_cursor)(struct wl_cursor_theme *);
extern struct wl_cursor *(*wl_cursor_theme_get_cursor_dylibloader_wrapper_wayland_cursor)(struct wl_cursor_theme *, const char *);
extern struct wl_buffer *(*wl_cursor_image_get_buffer_dylibloader_wrapper_wayland_cursor)(struct wl_cursor_image *);
extern int (*wl_cursor_frame_dylibloader_wrapper_wayland_cursor)(struct wl_cursor *, uint32_t);
extern int (*wl_cursor_frame_and_duration_dylibloader_wrapper_wayland_cursor)(struct wl_cursor *, uint32_t, uint32_t *);
int initialize_wayland_cursor(int verbose);
#ifdef __cplusplus
}
#endif
#endif
