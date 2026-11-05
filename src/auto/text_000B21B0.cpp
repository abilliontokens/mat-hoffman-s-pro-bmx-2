/* 14 functions from 0x000B21B0 to 0x000B2ED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000B2C60 {
    undefined4 func_000B2C60(byte param_1);
};

struct C_000B2510 {
    void func_000B2510(int param_1);
};

struct C_000B2530 {
    undefined4 func_000B2530(void);
};


void C_000B2510::func_000B2510(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x5c) != param_1) {
    *(undefined1 *)(in_ECX + 0x1a1) = 1;
    *(int *)(in_ECX + 0x58) = param_1;
  }
  return;
}

undefined4 C_000B2530::func_000B2530(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x4b8);
}

undefined4 C_000B2C60::func_000B2C60(byte param_1)
{
  int func_000B1200(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B1200();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

