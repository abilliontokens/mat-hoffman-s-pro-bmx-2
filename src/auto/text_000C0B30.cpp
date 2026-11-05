/* 9 functions from 0x000C0B30 to 0x000C1B00, found by Ghidra. */
#include "common.h"

struct S_BFEE0_Check { int func_0005C1D0(int index); void func_0005C310(int a, int b); };
struct S_C09B0_Ui { void func_000B9A80(int a, int b); };
struct S_C09B0_Input { int func_00136170(int a, int b, int c); };
struct S_BFEE0_Manager { char pad[0x2c0]; S_BFEE0_Check *f2c0; };
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
    int func_000C0B30(int idx);
    int func_000C0CB0(int idx);
};

int BmxUIPageDemo::func_000C0100(int idx)
{
    if (idx >= unk290) {
        return -1;
    }
    return items[idx];
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
