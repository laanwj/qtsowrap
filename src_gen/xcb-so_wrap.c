// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper (patched) for details
// generated by scripts/generate-wrapper.py 0.5
// flags: scripts/generate-wrapper.py --include include/xcb/xcb.h --sys-include <xcb/xcb.h> --soname libxcb.so.1 --init-name xcb --output-header include_gen/xcb-so_wrap.h --output-implementation src_gen/xcb-so_wrap.c --ignore-other --include-dir include
//
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
#include <dlfcn.h>
#include <stdio.h>
int (*xcb_flush_dylibloader_wrapper_xcb)(xcb_connection_t *);
uint32_t (*xcb_get_maximum_request_length_dylibloader_wrapper_xcb)(xcb_connection_t *);
void (*xcb_prefetch_maximum_request_length_dylibloader_wrapper_xcb)(xcb_connection_t *);
xcb_generic_event_t *(*xcb_wait_for_event_dylibloader_wrapper_xcb)(xcb_connection_t *);
xcb_generic_event_t *(*xcb_poll_for_event_dylibloader_wrapper_xcb)(xcb_connection_t *);
xcb_generic_event_t *(*xcb_poll_for_queued_event_dylibloader_wrapper_xcb)(xcb_connection_t *);
xcb_generic_event_t *(*xcb_poll_for_special_event_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_special_event_t *);
xcb_generic_event_t *(*xcb_wait_for_special_event_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_special_event_t *);
xcb_special_event_t *(*xcb_register_for_special_xge_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_extension_t *, uint32_t, uint32_t *);
void (*xcb_unregister_for_special_event_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_special_event_t *);
xcb_generic_error_t *(*xcb_request_check_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_void_cookie_t);
void (*xcb_discard_reply_dylibloader_wrapper_xcb)(xcb_connection_t *, unsigned int);
void (*xcb_discard_reply64_dylibloader_wrapper_xcb)(xcb_connection_t *, uint64_t);
const struct xcb_query_extension_reply_t *(*xcb_get_extension_data_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_extension_t *);
void (*xcb_prefetch_extension_data_dylibloader_wrapper_xcb)(xcb_connection_t *, xcb_extension_t *);
const struct xcb_setup_t *(*xcb_get_setup_dylibloader_wrapper_xcb)(xcb_connection_t *);
int (*xcb_get_file_descriptor_dylibloader_wrapper_xcb)(xcb_connection_t *);
int (*xcb_connection_has_error_dylibloader_wrapper_xcb)(xcb_connection_t *);
xcb_connection_t *(*xcb_connect_to_fd_dylibloader_wrapper_xcb)(int, xcb_auth_info_t *);
void (*xcb_disconnect_dylibloader_wrapper_xcb)(xcb_connection_t *);
int (*xcb_parse_display_dylibloader_wrapper_xcb)(const char *, char **, int *, int *);
xcb_connection_t *(*xcb_connect_dylibloader_wrapper_xcb)(const char *, int *);
xcb_connection_t *(*xcb_connect_to_display_with_auth_info_dylibloader_wrapper_xcb)(const char *, xcb_auth_info_t *, int *);
uint32_t (*xcb_generate_id_dylibloader_wrapper_xcb)(xcb_connection_t *);
uint64_t (*xcb_total_read_dylibloader_wrapper_xcb)(xcb_connection_t *);
uint64_t (*xcb_total_written_dylibloader_wrapper_xcb)(xcb_connection_t *);
int initialize_xcb(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libxcb.so.1", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
// xcb_flush
  *(void **) (&xcb_flush_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_flush");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_get_maximum_request_length
  *(void **) (&xcb_get_maximum_request_length_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_get_maximum_request_length");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_prefetch_maximum_request_length
  *(void **) (&xcb_prefetch_maximum_request_length_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_prefetch_maximum_request_length");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_wait_for_event
  *(void **) (&xcb_wait_for_event_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_wait_for_event");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_poll_for_event
  *(void **) (&xcb_poll_for_event_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_poll_for_event");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_poll_for_queued_event
  *(void **) (&xcb_poll_for_queued_event_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_poll_for_queued_event");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_poll_for_special_event
  *(void **) (&xcb_poll_for_special_event_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_poll_for_special_event");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_wait_for_special_event
  *(void **) (&xcb_wait_for_special_event_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_wait_for_special_event");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_register_for_special_xge
  *(void **) (&xcb_register_for_special_xge_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_register_for_special_xge");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_unregister_for_special_event
  *(void **) (&xcb_unregister_for_special_event_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_unregister_for_special_event");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_request_check
  *(void **) (&xcb_request_check_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_request_check");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_discard_reply
  *(void **) (&xcb_discard_reply_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_discard_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_discard_reply64
  *(void **) (&xcb_discard_reply64_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_discard_reply64");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_get_extension_data
  *(void **) (&xcb_get_extension_data_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_get_extension_data");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_prefetch_extension_data
  *(void **) (&xcb_prefetch_extension_data_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_prefetch_extension_data");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_get_setup
  *(void **) (&xcb_get_setup_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_get_setup");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_get_file_descriptor
  *(void **) (&xcb_get_file_descriptor_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_get_file_descriptor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_connection_has_error
  *(void **) (&xcb_connection_has_error_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_connection_has_error");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_connect_to_fd
  *(void **) (&xcb_connect_to_fd_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_connect_to_fd");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_disconnect
  *(void **) (&xcb_disconnect_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_disconnect");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_parse_display
  *(void **) (&xcb_parse_display_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_parse_display");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_connect
  *(void **) (&xcb_connect_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_connect");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_connect_to_display_with_auth_info
  *(void **) (&xcb_connect_to_display_with_auth_info_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_connect_to_display_with_auth_info");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_generate_id
  *(void **) (&xcb_generate_id_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_generate_id");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_total_read
  *(void **) (&xcb_total_read_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_total_read");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_total_written
  *(void **) (&xcb_total_written_dylibloader_wrapper_xcb) = dlsym(handle, "xcb_total_written");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
return 0;
}
