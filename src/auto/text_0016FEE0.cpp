/* 10 functions from 0x0016FEE0 to 0x00170DB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00170B10 {
    undefined4 func_00170B10(byte param_1);
};

struct C_00170B50 {
    int unk0;
    void func_00170B50(void);
};


undefined4 C_00170B10::func_00170B10(byte param_1)
{
  int func_001703B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001703B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00170B50::func_00170B50(void) {
    extern int D_00288B4C;
    int func_00171980(...);
    unk0 = (int)&D_00288B4C;
    func_00171980();
}
