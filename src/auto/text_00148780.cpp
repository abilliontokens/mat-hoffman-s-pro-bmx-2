/* 24 functions from 0x00148780 to 0x00149620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001488F0 {
    undefined4 func_001488F0(byte param_1);
};

struct C_00149300 {
    void func_00149300(void);
};


undefined4 C_001488F0::func_001488F0(byte param_1)
{
  int func_001452A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001452A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00149300::func_00149300(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 4))();
  return;
}

void func_001493A0(void) {
    int func_001B1010(...);
    func_001B1010();
}
