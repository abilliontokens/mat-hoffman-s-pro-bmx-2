/* 10 functions from 0x0005F3C0 to 0x00060370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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
