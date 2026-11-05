/* 5 functions from 0x000B4850 to 0x000B5260, found by Ghidra. */
#include "common.h"

extern int D_0027D37C;
extern int D_0027D3F0;
extern int D_0027D3FC;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_001577A0 {
    void func_001577A0(void *p, int n);
};

struct C_00198330 {
    char pad0[0x144];
    f32 f144;
    C_00198330 *func_00198330(void *a0);
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct C_000B3E10 {
    void func_000B3E10(void);
};

struct C_000B3410 {
    void func_000B3410(int a0);
};

struct C_000B1350 {
    int func_000B1350(void);
};

struct C_000B5020 {
    char pad0[0x28];
    int f28;
    char pad2C[0x8];
    int f34;
    int f38;
    char pad3C[0x8];
    C_000B3E10 **f44;
    C_000B3410 **f48;
    int func_000B5020(void);
};

struct BmxStallConstraint {
    void *vtbl;          /* 0x00 */
    char pad04[0x2c];    /* 0x04 */
    C_00198330 *f30;     /* 0x30 */
    Vec4 f34;            /* 0x34 */
    Vec4 f44;            /* 0x44 */
    f32 f54;             /* 0x54 */
    f32 f58;             /* 0x58 */
    f32 f5C;             /* 0x5C */
    f32 f60;             /* 0x60 */
    f32 f64;             /* 0x64 */
    f32 f68;             /* 0x68 */
    f32 f6C;             /* 0x6C */
    BmxStallConstraint *func_000B50B0(int param_1);
    void func_000B5120(void);
    void func_000B51C0(void);
};
