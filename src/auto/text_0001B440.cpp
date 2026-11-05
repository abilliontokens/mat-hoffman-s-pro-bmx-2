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

struct S_0001BAC0_Obj {
    char pad0[0x78];
    int *f78;
    char pad7C[0xc];
    int f88;
    char pad8C[0x4];
    int f90;
    int func_001B5750(int slot);
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
    void func_0001BC00(int idx, int slot);
    void func_0001BD60(int id, int slot);
};

struct S_0001C1E0_List {
    char pad0[0x28];
    int *f28;
};

struct C_0001C1E0 {
    char pad0[0x2c];
    S_0001C1E0_List *f2c;
    void func_0001C1E0(int idx, int b, int c, int d);
    void func_0001BE90(int obj, int b, int c, int d);
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

void C_0001C1E0::func_0001C1E0(int idx, int b, int c, int d)
{
    S_0001C1E0_List *list = f2c;

    if (list != 0) {
        func_0001BE90(list->f28[idx], b, c, d);
    } else {
        return;
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

