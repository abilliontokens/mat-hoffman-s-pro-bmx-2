/* 6 functions from 0x000A91C0 to 0x000A9ED0, found by Ghidra. */
#include "common.h"
extern int D_0027C51C;

struct C_00157660 {
    void func_00157660(void);
};

struct S_000A99A0_28 {
    char pad0[0x15C];
    int f15C;
};

struct C_000A99A0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_000A99A0_28 **f28;
    void func_000A99A0(void);
};

struct C_000A9A00 {
    char pad0[0x11C];
    int f11C;
    int f120;
    int f124;
    int f128;
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    int f140;
    int f144;
    int f148;
    int f14C;
    int f150;
    int f154;
    int f158;
    C_000A9A00 *func_000A9A00(void);
};

void C_000A99A0::func_000A99A0(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0027C51C;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f15C);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}
