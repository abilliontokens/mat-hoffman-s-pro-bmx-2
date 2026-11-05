/* 11 functions from 0x00137810 to 0x00138800, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001387E0 {
    undefined4 func_001387E0(byte param_1);
};

struct C_00138790 {
    undefined4 func_00138790(byte param_1);
};

struct C_001387D0 {
    C_001387D0* func_001387D0(int a0);
};

extern int D_002849BC;
extern int D_00284924;
extern int D_002A67D8;
extern int D_002BDE8C;

struct CubeTextureMap {
    void *vtbl;
    void func_001D6AD0(int a);
    void *func_001387B0(int a);
};

struct DrawableCube {
    void *vtbl;
    char pad4[0x23];
    u8 f27;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char pad40[0x780];
    int f7c0;
    int f7c4;
    int f7c8;
    int f7cc;
    int f7d0;
    int f7d4;
    int f7d8;
    void func_00136FE0();
    void func_00137810();
    void func_00192370(int a);
    int func_001382B0(void);
    DrawableCube *func_00138330(int a);
};


undefined4 C_00138790::func_00138790(byte param_1)
{
  int func_00138390(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00138390();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *CubeTextureMap::func_001387B0(int a)
{
    func_001D6AD0(a);
    vtbl = (void *)&D_002849BC;
    return this;
}

C_001387D0* C_001387D0::func_001387D0(int a0) {
    return this;
}

undefined4 C_001387E0::func_001387E0(byte param_1)
{
  int func_001D6B00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D6B00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

