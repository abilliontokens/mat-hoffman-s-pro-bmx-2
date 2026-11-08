/* 7 functions from 0x000F7400 to 0x000F83C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

struct S_000F7F80_Obj93120 {
    void func_00093120(void);
};

struct S_000F7F80_Widget {
    void func_001B17D0(int v);
    void func_001B1A30(float a1, float a2, float a3);
};

struct S_000F7F80_Data {
    char pad0[0x7a8];
    int f7a8;
    char pad7ac[0x938 - 0x7ac];
    int f938;
};

struct S_000F7F80_Mid {
    char pad0[4];
    S_000F7F80_Data *p4;
};

struct S_000F7F80_Root {
    char pad0[0x2e8];
    S_000F7F80_Mid *p2e8;
};

extern S_000F7F80_Root *D_002A8490;

struct S_000F75D0_Obj301D0 {
    int func_000301D0(void);
};

struct S_000F75D0_B {
    char pad0[0x74];
    S_000F75D0_Obj301D0 *unk74;
};

struct S_000F75D0_A {
    char pad0[0x25c];
    S_000F75D0_B *unk25c;
};

struct S_000F75D0_Obj1D6600 {
    void func_001D6600(void);
};

struct S_000F75D0_Root {
    char pad0[0x34];
    S_000F75D0_Obj1D6600 *f34;
    char pad38[4];
    S_000F75D0_Obj1D6600 *f3c;
};

extern S_000F75D0_Root *D_002B91AC;

struct S_F8010_O { void func_001D5AD0(void); int pad0[14]; int f38; char pad3C[0x1C]; char f58; };
struct S_F8010_G {
    char pad0[0x24];
    S_F8010_O *f24, *f28, *f2C, *f30;
    char pad34[0x1C];
    S_F8010_O *f50, *f54, *f58, *f5C_[3];
    S_F8010_O *f68, *f6C, *f70;
    void func_000BF860(int a, int b, int c, int d);
};
struct S_F8010_Obj { void func_00093120(void); };
#define F8010_G ((S_F8010_G *)D_002B91AC)
struct C_000F8010 {
    char pad0[0x290];
    int f290;
    S_F8010_O *f294;
    char pad298[8];
    S_F8010_O *f2A0[4];
    int pad2B0[3];
    int f2BC;
    char pad2C0[0x10];
    int f2D0, f2D4;
    char pad2D8[0x10];
    int f2E8, f2EC, f2F0, f2F4;
    S_F8010_Obj *f2F8;
    char pad2FC[4];
    int f300;
    char pad304[0x1C];
    int f320, f324, f328, f32C, f330;
    int f334;
    int f338;
    float f33C;
    char pad340[0x10];
    int f350;
    char pad354[4];
    int f358;
    char pad35C[4];
    int f360;
    char pad364[0x10];
    int f374;
    char pad378[0x10];
    int f388, f38C, pad390, f394;
    char pad398[0x14];
    int f3AC;
    void func_000F8010(void);
    void func_000CC6D0(void);
};
extern float D_0027DE74, D_00278C48;

struct BmxUIPageGameOptions {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int, int);
    char pad4[0x124 - 4];
    S_000F75D0_A *unk124;
    char pad128[0x280 - 0x128];
    int unk280, unk284;
    union { int unk288; float timer288; };
    int unk28c, unk290;
    char pad294[4];
    S_000F7F80_Widget *unk298;
    S_000F7F80_Widget *unk29c;
    char pad2a0[0x2ac - 0x2a0];
    int unk2ac;
    int unk2b0;
    char pad2b4[0x2bc - 0x2b4];
    int unk2bc;
    int unk2c0, unk2c4;
    float unk2c8;
    int unk2cc;
    char pad2d0[0x2f8 - 0x2d0];
    S_000F7F80_Obj93120 *unk2f8;
    char pad2fc[0x308 - 0x2fc];
    int unk308, unk30c, unk310, unk314;
    float unk318, unk31c;
    char pad320[8];
    int unk328;
    char pad32c[8];
    unsigned char *unk334;
    void func_000F7400(float);
    void func_000F63D0();
    void func_001BED00(float);
    void func_000F7F80(void);
    void func_000F75D0(void);
    void func_000CC0B0(void);
    void func_000F4E00(void);
    void func_000F58F0(void);
    void func_000C9940(void);
    void func_000CB3B0(void);
    void func_00157960(void);
};

struct S_F7690_VObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(int);
};
struct S_F7690_Obj5C020 { int *func_0005C020(int i); };
struct S_F7690_Sub2FC { char pad0[0x28]; S_F7690_VObj *f28; };
struct S_F7690_Game {
    char pad0[0x18];
    int f18, f1c;
    char pad20[0x2c0 - 0x20];
    S_F7690_Obj5C020 *f2c0;
    char pad2c4[0x2fc - 0x2c4];
    S_F7690_Sub2FC *f2fc;
};
struct S_F7690_Root { char pad0[0x2e0]; S_F7690_Game *f2e0; };
struct S_F7690_Sub150 { char pad0[0x4c0]; S_F7690_VObj *f4c0; };
struct S_F7690_Owner {
    char pad0[0x134];
    int f134, f138;
    char pad13c[0x150 - 0x13c];
    S_F7690_Sub150 *f150;
    char pad154[0x25c - 0x154];
    S_000F75D0_B *f25c;
};
struct S_F7690_Btn { char pad0[0x3b]; unsigned char f3b; };
struct S_F7690_Card {
    int func_00092A10(void);
    void func_00093120(void);
    int func_00092A50(int *p);
    int func_00092AC0(void);
    int func_00092B40(int i);
    int func_00093300(float f);
    void func_00093290(float f);
    int func_00092EF0(void);
};
extern float D_002755E8, D_00275F64, D_00275460, D_002756DC;
extern "C" int __stdcall func_001DCAFF(int a, int *msg);

struct BmxUIPageMemCard {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    char pad4[0x124 - 4];
    S_F7690_Owner *unk124;
    char pad128[0x28c - 0x128];
    int unk28c, unk290;
    S_F7690_Btn *unk294;
    char pad298[8];
    S_F7690_Btn *unk2a0;
    char pad2a4[0x2b0 - 0x2a4];
    float unk2b0;
    int unk2b4, unk2b8, unk2bc, unk2c0;
    float unk2c4;
    int unk2c8, unk2cc, unk2d0, unk2d4, unk2d8, unk2dc, unk2e0;
    float unk2e4;
    int unk2e8, unk2ec, unk2f0, unk2f4;
    S_F7690_Card *unk2f8;
    int unk2fc, unk300;
    char pad304[0x310 - 0x304];
    int unk310, unk314;
    char pad318[0x320 - 0x318];
    int unk320, unk324, unk328, unk32c, unk330, unk334;
    float unk338, unk33c;
    char pad340[0x348 - 0x340];
    int unk348, unk34c, unk350, unk354, unk358;
    float unk35c;
    int unk360, unk364;
    float unk368;
    int unk36c, unk370, unk374;
    float unk378, unk37c;
    int unk380;
    float unk384;
    int unk388, unk38c, unk390, unk394, unk398, unk39c, unk3a0;
    float unk3a4, unk3a8;
    int unk3ac, unk3b0;
    int func_000F7690(float dt);
    void func_000CC1B0(void);
    int func_001BED00(float dt);
};

struct C_000F83A0 {
    undefined4 func_000F83A0(byte param_1);
};

struct C_000F7670 {
    undefined4 func_000F7670(byte param_1);
};


void BmxUIPageGameOptions::func_000F7400(float dt)
{
    S_000F75D0_A *owner = unk124;
    if (unk280) {
        timer288 += dt;
        if (timer288 >= D_0027DE74) {
            unk284 = 1;
            v28(unk290, unk28c);
            timer288 = 0;
        }
    }
    if (unk2cc && !unk2c0) {
        unk2c8 += dt;
        if (unk2c8 >= D_00278C48) {
            unk2c0 = 1;
            unk2cc = 0;
            unk308 = 0;
        }
    }
    if (unk30c != unk334[0x3b]) {
        if (unk318 >= unk31c) unk314 = unk30c;
        else {
            unk314 = unk310 + (int)((unk30c - unk310) * (unk318 / unk31c));
            unk318 += dt;
        }
    }
    if (unk2ac && owner->unk25c->unk74->func_000301D0() == 0) {
        unk2cc = 1;
        unk2c8 = 0;
        func_000F63D0();
        unk2bc = 1;
        unk30c = 255;
        unk310 = 0;
        unk314 = 0;
        unk318 = 0;
        unk31c = 0.25f;
        unk2ac = 0;
    }
    if (unk2b0) {
        func_000C9940();
        unk30c = 0;
        unk310 = 255;
        unk314 = 255;
        unk318 = 0;
        unk31c = 0.25f;
        unk2b0 = 0;
    }
    func_001BED00(dt);
}

void BmxUIPageGameOptions::func_000F75D0(void) {
    if (unk2bc != 0) {
        func_000F4E00();
        unk2bc = 0;
    }
    if (unk328 != 0) {
        func_000F58F0();
        unk328 = 0;
    }
    if (unk2b0 != 0) {
        func_000C9940();
        unk2b0 = 0;
    }
    S_000F75D0_B *b = unk124->unk25c;
    if (b->unk74->func_000301D0() == 0) {
        S_000F75D0_Root *r = D_002B91AC;
        r->f3c->func_001D6600();
    }
    S_000F75D0_Root *r2 = D_002B91AC;
    r2->f34->func_001D6600();
    func_000CB3B0();
    func_00157960();
}

undefined4 C_000F7670::func_000F7670(byte param_1)
{
  int func_000CB650(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000CB650();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int BmxUIPageMemCard::func_000F7690(float dt)
{
    int msg[0x300];
    int i;
    float t;
    float d;
    S_F7690_Owner *o;

    unk2c4 += dt;
    o = unk124;
    if (unk2c4 >= D_002755E8 && !o->f25c->unk74->func_000301D0()
        && !unk350 && !unk354 && !unk360 && !unk364 && !unk388) {
        if (unk2f8->func_00092A10()) {
            if (unk310) {
                v27();
                unk2f8->func_00093120();
                func_000CC1B0();
                unk310 = 0;
                unk358 = 0;
                unk2f4 = 0;
            }
        } else {
            unk2f4 = 3;
        }
        unk2c4 = 0;
    }
    t = unk368 + dt;
    unk368 = t;
    if (unk398 != unk2a0->f3b) {
        if (unk3a4 >= unk3a8) {
            unk3a0 = unk398;
        } else {
            d = unk398 - unk39c;
            unk3a0 = (int)(d * (unk3a4 / unk3a8)) + unk39c;
            unk3a4 = dt + unk3a4;
        }
    }
    if (unk32c != unk294->f3b) {
        if (unk338 >= unk33c) {
            unk334 = unk32c;
        } else {
            d = unk32c - unk330;
            unk334 = (int)(d * (unk338 / unk33c)) + unk330;
            unk338 = dt + unk338;
        }
    }
    if (unk378 >= D_00275F64 && unk2ec && unk2f4 == 4) {
        unk36c = 0;
        unk2f8->func_00092A50(&unk370);
        if (!unk2f8->func_00092AC0())
            unk36c += 4;
        for (i = 0; i < 10; unk36c++, i++) {
            if (*((S_F7690_Root *)D_002A8490)->f2e0->f2c0->func_0005C020(i))
                break;
            if (unk2f8->func_00092B40(i))
                break;
        }
        if (unk36c <= unk370) {
            int r = unk2f8->func_00093300(100.0f);
            unk2f4 = 8;
            if (r == 1) {
                unk390 = 0;
                unk360 = 1;
            } else {
                unk360 = 0;
                unk388 = 1;
            }
        } else if (!unk2f8->func_00092A50(&unk370)) {
            unk2e8 = 1;
            unk2d0 = 0;
            unk2d8 = 0;
        } else {
            unk2f8->func_00093120();
            unk2f4 = 9;
            unk2b8 = 0;
            unk2d0 = 0;
            unk2d8 = 0;
        }
        unk2ec = 0;
        unk35c = 0;
    } else if (unk2f0 && unk2f4 == 4) {
        if (unk384 >= D_00275460) {
            if (unk2f8->func_00092EF0() == 1) {
                S_F7690_Game *g = ((S_F7690_Root *)D_002A8490)->f2e0;
                g->f2fc->f28->v30(g->f18);
                unk124->f150->f4c0->v30(((S_F7690_Root *)D_002A8490)->f2e0->f1c);
                unk350 = 1;
            } else {
                unk350 = 0;
                unk388 = 1;
            }
            unk2f8->func_00093120();
            unk2c8 = 0;
            unk2f0 = 0;
            unk2d0 = 0;
            unk2d8 = 0;
            unk2fc = 0;
            unk3b0 = 0;
            unk2f4 = 7;
            unk384 = 0;
        }
    } else if (unk2e8 && unk2f4 == 4 && t >= D_002756DC) {
        unk2f8->func_00093290(100.0f);
        unk2e8 = 0;
        unk2f4 = 4;
        unk2ec = 1;
        unk2fc = 0;
    }
    if ((unk2d0 || unk2d4 || unk290) && (unk2e4 += dt) >= D_0027DE74) {
        if (unk2d0) {
            if (unk354) {
                unk2f8->func_00093120();
                unk354 = 0;
                unk2d0 = 0;
                unk2d4 = 0;
                unk2d8 = 0;
                unk124->f138 = 7;
                unk124->f134 = 4;
            } else if (unk374 && unk324) {
                msg[0] = 2;
                msg[2] = 0x55;
                msg[3] = unk36c;
                func_001DCAFF(0, msg);
            } else if (unk394) {
                unk2f8->func_00093120();
                unk394 = 0;
                unk2f4 = 4;
                unk2f0 = 1;
                unk384 = 0;
                unk2d0 = 0;
            } else if (!unk2bc) {
                unk394 = 1;
                unk2f4 = 10;
                unk2d0 = 0;
            } else if (unk364) {
                unk2f8->func_00093120();
                unk364 = 0;
                unk2d0 = 0;
                unk2d8 = 0;
                unk124->f138 = 7;
                unk124->f134 = 4;
            } else if (unk300) {
                unk300 = 0;
                unk2f4 = 1;
                unk314 = 0;
                if (!unk2f8->func_00092A50(0))
                    goto fail;
                if (unk2bc == 1) {
                    unk2f4 = 4;
                    unk2ec = 1;
                }
                unk2d0 = 0;
            } else if (unk348) {
                unk348 = 0;
                unk2f4 = 1;
                unk314 = 0;
                if (!unk2f8->func_00092A50(0)) {
                fail:
                    unk2d0 = 0;
                    unk2f4 = 2;
                    unk300 = 1;
                    unk2d8 = 0;
                    unk2d0 = 0;
                } else if (unk2bc == 1) {
                    unk2f4 = 4;
                    if (!unk2f8->func_00092A50(0))
                        goto fail;
                    unk2ec = 1;
                    unk2d0 = 0;
                } else {
                    unk2d0 = 0;
                }
            } else if (unk374) {
                unk374 = 0;
                unk2d0 = 0;
                unk2d4 = 0;
                unk2d8 = 0;
                unk124->f138 = 7;
                unk124->f134 = 4;
            } else if (unk34c) {
                unk36c = 0;
                unk2f8->func_00092A50(&unk370);
                if (!unk2f8->func_00092AC0())
                    unk36c += 4;
                for (i = 0; i < 10; unk36c++, i++) {
                    if (*((S_F7690_Root *)D_002A8490)->f2e0->f2c0->func_0005C020(i))
                        break;
                    if (unk2f8->func_00092B40(i))
                        break;
                }
                if (!unk2f8->func_00092A50(0)) {
                    unk2d8 = 0;
                    unk2d0 = 0;
                    unk2f4 = 2;
                    unk300 = 1;
                } else {
                    unk2d8 = 0;
                    unk2d0 = 0;
                    if (unk36c <= unk370) {
                        unk38c = 1;
                        unk2f4 = 5;
                        unk348 = 1;
                    } else {
                        unk320 = 1;
                        unk2b0 = 0;
                    }
                }
            } else {
                unk2f4 = 3;
            }
        } else if (unk290) {
            if (unk300) {
                unk2f4 = 4;
                unk2e8 = 1;
                unk290 = 0;
                unk2d8 = 0;
                unk368 = 0;
                unk300 = 0;
            }
        } else if (unk2d4) {
            if (unk374) {
                if (!unk324) {
                    unk2d4 = 0;
                    unk324 = 1;
                    return 0;
                }
                v27();
                unk2d4 = 0;
                return 0;
            }
            unk394 = 0;
            unk348 = 0;
            unk358 = 0;
            unk2f8->func_00093120();
            unk2d4 = 0;
            unk2d8 = 0;
            unk124->f138 = 7;
            unk124->f134 = 4;
        }
    }
    unk378 += dt;
    unk2b0 += dt;
    if (unk314 && unk35c >= D_002755E8) {
        unk2f4 = 0;
        unk2f8->func_00093120();
    }
    if (unk380 && !unk28c && (unk37c += dt) >= D_00278C48) {
        unk28c = 1;
        unk380 = 0;
    }
    unk384 += dt;
    return func_001BED00(dt);
}

void BmxUIPageGameOptions::func_000F7F80(void) {
    unk2f8->func_00093120();
    unk298->func_001B17D0(D_002A8490->p2e8->p4->f938);
    unk298->func_001B1A30(320.0f, 120.0f, 0.0f);
    unk29c->func_001B17D0(D_002A8490->p2e8->p4->f7a8);
    if (unk288 != 0) {
        func_000CC0B0();
        unk288 = 0;
    }
}

void C_000F8010::func_000F8010(void) {
    int i;
    if (f358) (f2D4 ? F8010_G->f6C : F8010_G->f54)->func_001D5AD0();
    if (f374) {
        if (f324) F8010_G->func_000BF860(1, 0x17B, 0x184, 0);
        else F8010_G->func_000BF860(1, 0xDC, 0x184, 0);
        (f2D4 ? F8010_G->f6C : F8010_G->f54)->func_001D5AD0();
        (f2D0 ? F8010_G->f68 : F8010_G->f50)->func_001D5AD0();
    }
    if (f394) {
        (f2D4 ? F8010_G->f6C : F8010_G->f54)->func_001D5AD0();
        (f2D0 ? F8010_G->f68 : F8010_G->f50)->func_001D5AD0();
    }
    if (!f2F0 && !f2EC && !f358 && !f2E8 && !f374) {
        if (f2F4 != 3 && f2F4 != 2) (f2D0 ? F8010_G->f68 : F8010_G->f50)->func_001D5AD0();
        if (f2F4 != 7 && f2F4 != 8 && f2F4 != 9) (f2D4 ? F8010_G->f6C : F8010_G->f54)->func_001D5AD0();
        if (f2F4 == 2) (f290 ? F8010_G->f70 : F8010_G->f58)->func_001D5AD0();
        if (f2F4 == 9) (f290 ? F8010_G->f70 : F8010_G->f58)->func_001D5AD0();
    }
    if (!f320 && (f2F4 == 0 || f2F4 == 1)) {
        i = 0;
        S_F8010_O **pp = f2A0;
        for (; i < 4; i++, pp++) {
            if (i == f2BC * 2 || i == f2BC * 2 + 1) {
                S_F8010_O *p = *pp;
                unsigned char b = *(volatile unsigned char *)&p->f58 | 2;
                p->f38 = (p->f38 & 0xFFBFA35A) | 0xBFA35A;
                *(unsigned char *)&p->f58 = b;
            } else {
                S_F8010_O *p = *pp;
                p->f38 = (p->f38 & 0xFFCCCCCC) | 0xCCCCCC;
                p->f58 |= 2;
            }
            (*pp)->func_001D5AD0();
        }
    }
    if (!f2F0 && !f350 && !f360 && !f388 && !f2EC && !f358 && !f38C && !f300 &&
        !f2E8 && !f374 && !f320 && !f394) {
        if (f328) {
            f2F8->func_00093120();
            f394 = 0;
            f2F4 = 1;
            func_000CC6D0();
        }
    } else if (f328) {
        S_F8010_O *p = f294;
        p->f38 = ((short)f334 << 24) | (p->f38 & 0xFFFFFF);
        p->f58 |= 2;
        f294->func_001D5AD0();
    } else if (!f3AC) {
        f32C = 0xB2;
        f330 = 0;
        f334 = 0;
        f338 = 0;
        f33C = 0.25f;
        f328 = 1;
    }
    S_F8010_G *g = F8010_G;
    g->f24->func_001D5AD0();
    g->f28->func_001D5AD0();
    g->f2C->func_001D5AD0();
    g->f30->func_001D5AD0();
}

undefined4 C_000F83A0::func_000F83A0(byte param_1)
{
  int func_000CCB10(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000CCB10();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

