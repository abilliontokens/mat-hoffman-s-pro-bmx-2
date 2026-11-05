/* 1 function from 0x00132DC0 to 0x00132DC8, found by Ghidra. */
#include "common.h"

struct Class_002845AC {
    void func_00132C50();
    void func_00132DC0();
};

void Class_002845AC::func_00132DC0()
{
    ((Class_002845AC *)((char *)this - *(int *)((char *)this - 4)))->func_00132C50();
}
