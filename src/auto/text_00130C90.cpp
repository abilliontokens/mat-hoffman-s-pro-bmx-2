/* 7 functions from 0x00130C90 to 0x00131510, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001314E0 {
    void func_001314E0(undefined4 *param_1);
};

struct S_001313C0_Data {
    int w[10];
};

struct S_Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

/* the 32-byte key func_00131400 copies from */
struct S_00131400_In {
    S_Vec4 f0;
    S_Vec4 f10;
};

/* a 0x14-byte tracked value: current value, a time, and its limits */
struct S_KeyNode {
    f32 f0;
    int f4;
    f32 f8;
    f32 fC;
    f32 f10;
};

void *func_001E8A44(int size);

static S_KeyNode *initKeyNode(S_KeyNode *n, f32 value, int time)
{
    n->f0 = value;
    n->f4 = time;
    n->fC = 3.40282347e+38f;
    n->f10 = -3.40282347e+38f;
    n->f8 = 1.0f;
    return n;
}

/* CinematographerCam */
struct C_001313C0 {
    void *vtbl;
    S_Vec4 f4;
    S_Vec4 f14;
    S_Vec4 f24;
    S_Vec4 f34;
    f32 f44;
    f32 f48;
    f32 f4C;
    int f50;
    int f54;
    int f58;
    f32 f5C;
    f32 f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    S_KeyNode *f80;
    S_KeyNode *f84;
    S_KeyNode *f88;
    S_KeyNode *f8C;
    S_KeyNode *f90;
    S_KeyNode *f94;
    u32 f98;
    int f9C;
    f32 fA0;
    int fA4;
    int fA8;
    S_001313C0_Data fAC;
    C_001313C0 *func_00131150(void);
    int func_00131260(int a1, int a2, int a3, int a4, f32 a5, f32 a6, int a7, int a8, int a9);
    void func_001313C0(S_001313C0_Data *src);
    void func_00131400(S_00131400_In *in, int param_2);
    void func_0012B510(void);
};

extern int D_00284514;

f32 func_0014F870(f32 a);
f32 func_0014FBA0(f32 a, f32 b);
void func_001310E0(S_Vec4 *a, S_Vec4 *b);


C_001313C0 *C_001313C0::func_00131150(void)
{
    S_Vec4 v;
    int *p;

    func_0012B510();
    vtbl = &D_00284514;
    p = (int *)&f4;  p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (int *)&f14; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (int *)&f24; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (int *)&f34; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    v.w = 1.0f;
    v.x = 1500.0f;
    v.y = 100.0f;
    v.z = 1500.0f;
    f4 = v;
    f14 = v;
    f44 = 1.5707964f;
    fA0 = 80.0f;
    f78 = 1;
    f5C = 90.0f;
    f60 = 25.0f;
    f98 = 1;
    f48 = 0;
    f4C = 0;
    f6C = 0;
    f70 = 0;
    f74 = 0;
    f9C = 0;
    f80 = 0;
    f84 = 0;
    f88 = 0;
    f8C = 0;
    f90 = 0;
    f94 = 0;
    f64 = 0;
    f68 = 0;
    f7C = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0;
    return this;
}

int C_001313C0::func_00131260(int a1, int a2, int a3, int a4, f32 a5, f32 a6, int a7, int a8, int a9)
{
    S_KeyNode *n;

    n = (S_KeyNode *)func_001E8A44(0x14);
    f80 = n ? initKeyNode(n, f4.x, a8) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f88 = n ? initKeyNode(n, f4.z, a8) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f84 = n ? initKeyNode(n, f4.y, a9) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f8C = n ? initKeyNode(n, f48, a7) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f90 = n ? initKeyNode(n, f4C, a7) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f94 = n ? initKeyNode(n, fA0, a2) : 0;
    fA8 = a4;
    fA4 = a3;
    f5C = a5;
    f74 = a1;
    f60 = a6;
    return 1;
}

void C_001313C0::func_001313C0(S_001313C0_Data *src)
{
    if (src->w[4] != 0) {
        f9C = (f9C == 0);
    }
    fAC = *src;
}

void C_001313C0::func_00131400(S_00131400_In *in, int param_2)
{
    f14 = in->f0;
    f4 = in->f0;
    *(f32 *)f80 = f14.x;
    *(f32 *)f84 = f14.y;
    *(f32 *)f88 = f14.z;
    S_Vec4 v = in->f10;
    f48 = func_0014F870(-v.y);
    v.y = 0;
    func_001310E0(&v, &v);
    f4C = func_0014FBA0(v.x, v.z);
    f98 = 1;
}

void C_001314E0::func_001314E0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = 0;
  return;
}
