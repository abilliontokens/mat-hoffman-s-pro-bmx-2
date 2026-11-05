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
