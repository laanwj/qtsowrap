/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xcb/shm.h --sys-include xcb-so_wrap.h --sys-include <xcb/shm.h> --soname libxcb-shm.so.0 --init-name xcb_shm --output-header include_gen/xcb_shm-so_wrap.h --output-implementation src_gen/xcb_shm-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xcb_shm_seg_next xcb_shm_seg_next_dylibloader_orig_xcb_shm
#define xcb_shm_seg_end xcb_shm_seg_end_dylibloader_orig_xcb_shm
#define xcb_shm_query_version xcb_shm_query_version_dylibloader_orig_xcb_shm
#define xcb_shm_query_version_unchecked xcb_shm_query_version_unchecked_dylibloader_orig_xcb_shm
#define xcb_shm_query_version_reply xcb_shm_query_version_reply_dylibloader_orig_xcb_shm
#define xcb_shm_attach_checked xcb_shm_attach_checked_dylibloader_orig_xcb_shm
#define xcb_shm_attach xcb_shm_attach_dylibloader_orig_xcb_shm
#define xcb_shm_detach_checked xcb_shm_detach_checked_dylibloader_orig_xcb_shm
#define xcb_shm_detach xcb_shm_detach_dylibloader_orig_xcb_shm
#define xcb_shm_put_image_checked xcb_shm_put_image_checked_dylibloader_orig_xcb_shm
#define xcb_shm_put_image xcb_shm_put_image_dylibloader_orig_xcb_shm
#define xcb_shm_get_image xcb_shm_get_image_dylibloader_orig_xcb_shm
#define xcb_shm_get_image_unchecked xcb_shm_get_image_unchecked_dylibloader_orig_xcb_shm
#define xcb_shm_get_image_reply xcb_shm_get_image_reply_dylibloader_orig_xcb_shm
#define xcb_shm_create_pixmap_checked xcb_shm_create_pixmap_checked_dylibloader_orig_xcb_shm
#define xcb_shm_create_pixmap xcb_shm_create_pixmap_dylibloader_orig_xcb_shm
#define xcb_shm_attach_fd_checked xcb_shm_attach_fd_checked_dylibloader_orig_xcb_shm
#define xcb_shm_attach_fd xcb_shm_attach_fd_dylibloader_orig_xcb_shm
#define xcb_shm_create_segment xcb_shm_create_segment_dylibloader_orig_xcb_shm
#define xcb_shm_create_segment_unchecked xcb_shm_create_segment_unchecked_dylibloader_orig_xcb_shm
#define xcb_shm_create_segment_reply xcb_shm_create_segment_reply_dylibloader_orig_xcb_shm
#define xcb_shm_create_segment_reply_fds xcb_shm_create_segment_reply_fds_dylibloader_orig_xcb_shm
#include "xcb-so_wrap.h"
#include <xcb/shm.h>
#undef xcb_shm_seg_next
#undef xcb_shm_seg_end
#undef xcb_shm_query_version
#undef xcb_shm_query_version_unchecked
#undef xcb_shm_query_version_reply
#undef xcb_shm_attach_checked
#undef xcb_shm_attach
#undef xcb_shm_detach_checked
#undef xcb_shm_detach
#undef xcb_shm_put_image_checked
#undef xcb_shm_put_image
#undef xcb_shm_get_image
#undef xcb_shm_get_image_unchecked
#undef xcb_shm_get_image_reply
#undef xcb_shm_create_pixmap_checked
#undef xcb_shm_create_pixmap
#undef xcb_shm_attach_fd_checked
#undef xcb_shm_attach_fd
#undef xcb_shm_create_segment
#undef xcb_shm_create_segment_unchecked
#undef xcb_shm_create_segment_reply
#undef xcb_shm_create_segment_reply_fds
#include <dlfcn.h>
#include <stdio.h>
void (*xcb_shm_seg_next_dylibloader_wrapper_xcb_shm)(xcb_shm_seg_iterator_t *);
xcb_generic_iterator_t (*xcb_shm_seg_end_dylibloader_wrapper_xcb_shm)(xcb_shm_seg_iterator_t);
xcb_shm_query_version_cookie_t (*xcb_shm_query_version_dylibloader_wrapper_xcb_shm)(xcb_connection_t *);
xcb_shm_query_version_cookie_t (*xcb_shm_query_version_unchecked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *);
xcb_shm_query_version_reply_t *(*xcb_shm_query_version_reply_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_query_version_cookie_t, xcb_generic_error_t **);
xcb_void_cookie_t (*xcb_shm_attach_checked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t, uint32_t, uint8_t);
xcb_void_cookie_t (*xcb_shm_attach_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t, uint32_t, uint8_t);
xcb_void_cookie_t (*xcb_shm_detach_checked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t);
xcb_void_cookie_t (*xcb_shm_detach_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t);
xcb_void_cookie_t (*xcb_shm_put_image_checked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_drawable_t, xcb_gcontext_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, int16_t, int16_t, uint8_t, uint8_t, uint8_t, xcb_shm_seg_t, uint32_t);
xcb_void_cookie_t (*xcb_shm_put_image_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_drawable_t, xcb_gcontext_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, int16_t, int16_t, uint8_t, uint8_t, uint8_t, xcb_shm_seg_t, uint32_t);
xcb_shm_get_image_cookie_t (*xcb_shm_get_image_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_drawable_t, int16_t, int16_t, uint16_t, uint16_t, uint32_t, uint8_t, xcb_shm_seg_t, uint32_t);
xcb_shm_get_image_cookie_t (*xcb_shm_get_image_unchecked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_drawable_t, int16_t, int16_t, uint16_t, uint16_t, uint32_t, uint8_t, xcb_shm_seg_t, uint32_t);
xcb_shm_get_image_reply_t *(*xcb_shm_get_image_reply_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_get_image_cookie_t, xcb_generic_error_t **);
xcb_void_cookie_t (*xcb_shm_create_pixmap_checked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_pixmap_t, xcb_drawable_t, uint16_t, uint16_t, uint8_t, xcb_shm_seg_t, uint32_t);
xcb_void_cookie_t (*xcb_shm_create_pixmap_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_pixmap_t, xcb_drawable_t, uint16_t, uint16_t, uint8_t, xcb_shm_seg_t, uint32_t);
xcb_void_cookie_t (*xcb_shm_attach_fd_checked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t, int32_t, uint8_t);
xcb_void_cookie_t (*xcb_shm_attach_fd_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t, int32_t, uint8_t);
xcb_shm_create_segment_cookie_t (*xcb_shm_create_segment_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t, uint32_t, uint8_t);
xcb_shm_create_segment_cookie_t (*xcb_shm_create_segment_unchecked_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_seg_t, uint32_t, uint8_t);
xcb_shm_create_segment_reply_t *(*xcb_shm_create_segment_reply_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_create_segment_cookie_t, xcb_generic_error_t **);
int *(*xcb_shm_create_segment_reply_fds_dylibloader_wrapper_xcb_shm)(xcb_connection_t *, xcb_shm_create_segment_reply_t *);
int initialize_xcb_shm(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libxcb-shm.so.0", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
/* xcb_shm_seg_next */
  *(void **) (&xcb_shm_seg_next_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_seg_next");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_seg_end */
  *(void **) (&xcb_shm_seg_end_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_seg_end");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_query_version */
  *(void **) (&xcb_shm_query_version_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_query_version");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_query_version_unchecked */
  *(void **) (&xcb_shm_query_version_unchecked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_query_version_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_query_version_reply */
  *(void **) (&xcb_shm_query_version_reply_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_query_version_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_attach_checked */
  *(void **) (&xcb_shm_attach_checked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_attach_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_attach */
  *(void **) (&xcb_shm_attach_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_attach");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_detach_checked */
  *(void **) (&xcb_shm_detach_checked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_detach_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_detach */
  *(void **) (&xcb_shm_detach_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_detach");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_put_image_checked */
  *(void **) (&xcb_shm_put_image_checked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_put_image_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_put_image */
  *(void **) (&xcb_shm_put_image_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_put_image");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_get_image */
  *(void **) (&xcb_shm_get_image_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_get_image");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_get_image_unchecked */
  *(void **) (&xcb_shm_get_image_unchecked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_get_image_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_get_image_reply */
  *(void **) (&xcb_shm_get_image_reply_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_get_image_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_create_pixmap_checked */
  *(void **) (&xcb_shm_create_pixmap_checked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_create_pixmap_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_create_pixmap */
  *(void **) (&xcb_shm_create_pixmap_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_create_pixmap");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_attach_fd_checked */
  *(void **) (&xcb_shm_attach_fd_checked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_attach_fd_checked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_attach_fd */
  *(void **) (&xcb_shm_attach_fd_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_attach_fd");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_create_segment */
  *(void **) (&xcb_shm_create_segment_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_create_segment");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_create_segment_unchecked */
  *(void **) (&xcb_shm_create_segment_unchecked_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_create_segment_unchecked");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_create_segment_reply */
  *(void **) (&xcb_shm_create_segment_reply_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_create_segment_reply");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_shm_create_segment_reply_fds */
  *(void **) (&xcb_shm_create_segment_reply_fds_dylibloader_wrapper_xcb_shm) = dlsym(handle, "xcb_shm_create_segment_reply_fds");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
return 0;
}
