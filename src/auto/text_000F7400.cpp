/* 7 functions from 0x000F7400 to 0x000F83C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000F7670 {
    undefined4 func_000F7670(byte param_1);
};


undefined4 C_000F7670::func_000F7670(byte param_1)
{
  int func_000CB650(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000CB650();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
