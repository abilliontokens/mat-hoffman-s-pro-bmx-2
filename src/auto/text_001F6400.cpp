/* 4 functions from 0x001F6400 to 0x001F6569, found by Ghidra. */
#include "common.h"

extern "C" void (__fastcall *__imp__IofCompleteRequest)(void *irp, char priorityBoost);

struct S_ListEntry_F64 {
    S_ListEntry_F64 *Flink;
    S_ListEntry_F64 *Blink;
};

int __stdcall func_001F64F6(char *lp, unsigned int cb);

#pragma optimize("t", off)

void __stdcall func_001F6400(int a0, S_ListEntry_F64 *head, int a2, int a3)
{
    S_ListEntry_F64 *e = head->Flink;
    while (e != head) {
        char *irp = (char *)e - 0x3c;
        e = e->Flink;
        *(long *)(irp + 0x10) = 0xc0000120;
        __imp__IofCompleteRequest(irp, 0);
    }
}

int __stdcall func_001F64F6(char *lp, unsigned int cb)
{
    char *start;
    char *end;
    if (cb != 0) {
        if (lp == 0) {
            return 1;
        }
        start = lp;
        end = start + cb - 1;
        if (end < start) {
            return 1;
        }
        __try {
            *(volatile char *)start;
            start = (char *)((unsigned int)start & ~0xfff);
            end = (char *)((unsigned int)end & ~0xfff);
            while (start != end) {
                start += 0x1000;
                *(volatile char *)start;
            }
        } __except (1) {
            return 1;
        }
    }
    return 0;
}

int __stdcall func_001F655B(char *lp)
{
    return func_001F64F6(lp, 1);
}
