/* 7 functions from 0x0004D7A0 to 0x0004E680, found by Ghidra. */
#include "common.h"

struct C_0004DCA0_Rider {
    char pad0[0x958];
    float f958;
    int f95C;
    char pad960[0x10];
    int f970;
    void func_00108680(int a);
    void func_0010C090(void *a, void *b, int c, int d);
};

struct C_0004DCA0_Riders {
    char pad0[0x1a8];
    C_0004DCA0_Rider *f1A8[1];
    void func_000A4500(int a, int b);
};

struct C_0004D7A0_Virtual { void **vtbl; };

struct C_0004D7A0_Menu {
    char pad0[0xfc];
    int fFC;
    void func_000602B0(void);
    void func_00060350(int);
};
struct C_0004D7A0_State { char pad0[0x13c]; int f13C; };
struct C_0004D7A0_Other { char pad0[0x168]; int f168; };
struct C_0004D7A0_GlobalState {
    int f0;
    int f4;
    char pad8[0x2f4];
    C_0004D7A0_Virtual *f2FC;
};
struct C_0004D7A0_Global { char pad0[0x2e0]; C_0004D7A0_GlobalState *f2E0; };
extern C_0004D7A0_Global *D_002A8490;
int func_001361E0(int, int, int *, int);

struct C_0004DCA0_World {
    char pad0[0x4c0];
    C_0004D7A0_Virtual *f4C0;
    char pad4c4[0x1c];
    C_0004DCA0_Riders *f4E0;
};

struct C_0004DCA0_Cam {
    void func_00086130(int a);
    void func_00086140(int a);
    void func_00085BD0(int a);
};

struct C_0004DCA0_Snd {
    void func_00099D40(int a);
};

struct C_0004DCA0_Vec {
    char pad0[0x10];
};

struct C_0004DCA0 {
    char pad0[0x64];
    C_0004DCA0_World *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x8c];
    int f120;
    char pad124[0x38];
    C_0004D7A0_Menu *f15C;
    char pad160[0x30];
    C_0004D7A0_Other *f190;
    char pad194[0xc];
    C_0004D7A0_State *f1A0;
    char pad1a4[0x1c];
    C_0004DCA0_Snd *f1C0;
    char pad1C4[0x30];
    int f1F4;
    char pad1f8[0x90];
    C_0004DCA0_Cam *f288;
    int f28C;
    int f290;
    char pad294[0x3f4];
    C_0004DCA0_Vec f688[8];
    C_0004DCA0_Vec f708[8];
    void func_000342C0(void);
    C_0004DCA0 *func_0004DCA0(void);
};

struct C_0004DC70 {
    int unk0;
    void func_00033220(void);
    void *func_0004DC70(int flags);
};

void *C_0004DC70::func_0004DC70(int flags) {
    extern int D_002774DC;
    void func_001E891B(void *);
    unk0 = (int)&D_002774DC;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0004DCA0 *C_0004DCA0::func_0004DCA0(void)
{
    int i;
    func_000342C0();
    for (i = 0; i < f90; i++) {
        f64->f4E0->func_000A4500(0, i);
        f64->f4E0->f1A8[i]->f95C = 1;
        f64->f4E0->f1A8[i]->func_00108680(0);
        f64->f4E0->f1A8[i]->func_0010C090(&f688[f28C], &f708[f28C], 0, 1);
    }
    f120 = f90 - 1;
    f288->func_00086130(0);
    f288->func_00086140(0);
    f288->func_00085BD0(1);
    f64->f4E0->f1A8[f120]->f95C = 1;
    f290 = 0;
    if (f1C0)
        f1C0->func_00099D40(-1);
    return this;
}

