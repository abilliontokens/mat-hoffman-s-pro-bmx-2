/* 9 functions from 0x000C29A0 to 0x000C38B0, found by Ghidra. */
#include "common.h"
struct S_000C29A0_Query {
    int func_00136170(int a, int b, int c);
};

struct S_000C29A0_Ui {
    char pad0[0x298];
    int f298;
    void func_000B9A80(int a, int b);
};

struct S_000C29A0_Owner {
    char pad0[0x24];
    S_000C29A0_Ui *f24;
    char pad28[0x298 - 0x28];
    int f298;
};

struct S_000C29A0_Item {
    char pad0[0x610];
    int f610;
    int f614;
    int f618;
    int f61C;
    int f620;
    int f624;
};

struct S_000C29A0_Sub {
    void func_0005C1E0(int n);
    S_000C29A0_Item *func_0005C020(int n);
    void func_0005C130(int n);
    void func_0005C710();
};

struct S_000C29A0_Obj {
    char pad0[0x2C0];
    S_000C29A0_Sub *f2C0;
    char pad2C4[0x45C - 0x2C4];
    int f45C;
};

struct S_000C29A0_Global {
    char pad0[8];
    S_000C29A0_Query *f8;
    char pad0C[0x2E0 - 0xC];
    S_000C29A0_Obj *f2E0;
};

extern S_000C29A0_Global *D_002A8490;

struct C_000C29A0 {
    char pad0[0x124];
    S_000C29A0_Owner *f124;
    char pad128[0x290 - 0x128];
    int f290;
    char pad294[4];
    int arr298[20];
    int func_000C0100(int idx);
    int func_000C29A0(int idx);
    int func_000C2B30(int idx);
    int func_000C3210(int idx);
    int func_000C3060(int idx);
    int func_000C2EC0(int idx);
    int func_000C3550(int idx);
    int func_000C33B0(int idx);
    int func_000C36F0(int idx);
    int func_000C2CC0(int idx);
};

int C_000C29A0::func_000C0100(int idx)
{
    if (idx >= f290) {
        return -1;
    }
    return arr298[idx];
}

static __forceinline int Item_000C29A0(C_000C29A0 *p, int idx)
{
    if (idx >= p->f290) {
        return -1;
    }
    return p->arr298[idx];
}

int C_000C29A0::func_000C29A0(int idx)
{
    S_000C29A0_Owner *owner = f124;
    S_000C29A0_Ui *ui = owner->f24;
    if (idx + 6 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            owner->f298 = 1;
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C1E0(1);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C2B30(int idx)
{
    S_000C29A0_Owner *owner = f124;
    S_000C29A0_Ui *ui = owner->f24;
    if (idx + 6 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            owner->f298 = 1;
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C1E0(6);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C2CC0(int idx)
{
    S_000C29A0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(2, 2, 0)) {
            S_000C29A0_Obj *o = D_002A8490->f2E0;
            int n;
            if (o->f45C == 0) {
                n = 6;
                o->f45C = 1;
            } else {
                n = 4;
                o->f45C = 0;
            }
            ui->func_000B9A80(n, 1);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C2EC0(int idx)
{
    S_000C29A0_Ui *ui = f124->f24;
    int i;
    if (idx + 6 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (i = 0; i < 10; i++) {
                D_002A8490->f2E0->f2C0->func_0005C020(i)->f610 = 1;
            }
            D_002A8490->f2E0->f2C0->func_0005C130(1);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C3060(int idx)
{
    S_000C29A0_Ui *ui = f124->f24;
    int i;

    if (idx + 6 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (i = 0; i < 10; i++) {
                D_002A8490->f2E0->f2C0->func_0005C020(i)->f61C = 1;
            }
            D_002A8490->f2E0->f2C0->func_0005C130(4);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C3210(int idx)
{
    S_000C29A0_Ui *ui = f124->f24;
    int i;

    if (idx + 6 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (i = 0; i < 10; i++) {
                D_002A8490->f2E0->f2C0->func_0005C020(i)->f618 = 1;
            }
            D_002A8490->f2E0->f2C0->func_0005C130(3);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C3550(int idx)
{
    S_000C29A0_Ui *ui = f124->f24;
    int i;
    if (idx + 6 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (i = 0; i < 10; i++) {
                D_002A8490->f2E0->f2C0->func_0005C020(i)->f620 = 1;
            }
            D_002A8490->f2E0->f2C0->func_0005C130(5);
            return 1;
        }
    }
    return 0;
}

int C_000C29A0::func_000C36F0(int idx)
{
    S_000C29A0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (Item_000C29A0(this, idx) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            Item_000C29A0(this, idx + 1) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C29A0(this, idx + 2) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            Item_000C29A0(this, idx + 3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C710();
            return 1;
        }
    }
    return 0;
}

