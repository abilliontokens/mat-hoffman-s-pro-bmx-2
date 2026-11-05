/* 4 functions from 0x000874E0 to 0x00087D20, found by Ghidra. */
#include "common.h"

extern int D_002797A4;

void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

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

C_000876B0 *C_000876B0::func_000876B0(int a0) {
    int i;

    ((C_00157600 *)this)->func_00157600(1);
    vtbl = (void *)&D_002797A4;
    f24[0] = 0;
    f24[1] = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    fC4 = 0;
    for (i = 0; i < 0x20; i++)
        f44[i] = 0;
    return this;
}

void C_000876B0::func_00087700(void) {
    int i;

    vtbl = (void *)&D_002797A4;
    if (f2C != 0) {
        f2C->Destroy(1);
        f2C = 0;
    }
    if (f30 != 0) {
        f30->Destroy(1);
        f30 = 0;
    }
    for (i = 0; i < 2; i++) {
        C_000876B0_Item *p = f24[i];
        if (p != 0) {
            p->func_001D6410();
            func_001E891B(p);
        }
    }
    ((C_00157660 *)this)->func_00157660();
}

