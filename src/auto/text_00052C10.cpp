/* 12 functions from 0x00052C10 to 0x00053930, found by Ghidra. */
#include "common.h"

extern int D_00277A84;

struct C_000536A0 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x280];
    int unk284;                       /* 0x284 */
    int unk288;                       /* 0x288 */
    void func_00030F90(int param);
    C_000536A0 *func_000536A0(int param);
};

C_000536A0 *C_000536A0::func_000536A0(int param)
{
    func_00030F90(param);
    unk284 = 0;
    unk288 = 0;
    vtbl = (void *)&D_00277A84;
    return this;
}

void func_00053920(void) {
    int func_00031640(...);
    func_00031640();
}
