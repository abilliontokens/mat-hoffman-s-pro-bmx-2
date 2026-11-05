/* 13 functions from 0x0010DA70 to 0x0010E920, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0010E260 {
    void func_0010E260(void);
};


void C_0010E260::func_0010E260(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 0x1084);
  puVar2 = (undefined4 *)(iVar1 + 0x1c8);
  iVar3 = 100;
  do {
    puVar2[-100] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[100] = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  return;
}
