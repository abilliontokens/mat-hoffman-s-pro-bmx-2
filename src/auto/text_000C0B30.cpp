/* 9 functions from 0x000C0B30 to 0x000C1B00, found by Ghidra. */
#include "common.h"

struct S_BFEE0_Check { int func_0005C1D0(int index); void func_0005C310(int a, int b); };
struct S_C09B0_Ui { void func_000B9A80(int a, int b); };
struct S_C09B0_Input { int func_00136170(int a, int b, int c); };
struct S_BFEE0_Manager { char pad[0x2c0]; S_BFEE0_Check *f2c0; char pad2c4[0x2d0 - 0x2c4]; int f2d0; int f2d4; };
struct S_BFEE0_Page { char pad[0x24]; S_C09B0_Ui *f24; };
struct S_C0010_Global {
    char pad[8];
    S_C09B0_Input *f8;
    char padc[0x2e0-0xc];
    S_BFEE0_Manager *f2e0;
};
extern S_C0010_Global *D_002A8490;

struct BmxUIPageDemo {
    void *vtbl;
    char pad4[0x124 - 4];
    S_BFEE0_Page *f124;
    char pad128[0x280-0x128];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    char pad294[4];
    int items[20];
    int func_000C0100(int idx);
    int GetItem(int i) { return i >= unk290 ? -1 : items[i]; }
    int func_000C0B30(int idx);
    int func_000C0CB0(int idx);
    int func_000C0E30(int idx);
    int func_000C1000(int idx);
    int func_000C11D0(int idx);
    int func_000C13A0(int idx);
    int func_000C1570(int idx);
    int func_000C1710(int idx);
};

int BmxUIPageDemo::func_000C0100(int idx)
{
    if (idx >= unk290) {
        return -1;
    }
    return items[idx];
}

int BmxUIPageDemo::func_000C0B30(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 6 <= 20) {
        if (GetItem(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            GetItem(idx + 1) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            GetItem(idx + 2) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            GetItem(idx + 3) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(1, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C0CB0(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 6 <= 20) {
        if (func_000C0100(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 1) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            func_000C0100(idx + 2) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 3) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(2, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C0E30(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (GetItem(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            GetItem(idx + 1) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            GetItem(idx + 2) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            GetItem(idx + 3) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(3, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C1000(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (GetItem(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            GetItem(idx + 1) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            GetItem(idx + 2) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            GetItem(idx + 3) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(6, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C11D0(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (GetItem(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            GetItem(idx + 1) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            GetItem(idx + 2) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            GetItem(idx + 3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(7, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C1570(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 7 <= 20) {
        if (GetItem(idx) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            GetItem(idx + 1) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            GetItem(idx + 2) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            GetItem(idx + 3) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            S_BFEE0_Manager *m = D_002A8490->f2e0;
            m->f2d0 = m->f2d0 == 0;
            ui->func_000B9A80(6, 1);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C1710(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    int mode;
    if (idx + 5 <= 20) {
        if (func_000C0100(idx) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 1) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 2) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 3) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            if (D_002A8490->f2e0->f2d4 == 0) {
                mode = 6;
                D_002A8490->f2e0->f2d4 = 1;
            } else {
                mode = 4;
                D_002A8490->f2e0->f2d4 = 0;
            }
            ui->func_000B9A80(mode, 1);
            return 1;
        }
    }
    return 0;
}

