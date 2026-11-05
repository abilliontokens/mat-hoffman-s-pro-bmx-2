/* 15 functions from 0x0014A610 to 0x0014B260, found by Ghidra. */
#include "common.h"
struct C_0014A630 {
    int unk0;
    int unk4;
    int unk8;
    void func_0014A630(void);
};

struct C_0014A610 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A610* func_0014A610(void);
    void func_0014A650(C_0014A610 *src);
};

struct VSEntry {
    int f0;
    int f4;
    int f8;
    char fC;
    char fD;
};

struct C_0014A520 {
    C_0014A520 *func_0014A520(int a);
    void func_0014A560(int a, int b);
};

struct C_0014A8A0 {
    char pad0[8];
    int f8;
    char padC[8];
    VSEntry *f14;
    void func_0014A8A0(void);
};

struct C_0014A870 {
    int unk0;
    void func_001AC3D0();
    void *func_0014A870(int flags);
};

void *func_001E8A44(int size);
void __stdcall func_001FF220(int v);
void __stdcall func_001FEEF0(int a, int b);
void __stdcall func_001FEB90(int a, int b);
int func_0014A6C0(int type);
int func_0014A7B0(VSEntry *entries, unsigned int *tokens);


C_0014A610* C_0014A610::func_0014A610(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = -1;
    return this;
}

void C_0014A630::func_0014A630(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = -1;
}

void *C_0014A870::func_0014A870(int flags) {
    extern int D_00286870;
    void func_001E891B(void *);
    unk0 = (int)&D_00286870;
    func_001AC3D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

