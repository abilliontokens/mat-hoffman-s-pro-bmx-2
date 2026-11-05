/* 23 functions from 0x001BD080 to 0x001BDFB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BDA20 {
    void func_001BDA20(void);
};

struct C_001BD9F0 {
    void func_001BD9F0(void);
};


void C_001BD9F0::func_001BD9F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x1c))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDA20::func_001BDA20(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x14))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

