/* 8 functions from 0x001B35D0 to 0x001B3E70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001B3970(int param_1)
{
  int func_001E8390(...);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      func_001E8390(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      func_001E8390(*(int *)(param_1 + 0x120));
    }
    func_001E8390(param_1);
  }
  return;
}
