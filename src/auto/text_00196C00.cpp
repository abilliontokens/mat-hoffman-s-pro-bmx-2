/* 17 functions from 0x00196C00 to 0x00197B90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00197290 {
    undefined4 func_00197290(byte param_1);
};

struct C_00197590 {
    void func_00197590(void);
};

struct C_00197250 {
    char pad0[0x2C];
    float unk2C;
    float func_00197250(void);
};


float C_00197250::func_00197250(void) {
    return unk2C;
}

undefined4 C_00197290::func_00197290(byte param_1)
{
  int func_00195E70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00195E70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00197590::func_00197590(void)
{
  int func_00196290(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) & 0x51;
  func_00196290();
  return;
}

