/* 9 functions from 0x000AEF10 to 0x000AF900, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_000AEF60 {
    undefined4 func_000AEF60(byte param_1);
};

struct C_000AEF80 {
    undefined4 func_000AEF80(byte param_1);
};


undefined4 C_000AEF60::func_000AEF60(byte param_1)
{
  int func_000AB490(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AB490();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000AEF80::func_000AEF80(byte param_1)
{
  int func_000AC410(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AC410();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
