/* 9 functions from 0x000C6550 to 0x000C6E70, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0027E1F4;
extern char D_00278690[], D_002786A0[], D_00278678[], D_002786B0[];
extern float D_002757F0, D_0027E284, D_0027E140;
extern int D_0028F5E0;
void *func_001E8A44(int);
struct ParkStrings { char pad0[0xA80]; char *names[3][2]; };
struct ParkData { int pad0; ParkStrings *strings; };
struct ParkLookup { void *func_0018C160(const char *s); };
struct ParkManager { char pad0[0x2E8]; ParkData *data; ParkLookup *lookup; };
extern ParkManager *D_002A8490;
struct ParkDrawable {
 char pad0[0x28]; float f28; char pad2c[0x10];
 float f3c; volatile float f40, f44; float f48; char pad4c[0xC]; unsigned char f58; char pad59[0xB];
 ParkDrawable *func_001D5760();
 void func_001D5810(const char *, float, float, int);
};
extern const float D_00276DD4;

struct Mat {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 f58;
    void func_001D5AD0();
    void func_001D6600();
};

/* set a drawable's colour and mark it dirty */
static void setMatColor(Mat *m, u32 mask, u32 color)
{
    m->f38 = (m->f38 & mask) | color;
    m->f58 |= 2;
}

/* the shared drawable table the page draws from */
struct S_000C6550_Mgr {
    char pad0[0x24];
    Mat *unk24;
    Mat *unk28;
    Mat *unk2C;
    Mat *unk30;
    char pad34[0x4];
    Mat *arr38[2];
    char pad40[0x10];
    Mat *unk50;
    Mat *unk54;
    char pad58[0x8];
    Mat *unk60;
    Mat *unk64;
    Mat *unk68;
    Mat *unk6C;
};

extern S_000C6550_Mgr *D_002B91AC;

struct BmxUIPageParkEditor {
    char pad0[0x2C4];
    s16 f2c4;
    char pad2C6[0xA];
    Mat *f2d0;
    Mat *f2d4;
    Mat *f2d8;
    Mat *f2dc;
    void func_000C5E40();
    void func_000C6420();
    void func_00157960();
    void func_001BF000();
    void func_000C6550(void);
    void func_000C6600(void);
};

struct PageObj {
    virtual void destroy(int flags);
};

struct C_000C6CA0_Widget {
    char pad0[0x184];
    C_000C6CA0_Widget *func_001B12C0(int a);
    void func_001B13A0(const char *, const char *, int, int);
    void func_001B1C10(int a);
    void func_001B1AB0(int a, int b);
    void func_001B17D0(const char *s);
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1A30(float a1, float a2, float a3);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct BmxUIPageParkLevel {
    void *vtbl;
    char pad4[0x27C];
    union {
        int arr280[3];
        float f280[3];
    };
    int f28c;
    int f290;
    int f294;
    int f298;
    int f29c;
    int f2a0;
    int f2a4;
    int f2a8;
    int f2ac;
    int f2b0;
    int f2b4;
    int f2b8;
    int f2bc;
    int f2c0;
    int f2c4;
    int f2c8;
    int f2cc;
    int f2d0;
    int f2d4;
    int f2d8;
    int f2dc;
    int f2e0;
    union {
        int arr2e4[3];
        C_000C6CA0_Widget *w2e4[3];
    };
    union {
        PageObj *f2f0[6];
        Mat *m2f0[6];
    };
    BmxUIPageParkLevel *func_000C6720(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(C_000C6CA0_Widget *w, int a);
    void func_001BE360(int a);
    void func_001BE3F0();
    BmxUIPageParkLevel *func_000C6620(int a);
    void func_000C66E0();
    void func_000C6CA0();
    void func_000C6AD0();
    void func_000C6BA0();
    void func_000C6D70();
};

void BmxUIPageParkEditor::func_000C6550(void)
{
    Mat *m;

    m = f2d0;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    m = f2d4;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    m = f2d8;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    m = f2dc;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    func_001BF000();
}

void BmxUIPageParkEditor::func_000C6600(void)
{
    func_000C5E40();
    func_000C6420();
    func_00157960();
}

BmxUIPageParkLevel *BmxUIPageParkLevel::func_000C6620(int a)
{
    int *p;

    func_001BE360(a);
    vtbl = (void *)&D_0027E1F4;
    f28c = 0;
    p = arr280;
    for (int n = 3; n != 0; n--) {
        *(p + 0x19) = 0;
        *p = 0;
        p++;
    }
    f2a0 = 0;
    f2a4 = 0;
    f298 = 0;
    f290 = 0;
    f294 = 0;
    f2b0 = 0;
    f2ac = 0;
    f2a8 = 0;
    f2bc = 0;
    f2c0 = -1;
    f2c8 = 0;
    f2c4 = 0;
    for (int j = 0; j < 6; j++)
        f2f0[j] = 0;
    f2cc = 0;
    f2d0 = 0;
    f2d4 = 0;
    f2d8 = 0;
    f2dc = 0;
    f2e0 = f28c;
    return this;
}

void BmxUIPageParkLevel::func_000C66E0()
{
    vtbl = (void *)&D_0027E1F4;
    for (int i = 0; i < 6; i++) {
        if (f2f0[i]) {
            f2f0[i]->destroy(1);
            f2f0[i] = 0;
        }
    }
    func_001BE3F0();
}

extern "C" unsigned int __cdecl strlen(const char *s);
#pragma intrinsic(strlen)
BmxUIPageParkLevel *BmxUIPageParkLevel::func_000C6720(int a, int b, int c)
{
    int lengths[3];
    func_001BE4F0(a, b, c);
    D_002A8490->lookup->func_0018C160(D_00278690);
    D_002A8490->lookup->func_0018C160(D_002786A0);
    D_002A8490->lookup->func_0018C160(D_00278678);
    ParkStrings *strings = D_002A8490->data->strings;
    lengths[0] = strlen(strings->names[0][0]);
    lengths[1] = strlen(strings->names[1][0]);
    lengths[2] = strlen(strings->names[2][0]);
    for (int i = 0; i < 3; i++) {
        C_000C6CA0_Widget *w = (C_000C6CA0_Widget *)func_001E8A44(0x184);
        if (w) w = w->func_001B12C0(1);
        else w = 0;
        w2e4[i] = w;
        w->func_001B13A0(D_002786A0, D_002786A0, 0, lengths[i]);
        f280[i] = (float)i * D_002757F0 + D_0027E284;
        w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
        w2e4[i]->func_001B2270(0xffcccccc);
        w2e4[i]->func_001B1C10(D_0028F5E0);
        w2e4[i]->func_001B1AB0(0, 0);
        func_001577A0(w2e4[i], -1);
    }
    w2e4[0]->func_001B17D0(D_002A8490->data->strings->names[0][0]);
    w2e4[1]->func_001B17D0(D_002A8490->data->strings->names[1][0]);
    w2e4[2]->func_001B17D0(D_002A8490->data->strings->names[2][0]);
    for (int j = 0; j < 6; j++) {
        ParkDrawable *d = (ParkDrawable *)func_001E8A44(0x64);
        if (d) d = d->func_001D5760();
        else d = 0;
        f2f0[j] = (PageObj *)d;
        if (j % 2 == 0)
            d->func_001D5810(D_002786B0, 100.0f, (float)((j / 2) * 40) + D_0027E140, 0);
        else
            d->func_001D5810(D_002786B0, 321.0f, (float)((j / 2) * 40) + D_0027E140, 0);
        d = (ParkDrawable *)f2f0[j];
        d->f3c = 1.0f;
        d->f48 = 1.0f;
        unsigned char flags = d->f58 | 4;
        d->f40 = 0;
        d->f44 = 0;
        d->f58 = flags;
        d = (ParkDrawable *)f2f0[j];
        if (*(int *)&d->f28 != 0x435d0000) {
            d->f28 = 221.0f;
            d->f58 |= 1;
        }
    }
    return this;
}
void BmxUIPageParkLevel::func_000C6AD0()
{
    int i;

    for (i = 0; i < 3; i++) {
        w2e4[i]->func_001B1980();
        if (i == f28c) {
            w2e4[i]->func_001B2270(0xffbfa35a);
            w2e4[i]->func_001B1A30(320.0f, *(volatile float *)&f280[i] + D_00276DD4, 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            w2e4[i]->func_001B2270(0xffcccccc);
            w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0, 1.0f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

void BmxUIPageParkLevel::func_000C6BA0()
{
    int i;

    for (i = 0; i < 3; i++) {
        w2e4[i]->func_001B1980();
        if (i == f28c) {
            w2e4[i]->func_001B2270(0xffbfa35a);
            w2e4[i]->func_001B1A30(320.0f, *(volatile float *)&f280[i] + D_00276DD4, 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
        } else if (i == f2c0) {
            w2e4[i]->func_001B2270(0xffcccccc);
            w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        } else {
            w2e4[i]->func_001B2270(0xffcccccc);
            w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        }
    }
}

void BmxUIPageParkLevel::func_000C6CA0()
{
    int i;

    for (i = 0; i < 3; i++) {
        w2e4[i]->func_001B1980();
        if (i == f28c) {
            w2e4[i]->func_001B2270(0xffbfa35a);
            w2e4[i]->func_001B1A30(320.0f, *(volatile float *)&f280[i] + D_00276DD4, 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0, 0);
        } else {
            w2e4[i]->func_001B2270(0xffcccccc);
            w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void BmxUIPageParkLevel::func_000C6D70()
{
    S_000C6550_Mgr *s;
    int i;

    if (f290)
        D_002B91AC->unk68->func_001D5AD0();
    else
        D_002B91AC->unk50->func_001D5AD0();
    if (f294)
        D_002B91AC->unk6C->func_001D5AD0();
    else
        D_002B91AC->unk54->func_001D5AD0();
    for (i = 0; i < 2; i++)
        D_002B91AC->arr38[i]->func_001D6600();
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    for (i = 0; i < 6; i++) {
        if (i == f28c * 2 || i == f28c * 2 + 1)
            setMatColor(m2f0[i], 0xffbfa35a, 0xbfa35a);
        else
            setMatColor(m2f0[i], 0xffcccccc, 0xcccccc);
        m2f0[i]->func_001D5AD0();
    }
}
