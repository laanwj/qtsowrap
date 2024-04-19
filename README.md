# qtsowrap

This is a library that wraps Qt's Linux system integration dependencies in a way so that they are loaded at run time, and thus not necessary in the compile process. The aim is to wrap Qt's entire interface with the operating system.

The source is entirely auto-generated from upstream headers. (scripts/gen.py)[scripts/gen.py] contains the definitions of the libraries and functions to wrap. See the section "Generation" below on how to regenerate the source code after updating these, or just to check.

For now it handles the boilerplate for:

- xcb and sublibraries
- xkb
- fontconfig
- freetype

## why

- Reduce the number of libraries in 'depends'. The display and font system libraries no longer need to be built, this library acts as a full replacement from the perspective of the build system.
- Optional dependencies (eg Wayland, X11) in otherwise static Qt build. Failing to laod libraries is not necessarily fatal and can instead disable the functionality.
- Could print more useful errors when a library is missing.
- Potentially, tighter control over version requirements by restricting which symbols are wrapped, or optional feature support by being toleratnt of missing symbols.

## Building

A CMake build system is used to build the stub library.

## Usage

Include the wrapper header instead of the actual header (it will internally include that). The library functions can be called as normally. Just make sure to initialize every library before using it, and check for errors:
```
#include "xcb-sowrap.h"

int main()
{
    if (initialize_xcb()) {
        fprintf(stderr, "Unable to load the xcb library. Make sure to install it from your distribution's package repository.\n");
        return 1;
    }
    /* Use xcb functions here. */
    xcb_connect(...);
    return 0;
}
```

Once a library is bound, it's bound for the lifetime of the process. There is no need to call a `deinitialize`. Calling `initialize` multiple times does not make a difference, the dynamic linker will notice that it already loaded the library and re-use that.

## Patching Qt

Qt cannot use this library by default, it needs to be patched.

## Generation

To re-generate the headers and implementation files in `src_gen` and `include_gen`:

```python
python3 scripts/gen.py
```

This process should be fully deterministic, so to verify that this worked correctly is a matter of re-running the script.

## Credits

- This is based on [dynload-wrapper](https://github.com/hpvb/dynload-wrapper) by Hein-Pieter van Braam <hp@tmm.cx> et al, which is also used by Godot.

