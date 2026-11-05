/* 7 functions from 0x000A11A0 to 0x000A1EF0, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern char D_002A5C90[];
extern char D_00275678[];
extern char D_002A5870[];
extern char D_002A5B88[];

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct S_000A1920_Mgr {
    int f0;
};

struct S_000A1920_Global {
    char pad0[0x2e0];
    S_000A1920_Mgr *f2e0;
};

extern S_000A1920_Global *D_002A8490;

struct C_001596C0 {
    void func_001596C0(void *a0);
};

struct C_000A1E60 {
    char pad0[0x3ac];
    void *f3ac;
    char pad3b0[0x530 - 0x3b0];
    C_001596C0 *f530;
    int func_000A1E60(void);
};

struct C_000A17E0 {
    int func_00185110(int a0);
    int func_000A17E0(void);
};

struct C_001BB900 {
    void func_001BB900(void *a0);
};

struct C_000A1920_Elem {
    char pad0[0x11b0];
    void *f11b0;
};

struct C_000A1920_Scene {
    char pad0[0x1a8];
    C_000A1920_Elem *arr1a8[1];
};

struct C_000A1920_Arg {
    char pad0[4];
    C_001BB900 *f4;
};

struct C_000A1920 {
    char pad0[0x4e0];
    C_000A1920_Scene *f4e0;
    void func_000A1920(C_000A1920_Arg *a0);
};

struct C_000A1E90_Obj {
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
    C_000A1E90_Obj *func_000213F0(int a0);
    void func_00024380(int a0);
};

extern C_000A1E90_Obj *D_002B7E18;

struct C_000A1E90 {
    char pad0[0x28];
    int f28;
    void func_000A1E90(void);
};

int C_000A17E0::func_000A17E0(void) {
    int r;

    func_001ADCC0(D_002A5C90, 0x104, D_00275678, D_002A5870, D_002A5B88);
    r = func_00185110(0);
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
    return r;
}

int C_000A1E60::func_000A1E60(void) {
    if (f530 != 0) {
        f530->func_001596C0(f3ac);
        return 1;
    }
    return 0;
}
