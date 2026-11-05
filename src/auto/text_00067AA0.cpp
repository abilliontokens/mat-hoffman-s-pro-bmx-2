/* 12 functions from 0x00067AA0 to 0x000689E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00067D60 {
    void func_00067D60(int param_1, undefined4 param_2);
};

struct C_00067D80 {
    void func_00067D80(int param_1);
};


void C_00067D60::func_00067D60(int param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118 + param_1 * 4) = param_2;
  return;
}

void C_00067D80::func_00067D80(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xd8 + param_1 * 4) = 1;
  return;
}
