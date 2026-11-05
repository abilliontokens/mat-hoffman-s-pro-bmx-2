/* 17 functions from 0x001AED80 to 0x001AFCC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001AF090 {
    undefined4 func_001AF090(byte param_1);
};

struct C_001AF0B0 {
    int unk0;
    int unk4;
    int unk8;
    C_001AF0B0* func_001AF0B0(void);
};

struct C_001AF320 {
    int unk0;
    void func_001AF320(void);
};


undefined4 C_001AF090::func_001AF090(byte param_1)
{
  int func_001AE810(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE810();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001AF0B0* C_001AF0B0::func_001AF0B0(void) {
    extern int D_0028C290;
    unk0 = (int)&D_0028C290;
    unk4 = -1;
    unk8 = 0;
    return this;
}

void C_001AF320::func_001AF320(void) {
    extern int D_0028C2AC;
    int func_00157660(...);
    unk0 = (int)&D_0028C2AC;
    func_00157660();
}
