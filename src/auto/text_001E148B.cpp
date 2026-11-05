/* 9 functions from 0x001E148B to 0x001E233F, found by Ghidra. */
#include "common.h"

struct S_AnsiString_1E148B {
    u16 Length;
    u16 MaximumLength;
    char *Buffer;
};

struct S_ObjectAttributes_1E148B {
    void *RootDirectory;
    S_AnsiString_1E148B *ObjectName;
    u32 Attributes;
};

struct S_IoStatusBlock_1E148B {
    long Status;
    u32 Information;
};

struct S_FsSizeInfo_1E148B {
    s64 TotalAllocationUnits;
    s64 AvailableAllocationUnits;
    u32 SectorsPerAllocationUnit;
    u32 BytesPerSector;
};

extern "C" __declspec(dllimport) long __stdcall NtOpenFile(void **handle, u32 access, S_ObjectAttributes_1E148B *oa, S_IoStatusBlock_1E148B *iosb, u32 share, u32 options);
extern "C" __declspec(dllimport) long __stdcall NtQueryVolumeInformationFile(void *handle, S_IoStatusBlock_1E148B *iosb, void *info, u32 len, u32 cls);
extern "C" __declspec(dllimport) long __stdcall NtClose(void *handle);
extern "C" __declspec(dllimport) void __stdcall HalReturnToFirmware(int a0);

extern void *D_00010118;
extern char D_0028FD4C[];
extern char D_002ACBFC[];
extern char D_002ACC04[];
extern char D_002ACC0C[];
extern char D_002ACC14[];

extern "C" int __cdecl func_001EA4E1(void *a0, void *a1, int a2);
extern "C" int __stdcall func_001E1D36(void *a0, void *a1, void *a2, int a3, int a4, int a5);
extern "C" void __stdcall func_001DCAFF(int a0, void *a1);
extern "C" long __stdcall func_001E1BD7(S_AnsiString_1E148B *name, int size);
