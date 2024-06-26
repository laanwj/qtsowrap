/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/xcb/xcb_image.h --sys-include xcb-so_wrap.h --sys-include xcb_shm-so_wrap.h --sys-include <xcb/xcb_image.h> --soname libxcb-image.so.0 --init-name xcb_image --output-header include_gen/xcb_image-so_wrap.h --output-implementation src_gen/xcb_image-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define xcb_image_annotate xcb_image_annotate_dylibloader_orig_xcb_image
#define xcb_image_create xcb_image_create_dylibloader_orig_xcb_image
#define xcb_image_create_native xcb_image_create_native_dylibloader_orig_xcb_image
#define xcb_image_destroy xcb_image_destroy_dylibloader_orig_xcb_image
#define xcb_image_get xcb_image_get_dylibloader_orig_xcb_image
#define xcb_image_put xcb_image_put_dylibloader_orig_xcb_image
#define xcb_image_native xcb_image_native_dylibloader_orig_xcb_image
#define xcb_image_put_pixel xcb_image_put_pixel_dylibloader_orig_xcb_image
#define xcb_image_get_pixel xcb_image_get_pixel_dylibloader_orig_xcb_image
#define xcb_image_convert xcb_image_convert_dylibloader_orig_xcb_image
#define xcb_image_subimage xcb_image_subimage_dylibloader_orig_xcb_image
#define xcb_image_shm_put xcb_image_shm_put_dylibloader_orig_xcb_image
#define xcb_image_shm_get xcb_image_shm_get_dylibloader_orig_xcb_image
#define xcb_image_create_from_bitmap_data xcb_image_create_from_bitmap_data_dylibloader_orig_xcb_image
#define xcb_create_pixmap_from_bitmap_data xcb_create_pixmap_from_bitmap_data_dylibloader_orig_xcb_image
#include "xcb-so_wrap.h"
#include "xcb_shm-so_wrap.h"
#include <xcb/xcb_image.h>
#undef xcb_image_annotate
#undef xcb_image_create
#undef xcb_image_create_native
#undef xcb_image_destroy
#undef xcb_image_get
#undef xcb_image_put
#undef xcb_image_native
#undef xcb_image_put_pixel
#undef xcb_image_get_pixel
#undef xcb_image_convert
#undef xcb_image_subimage
#undef xcb_image_shm_put
#undef xcb_image_shm_get
#undef xcb_image_create_from_bitmap_data
#undef xcb_create_pixmap_from_bitmap_data
#include <dlfcn.h>
#include <stdio.h>
void (*xcb_image_annotate_dylibloader_wrapper_xcb_image)(xcb_image_t *);
xcb_image_t *(*xcb_image_create_dylibloader_wrapper_xcb_image)(uint16_t, uint16_t, xcb_image_format_t, uint8_t, uint8_t, uint8_t, uint8_t, xcb_image_order_t, xcb_image_order_t, void *, uint32_t, uint8_t *);
xcb_image_t *(*xcb_image_create_native_dylibloader_wrapper_xcb_image)(xcb_connection_t *, uint16_t, uint16_t, xcb_image_format_t, uint8_t, void *, uint32_t, uint8_t *);
void (*xcb_image_destroy_dylibloader_wrapper_xcb_image)(xcb_image_t *);
xcb_image_t *(*xcb_image_get_dylibloader_wrapper_xcb_image)(xcb_connection_t *, xcb_drawable_t, int16_t, int16_t, uint16_t, uint16_t, uint32_t, xcb_image_format_t);
xcb_void_cookie_t (*xcb_image_put_dylibloader_wrapper_xcb_image)(xcb_connection_t *, xcb_drawable_t, xcb_gcontext_t, xcb_image_t *, int16_t, int16_t, uint8_t);
xcb_image_t *(*xcb_image_native_dylibloader_wrapper_xcb_image)(xcb_connection_t *, xcb_image_t *, int);
void (*xcb_image_put_pixel_dylibloader_wrapper_xcb_image)(xcb_image_t *, uint32_t, uint32_t, uint32_t);
uint32_t (*xcb_image_get_pixel_dylibloader_wrapper_xcb_image)(xcb_image_t *, uint32_t, uint32_t);
xcb_image_t *(*xcb_image_convert_dylibloader_wrapper_xcb_image)(xcb_image_t *, xcb_image_t *);
xcb_image_t *(*xcb_image_subimage_dylibloader_wrapper_xcb_image)(xcb_image_t *, uint32_t, uint32_t, uint32_t, uint32_t, void *, uint32_t, uint8_t *);
xcb_image_t *(*xcb_image_shm_put_dylibloader_wrapper_xcb_image)(xcb_connection_t *, xcb_drawable_t, xcb_gcontext_t, xcb_image_t *, xcb_shm_segment_info_t, int16_t, int16_t, int16_t, int16_t, uint16_t, uint16_t, uint8_t);
int (*xcb_image_shm_get_dylibloader_wrapper_xcb_image)(xcb_connection_t *, xcb_drawable_t, xcb_image_t *, xcb_shm_segment_info_t, int16_t, int16_t, uint32_t);
xcb_image_t *(*xcb_image_create_from_bitmap_data_dylibloader_wrapper_xcb_image)(uint8_t *, uint32_t, uint32_t);
xcb_pixmap_t (*xcb_create_pixmap_from_bitmap_data_dylibloader_wrapper_xcb_image)(xcb_connection_t *, xcb_drawable_t, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, xcb_gcontext_t *);
int initialize_xcb_image(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libxcb-image.so.0", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
/* xcb_image_annotate */
  *(void **) (&xcb_image_annotate_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_annotate");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_create */
  *(void **) (&xcb_image_create_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_create");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_create_native */
  *(void **) (&xcb_image_create_native_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_create_native");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_destroy */
  *(void **) (&xcb_image_destroy_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_destroy");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_get */
  *(void **) (&xcb_image_get_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_get");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_put */
  *(void **) (&xcb_image_put_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_put");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_native */
  *(void **) (&xcb_image_native_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_native");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_put_pixel */
  *(void **) (&xcb_image_put_pixel_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_put_pixel");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_get_pixel */
  *(void **) (&xcb_image_get_pixel_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_get_pixel");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_convert */
  *(void **) (&xcb_image_convert_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_convert");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_subimage */
  *(void **) (&xcb_image_subimage_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_subimage");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_shm_put */
  *(void **) (&xcb_image_shm_put_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_shm_put");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_shm_get */
  *(void **) (&xcb_image_shm_get_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_shm_get");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_image_create_from_bitmap_data */
  *(void **) (&xcb_image_create_from_bitmap_data_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_image_create_from_bitmap_data");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
/* xcb_create_pixmap_from_bitmap_data */
  *(void **) (&xcb_create_pixmap_from_bitmap_data_dylibloader_wrapper_xcb_image) = dlsym(handle, "xcb_create_pixmap_from_bitmap_data");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
      return(1);
    }
  }
return 0;
}
