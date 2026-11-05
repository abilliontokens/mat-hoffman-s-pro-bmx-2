/* 16 functions from 0x000FF3C0 to 0x001002A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include "ghidra.h"
extern int D_0027F724;

struct PageObj {
    virtual void destroy(int flags);
};

struct C_00100010 {
    undefined4 func_00100010(byte param_1);
};

struct C_000FF4A0 {
    char pad0[0x29C];
    int unk29C;
    int unk2A0;
    char pad2A4[4];
    int unk2A8;
    int unk2AC;
    char pad2B0[0x24];
    int unk2D4;
    int unk2D8;
    int unk2DC;
    int unk2E0;
    float unk2E4;
    void func_000DB3E0();
    void func_000DB310();
    void func_000DB180();
    void func_000DB4B0();
    void func_00157960();
    void func_000FF4A0();
};

struct C_000FF550 {
    void *vtbl;
    char pad4[0x298];
    PageObj *f29c;
    void func_001BE3F0();
    void *func_000FF550(int flags);
};

struct C_000FFF70 {
    char pad0[0x298];
    int unk298;
    void func_000DCE10();
    void func_001BF000();
    void func_000FFF70();
};

struct C_000FF3C0 {
    undefined4 func_000FF3C0(byte param_1);
};

struct C_000FF400 {
    undefined4 func_000FF400(byte param_1);
};

struct C_000FF3E0 {
    undefined4 func_000FF3E0(byte param_1);
};

struct C_000FF420 {
    undefined4 func_000FF420(byte param_1);
};

struct C_000FF440 {
    undefined4 func_000FF440(byte param_1);
};

struct C_000FF460 {
    undefined4 func_000FF460(byte param_1);
};

struct C_000FF480 {
    undefined4 func_000FF480(byte param_1);
};

struct C_00100280 {
    undefined4 func_00100280(byte param_1);
};

struct C_000FFFA0 {
    char pad0[0x2C4];
    int f2c4;
    int f2c8;
    char pad2cc[0x18];
    int f2e4;
    int f2e8;
    void func_000DBC40();
    void func_000DBD20();
    void func_000DC270();
    void func_000FFC20();
    void func_00157960();
    void func_000FFFA0();
};


undefined4 C_000FF3C0::func_000FF3C0(byte param_1)
{
  int func_000D4DD0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D4DD0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF3E0::func_000FF3E0(byte param_1)
{
  int func_000D5E00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D5E00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF400::func_000FF400(byte param_1)
{
  int func_000D6D50(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D6D50();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF420::func_000FF420(byte param_1)
{
  int func_000D7B70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D7B70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF440::func_000FF440(byte param_1)
{
  int func_000D8D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D8D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF460::func_000FF460(byte param_1)
{
  int func_000D98E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D98E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF480::func_000FF480(byte param_1)
{
  int func_000DA320(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000DA320();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000FF4A0::func_000FF4A0()
{
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        unk2D4 = 0xff;
        unk2D8 = 0;
        unk2DC = 0;
        unk2E0 = 0;
        unk2E4 = 0.25f;
        func_000DB3E0();
        unk29C = 0;
    }
    if (unk2A0 != 0) {
        unk2D4 = 0;
        unk2D8 = 0xff;
        unk2DC = 0xff;
        unk2E0 = 0;
        unk2E4 = 0.25f;
        func_000DB310();
        unk2A0 = 0;
    }
    func_000DB180();
    func_000DB4B0();
    func_00157960();
}

void *C_000FF550::func_000FF550(int flags)
{
    int func_001E891B(...);
    vtbl = (void *)&D_0027F724;
    if (f29c) {
        f29c->destroy(1);
        f29c = 0;
    }
    func_001BE3F0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000FFFA0::func_000FFFA0()
{
  if (f2c4 != 0) {
    f2e8 = 1;
    f2e4 = 0;
    func_000DBC40();
    f2c4 = 0;
  }
  if (f2c8 != 0) {
    func_000DBD20();
    f2c8 = 0;
  }
  func_000DC270();
  func_000FFC20();
  func_00157960();
}

undefined4 C_00100010::func_00100010(byte param_1)
{
  int func_000DD130(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000DD130();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00100280::func_00100280(byte param_1)
{
  int func_000DE650(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000DE650();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

