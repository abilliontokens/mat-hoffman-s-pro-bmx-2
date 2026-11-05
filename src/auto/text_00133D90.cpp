/* 10 functions from 0x00133D90 to 0x00134A10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001349F0 {
    undefined4 func_001349F0(byte param_1);
};


undefined4 C_001349F0::func_001349F0(byte param_1)
{
  int func_00133E60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00133E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
