/* 7 functions from 0x0015F120 to 0x0015FF80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0015F860 {
    undefined4 func_0015F860(byte param_1);
};

struct C_0015F840 {
    undefined4 func_0015F840(byte param_1);
};


undefined4 C_0015F840::func_0015F840(byte param_1)
{
  int func_0015E600(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015E600();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0015F860::func_0015F860(byte param_1)
{
  int func_0015F080(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015F080();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

