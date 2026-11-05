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
extern char D_00275630;

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

struct S_4D230_Mgr {
    char pad0[0x4e0];
    char *f4e0;
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

