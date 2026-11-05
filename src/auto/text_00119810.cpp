/* 4 functions from 0x00119810 to 0x0011A590, found by Ghidra. */
#include "common.h"

extern int D_00283D5C;
extern int D_0027D3F0;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00198330 {
    char pad0[0x144];
    f32 f144;
    C_00198330 *func_00198330(int a0);
    void func_00199A70(int a0, Vec4 *a1);
};

struct BmxWallPlantConstraint {
    void *vtbl;          /* 0x00 */
    char pad04[0x24];    /* 0x04 */
    C_00198330 *f28;     /* 0x28 */
    Vec4 f2C;            /* 0x2C */
    Vec4 f3C;            /* 0x3C */
    Vec4 f4C;            /* 0x4C */
    f32 f5C;             /* 0x5C */
    f32 f60;             /* 0x60 */
    f32 f64;             /* 0x64 */
    f32 f68;             /* 0x68 */
    f32 f6C;             /* 0x6C */
    f32 f70;             /* 0x70 */
    BmxWallPlantConstraint *func_0011A440(int param_1);
    void func_0011A4B0();
    void func_0011A550(Vec4 *a, Vec4 *b);
};
