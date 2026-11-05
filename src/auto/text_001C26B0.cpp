/* 14 functions from 0x001C26B0 to 0x001C36B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C2F70 {
    undefined4 func_001C2F70(void);
};


undefined4 C_001C2F70::func_001C2F70(void)
{
  int __stdcall func_001C04D0(int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
    func_001C04D0((int)(*(int *)(in_ECX + 0x6c)));
  }
  return 1;
}
