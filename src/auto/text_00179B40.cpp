/* 13 functions from 0x00179B40 to 0x0017AA90, found by Ghidra. */
#include "common.h"
struct C_0017A6F0 {
    char pad0[0x134];
    int unk134;
    void func_0017A6F0(int a0);
};

struct C_0017A850 {
    char pad0[0xF4];
    int unkF4;
    void func_0017A850(void);
};

extern int D_00288ED4;
extern int D_00288F84;
extern void func_001E8390(void *p);

struct C_0017A2E0 {
    void *vtbl;
    void func_00157660();
    void *func_0017A2E0(unsigned int flags);
};

struct C_0017A640_Vtbl0 {
    virtual void v0(int a0);
};

struct C_0017A640_Vtbl2 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0017A640_Mgr {
    void func_001B26C0(int a0);
};

extern C_0017A640_Mgr *D_002A829C;

struct C_0017A640 {
    void *vtbl;
    char pad4[0xEC];
    C_0017A640_Vtbl0 **fF0;
    char padF4[4];
    int fF8;
    C_0017A640_Vtbl2 *fFC;
    char pad100[0x40];
    void *f140;
    char pad144[0x10];
    int f154;
    void *f158;
    char pad15C[4];
    C_0017A640_Vtbl0 *f160;
    void func_00157660();
    void func_0017A640();
};

struct C_0017A860 {
    char pad0[0x138];
    int f138;
    int f13C;
    int *f140;
    void func_0017A860(int value);
};


void C_0017A6F0::func_0017A6F0(int a0) {
    unk134 = a0;
}

void C_0017A850::func_0017A850(void) {
    unkF4 = 0;
}
