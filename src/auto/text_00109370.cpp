/* 17 functions from 0x00109370 to 0x00109F80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00109370 {
    int func_00109370(void);
};

struct C_00109570 {
    int unk0;
    int func_00109570(void);
};


int C_00109370::func_00109370(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x34) + 1;
}

int C_00109570::func_00109570(void) {
    return unk0;
}
