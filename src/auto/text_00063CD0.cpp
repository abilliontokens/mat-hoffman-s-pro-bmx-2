/* 5 functions from 0x00063CD0 to 0x00064BA0, found by Ghidra. */
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

struct C_001C4D50 {
    void func_001C4D50(int a);
};

struct C_001C3D40 {
    void func_001C3D40(int a);
};
extern C_001C3D40 *D_002F07B8;

struct S_00064990_1a8 {
    char pad0[0x95c];
    int unk95c;
};

struct S_00064990_4e0 {
    char pad0[0x1a8];
    S_00064990_1a8 *unk1a8;
};

struct S_00064990_64 {
    char pad0[0x4e0];
    S_00064990_4e0 *unk4e0;
};

struct C_00064990_1D0 {
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
    char pad4[0x60];
    S_00064990_64 *unk64;
    char pad68[0xF0];
    C_001C4D50 *unk158;
    char pad15C[0x98];
    int unk1F4;
    void func_00032A40();
};

/* widget with a 24-bit colour in the low bits of its dword at +0x48 */
struct C_00064580_Widget {
    char pad0[0x48];
    union {
        unsigned int unk48;
        struct {
            unsigned int rgb : 24;
            unsigned int alpha : 8;
        } color;
    };
    char pad4C[2];
    unsigned char unk4E;
    void func_0005E840(int a);
    void func_001D6600();
};

struct C_00064580 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x60];
    int unk64;
    char pad68[0xD4];
    C_00064580_Widget *unk13C[16];
    char pad17C[0x4C];
    int unk1C8;
    int unk1CC;
    C_00064990_1D0 *unk1D0;
    int func_00064580(int idx, int a1, unsigned int a2);
    void func_00064990();
};

int C_00064580::func_00064580(int idx, int a1, unsigned int a2)
{
    if (idx >= 0 && idx < 16) {
        unk13C[idx]->func_0005E840(a1);
        if (unk13C[idx]->unk48 != a2) {
            unk13C[idx]->unk4E |= 8;
            unk13C[idx]->color.rgb = a2;
        }
        unk13C[idx]->func_001D6600();
    }
    return idx + 1;
}

void C_00064580::func_00064990()
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unk1C8 = 0;
    unk1D0->v34();
    unk1D0->func_00032A40();
    v4();
    unk1D0->unk1F4 = 0;
    unk1D0->unk64->unk4e0->unk1a8->unk95c = 0;
    if (unk64 != 3 || unk1CC != 5) {
        unk1D0->unk158->func_001C4D50(1000);
    }
    D_002F07B8->func_001C3D40(0);
}

