/* 33 functions from 0x001DCDC7 to 0x001DDD84, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
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

struct S_001DD779_Out {
    u32 f0;
    u32 f4;
    u32 f8;
    unsigned short fC[16];
};

extern S_001DD779_Header D_002ACA00;
extern u32 D_002ACA04;
extern u32 D_002ACA08;
extern u32 D_002ACB5C;
extern unsigned short D_002ACB60[];
int __stdcall func_001DDDD6(void *a0, int a1);
int __stdcall func_001DD15A(void *a0, void *a1, int a2, void *a3, int a4);

/* OVERLAPPED */
struct S_001DD670_Overlapped {
    int Internal;
    u32 InternalHigh;
    u32 Offset;
    u32 OffsetHigh;
    void *hEvent;
};

unsigned __int64 __rdtsc();
#pragma optimize("y", on)
#pragma optimize("s", on)
void __stdcall func_001DD0A9(int a0, int a1, int a2) {
    void __stdcall func_001DCDC7(int, int, int, int, int, int);
    func_001DCDC7(a0, a1, 0, 0, 0, a2 != 0);
}
void __stdcall func_001DD0C8(u32 *a0) {
    struct Stats {
        u32 size;
        u32 a;
        u32 b;
        u32 padC;
        u32 c;
        u32 pad14[4];
    };
    Stats stats;
    stats.size = 0x24;
    _imp__MmQueryStatistics(&stats);
    a0[1] = 0;
    a0[4] = 0;
    a0[5] = 0;
    a0[2] = stats.a << 12;
    a0[3] = stats.b << 12;
    a0[6] = 0x7ffe0000;
    a0[0] = 0x20;
    a0[7] = 0x7ffe0000 - stats.c;
}
#pragma optimize("y", on)
#pragma optimize("s", on)
int __stdcall func_001DD117(u64 *a0) {
    *a0 = __rdtsc();
    return 1;
}

int __stdcall func_001DD128(u32 *a0) {
    a0[1] = 0;
    a0[0] = 0x2bb5c755;
    return 1;
}

int __stdcall func_001DD13C(void *a0) {
    int result = _imp__NtClose(a0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

int __stdcall func_001DD31D(void *a0) {
    u32 iosb[2];
    __int64 eof;
    __int64 alloc;
    __int64 pos;
    int result;
    result = _imp__NtQueryInformationFile(a0, iosb, &pos, 8, 0xe);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    } else {
        int (__stdcall *setInfo)(void *, void *, void *, u32, int) = _imp__NtSetInformationFile;
        alloc = pos;
        result = setInfo(a0, iosb, &alloc, 8, 0x14);
        if (result >= 0) {
            eof = pos;
            result = setInfo(a0, iosb, &eof, 8, 0x13);
            if (result >= 0) {
                return 1;
            }
        }
        func_001DD659(result);
        return 0;
    }
}

#pragma optimize("y", off)
int __stdcall func_001DD563(void *a0) {
    u32 iosb[2];
    int result = _imp__NtFlushBuffersFile(a0, iosb);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

#pragma optimize("y", off)
int __stdcall func_001DD58A(void *a0, u32 *a1) {
    struct NetworkOpenInfo {
        __int64 creationTime;
        __int64 lastAccessTime;
        __int64 lastWriteTime;
        __int64 changeTime;
        __int64 allocationSize;
        __int64 endOfFile;
        u32 fileAttributes;
    };
    u32 iosb[2];
    NetworkOpenInfo info;
    int result = _imp__NtQueryInformationFile(a0, iosb, &info, 0x38, 0x22);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    } else {
        *(__int64 *)a1 = info.endOfFile;
        return 1;
    }
}

#pragma optimize("y", off)
u32 __stdcall func_001DD5C8(void *a0, u32 *a1) {
    int __stdcall func_001DD58A(void *, u32 *);
    u32 size[2];
    if (func_001DD58A(a0, size) != 0) {
        if (a1 != 0) {
            a1[0] = size[1];
        }
        if (size[0] == 0xffffffff) {
            func_001DD62B(0);
        }
    } else {
        size[0] = 0xffffffff;
    }
    return size[0];
}

int func_001DD603(void)
{
    int idx;
    int **tls;

    if (__readfsbyte(0x24) < 2 && __readfsdword(0x28) == 0) {
        tls = 0;
    }
    idx = D_002F41D0;
    tls = (int **)__readfsdword(4);
    return tls[idx][1];
}

void __stdcall func_001DD62B(int a0)
{
    unsigned long thread;
    int idx;

    if (__readfsbyte(0x24) < 2) {
        thread = __readfsdword(0x28);
    }
    idx = D_002F41D0;
    ((int **)__readfsdword(4))[idx][1] = a0;
}

#pragma optimize("y", on)
int __stdcall func_001DD659(int a0) {
    int err = _imp__RtlNtStatusToDosError(a0);
    func_001DD62B(err);
    return err;
}

int __stdcall func_001DD670(void *a0, S_001DD670_Overlapped *a1, u32 *a2, int a3)
{
    int r;

    if (a1->Internal == 0x103) {
        if (a3 != 0) {
            void *h = a1->hEvent;
            if (h == 0) {
                h = a0;
            }
            r = func_001DDDD6(h, -1);
        } else {
            r = 0x102;
        }
        if (r == 0x102) {
            func_001DD62B(0x3e4);
            return 0;
        }
        if (r != 0) {
            return 0;
        }
    }
    *a2 = a1->InternalHigh;
    if (a1->Internal >= 0) {
        return 1;
    }
    func_001DD659(a1->Internal);
    return 0;
}

int __stdcall func_001DD6D5(void *a0, u32 *a1, u32 a2)
{
    u32 *buf = a1;

    if (func_001DD15A(a0, buf, 0x200, &a1, 0) && (u32)a1 == 0x200 && (a2 == 0 || *buf == a2)) {
        return 1;
    }
    return 0;
}

#pragma optimize("y", off)
int __stdcall func_001DD713(u32 *a0, u32 *a1)
{
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    int status;

    oa.rootDirectory = 0;
    oa.attributes = 0x40;
    oa.objectName = &D_0028FA80;
    status = _imp__NtCreateFile(a0, 0x80100000, &oa, &iosb, 0, 0xc, 1, 1, 0x20);
    if (status >= 0) {
        if (func_001DD6D5((void *)*a0, a1, 0) == 0) {
            status = 0xc00000e4;
            _imp__NtClose((void *)*a0);
        }
    }
    return status;
}

int __stdcall func_001DD779(S_001DD779_Header *a0, S_001DD779_File *a1, S_001DD779_Out *a2)
{
    int result = 0;

    if (a1->f4 < a1->f8) {
        func_001DD3A1(a1->fC, (a1->f4 + 1) << 9, 0, 0);
        a1->f4++;
        result = func_001DD6D5(a1->fC, (u32 *)a0, (u32)&D_00021371);
        if (result != 0) {
            D_002ACA00 = *a0;
            func_001EA4A4(a2->fC, D_002ACB60, 0x20);
            a2->f0 = D_002ACA04;
            a2->f4 = D_002ACA08;
            a2->f8 = D_002ACB5C;
        }
    }
    return result;
}

#pragma optimize("y", on)

#pragma optimize("y", on)

#pragma optimize("y", off)

#pragma optimize("y", on)

#pragma optimize("y", on)

void __stdcall func_001DD7F7(undefined4 param_1, undefined4 param_2)
{
  int __stdcall func_001DD779(int, int, int);
  undefined1 local_204 [512];
  
  func_001DD779((int)(local_204), (int)(param_1), (int)(param_2));
  return;
}

void *__stdcall func_001DD816(int a0)
{
    u32 buf[128];
    u32 h;
    int status;
    u32 *p = 0;

    status = func_001DD713(&h, buf);
    if (status < 0) {
        func_001DD62B(_imp__RtlNtStatusToDosError(status));
    } else {
        p = (u32 *)func_001DF5B9(0, 0x10);
        if (p == 0) {
            func_001DD62B(_imp__RtlNtStatusToDosError(0xc000009a));
            _imp__NtClose((void *)h);
            goto done;
        }
        p[0] = 0xbe4bea00;
        p[1] = 0;
        p[2] = buf[1];
        p[3] = h;
    }
    if (status >= 0 && func_001DD779((S_001DD779_Header *)buf, (S_001DD779_File *)p, (S_001DD779_Out *)a0) == 0) {
        _imp__NtClose((void *)h);
        func_001DF5D6(p);
        p = 0;
    }
done:
    return p ? p : (void *)-1;
}
#pragma optimize("y", on)

u32 __stdcall func_001DDAEE(u32 id, int flag)
{
    char buf[0x104];
    S_IoStatusBlock iosb;
    S_AnsiString str;
    S_ObjectAttributes oa;
    int status;

    func_001EA4E1(buf, D_0028FAC0, D_0028FA4C, id >> 16, id);
    _imp__RtlInitAnsiString(&str, buf);
    oa.rootDirectory = 0;
    oa.attributes = 0x40;
    oa.objectName = &str;
    status = _imp__NtCreateFile(&id, 0x80100080, &oa, &iosb, 0, 0, 1, 1, (flag ? 8 : 0x20) | 0x40);
    if (status < 0) {
        func_001DD659(status);
        return -1;
    }
    return id;
}

#pragma optimize("y", off)
void *__stdcall func_001DDB7E(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 lo;
    u32 hi;
    void *p;

    if (a1 != 0xffffffff) {
        a2 = 0;
        lo = a1;
        hi = a0 + a1 - 1;
    } else {
        lo = 0;
        hi = 0xffffffff;
    }
    p = _imp__MmAllocateContiguousMemoryEx(a0, lo, hi, a2, a3);
    if (p == 0) {
        func_001DD62B(8);
    }
    return p;
}
#pragma optimize("y", on)

void *__stdcall func_001DDBC7(int attrs, int manualReset, int initial, char *name)
{
    S_ObjectAttributes oa;
    S_AnsiString str;
    int status;

    status = _imp__NtCreateEvent((void **)&name, name ? func_001DF546(&oa, &str, name) : 0, manualReset == 0, initial);
    if (status >= 0) {
        if (status == 0x40000000) {
            func_001DD62B(0xb7);
        } else {
            func_001DD62B(0);
        }
        return name;
    } else {
        func_001DD659(status);
        return 0;
    }
}

int __stdcall func_001DDC28(void *a0) {
    int result = _imp__NtSetEvent(a0, 0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

void *__stdcall func_001DDC48(int attrs, int initialOwner, char *name)
{
    S_ObjectAttributes oa;
    S_AnsiString str;
    int status;

    status = _imp__NtCreateMutant((void **)&name, name ? func_001DF546(&oa, &str, name) : 0, initialOwner);
    if (status >= 0) {
        if (status == 0x40000000) {
            func_001DD62B(0xb7);
        } else {
            func_001DD62B(0);
        }
        return name;
    } else {
        func_001DD659(status);
        return 0;
    }
}

int __stdcall func_001DDCA0(void *a0) {
    int result = _imp__NtSetEvent(a0, 0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

int __stdcall func_001DDCC0(void *handle, int ms, int alertable)
{
    u32 timeout[2];
    void *p = func_001DF56E(timeout, ms);
    int status;

    do {
        status = _imp__NtWaitForSingleObjectEx(handle, 1, alertable, p);
        if (status < 0) {
            func_001DD659(status);
            return -1;
        }
    } while (alertable != 0 && status == 0x101);
    return status;
}

#pragma optimize("y", off)
int __stdcall func_001DDD04(u32 nCount, void **lpHandles, int bWaitAll, u32 dwMilliseconds, int bAlertable)
{
    void *__stdcall func_001DF56E(void *timeOut, u32 ms);
    void *handles[64];
    __int64 timeOut;
    void *pTimeOut;
    int status;

    if (nCount > 64) {
        func_001DD659(0xc000000d);
        return -1;
    }
    memcpy(handles, lpHandles, nCount * sizeof(void *));
    pTimeOut = func_001DF56E(&timeOut, dwMilliseconds);
    do {
        status = _imp__NtWaitForMultipleObjectsEx((char)nCount, handles, bWaitAll == 0, 1,
                                                  bAlertable, pTimeOut);
        if (status < 0) {
            func_001DD659(status);
            return -1;
        }
    } while (bAlertable != 0 && status == 0x101);
    return status;
}

