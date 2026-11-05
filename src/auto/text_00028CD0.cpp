/* 5 functions from 0x00028CD0 to 0x00029BD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00029290 {
    undefined4 func_00029290(void);
};


undefined4 C_00029290::func_00029290(void)
{
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(in_ECX + 0x468) != 0) && (*(int *)(in_ECX + 0x210) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x210) + 0x78) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
