/* 9 functions from 0x00089290 to 0x0008A190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0008A000 {
    undefined4 func_0008A000(int param_1);
};

struct C_0008A080 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A080(void);
};

struct C_0008A060 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A060(void);
};

struct C_0008A0A0 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A0A0(void);
};


undefined4 C_0008A000::func_0008A000(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x120) = param_1;
  return 1;
}

void C_0008A060::func_0008A060(void) {
    unk128 = 1;
    unk12C = 0;
}

void C_0008A080::func_0008A080(void) {
    unk128 = 0;
    unk12C = 1;
}

void C_0008A0A0::func_0008A0A0(void) {
    unk128 = 0;
    unk12C = 0;
}
