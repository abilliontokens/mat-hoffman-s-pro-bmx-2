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
    u32 f64;
    u32 f68;
    u32 f6C[5];
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
