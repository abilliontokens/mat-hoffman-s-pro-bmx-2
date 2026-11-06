/* 10 functions from 0x000C5580 to 0x000C6550, found by Ghidra. */
#include "common.h"

struct S_C5EA0_Clamp { float f10, f14; };
struct S_C5EA0_Inner { S_C5EA0_Clamp *func_0018C070(); };
struct S_C5EA0_Obj { S_C5EA0_Inner *f0; };
struct S_C5EA0_Disp { S_C5EA0_Obj *func_0018C160(int id); };
struct S_C5EA0_Mgr { char pad0[0x2ec]; S_C5EA0_Disp *f2ec; };
struct E_000C5710 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};

struct S5580_C { int func_000301D0(); };
struct S5580_B { char pad0[0x74]; S5580_C *f74; };
struct S5580_A { char pad0[0x25C]; S5580_B *f25C; };
struct S5580_Q { char pad0[0x30]; int f30; };
struct S5580_P { int f0; S5580_Q *f4; };
struct S5580_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};
struct S5580_G {
    char pad0[0x24];
    S5580_Elem *f24;
    S5580_Elem *f28;
    S5580_Elem *f2C;
    S5580_Elem *f30;
    char pad34[0x1C];
    S5580_Elem *f50;
    char pad54[0x14];
    S5580_Elem *f68;
    char pad6C[0x1C];
    S5580_Elem *f88;
    S5580_Elem *f8C;
    S5580_Elem *f90;
    S5580_Elem *f94;
};
struct C_5E40_G;
extern C_5E40_G *D_002B91AC;
struct S5580_R { int func_0005C0E0(); };
static inline int S5580_GetN(S5580_P *p) { return p->f4->f30; }
struct S5580_Q2 { char pad0[0x2C0]; S5580_R *f2C0; };
struct S5580_Root { char pad0[0x2E0]; S5580_Q2 *p2E0; };
struct C_NumHorse_Root;
extern C_NumHorse_Root *D_002A8490;
struct C_5E40_A;
struct C_6420_P;

struct S59_Base { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); };
struct S59_Obj : virtual S59_Base { };
struct S59_Arr { char pad0[0x28]; S59_Obj **f28; };
struct S59_Hold { char pad0[0x2C]; S59_Arr *f2C; };
struct S59_Mgr { int func_0001B3C0(int); };
struct S59_Page2 { char pad0[0x1A4]; S59_Obj *f1A4; };
struct S59_Ent { char pad0[0x484]; void *f484; };
struct S59_Ctl { int func_0005C1D0(int); void func_0005C1E0(int); };
struct S59_Sub { char pad0[0x2C0]; S59_Ctl *f2C0; };
struct S59_Reg { char pad0[4]; int f4; char pad8[0x2D8]; S59_Sub *f2E0_dummy; };

struct BmxUIPageMain {
    char pad0[0x124];
    S5580_A *f124;
    char pad128[0x18];
    S5580_P *f140;
    char pad144[0x144];
    int f288;
    char pad28C[0x14];
    int f2A0;
    int f2A4;
    char pad2A8[0x2D0 - 0x2A8];
    short f2D0;
    char pad2D2[0x2E0 - 0x2D2];
    int f2E0;
    int f2E4;
    int f2E8;
    int f2EC;
    int f2F0;
    char pad2F4[4];
    E_000C5710 *f2F8[10];
    char pad320[0x44];
    int f364;
    void func_000C4CE0();
    void func_000C4FD0();
    void func_000C5580();
    void func_00157960();
    void func_000C58A0(void);
    void func_000C5710(void);
    void func_001BF000(void);
};

void BmxUIPageMain::func_000C5580()
{
    S5580_Elem *m;
    E_000C5710 *e;
    S5580_G *s;
    S5580_B *owner;
    int n;
    int i;
    int count;

    owner = f124->f25C;
    if (owner->f74->func_000301D0() == 0) {
        if (f288)
            m = ((S5580_G *)D_002B91AC)->f68;
        else
            m = ((S5580_G *)D_002B91AC)->f50;
        m->func_001D5AD0();
    }
    if (f2E0 == 0 && f2E4 == 0 && f364 == 0 && f2E8 == 0 && f2EC == 0) {
        if (f2A0)
            m = ((S5580_G *)D_002B91AC)->f90;
        else
            m = ((S5580_G *)D_002B91AC)->f88;
        m->func_001D5AD0();
        if (f2A4)
            m = ((S5580_G *)D_002B91AC)->f94;
        else
            m = ((S5580_G *)D_002B91AC)->f8C;
        m->func_001D5AD0();
        n = S5580_GetN(f140) - 1;
        count = (((S5580_Root *)D_002A8490)->p2E0->f2C0->func_0005C0E0() != 0) ? 10 : 8;
        for (i = 0; i < count; i++) {
            if (n * 2 == i || n * 2 + 1 == i) {
                e = f2F8[i];
                e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
                e->b58 |= 2;
                f2F8[i]->func_001D5AD0();
            } else {
                e = f2F8[i];
                e->f38 = (e->f38 & 0xffcccccc) | 0xcccccc;
                e->b58 |= 2;
            }
        }
    }
    s = (S5580_G *)D_002B91AC;
    s->f24->func_001D5AD0();
    s->f28->func_001D5AD0();
    s->f2C->func_001D5AD0();
    s->f30->func_001D5AD0();
}

void BmxUIPageMain::func_000C5710(void)
{
    int i;

    for (i = 0; i < 10; i++) {
        E_000C5710 *e = f2F8[i];
        e->f38 = ((int)f2D0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
    }
    func_001BF000();
}

void BmxUIPageMain::func_000C58A0(void)
{
    if (f2F0 != 0) {
        func_000C4CE0();
        f2F0 = 0;
    }
    func_000C4FD0();
    func_000C5580();
    func_00157960();
}

extern int D_0027E14C;

struct PageObj_5580 {
    virtual void destroy(int flags);
    char pad4[0x24];
    int f28;
    char pad2C[0x10];
    int f3C, f40, f44, f48;
    char pad4C[0xC];
    unsigned char f58;
    PageObj_5580 *func_001D5760();
    void func_001D5810(void *, float, float, int);
};

struct C_5E40_C {
    int func_000301D0();
};

struct C_5E40_B {
    char pad0[0x74];
    C_5E40_C *f74;
};

struct C_5E40_A {
    char pad0[0x25C];
    C_5E40_B *f25C;
};

struct C_5E40_Dst {
    void func_001D6600();
};

struct C_6420_Q {
    char pad0[0x30];
    int f30;
};

struct C_6420_P {
    int f0;
    C_6420_Q *f4;
};

struct C_6420_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};

struct C_5E40_G {
    char pad0[0x24];
    C_6420_Elem *f24;
    C_6420_Elem *f28;
    C_6420_Elem *f2C;
    C_6420_Elem *f30;
    C_5E40_Dst *f34;
    C_5E40_Dst *f38;
    char pad3C[0x14];
    C_6420_Elem *f50;
    char pad54[0x14];
    C_6420_Elem *f68;
    char pad6C[0x14];
    C_5E40_Dst *f80;
    C_5E40_Dst *f84;
    C_6420_Elem *f88;
    C_6420_Elem *f8C;
    C_6420_Elem *f90;
    C_6420_Elem *f94;
};

extern C_5E40_G *D_002B91AC;

struct C_NumHorse_Lookup { int *func_0018C160(int a); };
struct C_5580_Q { char pad0[0x2C0]; struct C_5580_R *f2C0; };
struct C_5580_R { int func_0005C0E0(); int func_0005C1E0(int i); int func_0005C1D0(int i); };

struct C_59C0_Obj { void *vtbl; int f4; };
struct C_59C0_Res { char pad0[0x1a4]; C_59C0_Obj *f1a4; };
struct C_59C0_Tab4 { char pad0[0x28]; C_59C0_Res **f28; };
struct C_59C0_Tab3 { char pad0[0x2c]; C_59C0_Tab4 *f2c; int func_0001B3C0(int i); };
struct C_59C0_Tab2 { char pad0[0x484]; C_59C0_Tab3 *f484; };
struct C_59C0_VB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
};
struct C_59C0_Sub {
    char pad0[0x150];
    C_59C0_Tab2 *f150;
    char pad154[0x128];
    int f27c;
    int func_000BC0F0(int i);
};
struct C_59C0_Mgr { char pad0[0x2fc]; void *f2fc; void func_00094F00(); void func_00094A10(int a, void *b); void func_00094EE0(); void func_00094C60(); };
extern char D_0027DDEC[];
struct C_59C0_Mgr2 { char pad0[0x4]; char *f4; };
struct C_59C0_Page { char pad0[0x2e0]; C_59C0_Mgr *p2E0; char pad2e4[4]; C_59C0_Mgr2 *p2E8; };
struct C_NumHorse_Root { char pad0[0x2E0]; C_5580_Q *p2E0; char pad2E4[8]; C_NumHorse_Lookup *p2EC; };
extern C_NumHorse_Root *D_002A8490;
extern int D_00278690, D_002786A0, D_00278678, D_002786B0;
extern float D_0027E140;
void *func_001E8A44(int size);

struct E5EA0_F { char pad0[0x10]; float f10; float f14; };
struct E5EA0_H { E5EA0_F *func_0018C070(); };
struct E5EA0_W { E5EA0_F *func_001D5AA0(); };
extern float D_00275AEC;

struct BmxUIPageParkEditor {
    void func_000C59C0();
    void func_000C5EA0();
    void *vtbl;
    char pad4[0x120];
    C_5E40_A *f124;
    char pad128[0x18];
    C_6420_P *f140;
    char pad144[0x13C];
    int f280;
    int f284;
    char pad288[4];
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    char pad2A8[8];
    int f2B0;
    char pad2B4[8];
    int f2BC;
    int f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    PageObj_5580 *f2D0[4];
    BmxUIPageParkEditor *func_000C5D00(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_000C6420();
    void func_001BE360(int a);
    void func_001BE3F0();
    BmxUIPageParkEditor *func_000C58E0(int a);
    void func_000C5980();
    void func_000C5E40();
};

BmxUIPageParkEditor *BmxUIPageParkEditor::func_000C58E0(int a)
{
    int i;

    func_001BE360(a);
    vtbl = (void *)&D_0027E14C;
    for (i = 0; i < 4; i++)
        f2D0[i] = 0;
    f280 = 0;
    f284 = 0;
    f290 = 0;
    f28C = 0;
    f294 = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2A4 = 0;
    f2BC = 0;
    f2C0 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2B0 = 1;
    return this;
}

void BmxUIPageParkEditor::func_000C5980(void)
{
    int i;

    vtbl = (void *)&D_0027E14C;
    for (i = 0; i < 4; i++) {
        if (f2D0[i] != 0) {
            f2D0[i]->destroy(1);
            f2D0[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageParkEditor::func_000C59C0()
{
    char *self = (char *)this;
    C_59C0_Sub *sub = (C_59C0_Sub *)f124;
    int i, k, off, r;

    f280 = 0;
    *(int *)(self + 0x288) = 0;
    f284 = 0;
    f298 = 0;
    f294 = 0;
    f29C = 1;
    f2A4 = 0;
    for (i = 0; i < 16; i++) {
        if (sub->func_000BC0F0(i))
            break;
        D_002A8490->p2E0->f2C0->func_0005C1E0(i);
    }
    for (k = 0, off = 0; off < 0x1a80; k++, off += 0x1a8) {
        if (D_002A8490->p2E0->f2C0->func_0005C1D0(k) == 0) {
            if (off == 0x1a8 || off == 0x4f8 || off == 0x9f0 || off == 0xd40 || off == 0x13e0 || off == 0x18d8) {
                r = sub->f150->f484->func_0001B3C0(sub->f27c + off);
                ((C_59C0_VB *)sub->f150->f484->f2c->f28[r]->f1a4)->v5();
            }
        } else if (*(int *)((char *)D_002A8490->p2E0 + 4) == 0) {
            if (off == 0x1a8 || off == 0x4f8 || off == 0x9f0 || off == 0xd40 || off == 0x13e0 || off == 0x18d8) {
                r = sub->f150->f484->func_0001B3C0(sub->f27c + off);
                ((C_59C0_VB *)sub->f150->f484->f2c->f28[r]->f1a4)->v5();
            }
        } else {
            if (off == 0x1a8 || off == 0x4f8 || off == 0x9f0 || off == 0xd40 || off == 0x13e0 || off == 0x18d8) {
                r = sub->f150->f484->func_0001B3C0(sub->f27c + off);
                ((C_59C0_VB *)sub->f150->f484->f2c->f28[r]->f1a4)->v7();
            }
        }
    }
}

BmxUIPageParkEditor *BmxUIPageParkEditor::func_000C5D00(int a, int b, int c)
{
    int i;
    PageObj_5580 *p;
    PageObj_5580 *o;
    func_001BE4F0(a, b, c);
    D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    for (i = 0; i < 4; i++) {
        p = (PageObj_5580 *)func_001E8A44(0x64);
        p = p != 0 ? p->func_001D5760() : 0;
        f2D0[i] = p;
        if (i % 2 == 0) {
            p->func_001D5810(&D_002786B0, 100.0f, (float)(i / 2 * 40) + D_0027E140, 0);
        } else {
            p->func_001D5810(&D_002786B0, 321.0f, (float)(i / 2 * 40) + D_0027E140, 0);
            o = f2D0[i];
            o->f3C = 0x3f800000;
            o->f40 = 0;
            o->f44 = 0;
            o->f48 = 0x3f800000;
            o->f58 |= 4;
        }
        o = f2D0[i];
        if (o->f28 != 0x435d0000) {
            o->f28 = 0x435d0000;
            o->f58 |= 1;
        }
    }
    return this;
}

void __fastcall func_000C5E40(BmxUIPageParkEditor *self)
{
    C_5E40_A *a = self->f124;

    if (a->f25C->f74->func_000301D0() == 0)
        D_002B91AC->f38->func_001D6600();
    D_002B91AC->f80->func_001D6600();
    D_002B91AC->f84->func_001D6600();
    D_002B91AC->f34->func_001D6600();
}

void BmxUIPageParkEditor::func_000C6420()
{
    C_6420_Elem *e;
    C_6420_Elem *m;
    C_5E40_G *s;
    C_5E40_B *o;
    int n;
    int i;

    o = f124->f25C;
    if (o->f74->func_000301D0() == 0) {
        if (f280)
            m = D_002B91AC->f68;
        else
            m = D_002B91AC->f50;
        m->func_001D5AD0();
    }
    if (f294)
        m = D_002B91AC->f90;
    else
        m = D_002B91AC->f88;
    m->func_001D5AD0();
    if (f298)
        m = D_002B91AC->f94;
    else
        m = D_002B91AC->f8C;
    m->func_001D5AD0();
    n = f140->f4->f30 - 1;
    for (i = 0; i < 4; i++) {
        if (i == n * 2 || i == n * 2 + 1) {
            e = (C_6420_Elem *)f2D0[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
        } else {
            e = (C_6420_Elem *)f2D0[i];
            e->b58 |= 2;
            e->f38 = (e->f38 & 0xffcccccc) | 0xcccccc;
        }
        ((C_6420_Elem *)f2D0[i])->func_001D5AD0();
    }
    s = D_002B91AC;
    s->f24->func_001D5AD0();
    s->f28->func_001D5AD0();
    s->f2C->func_001D5AD0();
    s->f30->func_001D5AD0();
}

