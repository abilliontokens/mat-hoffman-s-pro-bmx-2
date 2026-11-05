/* 6 functions from 0x00178C60 to 0x00179B40, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern int D_00288ED4;

struct C_00157600 {
    void func_00157600(int a0);
};

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00179820 {
    void *vtbl;
    char pad4[0x20];
    Vec4 v24[4];
    Vec4 v64;
    Vec4 v74[4];
    float fB4;
    C_00179820 *func_00179820(int a0);
    void func_00179880(void);
};

C_00179820 *C_00179820::func_00179820(int a0) {
    u32 *p;
    int n;

    ((C_00157600 *)this)->func_00157600(a0);
    vtbl = &D_00288ED4;
    p = (u32 *)v24;
    n = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    p = (u32 *)&v64;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)v74;
    n = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    return this;
}
