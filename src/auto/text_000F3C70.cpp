/* 6 functions from 0x000F3C70 to 0x000F4BA0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_000F4B80 {
    undefined4 func_000F4B80(byte param_1);
};

struct C_000F3EE0 {
    undefined4 func_000F3EE0(byte param_1);
};

struct C_000F3EC0 {
    undefined4 func_000F3EC0(byte param_1);
};
struct Obj_000F3C70_74 {
    int func_000301D0();
};

struct Obj_000F3C70_25C {
    char pad0[0x74];
    Obj_000F3C70_74 *p74;
};

struct Btn_000F3C70 {
    void func_00103260(int a);
    void func_00103350();
};

struct Owner_000F3C70 {
    char pad0[0x25C];
    Obj_000F3C70_25C *p25C;
    char pad260[0x44];
    int f2A4;
    Btn_000F3C70 *func_000BA9B0(int id);
};

struct Data_000F3C70_2D0 {
    char pad0[0x3B];
    unsigned char b3B;
};

struct VPage_000F3C70 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(int a, int b);
};

extern float D_00278C48;
extern float D_0027DE74;

struct BmxUIPageParkEditor {
    void **vtbl;
    char pad4[0x120];
    Owner_000F3C70 *p124;
    char pad128[0x20];
    int a148[8];
    char pad168[0x118];
    int f280;
    int f284;
    float f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    char pad2A8[8];
    int f2B0;
    float f2B4;
    int f2B8;
    int f2BC;
    int f2C0;
    int f2C4;
    float f2C8;
    float f2CC;
    Data_000F3C70_2D0 *p2D0;
    void func_000F3C70(float dt);
    void func_001BEE50(int a, int b, int c);
    void func_001BED00(float dt);
};

undefined4 C_000F3EC0::func_000F3EC0(byte param_1)
{
  int func_000C66E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C66E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000F3EE0::func_000F3EE0(byte param_1)
{
  int func_000C7900(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C7900();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000F4B80::func_000F4B80(byte param_1)
{
  int func_000C8660(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C8660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

