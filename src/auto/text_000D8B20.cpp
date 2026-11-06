/* 9 functions from 0x000D8B20 to 0x000D9960, found by Ghidra. */
#include "common.h"
extern int D_0027F49C;
extern int D_0027F534;

struct DelObjHOF {
    virtual void Destroy(int a0);
};

struct BmxUIPageHOF5D {
    void *vtbl;
    char pad4[0x2EC - 4];
    DelObjHOF *arr2EC[2];
    DelObjHOF *arr2F4[2];
    DelObjHOF *arr2FC[2];
    void func_001BE3F0();
    void func_000D8D30();
};

struct BmxUIPageHOF6D {
    void *vtbl;
    char pad4[0x2EC - 4];
    DelObjHOF *arr2EC[2];
    DelObjHOF *arr2F4[2];
    DelObjHOF *arr2FC[2];
    void func_001BE3F0();
    void func_000D98E0();
};

struct RenderEntryHOF {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
};

struct BmxUIPageHOF5 {
    void *vtbl;
    char pad4[0x280 - 4];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    char pad294[8];
    u32 unk29C;
    u32 unk2A0;
    u32 unk2A4;
    u32 unk2A8;
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    s32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    u32 arr2C4[5];
    u32 arr2D8[5];
    u32 arr2EC[2];
    u32 arr2F4[2];
    void *arr2FC[2];
    u32 arr304[5];
    void func_001BE360(int a0);
    BmxUIPageHOF5 *func_000D8C70(int a0);
};

extern char D_00278690[], D_002786A0[], D_00278678[], D_0027F2AC[], D_0027CEF0[], D_0027F29C[], D_00279B00[], D_00279AF0[], D_00279AE0[], D_00279AD0[];
extern float D_0027F2B4;
extern "C" void *func_001E8A44(unsigned int size);
struct Lookup_D8DB0 { int *func_0018C160(int); };
struct Mgr_D8DB0 { char pad0[0x2EC]; Lookup_D8DB0 *f2EC; };
struct Widget_D8DB0 {
    Widget_D8DB0 *func_001B12C0(int);
    void func_001B13A0(char *, char *, void *, int);
    void func_001B2270(int);
    void func_001B1A30(float, float, int);
    void func_001B17D0(char *);
};
struct Sprite_D8DB0 {
    char pad0[0x28];
    u32 f28;
    char pad2C[0xC];
    u32 f38;
    float f3C, f40, f44, f48;
    char pad4C[0xC];
    unsigned char b58;
    Sprite_D8DB0 *func_001D5760();
    void func_001D5810(char *, float, float, int);
    void depth(u32 v) { if (f28 != v) { f28 = v; b58 |= 1; } }
    void color() { f38 = (f38 & 0xffbfa35a) | 0xbfa35a; b58 |= 2; }
    void coords(float a, float b, float c, float d) { f3C = a; f40 = b; f44 = c; f48 = d; b58 |= 4; }
};
struct C_000D8DB0 {
    void *vtbl;
    char pad4[0x2C4 - 4];
    Widget_D8DB0 *a2C4[5];
    Widget_D8DB0 *a2D8[5];
    Sprite_D8DB0 *a2EC[2];
    Sprite_D8DB0 *a2F4[2];
    Sprite_D8DB0 *a2FC[2];
    Widget_D8DB0 *a304[5];
    void func_001BE4F0(int, int, int);
    void func_001577A0(Widget_D8DB0 *, int);
    C_000D8DB0 *func_000D8DB0(int, int, int);
};

struct BmxUIPageHOF4 {
    void *vtbl;
    char pad4[0x2C0 - 4];
    s16 unk2C0;
    char pad2C2[0x2F4 - 0x2C2];
    RenderEntryHOF *arr2F4[2];
    RenderEntryHOF *arr2FC[2];
    RenderEntryHOF *arr304[2];
    void func_001BF000();
    void func_000D8B20();
};
#include "ghidra.h"

struct C_001D6600 {
    void func_001D6600();
};

struct S_002B91AC {
    char pad0[0x34];
    C_001D6600 *unk34;
    int unk38;
    C_001D6600 *unk3C;
};

extern S_002B91AC *D_002B91AC;

#include <string.h>
struct S_9DC0_Q { void func_0005BED0(int a, int b, float *f, char *s); };
struct S_9DC0_A { char pad[0x2c0]; S_9DC0_Q *q; };
struct S_9DC0_B { char pad[0x2e0]; S_9DC0_A *a; };
extern S_9DC0_B *D_002A8490;
extern float D_00275544, D_0027F2BC, D_00279F74, D_0027F2B8;
extern char D_00277038[];
extern int D_0028F5DC;
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, ...);
struct S_000D9FE0_Widget {
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};
struct S_000D9FE0_Res {
    void func_00103260(int a);
};
struct S_000D9FE0_Owner {
    S_000D9FE0_Res *func_000BA9B0(int a);
};

struct C_000D9750 {
    char pad0[0x124];
    S_000D9FE0_Owner *f124;
    char pad128[0x29C - 0x128];
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    float unk2C0;
    S_000D9FE0_Widget *a2C4[5];
    S_000D9FE0_Widget *a2D8[5];
    char pad2EC[0x18];
    S_000D9FE0_Widget *a304[5];
    void func_000D8700(int value, char *buf);
    void func_000D9530();
    void func_000D9FE0();
    void func_001BEE30(int a, int b);
    void func_000D5860();
    void func_00157960();
    void func_000D9750();
};

struct C_000D8BA0 {
    char pad0[0x29C];
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    int unk2C0;
    int unk2C4;
    float unk2C8;
    void func_000D8820();
    void func_000D8A40();
    void func_000D85C0();
    void func_001BEE30(int a, int b);
    void func_00157960();
    void func_000D8BA0();
};

void BmxUIPageHOF4::func_000D8B20()
{
    RenderEntryHOF **p = arr2F4;
    int n = 2;
    do {
        RenderEntryHOF *a = p[4];
        a->f38 = ((s32)unk2C0 << 24) | (a->f38 & 0xffffff);
        a->b58 |= 2;
        RenderEntryHOF *b = p[0];
        b->f38 = ((s32)unk2C0 << 24) | (b->f38 & 0xffffff);
        b->b58 |= 2;
        RenderEntryHOF *c = p[2];
        c->f38 = ((s32)unk2C0 << 24) | (c->f38 & 0xffffff);
        c->b58 |= 2;
        p++;
        n--;
    } while (n != 0);
    func_001BF000();
}

void C_000D8BA0::func_000D8BA0()
{
    if (unk2AC != 0) {
        unk2A0 = 1;
        unk29C = 0;
        func_000D8820();
        unk2B8 = 0xff;
        unk2BC = 0;
        unk2C0 = 0;
        unk2C4 = 0;
        unk2C8 = 0.25f;
        func_001BEE30(0, 1);
        unk2AC = 0;
    }
    if (unk2B0 != 0) {
        func_000D8A40();
        unk2B8 = 0;
        unk2BC = 0xff;
        unk2C0 = 0xff;
        unk2C4 = 0;
        unk2C8 = 0.25f;
        unk2B0 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3C->func_001D6600();
    func_000D85C0();
    func_00157960();
}

BmxUIPageHOF5 *BmxUIPageHOF5::func_000D8C70(int a0)
{
    func_001BE360(a0);
    vtbl = &D_0027F49C;
    for (int i = 0; i < 5; i++) {
        arr2C4[i] = 0;
        arr2D8[i] = 0;
        arr304[i] = 0;
    }
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    for (int j = 0; j < 2; j++) {
        arr2EC[j] = 0;
        arr2F4[j] = 0;
    }
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2AC = 0;
    unk2A8 = 0;
    *(__int64 *)arr2FC = 0;
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    return this;
}

void BmxUIPageHOF5D::func_000D8D30()
{
    vtbl = &D_0027F49C;
    for (int i = 0; i < 2; i++) {
        if (arr2EC[i] != 0) {
            arr2EC[i]->Destroy(1);
            arr2EC[i] = 0;
        }
        if (arr2F4[i] != 0) {
            arr2F4[i]->Destroy(1);
            arr2F4[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (arr2FC[i] != 0) {
            arr2FC[i]->Destroy(1);
            arr2FC[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000D9750::func_000D9530()
{
    S_000D9FE0_Owner *owner = f124;
    float f;
    int i;
    char s[0x14];
    char name[0x104];
    char buf[0x104];
    memset(buf, 0, sizeof(buf));
    for (i = 0; i < 5; i++) {
        volatile float y;
        a2C4[i]->func_001B1980();
        a2D8[i]->func_001B1980();
        a304[i]->func_001B1980();
        D_002A8490->a->q->func_0005BED0(3, i, &f, s);
        int k = 0;
        char c;
        do { c = s[k]; name[k] = c; k++; } while (c);
        memset(buf, 0, sizeof(buf));
        if (f > D_00275544)
            func_000D8700((int)f, buf);
        else
            func_001ADCC0(buf, 0x104, D_00277038, (double)f);
        a2C4[i]->func_001B17D0(name);
        y = i * D_0027F2BC;
        a2C4[i]->func_001B1A30(191.0f, y + D_00279F74, 0);
        a2C4[i]->func_001B19A0(D_0028F5DC);
        a2C4[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        a2D8[i]->func_001B17D0(buf);
        a2D8[i]->func_001B1A30(380.0f, y + D_0027F2B8, 0);
        a2D8[i]->func_001B19A0(D_0028F5DC);
        a2D8[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        a304[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x21)->func_00103260(0);
}

void C_000D9750::func_000D9750() {
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        func_000D9530();
        unk2B0 = 0xff;
        unk2B4 = 0;
        unk2B8 = 0;
        unk2BC = 0;
        unk2C0 = 0.25f;
        func_001BEE30(0, 1);
        unk29C = 0;
    }
    if (unk2A0 != 0) {
        func_000D9FE0();
        unk2B0 = 0;
        unk2B4 = 0xff;
        unk2B8 = 0xff;
        unk2BC = 0;
        unk2C0 = 0.25f;
        unk2A0 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3C->func_001D6600();
    func_000D5860();
    func_00157960();
}

void BmxUIPageHOF6D::func_000D98E0()
{
    vtbl = &D_0027F534;
    for (int i = 0; i < 2; i++) {
        if (arr2EC[i] != 0) {
            arr2EC[i]->Destroy(1);
            arr2EC[i] = 0;
        }
        if (arr2F4[i] != 0) {
            arr2F4[i]->Destroy(1);
            arr2F4[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (arr2FC[i] != 0) {
            arr2FC[i]->Destroy(1);
            arr2FC[i] = 0;
        }
    }
    func_001BE3F0();
}

