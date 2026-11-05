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


int __stdcall func_0001B900(int param_1)
{
  return *(int *)(param_1 + 0x60) + -1;
}

undefined4 C_0001C280::func_0001C280(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + param_1 * 4);
}

