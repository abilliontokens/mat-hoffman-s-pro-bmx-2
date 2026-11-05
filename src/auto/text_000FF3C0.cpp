/* 16 functions from 0x000FF3C0 to 0x001002A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include "ghidra.h"
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

