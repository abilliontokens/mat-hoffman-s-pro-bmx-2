/* 15 functions from 0x000A74B0 to 0x000A84A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000A7500 {
    void func_000A7500(void);
};

struct C_000A7560 {
    char pad0[0xF0];
    int unkF0;
    void func_000A7560(void);
};


void C_000A7500::func_000A7500(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 1;
  if (1 < *(int *)(in_ECX + 0x140)) {
    puVar2 = (undefined4 *)(in_ECX + 0x7c);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x140));
  }
  return;
}

void C_000A7560::func_000A7560(void) {
    unkF0 = 0;
}
