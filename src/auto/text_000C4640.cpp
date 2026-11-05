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
