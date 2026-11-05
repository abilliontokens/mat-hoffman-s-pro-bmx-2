/* 5 functions from 0x000AF900 to 0x000B03A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_000B0320 {
    undefined4 func_000B0320(byte param_1);
};

struct C_000B0300 {
    undefined4 func_000B0300(byte param_1);
};


undefined4 C_000B0300::func_000B0300(byte param_1)
{
  int func_000AE6E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AE6E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000B0320::func_000B0320(byte param_1)
{
  int func_000AEF10(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AEF10();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

