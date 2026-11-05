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

/* BmxUIPageEditorLevelSelection */
struct S_001018F0_Input {
    int func_000301D0();
};

struct S_001018F0_Pad {
    char pad0[0x74];
    S_001018F0_Input *f74;
};

struct S_001018F0_Owner {
    char pad0[0x25C];
    S_001018F0_Pad *f25C;
};

struct S_001018F0_Entry {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
    void func_001D5AD0();
};

struct S_001018F0_Cursor {
    void func_00093A00(int a1, int a2, int a3, int a4, int a5, int a6);
};

extern int D_0028F5E0;

struct C_001018F0 {
    char pad0[0x124];
    S_001018F0_Owner *f124;
    char pad128[0x288 - 0x128];
    S_001018F0_Entry *f288;
    int f28C;
    char pad290[0x3B8 - 0x290];
    S_001018F0_Cursor *f3B8;
    int f3BC;
    char pad3C0[0x3CC - 0x3C0];
    int f3CC;
    char pad3D0[0x3D8 - 0x3D0];
    int f3D8;
    char pad3DC[0x42C - 0x3DC];
    int f42C;
    int f430;
    int f434;
    int f438;
    float f43C;
    int f440;
    void func_000EE1F0();
    void func_000EE140();
    void func_000EDF00();
    void func_00157960();
    void func_001018F0();
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

