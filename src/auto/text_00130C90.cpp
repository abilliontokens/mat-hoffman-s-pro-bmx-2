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

struct C_001313C0 {
    char pad0[0x4];
    S_Vec4 f4;
    S_Vec4 f14;
    char pad24[0x48 - 0x24];
    f32 f48;
    f32 f4C;
    char pad50[0x80 - 0x50];
    f32 *f80;
    f32 *f84;
    f32 *f88;
    char pad8C[0x98 - 0x8C];
    u32 f98;
    int f9C;
    char padA0[0xC];
    S_001313C0_Data fAC;
    void func_001313C0(S_001313C0_Data *src);
    void func_00131400(S_00131400_In *in, int param_2);
};

f32 func_0014F870(f32 a);
f32 func_0014FBA0(f32 a, f32 b);
void func_001310E0(S_Vec4 *a, S_Vec4 *b);


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
    *f80 = f14.x;
    *f84 = f14.y;
    *f88 = f14.z;
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
