/* 15 functions from 0x001670C0 to 0x00167FE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00167750 {
    undefined4 func_00167750(void);
};

struct C_001677B0 {
    char pad0[0x358];
    int unk358;
    void func_001677B0(int a0);
};


undefined4 C_00167750::func_00167750(void)
{
  int func_001D3F50(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3F50();
  return in_ECX;
}

void C_001677B0::func_001677B0(int a0) {
    unk358 = a0;
}
