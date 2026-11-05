/* 6 functions from 0x0006E330 to 0x0006ECC0, found by Ghidra. */
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

struct C_001B1980 {
    void func_001B1980();
};

struct C_0006EC60_EC {
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
    char pad4[0x1F0];
    int unk1F4;
    void func_00032A40();
};

struct C_0006E910 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0xBC];
    int unkC0;
    char padC4[0xC];
    C_001B1980 *unkD0;
    C_001B1980 *unkD4;
    char padD8[4];
    C_001B1980 *unkDC;
    char padE0[0xC];
    C_0006EC60_EC *unkEC;
    char padF0[0xC];
    int unkFC;
    char pad100[0x9C];
    int unk19C;
    void func_0006E910();
    void func_0006EC60();
};
