/* 4 functions from 0x000BEE30 to 0x000BFBA0, found by Ghidra. */
#include "common.h"

extern int D_0027DF54;

struct S_000BF860_elem {
    char pad0[4];
    float x;
    float y;
    char pad0C[0x42];
    unsigned char f4E;
    char pad4F[9];
    unsigned char f58;
    void SetXY58(float nx, float ny)
    {
        if (nx != x || y != ny) {
            x = nx;
            y = ny;
            f58 |= 1;
        }
    }
    void SetXY4E(float nx, float ny)
    {
        if (nx != x || y != ny) {
            x = nx;
            y = ny;
            f4E |= 6;
        }
    }
};

struct C_000BF860 {
    char pad0[0x38];
    S_000BF860_elem *a38[6];
    S_000BF860_elem *a50[6];
    S_000BF860_elem *a68[6];
    void func_000BF860(int idx, int x, int y, int w);
};

struct C_001BE360 {
    void func_001BE360(void *param);
};

struct C_000BFB70 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    C_000BFB70 *func_000BFB70(void *param);
};

void C_000BF860::func_000BF860(int idx, int x, int y, int w)
{
    float fx = (float)x;
    float fy = (float)y;
    S_000BF860_elem *e = a50[idx];
    if (fx != e->x || e->y != fy) {
        e->x = fx;
        e->y = fy;
        e->f58 |= 1;
    }
    e = a68[idx];
    if (fx != e->x || e->y != fy) {
        e->x = fx;
        e->y = fy;
        e->f58 |= 1;
    }
    e = a38[idx];
    float nx = (float)(w + 0x27 + x);
    float ny = (float)(y + 5);
    if (nx != e->x || e->y != ny) {
        e->x = nx;
        e->y = ny;
        e->f4E |= 6;
    }
}

C_000BFB70 *C_000BFB70::func_000BFB70(void *param)
{
    ((C_001BE360 *)this)->func_001BE360(param);
    f280 = 0;
    f284 = 0;
    vtbl = (void *)&D_0027DF54;
    return this;
}
