/* 27 functions from 0x0013AB60 to 0x0013B9C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0013B1F0 {
    undefined4 func_0013B1F0(int param_1, undefined4 param_2);
};

struct C_0013AFD0 {
    undefined4 func_0013AFD0(int param_1);
};


undefined4 C_0013AFD0::func_0013AFD0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0x10 + param_1 * 0x20);
}

undefined4 C_0013B1F0::func_0013B1F0(int param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0x1c + param_1 * 0x20) = param_2;
  return 1;
}

