/* 9 functions from 0x001D2A40 to 0x001D3860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern float D_002755E0;
extern int D_0028F274;
extern int D_0028F474;

void func_001E891B(void *p);
void __stdcall func_0025ADD0(void *p);
void __stdcall func_002598A0(void *p, int a1, int a2);

struct C_001C3D40 {
    void func_001C3D40(int a);
    void func_001C3D80();
};
extern C_001C3D40 *D_002F07B8;

struct C_001625A0 {
    void func_001625A0(int a);
};

struct C_001D27F0 {
    void func_001D27F0();
};

struct C_00160BF0 {
    void func_00160BF0();
};

void __stdcall func_00259060(void *p);
void __stdcall func_001FCEA0(void *p, int a1, int *out, int a3, int a4);
void __stdcall func_0025AA30(void *p, int a1, int a2, int a3, int a4, int a5, int a6);

struct S_001D3690_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0xb4];
    void *fb8;
};

struct S_001D3690_Handle {
    int f0;
    int f4;
};

struct C_001D3690 {
    void *vtbl;
    int f4;
    char pad8[8];
    char *f10;
    S_001D3690_Obj **f14;
    int f18;
    char pad1c[0x3c - 0x1c];
    u32 f3c;
    u32 f40;
    S_001D3690_Handle *f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    S_001D3690_Obj *f70;
    int f74;
    int f78;
    int f7c;
    C_001D3690 *func_001D3690(int a);
    int func_001D3730(int a);
    void func_001D37C0();
    void func_001D3800();
    void func_001D35E0();
};

struct C_001D3700 {
    void func_001D3700(int param_1, int param_2);
};


C_001D3690 *C_001D3690::func_001D3690(int a)
{
    ((C_001625A0 *)this)->func_001625A0(a);
    f44 = 0;
    f48 = 0;
    f70 = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0;
    f7c = 0;
    f74 = 0;
    f78 = 0;
    f4c = 0;
    vtbl = (void *)&D_0028F474;
    f40 = 1.0f;
    f3c = 1.0f;
    f5c = 0x280;
    f60 = 0x1c0;
    f64 = 1;
    f68 = 0x302;
    f6c = 0x303;
    return this;
}

void C_001D3700::func_001D3700(int param_1, int param_2)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  *(int *)(in_ECX + 0x54) = param_1;
  *(int *)(in_ECX + 0x58) = param_2;
  if (piVar1 != (int *)0x0) {
    *(int *)(in_ECX + 0x5c) = *piVar1 + param_1;
    *(int *)(in_ECX + 0x60) = piVar1[1] + param_2;
  }
  return;
}

int C_001D3690::func_001D3730(int a)
{
    if (f44 != 0 && f48 == 0) {
        f48 = 1;
        D_002F07B8->func_001C3D40(0);
        float t = (float)(a << 15) * D_002755E0;
        int v = _mm_cvtss_si32(_mm_load_ss(&t));
        func_002598A0(f44, 0, v);
        return f48;
    }
    f48 = 0;
    return f48;
}

void C_001D3690::func_001D37C0()
{
    f48 = 0;
    D_002F07B8->func_001C3D80();
    if (f44 != 0) {
        func_0025ADD0(f44);
        f44 = 0;
        if (f70 != 0) {
            f70->v2();
            f70 = 0;
        }
    }
}

void C_001D3690::func_001D3800()
{
    if (f44 != 0) {
        func_00259060(f44);
        void *p = f70->fb8;
        if (p != 0) {
            int pos[2];
            func_001FCEA0(p, 0, pos, 0, 0);
            func_0025AA30(f44, pos[1], pos[0], f44->f4, 0, 0, 3);
        }
    }
}

