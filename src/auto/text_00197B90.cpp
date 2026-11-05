/* 18 functions from 0x00197B90 to 0x00198B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00198390 {
    void func_00198390(void);
};


void C_00198390::func_00198390(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) | 4;
  return;
}
