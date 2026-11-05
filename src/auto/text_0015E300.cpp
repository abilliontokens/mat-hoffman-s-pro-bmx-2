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
    void func_0015E420(float *dir, float *mat, int unk);
    void func_0015E600();
    void func_0015E800(float v);
    void func_0015E920(float *p);
};

extern LightEmitter *D_002E2930;

struct LM_Obj {
    virtual void v0(int flag);
};

struct LightManager {
    void *vtbl;
    char pad4[0x34];
    void *f38;
    void *f3C;
    char pad40[0x10];
    void *f50;
    char pad54[0x10];
    void *f64;
    char pad68[0x1C];
    void *f84;
    char pad88[4];
    LM_Obj *f8C;
    void func_0015F080();
};

extern int D_00287934;
void func_001E8390(void *p);
struct C_0015D250 {
    void func_0015D250();
};

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

void LightEmitter::func_0015E420(float *dir, float *mat, int unk)
{
    memset(dir, 0, 0x40);
    memset(mat, 0, 0x40);
    if (f34 != 0) {
        dir[0] = -f34->f6C;
        dir[1] = -f34->f70;
        dir[2] = -f34->f74;
        mat[0] = f34->f30;
        float y = f34->f34;
        mat[4] = y;
        float z = f34->f38;
        mat[8] = z;
    }
    mat[3] = f40;
    mat[7] = f44;
    mat[11] = f48;
    mat[15] = 1.0f;
    mat[12] = f40;
    mat[13] = f44;
    mat[14] = f48;
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
    float *cur = &fA4;

    if (p[0] != fA4 || p[1] != cur[1] || p[2] != cur[2]) {
        func_0015CD90(cur, p);
        f6C = cur[0];
        f70 = fA8;
        f74 = fAC;
        if (D_002E2930 != 0) {
            D_002E2930->f68++;
        }
    }
}

void LightManager::func_0015F080()
{
    vtbl = &D_00287934;
    if (f84 != 0) {
        func_001E8390(f84);
        f84 = 0;
    }
    if (f50 != 0) {
        func_001E891B(f50);
        f50 = 0;
    }
    if (f64 != 0) {
        func_001E891B(f64);
        f64 = 0;
    }
    if (f3C != 0) {
        func_001E891B(f3C);
        f3C = 0;
    }
    if (f8C != 0) {
        f8C->v0(1);
        f8C = 0;
    }
    if (f38 != 0) {
        func_001E891B(f38);
        f38 = 0;
    }
    ((C_0015D250 *)this)->func_0015D250();
    D_002E2930 = 0;
    ((C_00157660 *)this)->func_00157660();
}

