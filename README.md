# qtsowrap

This is a library that wraps Qt's X11 (for now) dependencies in a way so that they are loaded at run time, and thus not necessary in the compile process.

## Building

A CMake build system is used to build the stub library.

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

