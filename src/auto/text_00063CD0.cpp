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
    void func_001C3D60(int a);
};

struct S_00064A40_64;

struct C_00064A40_3B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    virtual void v30(S_00064A40_64 *a);
};

struct C_00064A40_534 {
    void func_000A84F0();
};

struct S_00064A40_1a8 {
    char pad0[0x95c];
    int unk95c;
};

struct S_00064A40_4e0 {
    char pad0[0x1a8];
    S_00064A40_1a8 *unk1a8;
};

struct S_00064A40_64 {
    char pad0[0x3b4];
    C_00064A40_3B4 *unk3b4;
    char pad3b8[0x4e0 - 0x3b8];
    S_00064A40_4e0 *unk4e0;
    char pad4e4[0x534 - 0x4e4];
    C_00064A40_534 *unk534;
};

struct C_00064A40_1C0 {
    int func_00097700();
    void __stdcall_dummy();
    void func_000988B0(C_00064A40_3B4 *a, C_00064A40_534 *b);
    void func_00098EE0(C_00064A40_3B4 *a, C_00064A40_534 *b);
    void func_000981D0(C_00064A40_3B4 *a, C_00064A40_534 *b, int c);
};

struct C_00064A40_1D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    char pad4[0x60];
    S_00064A40_64 *unk64;
    char pad68[0x1c0 - 0x68];
    C_00064A40_1C0 *unk1c0;
    char pad1c4[0x1f4 - 0x1c4];
    int unk1f4;
    void func_000533E0();
    void func_000321C0();
};

struct C_00064A40 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    char pad4[0x64];
    int unk68;
    char pad6c[0x1d0 - 0x6c];
    C_00064A40_1D0 *unk1d0;
    char pad1d4[0x274 - 0x1d4];
    int unk274;
    int unk278;
    int unk27c;
    char pad280[0x2b0 - 0x280];
    int unk2b0;
    int unk2b4;
    int unk2b8;
    void func_00064A40();
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
        C_00064580_Widget *w = unk13C[idx];
        if (w->unk48 != a2) {
            w->unk4E |= 8;
            w->color.rgb = a2;
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

void C_00064A40::func_00064A40()
{
    unk1d0->func_000533E0();
    unk1d0->func_000321C0();
    unk1d0->v35();
    unk1d0->func_000533E0();
    v29();
    unk274 = 0;
    unk1d0->unk1f4 = 1;
    unk1d0->unk64->unk4e0->unk1a8->unk95c = 1;
    unk27c = -1;
    unk278 = 1;
    unk2b0 = 0;
    unk68 = 1;
    unk2b8 = 0;
    if (unk1d0->unk64->unk3b4)
        unk1d0->unk64->unk3b4->v30(unk1d0->unk64);
    if (unk1d0->unk64->unk534)
        unk1d0->unk64->unk534->func_000A84F0();
    if (unk1d0->unk1c0 && !unk1d0->unk1c0->func_00097700()) {
        unk1d0->unk1c0->func_000988B0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
        unk1d0->unk1c0->func_00098EE0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
        unk1d0->unk1c0->func_000981D0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534, 0);
    }
    D_002F07B8->func_001C3D60(0);
}