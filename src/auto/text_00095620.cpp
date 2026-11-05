/* 9 functions from 0x00095620 to 0x00096450, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00095620 {
    undefined4 func_00095620(byte param_1);
};


undefined4 C_00095620::func_00095620(byte param_1)
{
  int func_00095060(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00095060();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
