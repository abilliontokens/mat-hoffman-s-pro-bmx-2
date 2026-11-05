/* 24 functions from 0x001ED0FC to 0x001EDD36, found by Ghidra. */
#include "common.h"

#pragma optimize("y", off)
void func_001ED0FC(unsigned int *param_1, int param_2)
{
    int func_001F5059(...);
    int func_001F4848(...);
    unsigned int uVar3;
    unsigned int uVar1;
    int iVar2;
    int locals[6];
    uVar3 = 0;
    uVar1 = func_001F5059(&locals[0], &locals[5], param_2, 0, 0, 0, 0);
    if (uVar1 & 4) {
        uVar3 = 0x200;
        locals[3] = 0;
        locals[4] = 0;
    } else {
        iVar2 = func_001F4848(&locals[0], &locals[3]);
        if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
            uVar3 = 0x80;
        }
        if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
            uVar3 = uVar3 | 0x100;
        }
    }
    *param_1 = uVar3;
    param_1[1] = locals[5] - param_2;
    param_1[4] = locals[3];
    param_1[5] = locals[4];
}
#pragma optimize("", on)
void func_001ED402(void) {
    int func_001EB302(...);
    func_001EB302(1);
}
