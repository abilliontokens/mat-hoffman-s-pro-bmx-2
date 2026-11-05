/* 10 functions from 0x000C38B0 to 0x000C4640, found by Ghidra. */
#include "common.h"

extern int D_0027E0A4;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1860(int, float, int, float, int, int, float, int, float, int, int, int, int);
};

struct DelObjC_000C4 {
    virtual void Destroy(int a0);
};

/* BmxUIPageDemo */
struct C_000C4460 {
    char pad0[0x280];
    C_001B1980 *unk280;
    char pad284[0x4];
    int unk288;
    void func_00157960(void);
    void func_000C4460(void);
};

/* BmxUIPageMain */
struct C_000C45E0 {
    void *vtbl;
    char pad4[0x280 - 4];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    u32 unk294;
    u32 unk298;
    u32 unk29C;
    u32 unk2A0;
    u32 unk2A4;
    char pad2A8[4];
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    u32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    C_001D6410 *unk2C4;
    u32 unk2C8;
    u32 unk2CC;
    u32 unk2D0;
    u32 unk2D4;
    u32 unk2D8;
    u32 unk2DC;
    u32 unk2E0;
    u32 unk2E4;
    u32 unk2E8;
    u32 unk2EC;
    u32 unk2F0;
    u32 unk2F4;
    DelObjC_000C4 *unk2F8[10];
    u32 arr320[4][3];
    char pad350[0xc];
    u32 unk35C;
    u32 unk360;
    u32 unk364;
    void func_001BE3F0(void);
    void func_001BE360(int a);
    void func_000C45E0(void);
    C_000C45E0 *func_000C44C0(int a);
};

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
};

struct S_000C40D0_Sub {
    void func_0005C100(void);
    void func_0005C110(void);
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
    int func_000C40D0(int idx);
};

int C_000C40D0::func_000C0100(int idx)
{
    if (idx >= f290) {
        return -1;
    }
    return arr298[idx];
}

static __forceinline int Item_000C40D0(C_000C40D0 *p, int idx)
{
    if (idx >= p->f290) {
        return -1;
    }
    return p->arr298[idx];
}

/* same list layout as C_000C40D0 */
struct C_000C3F60 {
    char pad0[0x124];
    S_000C40D0_Owner *f124;
    char pad128[0x290 - 0x128];
    int f290;
    char pad294[4];
    int arr298[20];
    int func_000C0100(int idx);
    int func_000C3F60(int idx);
};

static __forceinline int Item_000C3F60(C_000C3F60 *p, int idx)
{
    if (idx >= p->f290) {
        return -1;
    }
    return p->arr298[idx];
}

int C_000C40D0::func_000C3F60(int idx)
{
    S_000C40D0_Ui *ui = f124->f24;
    if (idx + 6 <= 20) {
        if (Item_000C40D0(this, idx) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            Item_000C40D0(this, idx + 1) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            Item_000C40D0(this, idx + 2) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            Item_000C40D0(this, idx + 3) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0x28, 2, 0)) {
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C100();
            return 1;
        }
    }
    return 0;
}

int C_000C40D0::func_000C40D0(int idx)
{
    S_000C40D0_Ui *ui = f124->f24;
    if (idx + 6 <= 20) {
        if (func_000C0100(idx) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            func_000C0100(idx + 1) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 2) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 3) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0, 2, 0)) {
            ui->func_000B9A80(6, 1);
            D_002A8490->f2E0->f2C0->func_0005C110();
            return 1;
        }
    }
    return 0;
}

struct C_000C3C20_Ui {
    void func_000B9A80(int a, int b);
};

struct C_000C3C20_Sub {
    char pad0[0x24];
    C_000C3C20_Ui *f24;
};

struct C_000C3C20_Query {
    int func_00136170(int a, int b, int c);
};

struct C_000C3C20_Tail {
    void func_0005C130(int n);
};

struct C_000C3C20_Mid {
    char pad0[0x2c0];
    C_000C3C20_Tail *f2c0;
};

struct C_000C3C20_Global {
    char pad0[8];
    C_000C3C20_Query *f8;
    char padc[0x2d4];
    C_000C3C20_Mid *f2e0;
};

extern C_000C3C20_Global *D_002A8491;

struct C_000C3C20 {
    char pad0[0x124];
    C_000C3C20_Sub *f124;
    char pad128[0x168];
    int f290;
    char pad294[4];
    int f298[20];
    int func_000C0100(int idx);
    int func_000C3C20(int idx);
};

void C_000C4460::func_000C4460(void)
{
    if (unk288 != 0) {
        unk280->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    } else {
        unk280->func_001B1980();
    }
    func_00157960();
}

C_000C45E0 *C_000C45E0::func_000C44C0(int a)
{
    int i;

    func_001BE360(a);
    unk280 = 1;
    unk2BC = 1;
    vtbl = &D_0027E0A4;
    unk288 = 0;
    unk2A4 = 0;
    unk2A0 = 0;
    unk284 = 0;
    unk294 = 0;
    unk290 = 0;
    unk28C = 0;
    unk298 = 0;
    unk29C = 0;
    unk2AC = 0;
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    for (i = 0; i < 10; i++) {
        unk2F8[i] = 0;
    }
    unk2C0 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    unk2DC = 0;
    unk2C4 = 0;
    unk2E0 = 0;
    unk2E4 = 0;
    unk2E8 = 0;
    unk364 = 0;
    unk2EC = 0;
    unk2F0 = 0;
    for (i = 0; i < 3; i++) {
        arr320[0][i] = 0;
        arr320[1][i] = 0;
        arr320[2][i] = 0;
        arr320[3][i] = 0;
    }
    unk35C = 0;
    unk360 = 0xffffffff;
    unk2F4 = 0;
    return this;
}

void C_000C45E0::func_000C45E0(void)
{
    vtbl = &D_0027E0A4;
    for (int i = 0; i < 10; i++) {
        if (unk2F8[i] != 0) {
            unk2F8[i]->Destroy(1);
        }
        unk2F8[i] = 0;
    }
    C_001D6410 *p = unk2C4;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
        unk2C4 = 0;
    }
    func_001BE3F0();
}

