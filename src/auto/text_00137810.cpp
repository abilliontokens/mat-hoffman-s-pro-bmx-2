/* 11 functions from 0x00137810 to 0x00138800, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00138790 {
    undefined4 func_00138790(byte param_1);
};

struct C_001387D0 {
    C_001387D0* func_001387D0(int a0);
};


undefined4 C_00138790::func_00138790(byte param_1)
{
  int func_00138390(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00138390();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001387D0* C_001387D0::func_001387D0(int a0) {
    return this;
}
