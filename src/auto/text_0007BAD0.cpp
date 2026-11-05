/* 5 functions from 0x0007BAD0 to 0x0007CA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0007C670 {
    undefined4 func_0007C670(byte param_1);
};

struct C_0007C9E0 {
    undefined4 func_0007C9E0(byte param_1);
};


undefined4 C_0007C670::func_0007C670(byte param_1)
{
  int func_00066DC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00066DC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007C9E0::func_0007C9E0(byte param_1)
{
  int func_000688C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000688C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

