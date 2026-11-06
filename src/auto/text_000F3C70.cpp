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
    char pad0[0x2cc];
    float f2CC;
    char pad2D0[0x90];
    int f360;
};
struct Obj24_000F3C70 {
    void func_000B9A80(int a, int b);
};
struct GData_000F3C70 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    char pad14[0xc];
    int f20;
    char pad24[0x24];
    int f48;
    char pad4C[0x144];
    int f190;
    char pad194[0x12c];
    struct Obj2C0_000F3C70 *p2C0;
    void func_0005B220();
};
struct Obj2C0_000F3C70 {
    int func_0005C0F0();
};
struct Obj136_000F3C70 {
    int func_00136170(int a, int b, int c);
};

struct Owner_000F3C70 {
    char pad0[0x24];
    Obj24_000F3C70 *f24;
    char pad28[0x10c];
    int f134;
    int f138;
    char pad13C[0x120];
    Obj_000F3C70_25C *p25C;
    char pad260[4];
    int f264;
    char pad268[0x3c];
    int f2A4;
    Btn_000F3C70 *func_000BA9B0(int id);
    Btn_000F3C70 *func_000BA9D0(int id);
    void func_000BB7C0(int a);
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

extern float D_00278C58;
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

struct VObj_002A8490 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual int v40();
};

struct Data_002A8490 {
    char pad0[8];
    VObj_002A8490 **arr;
};

extern Data_002A8490 *D_002A8490;
extern float D_00278C58;
extern float D_00275460;

struct BmxUIPageTwoPlayer {
    void **vtbl;
    char pad4[0x120];
    Owner_000F3C70 *p124;
    char pad128[0x158];
    int f280;
    int f284;
    float f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    char pad2A0[8];
    int f2A8;
    int f2AC;
    float f2B0;
    int f2B4;
    int f2B8;
    int f2BC;
    float f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    float f2D0;
    float f2D4;
    int f2D8;
    int f2DC;
    int f2E0;
    char pad2E4[0x18];
    float f2FC;
    int f300;
    float f304;
    Data_000F3C70_2D0 *p308;
    char pad30C[0x38];
    int a344[9];
    void func_000F4860(float dt);
    void func_000C7FC0();
    void func_000C8090();
    void func_001BED00(float dt);
};

void BmxUIPageParkEditor::func_000F3C70(float dt)
{
    Owner_000F3C70 *owner = p124;
    int i;

    if (f294 != 0 || f298 != 0) {
        for (i = 0; i < 8; i++)
            a148[i] = 0;
    }
    if (f2B8 != 0 && f2A4 == 0) {
        f2B4 += dt;
        if (f2B4 >= D_00278C48) {
            f2A4 = 1;
            f2B8 = 0;
        }
    }
    if (f29C != 0) {
        if (owner->p25C->p74->func_000301D0() == 0) {
            f2B8 = 1;
            f2B4 = 0.0f;
            owner->func_000BA9B0(0x19)->func_00103260(0);
            owner->func_000BA9B0(0x1a)->func_00103260(0);
            f2BC = 0xff;
            f2C0 = 0;
            f2C4 = 0;
            f2C8 = 0.0f;
            f2CC = 0.25f;
            func_001BEE50(1, f2B0, 0);
            f29C = 0;
        }
    }
    if (f2A0 != 0) {
        owner->func_000BA9B0(0x19)->func_00103350();
        owner->func_000BA9B0(0x1a)->func_00103350();
        f2BC = 0;
        f2C0 = 0xff;
        f2C4 = 0xff;
        f2C8 = 0.0f;
        f2CC = 0.25f;
        f2A0 = 0;
    }
    if (f2BC != p2D0->b3B) {
        if (f2C8 >= f2CC) {
            f2C4 = f2BC;
        } else {
            f2C4 = (int)((float)(f2BC - f2C0) * (f2C8 / f2CC)) + f2C0;
            f2C8 += dt;
        }
    }
    if (f280 != 0 || f298 != 0 || f294 != 0) {
        f288 += dt;
        if (f280 != 0 && owner->f2A4 != 0) {
            f280 = 0;
            f2A0 = 0;
        } else if (f288 >= D_0027DE74) {
            f284 = 1;
            ((VPage_000F3C70 *)this)->v70(f28C, f290);
            f288 = 0.0f;
        }
    }
    func_001BED00(dt);
}

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

void BmxUIPageTwoPlayer::func_000F4860(float dt)
{
    Owner_000F3C70 *owner = p124;
    int i;
    int old;

    if (f284 != 0 || f280 != 0) {
        f288 += dt;
        if (f288 >= D_0027DE74) {
            f290 = 1;
            ((VPage_000F3C70 *)this)->v70(f294, f28C);
            f288 = 0.0f;
        }
    }
    f2FC += dt;
    f2C0 += dt;
    if (f2C0 > D_00278C58) {
        old = f2B8;
        f2B8 = 0;
        for (i = 5; i < 13; i++) {
            VObj_002A8490 *p = D_002A8490->arr[i];
            if (p != 0 && p->v40() == 1)
                f2B8++;
        }
        if (f2B8 != old)
            f2BC = 1;
        f2C0 = 0.0f;
    }
    if (f2C4 != p308->b3B) {
        if (f2D0 >= f2D4) {
            f2CC = f2C4;
        } else {
            f2CC = (int)((float)(f2C4 - f2C8) * (f2D0 / f2D4)) + f2C8;
            f2D0 += dt;
        }
    }
    if (f2BC != 0) {
        if (f2B8 == 0) {
            f300 = 1;
            for (i = 0; i < 9; i++)
                a344[i] = 1;
        } else {
            f2E0 = -1;
            if (f2B8 == 1) {
                if (f2A8 == 5) {
                    f300 = 1;
                    f2DC = 5;
                    for (i = 0; i < 9; i++) {
                        if (i == 5 || i == 4)
                            a344[i] = 0;
                        else
                            a344[i] = 1;
                    }
                } else {
                    f300 = 1;
                    f2DC = 4;
                    for (i = 0; i < 9; i++) {
                        if (i == 5 || i == 4)
                            a344[i] = 0;
                        else
                            a344[i] = 1;
                    }
                }
            } else {
                f300 = 1;
                for (i = 0; i < 9; i++)
                    a344[i] = 0;
            }
        }
        f2BC = 0;
    }
    if (f2B4 != 0 && f2AC == 0) {
        f2B0 += dt;
        if (f2B0 >= D_00278C48) {
            f2AC = 1;
            f2B4 = 0;
        }
    }
    f304 += dt;
    if (f298 != 0) {
        if (owner->p25C->p74->func_000301D0() == 0 && f304 >= D_00275460) {
            f2B4 = 1;
            f2B0 = 0.0f;
            f2BC = 1;
            func_000C7FC0();
            f2C4 = 0xff;
            f2C8 = 0;
            f2CC = 0;
            f2D0 = 0.0f;
            f2D4 = 0.25f;
            f298 = 0;
        }
    }
    if (f29C != 0) {
        f2C4 = 0;
        f2C8 = 0xff;
        f2CC = 0xff;
        f2D0 = 0.0f;
        f2D4 = 0.25f;
        func_000C8090();
        f29C = 0;
    }
    func_001BED00(dt);
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

