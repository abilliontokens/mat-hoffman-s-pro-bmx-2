/* 24 functions from 0x00108370 to 0x00109370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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

int C_00108660::func_00108660(void) {
    return unk20A4;
}

int C_00108670::func_00108670(void) {
    return unk20A0;
}

void C_00108680::func_00108680(int a0) {
    unkA2C = a0;
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

