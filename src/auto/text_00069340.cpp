/* 9 functions from 0x00069340 to 0x0006A1A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00069BA0 {
    void func_00069BA0(void);
};


void C_00069BA0::func_00069BA0(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x50] = 0;
                    
                    
  (**(code **)(*in_ECX + 0x10))();
  return;
}
