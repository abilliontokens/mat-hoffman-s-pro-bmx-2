/* 9 functions from 0x000CA940 to 0x000CB6B0, found by Ghidra. */
#include "common.h"

extern int D_0027E49C;

struct SetterObj_CA {
    void func_001B1980(void);
    void func_001B17D0(int v);
};

struct GObj4_CA {
    char pad0[0xE0];
    int fE0;
    char padE4[0x130 - 0xE4];
    int f130;
    char pad134[0x408 - 0x134];
    int f408;
    char pad40C[0x838 - 0x40C];
    int f838;
    char pad83C[0x930 - 0x83C];
    int f930;
    char pad934[0xF70 - 0x934];
    int fF70;
};

struct GObj2E8_CA {
    char pad0[4];
    GObj4_CA *p4;
};

struct VObj78_CA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(int a);
};
struct Holder2FC_CA { char pad0[0x28]; VObj78_CA *f28; };
struct Obj15_CA { void func_0015ABF0(int a); };
struct Input_CA {
    char pad0[0x14];
    Obj15_CA *arr14[8];
    int func_00136170(int a, int b, int c);
};
struct UiObj_CA { void func_000B9A80(int a, int b); };

struct GObj2E0_CA {
    char pad0[0xC];
    int fC;
    char pad10[0x18 - 0x10];
    int f18;
    int f1C;
    char pad20[0x2FC - 0x20];
    Holder2FC_CA *f2FC;
    char pad300[0x38C - 0x300];
    int f38C;
    char pad390[0x460 - 0x390];
    int f460;
    int f464;
};

struct GObjRoot_CA {
    char pad0[8];
    Input_CA *f8;
    char padC[0x2E0 - 0xC];
    GObj2E0_CA *p2E0;
    char pad2E4[4];
    GObj2E8_CA *p2E8;
};

extern GObjRoot_CA *D_002A8490;

struct C_000CA940 {
    char pad0[0x320];
    int f320;
    SetterObj_CA *f324;
    void func_000CA940(void);
};

struct C_000CA9B0 {
    char pad0[0x2D4];
    int f2D4;
    SetterObj_CA *f2D8;
    void func_000CA9B0(void);
};

struct C_000CAA10 {
    char pad0[0x2DC];
    SetterObj_CA *f2DC;
    char pad2E0[4];
    int f2E4;
    void func_000CAA10(void);
};

struct DelObjC_CA {
    virtual void Destroy(int a0);
};

/* BmxUIPageMemCard constructor */
struct C_000CB480 {
    void *vtbl;
    u32 u[0x100];
    u32 &at(int off) { return u[(off - 4) / 4]; }
    C_000CB480 *func_000CB480(int a0);
    void func_001BE360(int a0);
};

static inline void zeroVec2(float *p)
{
    p[0] = 0.0f;
    p[1] = 0.0f;
}

static inline void zeroVec4(float *p)
{
    p[0] = 0.0f;
    p[1] = 0.0f;
    p[2] = 0.0f;
    p[3] = 0.0f;
}

/* BmxUIPageMemCard */
struct C_000CB650 {
    void *vtbl;
    char pad4[0x290];
    DelObjC_CA *f294;
    char pad298[8];
    DelObjC_CA *arr2A0[4];
    void func_001BE3F0();
    void func_000CB650();
};

/* a drawable the page colours: f38 is its colour, b58 its dirty flag */
struct RenderEntryCB {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
    void func_001D5AD0();
};

/* give a drawable the colour of the page's index and mark it dirty */
static void setEntryColor(RenderEntryCB *e, s32 c)
{
    u32 old = e->f38 & 0xffffff;
    e->b58 |= 2;
    e->f38 = (c << 24) | old;
}

/* give a drawable a fixed colour and mark it dirty */
static void setEntryColorMask(RenderEntryCB *e, u32 mask, u32 color)
{
    e->f38 = (e->f38 & mask) | color;
    e->b58 |= 2;
}

/* a text label the page sets the string of */
struct TextEntryCA {
    void func_0005E840(int a0);
};

/* the shared drawable table the page draws from */
struct S_000CB3B0_Mgr {
    char pad0[0x24];
    RenderEntryCB *unk24;
    RenderEntryCB *unk28;
    RenderEntryCB *unk2C;
    RenderEntryCB *unk30;
    TextEntryCA *unk34;
    char pad38[4];
    TextEntryCA *unk3C;
    char pad40[0x54 - 0x40];
    RenderEntryCB *unk54;
    char pad58[0x6C - 0x58];
    RenderEntryCB *unk6C;
    void func_000BF860(int a0, int a1, int a2, int a3);
};

extern S_000CB3B0_Mgr *D_002B91AC;

struct S_000CB3B0_Obj301D0 {
    int func_000301D0(void);
};

struct S_000CB3B0_B {
    char pad0[0x74];
    S_000CB3B0_Obj301D0 *f74;
};

struct Holder150_CA { char pad0[0x4C0]; VObj78_CA *f4C0; };
struct S_000CB3B0_A {
    char pad0[0x24];
    UiObj_CA *f24;
    char pad28[0x134 - 0x28];
    int f134;
    int f138;
    char pad13C[0x150 - 0x13C];
    Holder150_CA *f150;
    char pad154[0x25C - 0x154];
    S_000CB3B0_B *f25C;
};

/* BmxUIPageGameOptions */
struct BmxUIPageGameOptions {
    char pad0[0x124];
    S_000CB3B0_A *f124;
    char pad128[0x280 - 0x128];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    char pad294[0x2A4 - 0x294];
    s32 f2A4;
    s32 f2A8;
    s32 f2AC;
    s32 f2B0;
    char pad2B4[0x2BC - 0x2B4];
    s32 f2BC;
    s32 f2C0;
    s32 f2C4;
    s32 f2C8;
    s32 f2CC;
    s32 f2D0;
    s32 f2D4;
    char pad2D8[0x2E4 - 0x2D8];
    s32 f2E4;
    s32 f2E8;
    char pad2EC[0x308 - 0x2EC];
    s32 f308;
    char pad30C[0x314 - 0x30C];
    s16 f314;
    char pad316[0x320 - 0x316];
    s32 f320;
    char pad324[4];
    s32 f328;
    char pad32C[0x334 - 0x32C];
    RenderEntryCB *arr334[12];
    void func_001BF000();
    void func_000CAA80();
    void func_000CB2D0();
    void func_000CB3B0();
    int func_000CAB90(int a, int b);
    void func_001BEC10(int a);
    void func_001BEB90(int a);
};

void C_000CA940::func_000CA940(void)
{
    f324->func_001B1980();
    switch (f320) {
    case 0:
        f324->func_001B17D0(D_002A8490->p2E8->p4->f930);
        break;
    case 1:
        f324->func_001B17D0(D_002A8490->p2E8->p4->fF70);
        break;
    }
}

void C_000CA9B0::func_000CA9B0(void)
{
    f2D8->func_001B1980();
    switch (f2D4) {
    case 1:
        f2D8->func_001B17D0(D_002A8490->p2E8->p4->f130);
        break;
    case 2:
        f2D8->func_001B17D0(D_002A8490->p2E8->p4->f408);
        break;
    }
}

void C_000CAA10::func_000CAA10(void)
{
    f2DC->func_001B1980();
    switch (f2E4) {
    case 0:
        f2DC->func_001B17D0(D_002A8490->p2E8->p4->f930);
        break;
    case 1:
        f2DC->func_001B17D0(D_002A8490->p2E8->p4->fF70);
        break;
    }
}

void BmxUIPageGameOptions::func_000CAA80()
{
    f2A8 = 1;
    f2AC = 1;
    f2C4 = -1;
    f308 = 1;
    f284 = 0;
    f280 = 0;
    f2C0 = 0;
    f2CC = 0;
    f2C8 = 0;
    f328 = 0;
    f2D4 = D_002A8490->p2E0->fC;
    f2E4 = D_002A8490->p2E0->f460;
    f2E8 = D_002A8490->p2E0->f464;
    f320 = D_002A8490->p2E0->f38C;
    D_002B91AC->unk34->func_0005E840(D_002A8490->p2E8->p4->fE0);
    D_002B91AC->func_000BF860(1, 0x17b, 0x184, 0);
    D_002B91AC->unk3C->func_0005E840(D_002A8490->p2E8->p4->f838);
}

int BmxUIPageGameOptions::func_000CAB90(int a, int b)
{
    int v;
    UiObj_CA *ui;
    int i;
    ui = f124->f24;
    if (f308 == 0) {
        if (f124->f25C->f74->func_000301D0() == 0) {
            if (f124->f138 != 4 && f124->f138 != 3 && f2C0 != 0 && (f280 == 0 || f284 != 0)) {
                if (b == D_002A8490->f8->func_00136170(0, 2, 0)) {
                    switch (f2A4) {
                    case 1:
                        f2BC = 1;
                        D_002A8490->p2E0->f18 += -10;
                        if (D_002A8490->p2E0->f18 < 0)
                            D_002A8490->p2E0->f18 = 100;
                        D_002A8490->p2E0->f2FC->f28->v30(D_002A8490->p2E0->f18);
                        return 1;
                    case 2:
                        ui->func_000B9A80(5, 1);
                        f2BC = 1;
                        D_002A8490->p2E0->f1C += -10;
                        if (D_002A8490->p2E0->f1C < 0)
                            D_002A8490->p2E0->f1C = 100;
                        f124->f150->f4C0->v30(D_002A8490->p2E0->f1C);
                        return 1;
                    case 3:
                        ui->func_000B9A80(2, 1);
                        v = (f2E4 == 0);
                        f2BC = 1;
                        f2E4 = v;
                        if (v == 0) {
                            for (i = 0; i < 8; i++) {
                                if (D_002A8490->f8->arr14[i] != 0)
                                    D_002A8490->f8->arr14[i]->func_0015ABF0(0);
                            }
                        } else {
                            for (i = 0; i < 8; i++) {
                                if (D_002A8490->f8->arr14[i] != 0)
                                    D_002A8490->f8->arr14[i]->func_0015ABF0(1);
                            }
                        }
                        D_002A8490->p2E0->f460 = f2E4;
                        return 1;
                    case 4:
                        ui->func_000B9A80(2, 1);
                        v = (f320 == 0);
                        f2BC = 1;
                        f320 = v;
                        if (v == 0)
                            D_002A8490->p2E0->f38C = 0;
                        else
                            D_002A8490->p2E0->f38C = 1;
                        return 1;
                    case 0:
                        ui->func_000B9A80(2, 1);
                        f2BC = 1;
                        if (D_002A8490->p2E0->fC == 2) {
                            f2D4 = 1;
                            D_002A8490->p2E0->fC = 1;
                        } else {
                            f2D4 = 2;
                            D_002A8490->p2E0->fC = 2;
                        }
                        return 1;
                    case 5:
                        ui->func_000B9A80(2, 1);
                        v = (f2E8 == 0);
                        f2BC = 1;
                        f2E8 = v;
                        D_002A8490->p2E0->f464 = v;
                        return 1;
                    }
                    return 0;
                }
                if (b == D_002A8490->f8->func_00136170(1, 2, 0)) {
                    switch (f2A4) {
                    case 0:
                        ui->func_000B9A80(2, 1);
                        f2BC = 1;
                        if (D_002A8490->p2E0->fC == 2) {
                            f2D4 = 1;
                            D_002A8490->p2E0->fC = 1;
                        } else {
                            f2D4 = 2;
                            D_002A8490->p2E0->fC = 2;
                        }
                        return 1;
                    case 1:
                        f2BC = 1;
                        D_002A8490->p2E0->f18 += 10;
                        if (D_002A8490->p2E0->f18 > 100)
                            D_002A8490->p2E0->f18 = 0;
                        D_002A8490->p2E0->f2FC->f28->v30(D_002A8490->p2E0->f18);
                        D_002A8490->p2E0->f2FC->f28->v30(D_002A8490->p2E0->f18);
                        return 1;
                    case 2:
                        ui->func_000B9A80(5, 1);
                        f2BC = 1;
                        D_002A8490->p2E0->f1C += 10;
                        if (D_002A8490->p2E0->f1C > 100)
                            D_002A8490->p2E0->f1C = 0;
                        f124->f150->f4C0->v30(D_002A8490->p2E0->f1C);
                        return 1;
                    case 3:
                        ui->func_000B9A80(2, 1);
                        v = (f2E4 == 0);
                        f2BC = 1;
                        f2E4 = v;
                        if (v == 0) {
                            for (i = 0; i < 8; i++) {
                                if (D_002A8490->f8->arr14[i] != 0)
                                    D_002A8490->f8->arr14[i]->func_0015ABF0(0);
                            }
                        } else {
                            for (i = 0; i < 8; i++) {
                                if (D_002A8490->f8->arr14[i] != 0)
                                    D_002A8490->f8->arr14[i]->func_0015ABF0(1);
                            }
                        }
                        D_002A8490->p2E0->f460 = f2E4;
                        return 1;
                    case 5:
                        ui->func_000B9A80(2, 1);
                        v = (f2E8 == 0);
                        f2BC = 1;
                        f2E8 = v;
                        D_002A8490->p2E0->f464 = v;
                        return 1;
                    case 4:
                        ui->func_000B9A80(2, 1);
                        v = (f320 == 0);
                        f2BC = 1;
                        f320 = v;
                        if (v == 0)
                            D_002A8490->p2E0->f38C = 0;
                        else
                            D_002A8490->p2E0->f38C = 1;
                        return 1;
                    }
                    return 0;
                }
                if (b == D_002A8490->f8->func_00136170(2, 2, 0)) {
                    ui->func_000B9A80(2, 1);
                    f2C4 = f2A4;
                    f2A4--;
                    if (f2A4 < 0)
                        f2A4 = 5;
                    if (f2A4 != 1)
                        f328 = 1;
                    f2D0 = f2A4 + 1;
                    f328 = 1;
                    func_001BEC10(a);
                    return 1;
                }
                if (b == D_002A8490->f8->func_00136170(3, 2, 0)) {
                    ui->func_000B9A80(2, 1);
                    f2C4 = f2A4;
                    f2A4++;
                    if (f2A4 > 5)
                        f2A4 = 0;
                    if (f2A4 != 1)
                        f328 = 1;
                    f2D0 = f2A4 + 1;
                    f328 = 1;
                    func_001BEB90(a);
                    return 1;
                }
                if (b == D_002A8490->f8->func_00136170(5, 2, 0) || b == D_002A8490->f8->func_00136170(0x18, 2, 0)) {
                    if (f280 == 0) {
                        ui->func_000B9A80(1, 1);
                        f2B0 = 1;
                        f290 = a;
                        f280 = 1;
                        f288 = 0;
                        f28C = b;
                        if (f284 == 0)
                            return 0;
                    }
                    f124->f138 = 7;
                    f124->f134 = 4;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void BmxUIPageGameOptions::func_000CB2D0()
{
    int n = 2;
    RenderEntryCB **p = arr334 + 1;

    do {
        for (int k = -1; k < 5; k++) {
            RenderEntryCB *e = p[k];
            s32 c = f314;
            e->f38 = (c << 24) | (e->f38 & 0xffffff);
            e->b58 |= 2;
        }
        p += 6;
        n--;
    } while (n != 0);
    func_001BF000();
}

void BmxUIPageGameOptions::func_000CB3B0()
{
    S_000CB3B0_B *b;
    RenderEntryCB *m;
    S_000CB3B0_Mgr *s;
    int i;

    b = f124->f25C;
    if (b->f74->func_000301D0() == 0) {
        if (f280)
            m = D_002B91AC->unk6C;
        else
            m = D_002B91AC->unk54;
        m->func_001D5AD0();
    }
    for (i = 0; i < 12; i++) {
        if (i == f2A4 * 2 || i == f2A4 * 2 + 1) {
            setEntryColorMask(arr334[i], 0xffbfa35a, 0xbfa35a);
            arr334[i]->func_001D5AD0();
        } else {
            setEntryColorMask(arr334[i], 0xffcccccc, 0xcccccc);
        }
    }
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

C_000CB480 *C_000CB480::func_000CB480(int a0)
{
    int k = 0;
    func_001BE360(a0);
    at(0x2BC) = k;
    vtbl = (void *)&D_0027E49C;
    at(0x2C4) = 0x3f000000;
    at(0x2C0) = 1;
    for (; k < 2; k++) {
        (&at(0x298))[k] = 0;
    }
    at(0x304) = -1;
    at(0x308) = -1;
    at(0x2CC) = 0;
    at(0x2D8) = 0;
    at(0x2E4) = 0;
    at(0x2D0) = 0;
    at(0x2D4) = 0;
    at(0x290) = 0;
    at(0x2DC) = 0;
    at(0x2E0) = 0;
    at(0x2F0) = 0;
    at(0x2EC) = 0;
    at(0x2F8) = 0;
    at(0x2FC) = 0;
    at(0x300) = 0;
    at(0x280) = 0;
    at(0x284) = 0;
    at(0x288) = 0;
    at(0x28C) = 0;
    at(0x318) = 0;
    at(0x31C) = 0;
    at(0x348) = 0;
    at(0x350) = 0;
    at(0x394) = 0;
    at(0x354) = 0;
    at(0x358) = 0;
    at(0x35C) = 0;
    at(0x360) = 0;
    at(0x364) = 0;
    at(0x368) = 0;
    at(0x374) = 0;
    at(0x36C) = 0;
    at(0x370) = 0;
    at(0x378) = 0;
    at(0x380) = 0;
    at(0x37C) = 0;
    at(0x34C) = 1;
    for (k = 0; k < 4; k++) {
        (&at(0x2A0))[k] = 0;
    }
    at(0x2B0) = 0;
    at(0x398) = 0;
    at(0x39C) = 0;
    at(0x3A0) = 0;
    at(0x3A4) = 0;
    at(0x3A8) = 0;
    at(0x2C8) = 0;
    at(0x294) = 0;
    at(0x384) = 0;
    at(0x388) = 0;
    at(0x38C) = 0;
    at(0x2E8) = 0;
    at(0x328) = 0;
    at(0x3AC) = 0;
    at(0x324) = 0;
    at(0x32C) = 0;
    at(0x330) = 0;
    at(0x334) = 0;
    at(0x338) = 0;
    at(0x33C) = 0;
    at(0x3B0) = 0;
    at(0x390) = 0;
    at(0x320) = 1;
    return this;
}

void C_000CB650::func_000CB650()
{
    vtbl = &D_0027E49C;
    for (int i = 0; i < 4; i++) {
        if (arr2A0[i] != 0) {
            arr2A0[i]->Destroy(1);
            arr2A0[i] = 0;
        }
    }
    if (f294 != 0) {
        f294->Destroy(1);
        f294 = 0;
    }
    func_001BE3F0();
}
