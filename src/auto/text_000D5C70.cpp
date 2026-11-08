/* 8 functions from 0x000D5C70 to 0x000D6BC0, found by Ghidra. */
#include "common.h"
extern int D_0027F2D4;
struct S_59A0_Q { void func_0005BED0(int a, int b, float *f, char *s); };
struct S_59A0_A { char pad[0x2c0]; S_59A0_Q *q; };
struct S_59A0_X { char pad[0xf68]; int v; };
struct S_59A0_Y { char pad[4]; S_59A0_X *x; };
struct S_59A0_Res { int *func_0018C160(char *name); };
struct S_59A0_B { char pad[0x2e0]; S_59A0_A *a; char pad2[4]; S_59A0_Y *b; S_59A0_Res *res; };
extern S_59A0_B *D_002A8490;
extern float D_0027F2BC, D_00279F74, D_0027F2B8, D_0027F2B4;
extern char D_0027F2C0[];
extern int D_0028F5DC;
extern char D_00278690[], D_002786A0[], D_00278678[];
extern char D_0027F29C[], D_00279B00[], D_00279AF0[], D_00279AE0[], D_00279AD0[];
extern char D_0027F2AC[], D_0027CEF0[];
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, ...);
void *func_001E8A44(unsigned int size);
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct ElemHOF2 {
    virtual void Destroy(int a0);
    int f4;
    int f8;
    char padC[0x1c];
    int x;
    int y;
    char pad30[4];
    float f34;
    unsigned int f38;
    float m3c;
    float m40;
    float m44;
    float m48;
    char pad4c[0xc];
    unsigned char b58;
    ElemHOF2 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void func_001D5AD0();
    void SetIdentity() {
        m40 = 0;
        m44 = 0;
        unsigned char f = b58 | 4;
        m3c = 1.0f;
        m48 = 1.0f;
        _ReadWriteBarrier();
        b58 = f;
    }
    void SetX(int nx) {
        if (x != nx) {
            x = nx;
            b58 |= 1;
        }
    }
    void SetArgbRaw(unsigned int c) {
        f38 = (f38 & c) | (c & 0xffffff);
        b58 |= 2;
    }
    void SetPos(int nx, int ny) {
        if (f4 != nx || f8 != ny) {
            f4 = nx;
            f8 = ny;
            b58 |= 1;
        }
    }
};

struct S_000D6A60_Widget {
    S_000D6A60_Widget *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B2270(unsigned int c);
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1B30(float a, int b);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D6A60_Res {
    void func_00103350();
    void func_00103260(int a);
};

struct S_000D6A60_Owner {
    S_000D6A60_Res *func_000BA9B0(int a);
};

struct BmxUIPageHOF2 {
    void *vtbl;
    char pad4[0x124 - 4];
    S_000D6A60_Owner *f124;
    char pad128[0x280 - 0x128];
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
    u32 unk2A8;
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    s32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    ElemHOF2 *arr2C4[2];
    ElemHOF2 *arr2CC[2];
    S_000D6A60_Widget *arr2D4[5];
    S_000D6A60_Widget *arr2E8[5];
    ElemHOF2 *arr2FC[2];
    S_000D6A60_Widget *arr304[5];
    void func_001BE360(int a0);
    void func_001BE3F0();
    void func_001BF000();
    BmxUIPageHOF2 *func_000D5D40(int a0);
    BmxUIPageHOF2 *func_000D5E80(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(S_000D6A60_Widget *w, int a);
    void func_000D5E00();
    void func_000D6B40();
    void func_000D6A60();
    void func_000D5860();
    void func_000D59A0();
    void func_000D5B90();
    void func_001BEE30(int a, int b);
    void func_00157960();
    void func_000D5C70();
    void func_000D6710();
    void func_000D6860();
};

struct NodeHOF2 {
    void func_001D6600();
};

struct MgrHOF2 {
    char pad0[0x24];
    ElemHOF2 *unk24;
    ElemHOF2 *unk28;
    ElemHOF2 *unk2C;
    ElemHOF2 *unk30;
    NodeHOF2 *unk34;
    char pad38[4];
    NodeHOF2 *unk3C;
    char pad40[0x14];
    ElemHOF2 *unk54;
    char pad58[0x14];
    ElemHOF2 *unk6C;
};
extern MgrHOF2 *D_002B91AC;

void BmxUIPageHOF2::func_000D5C70()
{
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3C->func_001D6600();
    func_000D5860();
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        func_000D59A0();
        unk2B0 = 0xff;
        unk2B4 = 0;
        unk2B8 = 0;
        unk2BC = 0;
        unk2C0 = 0x3e800000;
        func_001BEE30(0, 1);
        unk29C = 0;
    }
    if (unk2A0 != 0) {
        func_000D5B90();
        unk2B0 = 0;
        unk2B4 = 0xff;
        unk2B8 = 0xff;
        unk2BC = 0;
        unk2C0 = 0x3e800000;
        unk2A0 = 0;
    }
    func_00157960();
}

BmxUIPageHOF2 *BmxUIPageHOF2::func_000D5D40(int a0)
{
    func_001BE360(a0);
    vtbl = &D_0027F2D4;
    void **p = (void **)arr2E8;
    for (int i = 0; i < 5; i++) {
        p[-5] = 0;
        *p = 0;
        p[7] = 0;
        p++;
    }
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    void **q = (void **)arr2CC;
    for (int i = 0; i < 2; i++) {
        q[-2] = 0;
        *q = 0;
        q++;
    }
    unk29C = 0;
    unk2A0 = 0;
    unk2AC = 0;
    unk2A8 = 0;
    unk2A4 = 1;
    for (int j = 0; j < 2; j++) {
        arr2FC[j] = 0;
    }
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    return this;
}

void BmxUIPageHOF2::func_000D5E00()
{
    vtbl = &D_0027F2D4;
    for (int i = 0; i < 2; i++) {
        if (arr2C4[i] != 0) {
            arr2C4[i]->Destroy(1);
            arr2C4[i] = 0;
        }
        if (arr2CC[i] != 0) {
            arr2CC[i]->Destroy(1);
            arr2CC[i] = 0;
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

BmxUIPageHOF2 *BmxUIPageHOF2::func_000D5E80(int a, int b, int c)
{
    void *mem;
    char buf[8];
    int i;
    int j;

    func_001BE4F0(a, b, c);
    D_002A8490->res->func_0018C160(D_00278690);
    D_002A8490->res->func_0018C160(D_002786A0);
    D_002A8490->res->func_0018C160(D_00278678);
    for (i = 0; i < 5; i++) {
        mem = func_001E8A44(0x184);
        arr2D4[i] = mem ? ((S_000D6A60_Widget *)mem)->func_001B12C0(1) : 0;
        arr2D4[i]->func_001B13A0(D_002786A0, D_002786A0, 0, 0x1e);
        arr2D4[i]->func_001B2270(0xffcccccc);
        func_001577A0(arr2D4[i], -1);
        mem = func_001E8A44(0x184);
        arr2E8[i] = mem ? ((S_000D6A60_Widget *)mem)->func_001B12C0(1) : 0;
        arr2E8[i]->func_001B13A0(D_002786A0, D_002786A0, 0, 0x32);
        arr2E8[i]->func_001B2270(0xffcccccc);
        func_001577A0(arr2E8[i], -1);
        mem = func_001E8A44(0x184);
        arr304[i] = mem ? ((S_000D6A60_Widget *)mem)->func_001B12C0(1) : 0;
        arr304[i]->func_001B13A0(D_002786A0, D_002786A0, 0, 5);
        arr304[i]->func_001B1A30(175.0f, (float)i * D_0027F2BC + D_0027F2B4, 0);
        arr304[i]->func_001B2270(0xffcccccc);
        func_001ADCC0(buf, 5, D_0027F2AC, i + 1, D_0027CEF0);
        arr304[i]->func_001B17D0(buf);
        func_001577A0(arr304[i], -1);
    }
    for (j = 0; j < 2; j++) {
        mem = func_001E8A44(0x64);
        arr2FC[j] = mem ? ((ElemHOF2 *)mem)->func_001D5760() : 0;
        if (j % 2 == 0) {
            arr2FC[j]->func_001D5810(D_0027F29C, 110.0f, 147.0f, 0);
            _ReadWriteBarrier();
        } else {
            arr2FC[j]->func_001D5810(D_0027F29C, 321.0f, 147.0f, 0);
        }
        arr2FC[j]->SetIdentity();
        arr2FC[j]->SetX(0x435d0000);
        arr2FC[j]->SetArgbRaw(0xffbfa35a);
    }
    mem = func_001E8A44(0x64);
    arr2C4[0] = mem ? ((ElemHOF2 *)mem)->func_001D5760() : 0;
    arr2C4[0]->func_001D5810(D_00279B00, 0, 0, 0);
    arr2C4[0]->SetPos(0x43560000, 0x42e40000);
    arr2C4[0]->SetArgbRaw(0xffbfa35a);
    mem = func_001E8A44(0x64);
    arr2CC[0] = mem ? ((ElemHOF2 *)mem)->func_001D5760() : 0;
    arr2CC[0]->func_001D5810(D_00279AF0, 0, 0, 0);
    arr2CC[0]->SetPos(0x43560000, 0x42e40000);
    mem = func_001E8A44(0x64);
    arr2C4[1] = mem ? ((ElemHOF2 *)mem)->func_001D5760() : 0;
    arr2C4[1]->func_001D5810(D_00279AE0, 0, 0, 0);
    arr2C4[1]->SetPos(0x43cd8000, 0x42e40000);
    arr2C4[1]->SetArgbRaw(0xffbfa35a);
    mem = func_001E8A44(0x64);
    arr2CC[1] = mem ? ((ElemHOF2 *)mem)->func_001D5760() : 0;
    arr2CC[1]->func_001D5810(D_00279AD0, 0, 0, 0);
    arr2CC[1]->SetPos(0x43cd8000, 0x42e40000);
    return this;
}

void BmxUIPageHOF2::func_000D6710()
{
    ElemHOF2 **ptr;
    ElemHOF2 *e;
    int count;
    MgrHOF2 *s;
    if (unk280) {
        D_002B91AC->unk6C->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    if (unk294) {
        e = arr2CC[1];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2CC[1]->func_001D5AD0();
    } else {
        e = arr2C4[1];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2C4[1]->func_001D5AD0();
    }
    if (unk298) {
        e = arr2CC[0];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2CC[0]->func_001D5AD0();
    } else {
        e = arr2C4[0];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        arr2C4[0]->func_001D5AD0();
    }
    ptr = arr2FC;
    count = 2;
    do {
        e = *ptr;
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
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

void BmxUIPageHOF2::func_000D6860()
{
 S_000D6A60_Owner *owner = f124;
 char buf[0x108]; char name[0x104]; char s[0x14];
 float f; volatile float y; int i;
 for(i=0;i<5;i++){
 arr2D4[i]->func_001B1980(); arr2E8[i]->func_001B1980(); arr304[i]->func_001B1980();
 D_002A8490->a->q->func_0005BED0(1,i,&f,s);
 int k=0; char c;
 do { c=s[k]; name[k]=c; k++; } while(c);
 func_001ADCC0(buf,0x104,D_0027F2C0,(double)f,D_002A8490->b->x->v);
 arr2D4[i]->func_001B17D0(name);
 y=i*D_0027F2BC;
 arr2D4[i]->func_001B1A30(191.0f,y+D_00279F74,0);
 arr2D4[i]->func_001B19A0(D_0028F5DC);
 arr2D4[i]->func_001B1B30(1.15f,0);
 arr2D4[i]->func_001B1860(0,-1.0f,0,1.15f,0,0,0,0xff,1.15f,0,0.25f,0,0);
 arr2E8[i]->func_001B17D0(buf);
 arr2E8[i]->func_001B1A30(380.0f,y+D_0027F2B8,0);
 arr2E8[i]->func_001B19A0(D_0028F5DC);
 arr2E8[i]->func_001B1B30(1.15f,0);
 arr2E8[i]->func_001B1860(0,-1.0f,0,1.15f,0,0,0,0xff,1.15f,0,0.25f,0,0);
 arr304[i]->func_001B1860(0,-1.0f,0,1.15f,0,0,0,0xff,1.15f,0,0.25f,0,0);
 }
 owner->func_000BA9B0(0x1e)->func_00103260(0);
}

void BmxUIPageHOF2::func_000D6A60()
{
    S_000D6A60_Owner *owner = f124;
    int i;
    for (i = 0; i < 5; i++) {
        arr2D4[i]->func_001B1980();
        arr2E8[i]->func_001B1980();
        arr304[i]->func_001B1980();
        arr2D4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr304[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x1e)->func_00103350();
}

void BmxUIPageHOF2::func_000D6B40()
{
    ElemHOF2 **p = arr2C4;
    int n = 2;
    do {
        ElemHOF2 *a = p[0x38 / 4];
        a->f38 = ((short)unk2B8 << 24) | (a->f38 & 0xffffff);
        a->b58 |= 2;
        ElemHOF2 *b = p[0];
        b->f38 = ((short)unk2B8 << 24) | (b->f38 & 0xffffff);
        b->b58 |= 2;
        ElemHOF2 *c = p[2];
        c->f38 = ((short)unk2B8 << 24) | (c->f38 & 0xffffff);
        c->b58 |= 2;
        p++;
        n--;
    } while (n != 0);
    func_001BF000();
}

