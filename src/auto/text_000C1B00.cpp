/* 9 functions from 0x000C1B00 to 0x000C29A0, found by Ghidra. */
#include "common.h"

struct S_000C2810_Query {
    int func_00136170(int a, int b, int c);
};

struct S_000C2810_Ui {
    void func_000B9A80(int a, int b);
};

struct S_000C2810_Owner {
    char pad0[0x24];
    S_000C2810_Ui *f24;
    char pad28[0x298 - 0x28];
    int f298;
};

struct S_000C2810_Sub {
    void func_0005C1E0(int flag);
};

struct S_000C2810_Obj {
    char pad0[0x2C0];
    S_000C2810_Sub *f2C0;
};

struct S_000C2810_Global {
    char pad0[8];
    S_000C2810_Query *f8;
    char pad0C[0x2E0 - 0xC];
    S_000C2810_Obj *f2E0;
};

extern S_000C2810_Global *D_002A8490;

/* menu page with a list of up to 20 item ids (count at +0x290, ids at +0x298) */
struct C_000C2810 {
    char pad0[0x124];
    S_000C2810_Owner *f124;
    char pad128[0x290 - 0x128];
    int f290;
    char pad294[4];
    int arr298[20];
    int func_000C0100(int idx);
    int func_000C2810(int idx);
    int func_000C24F0(int idx);
    int func_000C2680(int idx);
};

int C_000C2810::func_000C0100(int idx)
{
    if (idx >= f290) {
        return -1;
    }
    return arr298[idx];
}

static __forceinline int Item_000C2810(C_000C2810 *p, int idx)
{
    if (idx >= p->f290) {
        return -1;
    }
    return p->arr298[idx];
}

int C_000C2810::func_000C24F0(int idx)
{
    S_000C2810_Owner *owner = f124;
    S_000C2810_Ui *ui = owner->f24;
    if (idx + 6 <= 20) {
        if (Item_000C2810(this, idx) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C2810(this, idx+1) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            Item_000C2810(this, idx+2) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            Item_000C2810(this, idx+3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0, 2, 0)) {
            owner->f298 = 1;
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C1E0(3);
            return 1;
        }
    }
    return 0;
}

int C_000C2810::func_000C2680(int idx)
{
    S_000C2810_Owner *owner = f124;
    S_000C2810_Ui *ui = owner->f24;
    if (idx + 6 <= 20) {
        if (Item_000C2810(this, idx) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C2810(this, idx + 1) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            Item_000C2810(this, idx + 2) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            Item_000C2810(this, idx + 3) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            owner->f298 = 1;
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C1E0(0xc);
            return 1;
        }
    }
    return 0;
}

