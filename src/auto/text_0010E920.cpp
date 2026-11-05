/* 2 functions from 0x0010E920 to 0x0010F320, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0010F300 {
    undefined4 func_0010F300(byte param_1);
};


undefined4 C_0010F300::func_0010F300(byte param_1)
{
  int func_00109D40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00109D40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
