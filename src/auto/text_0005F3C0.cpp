/* 10 functions from 0x0005F3C0 to 0x00060370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00060350 {
    char pad0[0x11C];
    int unk11C;
    char pad120[0x8];
    int unk128;
    int unk12C;
    void func_00060350(int a0);
};

struct C_000601B0 {
    void func_000601B0(void);
};


void C_000601B0::func_000601B0(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x3f] = 0;
  in_ECX[0x4c] = 1;
                    
                    
  (**(code **)(*in_ECX + 0x10))();
  return;
}

void C_00060350::func_00060350(int a0) {
    unk11C = a0;
    unk128 = 1;
    unk12C = 1;
}

