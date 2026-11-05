/* 24 functions from 0x00108370 to 0x00109370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct C_001084E0 {
    void func_001084E0(void);
};

struct C_00108610 {
    char pad0[0x20B4];
    int unk20B4;
    int unk20B8;
    void func_00108610(int a0, int a1);
};

struct C_001092D0 {
    char pad0[0x20C0];
    int unk20C0;
    void func_001092D0(int a0);
};

struct C_00108680 {
    char pad0[0xA2C];
    int unkA2C;
    void func_00108680(int a0);
    void func_00108630(int arg);
};

struct C_00108670 {
    char pad0[0x20A0];
    int unk20A0;
    int func_00108670(void);
};

struct C_00108660 {
    char pad0[0x20A4];
    int unk20A4;
    int func_00108660(void);
};

extern float D_00275544;
extern float D_002755E8;
extern float D_00275460;

struct C_00083B20 {
    void func_00083B20(int arg);
};

struct C_00108630_Arr {
    char pad0[0x170];
    C_00083B20 *items[1];
};

struct C_00108630_Mgr {
    char pad0[0x2A4];
    C_00108630_Arr *f2A4;
};

extern C_00108630_Mgr *D_002A8490;

struct C_00198390_Obj {
    void func_00198390();
    void func_00198E60();
};

struct C_001332A0_Obj {
    void func_001332A0();
};

struct C_00108370_A00 {
    char pad0[4];
    C_00198390_Obj *f4;
};

struct C_00108370 {
    char pad0[0x230];
    C_00198390_Obj *f230;
    char pad234[0xA00 - 0x234];
    C_00108370_A00 *fA00;
    char padA04[0x11AC - 0xA04];
    C_001332A0_Obj *f11AC;
    C_001332A0_Obj *f11B0;
    C_001332A0_Obj *f11B4;
    C_001332A0_Obj *f11B8;
    C_001332A0_Obj *f11BC;
    void func_00108370();
};

struct C_00108CB0_T {
    char pad0[0x7A64];
    float f7A64[1];
};

struct C_00108CB0_C {
    char pad0[0x52C];
    C_00108CB0_T *f52C;
};

struct C_00108CB0 {
    char pad0[0x24];
    C_00108CB0_C *f24;
    float func_00108CB0(int idx, float v);
};

struct C_001092E0 {
    int f0;
    int f4[5];
    int f18[5];
    void func_001092E0(int start);
    int func_00109340(int p1, int p2);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct Vec4_00108370 {
    float x;
    float y;
    float z;
    float w;
};

struct C_0001EF10 {
    Vec4_00108370 *func_0001EF10(Vec4_00108370 *out);
};

struct S_00109180_Base {
    char pad0[0x268];
    float f268;
    float f26c;
    float f270;
};

struct C_00109180 {
    char pad0[0x1e0];
    S_00109180_Base *f1e0;
    char pad1e4[0x24];
    C_0001EF10 *f208;
    Vec4_00108370 *func_00109180(Vec4_00108370 *out);
};

struct S_00108F50_Pair {
    int a;
    int b;
};

struct C_00108F50 {
    char pad0[0xa68];
    int fa68[4];
    int fa78[4];
    int fa88;
    int fa8c[4];
    int fa9c[4];
    int faac;
    int fab0[0x46];
    int fbc8[0x46];
    int fce0[5][16];
    int fe20[5][16];
    S_00108F50_Pair ff60[6];
    int ff90[3][16];
    void func_00108F50(void);
    void func_00108FF0(void);
};


void C_001084E0::func_001084E0(void)
{
  int func_00027D40(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x20a8) == 0) {
    *(undefined4 *)(in_ECX + 0x209c) = 1;
    *(undefined4 *)(in_ECX + 0x20a8) = 1;
    func_00027D40();
    return;
  }
  return;
}

void C_00108610::func_00108610(int a0, int a1) {
    unk20B4 = a1;
    unk20B8 = a0;
}

void C_00108680::func_00108630(int arg)
{
    C_00083B20 *p = D_002A8490->f2A4->items[unkA2C];

    if (p != 0) {
        p->func_00083B20(arg);
    }
}

int C_00108660::func_00108660(void) {
    return unk20A4;
}

int C_00108670::func_00108670(void) {
    return unk20A0;
}

void C_00108680::func_00108680(int a0) {
    unkA2C = a0;
}

void C_00108F50::func_00108F50(void)
{
    int i;
    int j;

    for (i = 0; i < 4; i++) {
        fa68[i] = -1;
        fa78[i] = -1;
    }
    fa88 = 0;
    memset(fab0, 0, sizeof(fab0));
    for (j = 0; j < 16; j++) {
        for (i = 0; i < 5; i++) {
            fce0[i][j] = 0;
        }
    }
    for (j = 0; j < 8; j++) {
        ff90[0][j] = 0;
        ff90[1][j] = 0;
        ff90[2][j] = 0;
    }
    ff60[0].a = 0;
    ff60[1].a = 0;
    ff60[2].a = 0;
    ff60[3].a = 0;
    ff60[4].a = 0;
    ff60[5].a = 0;
}

void C_00108F50::func_00108FF0(void)
{
    int i;
    int j;

    for (i = 0; i < 4; i++) {
        fa8c[i] = -1;
        fa9c[i] = -1;
    }
    faac = 0;
    memset(fbc8, 0, sizeof(fbc8));
    for (j = 0; j < 16; j++) {
        for (i = 0; i < 5; i++) {
            fe20[i][j] = 0;
        }
    }
    for (j = 8; j < 16; j++) {
        ff90[0][j] = 0;
        ff90[1][j] = 0;
        ff90[2][j] = 0;
    }
    ff60[0].b = 0;
    ff60[1].b = 0;
    ff60[2].b = 0;
    ff60[3].b = 0;
    ff60[4].b = 0;
    ff60[5].b = 0;
}

Vec4_00108370 *C_00109180::func_00109180(Vec4_00108370 *out)
{
    Vec4_00108370 tmp;
    float *a = (float *)f208->func_0001EF10(&tmp);
    float *b = &f1e0->f268;

    vec3_set((float *)out, b[0] + a[0], b[1] + a[1], b[2] + a[2]);
    return out;
}

void C_001092D0::func_001092D0(int a0) {
    unk20C0 = a0;
}

void C_001092E0::func_001092E0(int start)
{
    int i;

    f0 = 0;
    for (i = start; i < 5; i++) {
        f4[i] = -1;
        f18[i] = 0;
    }
    if (f4[0] != -1) {
        f0++;
    }
    if (f4[1] != -1) {
        f0++;
    }
    if (f4[2] != -1) {
        f0++;
    }
    if (f4[3] != -1) {
        f0++;
    }
    if (f4[4] != -1) {
        f0++;
    }
}

int C_001092E0::func_00109340(int p1, int p2)
{
    if (f0 >= 5) {
        return 0;
    }
    f4[f0] = p1;
    f18[f0] = p2;
    f0++;
    return 1;
}

