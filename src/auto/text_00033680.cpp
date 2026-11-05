/* 3 functions from 0x00033680 to 0x000342C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000342A0 {
    undefined4 func_000342A0(byte param_1);
};


undefined4 C_000342A0::func_000342A0(byte param_1)
{
  int func_00033220(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00033220();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
