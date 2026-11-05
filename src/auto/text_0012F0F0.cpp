/* 8 functions from 0x0012F0F0 to 0x0012FE50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0012FE30 {
    undefined4 func_0012FE30(byte param_1);
};


undefined4 C_0012FE30::func_0012FE30(byte param_1)
{
  int func_0012EF60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012EF60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
