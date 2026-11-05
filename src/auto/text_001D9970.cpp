/* 7 functions from 0x001D9970 to 0x001DA500, found by Ghidra. */
#include "common.h"

struct WaterDisplacement {
    void *vtbl;
    char pad4[0x38];
    int unk3C;
    int unk40;
    char pad44[4];
    int unk48;
    int unk4C;
    char pad50[0x74];
    WaterDisplacement *func_001CAF20();
};

extern int D_0028F8F4;

struct VCall_1D9970 {
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
};

struct C_00149480_1D9970 {
    void func_00149480();
};

extern C_00149480_1D9970 *D_002F0630;

struct XboxWaterDisplacement {
    WaterDisplacement base;
    char padC4[0x10];
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    int unkEC;
    char padF0[0x10];
    int unk100;
    char pad104[0xB4];
    int *unk1B8;
    char pad1BC[0x50];
    int unk20C;
    char pad210[4];
    int unk214;
    int unk218[3];
    int unk224[3];
    int unk230[0x96];
    int unk488[6];
    void *unk4A0;
    XboxWaterDisplacement *func_001DA0E0();
    void func_001D9E60(void *a1, void *a2);
    int func_001D9820(void *dest, char *name, int size);
    int func_00182020(int a0, int a1);
};

extern char D_0028F8C0[];
extern char D_0028F8B0[];
extern char D_0028F8A0[];
extern char D_0028F88C[];
extern char D_0028F878[];

struct C_001DA4C0_1D9970 {
    char pad0[0x4C];
    XboxWaterDisplacement **unk4C;
    void func_001DA4C0(int a1);
};

void XboxWaterDisplacement::func_001D9E60(void *a1, void *a2)
{
    char *p = (char *)this;
    func_001D9820(p + 0x228, D_0028F8C0, 0x20);
    func_001D9820(p + 0x258, D_0028F8B0, 0x20);
    func_001D9820(p + 0x240, D_0028F8A0, 0x20);
    func_001D9820(a1, D_0028F88C, 0x20);
    func_001D9820(a2, D_0028F878, 0x20);
}

XboxWaterDisplacement *XboxWaterDisplacement::func_001DA0E0()
{
    int i;
    base.func_001CAF20();
    base.vtbl = (void *)&D_0028F8F4;
    base.unk48 = 0;
    base.unk3C = 0;
    base.unk40 = 0;
    unkD4 = -1;
    unkD8 = 0;
    unkE0 = unkE4 = unkE8 = 0;
    unkEC = 0;
    unk100 = 0;
    base.unk4C = 0;
    unkDC = 0;
    unk20C = 0;
    unk214 = 0;
    for (i = 0; i < 3; i++) {
        unk218[i] = 0;
        unk224[i] = 0;
    }
    for (i = 0; i < 0x96; i++)
        unk230[i] = 0;
    for (i = 0; i < 6; i++)
        unk488[i] = 0;
    return this;
}

void C_001DA4C0_1D9970::func_001DA4C0(int a1)
{
    XboxWaterDisplacement **list = unk4C;
    int i;
    for (i = 0; list[i] != 0; i++) {
        XboxWaterDisplacement *p = list[i];
        p->func_00182020(p->unk1B8[0], a1);
        ((VCall_1D9970 *)p)->v16();
    }
    D_002F0630->func_00149480();
}
