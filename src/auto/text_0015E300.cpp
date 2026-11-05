/* 14 functions from 0x0015E300 to 0x0015F120, found by Ghidra. */
#include "common.h"

struct S_0015E300_V3 {
    int x, y, z;
};

struct S_0015E300_V4 {
    int x, y, z, w;
};

struct S_0015E300_Elem {
    char pad0[4];
    unsigned int f4;
    char pad8[0xC0];
};

struct C_0015E300 {
    char pad0[0x24];
    S_0015E300_Elem *f24;
    int f28;
    char pad2C[0xC];
    int *f38;
    S_0015E300_V4 *f3C;
    S_0015E300_V4 f40;
    S_0015E300_V4 *f50;
    S_0015E300_V4 f54;
    S_0015E300_V4 *f64;
    char pad68[0x10];
    int f78;
    void func_0015E300(int idx, S_0015E300_V3 *pos, int *val);
    void func_0015E360(S_0015E300_V4 *v);
    void func_0015E3C0(void);
    int func_0015E5B0(void);
};

void C_0015E300::func_0015E300(int idx, S_0015E300_V3 *pos, int *val)
{
    if (idx >= 0 && idx < f78) {
        if (f3C != 0 && pos != 0) {
            f3C[idx].x = pos->x;
            f3C[idx].y = pos->y;
            f3C[idx].z = pos->z;
        }
        if (f38 != 0 && val != 0) {
            f38[idx] = *val;
        }
    }
}

void C_0015E300::func_0015E360(S_0015E300_V4 *v)
{
    int i;

    f40 = *v;
    for (i = 0; i < f78; i++) {
        f50[i] = *v;
    }
}

void C_0015E300::func_0015E3C0(void)
{
    int i;

    f40 = f54;
    for (i = 0; i < f78; i++) {
        f50[i] = f64[i];
    }
}

int C_0015E300::func_0015E5B0(void)
{
    unsigned int min = f24[0].f4;
    int best = 0;
    int i;

    if (min == 0) {
        return 0;
    }
    for (i = 1; i < f28; i++) {
        unsigned int v = f24[i].f4;
        if (v == 0) {
            return i;
        }
        if (v < min) {
            min = v;
            best = i;
        }
    }
    return best;
}
