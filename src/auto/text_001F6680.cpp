/* 1 function from 0x001F6680 to 0x001FCE30, found by Ghidra. */
#include "common.h"

extern float D_00275460;
extern float D_002751E4;
extern float D_002AF440;

void func_001F6680(void)
{
    D_002AF440 = D_00275460 / D_002751E4;
}
