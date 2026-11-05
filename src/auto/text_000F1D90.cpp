/* 16 functions from 0x000F1D90 to 0x000F2CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000F2CA0 {
    undefined4 func_000F2CA0(byte param_1);
};

extern int D_0027E00C;
extern int D_0027DFFC;

struct C_000F2750 {
    undefined4 *func_000F2750(byte param_1);
};

struct C_000F2780_Obj3 {
    void func_00094C60();
};

struct C_000F2780_Obj2 {
    char pad0[0x2FC];
    C_000F2780_Obj3 *f2fc;
};

struct C_000F2780_Global {
    char pad0[0x2E0];
    C_000F2780_Obj2 *f2e0;
};

extern C_000F2780_Global *D_002A8490;

struct C_000F2780_Ed274 {
    void func_00093120();
};

struct C_000F2780_Ed {
    char pad0[0x274];
    C_000F2780_Ed274 *f274;
    int func_000BB3F0(int a0, int a1);
    void func_000BB3B0(int a0, int a1);
};

struct C_000F2780 {
    char pad0[0x124];
    void *f124;
    char pad128[0x15C];
    int f284;
    int f288;
    int f28C;
    int f290;
    char pad294[4];
    int arr298[0x14];
    void func_000BFEE0();
    void func_000F2780();
};


undefined4 *C_000F2750::func_000F2750(byte param_1)
{
  int func_001BE3F0(...);
  int func_001E891B(...);
  undefined4 *p = (undefined4 *)this;

  *p = (undefined4)&D_0027E00C;
  func_001BE3F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(p);
  }
  return p;
}

undefined4 C_000F2CA0::func_000F2CA0(byte param_1)
{
  int func_000C45E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C45E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
