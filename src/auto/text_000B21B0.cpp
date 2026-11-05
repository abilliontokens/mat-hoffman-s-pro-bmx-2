/* 14 functions from 0x000B21B0 to 0x000B2ED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000B2530 {
    undefined4 func_000B2530(void);
};


undefined4 C_000B2530::func_000B2530(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x4b8);
}
