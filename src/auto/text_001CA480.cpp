/* 15 functions from 0x001CA480 to 0x001CB440, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001CB120 {
    bool func_001CB120(void);
};


bool C_001CB120::func_001CB120(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0xcc) == 2;
}
