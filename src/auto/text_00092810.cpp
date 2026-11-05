/* 21 functions from 0x00092810 to 0x00093620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00092870 {
    undefined4 func_00092870(byte param_1);
};

struct C_000928E0 {
    char pad0[0x254];
    int unk254;
    int func_000928E0(void);
};

struct C_000928D0 {
    char pad0[0x150];
    int unk150;
    int func_000928D0(void);
};


undefined4 C_00092870::func_00092870(byte param_1)
{
  int func_0008D910(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0008D910();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_000928D0::func_000928D0(void) {
    return (int)&unk150;
}

int C_000928E0::func_000928E0(void) {
    return (int)&unk254;
}

void __stdcall func_00093280(int a0) {
}

