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

extern void *D_002895E8;
struct C_00188FD0 {
    void *vtbl;
    char pad4[0x120];
    void *unk124;
    char pad128[0x38];
    void *func_00188FD0(unsigned int flags);
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

struct S_001884F0_Obj {
    virtual void v0();
    S_001884F0_Obj *func_001881C0();
};

struct C_001884F0 {
    char pad0[0xC];
    S_001884F0_Obj *fC;
    void func_001884F0(void);
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
    C_001888F0_Obj();
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
};

struct S_00188AB0_Parser {
    int func_00169710(char *name);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
};
struct S_00188AB0_Info {
    char pad0[8];
    char f8[0x108];
    int f110;
    char pad114[0x14C - 0x114];
    unsigned char f14c;
};
struct S_00188AB0_Reader {
    virtual void v0(int *out, void *slot);
    virtual int v1(char *buf);
};
struct S_00188AB0_Obj {
    virtual void v0(S_00188AB0_Parser *parser);
};
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0027C670[];
extern char D_0028A0C0[];
extern char D_002893B4[];
extern char D_0028A0B4[];
extern char D_0028A0A8[];

struct CollisionObjects {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    S_00188AB0_Obj **unk28;
    int func_00188AB0(S_00188AB0_Parser *a0, S_00188AB0_Info *a1, S_00188AB0_Reader *a2);
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
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
};

/* StandardStaticModel */
struct S_00188980_Std : S_00188980_Model {
    S_00188980_Std() {
        f4 = 0;
        vtbl = (void *)&D_00289F70;
        f8 = 0;
        fc = 0;
    }
};

/* PhysicsObjectStaticModel */
struct S_00188980_Phys : S_00188980_Model {
    S_00188980_Phys() {
        f4 = 0;
        vtbl = (void *)&D_00289F8C;
        f8 = 0;
        fc = 0;
    }
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

extern "C" char *strcpy(char *d, const char *s);
extern char D_002764F0[5];
extern int D_002BA160;
struct __declspec(align(16)) M_001887A0 { float m[16]; };
void func_000265C0(M_001887A0 *out, void *a, void *b, void *c, int d, int e);
struct S_001887A0_Data {
    char pad0[4];
    char name[0x104];
    char v108[0x10];
    char v118[0x10];
    char v128[0x10];
    char pad138[0xc];
    char unk144;
    char pad145[3];
    int unk148;
};
struct S_001887A0_Model {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(M_001887A0 *m);
    char pad4[0x64];
    int unk68;
    char unk6C;
    char unk6D;
    void func_00133140(void *a, int b);
};
S_001887A0_Model *func_00133750(int a, char *name, int b);
struct S_001887A0_Scene {
    void func_001577A0(S_001887A0_Model *m, int b);
};
struct S_001887A0_Arg {
    char pad0[0x348];
    int idx;
    char pad34C[0x64];
    S_001887A0_Scene **scenes;
    char pad3B4[0xf8];
    void **unk4AC;
};
struct C_001887A0 {
    void *vtbl;
    int unk4;
    S_001887A0_Model *unk8;
    S_001887A0_Data *unkC;
    int func_001887A0(S_001887A0_Arg *p);
};

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


void C_001884F0::func_001884F0(void)
{
    void *mem = func_001E8A44(0x248);
    S_001884F0_Obj *p = mem ? ((S_001884F0_Obj *)mem)->func_001881C0() : 0;
    fC = p;
    p->v0();
}

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

extern "C" int strcmp(const char *a, const char *b);
int C_001887A0::func_001887A0(S_001887A0_Arg *p) {
    char buf[0x108];
    M_001887A0 mat;
    if (unk4 == 2) {
        func_001E891B(unkC);
        unkC = 0;
        return 0;
    }
    if (strcmp(unkC->name, "none") == 0)
        return 0;
    strcpy(buf, unkC->name);
    unk8 = func_00133750(0, buf, 0xd);
    if (unk8) {
        unk8->unk68 = D_002BA160;
        if (unkC->unk148 > 0)
            unk8->unk6D = (char)unkC->unk148;
        unk8->unk6C = unkC->unk144;
        p->scenes[p->idx]->func_001577A0(unk8, 0);
        func_000265C0(&mat, unkC->v108, unkC->v118, unkC->v128, 0, 1);
        unk8->v31(&mat);
        unk8->v31(&mat);
        unk8->func_00133140(p->unk4AC[p->idx], 1);
    }
    func_001E891B(unkC);
    unkC = 0;
    return 1;
}

void C_00188700::func_001888F0(void)
{
    C_001888F0_Obj *p;
    C_001888F0_Obj *q;

    p = (C_001888F0_Obj *)func_001E8A44(0x280);
    if (p != 0) {
        q = p->func_00188250();
    } else {
        q = 0;
    }
    unkC = (int)q;
    q->v0();
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
    if (*type == 1) {
        *out = new S_00188980_Std;
    } else if (*type == 2) {
        *out = new S_00188980_Phys;
    } else {
        *out = new S_00188980_Std;
        *type = 1;
    }
    (*out)->f4 = *type;
}

extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)
int C_00188A40::func_00188A40(char *name)
{
    if (strcmp(name, "Standard") == 0) {
        return 1;
    }
    return strcmp(name, "PhysicsObject") == 0 ? 2 : 0;
}
CollisionObjects *CollisionObjects::func_00188A80(int a0)
{
    func_00157600(a0);
    unk24 = 0;
    unk28 = 0;
    vtbl = (void *)&D_0028A034;
    return this;
}

int CollisionObjects::func_00188AB0(S_00188AB0_Parser *a0, S_00188AB0_Info *a1, S_00188AB0_Reader *a2)
{
    char buf[0x104];
    char buf2[0x104];
    int ret;
    int i;

    unk24 = a1->f110;
    if (a1->f110 == 0) {
        return 0;
    }
    unk28 = (S_00188AB0_Obj **)func_001E8A44(unk24 * 4);
    for (i = 0; i < unk24; i++) {
        if (a1->f14c & 1) {
            if (a1->f14c & 4) {
                func_001ADCC0(buf, 0x104, D_0027C670, i + 1);
            } else {
                func_001ADCC0(buf, 0x104, D_0028A0C0, a1->f8, i + 1);
            }
        } else {
            if (a1->f14c & 4) {
                func_001ADCC0(buf, 0x104, D_002893B4, i + 1);
            } else {
                func_001ADCC0(buf, 0x104, D_0028A0B4, a1->f8, i + 1);
            }
        }
        if (a0->func_00169710(buf) != 0) {
            a0->func_00168BE0(D_0028A0A8, D_0028A024, buf2, -1);
            ret = a2->v1(buf2);
            a2->v0(&ret, &unk28[i]);
            unk28[i]->v0(a0);
        }
    }
    return 1;
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

BasicScene *BasicScene::func_00188F20(int flags)
{
    S_001CD770 *obj;
    u32 *p;
    int n;

    ((C_00157600_188F20 *)this)->func_00157600(flags);
    vtbl = &D_0028A154;
    f24 = 1;
    func_00182B00();
    obj = (S_001CD770 *)func_001E8A44(0x4c);
    if (obj != 0) {
        obj = obj->func_001CD770(D_002A8490->f4->fb4, 1);
    } else {
        obj = 0;
    }
    f4c0 = obj;
    if (obj != 0) {
        obj->v10();
    }
    func_001577A0(f4c0, 2);
    p = &f3f4[12];
    n = 12;
    do {
        p[-12] = 0;
        p[0] = 0;
        p[12] = 0;
        p++;
        n--;
    } while (n != 0);
    f494 = 0;
    f3c8 = 0;
    f3b0 = 0;
    D_002EFDC8 = this;
    return this;
}

void *C_00188FD0::func_00188FD0(unsigned int flags)
{
    if (flags & 2) {
        int *base = (int *)this - 1;
        int i = *base;
        C_00188FD0 *p = this + i;
        while (--i >= 0) {
            p--;
            p->vtbl = &D_002895E8;
            if (p->unk124) func_001E891B(p->unk124);
        }
        if (flags & 1) func_001E891B(base);
        return base;
    }
    vtbl = &D_002895E8;
    if (unk124) func_001E891B(unk124);
    if (flags & 1) func_001E891B(this);
    return this;
}

