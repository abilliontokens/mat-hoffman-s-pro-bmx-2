/* 1 function from 0x0008FCB0 to 0x00091820, found by Ghidra. */
#include "common.h"
#include "overlay_0008FCB0_local.h"

extern char *D_002A8490;
int __fastcall func_0008FCB0(char *self, int unused, int a)
{
    char *g = D_002A8490;
    if (*(int *)(*(char **)(g + 0x2e0) + 0x2d4) == 0)
        return 0;
    if (*(int *)(g + 0x274) < *(int *)(g + 0x270) - 1)
        return 0;
    return 0;
}
