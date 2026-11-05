/* 14 functions from 0x0015E300 to 0x0015F120, found by Ghidra. */
#include "common.h"

struct S_0015E300_V3 {
    int x, y, z;
};

struct S_0015E300_V4 {
    int x, y, z, w;
};

struct S_0015E300_Elem {
    char pad0[4];
    unsigned int f4;
    char pad8[0xC0];
};

struct C_0015E300 {
    char pad0[0x24];
    S_0015E300_Elem *f24;
    int f28;
    char pad2C[0xC];
    int *f38;
    S_0015E300_V4 *f3C;
    S_0015E300_V4 f40;
    S_0015E300_V4 *f50;
    S_0015E300_V4 f54;
    S_0015E300_V4 *f64;
    char pad68[0x10];
    int f78;
    void func_0015E300(int idx, S_0015E300_V3 *pos, int *val);
    void func_0015E360(S_0015E300_V4 *v);
    void func_0015E3C0(void);
    int func_0015E5B0(void);
};
