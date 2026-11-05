/* 7 functions from 0x00087D20 to 0x00088B60, found by Ghidra. */
#include "common.h"

extern int D_002798B4;
extern int D_0027993C;
extern f32 D_002A2034;
extern f32 D_002A2038;
extern f32 D_002A203C;
extern f32 D_002A2040;

struct C_00157600 {
    void func_00157600(int a0);
};

struct Sub_00088530 {
    char pad0[0x64];
    void func_001D5760();
};

struct SplitScreenSeparator {
    void *vtbl;            /* 0x00 */
    char pad04[0x20];      /* 0x04 */
    Sub_00088530 sub24;    /* 0x24 */
    Sub_00088530 sub88;    /* 0x88 */
    u32 fEC;               /* 0xEC */
    SplitScreenSeparator *func_00088530(int param_1);
};

struct DirectionArrowOverlay {
    void *vtbl;            /* 0x00 */
    char pad04[0x24];      /* 0x04 */
    void *f28;             /* 0x28 */
    void *f2C;             /* 0x2C */
    u32 f30;               /* 0x30 */
    f32 f34;               /* 0x34 */
    f32 f38;               /* 0x38 */
    f32 f3C;               /* 0x3C */
    f32 f40;               /* 0x40 */
    u32 f44;               /* 0x44 */
    f32 f48;               /* 0x48 */
    f32 f4C;               /* 0x4C */
    f32 f50;               /* 0x50 */
    DirectionArrowOverlay *func_000888D0(int param_1);
};

SplitScreenSeparator *SplitScreenSeparator::func_00088530(int param_1)
{
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_002798B4;
    sub24.func_001D5760();
    sub88.func_001D5760();
    fEC = 0;
    return this;
}
