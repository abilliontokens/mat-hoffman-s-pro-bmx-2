/* 24 functions from 0x00156880 to 0x00157810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001576D0 {
    void func_001576D0(void);
};

struct C_001576C0 {
    void func_001576C0(void);
};


void C_001576C0::func_001576C0(void)
{
  int* in_ECX = (int*)this;
  
  *(byte *)((int)in_ECX + 0x21) = *(byte *)((int)in_ECX + 0x21) & 0xfc;
                    
                    
  (**(code **)(*in_ECX + 0x20))();
  return;
}

void C_001576D0::func_001576D0(void)
{
  int* in_ECX = (int*)this;
  
  *(byte *)((int)in_ECX + 0x21) = *(byte *)((int)in_ECX + 0x21) | 3;
                    
                    
  (**(code **)(*in_ECX + 0x24))();
  return;
}

