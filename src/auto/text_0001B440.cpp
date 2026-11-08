/* 22 functions from 0x0001B440 to 0x0001C2E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0001C280 {
    undefined4 func_0001C280(int param_1);
};

extern struct S_002A8490_Root {
    char pad0[0x124];
    int unk124;
} *D_002A8490;

int func_00011260(int lo, int hi);
void func_001E891B(void *p);

struct S_0001C290_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0001C290 {
    char pad0[0x18];
    int f18;
    S_0001C290_Item **f1c;
    void func_0001C290(void);
};

struct S_0001B790_Virt {
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
    virtual void v12(float t);
};

struct S_0001B790_Obj {
    int f0;
    int f4;
    char pad8[0x50];
    S_0001B790_Virt *f58;
};

struct S_0001B790_List {
    char pad0[0x24];
    int f24;
    S_0001B790_Obj **f28;
};

struct C_0001B790 {
    char pad0[0x24];
    float f24;
    float f28;
    S_0001B790_List *f2c;
    int func_0001B790(float dt);
    void func_0001B440(S_0001B790_Obj *obj, int r);
    int func_00157A00(float dt);
    void func_0001BE50(void);
    void func_0001B8A0(S_0001B790_Obj *obj);
};

struct S_0001B910_Node;
struct S_0001B910_Anim;

struct S_0001BAC0_Obj {
    char pad0[0x64];
    int *f64;
    char pad68[8];
    int *f70;
    char pad74[4];
    int *f78;
    char pad7C[8];
    int f84;
    int f88;
    int f8C;
    int f90;
    int *f94;
    char pad98[4];
    int f9C;
    char padA0[0x104];
    S_0001B910_Anim *f1A4;
    int func_001B5750(int slot);
    S_0001B910_Node *func_001B56F0(void);
};

struct S_0001BAC0_List {
    char pad0[0x24];
    int f24;
    S_0001BAC0_Obj **f28;
};

struct C_0001BAC0 {
    char pad0[0x2c];
    S_0001BAC0_List *f2c;
    int func_0001B3C0(int id);
    void func_0001BAC0(int idx, int slot);
    void func_0001BB00(int idx, int slot, int flag);
    void func_0001BC00(int idx, int slot);
    void func_0001BC50(int id, int slot, int flag);
    void func_0001BD60(int id, int slot);
};

struct S_0001C1E0_Aux {
    char pad0[0x10];
    int f10;
};

struct S_0001BE90_Virt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(int a);
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45();
    virtual void v46(int a, int b);
};

struct S_0001B910_Node;
struct S_0001B910_Anim;
struct S_0001B910_Child;

struct S_0001C1E0_Slot {
    char pad0[4];
    int f4;
    char pad8[0x3c];
    int f44;
    int f48;
    int f4C;
    S_0001B910_Child **f50;
    char pad54[4];
    S_0001BE90_Virt *f58;
    int f5C;
    int f60;
    char pad64[0xc];
    int *f70;
    int *f74;
    int *f78;
    int f7C;
    int f80;
    int f84;
    int f88;
    int f8C;
    int f90;
    char pad94[8];
    int f9C;
    char padA0[0x104];
    S_0001B910_Anim *f1A4;
    int func_001B5750(int a);
    S_0001B910_Node *func_001B56F0(void);
};

struct S_0001C1E0_List {
    char pad0[0x24];
    int f24;
    S_0001C1E0_Slot **f28;
};

struct C_0001C1E0 {
    char pad0[0x2c];
    S_0001C1E0_List *f2c;
    int func_0001B3C0(int a);
    void func_0001BDB0(int idx);
    int func_0001BDF0(int a, int b);
    int func_0001C1E0(int idx, int b, int c, int d);
    int func_0001C200(int a, int b, int c, int d);
    void func_0001C240(void);
    int func_0001BE90(S_0001C1E0_Slot *obj, int b, int c, int d);
};

/* objects with a virtual base class that has virtual slots (slot 5 at +0x14, slot 7 at +0x1c) */
struct VBase_0001B820 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct VDerived_0001B820 : virtual VBase_0001B820 {
};

struct S_0001B820_Elem {
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
};

struct S_0001B820_Entry {
    int f0;
    S_0001B820_Elem *elem;
    int f8;
    int fC;
};

struct S_0001B820_List {
    char pad0[0x24];
    int f24;
    S_0001B820_Entry *f28;
};

struct S_0001B820_Owner {
    char pad0[0x54];
    S_0001B820_List *f54;
    char pad58[0x14c];
    VDerived_0001B820 *f1a4;
};


struct S_0001B910_Node {
    char pad0[0x38];
    int f38;
};

struct S_0001B910_Flags {
    char pad0[0x24];
    unsigned char f24;
    char pad25[0x38 - 0x25];
    float f38;
    float f3c;
    int func_001628A0(float t);
};

struct S_0001BE90_Ctx2 {
    int pad0;
    int f4;
};

struct S_0001BE90_Ctx1 {
    char pad0[0x18c];
    S_0001BE90_Ctx2 *f18c;
};

extern float D_00275BC0;
#include <string.h>

struct V4_0001B440 { float x, y, z, w; };

struct S_0001B910_Anim {
    int pad0;
    S_0001BE90_Ctx1 *f4;
    int pad8[2];
    int f10;
    void func_00132D70(void);
    void func_00132CC0(int a, int b, int c);
    int pad14;
    S_0001B910_Flags *f18;
    char pad1C[0x18];
    int f34;
    void func_00164820(S_0001B910_Node *node);
    void func_00166C80(S_0001B910_Node *node, int a);
    void func_001670C0(float t, int a, int b);
    void func_00132D20(void);
    char pad38[0x220 - 0x38];
    V4_0001B440 f220;
};

struct S_0001B910_Child2 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(V4_0001B440 v);
};

struct S_0001B910_Child {
    virtual void v0();
    char pad4[0x108 - 4];
    float f108;
    int f10C;
    S_0001B910_Child2 *f110;
};

struct C_0001B910 {
    char pad0[0x44];
    int f44;
    int f48;
    int f4C;
    S_0001B910_Child **f50;
    char pad54[0xC];
    int f60;
    int *f64;
    char pad68[4];
    int **f6C;
    int *f70;
    char pad74[4];
    int *f78;
    char pad7C[8];
    int f84;
    int f88;
    int f8C;
    int f90;
    int *f94;
    int f98;
    int f9C;
    char padA0[0x104];
    S_0001B910_Anim *f1A4;
    S_0001B910_Node *func_001B56F0(void);
    int func_001B5720(void);
};

/* same layouts as C_0001B910 / S_0001B910_Anim / S_0001B910_Flags, but the
   timer fields (0x9c, anim+0x34, flags+0x38/0x3c) are floats here */
struct S_0001B440_Flags {
    char pad0[0x24];
    unsigned char f24;
    char pad25[0x38 - 0x25];
    float f38;
    float f3c;
    int func_001628A0(float t);
};

struct S_0001B440_Anim {
    int pad0;
    S_0001BE90_Ctx1 *f4;
    int pad8[2];
    int f10;
    void func_00132D70(void);
    void func_00132CC0(int a, int b, int c);
    int pad14;
    S_0001B440_Flags *f18;
    char pad1C[0x18];
    float f34;
    void func_00164820(S_0001B910_Node *node);
    void func_00166C80(S_0001B910_Node *node, int a);
    void func_001670C0(float t, int a, int b);
    void func_00132D20(void);
    char pad38[0x220 - 0x38];
    V4_0001B440 f220;
};

struct C_0001B440 {
    char pad0[0x44];
    int f44;
    int f48;
    int f4C;
    S_0001B910_Child **f50;
    char pad54[0xC];
    int f60;
    int *f64;
    char pad68[4];
    int **f6C;
    int *f70;
    char pad74[4];
    int *f78;
    char pad7C[8];
    int f84;
    int f88;
    int f8C;
    int f90;
    int *f94;
    int f98;
    float f9C;
    char padA0[0x104];
    S_0001B440_Anim *f1A4;
    S_0001B910_Node *func_001B56F0(void);
    int func_001B5720(void);
};

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_0001B790::func_0001B440(S_0001B790_Obj *obj, int r)
{
    C_0001B440 *p = (C_0001B440 *)obj;
    S_0001B440_Anim *anim = p->f1A4;
    int flag = 0;
    int k;

    if (anim->f18 != 0) {
        if (anim->f18->f38 - p->f9C < anim->f18->f3c)
            flag = 1;
        if (p->f8C == p->f64[p->f84] - 1 && p->f70[p->f84] == 0)
            flag = 0;
    }
    if (p->f88 == -1) {
        int i = p->f84;
        p->f88 = i;
        if (p->f78[i] == 0) {
            int j = i;
            while (p->f78[j] == 0) {
                if (++j >= *(volatile int *)&p->f60) {
                    j = 0;
                    if (j == i) goto Lbc;
                }
            }
            if (p->f78[j] != 1) goto Lbc;
            p->f88 = j;
        }
    Lbc:
        *(volatile int *)&p->f90 = -1;
        if (p->f78[p->f88] == 1) {
            int *cnt = p->f64 + i;
            for (;;) {
                if (++p->f90 < *cnt) continue;
                if (p->f70[p->f88] == 0) {
                    p->f78[p->f88] = 0;
                    p->f90--;
                    break;
                }
                p->f90 = 0;
                if (p->f6C[p->f88][p->f90] == 100) break;
                if (r >= p->f6C[p->f88][p->f90]) continue;
                break;
            }
        }
        *(volatile int *)&p->f88 = -1;
        if ((*(int * volatile *)&p->f78)[*(volatile int *)&p->f88] == 1) {
            p->f98 = (p->func_001B5720() != (int)p->func_001B56F0());
        }
    }
    *(volatile int *)&p->f90 = (*(volatile int *)&p->f88 = -1);
    if (*(unsigned char *)(*(int *)(*(int *)anim + 4) + (int)anim + 0x21) & 1) {
        if (anim->f10 != 0 || (flag != 0 && p->f98 != 0)) {
            int slot = *(volatile int *)&p->f88;
            if (p->f78[slot] == 1) {
                p->f84 = slot;
                p->f8C = *(volatile int *)&p->f90;
                *(volatile int *)&p->f88 = -1;
                p->f9C = 0;
                if (p->f98 != 0 && p->f94[*(volatile int *)&p->f84] != 0)
                    anim->func_00166C80(p->func_001B56F0(), 0);
                else
                    anim->func_00164820(p->func_001B56F0());
            }
        }
    }
    if ((*(unsigned char *)(*(int *)(*(int *)anim + 4) + (int)anim + 0x21) & 1) && anim->f10 == 0) {
        int e = anim->f18->func_001628A0(anim->f34 + this->f24);
        int edi = (e != 0 && (anim->f18->f24 & 1));
        p->f9C += this->f24;
        anim->func_001670C0(this->f24, 0, 0);
        if (edi) {
            if (anim->f4->f18c->f4 != p->f44) {
                anim->func_00132D70();
                anim->func_00132CC0(p->f44, p->f48, 2);
            }
        } else {
            anim->func_00132D20();
        }
    }
    for (k = 0; k < p->f4C; k++) {
        S_0001B910_Child *c = p->f50[k];
        int f10C = c->f10C;
        if (c->f108 < anim->f34 || anim->f10 != 0) {
            if (f10C == 0) {
                c->f110->v20(anim->f220);
                p->f50[k]->v0();
                p->f50[k]->f10C = 1;
            }
        }
    }
}
int C_0001B790::func_0001B790(float dt)
{
    int i;
    int rnd;

    if (D_002A8490->unk124 != 0) {
        return 1;
    }
    rnd = func_00011260(0, 100);
    f24 = dt * f28;
    for (i = 0; i < f2c->f24; i++) {
        S_0001B790_Obj *obj = f2c->f28[i];
        if (obj->f4 == 1) {
            func_0001B440(obj, rnd);
        } else if (obj->f4 == 2) {
            obj->f58->v12(f24);
        }
    }
    return func_00157A00(dt);
}

int __stdcall func_0001B820(S_0001B820_Owner *owner)
{
    int i;

    if (owner != 0) {
        owner->f1a4->v5();
        if (owner->f54 != 0) {
            for (i = 0; i < owner->f54->f24; i++) {
                S_0001B820_Elem *e = owner->f54->f28[i].elem;
                if (e != 0) {
                    e->v33();
                    owner->f54->f28[i].elem->v32();
                }
            }
        }
        return 1;
    }
    return 0;
}

int __stdcall func_0001B8A0(S_0001B820_Owner *owner)
{
    int i;

    if (owner != 0) {
        owner->f1a4->v7();
        if (owner->f54 != 0) {
            for (i = 0; i < owner->f54->f24; i++) {
                S_0001B820_Elem *e = owner->f54->f28[i].elem;
                if (e != 0) {
                    e->v31();
                }
            }
        }
        return 1;
    }
    return 0;
}

int __stdcall func_0001B900(int param_1)
{
  return *(int *)(param_1 + 0x60) + -1;
}

void __stdcall func_0001B910(C_0001B910 *p)
{
    int i;

    p->f9C = p->func_001B56F0()->f38;
    p->f1A4->func_00164820(p->func_001B56F0());
    p->f1A4->f34 = p->func_001B56F0()->f38;
    p->f1A4->func_001670C0(0, 0, 0);
    if ((p->f1A4->f18->f24 & 1) == 0) {
        p->f1A4->f10 = 1;
    }
    p->f1A4->func_00132D20();
    if (p->f70[p->f84] == 0) {
        for (i = 0; i < p->f60; i++) {
            p->f78[i] = 0;
        }
    }
    for (i = 0; i < p->f4C; i++) {
        p->f50[i]->f10C = 1;
    }
}

void __stdcall func_0001B9E0(C_0001B910 *p, int slot, int flag)
{
    S_0001B910_Anim *anim = p->f1A4;

    p->f78[slot] = 1;
    p->f88 = -1;
    p->f90 = -1;
    if (flag != 0 || anim->f10 != 0) {
        anim->f10 = 1;
        p->f8C = 0;
        p->f84 = slot;
        if (p->f94[slot] != 0) {
            anim->func_00166C80(p->func_001B56F0(), 0);
        } else {
            anim->func_00164820(p->func_001B56F0());
        }
        anim->f34 = 0;
        p->f9C = 0;
        anim->func_001670C0(0, 0, 0);
        anim->func_00132D20();
        if (p->f70[p->f84] == 0 && p->f8C == p->f64[p->f84] - 1) {
            p->f78[p->f84] = 0;
        }
    }
}

void C_0001BAC0::func_0001BAC0(int idx, int slot)
{
    S_0001BAC0_Obj *obj;

    if (f2c == 0 || idx >= f2c->f24 || idx < 0) {
        return;
    }
    obj = f2c->f28[idx];
    obj->f78[slot] = 0;
    obj->f88 = -1;
    obj->f90 = -1;
}

void C_0001BAC0::func_0001BB00(int idx, int slot, int flag)
{
    S_0001BAC0_Obj *obj;
    S_0001B910_Anim *anim;
    int s;

    if (f2c == 0 || idx >= f2c->f24 || idx < 0) {
        return;
    }
    obj = f2c->f28[idx];
    s = obj->func_001B5750(slot);
    anim = obj->f1A4;
    obj->f78[s] = 1;
    obj->f88 = -1;
    obj->f90 = -1;
    if (flag != 0 || anim->f10 != 0) {
        anim->f10 = 1;
        obj->f8C = 0;
        obj->f84 = s;
        if (obj->f94[s] != 0) {
            anim->func_00166C80(obj->func_001B56F0(), 0);
        } else {
            anim->func_00164820(obj->func_001B56F0());
        }
        anim->f34 = 0;
        obj->f9C = 0;
        anim->func_001670C0(0, 0, 0);
        anim->func_00132D20();
        if (obj->f70[obj->f84] == 0 && obj->f8C == obj->f64[obj->f84] - 1) {
            obj->f78[obj->f84] = 0;
        }
    }
}

void C_0001BAC0::func_0001BC00(int idx, int slot)
{
    S_0001BAC0_Obj *obj;

    if (f2c == 0 || idx >= f2c->f24 || idx < 0) {
        return;
    }
    obj = f2c->f28[idx];
    obj->f78[obj->func_001B5750(slot)] = 0;
    obj->f88 = -1;
    obj->f90 = -1;
}

void C_0001BAC0::func_0001BC50(int id, int slot, int flag)
{
    S_0001BAC0_Obj *obj;
    S_0001B910_Anim *anim;
    int idx;
    int s;

    idx = func_0001B3C0(id);
    if (f2c == 0 || idx >= f2c->f24 || idx < 0 || f2c->f28 == 0) {
        return;
    }
    obj = f2c->f28[idx];
    s = obj->func_001B5750(slot);
    anim = obj->f1A4;
    obj->f78[s] = 1;
    obj->f88 = -1;
    obj->f90 = -1;
    if (flag != 0 || anim->f10 != 0) {
        anim->f10 = 1;
        obj->f8C = 0;
        obj->f84 = s;
        if (obj->f94[s] != 0) {
            anim->func_00166C80(obj->func_001B56F0(), 0);
        } else {
            anim->func_00164820(obj->func_001B56F0());
        }
        anim->f34 = 0;
        obj->f9C = 0;
        anim->func_001670C0(0, 0, 0);
        anim->func_00132D20();
        if (obj->f70[obj->f84] == 0 && obj->f8C == obj->f64[obj->f84] - 1) {
            obj->f78[obj->f84] = 0;
        }
    }
}

void C_0001BAC0::func_0001BD60(int id, int slot)
{
    S_0001BAC0_Obj *obj;
    int idx;

    idx = func_0001B3C0(id);
    if (f2c == 0 || idx >= f2c->f24 || idx < 0) {
        return;
    }
    obj = f2c->f28[idx];
    obj->f78[obj->func_001B5750(slot)] = 0;
    obj->f88 = -1;
    obj->f90 = -1;
}

void C_0001C1E0::func_0001BDB0(int idx)
{
    S_0001C1E0_Slot *s;

    if (f2c != 0 && idx < f2c->f24 && idx >= 0) {
        s = f2c->f28[idx];
        s->f78[s->f84] = 0;
        s->f88 = -1;
        s->f90 = -1;
    }
}

static __forceinline int InRange_0001BDF0(S_0001C1E0_List *list, int idx)
{
    return list != 0 && idx < list->f24 && idx >= 0;
}

int C_0001C1E0::func_0001BDF0(int a, int b)
{
    S_0001C1E0_Slot *s;
    int k;
    int idx = func_0001B3C0(a);

    if (!InRange_0001BDF0(f2c, idx)) {
        return 0;
    }
    s = f2c->f28[idx];
    k = s->func_001B5750(b);
    if (s->f84 == k) {
        return s->f78[k] | (s->f1A4->f10 == 0);
    }
    return s->f78[k];
}

struct S_0001C020_Mgr {
    void func_0001B9E0(C_0001B910 *p, int slot, int flag);
};

extern S_0001C020_Mgr *D_002B7C88;

void C_0001B790::func_0001BE50(void)
{
    int i;

    if (f2c == 0) {
        return;
    }
    for (i = 0; i < f2c->f24; i++) {
        S_0001B790_Obj *obj = f2c->f28[i];
        if (obj->f4 == 1) {
            func_0001B8A0(obj);
        }
    }
}

int C_0001C1E0::func_0001BE90(S_0001C1E0_Slot *obj, volatile int a, int b, int c)
{
    int i;
    int flag;
    S_0001B910_Anim *anim;

    if (obj == 0) {
        return 0;
    }
    flag = 1;
    if (*(volatile float *)&a < D_00275BC0) {
        flag = 0;
        a = 0x38d1b717;
    }
    if (*(volatile int *)&obj->f4 == 1) {
        anim = obj->f1A4;
        if (anim->f10 != 0 || b != 0) {
            obj->f8C = 0;
            if (c != 0) {
                obj->f84 = obj->f80;
                memcpy(obj->f78, obj->f74, obj->f60 * 4);
            }
            obj->f88 = -1;
            obj->f90 = 0;
            anim->func_00164820(obj->func_001B56F0());
            float t = *(float *)&a;
            anim->f34 = 0;
            *(float *)&obj->f9C = t;
            anim->func_001670C0(t, 0, 0);
            if (anim->f4->f18c->f4 == obj->f44) {
                anim->func_00132D20();
            } else {
                anim->func_00132D70();
                anim->func_00132CC0(obj->f44, obj->f48, 2);
            }
        }
        if ((obj->f70[obj->f84] == 0 || obj->f78[obj->f84] == 0) && c == 0) {
            anim->f10 = 1;
            obj->f78[obj->f84] = 0;
        }
        if (obj->f78[obj->f84] == 0 && c != 0) {
            anim->f10 = 1;
        }
    } else {
        obj->f58->v46(a, flag);
        if (flag != 0) {
            obj->f58->v12(0x38d1b717);
        }
    }
    for (i = 0; i < obj->f4C; i++) {
        ((S_0001B910_Child *)obj->f50[i])->f10C = 0;
    }
    return 0;
}

#pragma optimize("y", off)
void __cdecl func_0001C020(int a, int b, C_0001B910 *obj, int flag)
{
    if (flag != 0) D_002B7C88->func_0001B9E0(obj, 0, 0);
}
#pragma optimize("", on)
int C_0001C1E0::func_0001C1E0(int idx, int b, int c, int d)
{
    S_0001C1E0_List *list = f2c;

    if (list == 0) {
        return (int)list;
    }
    return func_0001BE90(list->f28[idx], b, c, d);
}

int C_0001C1E0::func_0001C200(int a, int b, int c, int d)
{
    S_0001C1E0_List *list = f2c;
    S_0001C1E0_Slot *s;

    if (list == 0) {
        return 0;
    }
    s = list->f28[func_0001B3C0(a)];
    return func_0001BE90(s, b, c, d);
}

void C_0001C1E0::func_0001C240(void)
{
    int i;

    if (f2c != 0) {
        for (i = 0; i < f2c->f24; i++) {
            func_0001C1E0(i, 0, 1, 1);
        }
    }
}

undefined4 C_0001C280::func_0001C280(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + param_1 * 4);
}

void C_0001C290::func_0001C290(void)
{
    int i;

    if (f1c != 0) {
        for (i = 0; i < f18; i++) {
            if (f1c[i] != 0) {
                f1c[i]->v2();
            }
        }
        func_001E891B(f1c);
        f1c = 0;
    }
    f18 = 0;
}

