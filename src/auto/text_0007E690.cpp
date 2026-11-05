/* 10 functions from 0x0007E690 to 0x0007EE80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0007EB00 {
    undefined4 func_0007EB00(byte param_1);
};

struct C_0007EAE0 {
    undefined4 func_0007EAE0(byte param_1);
};

struct C_0007EC80 {
    undefined4 func_0007EC80(byte param_1);
};

struct C_0007EE00 {
    undefined4 func_0007EE00(byte param_1);
};

struct C_0007EE40 {
    undefined4 func_0007EE40(byte param_1);
};

struct C_0007EE20 {
    void func_00078620(void);
    void func_000782C0(void);
    void func_00157960(void);
    void func_0007EE20(void);
};

extern int D_002B9068;
extern int D_002B9064;
extern int D_00278AF0;

struct C_Rect24 {
    int x;
    int y;
    int w;
    int h;
    int f10;
    int f14;
};

struct C_Rect8 {
    int f0;
    int f4;
};

struct C_VertexBuffer2 {
    char pad0[0x7b8];
    int f7b8;
    int f7bc;
    char pad7c0[8];
    int f7c8;
};

struct C_VertexBuffer {
    char pad0[4];
    C_VertexBuffer2 *f4;
};

struct C_Global8490 {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x70];
    C_VertexBuffer *f2e8;
};

extern C_Global8490 *D_002A8490;

struct C_Creator {
    int func_00026500(int a, int b);
};

extern C_Creator *D_002A7CB8;

struct C_VCall8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    int f4;
};

extern C_VCall8 *D_002EFDB8;

struct C_12B2B0 {
    char pad0[0x1e0];
    C_Rect24 rect;
    void func_0012B2B0(void *a, void *b);
};

struct C_5E840 {
    void func_0005E840(int param_1);
};

struct C_Node {
    void func_001D6600(void);
};

struct C_Cache120 {
    char pad0[0x90];
    int f90;
};

struct C_0007EB20 {
    void *vtbl;
    char pad4[0xF8];
    int fFC;
    char pad100[0x20];
    C_Cache120 *f120;
    char pad124[0x90];
    int f1B4;
    int f1B8;
    int f1BC;
    undefined4 func_0007EB20(void);
    void func_00075750(void);
    void func_00075170(void);
    void func_00157960(void);
};


undefined4 C_0007EAE0::func_0007EAE0(byte param_1)
{
  int func_00072D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00072D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EB00::func_0007EB00(byte param_1)
{
  int func_00073C30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00073C30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EB20::func_0007EB20(void)
{
    C_12B2B0 *vb;

    if ((D_002B9068 & 1) == 0) {
        D_002B9068 |= 1;
        D_002B9064 = D_002A7CB8->func_00026500((int)&D_00278AF0, 0);
    }
    if (D_002A8490->f274 >= D_002A8490->f270 - 1) {
        D_002EFDB8->v8();
        D_002EFDB8->v7(1);
        vb = (C_12B2B0 *)D_002EFDB8->f4;
        if (f1B4 != 0) {
            ((C_5E840 *)fFC)->func_0005E840(D_002A8490->f2e8->f4->f7b8);
            ((C_Node *)f1BC)->func_001D6600();
        } else {
            ((C_5E840 *)fFC)->func_0005E840(D_002A8490->f2e8->f4->f7c8);
            ((C_Node *)fFC)->func_001D6600();
        }
        func_00157960();
    }
    return 1;
}

undefined4 C_0007EC80::func_0007EC80(byte param_1)
{
  int func_00075C70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  func_00075C70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EE00::func_0007EE00(byte param_1)
{
  int func_00077890(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  func_00077890();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0007EE20::func_0007EE20(void) {
    func_00078620();
    func_000782C0();
    func_00157960();
}

undefined4 C_0007EE40::func_0007EE40(byte param_1)
{
  int func_00078E60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  func_00078E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

