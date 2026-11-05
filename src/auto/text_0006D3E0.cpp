/* 11 functions from 0x0006D3E0 to 0x0006E330, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0006DF20 {
    void func_0006DF20(int param_1);
};

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

int func_001361E0(int, int, int *, int);

struct C_0006E2C0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x80];
    C_00031610 *unkE8;
    int unkEC;
    char padF0[8];
    int unkF8;
    int func_0006E2C0(int *param_1, int param_2);
};


void C_0006DF20::func_0006DF20(int param_1)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x39] = 1;
  in_ECX[0x19] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x3e] = param_1;
  return;
}
