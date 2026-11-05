/* 26 functions from 0x001D3860 to 0x001D47C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D3CA0 {
    undefined4 func_001D3CA0(byte param_1);
};

struct C_001D3E60 {
    void func_001D3E60(int a0);
};

struct C_001D3F50 {
    C_001D3F50* func_001D3F50(void);
};


undefined4 C_001D3CA0::func_001D3CA0(byte param_1)
{
  int func_001D3AB0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3AB0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001D3E60::func_001D3E60(int a0) {
    int func_001E8920(...);
    func_001E8920(this, a0, 30);
}

C_001D3F50* C_001D3F50::func_001D3F50(void) {
    return this;
}
