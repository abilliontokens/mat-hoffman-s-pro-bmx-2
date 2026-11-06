/* 6 functions from 0x000D7B70 to 0x000D8B20, found by Ghidra. */
#include "common.h"
#include <string.h>
extern int D_0027F404;
extern char D_00277038[];
struct S_8820_Q { void func_0005BED0(int a, int b, float *f, char *s); };
struct S_8820_A { char pad[0x2c0]; S_8820_Q *q; };
struct S_8820_B { char pad[0x2e0]; S_8820_A *a; };
extern S_8820_B *D_002A8490;
extern float D_00275544, D_0027F2BC, D_0027F2B8;
extern int D_0028F5DC;
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

static inline int StrLen(const char *s)
{
    const char *p = s;
    while (*p++) {
    }
    return p - s - 1;
}

/* a drawable the page owns: func_001D5AD0 draws it, f38/b58 are its colour and dirty flag */
struct DelObjHOF4 {
    virtual void Destroy(int a0);
    char pad4[0x34];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    void func_001D5AD0();
};

struct S_000D85C0_Sprite {
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    S_000D85C0_Sprite *unk24;
    S_000D85C0_Sprite *unk28;
    S_000D85C0_Sprite *unk2C;
    S_000D85C0_Sprite *unk30;
    char pad34[0x54 - 0x34];
    S_000D85C0_Sprite *unk54;
    char pad58[0x6C - 0x58];
    S_000D85C0_Sprite *unk6C;
};

extern S_002B91AC *D_002B91AC;

struct S_000D8A40_Widget {
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B19C0(int a, int b, int c);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D8A40_Res {
    void func_00103260(int a);
};

struct S_000D8A40_Owner {
    S_000D8A40_Res *func_000BA9B0(int a);
};

struct BmxUIPageHOF4D {
    void *vtbl;
    char pad4[0x124 - 4];
    S_000D8A40_Owner *f124;
    char pad128[0x280 - 0x128];
    int f280;
    char pad284[0x294 - 0x284];
    int f294;
    int f298;
    char pad29C[0x2C0 - 0x29C];
    short f2C0;
    char pad2C2[0x2CC - 0x2C2];
    S_000D8A40_Widget *arr2CC[5];
    S_000D8A40_Widget *arr2E0[5];
    DelObjHOF4 *arr2F4[2];
    DelObjHOF4 *arr2FC[2];
    DelObjHOF4 *arr304[2];
    S_000D8A40_Widget *arr30C[5];
    void func_001BE3F0();
    void func_000D7B70();
    void func_000D85C0();
    void func_000D8700(int value, char *buf);
    void func_000D8820();
    void func_000D8A40();
};

void BmxUIPageHOF4D::func_000D7B70()
{
    vtbl = &D_0027F404;
    for (int i = 0; i < 2; i++) {
        if (arr2F4[i] != 0) {
            arr2F4[i]->Destroy(1);
            arr2F4[i] = 0;
        }
        if (arr2FC[i] != 0) {
            arr2FC[i]->Destroy(1);
            arr2FC[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (arr304[i] != 0) {
            arr304[i]->Destroy(1);
            arr304[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageHOF4D::func_000D85C0()
{
    DelObjHOF4 **ptr;
    DelObjHOF4 *e;
    int count;
    S_002B91AC *s;

    if (f280) {
        D_002B91AC->unk6C->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    if (f298) {
        e = arr2FC[0];
        e->f38 = ((short)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2FC[0]->func_001D5AD0();
    } else {
        e = arr2FC[0];
        e->f38 = ((short)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2F4[0]->func_001D5AD0();
    }
    if (f294) {
        e = arr2FC[1];
        e->f38 = ((short)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2FC[1]->func_001D5AD0();
    } else {
        e = arr2FC[1];
        e->f38 = ((short)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2F4[1]->func_001D5AD0();
    }
    ptr = arr304;
    count = 2;
    do {
        e = *ptr;
        e->f38 = ((short)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

void BmxUIPageHOF4D::func_000D8820()
{
    S_000D8A40_Owner *owner = f124;
    float f;
    int i;
    char s[0x14];
    char name[0x104];
    char buf[0x104];
    memset(buf, 0, sizeof(buf));
    for (i = 0; i < 5; i++) {
        float y;
        arr2CC[i]->func_001B1980();
        arr2E0[i]->func_001B1980();
        arr30C[i]->func_001B1980();
        D_002A8490->a->q->func_0005BED0(4, i, &f, s);
        int k = 0;
        char c;
        do { c = s[k]; name[k] = c; k++; } while (c);
        memset(buf, 0, sizeof(buf));
        if (f > D_00275544)
            func_000D8700((int)f, buf);
        else
            func_001ADCC0(buf, 0x104, D_00277038, (double)f);
        arr2CC[i]->func_001B17D0(name);
        arr2CC[i]->func_001B19C0(0xc6, i * 0x24 + 0x98, 0);
        arr2CC[i]->func_001B19A0(D_0028F5DC);
        arr2CC[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        arr2E0[i]->func_001B17D0(buf);
        y = i * D_0027F2BC + D_0027F2B8;
        arr2E0[i]->func_001B1A30(380.0f, y, 0);
        arr2E0[i]->func_001B19A0(D_0028F5DC);
        arr2E0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        arr30C[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x20)->func_00103260(0);
}

void BmxUIPageHOF4D::func_000D8A40()
{
    S_000D8A40_Owner *owner = f124;
    int i;
    for (i = 0; i < 5; i++) {
        arr2CC[i]->func_001B1980();
        arr2E0[i]->func_001B1980();
        arr30C[i]->func_001B1980();
        arr2CC[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr30C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x20)->func_00103260(0);
}

