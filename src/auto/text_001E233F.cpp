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

static __forceinline void initterm(PVFV *pfbegin, PVFV *pfend) {
    while (pfbegin < pfend) {
        if (*pfbegin != 0 && (int)*pfbegin != -1) {
            (**pfbegin)();
        }
        ++pfbegin;
    }
}

#pragma optimize("t", off)
extern "C" void *__cdecl memset(void *, int, unsigned int);
extern "C" int (__stdcall *_imp__NtOpenFile)(void **h, unsigned int access, void *oa, void *iosb, unsigned int share, unsigned int opts);
extern "C" int (__stdcall *_imp__NtDeviceIoControlFile)(void *h, void *ev, void *apc, void *ctx, void *iosb, unsigned int code, void *in, unsigned int inLen, void *out, unsigned int outLen);
extern "C" int (__stdcall *_imp__NtFsControlFile)(void *h, void *ev, void *apc, void *ctx, void *iosb, unsigned int code, void *in, unsigned int inLen, void *out, unsigned int outLen);
extern "C" int (__stdcall *_imp__NtClose)(void *h);
extern "C" int (__stdcall *_imp__NtWriteFile)(void *h, void *ev, void *apc, void *ctx, void *iosb, void *buf, unsigned int len, void *offset);
extern "C" void (__stdcall *_imp__KeQuerySystemTime)(void *t);
unsigned char __fastcall func_001E2770(unsigned int n);
void __stdcall func_001DD659(int status);
void __stdcall func_001DD62B(int err);
void *__stdcall func_001DF5B9(unsigned int flags, unsigned int size);
void __stdcall func_001DF5D6(void *p);
unsigned int __stdcall func_001EAD20(unsigned int lo, unsigned int hi, unsigned int dlo, unsigned int dhi);
extern char D_00100003;
extern char D_00070000;
extern char D_00074004;
extern char D_0000FFF0;
extern char D_00090020;
#pragma optimize("t", off)
int __stdcall func_001E233F(void *name, unsigned int bytesPerCluster) {
    unsigned int part[8];
    unsigned int geom[6];
    struct { void *root; void *name; unsigned int attr; } oa;
    unsigned int t[2];
    unsigned int iosb[2];
    unsigned __int64 offset;
    unsigned int fat;
    unsigned int reserved;
    unsigned int status;
    unsigned int remaining;
    void *handle;
    unsigned __int64 len;
    unsigned int sectorSize;
    unsigned int clusters;
    int st;
    int st2;
    unsigned char is16;
    unsigned int *buf;
    int (__stdcall *pfn)(void *, void *, void *, void *, void *, unsigned int, void *, unsigned int, void *, unsigned int);

    oa.name = name;
    oa.root = 0;
    oa.attr = 0x40;
    st = _imp__NtOpenFile(&handle, (unsigned int)&D_00100003, &oa, iosb, 0, 0x18);
    if (st < 0) {
        func_001DD659(st);
        return 0;
    }
    pfn = _imp__NtDeviceIoControlFile;
    st = pfn(handle, 0, 0, 0, iosb, (unsigned int)&D_00070000, 0, 0, geom, 0x18);
    if (st < 0) {
        _imp__NtClose(handle);
        func_001DD659(st);
        return 0;
    }
    status = func_001E2770(geom[5]);
    st2 = pfn(handle, 0, 0, 0, iosb, (unsigned int)&D_00074004, 0, 0, part, 0x20);
    if (st2 < 0) {
        _imp__NtClose(handle);
        func_001DD659(st2);
        return 0;
    }
    sectorSize = (geom[5] + 0xfff) & ~0xfff;
    if (bytesPerCluster < sectorSize) bytesPerCluster = sectorSize;
    reserved = 0x1000;
    if (sectorSize > 0x1000) reserved = sectorSize;
    len = *(unsigned __int64 *)&part[2];
    if ((unsigned __int64)reserved >= len) goto fail;
    clusters = func_001EAD20((unsigned int)len, (unsigned int)(len >> 32), bytesPerCluster, 0) + 1;
    if (clusters < (unsigned int)&D_0000FFF0) {
        fat = clusters * 2;
        is16 = 1;
    } else {
        fat = clusters * 4;
        is16 = 0;
    }
    fat = (fat + sectorSize - 1) & ~(sectorSize - 1);
    len -= reserved;
    if ((unsigned __int64)fat > len) goto fail;
    len -= fat;
    if ((unsigned __int64)bytesPerCluster > len) {
fail:
        _imp__NtClose(handle);
        func_001DD62B(0x70);
        return 0;
    }
    buf = (unsigned int *)func_001DF5B9(0, sectorSize);
    if (buf == 0) {
        _imp__NtClose(handle);
        func_001DD659(0xc000009a);
        return 0;
    }
    memset(buf, 0xff, sectorSize);
    buf[0] = 0x58544146;
    buf[3] = 1;
    buf[2] = (unsigned char)(bytesPerCluster >> status);
    *(unsigned short *)&buf[4] = 0;
    _imp__KeQuerySystemTime(t);
    buf[1] = t[0];
    offset = 0;
    remaining = reserved;
    do {
        status = _imp__NtWriteFile(handle, 0, 0, 0, iosb, buf, sectorSize, &offset);
        if ((int)status < 0) {
            func_001DF5D6(buf);
            goto done;
        }
        memset(buf, 0, sectorSize);
        offset += sectorSize;
    } while ((remaining -= sectorSize) != 0);
    memset(buf, 0, sectorSize);
    offset = reserved;
    remaining = fat;
    if (is16) {
        ((unsigned short *)buf)[1] = 0xffff;
        ((unsigned short *)buf)[0] = 0xfff8;
    } else {
        buf[1] = 0xffffffff;
        buf[0] = 0xfffffff8;
    }
    do {
        status = _imp__NtWriteFile(handle, 0, 0, 0, iosb, buf, sectorSize, &offset);
        if ((int)status < 0) goto freebuf;
        memset(buf, 0, 8);
        offset += sectorSize;
    } while ((remaining -= sectorSize) != 0);
    memset(buf, 0xff, sectorSize);
    remaining = bytesPerCluster;
    do {
        status = _imp__NtWriteFile(handle, 0, 0, 0, iosb, buf, sectorSize, &offset);
        if ((int)status < 0) break;
        offset += sectorSize;
    } while ((remaining -= sectorSize) != 0);
freebuf:
    func_001DF5D6(buf);
done:
    _imp__NtFsControlFile(handle, 0, 0, 0, iosb, (unsigned int)&D_00090020, 0, 0, 0, 0);
    _imp__NtClose(handle);
    if ((int)status >= 0) return 1;
    func_001DD659(status);
    return 0;
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E2655(void) {
    PVFV *p;
    if (D_002AE580 != 0) {
        D_002AE580();
    }
    for (p = D_002A0410; p < D_002A0424; p++) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
    }
    for (p = D_0029F4F0; p < D_002A040C; p++) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
    }
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E26AD(void) {
    PVFV *p;
    for (p = D_0029F4E0; p < D_0029F4EC; p++) {
        if (*p != 0 && (int)*p != -1) {
            (*p)();
        }
    }
}
#pragma optimize("", on)

#pragma optimize("t", off)
void func_001E26D6(void) {
    union { __int64 q; struct { unsigned int lo; int hi; } p; } t;
    t.p.lo = 0xb5659000;
    t.p.hi = -51;
    _imp__KeSetTimer(D_002F6B00, t.q, D_002F6AE0);
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
