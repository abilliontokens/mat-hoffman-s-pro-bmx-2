/* 7 functions from 0x0004D7A0 to 0x0004E680, found by Ghidra. */
#include "common.h"

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
struct C_0004DCA0_Rider {
    char pad0[0x95c];
    int f95C;
    void func_00108680(int a);
    void func_0010C090(void *a, void *b, int c, int d);
};

struct C_0004DCA0_Riders {
    char pad0[0x1a8];
    C_0004DCA0_Rider *f1A8[1];
    void func_000A4500(int a, int b);
};

struct C_0004DCA0_World {
    char pad0[0x4e0];
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
    char pad124[0x9c];
    C_0004DCA0_Snd *f1C0;
    char pad1C4[0xc4];
    C_0004DCA0_Cam *f288;
    int f28C;
    int f290;
    char pad294[0x3f4];
    C_0004DCA0_Vec f688[8];
    C_0004DCA0_Vec f708[8];
    void func_000342C0(void);
    C_0004DCA0 *func_0004DCA0(void);
};
