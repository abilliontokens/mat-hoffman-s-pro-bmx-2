/* 9 functions from 0x0006C470 to 0x0006D3E0, found by Ghidra. */
#include "common.h"

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_0006D210_Obj {
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
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x1D2];
    int unk1F4;
    void func_00032A40();
};

struct C_0006D1D0 {
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
    virtual void v18(int a);
    char pad4[0xC8];
    int unkCC;
    int unkD0;
    C_0006D210_Obj *unkD4;
    char padD8[4];
    f32 unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    int unkEC;
    void func_0006D1D0();
    void func_0006D210();
    void func_0006D280();
};

void C_0006D1D0::func_0006D1D0() {
    unkCC = 1;
    unkE0 = 0;
    v6();
    unkE8 = 1;
    unkE4 = -1;
    unkEC = 1;
}

void C_0006D1D0::func_0006D210() {
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unkE0 = 0;
    unkCC = 0;
    unkD4->v34();
    unkD4->func_00032A40();
    v4();
    unkD4->unk1F4 = 0;
}

