/* 9 functions from 0x0005A8F0 to 0x0005B8D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0005B220 {
    void func_0005B220(void);
};

struct C_0005B870 {
    char pad0[0xCD0];
    int unkCD0;
    int func_0005B870(void);
};


void C_0005B220::func_0005B220(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x300);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}

int C_0005B870::func_0005B870(void) {
    return (int)&unkCD0;
}
