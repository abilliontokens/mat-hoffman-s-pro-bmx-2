/* 7 functions from 0x00082250 to 0x000831E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00082430 {
    void func_00082430(float param_1);
};


void C_00082430::func_00082430(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x3c) != param_1) {
    *(float *)(in_ECX + 0x3c) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 4;
  }
  return;
}
