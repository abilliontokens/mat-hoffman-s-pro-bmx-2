/* 18 functions from 0x00050D70 to 0x00051CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00051120 {
    void func_00051120(short param_1);
};


void C_00051120::func_00051120(short param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0x38) = (int)param_1 << 0x18 | *(uint *)(in_ECX + 0x38) & 0xffffff;
  *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 2;
  return;
}
