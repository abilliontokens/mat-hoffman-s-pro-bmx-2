/* 8 functions from 0x00101280 to 0x00101CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00101A30_Widget {
    void func_001B1980();
};

struct C_00101A30 {
    char pad0[0x2A0];
    int f2A0;
    int f2A4;
    char pad2A8[4];
    int f2AC;
    int f2B0;
    char pad2B4[0x3EC - 0x2B4];
    int f3EC;
    char pad3F0[0x3FC - 0x3F0];
    int f3FC;
    int f400;
    int f404;
    int f408;
    float f40C;
    int f410;
    int f414;
    char pad418[0x638 - 0x418];
    C_00101A30_Widget *f638[9];
    void func_000F0910();
    void func_000F0A00();
    void func_000F0400();
    void func_000F0AE0();
    void func_00157960();
    void func_00101A30();
};

struct C_00101A10 {
    undefined4 func_00101A10(byte param_1);
};

struct C_00101B20 {
    undefined4 func_00101B20(byte param_1);
};

struct C_00101CB0 {
    undefined4 func_00101CB0(byte param_1);
};

struct C_00101CD0 {
    undefined4 func_00101CD0(byte param_1);
};


undefined4 C_00101A10::func_00101A10(byte param_1)
{
  int func_000EE3B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000EE3B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00101A30::func_00101A30() {
    if (f2A0 != 0) {
        f2B0 = 1;
        f2AC = 0;
        func_000F0910();
        f3FC = 0xff;
        f400 = 0;
        f404 = f3EC;
        f408 = 0;
        f40C = 0.25f;
        f2A0 = 0;
    }
    if (f2A4 != 0) {
        func_000F0A00();
        f3FC = 0;
        f400 = 0xff;
        f404 = f3EC;
        f408 = 0;
        f40C = 0.25f;
        f2A4 = 0;
    }
    if (f410 == 0) {
        if (f414 != 0) {
            for (int i = 0; i < 9; i++) {
                f638[i]->func_001B1980();
            }
            f414 = 0;
        }
    }
    if (f410 != 0) {
        func_000F0400();
        func_000F0AE0();
    }
    func_00157960();
}

undefined4 C_00101B20::func_00101B20(byte param_1)
{
  int func_000F0D20(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F0D20();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101CB0::func_00101CB0(byte param_1)
{
  int func_000F1D90(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F1D90();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101CD0::func_00101CD0(byte param_1)
{
  int func_000F2600(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F2600();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

