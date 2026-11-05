/* 4 functions from 0x000874E0 to 0x00087D20, found by Ghidra. */
#include "common.h"

extern int D_002797A4;

void func_001E891B(void *p);

struct C_00157600 {
    void func_00157600(int param);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_000876B0_Child {
    virtual void Destroy(int flag);
};

struct C_000876B0_Item {
    void func_001D6410(void);
};

struct C_000876B0 {
    void *vtbl;
    char pad4[0x20];
    C_000876B0_Item *f24[2];
    C_000876B0_Child *f2C;
    C_000876B0_Child *f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44[0x20];
    int fC4;
    C_000876B0 *func_000876B0(int a0);
    void func_00087700(void);
};
