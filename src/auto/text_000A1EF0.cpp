/* 5 functions from 0x000A1EF0 to 0x000A2ED0, found by Ghidra. */
#include "common.h"

struct C_000229C0 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_00022550();
    int func_00025240();
};

extern C_000229C0 *D_002B7E18;

struct C_002B9134 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_000B5020(void);
};

extern C_002B9134 *D_002B9134;

struct S_002A8490 {
    char pad0[0x2E0];
    int *f2E0;
};

extern S_002A8490 *D_002A8490;

struct C_0001B3C0_Sub { char pad0[0x28]; int *f28; };
struct C_0001B3C0 {
    char pad0[0x2C];
    C_0001B3C0_Sub *f2C;
    int func_0001B3C0(char *name);
};
struct C_Item { char pad0[4]; int f4; char f8[1]; };
struct C_Obj64 { char pad0[0x64]; int f64; };
struct C_00151130 { virtual void vdtor(int flags); void func_00151130(int a, int b, int c); };
struct C_001554D0 { void func_001554D0(int a); };
struct C_000186F0 { void func_000186F0(int a); };
struct C_00198390 { void func_00198390(void); };
struct C_00161680 { void func_00161680(void); };
struct C_001B2640 { void func_001B2640(void); };
struct S_1A4 { char pad0[4]; C_00198390 *f4; };
struct S_Ent { char pad0[0x1A4]; S_1A4 *f1A4; };
extern char D_0027AFF0[];
extern char D_0027AFE4[];
extern C_00161680 *D_002A829C;
extern C_001B2640 *D_002AA6C0;
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, int v);

struct C_000A2440 {
    char pad0[0x484];
    C_0001B3C0 *f484;
    int f488;
    char pad48C[0x58];
    C_00151130 *f4E4[8];
    C_001554D0 *f504[8];
    C_Item **f524;
    C_000186F0 *f528;
    char pad52C[0x24];
    char *f550;
    char pad554[0xC];
    int f560;
    void func_000A2440(void);
};

struct C_0019ABA0 {
    void func_0019ABA0(int a, int b);
};

struct S_000A2620_Info {
    char pad0[4];
    C_0019ABA0 *f4;
};

struct C_000A2620_Child {
    char pad0[0x3C];
    S_000A2620_Info *f3C;
    void func_000114D0(int a);
};

struct C_000A2620 {
    char pad0[0x4A8];
    int *f4A8;
    char pad4AC[0xCC];
    int f578;
    C_000A2620_Child **f57C;
    void func_001577A0(C_000A2620_Child *child, int a);
    void func_000A2620(void);
};

void func_000A25E0(void)
{
    if (D_002B7E18) {
        if ((D_002B7E18->func_00025240() | D_002B7E18->func_00022550()) == 0) {
            if (D_002B7E18) {
                D_002B7E18->vfunc8();
                D_002B7E18 = 0;
            }
        }
    }
}

void C_000A2620::func_000A2620(void)
{
    int i;
    if (D_002B9134 != 0 && D_002B9134->func_000B5020() == 0) {
        D_002B9134->vfunc8();
        D_002B9134 = 0;
    }
    if (*D_002A8490->f2E0 == 1) {
        for (i = 0; i < f578; i++) {
            C_000A2620_Child *child = f57C[i];
            func_001577A0(child, -1);
            child->f3C->f4->func_0019ABA0(*f4A8, 2);
            child->func_000114D0(1);
        }
    }
}

