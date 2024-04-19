#ifndef DYLIBLOAD_WRAPPER_XCB
#define DYLIBLOAD_WRAPPER_XCB
/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xcb/xcb.h --sys-include <xcb/xcb.h> --soname libxcb.so.1 --init-name xcb --output-header include_gen/xcb-so_wrap.h --output-implementation src_gen/xcb-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xcb_flush xcb_flush_dylibloader_orig_xcb
#define xcb_get_maximum_request_length xcb_get_maximum_request_length_dylibloader_orig_xcb
#define xcb_prefetch_maximum_request_length xcb_prefetch_maximum_request_length_dylibloader_orig_xcb
#define xcb_wait_for_event xcb_wait_for_event_dylibloader_orig_xcb
#define xcb_poll_for_event xcb_poll_for_event_dylibloader_orig_xcb
#define xcb_poll_for_queued_event xcb_poll_for_queued_event_dylibloader_orig_xcb
#define xcb_poll_for_special_event xcb_poll_for_special_event_dylibloader_orig_xcb
#define xcb_wait_for_special_event xcb_wait_for_special_event_dylibloader_orig_xcb
#define xcb_register_for_special_xge xcb_register_for_special_xge_dylibloader_orig_xcb
#define xcb_unregister_for_special_event xcb_unregister_for_special_event_dylibloader_orig_xcb
#define xcb_request_check xcb_request_check_dylibloader_orig_xcb
#define xcb_discard_reply xcb_discard_reply_dylibloader_orig_xcb
#define xcb_discard_reply64 xcb_discard_reply64_dylibloader_orig_xcb
#define xcb_get_extension_data xcb_get_extension_data_dylibloader_orig_xcb
#define xcb_prefetch_extension_data xcb_prefetch_extension_data_dylibloader_orig_xcb
#define xcb_get_setup xcb_get_setup_dylibloader_orig_xcb
#define xcb_get_file_descriptor xcb_get_file_descriptor_dylibloader_orig_xcb
#define xcb_connection_has_error xcb_connection_has_error_dylibloader_orig_xcb
#define xcb_connect_to_fd xcb_connect_to_fd_dylibloader_orig_xcb
#define xcb_disconnect xcb_disconnect_dylibloader_orig_xcb
#define xcb_parse_display xcb_parse_display_dylibloader_orig_xcb
#define xcb_connect xcb_connect_dylibloader_orig_xcb
#define xcb_connect_to_display_with_auth_info xcb_connect_to_display_with_auth_info_dylibloader_orig_xcb
#define xcb_generate_id xcb_generate_id_dylibloader_orig_xcb
#define xcb_total_read xcb_total_read_dylibloader_orig_xcb
#define xcb_total_written xcb_total_written_dylibloader_orig_xcb
#include <xcb/xcb.h>
#undef xcb_flush
#undef xcb_get_maximum_request_length
#undef xcb_prefetch_maximum_request_length
#undef xcb_wait_for_event
#undef xcb_poll_for_event
#undef xcb_poll_for_queued_event
#undef xcb_poll_for_special_event
#undef xcb_wait_for_special_event
#undef xcb_register_for_special_xge
#undef xcb_unregister_for_special_event
#undef xcb_request_check
#undef xcb_discard_reply
#undef xcb_discard_reply64
#undef xcb_get_extension_data
#undef xcb_prefetch_extension_data
#undef xcb_get_setup
#undef xcb_get_file_descriptor
#undef xcb_connection_has_error
#undef xcb_connect_to_fd
#undef xcb_disconnect
#undef xcb_parse_display
#undef xcb_connect
#undef xcb_connect_to_display_with_auth_info
#undef xcb_generate_id
#undef xcb_total_read
#undef xcb_total_written
#ifdef __cplusplus
extern "C" {
#endif
#define xcb_flush xcb_flush_dylibloader_wrapper_xcb
#define xcb_get_maximum_request_length xcb_get_maximum_request_length_dylibloader_wrapper_xcb
#define xcb_prefetch_maximum_request_length xcb_prefetch_maximum_request_length_dylibloader_wrapper_xcb
#define xcb_wait_for_event xcb_wait_for_event_dylibloader_wrapper_xcb
#define xcb_poll_for_event xcb_poll_for_event_dylibloader_wrapper_xcb
#define xcb_poll_for_queued_event xcb_poll_for_queued_event_dylibloader_wrapper_xcb
#define xcb_poll_for_special_event xcb_poll_for_special_event_dylibloader_wrapper_xcb
#define xcb_wait_for_special_event xcb_wait_for_special_event_dylibloader_wrapper_xcb
#define xcb_register_for_special_xge xcb_register_for_special_xge_dylibloader_wrapper_xcb
#define xcb_unregister_for_special_event xcb_unregister_for_special_event_dylibloader_wrapper_xcb
#define xcb_request_check xcb_request_check_dylibloader_wrapper_xcb
#define xcb_discard_reply xcb_discard_reply_dylibloader_wrapper_xcb
#define xcb_discard_reply64 xcb_discard_reply64_dylibloader_wrapper_xcb
#define xcb_get_extension_data xcb_get_extension_data_dylibloader_wrapper_xcb
#define xcb_prefetch_extension_data xcb_prefetch_extension_data_dylibloader_wrapper_xcb
#define xcb_get_setup xcb_get_setup_dylibloader_wrapper_xcb
#define xcb_get_file_descriptor xcb_get_file_descriptor_dylibloader_wrapper_xcb
#define xcb_connection_has_error xcb_connection_has_error_dylibloader_wrapper_xcb
#define xcb_connect_to_fd xcb_connect_to_fd_dylibloader_wrapper_xcb
#define xcb_disconnect xcb_disconnect_dylibloader_wrapper_xcb
#define xcb_parse_display xcb_parse_display_dylibloader_wrapper_xcb
#define xcb_connect xcb_connect_dylibloader_wrapper_xcb
#define xcb_connect_to_display_with_auth_info xcb_connect_to_display_with_auth_info_dylibloader_wrapper_xcb
#define xcb_generate_id xcb_generate_id_dylibloader_wrapper_xcb
#define xcb_total_read xcb_total_read_dylibloader_wrapper_xcb
#define xcb_total_written xcb_total_written_dylibloader_wrapper_xcb
extern int (*xcb_flush_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern uint32_t (*xcb_get_maximum_request_length_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern void (*xcb_prefetch_maximum_request_length_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern xcb_generic_event_t *(*xcb_wait_for_event_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern xcb_generic_event_t *(*xcb_poll_for_event_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern xcb_generic_event_t *(*xcb_poll_for_queued_event_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern xcb_generic_event_t *(*xcb_poll_for_special_event_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_special_event_t *);
extern xcb_generic_event_t *(*xcb_wait_for_special_event_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_special_event_t *);
extern xcb_special_event_t *(*xcb_register_for_special_xge_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_extension_t *, uint32_t, uint32_t *);
extern void (*xcb_unregister_for_special_event_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_special_event_t *);
extern xcb_generic_error_t *(*xcb_request_check_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_void_cookie_t);
extern void (*xcb_discard_reply_dylibloader_wrapper_xcb)(xcb_connection_t *, unsigned int);
extern void (*xcb_discard_reply64_dylibloader_wrapper_xcb)(xcb_connection_t *, uint64_t);
extern const struct xcb_query_extension_reply_t *(*xcb_get_extension_data_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_extension_t *);
extern void (*xcb_prefetch_extension_data_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_extension_t *);
extern const struct xcb_setup_t *(*xcb_get_setup_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern int (*xcb_get_file_descriptor_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern int (*xcb_connection_has_error_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern xcb_connection_t *(*xcb_connect_to_fd_dylibloader_wrapper_xcb)(int, xcb_auth_info_t *);
extern void (*xcb_disconnect_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern int (*xcb_parse_display_dylibloader_wrapper_xcb)(const char *, char **, int *, int *);
extern xcb_connection_t *(*xcb_connect_dylibloader_wrapper_xcb)(const char *, int *);
extern xcb_connection_t *(*xcb_connect_to_display_with_auth_info_dylibloader_wrapper_xcb)(const char *, xcb_auth_info_t *, int *);
extern uint32_t (*xcb_generate_id_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern uint64_t (*xcb_total_read_dylibloader_wrapper_xcb)(xcb_connection_t *);
extern uint64_t (*xcb_total_written_dylibloader_wrapper_xcb)(xcb_connection_t *);
int initialize_xcb(int verbose);
#ifdef __cplusplus
}
#endif
#endif
