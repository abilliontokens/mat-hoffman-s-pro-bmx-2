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
    char padC[0x2d4];
    GData_000F3C70 *p2E0;
};
extern float D_002757F0;

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
    int f2E4;
    int f2E8;
    int f2EC;
    int f2F0;
    int f2F4;
    int f2F8;
    float f2FC;
    int f300;
    float f304;
    Data_000F3C70_2D0 *p308;
    char pad30C[0x38];
    int a344[9];
    float a368[9];
    int func_000F3F00(int a, int b);
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

int BmxUIPageTwoPlayer::func_000F3F00(int a, int b)
{
    Owner_000F3C70 *owner = p124;
    Obj24_000F3C70 * volatile savedObj = owner->f24;
    int savedVal = (int)savedObj;
    if (owner->p25C->p74->func_000301D0() != 0) {
        return 0;
    }
    if (p124->f138 == 4) {
        return 0;
    }
    if (p124->f138 == 3) {
        return 0;
    }
    if (f2AC == 0) {
        return 0;
    }
    if (!(((f284 == 0 && f280 == 0) || f290 != 0) && f2F8 == 0)) {
        return 0;
    }
    if (savedVal == ((Obj136_000F3C70 *)D_002A8490->arr)->func_00136170(4, 2, 0) ||
        savedVal == ((Obj136_000F3C70 *)D_002A8490->arr)->func_00136170(0x17, 2, 0)) {
        if (owner->f2A4 == 0 || f2DC == 7) {
            if (f284 == 0) {
                f29C = 1;
                savedObj->func_000B9A80(4, 1);
            }
            if (f290 != 0) {
                switch (f2DC) {
                case 0:
                    f2A8 = 0;
                    D_002A8490->p2E0->f0 = 2;
                    owner->f264 = 1;
                    D_002A8490->p2E0->f20 = 0;
                    D_002A8490->p2E0->f8 = D_002A8490->p2E0->fC;
                    D_002A8490->p2E0->f4 = 2;
                    break;
                case 1:
                    f2A8 = 1;
                    D_002A8490->p2E0->f0 = 2;
                    owner->f264 = 1;
                    D_002A8490->p2E0->f20 = 0;
                    D_002A8490->p2E0->f8 = D_002A8490->p2E0->fC;
                    D_002A8490->p2E0->f4 = 3;
                    break;
                case 4:
                    f2A8 = 4;
                    D_002A8490->p2E0->f8 = 0;
                    D_002A8490->p2E0->f4 = 4;
                    p124->f138 = 7;
                    p124->f134 = 0xd;
                    return 1;
                case 2:
                    f2A8 = 2;
                    D_002A8490->p2E0->f0 = 2;
                    owner->f264 = 1;
                    D_002A8490->p2E0->f8 = D_002A8490->p2E0->fC;
                    D_002A8490->p2E0->f4 = 1;
                    D_002A8490->p2E0->f20 = 1;
                    p124->f138 = 7;
                    p124->f134 = 3;
                    D_002A8490->p2E0->func_0005B220();
                    owner->func_000BB7C0(D_002A8490->p2E0->f190);
                    return 1;
                case 3:
                    f2A8 = 3;
                    D_002A8490->p2E0->f0 = 2;
                    owner->f264 = 1;
                    D_002A8490->p2E0->f8 = D_002A8490->p2E0->fC;
                    D_002A8490->p2E0->f4 = 5;
                    break;
                case 6:
                    f2A8 = 6;
                    D_002A8490->p2E0->f0 = 2;
                    owner->f264 = 1;
                    D_002A8490->p2E0->f8 = D_002A8490->p2E0->fC;
                    D_002A8490->p2E0->f4 = 6;
                    p124->f138 = 7;
                    owner->func_000BA9D0(0xf)->f2CC = 1.0f;
                    p124->f134 = 0xf;
                    return 1;
                case 7:
                    f2A8 = 7;
                    D_002A8490->p2E0->f0 = 2;
                    owner->f264 = 1;
                    D_002A8490->p2E0->f8 = 2;
                    D_002A8490->p2E0->f4 = 7;
                    p124->f138 = 7;
                    owner->func_000BA9D0(0xf)->f2CC = 1.0f;
                    p124->f134 = 0xf;
                    return 1;
                case 5:
                    f2A8 = 5;
                    f284 = 0;
                    if (f2B8 == 1) {
                        D_002A8490->p2E0->f8 = 0;
                        D_002A8490->p2E0->f4 = 9;
                        D_002A8490->p2E0->f20 = 0;
                        *(int *)&D_002A8490->p2E0->f10 = 0x42700000;
                        p124->f138 = 7;
                        p124->f134 = 0x14;
                        return 1;
                    }
                    p124->f138 = 7;
                    p124->f134 = 0x1f;
                    return 1;
                case 8:
                    f284 = 0;
                    f2A8 = 8;
                    D_002A8490->p2E0->f4 = 10;
                    D_002A8490->p2E0->f0 = 2;
                    D_002A8490->p2E0->f20 = 1;
                    D_002A8490->p2E0->f48 = 7;
                    D_002A8490->p2E0->f8 = D_002A8490->p2E0->fC;
                    p124->f138 = 7;
                    p124->f134 = 0x15;
                    return 1;
                default:
                    return 1;
                }
                p124->f138 = 7;
                owner->func_000BA9D0(0xf)->f2CC = 1.0f;
                p124->f134 = 0xf;
                return 1;
            }
            f288 = 0.0f;
            f284 = 1;
            f294 = a;
            f28C = b;
            return 0;
        }
        return 0;
    } else if (savedVal == ((Obj136_000F3C70 *)D_002A8490->arr)->func_00136170(2, 2, 0)) {
        if (f2DC == 0) {
            f2F0 = 1;
            return 1;
        }
        savedObj->func_000B9A80(2, 1);
        f2E0 = f2DC;
        f300 = 1;
        if (f2B8 != 1) {
            f2DC = f2DC - 1;
            f2A8 = f2DC;
            if (f2E4 != f2DC) {
                return 1;
            }
            f2F4 = 0;
            f2E4 = f2DC - 1;
            f2E8 = f2E8 - 1;
            a368[0] = a368[0] + 40.0f;
            a368[1] = a368[1] + 40.0f;
            a368[2] = a368[2] + 40.0f;
            a368[3] = a368[3] + 40.0f;
            a368[4] = a368[4] + 40.0f;
            a368[5] = a368[5] + 40.0f;
            a368[6] = a368[6] + 40.0f;
            a368[7] = a368[7] + 40.0f;
            a368[8] = a368[8] + 40.0f;
            f2EC = 1;
            f2F8 = 1;
            return 1;
        }
        f2DC = (f2DC == 4) + 4;
        return 0;
    } else if (savedVal == ((Obj136_000F3C70 *)D_002A8490->arr)->func_00136170(3, 2, 0)) {
        int rr = D_002A8490->p2E0->p2C0->func_0005C0F0();
        if (rr == 0) {
            if (f2DC == 7) {
                f2F4 = 1;
                return 1;
            }
        } else {
            if (f2DC == 8) {
                f2F4 = 1;
                return 1;
            }
        }
        savedObj->func_000B9A80(2, 1);
        f2E0 = f2DC;
        f300 = 1;
        if (f2B8 == 1) {
            f2DC = (f2DC == 4) + 4;
            return 0;
        }
        f2DC = f2DC + 1;
        f2A8 = f2DC;
        if (f2DC > 8) {
            return 1;
        }
        if (f2E8 != f2DC) {
            return 1;
        }
        f2E8 = f2DC + 1;
        f2E4 = f2E4 + 1;
        f2F0 = 0;
        if (f2F4 == 0) {
            f2EC = 1;
            a368[0] = a368[0] - 40.0f;
            a368[1] = a368[1] - 40.0f;
            a368[2] = a368[2] - 40.0f;
            a368[3] = a368[3] - 40.0f;
            a368[4] = a368[4] - 40.0f;
            a368[5] = a368[5] - 40.0f;
            a368[6] = a368[6] - 40.0f;
            a368[7] = a368[7] - 40.0f;
            a368[8] = a368[8] - 40.0f;
        }
        f2F8 = 1;
        return 1;
    } else if (savedVal == ((Obj136_000F3C70 *)D_002A8490->arr)->func_00136170(5, 2, 0) ||
               savedVal == ((Obj136_000F3C70 *)D_002A8490->arr)->func_00136170(0x18, 2, 0)) {
        if (f280 == 0) {
            f29C = 1;
            savedObj->func_000B9A80(1, 1);
        }
        f280 = 1;
        f288 = 0.0f;
        f28C = savedVal;
        f294 = a;
        if (f290 == 0) {
            return 0;
        }
        owner->func_000BA9D0(1)->f360 = 10;
        p124->f138 = 7;
        p124->f134 = 1;
        return 1;
    }
    return 1;
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

