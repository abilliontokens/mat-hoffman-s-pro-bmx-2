/* 8 functions from 0x000377E0 to 0x00038760, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000377E0 {
    int func_000377E0(void);
};


int C_000377E0::func_000377E0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x5a0) - *(int *)(in_ECX + 0x484);
}
