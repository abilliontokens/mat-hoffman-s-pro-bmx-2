/* 5 functions from 0x000C4640 to 0x000C5580, found by Ghidra. */
#include "common.h"
/* the sound/animation service a manager's owner holds at +0x74 */
struct S_000C4FD0_Svc {
    int func_000301D0();
};

struct S_000C4FD0_Owner {
    char pad0[0x74];
    S_000C4FD0_Svc *f74;
};

struct S_000C4FD0_Mgr {
    char pad0[0x25C];
    S_000C4FD0_Owner *f25C;
};

/* a text label / sprite node of the HUD */
struct S_000C4FD0_Label {
    void func_0005E840(char *s);
    void func_001D6600();
};

struct S_000C4FD0_Hud {
    char pad0[0x34];
    S_000C4FD0_Label *f34;
    S_000C4FD0_Label *f38;
    char pad3C[0x80 - 0x3C];
    S_000C4FD0_Label *f80;
    S_000C4FD0_Label *f84;
};

extern S_000C4FD0_Hud *D_002B91AC;

/* string table of the settings record */
struct S_000C4FD0_Strings {
    char pad0[0x7C8];
    char *f7C8;
    char pad7CC[0x940 - 0x7CC];
    char *f940;
};

struct S_000C4FD0_Mid {
    int f0;
    S_000C4FD0_Strings *f4;
};

/* lookup of named UI nodes, and the nodes it hands out */
struct S_000C50E0_Lookup {
    int *func_0018C160(int name);
    void func_0018C780(int, int *, int);
};

struct S_000C50E0_Clamp {
    char pad0[0x10];
    float f10, f14;
};

struct S_000C50E0_Mid {
    S_000C50E0_Clamp *func_0018C070();
};

struct S_000C50E0_Widget {
    char pad0[0x28];
    int f28;
    char pad2c[0x10];
    int f3c, f40, f44, f48;
    char pad4c[0xc];
    unsigned char f58;
    S_000C50E0_Widget *func_001D5760();
    void func_001D5810(int, float, float, int);
    S_000C50E0_Clamp *func_001D5AA0();
};

struct S_000C4FD0_Root {
    char pad0[0x2E8];
    S_000C4FD0_Mid *f2E8;
    S_000C50E0_Lookup *f2EC;
};

extern float D_00275AEC;
extern int D_002786A0, D_00278678, D_00278690;

struct C_000C50E0 {
    char pad0[0x2F8];
    S_000C50E0_Widget *a2F8[10];
    void func_000C50E0();
    void func_001578D0();
};

extern S_000C4FD0_Root *D_002A8490;

struct S_000C4EB0_Obj {
    S_000C4EB0_Obj *func_001B12C0(int);
    void func_001B13A0(int, int, int, int);
    void func_001B1A30(float, float, int);
    void func_001B2270(unsigned);
    void func_001B19A0(int);
    void func_001B17D0(int);
    void func_001B1980();
    void func_001B1860(int, float, int, float, int, int, int, int, float, int, float, float, int);
};
struct C_000C4EB0 {
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
    char pad4[0x288 - 4];

    int f288;
    char pad28C[0x2E0 - 0x28C];
    int f2E0;
    int f2E4;
    int f2E8;
    int f2EC;
    int f2F0;
    int f2F4;
    char pad2F8[0x320 - 0x2F8];
    S_000C4EB0_Obj *a320[3];
    S_000C4EB0_Obj *a32C[3];
    S_000C4EB0_Obj *a338[3];
    S_000C4EB0_Obj *a344[3];
    S_000C4EB0_Obj *a350[3];
    char pad35C[0x364 - 0x35C];
    int f364;
    void func_001BEF50(int a, int b);
    void func_000C4EB0();
    void func_000C4CE0();
};

struct C_000C4FD0 {
    char pad0[0x124];
    S_000C4FD0_Mgr *f124;
    char pad128[0x2E0 - 0x128];
    int f2E0;
    int f2E4;
    int f2E8;
    int f2EC;
    char pad2F0[0x364 - 0x2F0];
    int f364;
    void func_000C4FD0();
};

void C_000C4EB0::func_000C4CE0()
{
    int i;
    if (f2E0) {
        f2F4 = 1;
        for (i = 0; i < 3; i++) a320[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    else if (f2EC) {
        f2F4 = 1;
        for (i = 0; i < 3; i++) a350[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    else if (f2E4) {
        f2F4 = 1;
        for (i = 0; i < 3; i++) a32C[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    else if (f364) {
        f2F4 = 1;
        for (i = 0; i < 3; i++) a338[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    else if (f2E8) {
        f2F4 = 1;
        for (i = 0; i < 3; i++) a344[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
}

void C_000C4EB0::func_000C4EB0()
{
    int i;
    if (f2E0) {
        for (i = 0; i < 3; i++) a320[i]->func_001B1980();
        f2E0 = 0;
    } else if (f2E4) {
        for (i = 0; i < 3; i++) a32C[i]->func_001B1980();
        f2E4 = 0;
    } else if (f364) {
        for (i = 0; i < 3; i++) a338[i]->func_001B1980();
        f364 = 0;
    } else if (f2EC) {
        for (i = 0; i < 3; i++) a350[i]->func_001B1980();
        f2EC = 0;
    } else if (f2E8) {
        for (i = 0; i < 3; i++) a344[i]->func_001B1980();
        f2E8 = 0;
    }
    func_001BEF50(1, 1);
    func_001BEF50(1, 2);
    func_001BEF50(1, 3);
    func_001BEF50(1, 4);
    f288 = 0;
    v27();
}

void C_000C4FD0::func_000C4FD0()
{
    S_000C4FD0_Owner *owner = f124->f25C;
    if (owner->f74->func_000301D0() == 0) {
        if (f2E0 == 0 && f2E4 == 0 && f364 == 0 && f2E8 == 0 && f2EC == 0) {
            D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
        } else {
            D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f940);
        }
        D_002B91AC->f38->func_001D6600();
    }
    if (f2E0 == 0 && f2E4 == 0 && f364 == 0 && f2E8 == 0 && f2EC == 0) {
        D_002B91AC->f80->func_001D6600();
        D_002B91AC->f84->func_001D6600();
        D_002B91AC->f34->func_001D6600();
    }
}

void C_000C50E0::func_000C50E0()
{
    int ids[3];
    int i;
    S_000C50E0_Widget **e;
    S_000C50E0_Lookup *lk;
    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278678;
    ids[2] = (int)&D_00278690;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->f2EC;
        int *r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            S_000C50E0_Clamp *o = ((S_000C50E0_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    e = a2F8;
    i = 10;
    do {
        if (*e) {
            S_000C50E0_Clamp *o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
        e++;
        i--;
    } while (i);
    func_001578D0();
}

