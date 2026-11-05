/* 6 functions from 0x001800A0 to 0x00180E00, found by Ghidra. */
#include "common.h"
struct C_001805F0 {
    char pad0[0x104];
    int unk104;
    void func_001805F0(void);
};

struct C_00180DD0 {
    void *vtbl;
    void func_0017F0B0();
    void func_00133E60();
    void *func_00180DD0(unsigned int flags);
};

struct C_001804F0 {
    short unk0;
    short unk2;
    short unk4;
    C_001804F0 *func_001804F0(float *p);
};

struct C_001805C0 {
    C_001805C0 *func_001805C0(void);
};


C_001804F0 *C_001804F0::func_001804F0(float *p) {
    extern float D_002F0798;
    extern float D_002891BC;
    float f0 = D_002F0798 * p[0];
    float f1 = D_002F0798 * p[1];
    float f2 = D_002F0798 * p[2];
    unk0 = (short)(D_002891BC * f0);
    unk2 = (short)(D_002891BC * f1);
    unk4 = (short)(D_002891BC * f2);
    return this;
}

C_001805C0 *C_001805C0::func_001805C0(void) {
    int *p = (int *)((char *)this + 4);
    for (int i = 2; i != 0; i--) {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    }
    return this;
}

void C_001805F0::func_001805F0(void) {
    extern int D_002B9344;
    int func_0017F550(...);
    D_002B9344 = unk104;
    func_0017F550();
}

void *C_00180DD0::func_00180DD0(unsigned int flags) {
    extern int D_002891C4;
    void func_001E891B(void *);
    vtbl = (void *)&D_002891C4;
    func_0017F0B0();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

