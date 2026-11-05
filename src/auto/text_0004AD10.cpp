/* 4 functions from 0x0004AD10 to 0x0004BAF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0004BA90 {
    undefined4 func_0004BA90(byte param_1);
};


undefined4 C_0004BA90::func_0004BA90(byte param_1)
{
  int func_0004ACB0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0004ACB0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
