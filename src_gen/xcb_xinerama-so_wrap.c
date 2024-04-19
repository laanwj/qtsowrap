// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper (patched) for details
// generated by scripts/generate-wrapper.py 0.5
// flags: scripts/generate-wrapper.py --include include/xcb/xinerama.h --sys-include xcb-so_wrap.h --sys-include <xcb/xinerama.h> --soname libxcb-xinerama.so.0 --init-name xcb_xinerama --output-header include_gen/xcb_xinerama-so_wrap.h --output-implementation src_gen/xcb_xinerama-so_wrap.c --ignore-other --include-dir include
//
#include <stdint.h>

#define xcb_xinerama_screen_info_next xcb_xinerama_screen_info_next_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_screen_info_end xcb_xinerama_screen_info_end_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_version xcb_xinerama_query_version_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_version_unchecked xcb_xinerama_query_version_unchecked_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_version_reply xcb_xinerama_query_version_reply_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_state xcb_xinerama_get_state_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_state_unchecked xcb_xinerama_get_state_unchecked_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_state_reply xcb_xinerama_get_state_reply_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_screen_count xcb_xinerama_get_screen_count_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_screen_count_unchecked xcb_xinerama_get_screen_count_unchecked_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_screen_count_reply xcb_xinerama_get_screen_count_reply_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_screen_size xcb_xinerama_get_screen_size_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_screen_size_unchecked xcb_xinerama_get_screen_size_unchecked_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_get_screen_size_reply xcb_xinerama_get_screen_size_reply_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_is_active xcb_xinerama_is_active_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_is_active_unchecked xcb_xinerama_is_active_unchecked_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_is_active_reply xcb_xinerama_is_active_reply_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens_sizeof xcb_xinerama_query_screens_sizeof_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens xcb_xinerama_query_screens_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens_unchecked xcb_xinerama_query_screens_unchecked_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens_screen_info xcb_xinerama_query_screens_screen_info_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens_screen_info_length xcb_xinerama_query_screens_screen_info_length_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens_screen_info_iterator xcb_xinerama_query_screens_screen_info_iterator_dylibloader_orig_xcb_xinerama
#define xcb_xinerama_query_screens_reply xcb_xinerama_query_screens_reply_dylibloader_orig_xcb_xinerama
#include "xcb-so_wrap.h"
#include <xcb/xinerama.h>
#undef xcb_xinerama_screen_info_next
#undef xcb_xinerama_screen_info_end
#undef xcb_xinerama_query_version
#undef xcb_xinerama_query_version_unchecked
#undef xcb_xinerama_query_version_reply
#undef xcb_xinerama_get_state
#undef xcb_xinerama_get_state_unchecked
#undef xcb_xinerama_get_state_reply
#undef xcb_xinerama_get_screen_count
#undef xcb_xinerama_get_screen_count_unchecked
#undef xcb_xinerama_get_screen_count_reply
#undef xcb_xinerama_get_screen_size
#undef xcb_xinerama_get_screen_size_unchecked
#undef xcb_xinerama_get_screen_size_reply
#undef xcb_xinerama_is_active
#undef xcb_xinerama_is_active_unchecked
#undef xcb_xinerama_is_active_reply
#undef xcb_xinerama_query_screens_sizeof
#undef xcb_xinerama_query_screens
#undef xcb_xinerama_query_screens_unchecked
#undef xcb_xinerama_query_screens_screen_info
#undef xcb_xinerama_query_screens_screen_info_length
#undef xcb_xinerama_query_screens_screen_info_iterator
#undef xcb_xinerama_query_screens_reply
#include <dlfcn.h>
#include <stdio.h>
void (*xcb_xinerama_screen_info_next_dylibloader_wrapper_xcb_xinerama)(xcb_xinerama_screen_info_iterator_t *);
xcb_generic_iterator_t (*xcb_xinerama_screen_info_end_dylibloader_wrapper_xcb_xinerama)(xcb_xinerama_screen_info_iterator_t);
xcb_xinerama_query_version_cookie_t (*xcb_xinerama_query_version_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, uint8_t, uint8_t);
xcb_xinerama_query_version_cookie_t (*xcb_xinerama_query_version_unchecked_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, uint8_t, uint8_t);
xcb_xinerama_query_version_reply_t *(*xcb_xinerama_query_version_reply_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_xinerama_query_version_cookie_t, xcb_generic_error_t **);
xcb_xinerama_get_state_cookie_t (*xcb_xinerama_get_state_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_window_t);
xcb_xinerama_get_state_cookie_t (*xcb_xinerama_get_state_unchecked_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_window_t);
xcb_xinerama_get_state_reply_t *(*xcb_xinerama_get_state_reply_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_xinerama_get_state_cookie_t, xcb_generic_error_t **);
xcb_xinerama_get_screen_count_cookie_t (*xcb_xinerama_get_screen_count_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_window_t);
xcb_xinerama_get_screen_count_cookie_t (*xcb_xinerama_get_screen_count_unchecked_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_window_t);
xcb_xinerama_get_screen_count_reply_t *(*xcb_xinerama_get_screen_count_reply_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_xinerama_get_screen_count_cookie_t, xcb_generic_error_t **);
xcb_xinerama_get_screen_size_cookie_t (*xcb_xinerama_get_screen_size_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_window_t, uint32_t);
xcb_xinerama_get_screen_size_cookie_t (*xcb_xinerama_get_screen_size_unchecked_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_window_t, uint32_t);
xcb_xinerama_get_screen_size_reply_t *(*xcb_xinerama_get_screen_size_reply_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_xinerama_get_screen_size_cookie_t, xcb_generic_error_t **);
xcb_xinerama_is_active_cookie_t (*xcb_xinerama_is_active_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *);
xcb_xinerama_is_active_cookie_t (*xcb_xinerama_is_active_unchecked_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *);
xcb_xinerama_is_active_reply_t *(*xcb_xinerama_is_active_reply_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_xinerama_is_active_cookie_t, xcb_generic_error_t **);
int (*xcb_xinerama_query_screens_sizeof_dylibloader_wrapper_xcb_xinerama)(const void *);
xcb_xinerama_query_screens_cookie_t (*xcb_xinerama_query_screens_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *);
xcb_xinerama_query_screens_cookie_t (*xcb_xinerama_query_screens_unchecked_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *);
xcb_xinerama_screen_info_t *(*xcb_xinerama_query_screens_screen_info_dylibloader_wrapper_xcb_xinerama)(const xcb_xinerama_query_screens_reply_t *);
int (*xcb_xinerama_query_screens_screen_info_length_dylibloader_wrapper_xcb_xinerama)(const xcb_xinerama_query_screens_reply_t *);
xcb_xinerama_screen_info_iterator_t (*xcb_xinerama_query_screens_screen_info_iterator_dylibloader_wrapper_xcb_xinerama)(const xcb_xinerama_query_screens_reply_t *);
xcb_xinerama_query_screens_reply_t *(*xcb_xinerama_query_screens_reply_dylibloader_wrapper_xcb_xinerama)(xcb_connection_t *, xcb_xinerama_query_screens_cookie_t, xcb_generic_error_t **);
int initialize_xcb_xinerama(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libxcb-xinerama.so.0", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
// xcb_xinerama_screen_info_next
  *(void **) (&xcb_xinerama_screen_info_next_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_screen_info_next");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_screen_info_end
  *(void **) (&xcb_xinerama_screen_info_end_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_screen_info_end");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_version
  *(void **) (&xcb_xinerama_query_version_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_version");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_version_unchecked
  *(void **) (&xcb_xinerama_query_version_unchecked_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_version_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_version_reply
  *(void **) (&xcb_xinerama_query_version_reply_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_version_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_state
  *(void **) (&xcb_xinerama_get_state_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_state");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_state_unchecked
  *(void **) (&xcb_xinerama_get_state_unchecked_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_state_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_state_reply
  *(void **) (&xcb_xinerama_get_state_reply_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_state_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_screen_count
  *(void **) (&xcb_xinerama_get_screen_count_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_screen_count");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_screen_count_unchecked
  *(void **) (&xcb_xinerama_get_screen_count_unchecked_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_screen_count_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_screen_count_reply
  *(void **) (&xcb_xinerama_get_screen_count_reply_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_screen_count_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_screen_size
  *(void **) (&xcb_xinerama_get_screen_size_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_screen_size");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_screen_size_unchecked
  *(void **) (&xcb_xinerama_get_screen_size_unchecked_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_screen_size_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_get_screen_size_reply
  *(void **) (&xcb_xinerama_get_screen_size_reply_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_get_screen_size_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_is_active
  *(void **) (&xcb_xinerama_is_active_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_is_active");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_is_active_unchecked
  *(void **) (&xcb_xinerama_is_active_unchecked_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_is_active_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_is_active_reply
  *(void **) (&xcb_xinerama_is_active_reply_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_is_active_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens_sizeof
  *(void **) (&xcb_xinerama_query_screens_sizeof_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens_sizeof");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens
  *(void **) (&xcb_xinerama_query_screens_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens_unchecked
  *(void **) (&xcb_xinerama_query_screens_unchecked_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens_screen_info
  *(void **) (&xcb_xinerama_query_screens_screen_info_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens_screen_info");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens_screen_info_length
  *(void **) (&xcb_xinerama_query_screens_screen_info_length_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens_screen_info_length");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens_screen_info_iterator
  *(void **) (&xcb_xinerama_query_screens_screen_info_iterator_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens_screen_info_iterator");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
// xcb_xinerama_query_screens_reply
  *(void **) (&xcb_xinerama_query_screens_reply_dylibloader_wrapper_xcb_xinerama) = dlsym(handle, "xcb_xinerama_query_screens_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
return 0;
}
