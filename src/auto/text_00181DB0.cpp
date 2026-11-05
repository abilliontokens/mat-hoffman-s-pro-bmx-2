/* 21 functions from 0x00181DB0 to 0x00182CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00182550 {
    undefined4 func_00182550(byte param_1);
};

struct C_00182530 {
    longdouble func_00182530(undefined4 param_1);
};

struct C_001827E0 {
    char pad0[0x4C];
    int unk4C;
    int unk50;
    void func_001827E0(int a0, int a1);
};

struct C_00182800 {
    int unk0;
    void func_00182800(void);
};


longdouble C_00182530::func_00182530(undefined4 param_1)
{
  int in_ECX = (int)this;
  float fVar1;
  
  fVar1 = *(float *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1cc) = param_1;
  return (longdouble)fVar1;
}

undefined4 C_00182550::func_00182550(byte param_1)
{
  int func_00181440(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00181440();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001827E0::func_001827E0(int a0, int a1) {
    unk50 = a1;
    unk4C = a0;
}

void C_00182800::func_00182800(void) {
    extern int D_0028933C;
    unk0 = (int)&D_0028933C;
}
