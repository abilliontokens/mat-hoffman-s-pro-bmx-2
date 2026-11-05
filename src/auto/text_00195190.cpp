/* 9 functions from 0x00195190 to 0x001960F0, found by Ghidra. */
#include "common.h"

struct SimpleVCR {
    void *vtbl;
    char pad4[0x20];
    int f24, f28, f2c, f30, f34, f38, f3c, f40, f44, f48, f4c;
    int f50, f54, f58, f5c, f60, f64, f68, f6c, f70, f74, f78, f7c, f80, f84, f88;
    char pad8C[4];
    int f90, f94, f98, f9c, fA0, fA4, fA8, fAC, fB0, fB4, fB8;
    char padBC[4];
    unsigned char fC0;
    char padC1[3];
    int fC4, fC8, fCC;
    void func_00157600(int a);
    SimpleVCR *func_00195D90(void);
};

extern int D_0028AFA4;

struct Vec4_195D40 {
    int x, y, z, w;
};

struct C_001955D0 {
    char pad0[0x70];
    int unk70;
    char pad74[0x4];
    int unk78;
    int func_001955D0(int a0, int a1);
};


int C_001955D0::func_001955D0(int a0, int a1) {
    unk70 = a0;
    unk78 = a1;
    return 1;
}

void func_00195D40(Vec4_195D40 *out, Vec4_195D40 v)
{
    *out = v;
}

