/* 9 functions from 0x00195190 to 0x001960F0, found by Ghidra. */
#include "common.h"

struct SimpleVCR {
    void *vtbl;
    char pad4[0x20];
    float f24, f28, f2c, f30, f34, f38, f3c, f40, f44, f48, f4c;
    float f50, f54, f58, f5c, f60, f64, f68, f6c, f70, f74, f78, f7c, f80, f84, f88;
    char pad8C[4];
    float f90, f94, f98, f9c, fA0, fA4, fA8, fAC, fB0, fB4, fB8;
    char padBC[4];
    unsigned char fC0;
    char padC1[3];
    int fC4, fC8, fCC;
    void func_00157600(int a);
    SimpleVCR *func_00195D90(void);
};

extern int D_0028AFA4;
extern float D_00275544;
extern float D_00275460;

struct C_00196000 {
    char pad0[0x6c];
    u32 f6c;
    u32 f70;
    u32 f74;
    int *f78;
    int *f7c;
    int *f80;
    int *f84;
    int *f88;
    char pad8c[4];
    float *f90;
    float *f94;
    char pad98[0xa4 - 0x98];
    float *fa4;
    float *fa8;
    char padac[0xc0 - 0xac];
    u8 fc0;
    int func_00196000(float param_1, int param_2, int param_3, int param_4, float param_5, float param_6, int param_7);
};

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

SimpleVCR *SimpleVCR::func_00195D90(void)
{
    func_00157600(1);
    fC0 = fC0 & 0x41;
    f74 = 0;
    f6c = 0;
    f70 = 0;
    f68 = 0;
    fC8 = 0;
    f50 = 0;
    fCC = 0;
    f78 = 0;
    f7c = 0;
    f80 = 0;
    f54 = 0;
    f58 = 0;
    fC4 = 0;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f48 = 0;
    f5c = 0;
    f60 = 0;
    f64 = 0;
    f84 = 0;
    f88 = 0;
    f90 = 0;
    f94 = 0;
    f98 = 0;
    fA0 = 0;
    f9c = 0;
    fAC = 0;
    fB0 = 0;
    fB4 = 0;
    fA4 = 0;
    fA8 = 0;
    fB8 = 0;
    return this;
}

