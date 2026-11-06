/* 5 functions from 0x0007BAD0 to 0x0007CA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00026500 { int func_00026500(char *s, int a); };
extern C_00026500 *D_002A7CB8;
extern char D_00278AF0[];
extern unsigned int D_002B9048;
extern int D_002B9044;

struct S_7C690_Rect { int x, y, w, h, zmin, zmax; };
struct S_7C690_Viewport {
    char pad0[0x1e0];
    S_7C690_Rect rect;
    void func_0012B2B0(void *a, void *b);
};
struct S_7C690_Device {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    S_7C690_Viewport *f4;
};
extern S_7C690_Device *D_002EFDB8;

struct S_7C690_Data { char pad0[0x7b8]; int f7b8; char pad7bc[4]; int f7c0; char pad7c4[4]; int f7c8; };
struct S_7C690_Mgr { char pad0[4]; S_7C690_Data *f4; };
struct S_7C690_Global {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x2e8 - 0x278];
    S_7C690_Mgr *f2e8;
};
extern S_7C690_Global *D_002A8490;

struct S_7C690_Obj90 { char pad0[0x90]; int f90; };
struct S_7C690_Text {
    void func_0005E840(int a);
    void func_001D6600();
};
struct S_7C690_TextB {
    void func_0005E840(int a);
    void func_001D6600();
};

struct ResultsScreen {
    char pad0[0x100];
    S_7C690_Text *f100;
    char pad104[8];
    S_7C690_Obj90 *f10C;
    char pad110[0x40];
    int f150;
    S_7C690_TextB *f154;
    void func_000682B0();
    void func_00067DA0();
    void func_00157960();
    int func_0007C690();
};

struct C_0007C2C0 {
    undefined4 func_0007C2C0();
};

struct C_0007C670 {
    undefined4 func_0007C670(byte param_1);
};

struct C_0007C9E0 {
    undefined4 func_0007C9E0(byte param_1);
};


undefined4 C_0007C670::func_0007C670(byte param_1)
{
  int func_00066DC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00066DC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int ResultsScreen::func_0007C690()
{
    S_7C690_Rect vp;
    S_7C690_Rect old;
    S_7C690_Viewport *dev;

    if ((D_002B9048 & 1) == 0) {
        D_002B9048 |= 1;
        D_002B9044 = D_002A7CB8->func_00026500(D_00278AF0, 0);
    }
    if (D_002A8490->f274 >= D_002A8490->f270 - 1) {
        D_002EFDB8->v8();
        D_002EFDB8->v7(1);
        dev = D_002EFDB8->f4;
        if (f10C->f90 > 1) {
            vp = dev->rect;
            vp.x = 0;
            vp.y = 0;
            vp.w = 0x280;
            vp.h = 0x1c0;
            dev->func_0012B2B0(&vp, &old);
        }
        func_000682B0();
        func_00067DA0();
        if (f150) {
            f100->func_0005E840(D_002A8490->f2e8->f4->f7b8);
            f154->func_0005E840(D_002A8490->f2e8->f4->f7c0);
            f154->func_001D6600();
        } else {
            f100->func_0005E840(D_002A8490->f2e8->f4->f7c8);
            f100->func_001D6600();
        }
        func_00157960();
        if (f10C->f90 > 1) {
            dev->func_0012B2B0(&old, 0);
        }
    }
    return 1;
}

undefined4 C_0007C9E0::func_0007C9E0(byte param_1)
{
  int func_000688C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000688C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

