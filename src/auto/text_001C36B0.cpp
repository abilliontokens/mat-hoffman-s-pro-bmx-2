/* 36 functions from 0x001C36B0 to 0x001C4560, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C3D60 {
    void func_001C3D60(int param_1);
};

struct C_001C3D40 {
    void func_001C3D40(int param_1);
};

struct C_001C3E00 {
    int unk0;
    char pad4[0x2C];
    int unk30;
    void func_001C3E00(void);
};

struct C_001C3F50 {
    bool func_001C3F50(void);
};

struct C_001C3D30 {
    char pad0[0x10];
    int unk10;
    void func_001C3D30(int a0);
};

struct C_001C3F30 {
    undefined4 func_001C3F30(void);
};

struct C_001C3D80 {
    char pad0[0x14];
    int unk14;
    int unk18;
    void func_001C3D80(void);
};


void C_001C3D30::func_001C3D30(int a0) {
    unk10 = a0;
}

void C_001C3D40::func_001C3D40(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x14) = 1;
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 0x18) = 1;
  }
  return;
}

void C_001C3D60::func_001C3D60(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x14) = 2;
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 0x18) = 2;
  }
  return;
}

void C_001C3D80::func_001C3D80(void) {
    unk14 = unk18;
}

void C_001C3E00::func_001C3E00(void) {
    extern int D_0028E3A0;
    int func_001E891B(...);
    unk0 = (int)&D_0028E3A0;
    func_001E891B(unk30);
}

undefined4 C_001C3F30::func_001C3F30(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x38);
}

bool C_001C3F50::func_001C3F50(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x6c) != 0;
}

