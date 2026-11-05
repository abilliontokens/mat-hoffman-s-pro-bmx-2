/* 6 functions from 0x0011BBB0 to 0x0011CB40, found by Ghidra. */
#include "common.h"

struct S_0011CA20_V4 {
    int x;
    int y;
    int z;
    int w;
};
extern S_0011CA20_V4 D_002A3BBC;

struct C_0011CA20 {
    char pad0[0x5C];
    S_0011CA20_V4 unk5C;
    char pad6C[0x50];
    int unkBC;
    char padC0[0x6C];
    int unk12C;
    void func_0011CA20();
};

void C_0011CA20::func_0011CA20()
{
    unk5C = D_002A3BBC;
    unkBC = 0;
    unk12C = 0;
}
