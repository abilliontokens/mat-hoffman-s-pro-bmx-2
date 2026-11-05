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
    void *f284[8];
    void *f2a4[1];
    void func_00054960(void);
    void func_001577A0(void *a, int b);
};

void C_00054960::func_00054960(void)
{
    int func_00031640(...);
    int i;

    func_00031640();
    for (i = 0; i < f90; i++) {
        if (f284[i] != 0) {
            func_001577A0(f284[i], -1);
        }
        if (f2a4[i] != 0) {
            func_001577A0(f2a4[i], -1);
        }
    }
}

void *C_000549C0::func_000549C0(int flags) {
    extern int D_00277B74;
    void func_00033220();
    void func_001E891B(void *);
    vtbl = (void *)&D_00277B74;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
