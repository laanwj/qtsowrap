/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xcb/shape.h --sys-include xcb-so_wrap.h --sys-include <xcb/shape.h> --soname libxcb-shape.so.0 --init-name xcb_shape --output-header include_gen/xcb_shape-so_wrap.h --output-implementation src_gen/xcb_shape-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xcb_shape_id xcb_shape_id_dylibloader_orig_xcb_shape
#define xcb_shape_op_next xcb_shape_op_next_dylibloader_orig_xcb_shape
#define xcb_shape_op_end xcb_shape_op_end_dylibloader_orig_xcb_shape
#define xcb_shape_kind_next xcb_shape_kind_next_dylibloader_orig_xcb_shape
#define xcb_shape_kind_end xcb_shape_kind_end_dylibloader_orig_xcb_shape
#define xcb_shape_query_version xcb_shape_query_version_dylibloader_orig_xcb_shape
#define xcb_shape_query_version_unchecked xcb_shape_query_version_unchecked_dylibloader_orig_xcb_shape
#define xcb_shape_query_version_reply xcb_shape_query_version_reply_dylibloader_orig_xcb_shape
#define xcb_shape_rectangles_sizeof xcb_shape_rectangles_sizeof_dylibloader_orig_xcb_shape
#define xcb_shape_rectangles_checked xcb_shape_rectangles_checked_dylibloader_orig_xcb_shape
#define xcb_shape_rectangles xcb_shape_rectangles_dylibloader_orig_xcb_shape
#define xcb_shape_rectangles_rectangles xcb_shape_rectangles_rectangles_dylibloader_orig_xcb_shape
#define xcb_shape_rectangles_rectangles_length xcb_shape_rectangles_rectangles_length_dylibloader_orig_xcb_shape
#define xcb_shape_rectangles_rectangles_iterator xcb_shape_rectangles_rectangles_iterator_dylibloader_orig_xcb_shape
#define xcb_shape_mask_checked xcb_shape_mask_checked_dylibloader_orig_xcb_shape
#define xcb_shape_mask xcb_shape_mask_dylibloader_orig_xcb_shape
#define xcb_shape_combine_checked xcb_shape_combine_checked_dylibloader_orig_xcb_shape
#define xcb_shape_combine xcb_shape_combine_dylibloader_orig_xcb_shape
#define xcb_shape_offset_checked xcb_shape_offset_checked_dylibloader_orig_xcb_shape
#define xcb_shape_offset xcb_shape_offset_dylibloader_orig_xcb_shape
#define xcb_shape_query_extents xcb_shape_query_extents_dylibloader_orig_xcb_shape
#define xcb_shape_query_extents_unchecked xcb_shape_query_extents_unchecked_dylibloader_orig_xcb_shape
#define xcb_shape_query_extents_reply xcb_shape_query_extents_reply_dylibloader_orig_xcb_shape
#define xcb_shape_select_input_checked xcb_shape_select_input_checked_dylibloader_orig_xcb_shape
#define xcb_shape_select_input xcb_shape_select_input_dylibloader_orig_xcb_shape
#define xcb_shape_input_selected xcb_shape_input_selected_dylibloader_orig_xcb_shape
#define xcb_shape_input_selected_unchecked xcb_shape_input_selected_unchecked_dylibloader_orig_xcb_shape
#define xcb_shape_input_selected_reply xcb_shape_input_selected_reply_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles_sizeof xcb_shape_get_rectangles_sizeof_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles xcb_shape_get_rectangles_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles_unchecked xcb_shape_get_rectangles_unchecked_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles_rectangles xcb_shape_get_rectangles_rectangles_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles_rectangles_length xcb_shape_get_rectangles_rectangles_length_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles_rectangles_iterator xcb_shape_get_rectangles_rectangles_iterator_dylibloader_orig_xcb_shape
#define xcb_shape_get_rectangles_reply xcb_shape_get_rectangles_reply_dylibloader_orig_xcb_shape
#include "xcb-so_wrap.h"
#include <xcb/shape.h>
#undef xcb_shape_id
#undef xcb_shape_op_next
#undef xcb_shape_op_end
#undef xcb_shape_kind_next
#undef xcb_shape_kind_end
#undef xcb_shape_query_version
#undef xcb_shape_query_version_unchecked
#undef xcb_shape_query_version_reply
#undef xcb_shape_rectangles_sizeof
#undef xcb_shape_rectangles_checked
#undef xcb_shape_rectangles
#undef xcb_shape_rectangles_rectangles
#undef xcb_shape_rectangles_rectangles_length
#undef xcb_shape_rectangles_rectangles_iterator
#undef xcb_shape_mask_checked
#undef xcb_shape_mask
#undef xcb_shape_combine_checked
#undef xcb_shape_combine
#undef xcb_shape_offset_checked
#undef xcb_shape_offset
#undef xcb_shape_query_extents
#undef xcb_shape_query_extents_unchecked
#undef xcb_shape_query_extents_reply
#undef xcb_shape_select_input_checked
#undef xcb_shape_select_input
#undef xcb_shape_input_selected
#undef xcb_shape_input_selected_unchecked
#undef xcb_shape_input_selected_reply
#undef xcb_shape_get_rectangles_sizeof
#undef xcb_shape_get_rectangles
#undef xcb_shape_get_rectangles_unchecked
#undef xcb_shape_get_rectangles_rectangles
#undef xcb_shape_get_rectangles_rectangles_length
#undef xcb_shape_get_rectangles_rectangles_iterator
#undef xcb_shape_get_rectangles_reply
#include <dlfcn.h>
#include <stdio.h>
xcb_extension_t *xcb_shape_id_dylibloader_wrapper_xcb_shape;
void (*xcb_shape_op_next_dylibloader_wrapper_xcb_shape)(xcb_shape_op_iterator_t *);
xcb_generic_iterator_t (*xcb_shape_op_end_dylibloader_wrapper_xcb_shape)(xcb_shape_op_iterator_t);
void (*xcb_shape_kind_next_dylibloader_wrapper_xcb_shape)(xcb_shape_kind_iterator_t *);
xcb_generic_iterator_t (*xcb_shape_kind_end_dylibloader_wrapper_xcb_shape)(xcb_shape_kind_iterator_t);
xcb_shape_query_version_cookie_t (*xcb_shape_query_version_dylibloader_wrapper_xcb_shape)(xcb_connection_t *);
xcb_shape_query_version_cookie_t (*xcb_shape_query_version_unchecked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *);
xcb_shape_query_version_reply_t *(*xcb_shape_query_version_reply_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_query_version_cookie_t, xcb_generic_error_t **);
int (*xcb_shape_rectangles_sizeof_dylibloader_wrapper_xcb_shape)(const void *, uint32_t);
xcb_void_cookie_t (*xcb_shape_rectangles_checked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_op_t, xcb_shape_kind_t, uint8_t, xcb_window_t, int16_t, int16_t, uint32_t, const xcb_rectangle_t *);
xcb_void_cookie_t (*xcb_shape_rectangles_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_op_t, xcb_shape_kind_t, uint8_t, xcb_window_t, int16_t, int16_t, uint32_t, const xcb_rectangle_t *);
xcb_rectangle_t *(*xcb_shape_rectangles_rectangles_dylibloader_wrapper_xcb_shape)(const xcb_shape_rectangles_request_t *);
int (*xcb_shape_rectangles_rectangles_length_dylibloader_wrapper_xcb_shape)(const xcb_shape_rectangles_request_t *);
xcb_rectangle_iterator_t (*xcb_shape_rectangles_rectangles_iterator_dylibloader_wrapper_xcb_shape)(const xcb_shape_rectangles_request_t *);
xcb_void_cookie_t (*xcb_shape_mask_checked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_op_t, xcb_shape_kind_t, xcb_window_t, int16_t, int16_t, xcb_pixmap_t);
xcb_void_cookie_t (*xcb_shape_mask_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_op_t, xcb_shape_kind_t, xcb_window_t, int16_t, int16_t, xcb_pixmap_t);
xcb_void_cookie_t (*xcb_shape_combine_checked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_op_t, xcb_shape_kind_t, xcb_shape_kind_t, xcb_window_t, int16_t, int16_t, xcb_window_t);
xcb_void_cookie_t (*xcb_shape_combine_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_op_t, xcb_shape_kind_t, xcb_shape_kind_t, xcb_window_t, int16_t, int16_t, xcb_window_t);
xcb_void_cookie_t (*xcb_shape_offset_checked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_kind_t, xcb_window_t, int16_t, int16_t);
xcb_void_cookie_t (*xcb_shape_offset_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_kind_t, xcb_window_t, int16_t, int16_t);
xcb_shape_query_extents_cookie_t (*xcb_shape_query_extents_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t);
xcb_shape_query_extents_cookie_t (*xcb_shape_query_extents_unchecked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t);
xcb_shape_query_extents_reply_t *(*xcb_shape_query_extents_reply_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_query_extents_cookie_t, xcb_generic_error_t **);
xcb_void_cookie_t (*xcb_shape_select_input_checked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t, uint8_t);
xcb_void_cookie_t (*xcb_shape_select_input_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t, uint8_t);
xcb_shape_input_selected_cookie_t (*xcb_shape_input_selected_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t);
xcb_shape_input_selected_cookie_t (*xcb_shape_input_selected_unchecked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t);
xcb_shape_input_selected_reply_t *(*xcb_shape_input_selected_reply_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_input_selected_cookie_t, xcb_generic_error_t **);
int (*xcb_shape_get_rectangles_sizeof_dylibloader_wrapper_xcb_shape)(const void *);
xcb_shape_get_rectangles_cookie_t (*xcb_shape_get_rectangles_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t, xcb_shape_kind_t);
xcb_shape_get_rectangles_cookie_t (*xcb_shape_get_rectangles_unchecked_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_window_t, xcb_shape_kind_t);
xcb_rectangle_t *(*xcb_shape_get_rectangles_rectangles_dylibloader_wrapper_xcb_shape)(const xcb_shape_get_rectangles_reply_t *);
int (*xcb_shape_get_rectangles_rectangles_length_dylibloader_wrapper_xcb_shape)(const xcb_shape_get_rectangles_reply_t *);
xcb_rectangle_iterator_t (*xcb_shape_get_rectangles_rectangles_iterator_dylibloader_wrapper_xcb_shape)(const xcb_shape_get_rectangles_reply_t *);
xcb_shape_get_rectangles_reply_t *(*xcb_shape_get_rectangles_reply_dylibloader_wrapper_xcb_shape)(xcb_connection_t *, xcb_shape_get_rectangles_cookie_t, xcb_generic_error_t **);
int initialize_xcb_shape(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libxcb-shape.so.0", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
/* xcb_shape_id */
  *(void **) (&xcb_shape_id_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_id");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_op_next */
  *(void **) (&xcb_shape_op_next_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_op_next");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_op_end */
  *(void **) (&xcb_shape_op_end_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_op_end");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_kind_next */
  *(void **) (&xcb_shape_kind_next_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_kind_next");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_kind_end */
  *(void **) (&xcb_shape_kind_end_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_kind_end");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_query_version */
  *(void **) (&xcb_shape_query_version_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_query_version");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_query_version_unchecked */
  *(void **) (&xcb_shape_query_version_unchecked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_query_version_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_query_version_reply */
  *(void **) (&xcb_shape_query_version_reply_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_query_version_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_rectangles_sizeof */
  *(void **) (&xcb_shape_rectangles_sizeof_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_rectangles_sizeof");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_rectangles_checked */
  *(void **) (&xcb_shape_rectangles_checked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_rectangles_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_rectangles */
  *(void **) (&xcb_shape_rectangles_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_rectangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_rectangles_rectangles */
  *(void **) (&xcb_shape_rectangles_rectangles_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_rectangles_rectangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_rectangles_rectangles_length */
  *(void **) (&xcb_shape_rectangles_rectangles_length_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_rectangles_rectangles_length");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_rectangles_rectangles_iterator */
  *(void **) (&xcb_shape_rectangles_rectangles_iterator_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_rectangles_rectangles_iterator");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_mask_checked */
  *(void **) (&xcb_shape_mask_checked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_mask_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_mask */
  *(void **) (&xcb_shape_mask_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_mask");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_combine_checked */
  *(void **) (&xcb_shape_combine_checked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_combine_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_combine */
  *(void **) (&xcb_shape_combine_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_combine");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_offset_checked */
  *(void **) (&xcb_shape_offset_checked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_offset_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_offset */
  *(void **) (&xcb_shape_offset_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_offset");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_query_extents */
  *(void **) (&xcb_shape_query_extents_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_query_extents");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_query_extents_unchecked */
  *(void **) (&xcb_shape_query_extents_unchecked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_query_extents_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_query_extents_reply */
  *(void **) (&xcb_shape_query_extents_reply_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_query_extents_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_select_input_checked */
  *(void **) (&xcb_shape_select_input_checked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_select_input_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_select_input */
  *(void **) (&xcb_shape_select_input_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_select_input");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_input_selected */
  *(void **) (&xcb_shape_input_selected_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_input_selected");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_input_selected_unchecked */
  *(void **) (&xcb_shape_input_selected_unchecked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_input_selected_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_input_selected_reply */
  *(void **) (&xcb_shape_input_selected_reply_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_input_selected_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles_sizeof */
  *(void **) (&xcb_shape_get_rectangles_sizeof_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles_sizeof");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles */
  *(void **) (&xcb_shape_get_rectangles_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles_unchecked */
  *(void **) (&xcb_shape_get_rectangles_unchecked_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles_rectangles */
  *(void **) (&xcb_shape_get_rectangles_rectangles_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles_rectangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles_rectangles_length */
  *(void **) (&xcb_shape_get_rectangles_rectangles_length_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles_rectangles_length");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles_rectangles_iterator */
  *(void **) (&xcb_shape_get_rectangles_rectangles_iterator_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles_rectangles_iterator");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shape_get_rectangles_reply */
  *(void **) (&xcb_shape_get_rectangles_reply_dylibloader_wrapper_xcb_shape) = dlsym(handle, "xcb_shape_get_rectangles_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
return 0;
}
