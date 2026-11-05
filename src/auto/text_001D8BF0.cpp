/* 5 functions from 0x001D8BF0 to 0x001D9970, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D9950 {
    undefined4 func_001D9950(byte param_1);
};


undefined4 C_001D9950::func_001D9950(byte param_1)
{
  int func_001D8B70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D8B70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
