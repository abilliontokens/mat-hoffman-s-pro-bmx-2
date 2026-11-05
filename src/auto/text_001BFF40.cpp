/* 23 functions from 0x001BFF40 to 0x001C0F20, found by Ghidra. */
#include "common.h"

extern int D_0028DB04;
extern int D_0028D804;

void func_001E8390(void *p);

struct C_00157600 {
    void func_00157600(int a);
};

struct C_00157660 {
    void func_00157660(void);
};

/* UIWidgetOverlayText */
struct C_001C0110 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    void *unk68;
    int unk6C;
    char pad70[0x170 - 0x70];
    int unk170;
    char pad174[0x180 - 0x174];
    int unk180;
    int unk184;
    char pad188[0x190 - 0x188];
    int unk190;
    int unk194;
    int unk198;
    int unk19C;
    int unk1A0;
    int unk1A4;
    int unk1A8;
    int unk1AC;
    C_001C0110 *func_001C0110(int a1, int a2);
    void func_001C01B0(void);
};

/* same object seen through its virtual slots 28 and 29 */
struct C_001C0670 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    char pad4[0x28];
    int unk2C;
    char pad30[0x10];
    int unk40;
    void func_001C0670(void);
};

/* element of UIWidgetOverlayText's child array */
struct S_001C05F0_Item {
    void func_001B2270(int a);
    void func_001B1980(void);
};

/* UIWidgetOverlayText seen through virtual slots 5 and 7 */
struct C_001C05F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    char pad4[0x28];
    int unk2C;
    char pad30[8];
    int unk38;
    int unk3C;
    int unk40;
    char pad44[0x68 - 0x44];
    S_001C05F0_Item **unk68;
    char pad6C[0x170 - 0x6C];
    int unk170;
    char pad174[0x184 - 0x174];
    int unk184;
    char pad188[0x19C - 0x188];
    int unk19C;
    char pad1A0[4];
    int unk1A4;
    int unk1A8;
    void func_001C05F0(void);
    void func_001C0690(void);
    void func_001C06F0(void);
};

/* UIWidgetMovementControl seen through virtual slots 5 and 7 */
struct C_001C0E80 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    char pad4[0x28];
    int unk2C;
    int unk30;
    int unk34;
    void func_001C0E80(void);
};

struct S_001C0B00_Vec4 {
    float x, y, z, w;
    S_001C0B00_Vec4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_001C0B00_Node {
    void func_00199CF0(S_001C0B00_Vec4 v, float angle);
};

/* UIWidgetStaticUserRotate: slots 28/29 start/stop the rotation */
struct C_001C0A60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    char pad40[0x28];
    S_001C0B00_Node *f68;
    char pad6C[0x20];
    float f8C;
    float f90;
    char pad94[0x10];
    int fA4;
    char padA8[0xC];
    float fB4;
    void func_001C0A60(void);
    void func_001C0AB0(void);
    void func_001C0B00(float dt);
    void func_001C0B70(float dt);
};

struct S_001C04D0_Entry {
    int unk0;
    int unk4;
};

struct S_001C04D0_Table {
    int unk0;
    S_001C04D0_Entry *unk4;
};

struct S_001C04D0_Global {
    char pad0[0x2e8];
    S_001C04D0_Table *unk2E8;
};

extern S_001C04D0_Global *D_002A8490;

extern int D_0028DC94;
extern int D_0028DDB4;

/* UIWidgetMovementGroup */
struct C_001C0EC0 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    int unk68[16];
    C_001C0EC0 *func_001C0EC0(int a1, int a2);
};

/* UIControl: the object a movement widget drives */
struct S_001C0DD0_Ctl {
    void func_001BDE90(int a);
    void func_001BDF00(int a);
    void func_001BDF60(int a);
    void func_001BDFB0(int a);
    void func_001BE0B0(int a);
    void func_001BE1B0(int a);
    void func_001BE220(int a);
};

struct S_001C0DD0_Ent {
    int unk0;
    S_001C0DD0_Ctl *unk4;
};

struct S_001C0DD0_Tab {
    char pad0[0x144];
    S_001C0DD0_Ent **unk144;
};

struct S_001C0DD0_Owner {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(int a, int b, int c, int d);
    char pad4[0x114];
    S_001C0DD0_Tab *unk118;
};

/* UIWidgetMovementControl */
struct C_001C0C50 {
    void *vtbl;
    char pad4[0x20];
    S_001C0DD0_Owner *unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    int unk68;
    int unk6C[16];
    C_001C0C50 *func_001C0C50(int a1, int a2);
    void func_001C0DD0(int a, int b, int c);
};

struct C_001C0BE0 {
    char pad0[0x68];
    S_001C0B00_Node *unk68;
    char pad6C[0x94 - 0x6C];
    float unk94;
    char pad98[0xb4 - 0x98];
    float unkB4;
    void func_001C0BE0(float dt);
};

struct C_001C04D0 {
    char pad0[0x180];
    int unk180;
    void func_001C01E0(int a);
    void func_001C03F0(int a);
    void func_001C04D0(int idx);
};

C_001C0110 *C_001C0110::func_001C0110(int a1, int a2)
{
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    unk24 = a1;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk40 = 0;
    for (i = 0; i < 8; i++) {
        unk44[i] = 0;
    }
    unk64 = 0;
    vtbl = &D_0028DB04;
    unk68 = 0;
    unk6C = 0;
    unk170 = 0;
    unk184 = 0;
    unk19C = 0;
    unk1A0 = 0;
    unk1A4 = 0;
    unk1A8 = 0;
    unk190 = 0;
    unk194 = 0xff;
    unk198 = 0;
    unk180 = 0;
    unk1AC = 0;
    return this;
}

void C_001C0110::func_001C01B0(void)
{
    vtbl = &D_0028DB04;
    if (unk68 != 0) {
        func_001E8390(unk68);
    }
    vtbl = &D_0028D804;
    ((C_00157660 *)this)->func_00157660();
}

void C_001C04D0::func_001C04D0(int idx)
{
    if (unk180 != 0) {
        func_001C03F0(D_002A8490->unk2E8->unk4[idx].unk0);
    } else {
        func_001C01E0(D_002A8490->unk2E8->unk4[idx].unk0);
    }
}

void C_001C05F0::func_001C05F0(void)
{
    int i;

    unk2C = 0;
    if (unk38 == 0 || unk3C == 0) {
        if (unk38 != 0) {
            v7();
        }
        if (unk3C != 0) {
            v5();
        }
    }
    if (unk19C != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk184);
        }
    } else {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B1980();
        }
    }
}

void C_001C0670::func_001C0670(void)
{
    unk40 = 0;
    if (unk2C != 0) {
        v28();
    } else {
        v29();
    }
}

void C_001C05F0::func_001C0690(void)
{
    int i;

    unk40 = 1;
    if (unk1A4 != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk1A8);
        }
    } else {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B1980();
        }
    }
}

void C_001C05F0::func_001C06F0(void)
{
    int i;

    unk2C = 0;
    if (unk19C != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk184);
        }
    }
}

void C_001C0A60::func_001C0A60(void)
{
    f2C = 1;
    if (f30 == 0 || f34 == 0) {
        if (f30 != 0) {
            v7();
        }
        if (f34 != 0) {
            v5();
        }
    }
    fA4 = 0;
    v7();
}

void C_001C0A60::func_001C0AB0(void)
{
    f2C = 0;
    if (f38 == 0 || f3C == 0) {
        if (f38 != 0) {
            v7();
        }
        if (f3C != 0) {
            v5();
        }
    }
    fA4 = 1;
    v5();
}

void C_001C0A60::func_001C0B00(float dt)
{
    if (f68 != 0) {
        f68->func_00199CF0(S_001C0B00_Vec4(1.0f, 0.0f, 0.0f, 1.0f), fB4 * f8C * dt);
    }
}

void C_001C0A60::func_001C0B70(float dt)
{
    if (f68 != 0) {
        f68->func_00199CF0(S_001C0B00_Vec4(0.0f, 1.0f, 0.0f, 1.0f), fB4 * f90 * dt);
    }
}

void C_001C0BE0::func_001C0BE0(float dt)
{
    if (unk68 != 0) {
        unk68->func_00199CF0(S_001C0B00_Vec4(0.0f, 0.0f, 1.0f, 1.0f), unkB4 * unk94 * dt);
    }
}

C_001C0C50 *C_001C0C50::func_001C0C50(int a1, int a2)
{
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    unk24 = (S_001C0DD0_Owner *)a1;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk40 = 0;
    for (i = 0; i < 8; i++) {
        unk44[i] = 0;
    }
    unk64 = 0;
    vtbl = &D_0028DC94;
    unk68 = 0;
    for (i = 0; i < 16; i++) {
        unk6C[i] = 0;
    }
    return this;
}

void C_001C0C50::func_001C0DD0(int a, int b, int c)
{
    S_001C0DD0_Ctl *ctl = unk24->unk118->unk144[b]->unk4;

    if (ctl != 0) {
        int v = unk6C[a];

        switch (v) {
        case -1:
            ctl->func_001BDE90(0);
            break;
        case -2:
            ctl->func_001BDF00(0);
            break;
        case -3:
            ctl->func_001BDFB0(unk68);
            break;
        case -4:
            ctl->func_001BE0B0(unk68);
            break;
        case -5:
            ctl->func_001BE1B0(unk68);
            break;
        case -6:
            ctl->func_001BE220(unk68);
            break;
        default:
            if (v > 0) {
                ctl->func_001BDF60(v);
            }
            break;
        }
        if (v != 0) {
            unk24->v31(v, 1, 0, 0);
        }
    }
}

void C_001C0E80::func_001C0E80(void)
{
    unk2C = 1;
    if (unk30 == 0 || unk34 == 0) {
        if (unk30 != 0) {
            v7();
        }
        if (unk34 != 0) {
            v5();
        }
    }
    v7();
}

C_001C0EC0 *C_001C0EC0::func_001C0EC0(int a1, int a2)
{
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    unk24 = a1;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk40 = 0;
    for (i = 0; i < 8; i++) {
        unk44[i] = 0;
    }
    unk64 = 0;
    vtbl = &D_0028DDB4;
    for (i = 0; i < 16; i++) {
        unk68[i] = 0;
    }
    return this;
}

