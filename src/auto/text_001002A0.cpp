/* 19 functions from 0x001002A0 to 0x00101280, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001E891B(void *p);

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_002B91AC_s {
    char pad0[0x34];
    C_001D6600 *f34;
    C_001D6600 *f38;
    C_001D6600 *f3C;
};

extern C_002B91AC_s *D_002B91AC;

struct C_001006E0 {
    void func_001006E0(void);
    void func_000F1B60(void);
    void func_000E1650(void);
    void func_00157960(void);
};

struct C_00100700 {
    void *func_00100700(unsigned int flags);
    void func_000E1810(void);
};

struct C_00100AB0 {
    void *func_00100AB0(unsigned int flags);
    void func_000E2140(void);
};

struct C_00100AD0 {
    char pad0[0x2B8];
    int unk2B8;
    void func_00100AD0(void);
    void func_000E3AC0(void);
};
struct C_001003E0 {
    undefined4 func_001003E0(byte param_1);
};

struct C_00100C00 {
    void func_000E4AB0();
    void *func_00100C00(unsigned int flags);
};

struct C_00100CD0 {
    void func_000EA9B0();
    void *func_00100CD0(unsigned int flags);
};

struct C_00100B30 {
    char pad0[0x288];
    int unk288;
    char pad28c[0x24];
    int unk2b0;
    int unk2b4;
    char pad2b8[0xc];
    int unk2c4;
    int unk2c8;
    int unk2cc;
    int unk2d0;
    float unk2d4;
    int unk2d8;
    int unk2dc;
    void func_000E3640();
    void func_000E3BA0();
    void func_000E3C90();
    void func_000E3790();
    void func_000E3D30();
    void func_00157960();
    void func_00100B30();
};

struct C_001B1980 {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6,
                        int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_001D5AD0 {
    void func_001D5AD0();
};

struct C_00100C20 {
    char pad0[0x2ac];
    int unk2ac;
    char pad2b0[0x228];
    int unk4d8;
    char pad4dc[0x34];
    C_001D5AD0 *unk510;
    char pad514[0x64];
    C_001B1980 *f578[5];
    void func_000E7AD0();
    void func_000EA410();
    void func_000E6E20();
    void func_000E8740();
    void func_00157960();
    void func_00100C20();
};

struct C_00100FF0 {
    undefined4 func_00100FF0(byte param_1);
};

struct C_00101240 {
    undefined4 func_00101240(byte param_1);
};

struct C_00101260 {
    undefined4 func_00101260(byte param_1);
};


undefined4 C_001003E0::func_001003E0(byte param_1)
{
  int func_000E0DF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000E0DF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001006E0::func_001006E0(void) {
    func_000F1B60();
    func_000E1650();
    func_00157960();
}

void *C_00100700::func_00100700(unsigned int flags) {
    func_000E1810();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void *C_00100AB0::func_00100AB0(unsigned int flags) {
    func_000E2140();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_00100AD0::func_00100AD0(void) {
    int off;

    for (off = 0x38; off < 0x40; off += 4)
        (*(C_001D6600 **)((char *)D_002B91AC + off))->func_001D6600();
    D_002B91AC->f34->func_001D6600();
    if (unk2B8) {
        func_000E3AC0();
        unk2B8 = 0;
    }
}

void C_00100B30::func_00100B30() {
    if (unk288 != 0) {
        func_000E3640();
        unk288 = 0;
    }
    if (unk2b0 != 0) {
        unk2dc = 1;
        unk2d8 = 0;
        unk2c4 = 0xff;
        unk2c8 = 0;
        unk2cc = 0;
        unk2d0 = 0;
        unk2d4 = 0.25f;
        func_000E3BA0();
        unk2b0 = 0;
    }
    if (unk2b4 != 0) {
        unk2c4 = 0;
        unk2c8 = 0xff;
        unk2cc = 0xff;
        unk2d0 = 0;
        unk2d4 = 0.25f;
        func_000E3C90();
        unk2b4 = 0;
    }
    func_000E3790();
    ((C_00100AD0 *)this)->func_00100AD0();
    func_000E3D30();
    func_00157960();
}

void *C_00100C00::func_00100C00(unsigned int flags) {
    func_000E4AB0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_00100C20::func_00100C20() {
    int i;

    func_000E7AD0();
    func_000EA410();
    if (unk2ac != 0) {
        for (i = 0; i < 5; i++)
            f578[i]->func_001B1980();
        if (unk510 != 0)
            unk510->func_001D5AD0();
    }
    if (unk4d8 != 0) {
        for (i = 0; i < 5; i++)
            f578[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.0f, 0, 0.25f, 0, 0);
        func_000E6E20();
        unk4d8 = 0;
    }
    func_000E8740();
    func_00157960();
}

undefined4 C_00100FF0::func_00100FF0(byte param_1)
{
  int func_000EB420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000EB420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101240::func_00101240(byte param_1)
{
  int func_000EBE30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000EBE30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101260::func_00101260(byte param_1)
{
  int func_000ED0E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000ED0E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

