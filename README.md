# Mat Hoffman's Pro BMX 2 decompilation

Started from scratch with [decompdecomp](https://github.com/n-delic/decompdecomp): the game's functions, found by Ghidra, are cut out of your
copy of its program and compared with what `src/` compiles to, function by function, with objdiff.

1. `orig/mathoffmansprobmx2.exe` is your copy of the game's default.xbe made a Windows program at the same addresses: decompdecomp makes it from your default.xbe or disc image when you open the project (never commit it).
2. `python tools/configure.py mathoffmansprobmx2 --msvc <Visual C++ folder> [--wibo <wibo>]`, then `ninja`. A file built with
   Visual C++ 2017 on Linux or macOS runs it through wine: set `DECOMPNET_WINE` (or have wine on the PATH) and
   `DECOMPNET_WINE_PREFIX` (a wine prefix of its own) first.
3. Decompiled code goes in `src/`; `objdiff.json` shows each function's progress in [objdiff](https://github.com/encounter/objdiff).
4. `ninja rebuild` puts the whole program back together in `build/mathoffmansprobmx2/mathoffmansprobmx2.exe`, each function from its C
   where that compiles to the game's code (else from your copy's), and says whether it's your copy, byte for byte.

Compiler: Visual C++ 7.0 (change `MSVC_VERSION` and `CL_FLAGS` in tools/configure.py if the game was built
with another version or other flags; `config/mathoffmansprobmx2/file_compilers.json` names the files built with another
version). `config/mathoffmansprobmx2/functions.json` holds what the analysis found: every function's address, size, symbol
and relocations, by source file.
