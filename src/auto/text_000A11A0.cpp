/* 7 functions from 0x000A11A0 to 0x000A1EF0, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern char D_002A5C90[];
extern char D_00275678[];
extern char D_002A5870[];
extern char D_002A5B88[];

extern char D_002A5FA8[];
extern char D_002A60B0[];
extern char D_002A5D98[];
extern char D_002A5EA0[];
struct C_000A11A0 {
    int func_00189AA0(void);
    int func_000A11A0(void);
};

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

/* the 0x24-byte node group a page registers its controls with */
struct S_000A1990_Group {
    S_000A1990_Group *func_00157600(int a0);
    void func_001577A0(void *obj, int flags);
};

struct S_000A1990_List {
    int f0;
    int f4;
};

extern void *D_002B9134;

struct C_000A1990 {
    char pad0[0x340];
    int f340;
    char pad344[0x388 - 0x344];
    S_000A1990_List *f388;
    void *f38C;
    char pad390[0x398 - 0x390];
    void *f398;
    void *f39C;
    void *f3A0;
    void *f3A4;
    void **f3A8;
    void *f3AC;
    void **f3B0;
    void *f3B4;
    char pad3B8[0x3C0 - 0x3B8];
    void *f3C0;
    char pad3C4[0x3DC - 0x3C4];
    void *f3DC;
    void **f3E0;
    void *f3E4;
    void *f3E8;
    void *f3EC;
    void *f3F0;
    void *a3F4[12];
    void *a424[24];
    void *f484;
    void *f488;
    void **f48C;
    int f490;
    int f494;
    char pad498[0x4A0 - 0x498];
    void *f4A0;
    void *f4A4;
    char pad4A8[0x4E0 - 0x4A8];
    void *f4E0;
    void *a4E4[8];
    void *a504[8];
    char pad524[0x528 - 0x524];
    void *f528;
    char pad52C[0x530 - 0x52C];
    void *f530;
    char pad534[0x538 - 0x534];
    void *f538;
    void *f53C;
    void *f540;
    char pad544[0x548 - 0x544];
    void *f548;
    void *f54C;
    char pad550[0x558 - 0x550];
    void *f558;
    char pad55C[0x598 - 0x55C];
    S_000A1990_Group *f598;
    S_000A1990_Group *f59C;
    C_000A1990 *func_000A1990(void **list, int count);
    void func_001577A0(void *obj, int flags);
};

int C_000A11A0::func_000A11A0(void) {
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A5D98);
    int r = func_00189AA0();
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
    return r;
}

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

C_000A1990 *C_000A1990::func_000A1990(void **list, int count)
{
    int i;
    if (f598 == 0) {
        S_000A1990_Group *p = (S_000A1990_Group *)func_001E8A44(0x24);
        if (p != 0) {
            p = p->func_00157600(1);
        } else {
            p = 0;
        }
        f598 = p;
        func_001577A0(p, -1);
    }
    if (f4A4) f598->func_001577A0(f4A4, -1);
    if (f38C) f598->func_001577A0(f38C, 2);
    if (f3EC) f598->func_001577A0(f3EC, -1);
    if (f558) f598->func_001577A0(f558, 8);
    if (f3E0) {
        if (f59C == 0) {
            S_000A1990_Group *p = (S_000A1990_Group *)func_001E8A44(0x24);
            if (p != 0) {
                p = p->func_00157600(1);
            } else {
                p = 0;
            }
            f59C = p;
            f598->func_001577A0(p, -1);
        }
        for (i = 0; i < f388->f4; i++) {
            f59C->func_001577A0(f3E0[i], -1);
        }
    }
    if (f3DC) f598->func_001577A0(f3DC, -1);
    if (f538) f598->func_001577A0(f538, 2);
    if (f53C) f598->func_001577A0(f53C, 0x1000);
    if (f540) f598->func_001577A0(f540, 0x1000);
    if (f548) f598->func_001577A0(f548, 0x1000);
    if (f54C) f598->func_001577A0(f54C, 0x1000);
    if (f3E4) f598->func_001577A0(f3E4, -1);
    if (f3A8) {
        for (i = 0; i < f340; i++) {
            f598->func_001577A0(f3A8[i], 2);
        }
    }
    if (f3B0) {
        for (i = 0; i < f340; i++) {
            f598->func_001577A0(f3B0[i], 0);
        }
    }
    if (f484) f598->func_001577A0(f484, -1);
    if (f3AC) f598->func_001577A0(f3AC, -1);
    if (f4E0) f598->func_001577A0(f4E0, -1);
    for (i = 0; i < 8; i++) {
        if (a4E4[i]) f598->func_001577A0(a4E4[i], -1);
        if (a504[i]) f598->func_001577A0(a504[i], -1);
    }
    if (f528) f598->func_001577A0(f528, -1);
    if (f3C0) f598->func_001577A0(f3C0, 0x402);
    if (f488) f598->func_001577A0(f488, -1);
    for (i = 0; i < count; i++) {
        f598->func_001577A0(list[i], -3);
    }
    if (f494 > 0) {
        for (i = 0; i < f494; i++) {
            if (a3F4[i]) f598->func_001577A0(a3F4[i], -1);
            if (a424[i]) f598->func_001577A0(a424[i], -1);
        }
    }
    for (i = 0; i < f490; i++) {
        f598->func_001577A0(f48C[i], -1);
    }
    if (f3B4) f598->func_001577A0(f3B4, -1);
    if (f4A0) f598->func_001577A0(f4A0, 2);
    if (f3E8) f598->func_001577A0(f3E8, 0x402);
    if (f3F0) f598->func_001577A0(f3F0, 0);
    if (f398) f598->func_001577A0(f398, 2);
    if (f39C) f598->func_001577A0(f39C, 2);
    if (f3A0) f598->func_001577A0(f3A0, 0);
    if (f3A4) f598->func_001577A0(f3A4, 0);
    if (f530) f598->func_001577A0(f530, 2);
    if (D_002B9134) f598->func_001577A0(D_002B9134, -1);
    if (D_002B7E18) f598->func_001577A0(D_002B7E18, -1);
    return this;
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

