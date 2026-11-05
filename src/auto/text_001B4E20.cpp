/* 20 functions from 0x001B4E20 to 0x001B5D90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B56F0 {
    undefined4 func_001B56F0(void);
};

struct C_001B59E0 {
    int unk0;
    int unk4;
    char unk8;
    C_001B59E0* func_001B59E0(void);
};


undefined4 C_001B56F0::func_001B56F0(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x84) * 4) +
                  *(int *)(in_ECX + 0x8c) * 4) * 4);
}

C_001B59E0* C_001B59E0::func_001B59E0(void) {
    extern int D_0028CC28;
    unk0 = (int)&D_0028CC28;
    unk4 = 0;
    unk8 = 0;
    return this;
}
