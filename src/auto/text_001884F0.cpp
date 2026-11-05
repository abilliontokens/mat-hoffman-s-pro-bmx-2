/* 21 functions from 0x001884F0 to 0x00189060, found by Ghidra. */
#include "common.h"
struct C_00188700 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_00188700* func_00188700(void);
    void func_00188720(void);
    void func_00188750(void);
    void func_001888F0(void);
};

extern int D_00289F80;
extern int D_00289F54;
extern int D_0028A034;
void *func_001E8A44(int size);
void func_001E891B(void *);

struct C_00188VT {
    virtual void v0();
    virtual void v1();
};

struct C_00188750_Obj : C_00188VT {
    char pad4[0x140];
    int unk144;
    int unk148;
    char unk14C;
    void func_00187F60();
};

struct C_00188VT2 {
    virtual int v0();
};

struct C_001888F0_Obj : C_00188VT {
    C_001888F0_Obj *func_00188250();
};

struct CollisionObjects {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    void *unk28;
    CollisionObjects *func_00188A80(int a0);
    void func_00157600(int a0);
};


C_00188700* C_00188700::func_00188700(void) {
    extern int D_00289F80;
    unk0 = (int)&D_00289F80;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    return this;
}

void C_00188700::func_00188720(void)
{
    unk0 = (int)&D_00289F80;
    if (unkC != 0) {
        func_001E891B((void *)unkC);
        unkC = 0;
    }
}

void C_00188700::func_00188750(void)
{
    C_00188750_Obj *p;
    C_00188750_Obj *q;

    p = (C_00188750_Obj *)func_001E8A44(0x150);
    if (p != 0) {
        p->func_00187F60();
        *(void **)p = (void *)&D_00289F54;
        p->unk144 = 0;
        p->unk148 = 0;
        p->unk14C = 0;
        q = p;
    } else {
        q = 0;
    }
    unkC = (int)q;
    q->v1();
}

void C_00188700::func_001888F0(void)
{
    C_001888F0_Obj *p = (C_001888F0_Obj *)func_001E8A44(0x280);
    p = p ? p->func_00188250() : 0;
    unkC = (int)p;
    ((C_001888F0_Obj *)unkC)->v0();
}

CollisionObjects *CollisionObjects::func_00188A80(int a0)
{
    func_00157600(a0);
    unk24 = 0;
    unk28 = 0;
    vtbl = (void *)&D_0028A034;
    return this;
}

