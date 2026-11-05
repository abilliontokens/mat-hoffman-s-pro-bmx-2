/* 14 functions from 0x00143C00 to 0x00144BF0, found by Ghidra. */
#include "common.h"

extern int D_00285B84;
extern int D_00285B58;
extern int D_00284E94;
extern int D_00285B64;

void __stdcall func_00201100(void *p);
void func_001E891B(void *p);

struct C_001AF300 {
    void func_001AF300(void *param);
};

struct C_001AF0B0 {
    void func_001AF0B0();
};

struct C_001AF0D0 {
    void func_001AF0D0();
};

struct C_001449B0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    C_001449B0 *func_001449B0(void *param);
};

struct C_001445C0 {
    void *vtbl;
    char pad4[0x10];
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    void *f28;
    char pad2c[4];
    void *f30;
    void *f34;
    void func_001445C0();
};

struct C_00144640 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    C_00144640 *func_00144640();
};

struct C_00144660 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    void func_00144660();
};
