/* 8 functions from 0x000AADB0 to 0x000ABD80, found by Ghidra. */
#include "common.h"

extern int D_0027C7F8;
extern int D_0027C724;

struct C_001B59E0 {
    void func_001B59E0();
};

struct C_000ABD60 {
    void *vtbl;
    C_000ABD60 *func_000ABD60();
};

struct C_00157660 {
    void func_00157660(void);
};

struct S_000AB490_28 {
    char pad0[0x110];
    int f110;
};

struct C_000AB490 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_000AB490_28 **f28;
    void func_000AB490(void);
};

/* ObjectExclusionBoxes */
struct C_000AB340_Obj {
    void func_00198390();
    void func_001983A0();
};

struct C_000AB340_Box {
    float f0, f4, f8, fC, f10, f14;
    int f18;
    int pad1C;
    C_000AB340_Obj **f20;
    int f24;
};

struct C_000AB340_Vec {
    float x, y, z, w;
};

struct C_000AB340_Cam {
    char pad0[0x170];
    C_000AB340_Vec f170;
    C_000AB340_Vec f180;
    C_000AB340_Vec f190;
};

struct C_000ABBC0_Sub {
    void func_00199650(C_000AB340_Vec *a);
    void func_00198F50(C_000AB340_Vec *a, C_000AB340_Vec *b, int c, int d, int e);
    void func_0019AC50();
};

struct C_000ABBC0_Obj {
    char pad0[0x104];
    int f104;
    char pad108[4];
    int f10C;
    C_000ABBC0_Sub **f110;
};

struct C_000ABBC0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    C_000ABBC0_Obj **f28;
    void func_001578D0();
    void func_000ABBC0(void);
};

struct C_000AB340_Global {
    char pad0[4];
    C_000AB340_Cam *f4;
};

extern C_000AB340_Global *D_002EFDB8;

struct C_000AB340 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    C_000AB340_Box *f28;
    void func_001578D0();
    void func_000AB340(void);
};

void C_000AB340::func_000AB340(void)
{
    C_000AB340_Vec v = D_002EFDB8->f4->f170;
    int i;
    int j;

    if (f24 == 0) {
        func_001578D0();
        return;
    }
    for (i = 0; i < f24; i++) {
        if (v.x > f28[i].f0 && f28[i].f4 > v.x && f28[i].f10 < v.y && f28[i].f14 > v.y && f28[i].f8 < v.z && f28[i].fC > v.z) {
            f28[i].f24 = 1;
            for (j = 0; j < f28[i].f18; j++) {
                f28[i].f20[j]->func_00198390();
            }
        } else if (f28[i].f24 != 0) {
            f28[i].f24 = 0;
            for (j = 0; j < f28[i].f18; j++) {
                f28[i].f20[j]->func_001983A0();
            }
        }
    }
    func_001578D0();
}

void C_000AB490::func_000AB490(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0027C724;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f110);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

C_000ABD60 *C_000ABD60::func_000ABD60()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C7F8;
    return this;
}
