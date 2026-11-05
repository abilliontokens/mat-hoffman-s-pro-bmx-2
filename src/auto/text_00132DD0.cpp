/* 1 function from 0x00132DD0 to 0x00132DD8, found by Ghidra. */
#include "common.h"

struct Class_002845AC {
    void func_00132CA0();
    void func_00132DD0();
};

void Class_002845AC::func_00132DD0()
{
    ((Class_002845AC *)((char *)this - *(int *)((char *)this - 4)))->func_00132CA0();
}
