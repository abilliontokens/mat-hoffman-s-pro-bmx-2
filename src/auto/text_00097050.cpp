/* 16 functions from 0x00097050 to 0x00097FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00097700 {
    bool func_00097700(void);
};


bool C_00097700::func_00097700(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x18) == 3;
}
