/* 16 functions from 0x000F1D90 to 0x000F2CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000F2CA0 {
    undefined4 func_000F2CA0(byte param_1);
};

extern int D_0027DF54;
extern int D_0028248C;
extern float D_00275AEC;

struct C_000F2720 {
    int unk0;
    void func_001BE3F0(void);
    void *func_000F2720(int flags);
};

struct S_000F1FC0_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct S_000F1D90_Obj {
    virtual void destroying(int flag);
    S_000F1FC0_Obj *func_001D5AA0(void);
};

struct BmxUIPageHPHChoice {
    void *vtbl;
    char pad4[0x2b4 - 4];
    S_000F1D90_Obj *unk2b4[4];
    void func_000F1D90(void);
    void func_000F1FC0(void);
    void func_000F2120(void);
    void func_001BE3F0(void);
    void func_000F2030(void);
    void func_00157960(void);
    void func_001578D0(void);
};

struct S_000F2120_Obj {
    void func_001D6600(void);
};

struct S_000F2120_Root {
    char pad0[0x34];
    S_000F2120_Obj *f34;
    S_000F2120_Obj *f38;
    S_000F2120_Obj *f3c;
};

extern S_000F2120_Root *D_002B91AC;

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

void C_000F2780::func_000F2780()
{
  C_000F2780_Obj3 *obj;
  C_000F2780_Ed *ed;
  int i;

  f284 = 1;
  obj = D_002A8490->f2e0->f2fc;
  ed = (C_000F2780_Ed *)f124;
  obj->func_00094C60();
  f28C = 0;
  f288 = 1;
  func_000BFEE0();
  ed->f274->func_00093120();
  if (ed->func_000BB3F0((int)&D_0027DFFC, (int)&D_0027DFFC) == 0) {
    ed->func_000BB3B0((int)&D_0027DFFC, (int)&D_0027DFFC);
  }
  f290 = 0;
  for (i = 0; i < 0x14; i++) {
    arr298[i] = -1;
  }
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
