/* 28 functions from 0x00192470 to 0x00193240, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00192B50 {
    undefined4 func_00192B50(byte param_1);
};

struct C_001926D0 {
    undefined4 func_001926D0(byte param_1);
};


undefined4 C_001926D0::func_001926D0(byte param_1)
{
  int func_00192420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00192420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00192B50::func_00192B50(byte param_1)
{
  int in_ECX = (int)this;
  
  if ((param_1 & 1) != 0) {
    return *(undefined4 *)(in_ECX + 0x28);
  }
  if ((param_1 & 2) != 0) {
    return *(undefined4 *)(in_ECX + 0x2c);
  }
  return 0;
}

