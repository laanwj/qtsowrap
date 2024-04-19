#ifndef DYLIBLOAD_WRAPPER_XKBCOMMON
#define DYLIBLOAD_WRAPPER_XKBCOMMON
/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xkbcommon/xkbcommon.h --sys-include <xkbcommon/xkbcommon.h> --soname libxkbcommon.so.0 --init-name xkbcommon --output-header include_gen/xkbcommon-so_wrap.h --output-implementation src_gen/xkbcommon-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xkb_keysym_get_name xkb_keysym_get_name_dylibloader_orig_xkbcommon
#define xkb_keysym_from_name xkb_keysym_from_name_dylibloader_orig_xkbcommon
#define xkb_keysym_to_utf8 xkb_keysym_to_utf8_dylibloader_orig_xkbcommon
#define xkb_keysym_to_utf32 xkb_keysym_to_utf32_dylibloader_orig_xkbcommon
#define xkb_keysym_to_upper xkb_keysym_to_upper_dylibloader_orig_xkbcommon
#define xkb_keysym_to_lower xkb_keysym_to_lower_dylibloader_orig_xkbcommon
#define xkb_context_new xkb_context_new_dylibloader_orig_xkbcommon
#define xkb_context_ref xkb_context_ref_dylibloader_orig_xkbcommon
#define xkb_context_unref xkb_context_unref_dylibloader_orig_xkbcommon
#define xkb_context_set_user_data xkb_context_set_user_data_dylibloader_orig_xkbcommon
#define xkb_context_get_user_data xkb_context_get_user_data_dylibloader_orig_xkbcommon
#define xkb_context_include_path_append xkb_context_include_path_append_dylibloader_orig_xkbcommon
#define xkb_context_include_path_append_default xkb_context_include_path_append_default_dylibloader_orig_xkbcommon
#define xkb_context_include_path_reset_defaults xkb_context_include_path_reset_defaults_dylibloader_orig_xkbcommon
#define xkb_context_include_path_clear xkb_context_include_path_clear_dylibloader_orig_xkbcommon
#define xkb_context_num_include_paths xkb_context_num_include_paths_dylibloader_orig_xkbcommon
#define xkb_context_include_path_get xkb_context_include_path_get_dylibloader_orig_xkbcommon
#define xkb_context_set_log_level xkb_context_set_log_level_dylibloader_orig_xkbcommon
#define xkb_context_get_log_level xkb_context_get_log_level_dylibloader_orig_xkbcommon
#define xkb_context_set_log_verbosity xkb_context_set_log_verbosity_dylibloader_orig_xkbcommon
#define xkb_context_get_log_verbosity xkb_context_get_log_verbosity_dylibloader_orig_xkbcommon
#define xkb_context_set_log_fn xkb_context_set_log_fn_dylibloader_orig_xkbcommon
#define xkb_keymap_new_from_names xkb_keymap_new_from_names_dylibloader_orig_xkbcommon
#define xkb_keymap_new_from_file xkb_keymap_new_from_file_dylibloader_orig_xkbcommon
#define xkb_keymap_new_from_string xkb_keymap_new_from_string_dylibloader_orig_xkbcommon
#define xkb_keymap_new_from_buffer xkb_keymap_new_from_buffer_dylibloader_orig_xkbcommon
#define xkb_keymap_ref xkb_keymap_ref_dylibloader_orig_xkbcommon
#define xkb_keymap_unref xkb_keymap_unref_dylibloader_orig_xkbcommon
#define xkb_keymap_get_as_string xkb_keymap_get_as_string_dylibloader_orig_xkbcommon
#define xkb_keymap_min_keycode xkb_keymap_min_keycode_dylibloader_orig_xkbcommon
#define xkb_keymap_max_keycode xkb_keymap_max_keycode_dylibloader_orig_xkbcommon
#define xkb_keymap_key_for_each xkb_keymap_key_for_each_dylibloader_orig_xkbcommon
#define xkb_keymap_key_get_name xkb_keymap_key_get_name_dylibloader_orig_xkbcommon
#define xkb_keymap_key_by_name xkb_keymap_key_by_name_dylibloader_orig_xkbcommon
#define xkb_keymap_num_mods xkb_keymap_num_mods_dylibloader_orig_xkbcommon
#define xkb_keymap_mod_get_name xkb_keymap_mod_get_name_dylibloader_orig_xkbcommon
#define xkb_keymap_mod_get_index xkb_keymap_mod_get_index_dylibloader_orig_xkbcommon
#define xkb_keymap_num_layouts xkb_keymap_num_layouts_dylibloader_orig_xkbcommon
#define xkb_keymap_layout_get_name xkb_keymap_layout_get_name_dylibloader_orig_xkbcommon
#define xkb_keymap_layout_get_index xkb_keymap_layout_get_index_dylibloader_orig_xkbcommon
#define xkb_keymap_num_leds xkb_keymap_num_leds_dylibloader_orig_xkbcommon
#define xkb_keymap_led_get_name xkb_keymap_led_get_name_dylibloader_orig_xkbcommon
#define xkb_keymap_led_get_index xkb_keymap_led_get_index_dylibloader_orig_xkbcommon
#define xkb_keymap_num_layouts_for_key xkb_keymap_num_layouts_for_key_dylibloader_orig_xkbcommon
#define xkb_keymap_num_levels_for_key xkb_keymap_num_levels_for_key_dylibloader_orig_xkbcommon
#define xkb_keymap_key_get_syms_by_level xkb_keymap_key_get_syms_by_level_dylibloader_orig_xkbcommon
#define xkb_keymap_key_repeats xkb_keymap_key_repeats_dylibloader_orig_xkbcommon
#define xkb_state_new xkb_state_new_dylibloader_orig_xkbcommon
#define xkb_state_ref xkb_state_ref_dylibloader_orig_xkbcommon
#define xkb_state_unref xkb_state_unref_dylibloader_orig_xkbcommon
#define xkb_state_get_keymap xkb_state_get_keymap_dylibloader_orig_xkbcommon
#define xkb_state_update_key xkb_state_update_key_dylibloader_orig_xkbcommon
#define xkb_state_update_mask xkb_state_update_mask_dylibloader_orig_xkbcommon
#define xkb_state_key_get_syms xkb_state_key_get_syms_dylibloader_orig_xkbcommon
#define xkb_state_key_get_utf8 xkb_state_key_get_utf8_dylibloader_orig_xkbcommon
#define xkb_state_key_get_utf32 xkb_state_key_get_utf32_dylibloader_orig_xkbcommon
#define xkb_state_key_get_one_sym xkb_state_key_get_one_sym_dylibloader_orig_xkbcommon
#define xkb_state_key_get_layout xkb_state_key_get_layout_dylibloader_orig_xkbcommon
#define xkb_state_key_get_level xkb_state_key_get_level_dylibloader_orig_xkbcommon
#define xkb_state_serialize_mods xkb_state_serialize_mods_dylibloader_orig_xkbcommon
#define xkb_state_serialize_layout xkb_state_serialize_layout_dylibloader_orig_xkbcommon
#define xkb_state_mod_name_is_active xkb_state_mod_name_is_active_dylibloader_orig_xkbcommon
#define xkb_state_mod_names_are_active xkb_state_mod_names_are_active_dylibloader_orig_xkbcommon
#define xkb_state_mod_index_is_active xkb_state_mod_index_is_active_dylibloader_orig_xkbcommon
#define xkb_state_mod_indices_are_active xkb_state_mod_indices_are_active_dylibloader_orig_xkbcommon
#define xkb_state_key_get_consumed_mods2 xkb_state_key_get_consumed_mods2_dylibloader_orig_xkbcommon
#define xkb_state_key_get_consumed_mods xkb_state_key_get_consumed_mods_dylibloader_orig_xkbcommon
#define xkb_state_mod_index_is_consumed2 xkb_state_mod_index_is_consumed2_dylibloader_orig_xkbcommon
#define xkb_state_mod_index_is_consumed xkb_state_mod_index_is_consumed_dylibloader_orig_xkbcommon
#define xkb_state_mod_mask_remove_consumed xkb_state_mod_mask_remove_consumed_dylibloader_orig_xkbcommon
#define xkb_state_layout_name_is_active xkb_state_layout_name_is_active_dylibloader_orig_xkbcommon
#define xkb_state_layout_index_is_active xkb_state_layout_index_is_active_dylibloader_orig_xkbcommon
#define xkb_state_led_name_is_active xkb_state_led_name_is_active_dylibloader_orig_xkbcommon
#define xkb_state_led_index_is_active xkb_state_led_index_is_active_dylibloader_orig_xkbcommon
#include <xkbcommon/xkbcommon.h>
#undef xkb_keysym_get_name
#undef xkb_keysym_from_name
#undef xkb_keysym_to_utf8
#undef xkb_keysym_to_utf32
#undef xkb_keysym_to_upper
#undef xkb_keysym_to_lower
#undef xkb_context_new
#undef xkb_context_ref
#undef xkb_context_unref
#undef xkb_context_set_user_data
#undef xkb_context_get_user_data
#undef xkb_context_include_path_append
#undef xkb_context_include_path_append_default
#undef xkb_context_include_path_reset_defaults
#undef xkb_context_include_path_clear
#undef xkb_context_num_include_paths
#undef xkb_context_include_path_get
#undef xkb_context_set_log_level
#undef xkb_context_get_log_level
#undef xkb_context_set_log_verbosity
#undef xkb_context_get_log_verbosity
#undef xkb_context_set_log_fn
#undef xkb_keymap_new_from_names
#undef xkb_keymap_new_from_file
#undef xkb_keymap_new_from_string
#undef xkb_keymap_new_from_buffer
#undef xkb_keymap_ref
#undef xkb_keymap_unref
#undef xkb_keymap_get_as_string
#undef xkb_keymap_min_keycode
#undef xkb_keymap_max_keycode
#undef xkb_keymap_key_for_each
#undef xkb_keymap_key_get_name
#undef xkb_keymap_key_by_name
#undef xkb_keymap_num_mods
#undef xkb_keymap_mod_get_name
#undef xkb_keymap_mod_get_index
#undef xkb_keymap_num_layouts
#undef xkb_keymap_layout_get_name
#undef xkb_keymap_layout_get_index
#undef xkb_keymap_num_leds
#undef xkb_keymap_led_get_name
#undef xkb_keymap_led_get_index
#undef xkb_keymap_num_layouts_for_key
#undef xkb_keymap_num_levels_for_key
#undef xkb_keymap_key_get_syms_by_level
#undef xkb_keymap_key_repeats
#undef xkb_state_new
#undef xkb_state_ref
#undef xkb_state_unref
#undef xkb_state_get_keymap
#undef xkb_state_update_key
#undef xkb_state_update_mask
#undef xkb_state_key_get_syms
#undef xkb_state_key_get_utf8
#undef xkb_state_key_get_utf32
#undef xkb_state_key_get_one_sym
#undef xkb_state_key_get_layout
#undef xkb_state_key_get_level
#undef xkb_state_serialize_mods
#undef xkb_state_serialize_layout
#undef xkb_state_mod_name_is_active
#undef xkb_state_mod_names_are_active
#undef xkb_state_mod_index_is_active
#undef xkb_state_mod_indices_are_active
#undef xkb_state_key_get_consumed_mods2
#undef xkb_state_key_get_consumed_mods
#undef xkb_state_mod_index_is_consumed2
#undef xkb_state_mod_index_is_consumed
#undef xkb_state_mod_mask_remove_consumed
#undef xkb_state_layout_name_is_active
#undef xkb_state_layout_index_is_active
#undef xkb_state_led_name_is_active
#undef xkb_state_led_index_is_active
#ifdef __cplusplus
extern "C" {
#endif
#define xkb_keysym_get_name xkb_keysym_get_name_dylibloader_wrapper_xkbcommon
#define xkb_keysym_from_name xkb_keysym_from_name_dylibloader_wrapper_xkbcommon
#define xkb_keysym_to_utf8 xkb_keysym_to_utf8_dylibloader_wrapper_xkbcommon
#define xkb_keysym_to_utf32 xkb_keysym_to_utf32_dylibloader_wrapper_xkbcommon
#define xkb_keysym_to_upper xkb_keysym_to_upper_dylibloader_wrapper_xkbcommon
#define xkb_keysym_to_lower xkb_keysym_to_lower_dylibloader_wrapper_xkbcommon
#define xkb_context_new xkb_context_new_dylibloader_wrapper_xkbcommon
#define xkb_context_ref xkb_context_ref_dylibloader_wrapper_xkbcommon
#define xkb_context_unref xkb_context_unref_dylibloader_wrapper_xkbcommon
#define xkb_context_set_user_data xkb_context_set_user_data_dylibloader_wrapper_xkbcommon
#define xkb_context_get_user_data xkb_context_get_user_data_dylibloader_wrapper_xkbcommon
#define xkb_context_include_path_append xkb_context_include_path_append_dylibloader_wrapper_xkbcommon
#define xkb_context_include_path_append_default xkb_context_include_path_append_default_dylibloader_wrapper_xkbcommon
#define xkb_context_include_path_reset_defaults xkb_context_include_path_reset_defaults_dylibloader_wrapper_xkbcommon
#define xkb_context_include_path_clear xkb_context_include_path_clear_dylibloader_wrapper_xkbcommon
#define xkb_context_num_include_paths xkb_context_num_include_paths_dylibloader_wrapper_xkbcommon
#define xkb_context_include_path_get xkb_context_include_path_get_dylibloader_wrapper_xkbcommon
#define xkb_context_set_log_level xkb_context_set_log_level_dylibloader_wrapper_xkbcommon
#define xkb_context_get_log_level xkb_context_get_log_level_dylibloader_wrapper_xkbcommon
#define xkb_context_set_log_verbosity xkb_context_set_log_verbosity_dylibloader_wrapper_xkbcommon
#define xkb_context_get_log_verbosity xkb_context_get_log_verbosity_dylibloader_wrapper_xkbcommon
#define xkb_context_set_log_fn xkb_context_set_log_fn_dylibloader_wrapper_xkbcommon
#define xkb_keymap_new_from_names xkb_keymap_new_from_names_dylibloader_wrapper_xkbcommon
#define xkb_keymap_new_from_file xkb_keymap_new_from_file_dylibloader_wrapper_xkbcommon
#define xkb_keymap_new_from_string xkb_keymap_new_from_string_dylibloader_wrapper_xkbcommon
#define xkb_keymap_new_from_buffer xkb_keymap_new_from_buffer_dylibloader_wrapper_xkbcommon
#define xkb_keymap_ref xkb_keymap_ref_dylibloader_wrapper_xkbcommon
#define xkb_keymap_unref xkb_keymap_unref_dylibloader_wrapper_xkbcommon
#define xkb_keymap_get_as_string xkb_keymap_get_as_string_dylibloader_wrapper_xkbcommon
#define xkb_keymap_min_keycode xkb_keymap_min_keycode_dylibloader_wrapper_xkbcommon
#define xkb_keymap_max_keycode xkb_keymap_max_keycode_dylibloader_wrapper_xkbcommon
#define xkb_keymap_key_for_each xkb_keymap_key_for_each_dylibloader_wrapper_xkbcommon
#define xkb_keymap_key_get_name xkb_keymap_key_get_name_dylibloader_wrapper_xkbcommon
#define xkb_keymap_key_by_name xkb_keymap_key_by_name_dylibloader_wrapper_xkbcommon
#define xkb_keymap_num_mods xkb_keymap_num_mods_dylibloader_wrapper_xkbcommon
#define xkb_keymap_mod_get_name xkb_keymap_mod_get_name_dylibloader_wrapper_xkbcommon
#define xkb_keymap_mod_get_index xkb_keymap_mod_get_index_dylibloader_wrapper_xkbcommon
#define xkb_keymap_num_layouts xkb_keymap_num_layouts_dylibloader_wrapper_xkbcommon
#define xkb_keymap_layout_get_name xkb_keymap_layout_get_name_dylibloader_wrapper_xkbcommon
#define xkb_keymap_layout_get_index xkb_keymap_layout_get_index_dylibloader_wrapper_xkbcommon
#define xkb_keymap_num_leds xkb_keymap_num_leds_dylibloader_wrapper_xkbcommon
#define xkb_keymap_led_get_name xkb_keymap_led_get_name_dylibloader_wrapper_xkbcommon
#define xkb_keymap_led_get_index xkb_keymap_led_get_index_dylibloader_wrapper_xkbcommon
#define xkb_keymap_num_layouts_for_key xkb_keymap_num_layouts_for_key_dylibloader_wrapper_xkbcommon
#define xkb_keymap_num_levels_for_key xkb_keymap_num_levels_for_key_dylibloader_wrapper_xkbcommon
#define xkb_keymap_key_get_syms_by_level xkb_keymap_key_get_syms_by_level_dylibloader_wrapper_xkbcommon
#define xkb_keymap_key_repeats xkb_keymap_key_repeats_dylibloader_wrapper_xkbcommon
#define xkb_state_new xkb_state_new_dylibloader_wrapper_xkbcommon
#define xkb_state_ref xkb_state_ref_dylibloader_wrapper_xkbcommon
#define xkb_state_unref xkb_state_unref_dylibloader_wrapper_xkbcommon
#define xkb_state_get_keymap xkb_state_get_keymap_dylibloader_wrapper_xkbcommon
#define xkb_state_update_key xkb_state_update_key_dylibloader_wrapper_xkbcommon
#define xkb_state_update_mask xkb_state_update_mask_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_syms xkb_state_key_get_syms_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_utf8 xkb_state_key_get_utf8_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_utf32 xkb_state_key_get_utf32_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_one_sym xkb_state_key_get_one_sym_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_layout xkb_state_key_get_layout_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_level xkb_state_key_get_level_dylibloader_wrapper_xkbcommon
#define xkb_state_serialize_mods xkb_state_serialize_mods_dylibloader_wrapper_xkbcommon
#define xkb_state_serialize_layout xkb_state_serialize_layout_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_name_is_active xkb_state_mod_name_is_active_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_names_are_active xkb_state_mod_names_are_active_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_index_is_active xkb_state_mod_index_is_active_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_indices_are_active xkb_state_mod_indices_are_active_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_consumed_mods2 xkb_state_key_get_consumed_mods2_dylibloader_wrapper_xkbcommon
#define xkb_state_key_get_consumed_mods xkb_state_key_get_consumed_mods_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_index_is_consumed2 xkb_state_mod_index_is_consumed2_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_index_is_consumed xkb_state_mod_index_is_consumed_dylibloader_wrapper_xkbcommon
#define xkb_state_mod_mask_remove_consumed xkb_state_mod_mask_remove_consumed_dylibloader_wrapper_xkbcommon
#define xkb_state_layout_name_is_active xkb_state_layout_name_is_active_dylibloader_wrapper_xkbcommon
#define xkb_state_layout_index_is_active xkb_state_layout_index_is_active_dylibloader_wrapper_xkbcommon
#define xkb_state_led_name_is_active xkb_state_led_name_is_active_dylibloader_wrapper_xkbcommon
#define xkb_state_led_index_is_active xkb_state_led_index_is_active_dylibloader_wrapper_xkbcommon
extern int (*xkb_keysym_get_name_dylibloader_wrapper_xkbcommon)(xkb_keysym_t, char *, size_t);
extern xkb_keysym_t (*xkb_keysym_from_name_dylibloader_wrapper_xkbcommon)(const char *, enum xkb_keysym_flags);
extern int (*xkb_keysym_to_utf8_dylibloader_wrapper_xkbcommon)(xkb_keysym_t, char *, size_t);
extern uint32_t (*xkb_keysym_to_utf32_dylibloader_wrapper_xkbcommon)(xkb_keysym_t);
extern xkb_keysym_t (*xkb_keysym_to_upper_dylibloader_wrapper_xkbcommon)(xkb_keysym_t);
extern xkb_keysym_t (*xkb_keysym_to_lower_dylibloader_wrapper_xkbcommon)(xkb_keysym_t);
extern struct xkb_context *(*xkb_context_new_dylibloader_wrapper_xkbcommon)(enum xkb_context_flags);
extern struct xkb_context *(*xkb_context_ref_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern void (*xkb_context_unref_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern void (*xkb_context_set_user_data_dylibloader_wrapper_xkbcommon)(struct xkb_context *, void *);
extern void *(*xkb_context_get_user_data_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern int (*xkb_context_include_path_append_dylibloader_wrapper_xkbcommon)(struct xkb_context *, const char *);
extern int (*xkb_context_include_path_append_default_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern int (*xkb_context_include_path_reset_defaults_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern void (*xkb_context_include_path_clear_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern unsigned int (*xkb_context_num_include_paths_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern const char *(*xkb_context_include_path_get_dylibloader_wrapper_xkbcommon)(struct xkb_context *, unsigned int);
extern void (*xkb_context_set_log_level_dylibloader_wrapper_xkbcommon)(struct xkb_context *, enum xkb_log_level);
extern enum xkb_log_level (*xkb_context_get_log_level_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern void (*xkb_context_set_log_verbosity_dylibloader_wrapper_xkbcommon)(struct xkb_context *, int);
extern int (*xkb_context_get_log_verbosity_dylibloader_wrapper_xkbcommon)(struct xkb_context *);
extern void (*xkb_context_set_log_fn_dylibloader_wrapper_xkbcommon)(struct xkb_context *, void (*)(struct xkb_context *context, enum xkb_log_level level, const char *format, va_list args));
extern struct xkb_keymap *(*xkb_keymap_new_from_names_dylibloader_wrapper_xkbcommon)(struct xkb_context *, const struct xkb_rule_names *, enum xkb_keymap_compile_flags);
extern struct xkb_keymap *(*xkb_keymap_new_from_file_dylibloader_wrapper_xkbcommon)(struct xkb_context *, FILE *, enum xkb_keymap_format, enum xkb_keymap_compile_flags);
extern struct xkb_keymap *(*xkb_keymap_new_from_string_dylibloader_wrapper_xkbcommon)(struct xkb_context *, const char *, enum xkb_keymap_format, enum xkb_keymap_compile_flags);
extern struct xkb_keymap *(*xkb_keymap_new_from_buffer_dylibloader_wrapper_xkbcommon)(struct xkb_context *, const char *, size_t, enum xkb_keymap_format, enum xkb_keymap_compile_flags);
extern struct xkb_keymap *(*xkb_keymap_ref_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern void (*xkb_keymap_unref_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern char *(*xkb_keymap_get_as_string_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, enum xkb_keymap_format);
extern xkb_keycode_t (*xkb_keymap_min_keycode_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern xkb_keycode_t (*xkb_keymap_max_keycode_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern void (*xkb_keymap_key_for_each_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_keymap_key_iter_t, void *);
extern const char *(*xkb_keymap_key_get_name_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_keycode_t);
extern xkb_keycode_t (*xkb_keymap_key_by_name_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, const char *);
extern xkb_mod_index_t (*xkb_keymap_num_mods_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern const char *(*xkb_keymap_mod_get_name_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_mod_index_t);
extern xkb_mod_index_t (*xkb_keymap_mod_get_index_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, const char *);
extern xkb_layout_index_t (*xkb_keymap_num_layouts_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern const char *(*xkb_keymap_layout_get_name_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_layout_index_t);
extern xkb_layout_index_t (*xkb_keymap_layout_get_index_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, const char *);
extern xkb_led_index_t (*xkb_keymap_num_leds_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern const char *(*xkb_keymap_led_get_name_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_led_index_t);
extern xkb_led_index_t (*xkb_keymap_led_get_index_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, const char *);
extern xkb_layout_index_t (*xkb_keymap_num_layouts_for_key_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_keycode_t);
extern xkb_level_index_t (*xkb_keymap_num_levels_for_key_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_keycode_t, xkb_layout_index_t);
extern int (*xkb_keymap_key_get_syms_by_level_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_keycode_t, xkb_layout_index_t, xkb_level_index_t, const xkb_keysym_t **);
extern int (*xkb_keymap_key_repeats_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *, xkb_keycode_t);
extern struct xkb_state *(*xkb_state_new_dylibloader_wrapper_xkbcommon)(struct xkb_keymap *);
extern struct xkb_state *(*xkb_state_ref_dylibloader_wrapper_xkbcommon)(struct xkb_state *);
extern void (*xkb_state_unref_dylibloader_wrapper_xkbcommon)(struct xkb_state *);
extern struct xkb_keymap *(*xkb_state_get_keymap_dylibloader_wrapper_xkbcommon)(struct xkb_state *);
extern enum xkb_state_component (*xkb_state_update_key_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, enum xkb_key_direction);
extern enum xkb_state_component (*xkb_state_update_mask_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_mod_mask_t, xkb_mod_mask_t, xkb_mod_mask_t, xkb_layout_index_t, xkb_layout_index_t, xkb_layout_index_t);
extern int (*xkb_state_key_get_syms_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, const xkb_keysym_t **);
extern int (*xkb_state_key_get_utf8_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, char *, size_t);
extern uint32_t (*xkb_state_key_get_utf32_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t);
extern xkb_keysym_t (*xkb_state_key_get_one_sym_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t);
extern xkb_layout_index_t (*xkb_state_key_get_layout_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t);
extern xkb_level_index_t (*xkb_state_key_get_level_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, xkb_layout_index_t);
extern xkb_mod_mask_t (*xkb_state_serialize_mods_dylibloader_wrapper_xkbcommon)(struct xkb_state *, enum xkb_state_component);
extern xkb_layout_index_t (*xkb_state_serialize_layout_dylibloader_wrapper_xkbcommon)(struct xkb_state *, enum xkb_state_component);
extern int (*xkb_state_mod_name_is_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, const char *, enum xkb_state_component);
extern int (*xkb_state_mod_names_are_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, enum xkb_state_component, enum xkb_state_match, ...);
extern int (*xkb_state_mod_index_is_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_mod_index_t, enum xkb_state_component);
extern int (*xkb_state_mod_indices_are_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, enum xkb_state_component, enum xkb_state_match, ...);
extern xkb_mod_mask_t (*xkb_state_key_get_consumed_mods2_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, enum xkb_consumed_mode);
extern xkb_mod_mask_t (*xkb_state_key_get_consumed_mods_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t);
extern int (*xkb_state_mod_index_is_consumed2_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, xkb_mod_index_t, enum xkb_consumed_mode);
extern int (*xkb_state_mod_index_is_consumed_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, xkb_mod_index_t);
extern xkb_mod_mask_t (*xkb_state_mod_mask_remove_consumed_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_keycode_t, xkb_mod_mask_t);
extern int (*xkb_state_layout_name_is_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, const char *, enum xkb_state_component);
extern int (*xkb_state_layout_index_is_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_layout_index_t, enum xkb_state_component);
extern int (*xkb_state_led_name_is_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, const char *);
extern int (*xkb_state_led_index_is_active_dylibloader_wrapper_xkbcommon)(struct xkb_state *, xkb_led_index_t);
int initialize_xkbcommon(int verbose);
#ifdef __cplusplus
}
#endif
#endif
