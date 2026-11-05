/* 7 functions from 0x000A11A0 to 0x000A1EF0, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern char D_002A5C90[];
extern char D_00275678[];
extern char D_002A5870[];
extern char D_002A5B88[];

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct S_000A1920_Mgr {
    int f0;
};

struct S_000A1920_Global {
    char pad0[0x2e0];
    S_000A1920_Mgr *f2e0;
};

extern S_000A1920_Global *D_002A8490;

struct C_001596C0 {
    void func_001596C0(void *a0);
};

struct C_000A1E60 {
    char pad0[0x3ac];
    void *f3ac;
    char pad3b0[0x530 - 0x3b0];
    C_001596C0 *f530;
    int func_000A1E60(void);
};

struct C_000A17E0 {
    int func_00185110(int a0);
    int func_000A17E0(void);
};

struct C_001BB900 {
    void func_001BB900(void *a0);
};

struct C_000A1920_Sub {
    char pad0[0x9c];
    void *f9c;
    void *fa0;
};

struct C_000A1920_Elem {
    char pad0[0x950];
    C_000A1920_Sub *f950;
    char pad954[0x11ac - 0x954];
    void *f11ac;
    void *f11b0;
};

struct C_000A1920_Scene {
    char pad0[0x1a8];
    C_000A1920_Elem *arr1a8[1];
};

struct C_000A1920_Arg {
    char pad0[4];
    C_001BB900 *f4;
};

/* the targets the page feeds: a count at +0x24 and an array of C_000A1920_Arg at +0x28 */
struct C_000A1830_Targets {
    char pad0[0x24];
    int f24;
    C_000A1920_Arg **f28;
};

struct C_000A1920 {
    char pad0[0x3b4];
    C_000A1830_Targets *f3b4;
    char pad3b8[0x4e0 - 0x3b8];
    C_000A1920_Scene *f4e0;
    void func_000A1920(C_000A1920_Arg *a0);
    void func_000A1830(void);
};

struct C_000A1E90_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    C_000A1E90_Obj *func_000213F0(int a0);
    void func_00024380(int a0);
};

extern C_000A1E90_Obj *D_002B7E18;

struct C_000A1E90 {
    char pad0[0x28];
    int f28;
    void func_000A1E90(void);
};

int C_000A17E0::func_000A17E0(void) {
    int r;

    func_001ADCC0(D_002A5C90, 0x104, D_00275678, D_002A5870, D_002A5B88);
    r = func_00185110(0);
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
    return r;
}

void C_000A1920::func_000A1830(void)
{
    int j;
    int i;

    if (f3b4 != 0) {
        for (j = 0; j < f3b4->f24; j++) {
            for (i = 0; i < D_002A8490->f2e0->f0; i++) {
                f3b4->f28[j]->f4->func_001BB900(f4e0->arr1a8[i]->f11ac);
                f3b4->f28[j]->f4->func_001BB900(f4e0->arr1a8[i]->f950->f9c);
                f3b4->f28[j]->f4->func_001BB900(f4e0->arr1a8[i]->f950->fa0);
            }
        }
    }
}

void C_000A1920::func_000A1920(C_000A1920_Arg *a0) {
    int i = 0;
    if (D_002A8490->f2e0->f0 > 0) {
        do {
            a0->f4->func_001BB900(f4e0->arr1a8[i]->f11b0);
            i++;
        } while (i < D_002A8490->f2e0->f0);
    }
}

int C_000A1E60::func_000A1E60(void) {
    if (f530 != 0) {
        f530->func_001596C0(f3ac);
        return 1;
    }
    return 0;
}

void C_000A1E90::func_000A1E90(void) {
    if (D_002A8490->f2e0->f0 == 1) {
        if (D_002B7E18 == 0) {
            C_000A1E90_Obj *p = (C_000A1E90_Obj *)func_001E8A44(0xa4);
            if (p != 0) {
                p = p->func_000213F0(1);
            } else {
                p = 0;
            }
            D_002B7E18 = p;
            p->v10();
        }
        D_002B7E18->func_00024380(f28);
    }
}

