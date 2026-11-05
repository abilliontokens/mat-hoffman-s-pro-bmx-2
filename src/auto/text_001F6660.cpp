/* 1 function from 0x001F6660 to 0x001F6680, found by Ghidra. */
#include "common.h"

void func_001F6660(void) {
    extern float D_00275460;
    extern float D_002751E0;
    extern float D_002AF444;
    D_002AF444 = D_00275460 / D_002751E0;
}
