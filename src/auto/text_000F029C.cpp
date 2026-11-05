/* 8 functions from 0x000F029C to 0x000F0DC0, found by Ghidra. */
#include "common.h"

extern int D_002823DC;

struct DelObjC_000F0 {
    virtual void Destroy(int a0);
};

/* BmxUIPageOtherVideos */
struct C_000F0D20 {
    void *vtbl;
    char pad4[0x3E8 - 4];
    DelObjC_000F0 *arr3E8[4];
    DelObjC_000F0 *arr3F8[2];
    DelObjC_000F0 *arr400[4];
    DelObjC_000F0 *arr410[4];
    void func_001BE3F0(void);
    void func_000F0D20(void);
};
