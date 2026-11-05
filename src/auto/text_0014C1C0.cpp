/* 12 functions from 0x0014C1C0 to 0x0014CC60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0014CA60 {
    undefined4 func_0014CA60(void);
};

struct C_0014C530 {
    char pad0[0xEC];
    int unkEC;
    void func_0014C530(void);
};


void C_0014C530::func_0014C530(void) {
    extern int D_002B9344;
    int func_0014B260(...);
    D_002B9344 = unkEC;
    func_0014B260();
}

undefined4 C_0014CA60::func_0014CA60(void)
{
  extern undefined4 D_002BF250;
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(D_002BF250 + 0x54 + (uint)*(byte *)(in_ECX + 0xe) * 4) + 0x1ec);
}

