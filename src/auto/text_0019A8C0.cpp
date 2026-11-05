/* 13 functions from 0x0019A8C0 to 0x0019B890, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0019B6D0 {
    undefined4 func_0019B6D0(byte param_1);
};


undefined4 C_0019B6D0::func_0019B6D0(byte param_1)
{
  int func_0019ACE0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0019ACE0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
