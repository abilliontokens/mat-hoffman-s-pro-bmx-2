/* 33 functions from 0x001DCDC7 to 0x001DDD84, found by Ghidra. */
#include "common.h"
extern "C" int (__stdcall *_imp__NtSetEvent)(void *a0, void *a1);
extern "C" int (__stdcall *_imp__MmQueryStatistics)(void *a0);
void __stdcall func_001DD659(int a0);

unsigned __int64 __rdtsc();
void __stdcall func_001DD0A9(int a0, int a1, int a2) {
    void __stdcall func_001DCDC7(int, int, int, int, int, int);
    func_001DCDC7(a0, a1, 0, 0, 0, a2 != 0);
}

#pragma optimize("s", on)
void __stdcall func_001DD0C8(u32 *a0) {
    struct Stats {
        u32 size;
        u32 a;
        u32 b;
        u32 padC;
        u32 c;
        u32 pad14[4];
    };
    Stats stats;
    stats.size = 0x24;
    _imp__MmQueryStatistics(&stats);
    a0[1] = 0;
    a0[4] = 0;
    a0[5] = 0;
    a0[2] = stats.a << 12;
    a0[3] = stats.b << 12;
    a0[6] = 0x7ffe0000;
    a0[0] = 0x20;
    a0[7] = 0x7ffe0000 - stats.c;
}
int __stdcall func_001DD117(u64 *a0) {
    *a0 = __rdtsc();
    return 1;
}

int __stdcall func_001DDC28(void *a0) {
    int result = _imp__NtSetEvent(a0, 0);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    }
    return 1;
}

