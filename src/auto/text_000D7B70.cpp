/* 6 functions from 0x000D7B70 to 0x000D8B20, found by Ghidra. */
#include "common.h"
extern int D_0027F404;

struct DelObjHOF4 {
    virtual void Destroy(int a0);
};

struct BmxUIPageHOF4D {
    void *vtbl;
    char pad4[0x2F4 - 4];
    DelObjHOF4 *arr2F4[2];
    DelObjHOF4 *arr2FC[2];
    DelObjHOF4 *arr304[2];
    void func_001BE3F0();
    void func_000D7B70();
};
