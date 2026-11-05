/* 7 functions from 0x001B82A0 to 0x001B8920, found by Ghidra. */
#include "common.h"

extern int D_0028CF94;
extern int D_0028D04C;

void func_001E891B(void *p);
int func_001E8AF0(int a, void *b);

extern char D_0028D034[];
extern char D_0028D020[];
extern char D_0028D00C[];
extern int D_0028CF84;

void func_001E83E8(void *p, int size);
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00169710 {
    int func_00169710(char *name);
    int func_00168C20(char *name, int a, int *out);
};

struct C_001B82D0_item {
    void *vtbl;
    int f4;
    int f8;
    char padc[0xc];
    C_001B82D0_item() {
        vtbl = (void *)&D_0028CF84;
        f4 = 0;
        f8 = 0;
    }
};

struct C_001B82D0_itemv {
    virtual void Load(C_00169710 *r);
};

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
    int func_001B82D0(C_00169710 *r);
};

struct C_001B8450 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    C_001B8480_item **f28;
    C_001B8450 *func_001B8450(void *param);
    void func_001B8480(void);
};

struct C_001B84E0_quat {
    float x;
    float y;
    float z;
    float w;
    void Reset(void) {
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
        w = 1.0f;
    }
};

struct C_001B84E0 {
    char pad0[0x118];
    C_001B84E0_quat q[4];
    C_001B84E0 *func_001B84E0(void);
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
        if (func_001E8AF0(*f28[i]->f4 + 0x6c, param) != 0 && f28[i]->f10 == 1)
            return *f28[i]->f4;
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

C_001B84E0 *C_001B84E0::func_001B84E0(void) {
    q[0].Reset();
    q[1].Reset();
    q[2].Reset();
    q[3].Reset();
    return this;
}


