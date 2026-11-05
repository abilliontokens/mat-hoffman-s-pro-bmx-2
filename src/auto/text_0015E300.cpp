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

extern float D_00275544;
extern float D_002E293C;
extern int D_002878B4;
void func_001E891B(void *p);
void func_0015CD90(float *dst, float *src);
extern "C" void *memset(void *dst, int c, unsigned int n);

struct C_00157660 {
    void func_00157660();
};

struct C_00193500 {
    void func_00193500();
};

struct LightEmitter;

struct C_0015DA60 {
    void func_0015DCC0(LightEmitter *item);
};

struct LightEmitter_Sub {
    char pad0[0x30];
    float f30;
    float f34;
    float f38;
    char pad3C[0x30];
    float f6C;
    float f70;
    float f74;
};

/* LightEmitter */
struct LightEmitter {
    void *vtbl;
    char pad4[0x30];
    LightEmitter_Sub *f34;
    char pad38[0x8];
    float f40;
    float f44;
    float f48;
    char pad4C[0x1C];
    int f68;
    float f6C;
    float f70;
    float f74;
    float f78;
    char pad7C[0x28];
    float fA4;
    float fA8;
    float fAC;
    char padB0[0x14];
    C_00193500 *fC4;
    char padC8[0x4];
    void *fCC;
    void func_0015E420(float *dir, float *mat);
    void func_0015E600();
    void func_0015E800(float v);
    void func_0015E920(float *p);
};

extern LightEmitter *D_002E2930;

void C_0015E300::func_0015E300(int idx, S_0015E300_V3 *pos, int *val)
{
    if (idx >= 0 && idx < f78) {
        if (f3C != 0 && pos != 0) {
            f3C[idx].x = pos->x;
            f3C[idx].y = pos->y;
            f3C[idx].z = pos->z;
        }
        if (f38 != 0 && val != 0) {
            f38[idx] = *val;
        }
    }
}

void C_0015E300::func_0015E360(S_0015E300_V4 *v)
{
    int i;

    f40 = *v;
    for (i = 0; i < f78; i++) {
        f50[i] = *v;
    }
}

void C_0015E300::func_0015E3C0(void)
{
    int i;

    f40 = f54;
    for (i = 0; i < f78; i++) {
        f50[i] = f64[i];
    }
}


int C_0015E300::func_0015E5B0(void)
{
    unsigned int min = f24[0].f4;
    int best = 0;
    int i;

    if (min == 0) {
        return 0;
    }
    for (i = 1; i < f28; i++) {
        unsigned int v = f24[i].f4;
        if (v == 0) {
            return i;
        }
        if (v < min) {
            best = i;
            min = v;
        }
    }
    return best;
}

void LightEmitter::func_0015E600()
{
    C_00193500 *sub;

    vtbl = &D_002878B4;
    if (D_002E2930 != 0) {
        ((C_0015DA60 *)D_002E2930)->func_0015DCC0(this);
    }
    sub = fC4;
    if (sub != 0) {
        sub->func_00193500();
        func_001E891B(sub);
    }
    if (fCC != 0) {
        func_001E891B(fCC);
    }
    ((C_00157660 *)this)->func_00157660();
}

void LightEmitter::func_0015E800(float v)
{
    if (v == D_00275544 || v > D_002E293C) {
        v = D_002E293C;
    }
    if (v != f78) {
        f78 = v;
        if (D_002E2930 != 0) {
            D_002E2930->f68++;
        }
    }
}

void LightEmitter::func_0015E920(float *p)
{
    if (p[0] != fA4 || p[1] != fA8 || p[2] != fAC) {
        func_0015CD90(&fA4, p);
        f6C = fA4;
        f70 = fA8;
        f74 = fAC;
        if (D_002E2930 != 0) {
            D_002E2930->f68++;
        }
    }
}

