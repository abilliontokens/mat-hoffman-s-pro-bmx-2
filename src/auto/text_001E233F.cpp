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

extern "C" __declspec(dllimport) void __stdcall HalInitiateShutdown(void);
extern "C" __declspec(dllimport) int __stdcall KeSetTimer(void *timer, int dueLow, int dueHigh, void *dpc);
