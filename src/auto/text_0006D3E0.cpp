/* 11 functions from 0x0006D3E0 to 0x0006E330, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0006DF20 {
    void func_0006DF20(int param_1);
};


void C_0006DF20::func_0006DF20(int param_1)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x39] = 1;
  in_ECX[0x19] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x3e] = param_1;
  return;
}
