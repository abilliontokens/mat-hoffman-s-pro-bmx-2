/* 33 functions from 0x001DCDC7 to 0x001DDD84, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" int (__stdcall *_imp__NtSetEvent)(void *a0, void *a1);
extern "C" int (__stdcall *_imp__MmQueryStatistics)(void *a0);
extern "C" int (__stdcall *_imp__NtClose)(void *a0);
extern "C" int (__stdcall *_imp__NtQueryInformationFile)(void *a0, void *a1, void *a2, u32 a3, int a4);
extern "C" int (__stdcall *_imp__NtSetInformationFile)(void *a0, void *a1, void *a2, u32 a3, int a4);
extern "C" int (__stdcall *_imp__NtFlushBuffersFile)(void *a0, void *a1);
extern "C" int (__stdcall *_imp__RtlNtStatusToDosError)(int a0);
int __stdcall func_001DD659(int a0);
void __stdcall func_001DD62B(int a0);
extern "C" unsigned __int64 __rdtsc();
#pragma intrinsic(__rdtsc)

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
#pragma optimize("y", on)
int __stdcall func_001DD659(int a0) {
    int err = _imp__RtlNtStatusToDosError(a0);
    func_001DD62B(err);
    return err;
}

#pragma optimize("y", on)

#pragma optimize("y", on)

#pragma optimize("y", on)

void __stdcall func_001DD7F7(undefined4 param_1, undefined4 param_2)
{
  int __stdcall func_001DD779(int, int, int);
  undefined1 local_204 [512];
  
  func_001DD779((int)(local_204), (int)(param_1), (int)(param_2));
  return;
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

int __stdcall func_001DDCA0(void *a0) {
    int result = _imp__NtSetEvent(a0, 0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

