/* 7 functions from 0x0005D6A0 to 0x0005E600, found by Ghidra. */
#include "common.h"
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memcpy, memset)
struct S_002A8490_4 { char pad0[0xB4]; int fB4; };
struct S_001577A0 { void func_001577A0(void *a, int b); };
struct S_002A8490 { char pad0[0x4]; S_002A8490_4 *f4; char pad8[0xC]; S_001577A0 *f14; char pad18[0x2CC]; int f2E4; };
extern S_002A8490 *D_002A8490;
extern char D_0027829C[], D_002782AC[], D_00278438[], D_00278138[], D_000149F0[];
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_0027842C[];
int func_001ADCC0(char *buf, int n, const char *fmt, ...);
void *func_001E8A44(unsigned int n);
struct S_0005CBD0 { void func_0005CBD0(void); };
struct S_001D3F60 { void *func_001D3F60(void); };
struct S_00094F40 {
    S_00094F40 *func_00094F40(S_002A8490_4 *a);
    void func_00095640(char *buf, int a, int b);
};
struct C_0005D6A0 { C_0005D6A0 *func_0005D6A0(void); };
struct C_0005DA30 {
    char pad0[0x2C];
    int unk2C;
    void func_0005DA30(int a0);
};

struct C_0005DA40 {
    char pad0[0x34];
    int unk34;
    void func_0005DA40(int a0);
};

struct S_0005DA50_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA50 {
    char pad0[0x78];
    int unk78;
    void func_0005DA50(int a0);
};

struct S_0005DA80_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA80 {
    char pad0[0x7C];
    int unk7C;
    void func_0005DA80(int a0);
};


void C_0005DA30::func_0005DA30(int a0) {
    int func_001D3F50(...);
    unk2C = a0;
    func_001D3F50();
}

void C_0005DA40::func_0005DA40(int a0) {
    unk34 = a0;
}

void C_0005DA50::func_0005DA50(int a0) {
    unk78 = a0;
    *(S_0005DA50_rec *)((char *)this + 0x38) = *(S_0005DA50_rec *)((char *)this + (a0 + 8) * 16);
}

void C_0005DA80::func_0005DA80(int a0) {
    unk7C = a0;
    *(S_0005DA80_rec *)((char *)this + 0x48) = *(S_0005DA80_rec *)((char *)this + (a0 + 8) * 16);
}

