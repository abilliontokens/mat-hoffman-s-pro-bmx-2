/* 10 functions from 0x00138800 to 0x001396D0, found by Ghidra. */
#include "common.h"
extern int D_00284A2C;
struct CutScene {
 void *vtbl; char pad4[0x20];
int f24;
int f28;
int f2c;
int f30;
int f34;
int f38;
int f3c;
int f40;
int f44;
int f48;
int f4c;
int f50;
int f54;
int f58;
int f5c;
int f60;
int f64;
int f68;
int f6c;
int f70;
int f74;
int f78;
int f7c;
int f80;
int f84;
int f88;
int f8c;
 void func_00157600(int);
 CutScene *func_00138800(int);
};
struct C_00139080 {
    char pad0[0x88];
    int unk88;
    int unk8C;
    void func_00139080(int a0, int a1);
};

struct C_00139060 {
    char pad0[0x84];
    int unk84;
    char pad88[0x4];
    int unk8C;
    void func_00139060(int a0, int a1);
};


void C_00139060::func_00139060(int a0, int a1) {
    unk84 = a0;
    unk8C = a1;
}

void C_00139080::func_00139080(int a0, int a1) {
    unk88 = a0;
    unk8C = a1;
}

