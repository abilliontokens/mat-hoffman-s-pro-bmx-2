/* 4 functions from 0x000C6E70 to 0x000C7DF0, found by Ghidra. */
#include "common.h"

extern int D_0027E28C;

struct S_000C7_Obj {
    virtual void destroying(int flag);
};

struct BmxUIPageTwoPlayer {
    void *vtbl;
    char pad4[0x308 - 4];
    S_000C7_Obj *arr308[4];
    S_000C7_Obj *arr318[2];
    void func_001BE3F0(void);
    void func_000C7900(void);
};
