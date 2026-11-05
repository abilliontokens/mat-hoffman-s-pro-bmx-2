/* 19 functions from 0x001002A0 to 0x00101280, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001003E0 {
    undefined4 func_001003E0(byte param_1);
};


undefined4 C_001003E0::func_001003E0(byte param_1)
{
  int func_000E0DF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000E0DF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
