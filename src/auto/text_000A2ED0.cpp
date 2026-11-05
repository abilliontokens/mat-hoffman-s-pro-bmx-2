/* 10 functions from 0x000A2ED0 to 0x000A3DE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000A3B60 {
    void func_000A3B60(int param_1);
};


void C_000A3B60::func_000A3B60(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x568)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x56c) + iVar1 * 4) == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0x56c) + iVar1 * 4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x568));
  }
  return;
}
