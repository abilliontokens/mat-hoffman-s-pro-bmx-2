/* 26 functions from 0x001EB1B0 to 0x001EBA57, found by Ghidra. */
#include "common.h"

/* CRT lock table entry: lock is a CRITICAL_SECTION*, kind 1 = preallocated.
   The original code refers to the kind column (D_002AE8F4) and to the end of
   the table (D_002AEA10) by address of their own. */
struct S_LockEntry {
    void *lock;
    int kind;
};
extern S_LockEntry D_002AE8F0[36];
extern S_LockEntry D_002AE8F4[36];
extern S_LockEntry D_002AEA10[];

/* preallocated CRITICAL_SECTIONs (0x1c bytes each) */
struct S_CritSect {
    char pad[0x1c];
};
extern S_CritSect D_002F6860[];

extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);
extern "C" int __cdecl func_001F44EF(void *cs, int spinCount);
void func_001E8390(void *p);

int __cdecl func_001EB290(void)
{
    int locknum;
    S_CritSect *pcs = D_002F6860;

    for (locknum = 0; locknum < 36; locknum++) {
        if (D_002AE8F0[locknum].kind == 1) {
            D_002AE8F0[locknum].lock = pcs;
            pcs++;
            if (!func_001F44EF(D_002AE8F0[locknum].lock, 4000)) {
                D_002AE8F0[locknum].lock = 0;
                return 0;
            }
        }
    }
    return 1;
}

void __cdecl func_001EB302(int locknum)
{
    _imp__RtlLeaveCriticalSection(D_002AE8F0[locknum].lock);
}

void func_001EB977(void) {
    int func_001EB302(...);
    func_001EB302(13);
}
