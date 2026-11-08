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
#define func_001E1D36_cast(a, b, c, d, e, f) func_001E1D36(a, b, c, d, e, f)
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
extern "C" int __stdcall func_001E2774(const char *a);
extern "C" int __cdecl func_001EAA6D(void *dst, int n, const char *fmt, ...);
extern "C" long (__stdcall *_imp__IoCreateSymbolicLink)(void *a, S_AnsiString_1E148B *b);
extern "C" long (__stdcall *_imp__NtSetInformationFile)(void *h, S_IoStatusBlock_1E148B *iosb, void *info, u32 len, u32 cls);
extern "C" void (__stdcall *_imp__KeQuerySystemTime)(s64 *t);
extern char D_00120117[], D_0028FF5C[], D_0028FF50[], D_0028FF44[], D_0028FE78[], D_0028FBB0[], D_0028FED8[], D_0028FF1C[], D_0028FE8C[], D_0028FEA0[];
extern char D_0000FEFF[];
extern "C" long __stdcall func_001E1C4F(int a1, char *path, int size, const char *name);

static __declspec(noreturn) void __stdcall reboot_1E148B(int a)
{
    _imp__HalReturnToFirmware(a);
    __debugbreak();
}

int __stdcall func_001E148B(int heap, unsigned int flags, void *p, unsigned int size)
{
    __try {
        if (p == 0)
            return 0;
        flags |= *(unsigned int *)(heap + 0x18);
        if (size > 0x7fffffff)
            return 0;
        if (size == 0)
            size = 1;
        size = (size + *(unsigned int *)(heap + 0x50) + 1) & *(unsigned int *)(heap + 0x54);
        if ((flags & 0x3c000100) == 0 && *(int *)(heap + 0x17c) == 0 && (*(unsigned char *)((char *)p - 0xb) & 2) == 0)
            size += 0x10;
        return 1;
    } __except (1) {
        return 0;
    }
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

long __stdcall func_001E1C4F(int a1, char *path, int size, const char *name)
{
    S_IoStatusBlock_1E148B iosb;
    S_AnsiString_1E148B ansi;
    S_ObjectAttributes_1E148B oa;
    S_FileNetworkOpenInfo_1E148B info;
    unsigned int len;
    char *end;
    void *buf;
    long st;

    len = strlen(path);
    end = path + len;
    func_001DF4E1(end, name, size - len);
    _imp__RtlInitAnsiString(&ansi, path);
    oa.RootDirectory = 0;
    oa.ObjectName = &ansi;
    oa.Attributes = 0x40;
    st = _imp__NtCreateFile((void **)(&a1 + 1), 0x40100000, &oa, &iosb, 0, 4, 1, 3, 0x22);
    *end = 0;
    if (st >= 0) {
        st = _imp__NtQueryInformationFile(*(void **)(&a1 + 1), &iosb, &info, 0x38, 0x22);
        if (st >= 0 && info.EndOfFileLow == 0 && info.EndOfFileHigh == 0) {
            buf = func_001E27DB(a1);
            if (buf != 0) {
                st = _imp__NtWriteFile(*(void **)(&a1 + 1), 0, 0, 0, &iosb, buf, func_001E2850(a1), 0);
                func_001E27FC(a1);
            }
        }
        _imp__NtClose(*(void **)(&a1 + 1));
    } else if (st == 0xC0000035) {
        st = 0;
    }
    return st;
}

#pragma optimize("t", off)
int __stdcall func_001E1D36(void *a0, S_AnsiString_1E148B *a1, const char *a2, int a3, const char *a4, int a5)
{
    int st;
    void *h;
    S_ObjectAttributes_1E148B oa;
    S_IoStatusBlock_1E148B iosb;
    int h1;
    S_AnsiString_1E148B as;
    S_AnsiString_1E148B as2;
    char path[0x104];
    u16 text[0x8e];

    oa.RootDirectory = 0;
    oa.Attributes = 0x40;
    oa.ObjectName = a1;
    st = _imp__NtCreateFile(&h, (u32)D_00100001, &oa, &iosb, 0, 0x80, 3, 3, 0x4021);
    if (st >= 0) {
        _imp__NtClose(h);
    } else {
        if (st == 0xC0000103)
            st = 0;
    }
    if (st < 0)
        return st;

    {
        const char *s = a1->Buffer;
        char *d = path;
        while ((*d++ = *s++) != 0) {}
    }
    {
        char *p = path + a1->Length;
        if (p[-1] != '\\')
            *p = '\\';
        else
            a1->Length--;
    }
    {
        const char *s = a2;
        char *d = path + a1->Length + 1;
        while ((*d++ = *s++) != 0) {}
    }

    _imp__RtlInitAnsiString(&as, path);
    oa.ObjectName = &as;
    oa.RootDirectory = 0;
    oa.Attributes = 0x40;
    st = _imp__NtCreateFile(&h, (u32)D_00120117, &oa, &iosb, 0, 0x80, 3, (a3 != 0) + (a3 != 0) + 1, 0x4021);
    if (st >= 0) {
    if (a5) {
        s64 fbi[5];
        memset(fbi, 0, 0x28);
        _imp__KeQuerySystemTime(&fbi[2]);
        _imp__NtSetInformationFile(h, &iosb, fbi, 0x28, 4);
    }
    if (a4) {
        int h2, h3;
        h2 = func_001E2774(D_0028FF5C);
        h3 = func_001E2774(D_0028FF50);
        h1 = func_001E2774(D_0028FF44);
        if (h2 != -1 || *(u16 *)a4 != 0) {
            void *hf;
            unsigned int len = strlen(path);
            char *end = path + len;
            func_001DF4E1(end, D_0028FE78, 0x104 - len);
            _imp__RtlInitAnsiString(&as2, path);
            oa.ObjectName = &as2;
            oa.RootDirectory = 0;
            oa.Attributes = 0x40;
            st = _imp__NtCreateFile(&hf, 0x40100000, &oa, &iosb, 0, 4, 1, 3, 0x22);
            *end = 0;
            if (st >= 0) {
                S_FileNetworkOpenInfo_1E148B info;
                st = _imp__NtQueryInformationFile(hf, &iosb, &info, 0x38, 0x22);
                if (st >= 0 && info.EndOfFileLow == 0 && info.EndOfFileHigh == 0) {
                    void *buf = 0;
                    if (h2 != -1)
                        buf = func_001E27DB(h2);
                    if (buf) {
                        st = _imp__NtWriteFile(hf, 0, 0, 0, &iosb, buf, func_001E2850(h2), 0);
                        func_001E27FC(h2);
                    } else {
                        unsigned int n = func_001EAA6D(text, 0x8e, D_0028FBB0, D_0000FEFF, D_0028FED8, 0x3d, a4, D_0028FF1C);
                        n *= sizeof(u16);
                        st = _imp__NtWriteFile(hf, 0, 0, 0, &iosb, text, n, 0);
                    }
                }
                _imp__NtClose(hf);
            } else if (st == 0xC0000035)
                st = 0;
        }
        if (st >= 0) {
            if (h3 != -1)
                st = func_001E1C4F(h3, path, 0x104, D_0028FE8C);
            if (st >= 0 && h1 != -1)
                st = func_001E1C4F(h1, path, 0x104, D_0028FEA0);
        }
    }
    _imp__NtClose(h);
    if (st >= 0)
        st = _imp__IoCreateSymbolicLink(a0, &as);
    }
    return st;
}
#pragma optimize("", on)
long __stdcall func_001E206A(int a1, int a2)
{
    char local[12];
    long st;

    func_001EA4E1(local, D_0028FD4C, a1);
    st = func_001E1D36(D_002ACBFC, D_002ACC04, local, 1, 0, 0);
    if (st >= 0)
        st = func_001E1D36(D_002ACC0C, D_002ACC14, local, 1, a2, 0);
    return st;
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
    int i;
    S_ScsiPassThroughDirect_1E148B spt;
    u8 buf[0x1c];
    S_ObjectAttributes_1E148B oa;
    S_IoStatusBlock_1E148B iosb;
    void *handle;
    long st;
    long result = 0;

    oa.RootDirectory = 0;
    oa.Attributes = 0x40;
    oa.ObjectName = (S_AnsiString_1E148B *)D_002ACBEC;
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
        st = _imp__NtDeviceIoControlFile(handle, 0, 0, 0, &iosb, (u32)&D_0004D014, &spt, sizeof(spt), 0, 0);
        if (st < 0)
            break;
        if (buf[0xb] != 1) {
            st = 0xC0000014;
            continue;
        }
        if (buf[0xa] != 0 && buf[0xc] != 0)
            goto done;
        st = 0xC0000001;
    }
    result = st;
done:
    _imp__NtClose(handle);
    return result;
}

#pragma optimize("y", on)
long __stdcall func_001E2202(S_AnsiString_1E148B *name)
{
    return func_001E1BD7(name, 0x4000);
}

extern "C" void __cdecl func_001E2703(void);
extern "C" int __stdcall func_001E06BC(int a1, int a2, int a3, int a4, int a5, void *a6);
extern int D_00010134, D_00010138, D_002F6BB4;
extern unsigned int D_00010124;
extern char D_002ACBE4[], D_002ACBF4[];
struct S_Bit0_1E148B {
    unsigned int bit0 : 1;
};
extern "C" void *__imp__XboxHardwareInfo;
extern "C" int __stdcall func_001DEC61(int a1);
extern "C" unsigned int __cdecl func_001DF4BC(void);
extern "C" void *_imp__XboxHardwareInfo;
void __stdcall func_001E2213(void)
{
    int local[12];
    int st;
    int a, b;
    unsigned int c;

    func_001E2703();
    memset(local, 0, sizeof(local));
    local[0] = 0x30;
    st = func_001E06BC(2, 0, D_00010134, D_00010138, 0, local);
    D_002F6BB4 = st;
    if (st == 0) {
        a = 1; b = 1; c = 0;
        goto fail;
    }
    if ((*(unsigned int *)((char *)D_00010118 + 0x9c) & 0xffffff) == 2) {
        if (func_001E2124() < 0) {
            func_001E20BF(0, 0, 0);
            return;
        }
    }
    if (!(*(volatile unsigned char *)&D_00010124 & 8)) {
        if (func_001E2202((S_AnsiString_1E148B *)D_002ACBF4) < 0)
            goto err12;
    }
    if (!(((unsigned char *)_imp__XboxHardwareInfo)[1] & 1)) {
        st = _imp__IoCreateSymbolicLink(D_002ACBE4, (S_AnsiString_1E148B *)D_002ACBEC);
        if (st < 0 && st != 0xC0000035) {
            a = 1; b = 1; c = 0;
            goto fail;
        }
    }
    if (!(*(volatile unsigned char *)&D_00010124 & 0x18)) {
        st = func_001E206A(*(int *)((char *)D_00010118 + 8), (int)((char *)D_00010118 + 0xc));
        if (st < 0) {
            if (st == 0xC000007F) {
                a = 2; b = 0x54; c = 0x10;
                goto fail;
            }
err12:
            b = 2; c = 0;
            goto set_a;
        }
    }
    if (!(D_00010124 & 8) && (D_00010124 & 1) && func_001DEC61(D_00010124 & 2) == 0)
        func_001E20BF(1, 2, 0);
    c = *(unsigned int *)((char *)D_00010118 + 0xa4);
    if (c >= func_001DF4BC())
        return;
    b = 4;
set_a:
    a = 1;
fail:
    func_001E20BF(a, b, c);
}

#pragma optimize("", on)
