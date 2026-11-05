/* 16 functions from 0x001D0020 to 0x001D0FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D0DE0 {
    undefined4 func_001D0DE0(byte param_1);
};


undefined4 C_001D0DE0::func_001D0DE0(byte param_1)
{
  int func_001D0D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D0D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
