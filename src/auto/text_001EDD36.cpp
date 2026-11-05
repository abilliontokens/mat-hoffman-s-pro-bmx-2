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
extern char *D_002F6A28;

int __stdcall func_001DD563(int h);

struct S_001EE9AB {
    int f0;
    void (__cdecl *f4)(void *);
    void **f8;
    void **fC;
};
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

/* lowio handle table entry (__pioinfo element), 0x28 bytes */
struct S_Ioinfo {
    int osfhnd;
    unsigned char osfile;
    unsigned char pipech;
    char pad6[2];
    int lockinitflag;
    char padC[0x1c];
};

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

int func_001EE5BE(void)
{
    void *func_001E8AA5(int size);
    S_Ioinfo *p;
    char *r;
    int i;

    p = (S_Ioinfo *)func_001E8AA5(0x500);
    if (p == 0) {
        return -1;
    }
    D_002FB260[0] = (int *)p;
    D_002FB240 = 0x20;
    for (; p < (S_Ioinfo *)D_002FB260[0] + 32; p++) {
        p->osfile = 0;
        p->osfhnd = -1;
        p->lockinitflag = 0;
        p->pipech = 10;
    }
    i = 0;
    do {
        r = (char *)D_002FB260[0] + i;
        i += 0x28;
        r[4] = 0xc1;
    } while (i < 0x78);
    return 0;
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

int func_001EE685(int fh)
{
    if ((unsigned int)fh < D_002FB240 &&
        (*((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) != 0 &&
        *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) != -1) {
        *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) = -1;
        return 0;
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    return -1;
}

int func_001EE6CE(int fh)
{
    if ((unsigned int)fh < D_002FB240 &&
        (*((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) != 0) {
        return *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28);
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    return -1;
}

int func_001EE70F(int fh)
{
    char *p;

    p = (char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28;
    if (*(int *)(p + 8) == 0) {
        func_001EB390(10);
        if (*(int *)(p + 8) == 0) {
            if (func_001F44EF(p + 0xc, 4000) == 0) {
                func_001EB302(10);
                return 0;
            }
            (*(int *)(p + 8))++;
        }
        func_001EB302(10);
    }
    _imp__RtlEnterCriticalSection((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 0xc);
    return 1;
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

