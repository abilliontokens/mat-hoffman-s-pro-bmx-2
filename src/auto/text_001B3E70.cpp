/* 11 functions from 0x001B3E70 to 0x001B4E20, found by Ghidra. */
#include "common.h"

extern int D_002AA8E0;
extern int D_002AA8C0;

/* vtable of the object at TireTrack+0x24 (28..31 are the slots used here) */
struct S_TireTrackSurf {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int a, int b, void *c);
    virtual void v29(int a, int b, void *c);
    virtual void v30();
    virtual void v31(int a, int b, int c);
};

struct C_00157960 {
    void func_00157960();
};

/* TireTrack */
struct TireTrack {
    void *vtbl;
    char pad4[0x20];
    S_TireTrackSurf *f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char pad40[0x60];
    int fa0;
    void func_001B4970();
    void func_001B49B0();
    void func_001B4A20();
};

struct C_001B4A40 {
    int unk0;
    const char *f4;
    void func_001B4A40(const char *str);
};

struct C_001B4A40Ret {
    int unk0;
    const char *f4;
    C_001B4A40Ret *func_001B4A40(const char *str);
};

struct C_001B4B70 {
    int unk0;
    void func_001B4B70(void);
};


void TireTrack::func_001B4970()
{
    if (f34 == 0) {
        int n = f2c + 1;
        f30 = 0;
        fa0 = 0;
        f2c = n;
        if (n >= f28) {
            f2c = 0;
        }
        f38 = 1;
        f34 = 1;
    }
}

void TireTrack::func_001B49B0()
{
    int i;
    int j;
    for (i = 0; i < f28; i++) {
        for (j = 0; j < 16; j++) {
            f24->v31(i, j, 0);
            f24->v29(i, j, &D_002AA8E0);
            f24->v28(i, j, &D_002AA8C0);
        }
    }
    f30 = 0;
    fa0 = 0;
    f2c = 0;
}

void TireTrack::func_001B4A20()
{
    if (f3c != 0) {
        func_001B49B0();
        f3c = 0;
    }
    ((C_00157960 *)this)->func_00157960();
}

void C_001B4A40::func_001B4A40(const char *str)
{
    const char *p;
    const char *first;
    char c;
    p = str;
    first = p + 1;
    do {
        c = *p++;
    } while (c != 0);
    f4 = (p - first) ? str : 0;
}

void C_001B4B70::func_001B4B70(void) {
    extern int D_0028CA64;
    unk0 = (int)&D_0028CA64;
}
