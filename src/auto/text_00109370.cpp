/* 17 functions from 0x00109370 to 0x00109F80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001093A0 {
    undefined4 func_001093A0(int param_1);
};

struct C_00109390 {
    undefined4 func_00109390(int param_1);
};

struct C_00109380 {
    undefined4 func_00109380(int param_1);
};

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

undefined4 C_00109380::func_00109380(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x38 + param_1 * 4);
}

undefined4 C_00109390::func_00109390(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x1c8 + param_1 * 4);
}

undefined4 C_001093A0::func_001093A0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x358 + param_1 * 4);
}

int C_00109570::func_00109570(void) {
    return unk0;
}
