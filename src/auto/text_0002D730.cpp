/* 1 function from 0x0002D730 to 0x0002EB10, found by Ghidra. */
#include "common.h"

struct S_2D730_Mgr {
    void *func_00026500(int a, void *b);
};

struct S_2D730_Sub {
    void func_00025E50(float f);
};

extern int D_002B7EA4;
extern int D_002B7EA0;
extern int D_002B7E9C;
extern int D_002B7E98;
extern int D_002A7CB8;
extern int D_002767AC;
extern int D_002767A4;
extern int D_002A1190;
extern float D_00275460;

struct C_0002D730 {
    char pad0[0x454];
    int f454;
    char pad458[0x198];
    S_2D730_Sub *f5f0;
    char pad5f4[0x11c];
    void func_0002D730(float dt);
};
