/* 9 functions from 0x001960F0 to 0x00196C00, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

extern float D_00275544;
extern float D_00275460;

struct C_00196290 {
    char pad0[0x24];
    int f24;
    int f28;
    char pad2c[0x34 - 0x2c];
    int f34;
    int f38;
    char pad3c[0x48 - 0x3c];
    int f48;
    u32 f4c;
    u8 *f50;
    u8 *f54;
    u8 *f58;
    int f5c;
    int f60;
    int f64;
    int f68;
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
    int *f98;
    int *f9c;
    int *fa0;
    float *fa4;
    float *fa8;
    int *fac;
    int *fb0;
    int *fb4;
    u8 *fb8;
    char padbc[4];
    u8 fc0;
    char padc1[0xc8 - 0xc1];
    u32 fc8;
    u8 *fcc;
    void func_00196290(void);
    void func_00196BD0(void);
    void func_00196350(int param_1);
    int func_001961E0(int param_1, int param_2, int param_3);
    int func_001960F0(float param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
    void func_00196360(u8 *param_1);
};

int C_00196290::func_001961E0(int param_1, int param_2, int param_3)
{
    f70++;
    if (f74 < f6c && (fc0 & 0x10) == 0) {
        f78[f74] = param_1;
        if (param_2 != 0) {
            f7c[f74] = param_2;
        } else {
            f7c[f74] = param_1;
        }
        f80[f74] = 2;
        f84[f74] = param_3;
        f88[f74] = 4;
        f90[f74] = 1.0f;
        f94[f74] = 1.0f;
        return ++f74 - 1;
    }
    return -1;
}

void C_00196290::func_00196290(void)
{
    u32 i;
    u32 n = f6c;
    f5c = n * 4 + 8;
    fc0 &= 0xdf;
    f60 = n * 5 + 8;
    f68 = 0;
    f24 = 0;
    f34 = 0;
    f38 = 0;
    f28 = 0;
    f48 = 0;
    f4c = 0x80000000;
    f64 = 0;
    f54 = f50;
    if (fc0 & 1) {
        f58 = fcc;
    } else {
        f58 = f50;
    }
    for (i = 0; i < f6c; i++) {
        f98[i] = 0;
        fa0[i] = 0;
        f9c[i] = 0;
        fac[i] = 0;
        fb4[i] = 0;
        fb0[i] = 0;
        fb8[i] = 0;
    }
}

void C_00196290::func_00196350(int param_1)
{
    func_00196290();
    f28 = param_1;
}

void C_00196290::func_00196360(u8 *param_1)
{
    f54[0] = param_1[0];
    f54[1] = param_1[1];
    f54[2] = param_1[2];
    f54[3] = param_1[3];
    f54[4] = param_1[4];
    f54[5] = param_1[5];
    f54[6] = param_1[6];
    f54[7] = param_1[7];
    f54 += 8;
    f68 += 8;
    f64 += 8;
}

void C_00196290::func_00196BD0(void)
{
    if (fc0 & 1) {
        memcpy(fcc, f50, fc8);
    }
}

