/* 9 functions from 0x0006C470 to 0x0006D3E0, found by Ghidra. */
#include "common.h"

struct Sprite_6D {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};

struct C_0006D100 {
    char pad0[0x6C];
    Sprite_6D *unk6C;
    Sprite_6D *unk70;
    Sprite_6D *arr74[2];
    Sprite_6D *arr7C[5];
    Sprite_6D *arr90[5];
    Sprite_6D *arrA4[4];
    Sprite_6D *unkB4;
    char padB8[0x4];
    Sprite_6D *unkBC;
    Sprite_6D *unkC0;
    char padC4[0xC];
    int unkD0;
    char padD4[8];
    float unkDC;
    Sprite_6D *unkE0;
    int func_0006D100();
};
extern float D_00275544;

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
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    void func_00032720();
    void func_00032740();
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
    f32 unkD8;
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

void C_0006D1D0::func_0006D280() {
    unkD0 = 0;
    unkCC = 1;
    v6();
    unkD4->v35();
    v18(0);
    unkD4->unk21 &= 0xfb;
    unkD4->unk1F4 = 1;
    unkE8 = 1;
    unkEC = 1;
    unkE4 = -1;
    unkDC = 1.5f;
}

