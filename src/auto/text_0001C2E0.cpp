/* 40 functions from 0x0001C2E0 to 0x0001D280, found by Ghidra. */
#include "common.h"
struct C_0001C540 {
    char pad0[0x10];
    int unk10;
    int unk14;
    void func_0001C540(void);
};

struct C_0001CD50 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD50(void);
};

struct C_0001CD40 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD40(void);
};

struct C_0001C9B0 {
    int unk0;
    void func_0001C9B0(void);
};

struct C_0001C970 {
    int unk0;
    void func_0001C970(void);
};

struct C_0001C920 {
    int unk0;
    void func_0001C920(void);
};

struct C_0001C9C0 {
    int unk0;
    void func_00157660(void);
    void *func_0001C9C0(int flags);
};

struct C_0001C520 {
    int unk0;
    char pad4[0x14];
    int unk18;
    int unk1C;
    void func_0001E050(void);
    C_0001C520 *func_0001C520(void);
};

struct C_0013B210 {
    void func_0013B210(void *);
};

struct C_0001C550 {
    int unk0;
    void func_0001C290(void);
    void func_0001DFF0(void);
    void *func_0001C550(int flags);
};

struct C_0001C4C0_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void func_0001C4C0(int *);
};

struct C_0001C4C0 {
    char pad0[0x18];
    int unk18;
    C_0001C4C0_Item **unk1C;
    void func_0001C4C0(int *);
};


void C_0001C4C0::func_0001C4C0(int *param_1) {
    int local[3];
    int i = 0;
    if (i < unk18) {
        do {
            C_0001C4C0_Item *item = unk1C[i];
            if (item != 0) {
                item->func_0001C4C0(local);
                param_1[0] = local[0];
                param_1[1] += local[1];
                param_1[2] += local[2];
            }
            i++;
        } while (i < unk18);
    }
}

C_0001C520 *C_0001C520::func_0001C520(void) {
    extern int D_00275BD0;
    func_0001E050();
    unk18 = 0;
    unk1C = 0;
    unk0 = (int)&D_00275BD0;
    return this;
}

void C_0001C540::func_0001C540(void) {
    unk10 = 0;
    unk14 = 2139095039;
}

void *C_0001C550::func_0001C550(int flags) {
    extern int D_00275BD0;
    extern C_0013B210 *D_002BEAAC;
    void func_001E891B(void *);
    unk0 = (int)&D_00275BD0;
    func_0001C290();
    D_002BEAAC->func_0013B210(this);
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0001C920::func_0001C920(void) {
    extern int D_00275C0C;
    int func_00157660(...);
    unk0 = (int)&D_00275C0C;
    func_00157660();
}

void C_0001C970::func_0001C970(void) {
    extern int D_00275C94;
    int func_0001DFF0(...);
    unk0 = (int)&D_00275C94;
    func_0001DFF0();
}

void C_0001C9B0::func_0001C9B0(void) {
    extern int D_00275CFC;
    int func_00157660(...);
    unk0 = (int)&D_00275CFC;
    func_00157660();
}

void *C_0001C9C0::func_0001C9C0(int flags) {
    extern int D_00275C0C;
    void func_001E891B(void *);
    unk0 = (int)&D_00275C0C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0001CD40::func_0001CD40(void) {
    unk5C = 0;
}

void C_0001CD50::func_0001CD50(void) {
    unk5C = 1;
}

