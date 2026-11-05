/* 23 functions from 0x0013F690 to 0x00140680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00140660 {
    undefined4 func_00140660(byte param_1);
};

struct C_0013FA70 {
    undefined4 func_0013FA70(undefined4 param_1);
};


undefined4 C_0013FA70::func_0013FA70(undefined4 param_1)
{
  int __stdcall func_0015B210(int);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015B210((int)(param_1));
  return in_ECX;
}

undefined4 C_00140660::func_00140660(byte param_1)
{
  int func_0013FC00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013FC00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

