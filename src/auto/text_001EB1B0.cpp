/* 26 functions from 0x001EB1B0 to 0x001EBA57, found by Ghidra. */
#include "common.h"

/* CRT lock table entry: lock is a CRITICAL_SECTION*, kind 1 = preallocated */
struct S_LockEntry {
    void *lock;
    int kind;
};
extern S_LockEntry D_002AE8F0[36];

/* preallocated CRITICAL_SECTIONs (0x1c bytes each) */
struct S_CritSect {
    char pad[0x1c];
};
extern S_CritSect D_002F6860[];

extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);
extern "C" int __cdecl func_001F44EF(void *cs, int spinCount);
void func_001E8390(void *p);

void func_001EB977(void) {
    int func_001EB302(...);
    func_001EB302(13);
}
