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

struct S_00188C60_Model {
    void *vtbl;
    int f4;
    int f8;
    int fc;
    S_00188C60_Model() {
        f4 = 0;
        f8 = 0;
        fc = 0;
        vtbl = (void *)&D_00289F80;
    }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
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

struct S_00188E70_Obj {
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
    virtual void v34(int a);
    char pad4[0xC0];
    S_00188E70_Obj *fc4;
};

struct C_00188CB0 {
    int f0;
    int *f4;
    int *f8;
    void **fC;
    void func_00188CB0(void);
    int func_00188D20(int n);
    int func_00188DB0(int idx, int n);
    int func_00188E20(int idx, int value);
    void func_00188E70(void);
};

extern int D_0028A154;

struct S_001CD770 {
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
    S_001CD770 *func_001CD770(void *a, int b);
};

struct S_00188F20_Mid {
    char pad0[0xb4];
    void *fb4;
};

struct S_00188F20_Root {
    char pad0[0x4];
    S_00188F20_Mid *f4;
};

extern S_00188F20_Root *D_002A8490;

struct C_00157600_188F20 {
    void func_00157600(int a0);
};

struct BasicScene {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    char pad28[0x3b0 - 0x28];
    u32 f3b0;
    char pad3b4[0x3c8 - 0x3b4];
    u32 f3c8;
    char pad3cc[0x3f4 - 0x3cc];
    u32 f3f4[40];
    u32 f494;
    char pad498[0x4c0 - 0x498];
    S_001CD770 *f4c0;
    void func_00182B00(void);
    void func_001577A0(void *obj, int b);
    BasicScene *func_00188F20(int flags);
};

extern BasicScene *D_002EFDC8;


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

void __stdcall func_00188C60(int *type, S_00188C60_Model **out)
{
    S_00188C60_Model *p = new S_00188C60_Model;
    *out = p;
    p->f4 = *type;
}

void C_00188CB0::func_00188CB0(void)
{
    int i;

    if (fC != 0) {
        for (i = 0; i < f0; i++) {
            func_001E891B(fC[i]);
        }
        func_001E891B(fC);
        fC = 0;
    }
    if (f4 != 0) {
        func_001E891B(f4);
        f4 = 0;
    }
    if (f8 != 0) {
        func_001E891B(f8);
        f8 = 0;
    }
}

int C_00188CB0::func_00188D20(int n)
{
    int i;

    if (n > 0 && f4 == 0) {
        f0 = n;
        f4 = (int *)func_001E8A44(n * 4);
        f8 = (int *)func_001E8A44(f0 * 4);
        fC = (void **)func_001E8A44(f0 * 4);
        for (i = 0; i < f0; i++) {
            fC[i] = 0;
            f4[i] = 0;
            f8[i] = 0;
        }
        return 1;
    }
    return 0;
}

int C_00188CB0::func_00188DB0(int idx, int n)
{
    int i;

    if (n >= 0 && fC[idx] == 0) {
        f4[idx] = n;
        fC[idx] = func_001E8A44(n * 4);
        for (i = 0; i < n; i++) {
            ((int *)fC[idx])[i] = 0;
        }
        return 1;
    }
    return 0;
}

int C_00188CB0::func_00188E20(int idx, int value)
{
    int k;
    int *arr;

    if (idx >= 0 && idx < f0 && (k = f8[idx]) >= 0 && k < f4[idx] &&
        (arr = (int *)fC[idx]) != 0) {
        arr[k] = value;
        f8[idx]++;
        return 1;
    }
    return 0;
}

void C_00188CB0::func_00188E70(void)
{
    int i;
    int j;

    if (fC != 0) {
        for (i = 0; i < f0; i++) {
            if (fC[i] != 0) {
                for (j = 0; j < f4[i]; j++) {
                    S_00188E70_Obj *obj = ((S_00188E70_Obj **)fC[i])[j];
                    if (obj != 0) {
                        obj->v29();
                        ((S_00188E70_Obj **)fC[i])[j]->fc4->v34(0);
                    }
                }
            }
        }
    }
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

