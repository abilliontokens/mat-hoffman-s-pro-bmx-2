/* 5 functions from 0x0002AAA0 to 0x0002B1C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern char D_002766F0[];
extern char D_002766E0[];
extern char D_002766D0[];

struct C_00168B90 {
    int func_00168B90(const char *name, float *out);
    int func_00168A10(const char *name, int *out);
};

struct C_0002B140 {
    float unk0;
    int unk4;
    float unk8;
    void func_0002B140(C_00168B90 *param_1);
};

struct C_0002B1A0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int func_0002B1A0(void);
};

struct C_0002B180 {
    void func_0002B180(void);
};

struct Vec4_0002AF90 {
    float x, y, z, w;
};

struct S_0002AF90_Node {
    Vec4_0002AF90 func_00197EC0(Vec4_0002AF90 *v);
    void func_00199A70(int a, Vec4_0002AF90 *out);
};

struct S_0002AF90_Obj {
    void func_0014AC30(Vec4_0002AF90 *v, int a);
    void func_00133ED0(void);
    float func_00133F10(int a);
};

extern int D_002B7E5C;
extern Vec4_0002AF90 D_002B7E4C;
extern float D_002A10F0, D_002A10F4, D_002A10F8, D_002A1178;

struct C_0002AF90 {
    char pad0[0x13c];
    Vec4_0002AF90 f13c;
    Vec4_0002AF90 f14c;
    char pad15c[0x1f8 - 0x15c];
    S_0002AF90_Obj *f1f8;
    char pad1fc[0x230 - 0x1fc];
    S_0002AF90_Node *f230;
    void func_0002AF90(void);
};


void C_0002B140::func_0002B140(C_00168B90 *param_1) {
    param_1->func_00168B90(D_002766F0, &unk0);
    param_1->func_00168A10(D_002766E0, &unk4);
    param_1->func_00168B90(D_002766D0, &unk8);
}

void C_0002B180::func_0002B180(void)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 8);
  if (*(int *)(in_ECX + 0xc) < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    return;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 4);
  return;
}

int C_0002B1A0::func_0002B1A0(void) {
    return unkC >= unk4;
}

