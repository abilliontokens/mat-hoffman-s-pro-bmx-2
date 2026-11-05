/* 7 functions from 0x000ADF20 to 0x000AEF10, found by Ghidra. */
#include "common.h"

extern int D_0027C594;
extern int D_0027C1EC;

void func_001E891B(void *p);

struct GrindElem {
    void func_000A83C0();
};

struct WaterInclusionBoxes {
    void *vtbl;
    char pad_04[0x24];
    void *field_28;
    void func_00157660();
    void *func_000AEC50(unsigned int flags);
};

struct Grinds {
    void *vtbl;
    char pad_04[0x20];
    int count;
    GrindElem **arr;
    void func_00157660();
    void func_000AE6E0();
};
#include "ghidra.h"
struct C_000AE740 {
    undefined4 func_000AE740(byte param_1);
};


undefined4 C_000AE740::func_000AE740(byte param_1)
{
  int func_000A9120(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000A9120();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
