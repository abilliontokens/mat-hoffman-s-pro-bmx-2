/* 12 functions from 0x000B9AD0 to 0x000BA9F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_000BA9D0 {
    undefined4 func_000BA9D0(int param_1);
};

struct C_000BA9B0 {
    undefined4 func_000BA9B0(int param_1);
};


void func_000BA290(void) {
    int func_000BC7B0(...);
    func_000BC7B0();
}

void __stdcall func_000BA430(int a0, int a1, int a2, int a3) {
}

undefined4 C_000BA9B0::func_000BA9B0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x120) + -4 + param_1 * 4);
}

undefined4 C_000BA9D0::func_000BA9D0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x110) + -4 + param_1 * 4);
}

