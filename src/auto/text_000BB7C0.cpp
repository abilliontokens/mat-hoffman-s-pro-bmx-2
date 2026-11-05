/* 26 functions from 0x000BB7C0 to 0x000BC7B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000BBDF0 {
    int func_000BBDF0(void);
};

struct C_000BC4A0 {
    void func_000BC4A0(undefined4 param_1, undefined4 param_2);
};

struct C_000BC670 {
    undefined4 func_000BC670(void);
};


int C_000BBDF0::func_000BBDF0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(*(int *)(*(int *)(in_ECX + 0x284) * 0x1a8 + 0x120 + *(int *)(in_ECX + 0x27c)) +
                 *(int *)(in_ECX + 0x288) * 4) * 0x120 + *(int *)(in_ECX + 0x280);
}

void C_000BC4A0::func_000BC4A0(undefined4 param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x30);
  *(undefined4 *)(iVar1 + 0x3c) = param_1;
  *(undefined4 *)(iVar1 + 0x40) = param_2;
  return;
}

undefined4 C_000BC670::func_000BC670(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x48);
}
