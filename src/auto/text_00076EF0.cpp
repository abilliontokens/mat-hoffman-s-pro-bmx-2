/* 5 functions from 0x00076EF0 to 0x000779C0, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
extern int D_00278E6C;

struct C_000777A0_Base {
    void func_00157600(int a);
};

/* FPSSaveMenu */
struct C_000777A0 {
    void *vtbl;
    char pad4[0x24 - 4];
    u32 f24[8];
    u32 f44[8];
    void *f64;
    void *f68;    u32 f6C[5];
    u32 f80[5];
    u32 f94;
    u32 f98;
    u32 f9C;
    u32 fA0;
    u32 fA4;
    u32 fA8[2];
    u32 fB0[2];
    char padB8[0xBC - 0xB8];
    u32 fBC;
    u32 fC0;
    u32 fC4;
    u32 fC8;
    u32 fCC;
    u32 fD0;
    u32 fD4;
    u32 fD8;
    u32 fDC;
    u32 fE0;
    u32 fE4;
    u32 fE8;
    u32 fEC;
    u32 fF0;
    u32 fF4;
    C_000777A0 *func_000777A0(int a);
};

C_000777A0 *C_000777A0::func_000777A0(int a)
{
    ((C_000777A0_Base *)this)->func_00157600(a);
    vtbl = (void *)&D_0027850C;
    for (int i = 0; i < 8; i++) {
        f24[i] = 0;
        f44[i] = 0;
    }
    vtbl = (void *)&D_00278E6C;
    fF4 = 0;
    fA4 = 0;
    fA0 = 0;
    f9C = 0;
    fC8 = 0;
    f68 = f64 = 0;
    for (int i = 0; i < 2; i++) {
        fB0[i] = 0;
        fA8[i] = 0;
    }
    for (int i = 0; i < 5; i++) {
        f6C[i] = 0;
        f80[i] = 0;
    }
    f94 = 0;
    f98 = 0;
    fC0 = 0;
    fBC = 0;
    fC4 = 0;
    fCC = 0;
    fD4 = 0;
    fD8 = 0;
    fDC = 0;
    fE0 = 0;
    fE4 = 0;
    fE8 = 0;
    fEC = 0;
    fF0 = 0;
    fD0 = 1;
    return this;
}
