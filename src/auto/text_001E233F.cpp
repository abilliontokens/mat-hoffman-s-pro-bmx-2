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

extern int D_002F6B2C;

int __stdcall func_001DF456(int index, unsigned int *type, unsigned int *value, unsigned int length, unsigned int *resultLength);

extern "C" void (__stdcall *_imp__KeInitializeDpc)(void *dpc, void *routine, void *context);
extern "C" void (__stdcall *_imp__KeInitializeTimerEx)(void *timer, int type);
extern "C" void (__stdcall *_imp__HalInitiateShutdown)(void);
extern "C" int (__stdcall *_imp__KeSetTimer)(void *timer, __int64 dueTime, void *dpc);

static __inline void SetTimerRelative(void *timer, __int64 due, void *dpc) {
    _imp__KeSetTimer(timer, due, dpc);
}

static void initterm(PVFV *pfbegin, PVFV *pfend) {
    while (pfbegin < pfend) {
        if (*pfbegin != 0 && (int)*pfbegin != -1) {
            (**pfbegin)();
        }
        ++pfbegin;
    }
}

#pragma optimize("t", off)
void func_001E2655(void) {
    if (D_002AE580 != 0) {
        D_002AE580();
    }
    initterm(D_002A0410, D_002A0424);
    initterm(D_0029F4F0, D_002A040C);
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E26AD(void) {
    PVFV *end = D_0029F4EC;
    PVFV *p = D_0029F4E0;
    while (p < end) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
        p++;
    }
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E26D6(void) {
    __int64 due = -216000000000i64;
    _imp__KeSetTimer(D_002F6B00, due, D_002F6AE0);
}
#pragma optimize("", on)

#pragma optimize("t", off)
void __stdcall func_001E26F1(int a0, int a1, int a2, int a3) {
    if (D_002F6B28 != 0) {
        _imp__HalInitiateShutdown();
    }
}

#pragma optimize("t", off)
void func_001E2703(void) {
    unsigned int type;
    unsigned int resultLength;
    unsigned int value;
    _imp__KeInitializeDpc(D_002F6AE0, (void *)func_001E26F1, 0);
    _imp__KeInitializeTimerEx(D_002F6B00, 0);
    D_002F6B28 = 0;
    D_002F6B2C = 0;
    if (func_001DF456(0x11, &type, &value, 4, &resultLength) == 0) {
        D_002F6B28 = value & 1;
    } else {
        D_002F6B2C = 1;
    }
    func_001E26D6();
}
#pragma optimize("", on)

#pragma optimize("", on)
