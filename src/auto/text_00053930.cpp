/* 11 functions from 0x00053930 to 0x00054680, found by Ghidra. */
#include "common.h"
struct C_00053C60 {
    char pad0[0x284];
    int unk284;
    int unk288;
    int func_00053C60(void);
};

struct C_00053C80 {
    int unk0;
    void func_00033220(void);
    void *func_00053C80(int flags);
};

struct C_00053D20 {
    int unk0;
    char pad4[0x1f8];
    int f1fc;
    char pad200[0x84];
    int f284[8];
    int f2a4[8];
    int f2c4;
    int f2c8;
    int f2cc;
    int f2d0;
    int f2d4;
    float f2d8;
    int f2dc;
    float f2e0;
    float f2e4;
    int f2e8;
    void func_00030F90(void *param);
    C_00053D20 *func_00053D20(void *param);
};


int C_00053C60::func_00053C60(void) {
    int func_00034090(...);
    unk284 = 0;
    unk288 = 0;
    func_00034090();
    return 1;
}

void *C_00053C80::func_00053C80(int flags) {
    extern int D_00277A84;
    void func_001E891B(void *);
    unk0 = (int)&D_00277A84;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00053D20 *C_00053D20::func_00053D20(void *param)
{
    extern int D_00277B74;
    int i;

    func_00030F90(param);
    f2c4 = -1;
    f2c8 = -1;
    unk0 = (int)&D_00277B74;
    f2cc = 0;
    f2d0 = 0;
    f2d4 = 0;
    for (i = 0; i < 8; i++) {
        f2a4[i] = 0;
        f284[i] = 0;
    }
    f2dc = 1;
    f1fc = 1;
    f2d8 = 0.5f;
    f2e0 = 7.0f;
    f2e4 = 2.0f;
    f2e8 = 0;
    return this;
}

void func_00054330(void) {
    int func_00031410(...);
    func_00031410();
}
