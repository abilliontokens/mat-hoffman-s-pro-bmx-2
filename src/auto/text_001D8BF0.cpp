/* 5 functions from 0x001D8BF0 to 0x001D9970, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D9950 {
    undefined4 func_001D9950(byte param_1);
};

extern int D_00284E94;
void func_001E891B(void *p);

struct DXVSDataItem {
    void *vtbl;
    void *func_001D9930(int flags);
};

struct DXVSData {
    char pad0[0x304];
    int f304;
    int f308;
    void *func_001DDB7E(int size, int a2, int a3, int a4);
    int func_001D9760(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

void __stdcall func_0021DB06(int a, int b, int c, int d, int e, int f);
void __stdcall func_0021DB71(int a, int b, int c, int d, int e, int f);
void __stdcall func_0021DB47(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void __stdcall func_00201150(int a, int b);


undefined4 C_001D9950::func_001D9950(byte param_1)
{
  int func_001D8B70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D8B70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
