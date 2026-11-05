/* 10 functions from 0x00088B60 to 0x00089290, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00088F60 {
    void func_00088F60(int param_1);
};


void C_00088F60::func_00088F60(int param_1)
{
  int in_ECX = (int)this;
  
  *(float *)(in_ECX + 0x30) = (float)param_1;
  return;
}
