/* 18 functions from 0x0018B010 to 0x0018C000, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018B3B0 {
    undefined4 func_0018B3B0(byte param_1);
};

extern int D_00289F60;
extern int D_00289F70;
extern int D_00289F80;
extern int D_00289D8C;
extern int D_0028A034;
extern int D_00289B5C;
extern int D_00289BFC;
extern int D_00289C9C;

struct C_00157660 {
    void func_00157660(void);
};

struct C_0018B120 {
    void *vtbl;
    undefined4 func_0018B120(byte param_1);
};

struct C_0018B010 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    undefined4 func_0018B010(byte param_1);
};

struct C_0018B050 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    undefined4 func_0018B050(byte param_1);
};

extern int D_0028983C;
extern int D_00289F8C;
extern int D_00289ED8;

struct C_0018AEF0 {
    void func_0018AEF0(int a0);
};

struct Lights {
    void *vtbl;
    char pad4[0x28];
    C_0018AEF0 *unk2C;
    void *unk30;
    void *unk34;
    void func_0018BEB0();
    void *func_0018BFA0(int flags);
    void func_00157660();
};

struct PhysicsObjectStaticModel {
    void *vtbl;
    char pad4[0x8];
    void *unkC;
    void *func_0018BF10(int flags);
};

struct C_0018BFC0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    short unk14;
    short unk16;
    short unk18;
    short unk1A;
    int unk1C;
    C_0018BFC0 *func_0018BFC0(int a0, int a1, int a2, int a3, int a4);
};

struct C_0018B090 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    undefined4 func_0018B090(byte param_1);
};

struct C_0018BF80 {
    undefined4 func_0018BF80(byte param_1);
};


undefined4 C_0018B010::func_0018B010(byte param_1)
{
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  vtbl = (void *)&D_00289B5C;
  if (f28 != 0) {
    func_001E891B(f28);
  }
  ((C_00157660 *)this)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0018B120::func_0018B120(byte param_1)
{
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  vtbl = (void *)&D_00289F60;
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0018B3B0::func_0018B3B0(byte param_1)
{
  int func_00188920(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00188920();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0018BF80::func_0018BF80(byte param_1)
{
  int func_0018B5C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_0018B5C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

