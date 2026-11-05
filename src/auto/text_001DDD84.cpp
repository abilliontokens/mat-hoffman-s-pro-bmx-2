/* 29 functions from 0x001DDD84 to 0x001DE8C6, found by Ghidra. */
#include "common.h"
extern "C" __declspec(dllimport) int __stdcall KeDelayExecutionThread(int a0, int a1, void *a2);

int __stdcall func_001DDD84(int a0, int a1) {
    void *__stdcall func_001DF56E(void *, int);
    s64 timeout;
    void *p = func_001DF56E(&timeout, a0);
    if (p == 0) {
        timeout = (s64)(((u64)0x80000000) << 32);
        p = &timeout;
    }
    int status;
    do {
        status = KeDelayExecutionThread(1, a1, p);
    } while (a1 != 0 && status == 0x101);
    if (status == 0xc0) {
        return 0xc0;
    }
    return 0;
}

#pragma optimize("y", on)
#pragma optimize("s", on)
void __stdcall func_001DDDD6(int a0, int a1) {
    void __stdcall func_001DDCC0(int, int, int);
    func_001DDCC0(a0, a1, 0);
}
void __stdcall func_001DDDE8(int a0, int a1, int a2, int a3) {
    void __stdcall func_001DDD04(int, int, int, int, int);
    func_001DDD04(a0, a1, a2, a3, 0);
}
#pragma optimize("y", on)
#pragma optimize("s", on)
void __cdecl func_001DDE3E(int a0, int a1, int a2) {
    void __stdcall func_001DDE10(int, int, int *);
    func_001DDE10(a0, a1, &a2);
}
