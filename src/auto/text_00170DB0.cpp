/* 11 functions from 0x00170DB0 to 0x00171D00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001719B0 {
    void func_001719B0(int param_1);
};


void C_001719B0::func_001719B0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(int *)(in_ECX + 0x22c) = param_1;
  }
  return;
}
