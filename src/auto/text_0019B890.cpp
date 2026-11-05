/* 12 functions from 0x0019B890 to 0x0019C710, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0019C320 {
    void func_0019C320(undefined4 *param_1);
};


void C_0019C320::func_0019C320(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x13c);
  param_1[1] = *(undefined4 *)(in_ECX + 0x14c);
  param_1[2] = *(undefined4 *)(in_ECX + 0x15c);
  return;
}
