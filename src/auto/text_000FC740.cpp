/* 3 functions from 0x000FC740 to 0x000FCB00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000FCAE0 {
    undefined4 func_000FCAE0(byte param_1);
};


undefined4 C_000FCAE0::func_000FCAE0(byte param_1)
{
  int func_000D0FD0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D0FD0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
