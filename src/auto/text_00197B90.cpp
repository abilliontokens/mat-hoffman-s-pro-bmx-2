/* 18 functions from 0x00197B90 to 0x00198B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001982F0 {
    void func_001982F0(void);
};

struct C_00197E70 {
    void func_00197E70(undefined4 *param_1);
};

struct C_001983A0 {
    void func_001983A0(void);
};

struct C_00198390 {
    void func_00198390(void);
};


void C_00197E70::func_00197E70(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xbc);
  param_1[1] = *(undefined4 *)(in_ECX + 0xcc);
  param_1[2] = *(undefined4 *)(in_ECX + 0xdc);
  return;
}

void C_001982F0::func_001982F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  *(byte *)(in_ECX + 0x180) = *(byte *)(in_ECX + 0x180) | 0x80;
  piVar2 = (int *)(in_ECX + 0x170);
  for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x170)) {
    iVar1 = *piVar2;
    *(byte *)(iVar1 + 0x180) = *(byte *)(iVar1 + 0x180) | 0x80;
    piVar2 = (int *)(iVar1 + 0x170);
  }
  return;
}

void C_00198390::func_00198390(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) | 4;
  return;
}

void C_001983A0::func_001983A0(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) & 0xfb;
  return;
}

