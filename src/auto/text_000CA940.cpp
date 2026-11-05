/* 9 functions from 0x000CA940 to 0x000CB6B0, found by Ghidra. */
#include "common.h"

extern int D_0027E49C;

struct SetterObj_CA {
    void func_001B1980(void);
    void func_001B17D0(int v);
};

struct GObj4_CA {
    char pad0[0x130];
    int f130;
    char pad134[0x408 - 0x134];
    int f408;
    char pad40C[0x930 - 0x40C];
    int f930;
    char pad934[0xF70 - 0x934];
    int fF70;
};

struct GObj2E8_CA {
    char pad0[4];
    GObj4_CA *p4;
};

struct GObjRoot_CA {
    char pad0[0x2E8];
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
    e->f38 = (c << 24) | (e->f38 & 0xffffff);
    e->b58 |= 2;
}

/* give a drawable a fixed colour and mark it dirty */
static void setEntryColorMask(RenderEntryCB *e, u32 mask, u32 color)
{
    e->f38 = (e->f38 & mask) | color;
    e->b58 |= 2;
}

/* the shared drawable table the page draws from */
struct S_000CB3B0_Mgr {
    char pad0[0x24];
    RenderEntryCB *unk24;
    RenderEntryCB *unk28;
    RenderEntryCB *unk2C;
    RenderEntryCB *unk30;
    char pad34[0x54 - 0x34];
    RenderEntryCB *unk54;
    char pad58[0x6C - 0x58];
    RenderEntryCB *unk6C;
};

extern S_000CB3B0_Mgr *D_002B91AC;

struct S_000CB3B0_Obj301D0 {
    int func_000301D0(void);
};

struct S_000CB3B0_B {
    char pad0[0x74];
    S_000CB3B0_Obj301D0 *f74;
};

struct S_000CB3B0_A {
    char pad0[0x25C];
    S_000CB3B0_B *f25C;
};

/* BmxUIPageGameOptions */
struct BmxUIPageGameOptions {
    char pad0[0x124];
    S_000CB3B0_A *f124;
    char pad128[0x280 - 0x128];
    int f280;
    char pad284[0x2A4 - 0x284];
    s32 f2A4;
    char pad2A8[0x314 - 0x2A8];
    s16 f314;
    char pad316[0x334 - 0x316];
    RenderEntryCB *arr334[12];
    void func_001BF000();
    void func_000CB2D0();
    void func_000CB3B0();
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

void BmxUIPageGameOptions::func_000CB2D0()
{
    int n = 2;
    RenderEntryCB **p = arr334 + 1;

    do {
        setEntryColor(p[-1], f314);
        setEntryColor(p[0], f314);
        setEntryColor(p[1], f314);
        setEntryColor(p[2], f314);
        setEntryColor(p[3], f314);
        setEntryColor(p[4], f314);
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
