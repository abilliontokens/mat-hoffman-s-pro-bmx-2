/* 12 functions from 0x000B5260 to 0x000B6180, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000B6080 {
    void func_000B6080(int param_1);
};

struct C_000B5870 {
    char pad0[0x24];
    int unk24;
    int func_000B5870(void);
};


int C_000B5870::func_000B5870(void) {
    return unk24;
}

void C_000B6080::func_000B6080(int param_1)
{
  int func_000B58B0(...);
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x34);
  func_000B58B0();
  return;
}

