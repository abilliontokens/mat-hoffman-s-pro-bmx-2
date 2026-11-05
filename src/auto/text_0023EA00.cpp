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
};

struct S_0023F1AB_Obj : S_0023F3F7_Obj {
    char pad4[0xb8];
    S_0023F1AB_Obj *func_0023F1AB(void);
};

int __stdcall func_0023F23E(S_0023F3F7_Obj *obj, int a0, int a1, int a2, int a3, int a4, int a5, int a6);

struct S_0023EA00_Link {
    S_0023EA00_Link *next;
    S_0023EA00_Link *prev;
};

struct C_0023EA00 {
    char pad0[0xa4];
    S_0023EA00_Link fA4;
    void func_0023EA00(void);
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
int __stdcall func_0023ED4C(S_0023ED4C_Src *src, S_0023ED4C_Out *out)
{
    out->fC = 0;
    out->f0 = 3;
    out->f8 = src->f10 << 12;
    return 0;
}

#pragma optimize("y", off)
void __stdcall func_0023F469(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    func_0023F3F7(a0, a1, a2, a3, a4, a5, a6, a7);
}
#pragma optimize("", on)
