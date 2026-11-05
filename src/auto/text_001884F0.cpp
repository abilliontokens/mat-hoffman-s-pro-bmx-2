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

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern int D_00287EE4;
extern int D_00289FA4;
extern int D_00289F70;
extern int D_00289F8C;
extern char D_0028A024[];
extern char D_0028A014[];

struct C_00188EF0 {
    int unk0;
    void func_00157660(void);
    void *func_00188EF0(int flags);
};

struct S_00188920_Obj {
    virtual void destroy(int flags);
};

struct C_00188920 {
    int unk0;
    char pad4[0x20];
    int f24;
    S_00188920_Obj **f28;
    void func_00157660(void);
    void func_00188920(void);
};

struct S_00188980_Model {
    void *vtbl;
    int f4;
    int f8;
    int fc;
};

struct C_00188A40 {
    int func_00188A40(char *name);
};

struct S_00188C20_Obj {
    virtual void v0();
    virtual void v1(int a);
};

struct C_00188C20 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    S_00188C20_Obj **f28;
    int func_00188C20(int a);
};

struct C_00188CB0 {
    int f0;
    int *f4;
    int *f8;
    void **fC;
    void func_00188CB0(void);
    int func_00188D20(int n);
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
    C_001888F0_Obj *p;

    p = (C_001888F0_Obj *)func_001E8A44(0x280);
    if (p != 0) {
        p = p->func_00188250();
    } else {
        p = 0;
    }
    *(C_001888F0_Obj **)&unkC = p;
    (*(C_001888F0_Obj **)&unkC)->v0();
}

void C_00188920::func_00188920(void)
{
    int i;

    unk0 = (int)&D_00289FA4;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            S_00188920_Obj *e = f28[i];
            if (e != 0) {
                e->destroy(1);
                f28[i] = 0;
            }
        }
        func_001E891B(f28);
        f28 = 0;
    }
    func_00157660();
}

void __stdcall func_00188980(int *type, S_00188980_Model **out)
{
    S_00188980_Model *p;

    if (*type == 1) {
        p = (S_00188980_Model *)func_001E8A44(0x10);
        if (p != 0) {
            p->f4 = 0;
            p->vtbl = (void *)&D_00289F70;
            p->f8 = 0;
            p->fc = 0;
        }
    } else if (*type == 2) {
        p = (S_00188980_Model *)func_001E8A44(0x10);
        if (p != 0) {
            p->f4 = 0;
            p->vtbl = (void *)&D_00289F8C;
            p->f8 = 0;
            p->fc = 0;
        }
    } else {
        p = (S_00188980_Model *)func_001E8A44(0x10);
        if (p != 0) {
            p->f4 = 0;
            p->vtbl = (void *)&D_00289F70;
            p->f8 = 0;
            p->fc = 0;
        }
        *type = 1;
    }
    *out = p;
    p->f4 = *type;
}

int C_00188A40::func_00188A40(char *name)
{
    if (memcmp(name, D_0028A024, 9) == 0) {
        return 1;
    }
    return memcmp(name, D_0028A014, 14) == 0 ? 2 : 0;
}

CollisionObjects *CollisionObjects::func_00188A80(int a0)
{
    func_00157600(a0);
    unk24 = 0;
    unk28 = 0;
    vtbl = (void *)&D_0028A034;
    return this;
}

int C_00188C20::func_00188C20(int a)
{
    int i;

    for (i = 0; i < f24; i++) {
        f28[i]->v1(a);
    }
    return 1;
}

void *C_00188EF0::func_00188EF0(int flags)
{
    unk0 = (int)&D_00287EE4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

