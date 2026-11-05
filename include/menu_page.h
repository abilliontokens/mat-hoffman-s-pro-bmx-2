#pragma once
/* menu page with a list of up to 20 item ids (count at +0x290, ids at +0x298) */
struct S_000C40D0_Query {
    int func_00136170(int a, int b, int c);
};

struct S_000C40D0_Ui {
    void func_000B9A80(int a, int b);
};

struct S_000C40D0_Owner {
    char pad0[0x24];
    S_000C40D0_Ui *f24;
    char pad28[0x298-0x28];
    int f298;
};

struct S_000C40D0_Sub {
    void func_0005C1E0(int n);
    void func_0005C100(void);
    void func_0005C110(void);
    void func_0005C130(int n);
};

struct S_000C40D0_Obj {
    char pad0[0x2C0];
    S_000C40D0_Sub *f2C0;
};

struct S_000C40D0_Global {
    char pad0[8];
    S_000C40D0_Query *f8;
    char pad0C[0x2E0 - 0xC];
    S_000C40D0_Obj *f2E0;
};

extern S_000C40D0_Global *D_002A8490;

struct C_000C40D0 {
    char pad0[0x124];
    S_000C40D0_Owner *f124;
    char pad128[0x290 - 0x128];
    int f290;
    char pad294[4];
    int arr298[20];
    int func_000C0100(int idx);
    int func_000C3F60(int idx);
    int func_000C24F0(int idx);
    int func_000C40D0(int idx);
    int func_000C3C20(int idx);
};
