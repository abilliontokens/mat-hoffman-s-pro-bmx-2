/* 22 functions from 0x0023EA00 to 0x0023F472, found by Ghidra. */
#include "common.h"

extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

void __stdcall func_001DDE02(int a0);
int __stdcall func_0023F3F7(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
void *func_001E8A44(int size);

/* COM-style object created by func_0023F3F7 */
struct S_0023F3F7_Obj {
    virtual int __stdcall v0();
    virtual int __stdcall Release();
    char pad4[0xb8];
    S_0023F3F7_Obj *func_0023F1AB(void);
};

int __stdcall func_0023F23E(S_0023F3F7_Obj *obj, int a0, int a1, int a2, int a3, int a4, int a5, int a6);

struct S_0023EA00_Link {
    S_0023EA00_Link *next;
    S_0023EA00_Link *prev;
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

void func_001E891B(void *p);
int __stdcall func_001DDC28(int a);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);

/* Class_0029016C: 12 stdcall virtual functions taking `this` on the stack */
struct C_0023EA00 {
    void *vtbl;
    char pad4[0x2c];
    void *f30;
    void *f34;
    void *f38;
    char pad3C[4];
    unsigned char f40;
    char pad41[0xb];
    int f4C;
    int f50;
    char pad54[8];
    unsigned int f5C;
    char pad60[4];
    int f64;
    char pad68[0x20];
    int f88;
    int f8C;
    char pad90[0x14];
    S_0023EA00_Link fA4;
    int fAC;
    void func_0023EA00(void);
    void func_0023EED3(void);
};

/* maps a byte offset into a buffer made of blocks of f50 bytes */
struct C_0023EE81 {
    char pad0[0x34];
    int f34;
    unsigned int f38;
    char pad3C[4];
    unsigned char f40;
    char pad41[0xb];
    unsigned int f4C;
    unsigned int f50;
    char pad54[8];
    unsigned int f5C;
    int func_0023EE81(unsigned int a, unsigned int b, int *out);
};

struct S_0023EF7B_Src {
    char pad0[8];
    int f8;
    int fC;
    int f10;
    int f14;
    char pad18[0x14];
    int f2C;
};

struct S_0023EF7B_Out {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
};

typedef unsigned int (__stdcall *PFN_0023EC0D)(void *ctx, unsigned int a, unsigned int b, int *out);

/* region window: either forwards to a user hook (f44) or maps a offset inside [f3c, f3c+f94) */
struct C_0023EC0D {
    char pad0[0x34];
    int f34;
    char pad38[4];
    unsigned int f3c;
    unsigned int f40;
    PFN_0023EC0D f44;
    void *f48;
    char pad4c[0x20];
    char f6c[0x28];
    unsigned int f94;
    unsigned int func_0023EC0D(unsigned int a, unsigned int b, int *out);
};

/* the stream object: its lock, the packet list and the "has a thread" flag */
struct S_0023ED71 {
    char pad0[0x6c];
    char f6c[0x28];
    S_0023EA00_Link f9c;
    char pada4[0x10];
    int fb4;
};

struct S_0023EDB5 {
    char pad0[0x30];
    int f30;
};

struct C_0023EFB0 {
    void func_0023EFB0(void);
};

struct S_0023ED4C_Src {
    char pad0[0x10];
    int f10;
};

struct S_0023ED4C_Out {
    int f0;
    int pad4;
    int f8;
    int fC;
};

struct C_0023ED4C {
    int func_0023ED4C(S_0023ED4C_Src *src, S_0023ED4C_Out *out);
};

#pragma optimize("s", on)
void C_0023EA00::func_0023EA00(void)
{
    for (;;) {
        if (fA4.next == &fA4) {
            break;
        }
        func_001DDE02(5);
    }
}

unsigned int C_0023EC0D::func_0023EC0D(unsigned int a, unsigned int b, int *out)
{
    unsigned int end;
    unsigned int r;

    if (f44 != 0) {
        r = f44(f48, a, b, out);
    } else {
        _imp__RtlEnterCriticalSection(f6c);
        end = f94 + f3c;
        if (end > a && b <= end - a) {
            *out = (f34 - f3c) + a;
            f40 = a;
            _imp__RtlLeaveCriticalSection(f6c);
            r = b;
        } else {
            r = 0;
        }
    }
    return r;
}
#pragma optimize("y", on)
#pragma optimize("s", on)
int __stdcall func_0023ED4C(S_0023ED4C_Src *src, S_0023ED4C_Out *out)
{
    out->fC = 0;
    out->f0 = 3;
    out->f8 = src->f10 << 12;
    return 0;
}

int __stdcall func_0023ED71(S_0023ED71 *p, int *out)
{
    if (out != 0) {
        *out = 2;
        if (p->fb4 != 0) {
            _imp__RtlEnterCriticalSection(p->f6c);
            if (p->f9c.next == &p->f9c) {
                *out = 0;
            }
            _imp__RtlLeaveCriticalSection(p->f6c);
        }
    }
    return 0;
}

unsigned int __stdcall func_0023EDB5(S_0023EDB5 *p, int a)
{
    int __stdcall func_0023F84B(int h, int a);

    return func_0023F84B(p->f30, a) ? 0x80004005 : 0;
}

int __stdcall func_0023EE30(int fmt)
{
    int rate;

    if (fmt == 0) {
        rate = 48000;
    } else if (fmt == 1) {
        rate = 44100;
    } else if (fmt == 2) {
        rate = 32000;
    } else if (fmt == 3) {
        rate = 22050;
    } else if (fmt == 4) {
        rate = 16000;
    } else if (fmt == 5) {
        rate = 11025;
    } else if (fmt == 6) {
        rate = 8000;
    } else {
        rate = 0;
    }
    return rate;
}

int C_0023EE81::func_0023EE81(unsigned int a, unsigned int b, int *out)
{
    unsigned int blk = f50;
    unsigned int off = a % blk;
    unsigned int n = b;

    if (off + b > blk) {
        n = blk - off;
    }
    if ((f40 & 0x10) != 0 && a + b > f5C - f4C) {
        return 0;
    }
    *out = f34 + off;
    f38 = a;
    return n;
}

void C_0023EA00::func_0023EED3(void)
{
    extern int D_0029016C;
    void __stdcall func_0023F63D(void **p);
    vtbl = (void *)&D_0029016C;
    func_0023EA00();
    if (f4C != 0) {
        func_001DDC28(f4C);
    }
    if (f88 != 0) {
        func_001DDDD6(f88, -1);
    }
    if (f30 != 0) {
        func_0023F63D(&f30);
    }
    if (f34 != 0) {
        func_001E891B(f34);
    }
    if (f38 != 0) {
        func_001E891B(f38);
    }
    if (f50 != -1 && fAC == 0) {
        func_001DD13C(f50);
    }
    if (f4C != 0) {
        func_001DD13C(f4C);
    }
    if (f64 != 0) {
        func_001DD13C(f64);
    }
}

extern "C" long __cdecl _InterlockedIncrement(long volatile *);
#pragma intrinsic(_InterlockedIncrement)
int __stdcall func_0023EF5D(char *self)
{
    return _InterlockedIncrement((long volatile *)(self + 0x8c));
}

int __stdcall func_0023EF7B(S_0023EF7B_Src *src, S_0023EF7B_Out *out)
{
    memset(out, 0, sizeof(S_0023EF7B_Out));
    out->f0 = src->f8;
    out->f4 = src->fC;
    out->f8 = src->f10;
    out->fC = src->f14;
    out->f10 = src->f2C;
    return 0;
}

int __stdcall func_0023F160(C_0023EFB0 *p)
{
    p->func_0023EFB0();
    return 0;
}

int __stdcall func_0023F3F7(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    S_0023F3F7_Obj *obj;
    S_0023F3F7_Obj *mem;
    int hr;

    if (a5 == 0) {
        a5 = 1000;
    }
    mem = (S_0023F3F7_Obj *)func_001E8A44(0xbc);
    obj = mem != 0 ? mem->func_0023F1AB() : 0;
    if (obj == 0) {
        return 0x8007000e;
    }
    hr = func_0023F23E(obj, a0, a1, a2, a3, a4, a5, a6);
    if (hr >= 0) {
        *(S_0023F3F7_Obj **)a7 = obj;
    } else {
        *(S_0023F3F7_Obj **)a7 = 0;
        obj->Release();
    }
    return hr;
}

#pragma optimize("y", off)
void __stdcall func_0023F469(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    func_0023F3F7(a0, a1, a2, a3, a4, a5, a6, a7);
}
#pragma optimize("", on)
