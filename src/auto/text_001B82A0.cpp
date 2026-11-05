/* 7 functions from 0x001B82A0 to 0x001B8920, found by Ghidra. */
#include "common.h"

extern int D_0028CF94;
extern int D_0028D04C;

void func_001E891B(void *p);
int func_001E8AF0(int a, void *b);

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B83F0_item {
    int f0;
    int *f4;
    char pad8[8];
    int f10;
};

struct C_001B8480_item {
    char pad0[0x158];
    void *f158;
};

struct C_001B82A0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    C_001B83F0_item **f28;
    C_001B82A0 *func_001B82A0(void *param);
    int func_001B83F0(void *param);
};

struct C_001B8450 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    C_001B8480_item **f28;
    C_001B8450 *func_001B8450(void *param);
    void func_001B8480(void);
};

C_001B82A0 *C_001B82A0::func_001B82A0(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CF94;
    return this;
}

int C_001B82A0::func_001B83F0(void *param) {
    int i;

    for (i = 0; i < f24; i++) {
        C_001B83F0_item *e = f28[i];
        if (func_001E8AF0(*e->f4 + 0x6c, param) != 0 && e->f10 == 1)
            return *e->f4;
    }
    return 0;
}

C_001B8450 *C_001B8450::func_001B8450(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D04C;
    return this;
}

void C_001B8450::func_001B8480(void) {
    int i;

    vtbl = (void *)&D_0028D04C;
    if (f28) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f158);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

