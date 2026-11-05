/* 16 functions from 0x00097050 to 0x00097FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000976A0 {
    undefined4 func_000976A0(void);
};

struct C_00097700 {
    bool func_00097700(void);
};


undefined4 C_000976A0::func_000976A0(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    return *(undefined4 *)(in_ECX + 0x1c);
  }
  return *(undefined4 *)(in_ECX + 0x18);
}

bool C_00097700::func_00097700(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x18) == 3;
}
