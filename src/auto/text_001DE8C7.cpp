/* 37 functions from 0x001DE8C7 to 0x001DF7FA, found by Ghidra. */
#include "common.h"

struct S_AnsiString {
    u16 length;
    u16 maxLength;
    char *buffer;
};

extern int D_00010130;
extern int D_002F6BC0;
extern u8 D_002F41C8;
extern char D_0028FD54;

extern "C" unsigned long __readfsdword(unsigned long Offset);
extern "C" unsigned char __readfsbyte(unsigned long Offset);
extern "C" __declspec(dllimport) long __stdcall PsCreateSystemThreadEx(int *threadHandle, u32 extraSize, u32 kernelStackSize, u32 tlsDataSize, u32 *threadId, void *startContext1, void *startContext2, u32 createSuspended, u32 debuggerThread, void *startRoutine);
extern "C" __declspec(dllimport) void __stdcall RtlInitAnsiString(S_AnsiString *dst, const char *src);
extern "C" __declspec(dllimport) long __stdcall IoDeleteSymbolicLink(S_AnsiString *name);
extern "C" __declspec(dllimport) u32 __stdcall RtlNtStatusToDosError(long status);

void func_001DE82F(void);
void __stdcall func_001DD659(int code);
void func_001EA4E1(char *buf, const char *fmt, int value);

int func_001DF5B3(void) {
    extern int D_002F6BB4;
    return D_002F6BB4;
}
