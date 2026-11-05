/* 12 functions from 0x00052C10 to 0x00053930, found by Ghidra. */
#include "common.h"

extern int D_00277A84;

struct C_52C10_Obj74 {
    void func_00030210();
};

struct C_52C10_Obj {
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
    char pad4[0x70];
    C_52C10_Obj74 *unk74;
};

struct C_52C10_64 {
    char pad0[0x558];
    C_52C10_Obj *unk558;
};

struct C_52C10_2A8490 {
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
    virtual void v15(void *a, void *b, int c, int d);
    char pad4C[0x228];
    void *f274;
    char pad278[0x68];
    void *f2E0;
};

extern C_52C10_2A8490 *D_002A8490;

struct C_52C10_2EFDB8 {
    char pad0[0x30];
    int f30;
};

extern C_52C10_2EFDB8 *D_002EFDB8;

struct C_52C10_5C6B0 {
    int func_0005C6B0(int a);
};

struct C_52C10_2E0 {
    char pad0[0x2C0];
    C_52C10_5C6B0 *f2C0;
};

struct C_52C10_99D40 {
    void func_00099D40(int a);
};

struct C_52C10 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x20];
    void *unk24;                      /* 0x24 */
    C_52C10_Obj *unk28;               /* 0x28 */
    char pad2C[0x1C];
    C_52C10_Obj *unk48;               /* 0x48 */
    char pad4C[0x18];
    C_52C10_64 *unk64;                /* 0x64 */
    char pad68[0x154];
    C_52C10_99D40 *unk1C0;            /* 0x1C0 */
    char pad1C4[0xD0];
    int unk294;                       /* 0x294 */
    char pad298[0x30];
    int unk2C8;                       /* 0x2C8 */
    char pad2CC[0x8C];
    int unk358;                       /* 0x358 */
    int func_00051BB0();
    void func_00052D20(int *out);
    int func_000533A0();
    void func_000533E0();
    C_52C10 *func_000536D0();
    void func_00052830(int a);
    void func_00031400();
    void func_000342C0();
};

struct C_000536A0 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x280];
    int unk284;                       /* 0x284 */
    int unk288;                       /* 0x288 */
    void func_00030F90(int param);
    C_000536A0 *func_000536A0(int param);
};

C_000536A0 *C_000536A0::func_000536A0(int param)
{
    func_00030F90(param);
    unk284 = 0;
    unk288 = 0;
    vtbl = (void *)&D_00277A84;
    return this;
}

void func_00053920(void) {
    int func_00031640(...);
    func_00031640();
}
