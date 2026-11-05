/* 29 functions from 0x001DDD84 to 0x001DE8C6, found by Ghidra. */
#include "common.h"
extern "C" __declspec(dllimport) int __stdcall KeDelayExecutionThread(int a0, int a1, void *a2);

extern int D_0028FB38;
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

/* callback list node; D_002ACBBC is the list head */
struct S_002ACBBC_Node {
    S_002ACBBC_Node *next;
    S_002ACBBC_Node *prev;
    void (__stdcall *fn)(int arg);
};
extern S_002ACBBC_Node D_002ACBBC;

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

int __stdcall func_001DDD84(int a0, int a1) {
    void *__stdcall func_001DF56E(void *, int);
    u32 timeout[2];
    void *p = func_001DF56E(timeout, a0);
    if (p == 0) {
        timeout[0] = 0;
        timeout[1] = 0x80000000;
        p = timeout;
    }
    int status;
    do {
        status = KeDelayExecutionThread(1, a1, p);
    } while (a1 != 0 && status == 0x101);
    return status == 0xc0 ? 0xc0 : 0;
}

#pragma optimize("y", on)
#pragma optimize("s", on)
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
    int i;
    int shift;
    acc = 0;
    while (*s != 0) {
        acc = (acc * 0x10000 + *s) % (((unsigned __int64)0x0000FFFF << 32) | 0xFFFFFFC5);
        s = s + 1;
    }
    i = 11;
    shift = 0;
    do {
        out[i] = (char)func_001DDE64((int)((acc >> shift) & 0xf));
        shift = shift + 4;
        i = i - 1;
    } while (shift <= 0x2c);
    out[12] = 0;
}

int __stdcall func_001DDF0A(int handle, int param2)
{
    int local;
    int result;
    int out;
    if (param2 != 0) {
        func_001DD3A1(handle, 0, 0, 0);
    }
    result = func_001DD15A(handle, (u16 *)((char *)&param2 + 2), 2, &local, 0);
    if (result == 0 || local == 2 || *(u16 *)((char *)&param2 + 2) == 0xFEFF) {
        out = 1;
    } else {
        out = 0;
    }
    return out;
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
        for (i = 0; i < nargs; i++) {
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

__declspec(noreturn) void __stdcall func_001DE7C2(int status)
{
    func_001DE6B8(0);
    _imp__PsTerminateSystemThread(status);
    __debugbreak();
}

Callback_001DE6F0 __stdcall func_001DE7D4(Callback_001DE6F0 fn)
{
    Callback_001DE6F0 old = D_002F6BBC;

    D_002F6BBC = fn;
    return old;
}

#pragma optimize("", on)
