/* 7 functions from 0x00107380 to 0x00108370, found by Ghidra. */
#include "common.h"

struct V_00107A40 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
};

struct S_00107A40_Mgr {
    char pad0[0x2d4];
    int f2d4;
};

struct S_00107A40_Global {
    char pad0[0x2e0];
    S_00107A40_Mgr *f2e0;
};
extern S_00107A40_Global *D_002A8490;

struct C_00107A40 {
    char pad0[0xa08];
    V_00107A40 *fa08;
    V_00107A40 *fa0c;
    V_00107A40 *fa10;
    V_00107A40 *fa14;
    char pada18[0x1e58 - 0xa18];
    int f1e58;
    void func_00107A40(int a0);
    void func_00107AB0(void);
};

struct C_00108360 {
    char pad0[0x1FC0];
    int unk1FC0;
    void func_00108360(void);
};


void C_00107A40::func_00107A40(int a0) {
    if (D_002A8490->f2e0->f2d4 == 0) {
        f1e58 = a0;
        if (a0 != 0) {
            fa08->vf6();
        } else {
            fa0c->vf6();
            fa10->vf6();
        }
        fa14->vf6();
    }
}

void C_00107A40::func_00107AB0(void) {
    fa08->vf4();
    fa0c->vf4();
    fa10->vf4();
    fa14->vf4();
}

void C_00108360::func_00108360(void) {
    unk1FC0 = 1;
}
