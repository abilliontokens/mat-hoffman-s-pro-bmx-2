/* 5 functions from 0x001A7880 to 0x001A8720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001A7FC0 {
    undefined4 func_001A7FC0(byte param_1);
};


undefined4 C_001A7FC0::func_001A7FC0(byte param_1)
{
  int func_001A7260(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A7260();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
