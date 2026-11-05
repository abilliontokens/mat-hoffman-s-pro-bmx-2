/* 6 functions from 0x001E233F to 0x001E276D, found by Ghidra. */
#include "common.h"

typedef void (*PVFV)(void);

extern int D_002F6B28;
extern PVFV D_002AE580;
extern PVFV D_002A0410[];
extern PVFV D_002A0424[];
extern PVFV D_0029F4F0[];
extern PVFV D_002A040C[];
extern PVFV D_0029F4E0[];
extern PVFV D_0029F4EC[];
extern char D_002F6AE0[];
extern char D_002F6B00[];

extern "C" void (__stdcall *_imp__HalInitiateShutdown)(void);
extern "C" int (__stdcall *_imp__KeSetTimer)(void *timer, __int64 dueTime, void *dpc);

#pragma optimize("t", off)
void func_001E2655(void) {
    PVFV *p;
    if (D_002AE580 != 0) {
        D_002AE580();
    }
    for (p = D_002A0410; p < D_002A0424; p++) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
    }
    for (p = D_0029F4F0; p < D_002A040C; p++) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
    }
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E26AD(void) {
    PVFV *p;
    for (p = D_0029F4E0; p < D_0029F4EC; p++) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
    }
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E26D6(void) {
    _imp__KeSetTimer(D_002F6B00, -216000000000i64, D_002F6AE0);
}
#pragma optimize("", on)

#pragma optimize("t", off)
void __stdcall func_001E26F1(int a0, int a1, int a2, int a3) {
    if (D_002F6B28 != 0) {
        _imp__HalInitiateShutdown();
    }
}
#pragma optimize("", on)
