/* 5 functions from 0x000779C0 to 0x00078970, found by Ghidra. */
#include "common.h"

struct C_000788D0_Obj {
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
};

struct C_000788D0_Sub {
    int func_00092A50(int *out);
};

struct C_000788D0 {
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
    char pad4[0x9C];
    int unkA0;
    int unkA4;
    char padA8[0x10];
    int unkB8;
    char padBC[0xC];
    C_000788D0_Sub *unkC8;
    int unkCC;
    char padD0[4];
    int unkD4;
    C_000788D0_Obj *unkD8;
    int unkDC;
    char padE0[4];
    int unkE4;
    int unkE8;
    int unkEC;
    char padF0[4];
    int unkF4;
    void func_000788D0();
};

void C_000788D0::func_000788D0()
{
    unkF4 = 1;
    v6();
    unkD8->v35();
    v18(0);
    unkD8->v35();
    unkD8->unk21 &= 0xfb;
    unkD8->unk1F4 = 1;
    unkB8 = 1;
    unkA4 = 0;
    unkA0 = 0;
    unkD4 = 0;
    unkDC = 0;
    unkE4 = 0;
    unkE8 = 0;
    unkEC = 0;
    unkC8->func_00092A50(&unkCC);
}
