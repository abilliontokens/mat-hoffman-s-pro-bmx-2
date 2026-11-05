/* 15 functions from 0x0004C7A0 to 0x0004D7A0, found by Ghidra. */
#include "common.h"

struct C_0004D610Obj {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void func4(void);
};

struct C_0004D610 {
    char pad0[0x288];
    C_0004D610Obj *f288;
    void func_00031450(void);
    void func_0004D610(void);
};

struct C_0004CC60Vec {
    int x, y, z, w;
};

struct C_0004CC60Item {
    char pad0[0x11b0];
    int f11b0;
    void func_00108510(void *p, C_0004CC60Vec v);
};

struct C_0004CC60 {
    char pad0[0x64];
    void *f64;
    char pad68[0x28];
    int f90;
    void func_0004CC60(int id, int a1, int a2, int a3, int a4, int a5);
};

struct C_0002EF70 {
    void func_0002EF70(int a, int b);
};

struct C_00030240 {
    void func_00030240(int a, int b, int c, int d, int e);
};

struct C_0012A770 {
    void func_0012A770(int a, int b);
};

struct C_0004D010 {
    char pad0[0x24];
    void *f24;
    char pad28[0x1C];
    void *f44;
    char pad48[0x1C];
    void *f64;
    void func_0004D010(void);
};

struct C_0001CCE0 {
    void func_0001CCE0(int a, void *b, void *c, void *d, void *e);
};

struct S_0004D070_Global {
    char pad0[4];
    C_0001CCE0 *f4;
};

struct C_0004D070 {
    char pad0[0x24];
    char *f24;
    char pad28[0x3C];
    void *f64;
    char pad68[4];
    int f6c;
    char pad70[0xB0];
    int f120;
    void func_0004D070(int flag);
};

extern S_0004D070_Global *D_002A8490;

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);
extern char D_002A5870[];
extern char D_002775F0[];
extern char D_002775E8[];
extern char D_002775D4[];
extern char D_002775BC[];
extern char D_002775A4[];
extern char D_00277590[];
extern char D_002A16E8[];
extern char D_002A1718[];

struct C_00168280 {
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168C20(const char *key, int flag, int *out);
    void func_00168550(const char *key, void *dst, int size);
    void func_00168CB0(const char *key, void *def, void *dst);
};

struct C_0013B1A0 {
    int func_0013B1A0(const char *key);
};
extern C_0013B1A0 *D_002BEAAC;

struct C_0004D480 {
    char pad0[0x64];
    char *f64;
    char pad68[0x61c];
    int f684;
    void func_0004D480(void);
};
extern char D_00275630;

struct H_Obj {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    virtual void vf5(); virtual void vf6();
    H_Obj *func_00088530(int a);
    H_Obj *func_00088570(int a);
    H_Obj *func_0005ECA0(int a);
    H_Obj *func_0005EDC0(void *a);
    H_Obj *func_000715B0(int a);
    H_Obj *func_00071880(void *a);
    H_Obj *func_00066C90(int a);
    H_Obj *func_00066FA0(void *a);
    H_Obj *func_00082450(int a);
    H_Obj *func_0008DB70(void *a, int b, int c, int d, int e, int f, int g);
    H_Obj *func_0006C380(int a);
    H_Obj *func_0006C570(void *a);
    H_Obj *func_00085470(int a);
    H_Obj *func_00085630(int a, int b);
};
struct H_Owner {
    char pad0[0x4e0];
    struct { char pad[0x1a8]; int unk1a8; } *unk4e0;
};
struct H_Global {
    char pad0[0x2e0];
    struct { int pad[2]; int unk8; } *unk2e0;
};
struct BmxEventHorse {
    void *vtbl;
    char pad4[0x60];
    H_Owner *unk64;
    char pad68[0x7c];
    H_Obj *unke4;
    char pade8[0x74];
    H_Obj *unk15c;
    char pad160[0x10];
    H_Obj *unk170;
    char pad174[0x1c];
    H_Obj *unk190;
    char pad194[8];
    H_Obj *unk19c;
    H_Obj *unk1a0;
    char pad1a4[0xe4];
    H_Obj *unk288;
    void func_00031630();
    void func_0004D2C0();
};

struct S_0004D630_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct C_0004D630 {
    char pad0[0x288];
    S_0004D630_Obj *f288;
    void func_000314A0();
    void func_0004D630();
};

struct C_0004D5F0 {
    char pad0[0x288];
    void *f288;
    void func_00031640();
    void func_0004D5F0();
};

void __stdcall func_001577A0(void *p, int flag);
int __stdcall func_00097DA0(void *p);

struct S_4D230_Obj {
    void func_0010C090(void *a, void *b, int c, int d);
};

struct S_4D230_Tbl {
    char pad0[0x1a8];
    S_4D230_Obj *objs[1];
};

struct S_4D230_Mgr {
    char pad0[0x4e0];
    S_4D230_Tbl *f4e0;
};

struct C_0004D230 {
    char pad0[0x64];
    S_4D230_Mgr *f64;
    char pad68[0xb8];
    int f120;
    char pad124[0x9c];
    void *f1c0;
    char pad1c4[0xc8];
    int f28c;
    char pad290[0x34];
    char f2c4[0x3c0];
    int f684;
    void func_0004D230();
};

struct S_4D0E0_Obj {
    char pad0[0x95c];
    int f95c;
    void func_00108680(int a);
    void func_0010C090(void *a, void *b, int c, int d);
    void func_0010E810();
};

struct S_4D0E0_Tbl {
    char pad0[0x1a8];
    S_4D0E0_Obj *objs[1];
    void func_000A4500(int a, int idx);
};

struct S_4D0E0_Mgr {
    char pad0[0x4e0];
    S_4D0E0_Tbl *f4e0;
};

struct S_4D0E0_A {
    void func_001C4D50(int a);
};

struct S_4D0E0_B {
    void func_000861A0(int idx);
    void func_00086200();
    void func_00086190();
    void func_00086130(int a);
    void func_00086140(int a);
    void func_00085BD0(int a);
};

struct S_4D0E0_C {
    void func_00056080();
};

struct S_4D0E0_D {
    char pad0[0x50];
    S_4D0E0_C *f50;
};

struct S_4D0E0_E {
    void func_00086C30(int a);
    void func_000847A0();
};

struct C_0004D0E0 {
    char pad0[0x44];
    S_4D0E0_D *f44;
    char pad48[0x1c];
    S_4D0E0_Mgr *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x8c];
    int f120;
    char pad124[0x34];
    S_4D0E0_A *f158;
    char pad15c[0x14];
    S_4D0E0_E *f170;
    char pad174[0x114];
    S_4D0E0_B *f288;
    int f28c;
    int f290;
    char pad294[0xc];
    int f2a0[8];
    int f2c0;
    void func_00034090();
    void func_0004D0E0();
    int func_0004D650();
};

void C_0004CC60::func_0004CC60(int id, int a1, int a2, int a3, int a4, int a5)
{
    for (int i = 0; i < f90; i++) {
        C_0004CC60Item *item = *(C_0004CC60Item **)(*(int *)((char *)f64 + 0x4e0) + 0x1a8 + i * 4);
        if (item != 0 && item->f11b0 == id) {
            C_0004CC60Vec v;
            v.x = a2;
            v.y = a3;
            v.z = a4;
            v.w = a5;
            item->func_00108510(&D_00275630, v);
        }
    }
}

int func_0004CCE0(void) {
    int func_00033300(...);
    func_00033300();
    return 1;
}

void C_0004D010::func_0004D010(void)
{
    int v = *(int *)((char *)f64 + 0x4e0);
    if (v != 0) {
        v = *(int *)(v + 0x1a8);
        if (v != 0) {
            ((C_0002EF70 *)f44)->func_0002EF70(v, 0);
        }
    }
    ((C_00030240 *)f44)->func_00030240(*(int *)((char *)f64 + 0x3e4), 0, 0, 0, 0);
    ((C_0012A770 *)f24)->func_0012A770(**(int **)((char *)f64 + 0x4a8), 2);
}

void C_0004D070::func_0004D070(int flag)
{
    if (f6c != -1) {
        void *p;
        if (flag != 0) {
            p = (void *)(*(int *)(*(int *)(*(int *)((char *)f64 + 0x4e0) + 0x1a8 + f120 * 4) + 0x1e0) + 0x238);
        } else {
            p = 0;
        }
        D_002A8490->f4->func_0001CCE0(f6c, f24 + 0x170, f24 + 0x180, f24 + 0x190, p);
    }
}

void C_0004D0E0::func_0004D0E0()
{
    f158->func_001C4D50(1000);
    if (f120 < f90) {
        f64->f4e0->func_000A4500(0, f120);
    }
    do {
        if (++f120 >= f90) {
            f120 = 0;
        }
    } while (f2a0[f120] == 0);
    f288->func_000861A0(f120);
    ((C_0002EF70 *)f44)->func_0002EF70((int)f64->f4e0->objs[f120], 0);
    f64->f4e0->func_000A4500(1, f120);
    char *base = (char *)this + f28c * 0x10;
    f64->f4e0->objs[f120]->func_0010C090(base + 0x688, base + 0x708, 0, 1);
    f64->f4e0->objs[f120]->func_0010E810();
    f44->f50->func_00056080();
    if (f170 != 0) {
        f170->func_00086C30((int)f64->f4e0->objs[f120]);
        f170->func_000847A0();
    }
}

void C_0004D230::func_0004D230()
{
    char *p;
    do {
        if (++f28c >= f684) {
            f28c = 0;
        }
        p = (char *)this + f28c * 0x78 + 0x2c4;
    } while (*p != 0 && f1c0 != 0 && func_00097DA0(p) == 0);

    char *base = (char *)this + f28c * 0x10;
    S_4D230_Mgr *m = f64;
    m->f4e0->objs[f120]->func_0010C090(base + 0x688, base + 0x708, 0, 1);
}

void BmxEventHorse::func_0004D2C0() {
    func_00031630();
    void *p = func_001E8A44(0xf4);
    unke4 = p ? ((H_Obj *)p)->func_00088530(1) : 0;
    unke4 = unke4->func_00088570(((H_Global *)D_002A8490)->unk2e0->unk8);
    p = func_001E8A44(0x134);
    unk15c = p ? ((H_Obj *)p)->func_0005ECA0(1) : 0;
    unk15c->func_0005EDC0(this);
    unk15c->vf4();
    p = func_001E8A44(0x140);
    unk1a0 = p ? ((H_Obj *)p)->func_000715B0(1) : 0;
    unk1a0->func_00071880(this);
    unk1a0->vf4();
    p = func_001E8A44(0x16c);
    unk190 = p ? ((H_Obj *)p)->func_00066C90(1) : 0;
    unk190->func_00066FA0(this);
    unk190->vf4();
    p = func_001E8A44(0xda4);
    unk170 = p ? ((H_Obj *)p)->func_00082450(1) : 0;
    unk170->func_0008DB70(unk64, unk64->unk4e0->unk1a8, ((H_Global *)D_002A8490)->unk2e0->unk8, 0, 0, 1, 1);
    unk170->vf6();
    p = func_001E8A44(0xf0);
    unk19c = p ? ((H_Obj *)p)->func_0006C380(1) : 0;
    unk19c->func_0006C570(this);
    unk19c->vf4();
    p = func_001E8A44(0xf8);
    H_Obj *q = p ? ((H_Obj *)p)->func_00085470(1) : 0;
    unk288 = q->func_00085630((int)unk64->unk4e0, 0);
}

void C_0004D5F0::func_0004D5F0()
{
    if (f288 != 0) {
        func_001577A0(f288, -1);
    }
    func_00031640();
}

void C_0004D610::func_0004D610(void)
{
    func_00031450();
    C_0004D610Obj *p = f288;
    if (p != 0) {
        p->func4();
    }
}

void C_0004D630::func_0004D630()
{
    func_000314A0();
    int *p = *(int **)((char *)this + 0x288);
    if (p != 0) {
        (*(void (__fastcall **)(void *))(*(int *)p + 0x18))(p);
    }
}

