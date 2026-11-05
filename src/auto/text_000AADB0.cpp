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
