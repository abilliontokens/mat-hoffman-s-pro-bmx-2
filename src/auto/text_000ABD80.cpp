/* 19 functions from 0x000ABD80 to 0x000ACD50, found by Ghidra. */
#include "common.h"

struct C_000AC140 {
    void *vtbl;
    C_000AC140 *func_000AC140();
};

struct C_000A9A70 {
    void func_000A9A70(void *a);
};

struct C_000AB790 {
    void func_000AB790(void *a);
};

struct C_000AB030 {
    void func_000AB030(void *a);
};

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct C_000AC700 {
    void *vtbl;
    char pad4[0x53C - 4];
    C_000A9A70 *unk53C;
    int func_000AC700();
};

struct C_000AC730 {
    void *vtbl;
    char pad4[0x540 - 4];
    C_000AB790 *unk540;
    int func_000AC730();
};

struct C_000AC760 {
    void *vtbl;
    char pad4[0x54C - 4];
    C_000AB030 *unk54C;
    void func_000AC760();
};

extern int D_0027C824;

extern int D_0027C818;
extern int D_0027C80C;
extern int D_0027C800;

struct C_001B59E0 {
    void func_001B59E0();
};

/* UnlockChadTriggerAction */
struct C_000ABE10 {
    void *vtbl;
    C_000ABE10 *func_000ABE10();
};

struct C_000ABD80_P1 {
    void func_00168C20(void *key, int v, void *dst);
    void func_00168C50(void *key, int v, void *dst);
};

/* MusicTriggerAction */
struct C_000ABD80 {
    char pad0[0x10c];
    int field_10C;
    int field_110;
    void func_001B5A00(void *a, void *b);
    void func_000ABD80(C_000ABD80_P1 *a, void *b);
};

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_000AC680_Alloc {
    virtual int vfunc0(int arg);
    C_000AC680_Alloc *func_000A3DE0();
};

/* BmxScene */
struct C_000AC680 {
    char pad0[0x28];
    u32 field_28;
    char pad2[0x4dc - 0x2c];
    C_000AC680_Alloc *field_4DC;
    int func_000AC680(void);
};

struct C_000AC6E0 {
    char pad0[0x538];
    void *field_538;
    C_000AC6E0 *func_000AC6E0(void);
};

C_000AC6E0 *__stdcall func_000A95D0(void *p);

extern int D_0027C874;
extern int D_0027AE04;

/* PipZmask */
struct C_000AC780_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    void func_00157600(int v);
    char pad0[0x24 - 4];
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
};

struct C_000AC780 {
    char pad0[0x558];
    C_000AC780_Obj *field_558;
    void func_000AC780(int a, int b, int c, int d);
};

/* BmxDynamicModels */
struct C_000AC7F0_Dyn {
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
    virtual int v27(int arg);
    virtual void v28();
    virtual void v29();
    C_000AC7F0_Dyn *func_001B5830(int v);
    char pad0[0x24 - 4];
    int field_24;
};

struct C_0005C1D0 {
    int func_0005C1D0(int v);
};

struct C_002A8490_B {
    int field_0;
    char pad4[0x48 - 4];
    int field_48;
    char pad4C[0x2c0 - 0x4c];
    C_0005C1D0 *field_2C0;
};

struct C_002A8490_C {
    char pad0[0x1dc];
    int field_1DC;
};

struct C_002A8490 {
    char pad0[0x2e0];
    C_002A8490_B *field_2E0;
    char pad2E4[0x2f0 - 0x2e4];
    C_002A8490_C *field_2F0;
};
extern C_002A8490 *D_002A8490;

struct C_000AC7F0 {
    char pad0[0x28];
    int field_28;
    char pad2[0x3ac - 0x2c];
    C_000AC7F0_Dyn *field_3AC;
    void func_000AC7F0(void);
};

/* scene helper object */
struct C_000AC890_Obj {
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
    C_000AC890_Obj *func_000B11C0(int v);
    void func_000B4850(int v);
};
extern C_000AC890_Obj *D_002B9134;

struct C_000AC890 {
    char pad0[0x28];
    int field_28;
    void func_000A26B0();
    void func_000AC890(void);
};

void C_000ABD80::func_000ABD80(C_000ABD80_P1 *a, void *b)
{
    a->func_00168C20(&D_0027C80C, 0, &field_10C);
    a->func_00168C50(&D_0027C800, 0, &field_110);
    func_001B5A00(a, b);
}

C_000ABE10 *C_000ABE10::func_000ABE10()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C818;
    return this;
}

int C_000AC680::func_000AC680(void)
{
    C_000AC680_Alloc *p = (C_000AC680_Alloc *)func_001E8A44(0x128);
    p = p ? p->func_000A3DE0() : 0;
    field_4DC = p;
    if (p->vfunc0(field_28) == 0) {
        func_001E891B(field_4DC);
        field_4DC = 0;
    }
    return 1;
}

C_000AC6E0 *C_000AC6E0::func_000AC6E0(void)
{
    if (field_538 != 0) {
        return func_000A95D0(this);
    }
    return this;
}

void C_000AC7F0::func_000AC7F0(void)
{
    C_000AC7F0_Dyn *p = 0;
    if (D_002A8490->field_2F0->field_1DC == 0 && D_002A8490->field_2E0->field_48 == 0xd) {
        if (D_002A8490->field_2E0->field_0 != 1) {
            return;
        }
        if (D_002A8490->field_2E0->field_2C0->func_0005C1D0(0xf) != 0) {
            return;
        }
    }
    if (field_3AC == 0) {
        p = (C_000AC7F0_Dyn *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_001B5830(1);
            *(void **)p = &D_0027AE04;
        } else {
            p = 0;
        }
        field_3AC = p;
    }
    if (field_3AC->v27(field_28) != 0) {
        return;
    }
    if (field_3AC->field_24 != 0) {
        return;
    }
    field_3AC->v2();
    field_3AC = 0;
}

void C_000AC890::func_000AC890(void)
{
    if (D_002B9134 == 0) {
        C_000AC890_Obj *p = (C_000AC890_Obj *)func_001E8A44(0x54);
        if (p != 0) {
            p = p->func_000B11C0(1);
        } else {
            p = 0;
        }
        D_002B9134 = p;
        p->v10();
    }
    D_002B9134->func_000B4850(field_28);
    if (D_002A8490->field_2E0->field_0 == 1) {
        func_000A26B0();
    }
}

