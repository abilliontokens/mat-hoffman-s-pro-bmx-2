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

struct S_000C4FD0_Root {
    char pad0[0x2E8];
    S_000C4FD0_Mid *f2E8;
};

extern S_000C4FD0_Root *D_002A8490;

struct S_000C4EB0_Obj { void func_001B1980(); };
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
    char pad2F0[0x320 - 0x2F0];
    S_000C4EB0_Obj *a320[3];
    S_000C4EB0_Obj *a32C[3];
    S_000C4EB0_Obj *a338[3];
    S_000C4EB0_Obj *a344[3];
    S_000C4EB0_Obj *a350[3];
    char pad35C[0x364 - 0x35C];
    int f364;
    void func_001BEF50(int a, int b);
    void func_000C4EB0();
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
