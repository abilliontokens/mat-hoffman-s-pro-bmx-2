/* 18 functions from 0x001BA560 to 0x001BB4F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BB4D0 {
    void func_001BB4D0(int param_1);
};


void C_001BB4D0::func_001BB4D0(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xf0 + param_1 * 4) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  return;
}
