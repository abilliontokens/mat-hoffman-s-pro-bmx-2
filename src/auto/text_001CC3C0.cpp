/* 10 functions from 0x001CC3C0 to 0x001CD3B0, found by Ghidra. */
#include "common.h"

extern int D_0028EECC;

int func_001CB0A0(int x);
void func_001CBC10(int e, void *file, int line);
int __stdcall func_002209A2(int a, int b);
int __stdcall func_00220A8A(int a, int b);
int __stdcall func_00220AD6(int a, int b);
void __stdcall func_002223E1(int a, int b, int c);

struct C_001CC3C0_138 {
    char pad0[0x28];
    int f28;
};

struct C_001CC3C0_140 {
    int f0;
    char pad4[0x8];
    int fC;
};

struct C_001CC3C0_144 {
    char pad0[0x8];
    int f8;
};

struct C_001CC3C0_154 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int v7();
};

struct C_001CC3C0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    virtual void v6();
    virtual int v7();
    virtual void v8();
    virtual int v9(int a);
    char pad0[0x114];       /* 0x04 */
    int f118;               /* 0x118 */
    char pad11C[0x8];       /* 0x11C */
    int f124;               /* 0x124 */
    char pad128[0x10];      /* 0x128 */
    C_001CC3C0_138 *f138;   /* 0x138 */
    int f13C;               /* 0x13C */
    C_001CC3C0_140 *f140;   /* 0x140 */
    C_001CC3C0_144 *f144;   /* 0x144 */
    char pad148[0xC];       /* 0x148 */
    C_001CC3C0_154 *f154;   /* 0x154 */
    char pad158[0x50];      /* 0x158 */
    int f1A8;               /* 0x1A8 */
    char pad1AC[0x8];       /* 0x1AC */
    int f1B4;               /* 0x1B4 */
    char pad1B8[0x20];      /* 0x1B8 */
    int f1D8;               /* 0x1D8 */
    char pad1DC[0xC];       /* 0x1DC */
    int f1E8;               /* 0x1E8 */
    char pad1EC[0xC];       /* 0x1EC */
    int f1F8;               /* 0x1F8 */
    char pad1FC[0xC];       /* 0x1FC */
    u8 f208;                /* 0x208 */
    int func_001CC3C0(int param_1);
    int func_001CC460(int param_1);
    int func_001CCA10(void);
    int func_001CC4B0(int *a, int *b, int *c, int *d);
};
