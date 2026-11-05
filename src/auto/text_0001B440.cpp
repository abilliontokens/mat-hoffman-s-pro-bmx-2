/* 22 functions from 0x0001B440 to 0x0001C2E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0001C280 {
    undefined4 func_0001C280(int param_1);
};


int __stdcall func_0001B900(int param_1)
{
  return *(int *)(param_1 + 0x60) + -1;
}

undefined4 C_0001C280::func_0001C280(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + param_1 * 4);
}

