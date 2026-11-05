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

extern "C" long (__stdcall *_imp__NtOpenFile)(void **handle, u32 access, S_ObjectAttributes_1E148B *oa, S_IoStatusBlock_1E148B *iosb, u32 share, u32 options);
extern "C" long (__stdcall *_imp__NtQueryVolumeInformationFile)(void *handle, S_IoStatusBlock_1E148B *iosb, void *info, u32 len, u32 cls);
extern "C" long (__stdcall *_imp__NtClose)(void *handle);
extern "C" long (__stdcall *_imp__NtDeviceIoControlFile)(void *handle, void *event, void *apc, void *apcctx, S_IoStatusBlock_1E148B *iosb, u32 ioctl, void *in, u32 inlen, void *out, u32 outlen);
extern "C" void *__cdecl memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)

struct S_ScsiPassThroughDirect_1E148B {
    u16 Length;
    u8 ScsiStatus;
    u8 PathId;
    u8 TargetId;
    u8 Lun;
    u8 CdbLength;
    u8 SenseInfoLength;
    u8 DataIn;
    u32 DataTransferLength;
    u32 TimeOutValue;
    void *DataBuffer;
    u32 SenseInfoOffset;
    u8 Cdb[16];
};
typedef __declspec(noreturn) void (__stdcall *HalReturnToFirmware_t)(int);
extern "C" HalReturnToFirmware_t _imp__HalReturnToFirmware;

extern void *D_00010118;
extern char D_00100001[];
extern char D_002ACBEC[];
extern u32 D_0004D014;
extern char D_0028FD4C[];
extern char D_002ACBFC[];
extern char D_002ACC04[];
extern char D_002ACC0C[];
extern char D_002ACC14[];

extern "C" int __cdecl func_001EA4E1(void *a0, void *a1, int a2);
extern "C" int __stdcall func_001E1D36(void *a0, void *a1, void *a2, int a3, int a4, int a5);
extern "C" void __stdcall func_001DCAFF(int a0, void *a1);
extern "C" long __stdcall func_001E1BD7(S_AnsiString_1E148B *name, int size);

struct S_FileNetworkOpenInfo_1E148B {
    s64 CreationTime;
    s64 LastAccessTime;
    s64 LastWriteTime;
    s64 ChangeTime;
    s64 AllocationSize;
    u32 EndOfFileLow;
    u32 EndOfFileHigh;
    u32 FileAttributes;
    u32 Unused;
};

extern "C" void (__stdcall *_imp__RtlInitAnsiString)(S_AnsiString_1E148B *dst, const char *src);
extern "C" long (__stdcall *_imp__NtCreateFile)(void **handle, u32 access, S_ObjectAttributes_1E148B *oa, S_IoStatusBlock_1E148B *iosb, s64 *alloc, u32 attrs, u32 share, u32 disp, u32 options);
extern "C" long (__stdcall *_imp__NtQueryInformationFile)(void *handle, S_IoStatusBlock_1E148B *iosb, void *info, u32 len, u32 cls);
extern "C" long (__stdcall *_imp__NtWriteFile)(void *handle, void *event, void *apc, void *apcctx, S_IoStatusBlock_1E148B *iosb, const void *buf, u32 len, s64 *offset);
extern "C" unsigned int __cdecl strlen(const char *s);
#pragma intrinsic(strlen)

extern "C" void __stdcall func_001DF4E1(char *dst, const char *src, int size);
extern "C" void *__stdcall func_001E27DB(int a0);
extern "C" u32 __stdcall func_001E2850(int a0);
extern "C" void __stdcall func_001E27FC(int a0);

static __declspec(noreturn) void __stdcall reboot_1E148B(int a)
{
    _imp__HalReturnToFirmware(a);
    __debugbreak();
}

long __stdcall func_001E1BD7(S_AnsiString_1E148B *name, int size)
{
    S_FsSizeInfo_1E148B fsi;
    S_ObjectAttributes_1E148B oa;
    S_IoStatusBlock_1E148B iosb;
    long st;

    oa.RootDirectory = 0;
    oa.ObjectName = name;
    oa.Attributes = 0x40;
    st = _imp__NtOpenFile((void **)&name, (u32)D_00100001, &oa, &iosb, 3, 0x800021);
    if (st >= 0) {
        st = _imp__NtQueryVolumeInformationFile(name, &iosb, &fsi, 0x18, 3);
        _imp__NtClose(name);
        if (st >= 0) {
            if (fsi.BytesPerSector * fsi.SectorsPerAllocationUnit != size)
                st = 0xC000014F;
        }
    }
    return st;
}

void __stdcall func_001E206A(int a1, int a2)
{
    char local[12];

    func_001EA4E1(local, D_0028FD4C, a1);
    if (func_001E1D36(D_002ACBFC, D_002ACC04, local, 1, 0, 0) >= 0)
        func_001E1D36(D_002ACC0C, D_002ACC14, local, 1, a2, 0);
}

void __stdcall func_001E20BF(int a1, int a2, int a3)
{
    u32 buf[0x300];
    int i;

    if (((u32 *)D_00010118)[2] != 0xfffe0000) {
        for (i = 0; i < 0x300; i++)
            buf[i] = 0;
        buf[0] = a1;
        buf[1] = 0;
        buf[2] = a2;
        buf[3] = a3;
        func_001DCAFF(0, buf);
    } else {
        reboot_1E148B(4);
    }
}

long __stdcall func_001E2124(void)
{
    S_ScsiPassThroughDirect_1E148B spt;
    u8 buf[0x1c];
    S_ObjectAttributes_1E148B oa;
    S_IoStatusBlock_1E148B iosb;
    void *handle;
    long st;
    int i;

    oa.RootDirectory = 0;
    oa.ObjectName = (S_AnsiString_1E148B *)D_002ACBEC;
    oa.Attributes = 0x40;
    st = _imp__NtOpenFile(&handle, 0x80100000, &oa, &iosb, 1, 0x20);
    if (st < 0)
        return st;

    memset(&spt, 0, sizeof(spt));
    spt.DataBuffer = buf;
    spt.Length = sizeof(spt);
    spt.DataIn = 1;
    spt.DataTransferLength = 0x1c;
    memset(spt.Cdb, 0, sizeof(spt.Cdb));
    spt.Cdb[2] = (spt.Cdb[2] & 0xfe) | 0x3e;
    spt.Cdb[0] = 0x5a;
    *(u16 *)&spt.Cdb[7] = 0x1c00;
    memset(buf, 0, sizeof(buf));

    for (i = 0; i < 5; i++) {
        st = _imp__NtDeviceIoControlFile(handle, 0, 0, 0, &iosb, D_0004D014, &spt, sizeof(spt), 0, 0);
        if (st < 0)
            break;
        if (buf[0xb] != 1) {
            st = 0xC0000014;
            continue;
        }
        if (buf[0xa] != 0 && buf[0xc] != 0) {
            st = 0;
            break;
        }
        st = 0xC0000001;
    }
    _imp__NtClose(handle);
    return st;
}

#pragma optimize("y", on)
long __stdcall func_001E2202(S_AnsiString_1E148B *name)
{
    return func_001E1BD7(name, 0x4000);
}
#pragma optimize("", on)
