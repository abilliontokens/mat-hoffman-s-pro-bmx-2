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

struct S_001D3690_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001D3690 {
    void *vtbl;
    int f4;
    char pad8[8];
    char *f10;
    S_001D3690_Obj **f14;
    int f18;
    char pad1c[0x3c - 0x1c];
    float f3c;
    float f40;
    void *f44;
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
    void func_001D35E0();
};

struct C_001D3700 {
    void func_001D3700(int param_1, int param_2);
};


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
