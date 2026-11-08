/* 29 functions from 0x001DDD84 to 0x001DE8C6, found by Ghidra. */
#include "common.h"
extern "C" __declspec(dllimport) int __stdcall KeDelayExecutionThread(int a0, int a1, void *a2);

extern int D_0028FB38;
extern char D_0028FAD0[];

struct S_001DE0DD {
    volatile unsigned int flags;
    char pad4[0x28];
    char name[0x114];
    char path[0x104];
    char resp[0x80];
};
extern "C" int (__stdcall *_imp__NtSuspendThread)(int a0, int *a1);
extern "C" void (__stdcall *_imp__KeQuerySystemTime)(void *a0);
extern "C" int (__stdcall *_imp__NtSetInformationFile)(int a0, void *a1, void *a2, int a3, int a4);

int __stdcall func_001DCC3C(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
int __stdcall func_001DD3A1(int a0, int a1, int a2, int a3);
int __stdcall func_001DD15A(int a0, void *a1, int a2, int *a3, int a4);
int __stdcall func_001DDF0A(int a0, int a1);
int __stdcall func_001DDF52(int a0, void *a1, char *a2, int a3);
int func_001EAA3B(char *a0, int a1);
int __stdcall func_001DD13C(int a0);
int func_001DD603();
void __stdcall func_001DD659(int a0);
int __stdcall func_001DEF3C(int handle, int out);
int __stdcall func_001DE0DD(int a0, void *a1, int a2);
int __stdcall func_001DF5D6(void *p);
int __stdcall func_001DEE2F(char *path, int a1);
void __stdcall func_001DD62B(int err);
void *__stdcall func_001DF5B9(int a0, int size);
void __stdcall func_001DF4E1(void *dst, const void *src, int n);
extern char D_0028FB58[];
extern unsigned short D_0028FB88[];
extern unsigned short D_0028FB90[];
extern unsigned short D_0028FBB0[];
extern unsigned short D_0028FBD0[];
extern char D_0000FEFF;

static __forceinline unsigned short *SkipPast_001DDF52(unsigned short *q, int bytes)
{
    return (unsigned short *)((char *)q + bytes + 2);
}
int __stdcall func_001DF066(const char *name, int unused);
int __stdcall func_001DF0D2(const char *name);
int __stdcall func_001DD247(int h, const void *buf, unsigned int size, unsigned int *written, void *ovl);
int func_001EAA6D(unsigned short *buf, int count, const unsigned short *fmt, ...);

/* ANSI_STRING / OBJECT_ATTRIBUTES / IO_STATUS_BLOCK / LARGE_INTEGER (Xbox kernel layouts) */
struct S_AnsiString {
    unsigned short len;
    unsigned short maxLen;
    char *buf;
};
struct S_ObjAttr {
    int root;
    S_AnsiString *name;
    unsigned int attr;
};
struct S_IoStatus {
    int status;
    unsigned int info;
};
struct S_Large {
    unsigned int lo;
    int hi;
};
static __forceinline unsigned int xstrlen(const char *str)
{
    const char *eos = str;

    while (*eos++) {
    }
    return eos - str - 1;
}
extern "C" void (__stdcall *_imp__RtlInitAnsiString)(S_AnsiString *dst, const char *src);
extern "C" int (__stdcall *_imp__NtCreateFile)(int *handle, unsigned int access, S_ObjAttr *oa, S_IoStatus *iosb, S_Large *alloc, unsigned int attrs, unsigned int share, unsigned int disp, unsigned int opts);
extern "C" unsigned int (__stdcall *_imp__RtlNtStatusToDosError)(int status);
int func_001EA410(const unsigned short *s);
unsigned short *func_001EA9DD(const unsigned short *wcs1, const unsigned short *wcs2);
void func_001EA6A0(void *dst, const void *src, unsigned int n);
unsigned short *func_001EA4A4(unsigned short *dest, const unsigned short *source, unsigned int count);
extern "C" unsigned int strlen(const char *);
extern "C" char *strcpy(char *, const char *);
#pragma intrinsic(strlen, strcpy)
struct S_001DE51E_Obj {
    unsigned int tag;
    int handle;
    int len;
    char path[0x104];
};

extern "C" int (__stdcall *_imp__NtYieldExecution)(void);
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

extern char D_002ACBA0[];
extern "C" void (__stdcall *_imp__PsTerminateSystemThread)(int status);
extern "C" void *__cdecl _exception_info(void);
extern "C" unsigned long __readfsdword(unsigned long Offset);
#pragma intrinsic(__readfsdword)
#pragma intrinsic(memcpy, memset)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern "C" void *memset(void *dst, int c, unsigned int n);
int __stdcall func_001DE6F0(void *exceptionPointers);
void __stdcall func_001DE6B8(int attach);
extern char *D_0028FD6C;
extern char *D_0028FD70;
extern unsigned int D_0028FD7C;

/* PsTerminateSystemThread never returns: the compiler emits no epilogue after it */
__declspec(noreturn) static void terminate_thread(int status)
{
    _imp__PsTerminateSystemThread(status);
}

/* kernel thread object: only the TLS data pointer is used */
struct S_KThread {
    char pad0[0x28];
    int *tls;
};

typedef int (__stdcall *Callback_001DE6F0)(int arg);
extern Callback_001DE6F0 D_002F6BBC;

/* EXCEPTION_RECORD */
struct S_ExceptionRecord_001DE759 {
    unsigned int ExceptionCode;
    unsigned int ExceptionFlags;
    S_ExceptionRecord_001DE759 *ExceptionRecord;
    void *ExceptionAddress;
    unsigned int NumberParameters;
    unsigned int ExceptionInformation[15];
};

extern "C" void (__stdcall *_imp__RtlRaiseException)(S_ExceptionRecord_001DE759 *rec);
typedef __declspec(noreturn) void (__stdcall *PsTerminateSystemThread_t)(int status);
extern "C" PsTerminateSystemThread_t _imp__PsTerminateSystemThread;
void __stdcall func_001DE759(unsigned int code, unsigned int flags, unsigned int nargs, const unsigned int *args);

static __declspec(noreturn) void __stdcall terminate_thread_1DE7C2(int status)
{
    _imp__PsTerminateSystemThread(status);
    __debugbreak();
}

/* callback list node; D_002ACBBC is the list head */
struct S_002ACBBC_Node {
    S_002ACBBC_Node *next;
    S_002ACBBC_Node *prev;
    void (__stdcall *fn)(int arg);
};
extern S_002ACBBC_Node D_002ACBBC;
extern S_002ACBBC_Node *D_002ACBC0;

/* header shared by the 'CONT'/'KNIC'/'EVBS' objects */
struct S_001DE66C_Obj {
    unsigned int tag;
    int f4;
    int f8;
    int fC;
};

struct S_001DE625_Obj {
    int f0;
    int f4;
    int f8;
    char fC[1];
};

#pragma optimize("y", on)
#pragma optimize("s", on)
int __stdcall func_001DDD84(int a0, int a1) {
    void *__stdcall func_001DF56E(void *, int);
    s64 timeout;
    void *p = func_001DF56E(&timeout, a0);
    if (p == 0) {
        timeout = 0x8000000000000000;
        p = &timeout;
    }
    int status;
    do {
        status = KeDelayExecutionThread(1, a1, p);
    } while (a1 != 0 && status == 0x101);
    return status == 0xc0 ? 0xc0 : 0;
}
void __stdcall func_001DDDD6(int a0, int a1) {
    void __stdcall func_001DDCC0(int, int, int);
    func_001DDCC0(a0, a1, 0);
}
void __stdcall func_001DDDE8(int a0, int a1, int a2, int a3) {
    void __stdcall func_001DDD04(int, int, int, int, int);
    func_001DDD04(a0, a1, a2, a3, 0);
}

void __stdcall func_001DDE02(int a0)
{
    int __stdcall func_001DDD84(int, int);
    func_001DDD84(a0, 0);
}

#pragma optimize("y", on)
#pragma optimize("s", on)
void __stdcall func_001DDE10(int a0, int a1, int a2)
{
    int func_001EA539(...);
    func_001EA539(a0, a1, a2);
}

void __stdcall func_001DDE27(int a0, int a1, int a2)
{
    int func_001EA5A7(...);
    func_001EA5A7(a0, a1, a2);
}

#pragma optimize("y", on)
#pragma optimize("s", on)
void __cdecl func_001DDE3E(int a0, int a1, int a2) {
    void __stdcall func_001DDE10(int, int, int *);
    func_001DDE10(a0, a1, &a2);
}

void __cdecl func_001DDE51(int a0, int a1, int a2) {
    void __stdcall func_001DDE27(int, int, int *);
    func_001DDE27(a0, a1, &a2);
}

int __stdcall func_001DDE64(int param_1)
{
    if (param_1 <= 9) {
        param_1 = param_1 + 0x30;
    } else {
        param_1 = param_1 + 0x37;
    }
    return param_1;
}

#pragma optimize("s", on)
void __stdcall func_001DDE78(unsigned short *s, char *out, int unused)
{
    unsigned __int64 acc;
    memset(&acc, 0, sizeof(acc));
    unsigned short ch;
    while ((ch = *s) != 0) {
        acc = (acc * 0x10000 + ch) % (((unsigned __int64)0xFFFF << 32) | 0xFFFFFFC5);
        ++s;
    }
    int i = 11;
    int shift = 0;
    do {
        out[i] = (char)func_001DDE64((int)((acc >> shift) & 15));
        shift += 4;
        --i;
    } while (shift <= 0x2c);
    out[12] = 0;
}

int __stdcall func_001DDF0A(int handle, int param2)
{
    int local;
    int result;
    if (param2 != 0) {
        func_001DD3A1(handle, 0, 0, 0);
    }
    result = func_001DD15A(handle, (u16 *)((char *)&param2 + 2), 2, &local, 0);
    return ((result != 0 && local == 2) || *(u16 *)((char *)&param2 + 2) == 0xFEFF) ? 1 : 0;
}

int __stdcall func_001DDF52(int a0, void *a1, char *a2, int a3)
{
    int room;
    int skipRead;
    int bytesRead;
    int result;
    int nameLen;
    unsigned short buf[0x8d];
    unsigned short *p;
    unsigned short *found;
    unsigned int total;
    unsigned int off;
    unsigned int rem;
    int partial;
    int n;
    int x;

    partial = 0;
    result = 0;
    p = buf;
    room = 0x8c;
    skipRead = 0;
    nameLen = func_001EA410((unsigned short *)a1);
    buf[0x8c] = 0;
    for (;;) {
        if (skipRead == 0) {
            if (func_001DD15A(a0, p, room * 2, &bytesRead, 0) == 0) {
                break;
            }
            if (bytesRead == 0) {
                break;
            }
        }
        total = bytesRead + (p - buf) * 2;
        skipRead = 0;
        if (partial) {
            found = func_001EA9DD(buf, D_0028FB88);
            p = buf;
            room = 0x8c;
            if (found == 0) {
                continue;
            }
            off = ((char *)found - (char *)buf) + 4;
            if (off < total) {
                rem = total - off;
                func_001EA6A0(buf, (char *)buf + off, rem);
                p = (unsigned short *)((char *)buf + rem);
                room = 0x8c - (rem >> 1);
            }
            partial = 0;
            continue;
        }
        found = func_001EA9DD(buf, (unsigned short *)a1);
        if (found == 0 || found[nameLen] != 0x3d) {
            partial = 1;
            skipRead = 1;
            continue;
        }
        p = SkipPast_001DDF52(found, nameLen * 2);
        found = func_001EA9DD(p, D_0028FB88);
        if (found == 0) {
            partial = 1;
            p = buf;
            room = 0x8c;
            continue;
        }
        x = found - p;
        n = a3 - 1;
        if (n >= x) {
            n = x;
        }
        func_001EA4A4((unsigned short *)a2, p, n);
        ((unsigned short *)a2)[n] = 0;
        off = ((char *)found - (char *)buf) + 4;
        if (off < total) {
            func_001DD3A1(a0, off - total, 0, 1);
        }
        result = 1;
        break;
    }
    return result;
}

int __stdcall func_001DE0DD(int a0, void *a1, int a2)
{
 char *p=(char *)a0;
 int result=0;
 const char *q;
 int len;
 int e;
 int end; int h;
 unsigned int mask=(*(S_001DE0DD *)p).flags & 0x10;
 if (!(unsigned char)mask) return 0;
 q=p+0x2c;
 len=strlen(q);
 strcpy(p+0x140,(char *)a1);
 strcpy(p+0x140+a2,q);
 end=len+a2;
 if ((unsigned int)end < 0x103) {
  (p+len)[a2+0x141]=0;
  (p+len)[a2+0x140]='\\';
 }
 if (end < 0xf7) {
  e=len+a0;
  e+=a2;
  strcpy((char *)e+0x140,D_0028FAD0);
  h=func_001DCC3C((int)(p+0x140),0x80000000,1,0,3,0x80,0);
  a0=h;
  if(h!=-1) {
   result=func_001DDF0A(h,1);
   if(result) result=func_001DDF52(a0,&D_0028FB38,p+0x244,0x80);
   func_001DD13C(a0);
  }
  ((char *)e)[0x141]=0;
 }
 return result;
}

int __stdcall func_001DE1DF(int param1, int param2)
{
    int result;
    int handle;
    char buffer[256];
    result = func_001DCC3C(param1, 0x80100000, 0, 0, 4, 4, 0);
    handle = result;
    result = 0;
    if (handle != -1) {
        if (func_001DDF0A(handle, 1) == 0 || func_001DDF52(handle, (void *)&D_0028FB38, buffer, 0x80) == 0 || func_001EAA3B(buffer, param2) != 0) {
            result = 0x491;
        }
        func_001DD13C(handle);
    } else {
        result = func_001DD603();
    }
    return result;
}

void __stdcall func_001DE25F(int param)
{
    int handle;
    int info[10];
    int iosb[2];
    int i;
    handle = func_001DCC3C(param, 0xC0000000, 3, 0, 3, 0x2000000, 0);
    if (handle != -1) {
        for (i = 0; i < 10; i = i + 1) {
            info[i] = 0;
        }
        _imp__KeQuerySystemTime(&info[4]);
        _imp__NtSetInformationFile(handle, iosb, info, 0x28, 4);
        func_001DD13C(handle);
    }
}

unsigned int __stdcall func_001DE2BB(char *root, unsigned short *name, int disp, unsigned int flags, char *outPath, unsigned int outSize)
{
    unsigned short buf[0x98];
    char path[0x104];
    S_IoStatus iosb;
    S_AnsiString ansi;
    S_ObjAttr oa;
    S_Large alloc;
    char *tail;
    unsigned int len;
    unsigned int err;
    unsigned int n;
    int r;
    int status;

    strcpy(path, root);
    len = strlen(path);
    func_001DDE78(name, path + len, 0xf7 - len);
    len = strlen(path);
    if (disp == 3) {
        tail = path + len;
        strcpy(tail, D_0028FAD0);
        r = func_001DE1DF((int)path, (int)name);
        *tail = 0;
        if (r != 0) {
            return r;
        }
        goto done;
    }
    if (func_001DF066(path, 0) == 0) {
        flags = func_001DD603();
        r = 0x491;
        if (flags == 0xb7) {
            tail = path + len;
            strcpy(tail, D_0028FAD0);
            r = func_001DE1DF((int)path, (int)name);
            *tail = 0;
            if (r == 0) {
                func_001DE25F((int)path);
            } else {
                return 0x52;
            }
        }
        if (disp == 1) {
            return flags;
        }
        if (r != 0) {
            return flags;
        }
        goto done;
    }
    tail = path + len;
    strcpy(tail, D_0028FAD0);
    _imp__RtlInitAnsiString(&ansi, path);
    alloc.hi = 0;
    oa.name = &ansi;
    oa.root = -3;
    oa.attr = 0x40;
    alloc.lo = 1;
    status = _imp__NtCreateFile((int *)&root, 0xc0100000, &oa, &iosb, &alloc, 4, 0, 3, 0x22);
    *tail = 0;
    if (status < 0) {
        err = _imp__RtlNtStatusToDosError(status);
        goto fail;
    }
    func_001EAA6D(buf, 0x98, (flags & 1) ? D_0028FBD0 : D_0028FBB0, (int)&D_0000FEFF, &D_0028FB38, 0x3d, name, D_0028FB88, D_0028FB90);
    n = func_001EA410(buf) * 2;
    if (n != 0) {
        do {
            if (func_001DD247((int)root, buf, n, (unsigned int *)&name, 0) == 0) {
                err = func_001DD603();
                func_001DD13C((int)root);
                goto fail;
            }
            n -= (unsigned int)name;
        } while (n != 0);
    }
    func_001DD13C((int)root);
done:
    if (outPath != 0) {
        func_001DF4E1(outPath, path, outSize);
        if (len < outSize - 1) {
            outPath[len + 1] = 0;
            outPath[len] = '\\';
        }
    }
    return 0;
fail:
    func_001DF0D2(path);
    return err;
}

int __stdcall func_001DE51E(char *name, int a1)
{
    char buf[0x104];
    int len;
    int h;
    int r;
    S_001DE51E_Obj *o;

    strcpy(buf, name);
    len = strlen(buf);
    strcpy(buf + len, D_0028FB58);
    h = func_001DEE2F(buf, a1);
    if (h != -1) {
        if (func_001DE0DD(a1, name, len) == 0) {
            r = func_001DEF3C(h, a1);
            while (r != 0) {
                if (func_001DE0DD(a1, name, len) != 0)
                    break;
                r = func_001DEF3C(h, a1);
            }
            if (r == 0) {
                func_001DD13C(h);
                h = -1;
                func_001DD62B(0x12);
            }
        }
        if (h != -1) {
            o = (S_001DE51E_Obj *)func_001DF5B9(0, 0x110);
            if (o) {
                o->tag = 0x53425645;
                o->handle = h;
                o->len = len;
                func_001DF4E1(o->path, name, 0x104);
                h = (int)o;
            } else {
                func_001DD13C(h);
                h = -1;
                func_001DD62B(8);
            }
        }
    }
    return h;
}

int __stdcall func_001DE625(S_001DE625_Obj *p, int arg)
{
    int r;

    r = func_001DEF3C(p->f4, arg);
    while (r != 0) {
        if (func_001DE0DD(arg, p->fC, p->f8) != 0) {
            break;
        }
        r = func_001DEF3C(p->f4, arg);
    }
    return r;
}

int __stdcall func_001DE66C(S_001DE66C_Obj *p)
{
    int result = 0;
    int h;

    switch (p->tag) {
    case 0x434f4e54:
    case 0x53425645:
        h = p->f4;
        break;
    case 0x4e49434b:
        func_001DF5D6(p);
        result = 1;
        goto done;
    case 0xbe4bea00:
        h = p->fC;
        break;
    default:
        goto done;
    }
    func_001DF5D6(p);
    result = func_001DD13C(h);
done:
    return result;
}

void __stdcall func_001DE6B8(int arg)
{
    S_002ACBBC_Node *n;
    S_002ACBBC_Node *cur;

    _imp__RtlEnterCriticalSection(D_002ACBA0);
    for (n = D_002ACBBC.next; n != &D_002ACBBC; ) {
        cur = n;
        n = n->next;
        cur->fn(arg);
    }
    _imp__RtlLeaveCriticalSection(D_002ACBA0);
}

int __stdcall func_001DE6F0(int arg)
{
    int r;

    if (D_002F6BBC != 0) {
        r = D_002F6BBC(arg);
        if (r == -1) {
            return r;
        }
    }
    return 0;
}

#pragma optimize("y", off)
int __stdcall func_001DE70D(int param)
{
    int result;
    int out;
    result = _imp__NtSuspendThread(param, &param);
    if (result < 0) {
        func_001DD659(result);
        out = -1;
    } else {
        out = param;
    }
    return out;
}

int __stdcall func_001DE733(int param)
{
    int result;
    int out;
    result = _imp__NtSuspendThread(param, &param);
    if (result < 0) {
        func_001DD659(result);
        out = -1;
    } else {
        out = param;
    }
    return out;
}

void __stdcall func_001DE759(unsigned int code, unsigned int flags, unsigned int nargs, const unsigned int *args)
{
    S_ExceptionRecord_001DE759 er;
    unsigned int i;

    er.ExceptionCode = code;
    er.ExceptionFlags = flags & 1;
    er.ExceptionRecord = 0;
    er.ExceptionAddress = (void *)func_001DE759;
    if (args != 0) {
        if (nargs > 15) {
            nargs = 15;
        }
        er.NumberParameters = nargs;
        for (i = 0; i != nargs; i++) {
            er.ExceptionInformation[i] = args[i];
        }
    } else {
        er.NumberParameters = 0;
    }
    _imp__RtlRaiseException(&er);
}

int func_001DE7AF(void)
{
    return _imp__NtYieldExecution() != 0x40000024;
}

#pragma optimize("y", on)
void __stdcall func_001DE7C2(int status)
{
    func_001DE6B8(0);
    terminate_thread_1DE7C2(status);
}
#pragma optimize("y", on)
Callback_001DE6F0 __stdcall func_001DE7D4(Callback_001DE6F0 fn)
{
    Callback_001DE6F0 old = D_002F6BBC;

    D_002F6BBC = fn;
    return old;
}
void __stdcall func_001DE7E6(S_002ACBBC_Node *node, int add)
{
    S_002ACBBC_Node *tail;
    S_002ACBBC_Node *next;
    S_002ACBBC_Node *prev;

    _imp__RtlEnterCriticalSection(D_002ACBA0);
    if (add != 0) {
        tail = D_002ACBC0;
        node->next = &D_002ACBBC;
        node->prev = tail;
        tail->next = node;
        D_002ACBC0 = node;
    } else {
        next = node->next;
        prev = node->prev;
        prev->next = next;
        next->prev = prev;
    }
    _imp__RtlLeaveCriticalSection(D_002ACBA0);
}
#pragma optimize("y", off)
void func_001DE82F(int (__stdcall *start)(int), int param)
{
    S_KThread *thread;
    char *tls;
    int size;
    int result;

    __try {
        thread = (S_KThread *)__readfsdword(0x28);
        tls = (char *)thread->tls + 4;
        *(char **)(tls - 4) = tls;
        size = D_0028FD70 - D_0028FD6C;
        memcpy(tls, D_0028FD6C, size);
        if (D_0028FD7C != 0) {
            memset(tls + size, 0, D_0028FD7C);
        }
        func_001DE6B8(1);
        result = start(param);
        func_001DE6B8(0);
    } __except (func_001DE6F0(_exception_info())) {
    }
    terminate_thread(result);
}

#pragma optimize("", on)
