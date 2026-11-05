/* 8 functions from 0x000377E0 to 0x00038760, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00037820 {
    undefined4 func_00037820(int param_1);
};

struct C_000377E0 {
    int func_000377E0(void);
};


int C_000377E0::func_000377E0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x5a0) - *(int *)(in_ECX + 0x484);
}

undefined4 C_00037820::func_00037820(int param_1)
{
  int* in_ECX = (int*)this;
  
  if (((0 < *in_ECX) && (in_ECX[1] != 0)) && (param_1 < *in_ECX)) {
    return *(undefined4 *)(in_ECX[1] + param_1 * 4);
  }
  return 0;
}

