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
extern int D_002F6BB4;
extern "C" long __stdcall ExQueryNonVolatileSetting(u32 valueIndex, u32 *type, void *value, u32 valueLength, u32 *resultLength);
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

/* free-region list node of the kernel heap (address, size, next) */
struct S_FreeNode {
    S_FreeNode *next;
    unsigned int addr;
    unsigned int size;
};

struct S_HeapPool {
    char pad0[0x4c];
    S_FreeNode *freeNodes;
};

struct S_Heap {
    char pad0[0x18];
    S_HeapPool *pool;
    unsigned int high;
    char pad20[0x14];
    int count;
    S_FreeNode *head;
};

/* the import slots themselves: the original calls through the IAT entry */
extern "C" long (__stdcall *_imp__NtAllocateVirtualMemory)(void **base, u32 zeroBits, u32 *size, u32 type, u32 protect);
extern "C" long (__stdcall *_imp__NtFreeVirtualMemory)(void **base, u32 *size, u32 type);

S_FreeNode * __stdcall func_001DF626(S_Heap *heap);
void __stdcall func_001DF746(S_Heap *heap, S_FreeNode *node);

extern int D_00010108;
extern int D_0028FD6C;
extern int D_0028FD70;
extern int D_0028FD7C;
extern int *D_0028FD74;

void __stdcall func_001E0AE0(int a, int b, int c);
void __stdcall func_001E20BF(int a, int b, int c);
void __stdcall func_001DD13C(int a);

/* the SMC's boot video mode, read through the import table */
extern "C" unsigned long *__imp__HalBootSMCVideoMode;

unsigned char __stdcall func_001E1297(int a, int b, int c);
void func_001DE82F(void);
void __stdcall func_001DD659(int code);
void func_001EA4E1(char *buf, const char *fmt, int value);

extern "C" void __stdcall XcSHAInit(void *ctx);
extern "C" void __stdcall XcSHAUpdate(void *ctx, const void *data, unsigned int len);
extern "C" void __stdcall XcSHAFinal(void *ctx, void *digest);
extern "C" __declspec(dllimport) unsigned char XboxHDKey[16];
#pragma intrinsic(memset)
extern "C" void *memset(void *dst, int c, unsigned int n);

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern "C" long (__stdcall *_imp__NtQueryDirectoryFile)(void *fileHandle, void *event, void *apcRoutine, void *apcContext, S_IoStatusBlock *iosb, void *fileInfo, u32 length, u32 infoClass, void *fileName, u32 restartScan);
extern "C" long (__stdcall *_imp__NtQueryFullAttributesFile)(S_ObjectAttributes *oa, void *info);

/* access masks the original passes as the address of the (absolute) symbol */
extern char D_00010000[];
extern char D_00100001[];
extern char D_00110000[];
extern void *D_00010118;
extern "C" long (__stdcall *_imp__NtOpenFile)(void **handle, u32 access, S_ObjectAttributes *oa, S_IoStatusBlock *iosb, u32 share, u32 options);
extern "C" long (__stdcall *_imp__NtCreateFile)(void **handle, u32 access, S_ObjectAttributes *oa, S_IoStatusBlock *iosb, void *allocSize, u32 attrs, u32 share, u32 disposition, u32 options);
extern "C" long (__stdcall *_imp__NtSetInformationFile)(void *handle, S_IoStatusBlock *iosb, void *info, u32 length, u32 infoClass);
extern "C" long (__stdcall *_imp__NtClose)(void *handle);
int __stdcall func_001DF26F(int a, int b);

/* the loaded image's header: its title signature key at +8 and the 16
   alternate title ids it may be signed with at +0x5c */
struct S_001DF26F_Image {
    char pad0[8];
    int titleId;
    char padC[0x50];
    int altTitleIds[0x10];
};

extern "C" void *_imp__XboxSignatureKey;
extern "C" void *_imp__XboxAlternateSignatureKeys[0x10];
extern int D_002F41D0;

void __stdcall func_001DD62B(int code);
int __stdcall func_001DF5B9(int a, int size);
int __stdcall func_001DF234(void *a, void *digest, void *b);
void __stdcall func_001DF5D6(void *a);
int func_001DD603(void);
void func_001E2213(void);
void func_001E26AD(void);
void func_001E2655(void);
void func_001614C0(int a, int b, int c);
void __stdcall func_001E20BF(int a, int b, int c);

#pragma intrinsic(__readfsbyte)
#pragma intrinsic(__readfsdword)
extern "C" long (__stdcall *_imp__PsCreateSystemThreadEx)(int *threadHandle, u32 extraSize, u32 kernelStackSize, u32 tlsDataSize, u32 *threadId, void *startContext1, void *startContext2, u32 createSuspended, u32 debugStack, void *startRoutine);
extern "C" void (__stdcall *_imp__RtlInitAnsiString)(S_AnsiString *dst, const char *src);
extern "C" long (__stdcall *_imp__IoDeleteSymbolicLink)(S_AnsiString *name);
extern "C" u32 (__stdcall *_imp__RtlNtStatusToDosError)(long status);
extern unsigned int D_00010124;
extern char D_0028FCEC[];
extern S_AnsiString D_0028FCE4;
extern "C" long (__stdcall *_imp__IoCreateSymbolicLink)(S_AnsiString *link, S_AnsiString *target);
long __stdcall func_001DEA36(int a, int *x, int *y);
extern S_AnsiString D_0028FD0C;
extern "C" long (__stdcall *_imp__NtWriteFile)(void *handle, void *event, void *apc, void *apcctx, S_IoStatusBlock *iosb, const void *buf, u32 len, __int64 *off);
extern "C" long (__stdcall *_imp__NtReadFile)(void *handle, void *event, void *apc, void *apcctx, S_IoStatusBlock *iosb, void *buf, u32 len, __int64 *off);
extern "C" unsigned long *_imp__HalDiskCachePartitionCount;
void *__cdecl func_001EA6A0(void *dst, const void *src, unsigned int n);

/* one 12-byte slot of the cache partition table in the sector at 0x800 */
struct S_CacheSlot {
    unsigned int titleId;
    unsigned int start;
    unsigned int used;
};

struct S_CacheSector {
    unsigned int magic;
    unsigned int version;
    S_CacheSlot slots[41];
    unsigned int pad1F4;
    unsigned int signature;
    unsigned int pad1FC;
};
int __stdcall func_001E233F(S_AnsiString *s, unsigned int size);
long __stdcall func_001E1BD7(S_AnsiString *s, unsigned int size);
int __stdcall func_001DEC61(int a);
#pragma optimize("s", on)
int __stdcall func_001DE8C7(int unused, int threadHandle, void *startContext1, void *startContext2, u32 flags, u32 *threadId)
{
    int status = _imp__PsCreateSystemThreadEx(&threadHandle, 0, threadHandle ? threadHandle : D_00010130, D_002F6BC0, threadId, startContext1, startContext2, ((flags >> 2) & 1) | ((flags >> 2) & ~0xffu), 0, (void *)func_001DE82F);
    if (status < 0 && (__readfsbyte(0x24) + 0x100u) < 0x102u && *(int *)(__readfsdword(0x28) + 0x28)) {
        func_001DD659(status);
        return 0;
    }
    return threadHandle;
}
#pragma optimize("", on)
int func_001DE935(void)
{
    return *(int *)(__readfsdword(0x28) + 0x12c);
}

unsigned __int64 __stdcall func_001EA470(unsigned __int64 a, unsigned __int64 b);
extern "C" long (__stdcall *_imp__NtQueryVolumeInformationFile)(void *handle, S_IoStatusBlock *iosb, void *info, u32 length, u32 infoClass);
#pragma optimize("gsy", on)
#pragma optimize("t", off)
int __stdcall func_001DE942(const char *path, unsigned __int64 *freeToCaller, unsigned __int64 *total, unsigned __int64 *totalFree)
{
    S_IoStatusBlock iosb;
    struct {
        u32 total[2];
        u32 avail[2];
        u32 sectorsPerUnit, bytesPerSector;
    } info;
    long status;

    {
        S_AnsiString name;
        S_ObjectAttributes oa;
        _imp__RtlInitAnsiString(&name, path);
        oa.objectName = &name;
        oa.rootDirectory = (void *)-3;
        oa.attributes = 0x40;
        status = _imp__NtOpenFile((void **)&path, (u32)D_00100001, &oa, &iosb, 3, 0x800021);
    }
    if (status < 0) {
        func_001DD659(status);
        if (func_001DD603() == 2) {
            func_001DD62B(3);
        }
        return 0;
    }
    status = _imp__NtQueryVolumeInformationFile((void *)path, &iosb, &info, 0x18, 3);
    _imp__NtClose((void *)path);
    if (status < 0) {
        func_001DD659(status);
        return 0;
    }
    {
        unsigned __int64 unit = info.bytesPerSector * info.sectorsPerUnit;
        unsigned __int64 avail = func_001EA470(*(unsigned __int64 *)info.avail, unit);
        unsigned __int64 tot = func_001EA470(*(unsigned __int64 *)info.total, unit);
        if (freeToCaller) *freeToCaller = avail;
        if (total) *total = tot;
        if (totalFree) *totalFree = avail;
    }
    return 1;
}

#pragma optimize("y", off)
long __stdcall func_001DEA36(int a, int *x, int *y)
{
    S_CacheSector buf;
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    __int64 off;
    unsigned int titleId;
    long status;
    void *handle;
    unsigned int last;
    unsigned int n;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int found;
    unsigned int start;
    unsigned int idx;
    S_CacheSlot *slot;
    S_CacheSlot *p;

    titleId = *(unsigned int *)((char *)D_00010118 + 8);
    oa.rootDirectory = 0;
    oa.attributes = 0x40;
    oa.objectName = &D_0028FD0C;
    status = _imp__NtOpenFile(&handle, 0xc0100000, &oa, &iosb, 3, 0x10);
    if (status >= 0) {
        off = 0x800;
        status = _imp__NtReadFile(handle, 0, 0, 0, &iosb, &buf, 0x200, &off);
        if (status >= 0) {
            found = *_imp__HalDiskCachePartitionCount - 1;
            if (buf.magic != 0x97315286 || buf.signature != 0xaa550000 || buf.version != 2) {
                memset(&buf, 0, sizeof(buf));
                buf.magic = 0x97315286;
                buf.version = 2;
                buf.signature = 0xaa550000;
            }
            start = 0;
            *y = 1;
            n = *_imp__HalDiskCachePartitionCount;
            if (n > 41) {
                n = 41;
            }
            last = n - 1;
            for (i = 0; i < n; i++) {
                p = &buf.slots[i];
                if (titleId == p->titleId && p->used != 0) {
                    start = buf.slots[i].start + 3;
                    found = i;
                    *y = 0;
                    break;
                }
            }
            if (start == 0) {
                for (j = 0; j < n; j++) {
                    for (k = 0; k < n; k++) {
                        if (buf.slots[k].used != 0 && buf.slots[k].start == j) {
                            break;
                        }
                    }
                    if (k == n) {
                        start = j + 3;
                    }
                }
                if (start == 0) {
                    start = buf.slots[last].start + 3;
                }
            }
            if (start >= n + 3) {
                start = n + 2;
            }
            idx = a ? last : 0;
            *x = start;
            if (idx < found) {
                func_001EA6A0(&buf.slots[1], &buf.slots[0], found * sizeof(S_CacheSlot));
            } else if (idx > found) {
                slot = &buf.slots[found];
                func_001EA6A0(slot, slot + 1, (last - found) * sizeof(S_CacheSlot));
            }
            slot = &buf.slots[idx];
            slot->titleId = titleId;
            slot->start = start - 3;
            slot->used = (a == 0);
            _imp__NtWriteFile(handle, 0, 0, 0, &iosb, &buf, 0x200, &off);
        }
        _imp__NtClose(handle);
    }
    return status;
}
#pragma optimize("", on)

int func_001EAC1A(char *buf, int count, const char *fmt, ...);
extern "C" int func_001EAC1A(char *buf, unsigned int n, const char *fmt, ...);
#pragma optimize("gsy", on)
#pragma optimize("t", off)
#pragma optimize("y", off)
int __stdcall func_001DEC61(int a)
{
    char buf[0x104];
    long status;
    long first;
    int ok;
    unsigned int size;
    void (__stdcall *init)(S_AnsiString *, const char *);

    {
        int x, y;
        first = func_001DEA36(a, &x, &y);
        if (first >= 0) {
            if (a == 0) {
                a = 0;
                if (y != 0)
                    a = 1;
            } else {
                a = 1;
            }
            size = 0x4000 << (D_00010124 >> 0x1e);
            func_001EAC1A(buf, 0x104, D_0028FCEC, x);
        }
    }
    if (first >= 0) {
        S_AnsiString name2, name1;
        init = _imp__RtlInitAnsiString;
        init(&name1, buf);
        init(&name2, buf);
        name2.length--;
        if (a != 0) {
            ok = func_001E233F(&name2, size);
            if (ok == 0)
                goto done;
        }
        status = func_001E1BD7(&name1, size);
        if (status < 0) {
            if (a == 0 && func_001E233F(&name2, size))
                status = func_001E1BD7(&name1, size);
        }
        if (status >= 0)
            status = _imp__IoCreateSymbolicLink(&D_0028FCE4, &name2);
        ok = status >= 0;
        if (!ok)
            func_001DD659(status);
    } else {
        ok = 0;
        func_001DD659(first);
    }
done:
    return ok;
}
#pragma optimize("", on)
static __forceinline void ClearBits_1DED66(u8 *p, unsigned m) { *p &= ~m; }
#pragma optimize("gsy", on)
#pragma optimize("t", off)
#pragma optimize("y", off)
void __stdcall func_001DED66(char c)
{
    char buf[260];
    S_AnsiString name;
    long status;

    c &= 0xdf;
    func_001EA4E1(buf, &D_0028FD54, c);
    RtlInitAnsiString(&name, buf);
    status = IoDeleteSymbolicLink(&name);
    if (c == 'X' && status >= 0) {
        D_002F41C8 = 0;
    }
    RtlNtStatusToDosError(status);
}
#pragma optimize("", on)
struct S_001DEDC3_Out {
    char pad0[0x2c];
    signed char cFileName[260];
    signed char cAlternateFileName[14];
};
#pragma optimize("gsy", on)
void __stdcall func_001DEDC3(void *info, char *out)
{
    S_001DEDC3_Out *w = (S_001DEDC3_Out *)out;
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
    w->cFileName[*(u32 *)((char *)info + 0x3c)] &= 0;
    w->cAlternateFileName[0] &= 0;
}
int __stdcall func_001DEE2F(const char *path, char *out)
{
    S_AnsiString fileName;
    S_AnsiString name;
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    char buf[0x148];
    long status;
    unsigned int i;

    _imp__RtlInitAnsiString(&name, path);
    oa.objectName = &name;
    oa.rootDirectory = (void *)-3;
    oa.attributes = 0x40;
    for (i = name.length; i > 0 && name.buffer[i - 1] != '\\'; i--) {
    }
    fileName.maxLength = fileName.length = name.length - i;
    fileName.buffer = name.buffer + i;
    name.maxLength = name.length = i;
    if (name.length == 0 || fileName.length == 0) {
        func_001DD62B(0x57);
        return -1;
    }
    if (fileName.length == 3 && fileName.buffer[0] == '*' && fileName.buffer[1] == '.' && fileName.buffer[2] == '*') {
        fileName.length = 0;
    }
    status = _imp__NtOpenFile((void **)&path, (u32)D_00100001, &oa, &iosb, 3, 0x4021);
    if (status < 0) {
        func_001DD659(status);
        return -1;
    }
    status = _imp__NtQueryDirectoryFile((void *)path, 0, 0, 0, &iosb, buf, 0x148, 1, &fileName, 0);
    if (status < 0) {
        _imp__NtClose((void *)path);
        func_001DD659(status);
        return -1;
    }
    func_001DEDC3(buf, out);
    return (int)path;
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

int __stdcall func_001DEFD8(const char *name)
{
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    S_AnsiString str;
    void *handle;
    long status;

    _imp__RtlInitAnsiString(&str, name);
    oa.rootDirectory = (void *)0xfffffffd;
    oa.objectName = &str;
    oa.attributes = 0x40;
    status = _imp__NtOpenFile(&handle, (u32)D_00010000, &oa, &iosb, 7, 0x4040);
    if (status < 0) {
        func_001DD659(status);
        return 0;
    }
    *((char *)&name + 3) = 1;
    status = _imp__NtSetInformationFile(handle, &iosb, (char *)&name + 3, 1, 0xd);
    _imp__NtClose(handle);
    if (status >= 0) {
        return 1;
    } else {
        func_001DD659(status);
        return 0;
    }
}

int __stdcall func_001DF066(const char *name, int unused)
{
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    S_AnsiString str;
    long status;

    _imp__RtlInitAnsiString(&str, name);
    oa.rootDirectory = (void *)0xfffffffd;
    oa.objectName = &str;
    oa.attributes = 0x40;
    status = _imp__NtCreateFile((void **)&name, (u32)D_00100001, &oa, &iosb, 0, 0x80, 3, 2, 0x4021);
    if (status >= 0) {
        _imp__NtClose((void *)name);
        return 1;
    } else {
        func_001DD659(status);
        return 0;
    }
}

int __stdcall func_001DF0D2(const char *name)
{
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    S_AnsiString str;
    void *handle;
    long status;

    _imp__RtlInitAnsiString(&str, name);
    oa.rootDirectory = (void *)0xfffffffd;
    oa.objectName = &str;
    oa.attributes = 0x40;
    status = _imp__NtOpenFile(&handle, (u32)D_00110000, &oa, &iosb, 7, 0x4021);
    if (status < 0) {
        func_001DD659(status);
        return 0;
    }
    *((char *)&name + 3) = 1;
    status = _imp__NtSetInformationFile(handle, &iosb, (char *)&name + 3, 1, 0xd);
    _imp__NtClose(handle);
    if (status >= 0) {
        return 1;
    } else {
        func_001DD659(status);
        return 0;
    }
}

void __stdcall func_001DF160(const void *key, unsigned int len, void *ctx)
{
    unsigned int pad[16];
    unsigned int i;

    if (len > 0x40) {
        len = 0x40;
    }
    memset(pad, 0, sizeof(pad));
    memcpy(pad, key, len);
    for (i = 0; i < 0x10; i++) {
        pad[i] ^= 0x36363636;
    }
    XcSHAInit(ctx);
    XcSHAUpdate(ctx, pad, 0x40);
}

void __stdcall func_001DF1C2(void *ctx, const void *key, unsigned int len, void *out)
{
    unsigned int buf[21];
    unsigned int i;

    if (len > 0x40) {
        len = 0x40;
    }
    memset(buf, 0, 0x40);
    memcpy(buf, key, len);
    for (i = 0; i < 0x10; i++) {
        buf[i] ^= 0x5c5c5c5c;
    }
    XcSHAFinal(ctx, &buf[16]);
    XcSHAInit(ctx);
    XcSHAUpdate(ctx, buf, 0x54);
    XcSHAFinal(ctx, out);
}

int __stdcall func_001DF234(int base, void *data, void *out)
{
    void *ctx = (char *)base + 8;

    func_001DF160(XboxHDKey, 0x10, ctx);
    XcSHAUpdate(ctx, data, 0x14);
    func_001DF1C2(ctx, XboxHDKey, 0x10, out);
    return 1;
}

int __stdcall func_001DF26F(int a, int b)
{
    S_001DF26F_Image *img = (S_001DF26F_Image *)D_00010118;
    int *obj;
    unsigned int i;

    obj = (int *)func_001DF5B9(0, 0x7c);
    if (obj == 0) {
        func_001DD62B(8);
        goto fail;
    }
    obj[0] = a;
    if (img->titleId != b) {
        for (i = 0; i < 0x10; i++) {
            if (img->altTitleIds[i] == 0) {
                goto badkey;
            }
            if (b == img->altTitleIds[i]) {
                break;
            }
        }
        if (i >= 0x40) {
badkey:
            func_001DD62B(5);
fail:
            return -1;
        }
        obj[1] = (int)_imp__XboxAlternateSignatureKeys[i];
    } else {
        obj[1] = (int)_imp__XboxSignatureKey;
    }
    func_001DF160((const void *)obj[1], 0x10, obj + 2);
    return (int)obj;
}

int __stdcall func_001DF2EA(int ctx, const void *data, unsigned int len)
{
    XcSHAUpdate((void *)(ctx + 8), data, len);
    return 0;
}

int __stdcall func_001DF304(int *a, void *out)
{
    unsigned int digest[5];
    int ok;
    int flag;

    ok = 1;
    flag = a[0] & 1;
    if (out != 0) {
        if (flag != 0) {
            func_001DF1C2(a + 2, (const void *)a[1], 0x10, digest);
        }
        ok = 1;
        if (flag != 0) {
            ok = func_001DF234(a, digest, out);
        }
    }
    func_001DF5D6(a);
    if (ok != 0) {
        return 0;
    }
    return func_001DD603();
}

int __stdcall func_001DF361(int a0)
{
    return func_001DF26F(a0, ((int *)D_00010118)[2]);
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int __stdcall func_001DF375(int a)
{
    char *p;

    func_001E2213();
    {
        void *t = *(void **)(__readfsdword(0x20) + 0x250);
        p = t != 0 ? *(char **)((char *)t + 0x24) : 0;
    }
    if (p != 0) {
        unsigned long thread = __readfsdword(0x28);
        int *base;
        int idx;
        int v;
        _ReadWriteBarrier();
        base = (int *)__readfsdword(4);
        _ReadWriteBarrier();
        idx = D_002F41D0;
        v = base[idx] - *(int *)(thread + 0x28);
        *p = 1;
        *(int *)(p + 4) = v + 4;
    }
    func_001E26AD();
    func_001E2655();
    func_001614C0(0, 0, 0);
    func_001E20BF(1, 1, 0);
    return 0;
}
void func_001DF3E4(void)
{
    int *p = (int *)D_00010118;
    int v = D_00010108 - (int)p + (int)D_00010000;
    int handle;

    if ((unsigned int)v < (unsigned int)*p) {
        *p = v;
    }
    D_002F6BC0 = ((D_0028FD7C - D_0028FD6C + D_0028FD70 + 0xf) & ~0xf) + 4;
    *D_0028FD74 = D_002F6BC0 / -4;
    handle = func_001DE8C7(0, 0, (void *)func_001DF375, 0, 0, 0);
    if (handle == 0) {
        func_001E20BF(1, 1, 0);
    }
    func_001DD13C(handle);
}

unsigned long __stdcall func_001DF456(u32 valueIndex, u32 *type, void *value, u32 valueLength, u32 *resultLength)
{
    return __imp__RtlNtStatusToDosError(ExQueryNonVolatileSetting(valueIndex, type, value, valueLength, resultLength));
}

unsigned long func_001DF478(void)
{
    unsigned long value;
    u32 type;

    if (ExQueryNonVolatileSetting(9, &type, &value, 4, 0) < 0) {
        value = 0;
    }
    switch (*__imp__HalBootSMCVideoMode) {
    case 3:
        value = 1;
        break;
    case 6:
        *((unsigned short *)&value + 1) = 0;
        break;
    }
    return value;
}

u32 func_001DF4BC(void)
{
    u32 type;
    u32 value;

    if (ExQueryNonVolatileSetting(10, &type, &value, 4, 0) >= 0) {
        return value;
    }
    return 0;
}

char * __stdcall func_001DF4E1(char *lpString1, const char *lpString2, int iMaxLength)
{
    const char *src;
    char *dst;

    __try {
        src = lpString2;
        dst = lpString1;
        if (iMaxLength) {
            while (iMaxLength && *src) {
                *dst++ = *src++;
                iMaxLength--;
            }
            if (iMaxLength) {
                *dst = '\0';
            } else {
                dst--;
                *dst = '\0';
            }
        }
    } __except (1) {
        return 0;
    }
    return lpString1;
}

void __stdcall func_001DF546(S_ObjectAttributes *oa, S_AnsiString *name, const char *path)
{
    _imp__RtlInitAnsiString(name, path);
    oa->objectName = name;
    oa->rootDirectory = (void *)0xfffffffc;
    oa->attributes = 0x80;
}

__int64 * __stdcall func_001DF56E(__int64 *out, unsigned int ms)
{
    if (ms == 0xffffffff) {
        return 0;
    }
    *out = (unsigned __int64)ms * 10000;
    *out = -*out;
    return out;
}

int __stdcall func_001DF59C(int a, int b, int c)
{
    return func_001E1297(a, b, c);
}

#pragma optimize("", on)
int func_001DF5B3(void) {
    extern int D_002F6BB4;
    return D_002F6BB4;
}

#pragma optimize("sy", on)
void __stdcall func_001DF5B9(unsigned int a, int b)
{
    func_001E0AE0(D_002F6BB4, (a >> 3) & 8, b);
}
int __stdcall func_001DF5D6(int a)
{
    return func_001E1297(D_002F6BB4, 0, a) ? 0 : a;
}

void __stdcall func_001DF5F4(char *s)
{
    char *p = s;
    while (*p++) {}
    volatile unsigned short length = (unsigned short)(p - s - 1);
    volatile unsigned short maximum = length + 1;
}

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
void __stdcall func_001DF622(int a)
{
}

S_FreeNode * __stdcall func_001DF626(S_Heap *heap)
{
    S_FreeNode *blk;
    S_FreeNode *p;
    S_FreeNode *prev;
    char *end;
    u32 reserve;
    u32 size;
    u32 base;
    S_FreeNode **list;

    list = &heap->pool->freeNodes;
    if (*list == 0) {
        blk = *(S_FreeNode **)((char *)heap->pool + 0x48);
        if (blk == 0 || blk->size == blk->addr) {
            long (__stdcall *alloc)(void **, u32, u32 *, u32, u32);

            alloc = _imp__NtAllocateVirtualMemory;
            reserve = (u32)D_00010000;
            blk = 0;
            if (alloc((void **)&blk, 0, &reserve, 0x2000, 4) < 0)
                return 0;
            size = 0x1000;
            if (alloc((void **)&blk, 0, &size, 0x1000, 4) < 0) {
                _imp__NtFreeVirtualMemory((void **)&blk, &reserve, 0x8000);
                return 0;
            }
            blk->next = *(S_FreeNode **)((char *)heap->pool + 0x48);
            *(S_FreeNode **)((char *)heap->pool + 0x48) = blk;
            blk->addr = reserve;
            blk->size = size;
            base = (u32)blk + 0x10;
        } else {
            size = 0x1000;
            base = (u32)blk + blk->size;
            if (_imp__NtAllocateVirtualMemory((void **)&base, 0, &size, 0x1000, 4) < 0)
                return 0;
            blk->size += size;
        }
        end = (char *)blk + blk->size;
        prev = (S_FreeNode *)&heap->pool->freeNodes;
        for (p = (S_FreeNode *)base; (char *)p < end; p = (S_FreeNode *)((char *)p + 0x10)) {
            prev->next = p;
            prev = p;
        }
        prev->next = 0;
        list = &heap->pool->freeNodes;
    }
    p = *list;
    *list = p->next;
    return p;
}

#pragma optimize("sy", on)
void __stdcall func_001DF746(S_Heap *heap, S_FreeNode *node)
{
    node->next = heap->pool->freeNodes;
    heap->pool->freeNodes = node;
    node->addr = 0;
    node->size = 0;
}
#pragma optimize("y", off)
void __stdcall func_001DF767(S_Heap *heap, unsigned int addr, unsigned int size)
{
    S_FreeNode **link = &heap->head;
    S_FreeNode *n;

    for (;;) {
        n = *link;
        if (n == 0) {
            break;
        }
        if (addr < n->addr) {
            if (addr + size == n->addr) {
                n->size += size;
                n->addr = addr;
                if (n->size > heap->high) {
                    heap->high = n->size;
                }
                return;
            }
            break;
        }
        if (n->addr + n->size == addr) {
            size += n->size;
            addr = n->addr;
            *link = n->next;
            func_001DF746(heap, n);
            heap->count--;
            if (size > heap->high) {
                heap->high = size;
            }
            continue;
        }
        link = &n->next;
    }
    n = func_001DF626(heap);
    if (n != 0) {
        n->addr = addr;
        n->size = size;
        n->next = *link;
        *link = n;
        heap->count++;
        if (size >= heap->high) {
            heap->high = size;
        }
    }
}
#pragma optimize("", on)

#pragma optimize("", on)

