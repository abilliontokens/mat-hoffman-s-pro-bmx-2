/* 6 functions from 0x00178C60 to 0x00179B40, found by Ghidra. */
#include "common.h"

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
