/* 8 functions from 0x00101280 to 0x00101CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00101A10 {
    undefined4 func_00101A10(byte param_1);
};


undefined4 C_00101A10::func_00101A10(byte param_1)
{
  int func_000EE3B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000EE3B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
