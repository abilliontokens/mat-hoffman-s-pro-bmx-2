/* 30 functions from 0x000A84A0 to 0x000A91C0, found by Ghidra. */
#include "common.h"

extern int D_0027C310;
extern "C" int strcmp(const char *s1, const char *s2);

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

void C_000A84A0::func_000A84A0(void *param1, void *param2)
{
    int i;
    i = 0;
    field20 = param1;
    if (0 < count) {
        do {
            funcs[i](param1, this, args[i], param2);
            i = i + 1;
        } while (i < count);
    }
}

void C_000A84F0::func_000A84F0()
{
    int i;
    i = 0;
    if (0 < count) {
        do {
            *(int *)((char *)items[i] + 0x18) = 0;
            i = i + 1;
        } while (i < count);
    }
}

int strcmp(const char *s1, const char *s2);
int C_000A8520::func_000A8520(char *param)
{
    int i;
    int j;
    char *p;
    i = 0;
    if (0 < count) {
        do {
            j = 0;
            p = items[i] + 0x128;
            do {
                if (strcmp(p, param) == 0) {
                    return i;
                }
                j = j + 1;
                p = p + 0x78;
            } while (j < 6);
            i = i + 1;
        } while (i < count);
    }
    return -1;
}

C_000A8D70 *C_000A8D70::func_000A8D70()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C310;
    return this;
}
