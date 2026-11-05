/* 8 functions from 0x0017D580 to 0x0017E2C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0017D580 {
    undefined4 func_0017D580(byte param_1);
};


undefined4 C_0017D580::func_0017D580(byte param_1)
{
  int func_0017C520(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0017C520();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
