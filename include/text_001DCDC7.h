#pragma once
/* declarations shared by the files made from the 0x1DCDC7 region */
#include "common.h"
#include "ghidra.h"
struct S_CopyLocals {
    void *buffer;
    char padding[3];
    char remove;
    u32 input;
    u32 output;
    __int64 offset;
};
struct S_ObjectAttributes;
struct S_IoStatusBlock;
extern char D_00010000;
extern "C" void *(__stdcall *_imp__MmAllocateSystemMemory)(u32, u32);
extern "C" void (__stdcall *_imp__MmFreeSystemMemory)(void *, u32);
extern "C" int (__stdcall *_imp__NtOpenFile)(u32 *, u32, S_ObjectAttributes *, S_IoStatusBlock *, u32, u32);
extern "C" int (__stdcall *_imp__NtSetEvent)(void *a0, void *a1);
extern "C" int (__stdcall *_imp__MmQueryStatistics)(void *a0);
extern "C" int (__stdcall *_imp__NtClose)(void *a0);
extern "C" int (__stdcall *_imp__NtQueryInformationFile)(void *a0, void *a1, void *a2, u32 a3, int a4);
extern "C" int (__stdcall *_imp__NtSetInformationFile)(void *a0, void *a1, void *a2, u32 a3, int a4);
extern "C" int (__stdcall *_imp__NtFlushBuffersFile)(void *a0, void *a1);
extern "C" int (__stdcall *_imp__RtlNtStatusToDosError)(int a0);
extern "C" int (__stdcall *_imp__NtWaitForMultipleObjectsEx)(int count, void **handles,
                                                             int waitType, int waitMode,
                                                             int alertable, void *timeout);
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

/* stack frame of the file copy routine, in the order the original keeps it */
#pragma pack(push, 4)
struct S_001DCDC7_Frame {
    u32 basic[10];
    S_AnsiString str;
    __int64 allocation;
    S_ObjectAttributes oa;
    u32 info[14];
    S_IoStatusBlock ios;
    void *buffer;
    char pad4C[3];
    char remove;
    u32 input;
    u32 output;
    __int64 offset;
};
#pragma pack(pop)

extern "C" int (__stdcall *_imp__NtWaitForSingleObjectEx)(void *a0, int a1, int a2, void *a3);
extern "C" int (__stdcall *_imp__NtCreateEvent)(void **a0, S_ObjectAttributes *a1, int a2, int a3);
extern "C" int (__stdcall *_imp__NtCreateMutant)(void **a0, S_ObjectAttributes *a1, int a2);
extern "C" int (__stdcall *_imp__NtCreateFile)(u32 *a0, u32 a1, S_ObjectAttributes *a2, S_IoStatusBlock *a3, void *a4, u32 a5, u32 a6, u32 a7, u32 a8);
extern "C" void (__stdcall *_imp__RtlInitAnsiString)(S_AnsiString *a0, const char *a1);
extern "C" int __cdecl func_001EA4E1(char *buf, const char *fmt, ...);
extern char D_0028FA4C[];
extern char D_0028FAC0[];
void *__stdcall func_001DF56E(void *timeout, int ms);
S_ObjectAttributes *__stdcall func_001DF546(S_ObjectAttributes *oa, S_AnsiString *str, const char *name);
int __stdcall func_001DD659(int a0);
extern "C" int (__stdcall *_imp__NtWriteFile)(void *, void *, void *, void *, void *, void *, u32, void *);
extern "C" int (__stdcall *_imp__NtReadFile)(void *, void *, void *, void *, void *, void *, u32, void *);
extern "C" int (__stdcall *_imp__NtWaitForSingleObject)(void *, int, void *);
void __stdcall func_001DD62B(int a0);
extern "C" unsigned __int64 __rdtsc();
#pragma intrinsic(__rdtsc)
extern "C" unsigned long __readfsdword(unsigned long Offset);
extern "C" unsigned char __readfsbyte(unsigned long Offset);
#pragma intrinsic(__readfsdword)
#pragma intrinsic(__readfsbyte)
extern int D_002F41D0;
extern "C" void *(__stdcall *_imp__MmAllocateContiguousMemoryEx)(u32 size, u32 lowest, u32 highest, u32 alignment, u32 protect);
extern S_AnsiString D_0028FA80;
extern char D_00021371;
int __stdcall func_001DD3A1(void *h, u32 lo, u32 *hi, int method);
void *__stdcall func_001DF5B9(u32 flags, u32 size);
int __stdcall func_001DF5D6(void *p);
unsigned short *func_001EA4A4(unsigned short *dest, const unsigned short *source, unsigned int count);

/* 0x1a0 bytes of file header data, copied to a global by func_001DD779 */
struct S_001DD779_Header {
    u32 w[0x68];
};

/* file object: counter of sectors read, limit, handle */
struct S_001DD779_File {
    u32 f0;
    u32 f4;
    u32 f8;
    void *fC;
};

/* object returned by func_001DD816: signature, 0, sector count, handle */
struct S_001DD816_Obj {
    u32 signature;
    u32 f4;
    u32 sectors;
    void *handle;
};

struct S_001DD779_Out {
    u32 f0;
    u32 f4;
    u32 f8;
    unsigned short fC[16];
};

/* 0x1c0 bytes copied to a global: header words, two 6-entry tables, six 32-char names */
struct S_001DD8C5_Table {
    u32 w[0x70];
};

extern S_001DD8C5_Table D_002AC840;
extern u32 D_002AC844;
extern u32 D_002AC848;
extern u32 D_002AC850[];
extern u32 D_002AC868[];
extern unsigned short D_002AC880[][0x20];
extern u32 D_002ACA0C[];
extern char D_00031073;
extern S_001DD779_Header D_002ACA00;
extern u32 D_002ACA04;
extern u32 D_002ACA08;
extern u32 D_002ACB5C;
extern unsigned short D_002ACB60[];
int __stdcall func_001DDDD6(void *a0, int a1);
int __stdcall func_001DD15A(void *a0, void *a1, int a2, void *a3, int a4);
int __stdcall func_001DD13C(void *a0);

/* OVERLAPPED */
struct S_001DD670_Overlapped {
    int Internal;
    u32 InternalHigh;
    u32 Offset;
    u32 OffsetHigh;
    void *hEvent;
};
