/* 4 functions from 0x00152E30 to 0x00153DF0, found by Ghidra. */
#include "common.h"

extern int D_00286CBC;
void func_001E891B(void *p);
int func_00011260(int a, int b);
struct Q4_00152E30 { int x, y, z, w; };
extern Q4_00152E30 D_002A78BC, D_002A789C;
extern int D_002A78C0, D_002A78C4, D_002A78C8, D_002A78A0, D_002A78A4, D_002A78A8;
static __forceinline void set_id_00152E30(int *d)
{
    d[0] = D_002A789C.x; d[1] = D_002A789C.y; d[2] = D_002A789C.z; d[3] = D_002A789C.w;
}
struct C_00152E30 {
    int f0;
    C_00152E30 *func_00152E30(int a0);
    void func_00157600(int a0);
};

struct C_00136300 {
    void func_00136300(void);
};

struct C_00157660 {
    void func_00157660(void);
};

/* FPSPlayer */
struct C_001532E0 {
    void *vtbl;
    char pad4[0x34];
    C_00136300 *unk38;
    C_00136300 *unk3C;
    C_00136300 *unk40;
    C_00136300 *unk44;
    void func_001532E0(void);
};

struct S_Obj_153 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int a);
};

struct S_Slot_153 {
    char pad0[0x60];
    int unk60;
};

struct S_Player_153 {
    char pad0[0x284];
    S_Slot_153 *slots[16];
};

struct S_Global_153 {
    char pad0[0x2a4];
    S_Player_153 *unk2A4;
};

extern S_Global_153 *D_002A8490;

struct S_In_153 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual int v5(int a, int b, int c, int d); };
struct S_G2_153 { char pad[8]; S_In_153 *unk8; };
struct C_00153350 { char pad[0x28]; int unk28; char pad2[0x5c8 - 0x2c]; int arr5C8[32]; void func_00153350(float dt); void func_00152BA0(); };

struct C_00153D30 {
    char pad0[0x24];
    int unk24;
    char pad28[0x584 - 0x28];
    int unk584;
    int unk588;
    int unk58C;
    int unk590;
    int unk594;
    char pad598[0x5A8 - 0x598];
    S_Obj_153 *arr5A8[4];
    S_Obj_153 *arr5B8[4];
    char pad5C8[0x6CC - 0x5C8];
    int unk6CC;
    void func_00153D30(int dt);
    void func_00153350(float dt);
};

C_00152E30 *C_00152E30::func_00152E30(int a0)
{
    int *u = (int *)this;
    int *p;
    int i;
    int j;
    int k;
    func_00157600(1);
    u[0] = (int)&D_00286CBC;
    p = &u[0x68 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x84 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x94 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xa4 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xb4 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xc8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xe8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xf8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x110 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x120 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x130 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x140 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x158 / 4];
    i = 11;
    do {
        p[1] = 0; p[0] = 0; p[-1] = 0; p[2] = 0x3f800000;
        p[5] = 0; p[4] = 0; p[3] = 0; p[6] = 0x3f800000;
        p[9] = 0; p[8] = 0; p[7] = 0; p[10] = 0x3f800000;
        p[13] = 0; p[12] = 0; p[11] = 0; p[14] = 0x3f800000;
        p += 24;
    } while (--i);
    p = &u[0x6dc / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    *(Q4_00152E30 *)&u[0xa4 / 4] = D_002A78BC;
    *(Q4_00152E30 *)&u[0xb4 / 4] = D_002A789C;
    u[0x24 / 4] = 0; u[0x28 / 4] = 0; u[0x2c / 4] = 0;
    u[0x584 / 4] = 0x3e8;
    u[0x30 / 4] = 0;
    u[0x34 / 4] = 0x40b00000;
    u[0x5c / 4] = 0;
    u[0x38 / 4] = 0; u[0x3c / 4] = 0; u[0x40 / 4] = 0; u[0x44 / 4] = 0;
    u[0x48 / 4] = 0; u[0x4c / 4] = 0; u[0x50 / 4] = 0; u[0x60 / 4] = 0;
    u[0x7c / 4] = 0; u[0x78 / 4] = 0; u[0x80 / 4] = 0; u[0x64 / 4] = 0;
    *(Q4_00152E30 *)&u[0x68 / 4] = D_002A789C;
    *(Q4_00152E30 *)&u[0x120 / 4] = D_002A789C;
    *(Q4_00152E30 *)&u[0xe8 / 4] = D_002A789C;
    *(Q4_00152E30 *)&u[0xf8 / 4] = D_002A789C;
    u[0x108 / 4] = 0; u[0x10c / 4] = 0; u[0x54 / 4] = 0;
    u[0x58 / 4] = 0x3dcccccd;
    u[0x57c / 4] = 0; u[0x580 / 4] = 0; u[0x574 / 4] = 0; u[0x578 / 4] = 0;
    u[0x590 / 4] = 0; u[0x594 / 4] = 0;
    for (j = 0; j < 11; j++) {
        u[0x150 / 4 + j * 24] = 0;
        *(Q4_00152E30 *)&u[0x154 / 4 + j * 24] = D_002A789C;
        *(Q4_00152E30 *)&u[0x164 / 4 + j * 24] = D_002A789C;
        *(Q4_00152E30 *)&u[0x174 / 4 + j * 24] = D_002A789C;
        *(Q4_00152E30 *)&u[0x184 / 4 + j * 24] = D_002A789C;
        u[0x194 / 4 + j * 24] = 0;
        u[0x198 / 4 + j * 24] = 0;
        u[0x19c / 4 + j * 24] = 0;
        u[0x1a4 / 4 + j * 24] = 0;
        u[0x1a8 / 4 + j * 24] = 0;
        u[0x1ac / 4 + j * 24] = 0;
    }
    u[0xe0 / 4] = 0; u[0xe4 / 4] = 0; u[0x570 / 4] = 0;
    u[0x598 / 4] = 0; u[0x59c / 4] = 0; u[0x5a0 / 4] = 0; u[0x5a4 / 4] = 0;
    u[0x5c0 / 4] = 0;
    for (k = 0; k < 4; k++) {
        u[0x5a8 / 4 + k] = 0;
    }
    u[0x5b8 / 4] = 0; u[0x5bc / 4] = 0; u[0x588 / 4] = 0; u[0x58c / 4] = 0;
    u[0x6d4 / 4] = 0; u[0x6cc / 4] = 0; u[0x6d0 / 4] = 0; u[0x6d8 / 4] = 0;
    u[0x6c8 / 4] = -1;
    *(Q4_00152E30 *)&u[0x6dc / 4] = D_002A789C;
    u[0x6ec / 4] = 0; u[0x6f0 / 4] = 0; u[0x5c4 / 4] = 0;
    return this;
}

void C_001532E0::func_001532E0(void)
{
    C_00136300 *p = unk38;
    vtbl = (void *)&D_00286CBC;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    p = unk3C;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    p = unk40;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    p = unk44;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
}

void C_00153D30::func_00153D30(int dt)
{
    int idx;
    if (unk588 == 0) {
        unk584 -= dt;
        D_002A8490->unk2A4->slots[unk24]->unk60 = 200;
        if (unk584 <= 0) {
            unk584 = 0;
            unk588 = 1;
            unk58C = 0;
            unk590 = 0;
            unk594 = 0;
            unk6CC = unk6CC + 1;
            idx = func_00011260(0, 1);
            S_Obj_153 *o = arr5B8[idx];
            o->v5(0);
            return;
        }
        idx = func_00011260(0, 3);
        S_Obj_153 *o = arr5A8[idx];
        o->v5(0);
    }
}

