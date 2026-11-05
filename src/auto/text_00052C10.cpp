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
    char pad04[0x270];
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

extern float D_00275544;

struct C_52C10_9FD60 {
    void func_0009FD60(float a, float b, float c, float d);
};

struct C_52C10_44 {
    char pad0[0x54];
    C_52C10_9FD60 *f54;
};

struct C_52C10_1C4 {
    char pad0[0xC0];
    unsigned char fC0;
    void func_00196350(float v);
    void func_00196C00(int v);
};

struct C_52C10 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x20];
    void *unk24;                      /* 0x24 */
    C_52C10_Obj *unk28;               /* 0x28 */
    char pad2C[0x18];
    C_52C10_44 *unk44;                /* 0x44 */
    C_52C10_Obj *unk48;               /* 0x48 */
    char pad4C[0x18];
    C_52C10_64 *unk64;                /* 0x64 */
    char pad68[0x158];
    C_52C10_99D40 *unk1C0;            /* 0x1C0 */
    C_52C10_1C4 *unk1C4;              /* 0x1C4 */
    char pad1C8[0xCC];
    int unk294;                       /* 0x294 */
    char pad298[0x20];
    float f2B8[4];                    /* 0x2B8 */
    int unk2C8;                       /* 0x2C8 */
    char pad2CC[0xC];
    float f2D8[4];                    /* 0x2D8 */
    float f2E8[4];                    /* 0x2E8 */
    float f2F8[4];                    /* 0x2F8 */
    float f308[4];                    /* 0x308 */
    char pad318[0x40];
    int unk358;                       /* 0x358 */
    int func_00052C10(int param);
    void func_00052AE0(float v);
    int func_00051BB0();
    void func_00052D20(int *out);
    int func_000533A0();
    void func_000533E0();
    C_52C10 *func_000536D0();
    void func_00052830(int a);
    void func_00031400();
    void func_000342C0();
    int GetActive() { return unk358; }
};

struct C_535C0_44 { void func_0002F8A0(); };
struct C_535C0_1C0 {
    void func_000988B0(int a, int b);
    void func_00098EE0(int a, int b);
    void func_000981D0(int a, int b, int c);
};
struct C_535C0_64 {
    char pad0[0x3B4];
    int f3B4;
    char pad3B8[0x17C];
    int f534;
};
struct C_535C0_16C {
    char pad0[0x274];
    int f274;
};
struct C_535C0 {
    char pad0[0x44];
    C_535C0_44 *unk44;
    char pad48[0x1C];
    C_535C0_64 *unk64;
    char pad68[0x104];
    C_535C0_16C *unk16C;
    char pad170[0x50];
    C_535C0_1C0 *unk1C0;
    char pad1C4[4];
    int unk1C8;
    char pad1CC[0xC0];
    int unk28C;
    char pad290[0x28];
    int unk2B8, unk2BC, unk2C0, unk2C4, unk2C8, unk2CC, unk2D0, unk2D4;
    void func_000533E0();
    void func_00051A00();
    void func_00034090();
    int func_000535C0();
};

struct C_53460_V4 { float x, y, z, w; };
struct C_53460_54 {
    void func_0009FE70(int a);
    void func_0009FD60(float a, float b, float c, float d);
};
struct C_53460_44 {
    char pad0[0x54];
    C_53460_54 *f54;
    void func_0002F6C0();
};
struct C_53460 {
    char pad0[0x44];
    C_53460_44 *unk44;
    char pad48[0x1C];
    C_535C0_64 *unk64;
    char pad68[0x158];
    C_535C0_1C0 *unk1C0;
    void *unk1C4;
    int unk1C8;
    char pad1CC[0xFC];
    int unk2C8;
    char pad2CC[4];
    int unk2D0;
    char pad2D4[4];
    C_53460_V4 m2D8[4];
    C_53460_V4 m318[4];
    int func_00053460();
    int func_00052C10(int param);
    void func_000518A0();
};

struct C_000536A0 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x280];
    int unk284;                       /* 0x284 */
    int unk288;                       /* 0x288 */
    void func_00030F90(int param);
    C_000536A0 *func_000536A0(int param);
};

int C_52C10::func_00052C10(int param)
{
    int i;
    int start;

    if (param != 0) {
        unk2C8 = 0;
    } else if (++unk2C8 >= 4) {
        unk2C8 = 0;
    }
    i = unk2C8;
    start = i;
    if (f2B8[i] == D_00275544) {
        do {
            unk2C8 = i + 1;
            if (unk2C8 >= 4) {
                unk2C8 = 0;
            }
            i = unk2C8;
            if (i == start) {
                return 0;
            }
        } while (f2B8[unk2C8] == D_00275544);
    }
    unk44->f54->func_0009FD60(f2D8[unk2C8], f2E8[unk2C8], f2F8[unk2C8], f308[unk2C8]);
    if (unk1C4 != 0) {
        unk1C4->fC0 &= ~4;
        unk1C4->func_00196350(f2B8[unk2C8]);
        unk1C4->func_00196C00(0);
    }
    func_00052AE0(f2B8[unk2C8]);
    return 1;
}

void C_52C10::func_00052D20(int *out)
{
    if (func_00051BB0() == 0) {
        *out = 0;
        return;
    }
    if (((C_52C10_2E0 *)D_002A8490->f2E0)->f2C0->func_0005C6B0(unk2C8) == 0) {
        *out = 0;
        return;
    }
    *out = (unk2C8 << 0x11) + unk294;
}

int C_52C10::func_000533A0(void)
{
    int arg;

    if (unk358 == 0)
        return 1;
    if (D_002A8490->f274 == 0) {
        arg = 1;
    } else if (unk358 != 0) {
        arg = 0;
    } else {
        return 1;
    }
    func_00052830(arg);
    func_00031400();
    return 1;
}

void C_52C10::func_000533E0(void)
{
    if (unk48 != 0 && unk358 != 0) {
        D_002A8490->v15(unk24, 0, 0, 0);
        unk48->unk74->func_00030210();
        unk48->v4();
        unk28->v4();
        unk358 = 0;
        D_002EFDB8->f30 = 1;
        func_00052830(0);
        unk64->unk558->v4();
    }
}

C_000536A0 *C_000536A0::func_000536A0(int param)
{
    func_00030F90(param);
    unk284 = 0;
    unk288 = 0;
    vtbl = (void *)&D_00277A84;
    return this;
}

C_52C10 *C_52C10::func_000536D0(void)
{
    func_000342C0();
    if (unk1C0 != 0)
        unk1C0->func_00099D40(-1);
    return this;
}

void func_00053920(void) {
    int func_00031640(...);
    func_00031640();
}
