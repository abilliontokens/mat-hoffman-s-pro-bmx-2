/* 24 functions from 0x0015C640 to 0x0015D340, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015CD50 {
    void func_0015CD50(uint param_1);
};


void C_0015CD50::func_0015CD50(uint param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0xcc) = param_1 & 0xffffff;
  return;
}
