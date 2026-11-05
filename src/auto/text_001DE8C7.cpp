/* 37 functions from 0x001DE8C7 to 0x001DF7FA, found by Ghidra. */
#include "common.h"

struct S_AnsiString {
    u16 length;
    u16 maxLength;
    char *buffer;
};

struct S_IoStatusBlock {
    long status;
    u32 information;
};

struct S_ObjectAttributes {
    void *rootDirectory;
    S_AnsiString *objectName;
    u32 attributes;
};

extern int D_00010130;
extern int D_002F6BC0;
extern u8 D_002F41C8;
extern char D_0028FD54;

extern "C" unsigned long __readfsdword(unsigned long Offset);
extern "C" unsigned char __readfsbyte(unsigned long Offset);
extern "C" __declspec(dllimport) long __stdcall PsCreateSystemThreadEx(int *threadHandle, u32 extraSize, u32 kernelStackSize, u32 tlsDataSize, u32 *threadId, void *startContext1, void *startContext2, u32 createSuspended, u32 debuggerThread, void *startRoutine);
extern "C" __declspec(dllimport) void __stdcall RtlInitAnsiString(S_AnsiString *dst, const char *src);
extern "C" long (__stdcall *__imp__PsCreateSystemThreadEx)(int *threadHandle, u32 extraSize, u32 kernelStackSize, u32 tlsDataSize, u32 *threadId, void *startContext1, void *startContext2, u32 createSuspended, u32 debuggerThread, void *startRoutine);
extern "C" void (__stdcall *__imp__RtlInitAnsiString)(S_AnsiString *dst, const char *src);
extern "C" long (__stdcall *__imp__IoDeleteSymbolicLink)(S_AnsiString *name);
extern "C" u32 (__stdcall *__imp__RtlNtStatusToDosError)(long status);
extern "C" __declspec(dllimport) long __stdcall IoDeleteSymbolicLink(S_AnsiString *name);
extern "C" __declspec(dllimport) u32 __stdcall RtlNtStatusToDosError(long status);

unsigned char __stdcall func_001E1297(int a, int b, int c);
void func_001DE82F(void);
void __stdcall func_001DD659(int code);
void func_001EA4E1(char *buf, const char *fmt, int value);

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern "C" long (__stdcall *_imp__NtQueryDirectoryFile)(void *fileHandle, void *event, void *apcRoutine, void *apcContext, S_IoStatusBlock *iosb, void *fileInfo, u32 length, u32 infoClass, u32 returnSingle, void *fileName);
extern "C" long (__stdcall *_imp__NtQueryFullAttributesFile)(S_ObjectAttributes *oa, void *info);

#pragma intrinsic(__readfsbyte)
extern "C" long (__stdcall *_imp__PsCreateSystemThreadEx)(int *threadHandle, u32 extraSize, u32 kernelStackSize, u32 tlsDataSize, u32 *threadId, void *startContext1, void *startContext2, u32 createSuspended, u32 debugStack, void *startRoutine);
extern "C" void (__stdcall *_imp__RtlInitAnsiString)(S_AnsiString *dst, const char *src);
extern "C" long (__stdcall *_imp__IoDeleteSymbolicLink)(S_AnsiString *name);
extern "C" u32 (__stdcall *_imp__RtlNtStatusToDosError)(long status);
int __stdcall func_001DE8C7(int unused, int threadHandle, void *startContext1, void *startContext2, u32 flags, u32 *threadId)
{
    int status;

    status = _imp__PsCreateSystemThreadEx((int *)&threadHandle, 0, threadHandle ? threadHandle : D_00010130, D_002F6BC0, threadId, startContext1, startContext2, (flags >> 2) & 0xffffff01, 0, (void *)func_001DE82F);
    if (status < 0 && __readfsbyte(0x24) < 2 && *(int *)(__readfsdword(0x28) + 0x28) != 0) {
        func_001DD659(status);
        threadHandle = 0;
    }
    return threadHandle;
}
int func_001DE935(void)
{
    return *(int *)(__readfsdword(0x28) + 0x12c);
}
#pragma intrinsic(__readfsbyte)
void __stdcall func_001DED66(char c)
{
    char buf[260];
    S_AnsiString name;
    long status;

    c &= 0xdf;
    func_001EA4E1(buf, &D_0028FD54, c);
    _imp__RtlInitAnsiString(&name, buf);
    status = _imp__IoDeleteSymbolicLink(&name);
    if (c == 'X' && status >= 0) {
        D_002F41C8 = 0;
    }
    _imp__RtlNtStatusToDosError(status);
}

#pragma optimize("gsy", on)
void __stdcall func_001DEDC3(void *info, char *out)
{
    *(u32 *)((char *)out) = *(u32 *)((char *)info + 0x38);
    *(u32 *)((char *)out + 4) = *(u32 *)((char *)info + 0x8);
    *(u32 *)((char *)out + 8) = *(u32 *)((char *)info + 0xc);
    *(u32 *)((char *)out + 0xc) = *(u32 *)((char *)info + 0x10);
    *(u32 *)((char *)out + 0x10) = *(u32 *)((char *)info + 0x14);
    *(u32 *)((char *)out + 0x14) = *(u32 *)((char *)info + 0x18);
    *(u32 *)((char *)out + 0x18) = *(u32 *)((char *)info + 0x1c);
    *(u32 *)((char *)out + 0x1c) = *(u32 *)((char *)info + 0x2c);
    *(u32 *)((char *)out + 0x20) = *(u32 *)((char *)info + 0x28);
    memcpy(out + 0x2c, (char *)info + 0x40, *(u32 *)((char *)info + 0x3c));
    out[0x2c + *(u32 *)((char *)info + 0x3c)] = 0;
    out[0x130] = 0;
}
#pragma optimize("t", off)
int __stdcall func_001DEF3C(int handle, int out)
{
    char buf[0x148];
    S_IoStatusBlock iosb;
    long status;

    status = _imp__NtQueryDirectoryFile((void *)handle, 0, 0, 0, &iosb, buf, 0x148, 1, 0, 0);
    if (status < 0) {
        func_001DD659(status);
        return 0;
    }
    func_001DEDC3(buf, (char *)out);
    return 1;
}
int __stdcall func_001DEF8D(const char *name)
{
    char info[0x38];
    S_ObjectAttributes oa;
    S_AnsiString str;
    long status;

    _imp__RtlInitAnsiString(&str, name);
    oa.rootDirectory = (void *)0xfffffffd;
    oa.objectName = &str;
    oa.attributes = 0x40;
    status = _imp__NtQueryFullAttributesFile(&oa, info);
    if (status >= 0) {
        return *(int *)(info + 0x30);
    }
    func_001DD659(status);
    return -1;
}
#pragma optimize("", on)
int func_001DF5B3(void) {
    extern int D_002F6BB4;
    return D_002F6BB4;
}

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern "C" long (__stdcall *_imp__NtQueryDirectoryFile)(void *fileHandle, void *event, void *apcRoutine, void *apcContext, S_IoStatusBlock *iosb, void *fileInfo, u32 length, u32 infoClass, u32 returnSingle, void *fileName);
extern "C" long (__stdcall *_imp__NtQueryFullAttributesFile)(S_ObjectAttributes *oa, void *info);
void __stdcall func_001DF622(int a)
{
}

