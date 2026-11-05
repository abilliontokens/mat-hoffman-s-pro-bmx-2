/* 15 functions from 0x00034EF0 to 0x00035E80, found by Ghidra. */
#include "common.h"
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" unsigned __int64 __ftol2(double x);

extern char D_00276D5C;
extern float D_00276CA0;

struct I_002A8490 {
    virtual void slot_00(void) = 0;
    virtual void slot_04(void) = 0;
    virtual void slot_08(void) = 0;
    virtual void slot_0c(void) = 0;
    virtual void slot_10(void) = 0;
    virtual void slot_14(void) = 0;
    virtual void slot_18(void) = 0;
    virtual void slot_1c(void) = 0;
    virtual void slot_20(void) = 0;
    virtual void slot_24(void) = 0;
    virtual void slot_28(void) = 0;
    virtual void slot_2c(void) = 0;
    virtual void slot_30(void) = 0;
    virtual void slot_34(void) = 0;
    virtual void slot_38(void) = 0;
    virtual void slot_3c(void *a, void *b, int c, int d) = 0;
};

extern I_002A8490 *D_002A8490;

struct S_35980_A {
    void func_00069BB0(void);
    void func_00069BA0(void);
};

struct S_35980_B {
    void func_0006BB90(void);
    void func_0006BBF0(void);
};

struct C_00035980 {
    char pad0[0x2c4];
    S_35980_A *f2c4;
    char pad2c8[0x2c0];
    S_35980_B *f588;
    void func_00035980(int enable);
};

struct C_00035BE0 {
    char pad0[0x1a0];
    void *f1a0;
    char pad1a4[0x2c];
    void *f1d0;
    void func_001577A0(void *p, int n);
    void func_00035BE0(void);
};

struct S_35300_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008B6F0(void);
    void func_0008B680(char *p);
};

struct C_00035300 {
    char pad0[0x494];
    int f494;
    char pad498[0xc8];
    S_35300_Obj *f560;
    void func_00035300(char *name, int n);
};

struct S_35360_Item {
    char pad0[0x67c];
    int f67c;
    void func_0010C090(void *a, void *b, void *c, int d);
};

struct S_35360_Tbl {
    char pad0[0x24];
    int count;
    char pad28[0x180];
    S_35360_Item *objs[1];
};

struct S_35360_Mgr {
    char pad0[0x4e0];
    S_35360_Tbl *f4e0;
};

struct C_00035360 {
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    char pad4[0x60];
    S_35360_Mgr *f64;
    char pad68[0x22c];
    char f294[0x10];
    char f2a4[0x10];
    char f2b4[0x10];
    void func_00032220(void);
    void func_00035360(void);
};

struct S_35680_Screen {
    char pad0[0x1e0];
    u32 f1e0;
    char pad1e4[0x20];
    int f204;
    int f208;
    void func_0012B190(int x, int y, int w, int h);
};

struct C_00035680 {
    char pad0[0x24];
    S_35680_Screen *f24;
    S_35680_Screen *f28;
    char pad2c[0x1b0];
    char f1dc[4];
    u32 f1e0;
    void func_00035680(void);
};

struct S_35860_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008A910(void);
    void func_0008A080(void);
};

struct C_00035720 {
    char pad0[0x24];
    S_35680_Screen *f24;
    S_35680_Screen *f28;
    char pad2c[0x1b0];
    int f1dc;
    int f1e0;
    int f1e4;
    int f1e8;
    char pad1ec[0x98];
    int f284;
    char pad288[0x40];
    int f2c8;
    char pad2cc[0x1a8];
    int f474;
    char pad478[0xc8];
    S_35860_Obj *f540;
    char pad544[0xc];
    S_35860_Obj *f550;
    S_35860_Obj *f554;
    S_35860_Obj *f558;
    char pad55c[4];
    S_35860_Obj *f560;
    void func_001577A0(void *p, int n);
    void func_00031E80(void);
    int func_00035780(void);
    void func_00035720(void);
    void func_00035860(void);
    void func_000358E0(void);
    void func_00035940(void);
};

void C_00035300::func_00035300(char *name, int n)
{
    char buf[0x34];

    func_001ADCC0(buf, 0x32, &D_00276D5C, name, n);
    f494 = 0;
    f560->func_0008B6F0();
    f560->func_0008B680(buf);
    f560->v6();
}

void C_00035360::func_00035360(void)
{
    int i;

    v40();
    f64->f4e0->objs[0]->func_0010C090(f294, f2a4, f2b4, 1);
    func_00032220();
    for (i = 0; i < f64->f4e0->count; i++) {
        f64->f4e0->objs[i]->f67c = 0;
    }
}

void C_00035680::func_00035680(void)
{
    D_002A8490->slot_3c(f24, f28, 0, 0);
    f24->func_0012B190(0, 0, f24->f204, f24->f208);
    memcpy(f1dc, &f24->f1e0, 0x18);
    f1e0 = (int)((float)f1e0 - D_00276CA0);
    if (f28 != 0) {
        f28->func_0012B190(0x1c3, 0x14, 0xa0, 0x59);
    }
}

void C_00035720::func_00035720(void)
{
    f2c8 = 0;
    if (f284 != 0) {
        f24->func_0012B190(f1dc, f1e0, f1e4, f1e8);
    } else {
        f24->func_0012B190(0, 0, f24->f204, f24->f208);
    }
}

void C_00035720::func_00035860(void)
{
    if (f284 == 0) {
        f540->v6();
        D_002A8490->slot_3c(f24, f28, 0, 0);
    } else {
        D_002A8490->slot_3c(f24, 0, 0, 0);
    }
    if (f550 != 0) {
        f550->v6();
    }
    if (f554 != 0) {
        f554->v6();
    }
    f554->func_0008A910();
    f474 = 2;
    f550->func_0008A080();
}

void C_00035720::func_000358E0(void)
{
    D_002A8490->slot_3c(f24, 0, 0, 0);
    if (f550 != 0) {
        f550->v4();
    }
    if (f558 != 0) {
        f558->v4();
    }
    if (f554 != 0) {
        f554->v4();
    }
    if (f560 != 0) {
        f560->v4();
    }
}

void C_00035720::func_00035940(void)
{
    f540->v6();
    D_002A8490->slot_3c(f24, f28, 0, 0);
    if (f550 != 0) {
        f550->v6();
    }
}

void C_00035980::func_00035980(int enable)
{
    if (enable != 0) {
        f588->func_0006BB90();
        f2c4->func_00069BB0();
    } else {
        f2c4->func_00069BA0();
        f588->func_0006BBF0();
    }
}

void C_00035BE0::func_00035BE0(void)
{
    if (f1d0 != 0) {
        func_001577A0(f1d0, -1);
    }
    if (f1a0 != 0) {
        func_001577A0(f1a0, -1);
    }
}

