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

#pragma optimize("y", on)
#pragma optimize("s", on)
void __cdecl func_001DDE3E(int a0, int a1, int a2) {
    void __stdcall func_001DDE10(int, int, int *);
    func_001DDE10(a0, a1, &a2);
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
#pragma optimize("", on)
