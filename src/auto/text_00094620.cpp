/* 41 functions from 0x00094620 to 0x00095620, found by Ghidra. */
#include "common.h"
struct C_00094F00 {
    char pad0[0x7C];
    int unk7C;
    int func_00094F00(void);
};

struct C_00094890 {
    char pad0[0x38];
    int unk38;
    int func_00094890(void);
};

struct C_001B17D0 {
    void func_001B17D0(int v);
};

/* Per-slot settings table (offsets are the game's). */
struct S_00094620_Cfg {
    char pad0[0xcd8];
    int fCD8;
    char padCDC[4];
    int fCE0;
    char padCE4[0x57c];
    int f1260;
    char pad1264[4];
    int f1268;
    char pad126C[4];
    int f1270;
};

struct S_00094620_Mid {
    int f0;
    S_00094620_Cfg *f4;
};

struct S_00094620_Root {
    char pad0[0x2e8];
    S_00094620_Mid *f2e8;
};

extern S_00094620_Root *D_002A8490;

struct C_00093140 {
    char pad0[0x24];
    C_001B17D0 *f24;
    C_001B17D0 *f28;
    C_001B17D0 *f2c;
    void func_00093140(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_00094620(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094690(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_001D35E0 {
    void func_001D35E0(void);
};

struct C_00157660 {
    void func_00157660(void);
};

void func_001E891B(void *p);

/* BmxMemoryCard */
struct C_00094710 {
    void *vtbl;
    char pad4[0x40];
    C_001D35E0 *f44;
    void *func_00094710(unsigned int flags);
};

/* object held at C_00094A00::f50, called through vtable slot 37 */
struct S_00094A00_Obj {
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
};

struct C_00094A00 {
    char pad0[0x50];
    S_00094A00_Obj *f50;
    void func_00094A00(void);
};


void C_00093140::func_00094620(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fCD8);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fCE0);
    func_00093140(a1, a2, a3, 2, a4, a5, a6);
}

int C_00094890::func_00094890(void) {
    return unk38;
}

void C_00094A00::func_00094A00(void)
{
    f50->v37();
}

int C_00094F00::func_00094F00(void) {
    return unk7C;
}

