/* 33 functions from 0x001CB440 to 0x001CC3C0, found by Ghidra. */
#include "common.h"

extern int D_0028ED78;
extern float D_00276098;
extern float D_002755E0;

extern void (__stdcall *__imp__RtlEnterCriticalSection)(void *cs);
extern void (__stdcall *__imp__RtlLeaveCriticalSection)(void *cs);

struct S_001CB440_Global {
    char pad0[0x138];
    int f138;
};

extern S_001CB440_Global *D_002F08EC;

void func_001E891B(void *p);

struct C_001CC110 {
    int unk0;
    void func_0001DFF0(void);
    void *func_001CC110(int flags);
};

struct C_001CB440 {
    char pad0[0x208];
    unsigned char f208;
    int func_001CB440(void);
};

struct C_001CB490 {
    char pad0[0x128];
    int f128;
    float f12c;
    float f130;
    float f134;
    char pad138[0x1a8 - 0x138];
    int f1a8;
    int func_001CB490(int param_1, int param_2, int param_3);
};

struct S_001CB510_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001CB510 {
    char pad0[0x13c];
    int f13c;
    char pad140[4];
    S_001CB510_Obj *f144;
    char pad148[8];
    int f150;
    void func_001CB510(void);
};

void __stdcall func_002223E1(int a, int b, int c);
int __stdcall func_0021FB83(int a);

int C_001CB440::func_001CB440(void)
{
    int v;

    __imp__RtlEnterCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    v = (f208 >> 4) & 1;
    __imp__RtlLeaveCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    return v;
}

int C_001CB490::func_001CB490(int param_1, int param_2, int param_3)
{
    int n = f1a8;
    float f = (float)param_2 * D_00276098;

    f130 = 0;
    f128 = n;
    f12c = f;
    if (param_3 != 0) {
        f134 = ((float)param_1 * D_002755E0 * (float)n - (float)n) / f;
        return 1;
    }
    f134 = (float)(param_1 - n) / f;
    return 1;
}

void C_001CB510::func_001CB510(void)
{
    if (f13c != 0 && f150 == 0) {
        func_002223E1(f13c, 0, 0);
        if (f13c != 0) {
            if (func_0021FB83(f13c) == 0) {
                f13c = 0;
            }
        }
    }
    if (f144 != 0) {
        f144->v2();
    }
}

int __stdcall func_001CBEE0(int a0, int a1, int a2, int a3, int a4) {
    return -2147467259;
}

void *C_001CC110::func_001CC110(int flags) {
    unk0 = (int)&D_0028ED78;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

