/* 14 functions from 0x0013D780 to 0x0013E6F0, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
void func_001E891B(void *p);
int func_001EA426(void *p, int a);

extern int D_00284C58;
extern int D_00100000;

struct C_001D5600 {
    void func_001D5600(void);
};

struct C_00156E80 {
    void func_00156E80(void);
};

extern C_001D5600 *D_002EFDB8;
extern C_00156E80 *D_002A8490;

struct C_0013E080_elem {
    int x;
    int y;
    int z;
};

struct C_0013E080 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C[8];
    char pad4C[0x20];
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    C_0013E080_elem f80[8];
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0;
    int fF4;
    int fF8;
    int fFC;
    C_0013E080 *func_0013E080(void);
    void *func_0013E140(unsigned int flags);
    void func_0001DFE0(void);
    void func_0013D400(void);
    void func_0001DFF0(void);
    void func_0013D550(int a, int b, void *c);
};

struct C_0013DFF0_elem {
    int f0;
    void *f4;
    char pad8[0x20];
};

struct C_0013DFF0 {
    char pad0[0xC];
    C_0013DFF0_elem *unkC;
    int unk10;
    int func_0013DFF0(int a1, int a2);
    int func_0013C5D0(C_0013DFF0_elem *e, int a2);
};
