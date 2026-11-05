/* 21 functions from 0x00181DB0 to 0x00182CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00182810 {
    void func_00182810(void);
};

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

struct C_00182730 {
    undefined4 func_00182730(byte param_1);
};

struct C_00181DB0_Mgr {
    void func_001B0520(void *a0);
    void func_001B05A0(int a0, int a1, void *a2);
};

struct C_00181DB0_Entry {
    int f0;
    C_00181DB0_Mgr *f4;
};

struct C_00181DB0_Global {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a0, int a1);
    char pad4[0x10];
    C_00181DB0_Entry *f14;
    char pad18[8];
    char f20;
    int func_00161850(int a0);
    void func_001B26C0(int a0);
};

extern C_00181DB0_Global *D_002A829C;

struct C_00181DB0 {
    char pad0[0x1A1];
    char f1A1;
    char pad1A2[0x12];
    int f1B4;
    int *f1B8;
    int f1BC;
    void func_00181DB0(int a0);
    int func_00182020(int a0, int a1);
    void func_001820B0(int a0, int a1, int a2);
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

undefined4 C_00182730::func_00182730(byte param_1)
{
  int func_00181540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_00181540();
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

void C_00182810::func_00182810(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x14) + 1;
  *(int *)(in_ECX + 0x14) = iVar1;
  if (iVar1 == *(int *)(in_ECX + 0x10)) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  return;
}

