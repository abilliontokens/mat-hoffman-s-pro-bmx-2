/* 6 functions from 0x00054680 to 0x00055380, found by Ghidra. */
#include "common.h"

struct C_000549C0 {
    void *vtbl;
    void *func_000549C0(int flags);
};

struct C_00054960 {
    char pad0[0x90];
    int f90;
    char pad94[0x1f0];
    int *f284;
    char pad288[0x1c];
    int *f2a4;
    void func_00054960(void);
    void func_001577A0(int a, int b);
};
