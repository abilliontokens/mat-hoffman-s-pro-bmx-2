/* 2 functions from 0x00079800 to 0x0007A0F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0007A0D0 {
    undefined4 func_0007A0D0(byte param_1);
};


undefined4 C_0007A0D0::func_0007A0D0(byte param_1)
{
  int func_00061590(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00061590();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
