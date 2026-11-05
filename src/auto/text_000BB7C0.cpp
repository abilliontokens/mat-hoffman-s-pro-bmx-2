/* 26 functions from 0x000BB7C0 to 0x000BC7B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000BC670 {
    undefined4 func_000BC670(void);
};


undefined4 C_000BC670::func_000BC670(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x48);
}
