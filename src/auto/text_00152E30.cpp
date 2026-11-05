/* 4 functions from 0x00152E30 to 0x00153DF0, found by Ghidra. */
#include "common.h"

extern int D_00286CBC;
void func_001E891B(void *p);
int func_00011260(int a, int b);

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
    virtual void v5(int a);
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
};

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
    if (unk588 == 0) {
        unk584 -= dt;
        D_002A8490->unk2A4->slots[unk24]->unk60 = 200;
        if (unk584 <= 0) {
            unk584 = 0;
            unk588 = 1;
            unk58C = 0;
            unk590 = 0;
            unk594 = 0;
            unk6CC++;
            arr5B8[func_00011260(0, 1)]->v5(0);
        } else {
            arr5A8[func_00011260(0, 3)]->v5(0);
        }
    }
}

