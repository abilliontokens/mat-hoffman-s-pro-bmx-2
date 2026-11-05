/* 10 functions from 0x00149620 to 0x0014A610, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0014A500 {
    undefined4 func_0014A500(byte param_1);
};

struct C_0014A520 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A520* func_0014A520(int a0);
};


undefined4 C_0014A500::func_0014A500(byte param_1)
{
  int func_0014A420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014A420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0014A520* C_0014A520::func_0014A520(int a0) {
    unk0 = 0;
    unk4 = a0;
    unk8 = 0;
    return this;
}
