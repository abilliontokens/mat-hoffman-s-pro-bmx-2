/* 30 functions from 0x000A84A0 to 0x000A91C0, found by Ghidra. */
#include "common.h"

extern int D_0027C310;

struct C_001B59E0 {
    void func_001B59E0();
};

struct C_000A8D70 {
    void *vtbl;
    C_000A8D70 *func_000A8D70();
};

struct C_000A84A0 {
    void *vtbl;
    int count;
    char pad8[8];
    void (__cdecl **funcs)(void *, void *, void *, void *);
    void **args;
    char pad18[8];
    void *field20;
    int count2;
    void **items2;
    void func_000A84A0(void *param1, void *param2);
};

struct C_000A84F0 {
    char pad0[0x24];
    int count;
    void **items;
    void func_000A84F0();
};

struct C_000A8520 {
    char pad0[0x24];
    int count;
    char **items;
    int func_000A8520(char *param);
};

C_000A8D70 *C_000A8D70::func_000A8D70()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C310;
    return this;
}
