/* 16 functions from 0x001EDD36 to 0x001EEA34, found by Ghidra. */
#include "common.h"

int *func_001ED075(void);
int *func_001ED07E(void);
void func_001ED087(unsigned int code);
int func_001EE6CE(int fh);
int __stdcall func_001DD3A1(int a0, int a1, int a2, int a3);
int func_001DD603(void);
void func_001EB302(int locknum);
void func_001EB390(int locknum);
int func_001F44EF(void *cs, unsigned long spinCount);
extern unsigned int D_002FB240;
extern int *D_002FB260[];
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

#pragma optimize("s", on)

int func_001EE4BD(int fh, int pos, int mthd)
{
    int handle;
    int newpos;
    int err;

    handle = func_001EE6CE(fh);
    if (handle == -1) {
        *func_001ED075() = 9;
        return -1;
    }
    newpos = func_001DD3A1(handle, pos, 0, mthd);
    if (newpos == -1) {
        err = func_001DD603();
    } else {
        err = 0;
    }
    if (err != 0) {
        func_001ED087(err);
        return -1;
    }
    *((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) &= 0xfd;
    return newpos;
}

int func_001EE63F(int fh, int value)
{
    if ((unsigned int)fh < D_002FB240 && *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) == -1) {
        *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) = value;
        return 0;
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    return -1;
}

void func_001EE782(int fh)
{
    _imp__RtlLeaveCriticalSection((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 0xc);
}

int func_001EE997(void)
{
    void func_001EAB1B(void);
    *func_001ED075() = 9;
    func_001EAB1B();
    return -1;
}

