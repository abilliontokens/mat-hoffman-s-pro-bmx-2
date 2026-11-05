/* 4 functions from 0x001F6400 to 0x001F6569, found by Ghidra. */
#include "common.h"

extern "C" void (__fastcall *__imp__IofCompleteRequest)(void *irp, char priorityBoost);

struct S_ListEntry_F64 {
    S_ListEntry_F64 *Flink;
    S_ListEntry_F64 *Blink;
};

int __stdcall func_001F64F6(char *lp, unsigned int cb);

#pragma optimize("t", off)

int __stdcall func_001F655B(char *lp)
{
    return func_001F64F6(lp, 1);
}
