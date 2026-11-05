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

S_FreeNode * __stdcall func_001DF626(S_Heap *heap);
void __stdcall func_001DF746(S_Heap *heap, S_FreeNode *node);

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
extern "C" long (__stdcall *_imp__NtQueryDirectoryFile)(void *fileHandle, void *event, void *apcRoutine, void *apcContext, S_IoStatusBlock *iosb, void *fileInfo, u32 length, u32 infoClass, u32 returnSingle, void *fileName);
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

#pragma intrinsic(__readfsbyte)
#pragma intrinsic(__readfsdword)
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
#pragma intrinsic(__readfsdword)
int func_001DE935(void)
{
    return *(int *)(__readfsdword(0x28) + 0x12c);
}
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

int __stdcall func_001DF361(int a0)
{
    return func_001DF26F(a0, ((int *)D_00010118)[2]);
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

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern "C" long (__stdcall *_imp__NtQueryDirectoryFile)(void *fileHandle, void *event, void *apcRoutine, void *apcContext, S_IoStatusBlock *iosb, void *fileInfo, u32 length, u32 infoClass, u32 returnSingle, void *fileName);
extern "C" long (__stdcall *_imp__NtQueryFullAttributesFile)(S_ObjectAttributes *oa, void *info);
void __stdcall func_001DF622(int a)
{
}

#pragma optimize("s", on)
void __stdcall func_001DF746(S_Heap *heap, S_FreeNode *node)
{
    node->next = heap->pool->freeNodes;
    heap->pool->freeNodes = node;
    node->addr = 0;
    node->size = 0;
}

void __stdcall func_001DF767(S_Heap *heap, unsigned int addr, unsigned int size)
{
    S_FreeNode **link = &heap->head;
    S_FreeNode *n;

    for (;;) {
        n = *link;
        if (n == 0) {
            break;
        }
        if (n->addr > addr) {
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

