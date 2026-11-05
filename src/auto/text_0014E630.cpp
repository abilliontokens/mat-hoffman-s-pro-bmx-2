/* 11 functions from 0x0014E630 to 0x0014F600, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0014F170 {
    undefined4 func_0014F170(byte param_1);
};


undefined4 C_0014F170::func_0014F170(byte param_1)
{
  int func_0014E4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014E4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
