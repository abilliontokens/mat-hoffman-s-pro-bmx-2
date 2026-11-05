/* 4 functions from 0x00099E50 to 0x0009A290, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0009A0E0 {
    void func_0009A0E0(int param_1);
};


void C_0009A0E0::func_0009A0E0(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x18) != 3) {
    *(int *)(param_1 + 4) =
         *(int *)(param_1 + 4) + *(int *)(in_ECX + 0x20 + *(int *)(in_ECX + 0x18) * 4);
  }
  return;
}
