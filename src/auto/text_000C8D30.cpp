/* 8 functions from 0x000C8D30 to 0x000C9940, found by Ghidra. */
#include "common.h"
extern int D_0027E3F4;
extern int D_00278DD0;

struct DelObjC_000C {
    virtual void Destroy(int a0);
};

struct GObj2E0 {
    char pad0[0x18];
    int n;
    int n2;
};

struct GObj4 {
    char pad0[0xD0];
    int fD0;
    char padD4[0x340 - 0xD4];
    int f340;
    char pad344[0x880 - 0x344];
    int f880;
    char pad884[4];
    int f888;
    char pad88C[0x930 - 0x88C];
    char *p930;
    char pad934[0x11A8 - 0x934];
    int f11A8;
    char pad11AC[4];
    int f11B0;
};

extern char D_00278690[], D_00278678[], D_002786A0[], D_002786B0[];
extern int D_0028F5DC, D_0028F5EC;
extern float D_0027E484;
void *func_001E8A44(int size);

struct Obj2EC {
    void func_0018C160(char *s);
};

struct WidgetC9090 {
    WidgetC9090 *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B1A30(float a, float b, int c);
    void func_001B19A0(int a);
    void func_001B2270(int a);
    void func_001B17D0(int a);
};

static __forceinline WidgetC9090 *NewWidgetC9090()
{
    void *mem = func_001E8A44(0x184);
    if (mem != 0)
        return ((WidgetC9090 *)mem)->func_001B12C0(1);
    return 0;
}

struct Entry334 {
    char pad0[0x28];
    int f28;
    char pad2C[0x3C - 0x2C];
    int f3C;
    int f40;
    int f44;
    int f48;
    char pad4C[0x58 - 0x4C];
    unsigned char b58;
    Entry334 *func_001D5760();
    void func_001D5810(char *s, float a, float b, int c);
};

struct GObj2E8 {
    char pad0[4];
    GObj4 *p4;
};

struct GObjRoot {
    char pad0[0x2e0];
    GObj2E0 *p2E0;
    char pad2e4[4];
    GObj2E8 *p2E8;
    Obj2EC *p2EC;
};

extern GObjRoot *D_002A8490;
void func_001ADCC0(char *buf, int size, int fmt, int val);

struct SetterObj {
    void func_001B1980();
    void func_001B17D0(char *s);
};

struct ElemC {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

struct RenderEntryC8 {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
    void func_001D5AD0();
};

static void setEntryColorMaskC8(RenderEntryC8 *e, u32 mask, u32 color)
{
    e->f38 = (e->f38 & mask) | color;
    e->b58 |= 2;
}

static void setEntryColorMaskC8b(RenderEntryC8 *e, u32 mask, u32 color)
{
    u32 c = e->f38;
    u8 f = e->b58;
    e->f38 = (c & mask) | color;
    e->b58 = f | 2;
}

struct MgrC8 {
    char pad0[0x24];
    RenderEntryC8 *unk24;
    RenderEntryC8 *unk28;
    RenderEntryC8 *unk2C;
    RenderEntryC8 *unk30;
    char pad34[0x50 - 0x34];
    RenderEntryC8 *unk50;
    char pad54[0x68 - 0x54];
    RenderEntryC8 *unk68;
    char pad6C[0x88 - 0x6C];
    RenderEntryC8 *unk88;
    RenderEntryC8 *unk8C;
    RenderEntryC8 *unk90;
    RenderEntryC8 *unk94;
};
extern MgrC8 *D_002B91AC;

struct ObjC8_301D0 {
    int func_000301D0();
};
struct ObjC8_B {
    char pad0[0x74];
    ObjC8_301D0 *f74;
};
struct ObjC8_A {
    char pad0[0x25C];
    ObjC8_B *f25C;
};
struct ObjC8_Sel {
    char pad0[4];
    struct ObjC8_Sel2 *f4;
};
struct ObjC8_Sel2 {
    char pad0[0x30];
    int f30;
};
struct ObjC8_Sel3 {
    char pad0[4];
    ObjC8_Sel2 *f4;
};

struct C_000C8D30 {
    char pad0[0x124];
    ObjC8_A *f124;
    char pad128[0x140 - 0x128];
    ObjC8_Sel3 *f140;
    char pad144[0x280 - 0x144];
    int f280;
    char pad284[0x294 - 0x284];
    int f294;
    int f298;
    char pad29C[0x2D8 - 0x29C];
    RenderEntryC8 *arr2D8[4];
    void func_000C8D30();
};

struct C_000C8F10 {
    void func_000C5E40();
    void func_000C8D30();
    void func_00157960();
    void func_000C8F10();
};

struct BmxUIPageOptions {
    void *vtbl;
    char pad4[0x2CC - 4];
    short unk2CC;
    char pad2ce[0xa];
    ElemC *arr2D8[4];
    char pad2e8[0x44];
    SetterObj *unk32C;
    char pad330[4];
    DelObjC_000C *arr334[12];
    void func_001BE3F0();
    void func_001BF000();
    void func_000C8E60();
    void func_000C8F10();
    void func_000C9860();
};

struct C_000C98D0 {
    char pad0[0x330];
    SetterObj *f330;
    void func_000C98D0();
};

struct BmxUIPageGameOptions {
    void *vtbl;
    char pad4[0x280 - 4];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    u32 unk294;
    u32 unk298;
    u32 unk29C;
    u32 unk2A0;
    u32 unk2A4;
    char pad2A8[4];
    u32 unk2AC;
    u32 unk2B0;
    char pad2B4[0xc];
    u32 unk2C0;
    char pad2C4[4];
    u32 unk2C8;
    u32 unk2CC;
    u32 unk2D0;
    u32 unk2D4;
    WidgetC9090 *unk2D8;
    WidgetC9090 *unk2DC;
    WidgetC9090 *unk2E0;
    u32 unk2E4;
    u32 unk2E8;
    WidgetC9090 *unk2EC;
    char pad2F0[4];
    WidgetC9090 *unk2F4;
    WidgetC9090 *unk2F8;
    WidgetC9090 *unk2FC;
    WidgetC9090 *unk300;
    WidgetC9090 *unk304;
    u32 unk308;
    u32 unk30C;
    u32 unk310;
    u32 unk314;
    u32 unk318;
    u32 unk31C;
    u32 unk320;
    WidgetC9090 *unk324;
    u32 unk328;
    WidgetC9090 *arr32C[2];
    DelObjC_000C *arr334[12];
    void func_001BE3F0();
    void func_001BE360(int a);
    void func_000C9050();
    BmxUIPageGameOptions *func_000C8F30(int a);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(int a, WidgetC9090 *w);
    BmxUIPageGameOptions *func_000C9090(int a, int b, int c);
};

void BmxUIPageOptions::func_000C8E60()
{
    for (int i = 0; i < 4; i++) {
        ElemC *e = arr2D8[i];
        e->f38 = ((int)unk2CC << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
    }
    func_001BF000();
}

void C_000C8F10::func_000C8F10(void) {
    func_000C5E40();
    func_000C8D30();
    func_00157960();
}

BmxUIPageGameOptions *BmxUIPageGameOptions::func_000C8F30(int a)
{
    int i;

    func_001BE360(a);
    unk2A0 = 1;
    vtbl = &D_0027E3F4;
    unk294 = 0;
    unk298 = 0;
    unk29C = 0;
    unk2A4 = 0;
    unk28C = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk280 = 0;
    unk2AC = 0;
    unk2B0 = 0;
    unk2C0 = 0;
    unk2CC = 0;
    unk2C8 = 0;
    for (i = 0; i < 12; i++) {
        arr334[i] = 0;
    }
    unk2D0 = 1;
    unk2E4 = 1;
    unk320 = 1;
    unk308 = 1;
    unk2D4 = 2;
    unk2D8 = 0;
    unk2DC = 0;
    unk2E0 = 0;
    unk30C = 0;
    unk310 = 0;
    unk314 = 0;
    unk318 = 0;
    unk31C = 0;
    unk324 = 0;
    unk2E8 = 0;
    unk2EC = 0;
    unk2F4 = 0;
    unk2F8 = 0;
    unk2FC = 0;
    unk300 = 0;
    unk304 = 0;
    unk328 = 0;
    return this;
}

void BmxUIPageGameOptions::func_000C9050()
{
    vtbl = &D_0027E3F4;
    for (int i = 0; i < 12; i++) {
        if (arr334[i] != 0) {
            arr334[i]->Destroy(1);
            arr334[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageOptions::func_000C9860()
{
    char buf[20];
    unk32C->func_001B1980();
    int n = D_002A8490->p2E0->n;
    if (n > 0) {
        func_001ADCC0(buf, 0x14, (int)&D_00278DD0, n);
    } else {
        char *s = D_002A8490->p2E8->p4->p930;
        char *d = buf;
        char c;
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
    }
    unk32C->func_001B17D0(buf);
}

void C_000C98D0::func_000C98D0()
{
    char buf[20];
    f330->func_001B1980();
    int n = D_002A8490->p2E0->n2;
    if (n > 0) {
        func_001ADCC0(buf, 0x14, (int)&D_00278DD0, n);
    } else {
        char *s = D_002A8490->p2E8->p4->p930;
        char *d = buf;
        char c;
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
    }
    f330->func_001B17D0(buf);
}

