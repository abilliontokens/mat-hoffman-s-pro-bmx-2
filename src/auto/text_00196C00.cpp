/* 17 functions from 0x00196C00 to 0x00197B90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00197590 {
    void func_00197590(void);
};

struct C_00197250 {
    char pad0[0x2C];
    float unk2C;
    float func_00197250(void);
};


float C_00197250::func_00197250(void) {
    return unk2C;
}

void C_00197590::func_00197590(void)
{
  int func_00196290(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) & 0x51;
  func_00196290();
  return;
}

