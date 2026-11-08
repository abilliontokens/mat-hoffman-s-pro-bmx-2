/* 11 functions from 0x000BFBA0 to 0x000C0B30, found by Ghidra. */
#include "common.h"

extern int D_0027E00C;

extern char D_0027DFF0[], D_002A64D0[], D_00275678[], D_0027DFE4[];
void func_001ADCC0(char *buf, int size, char *a, char *b, char *c);
struct S_BFBA0_Obj {
    char pad0[0x34];
    int f34;
    int f38;
    void func_00093280(float a0);
    void func_000BC4A0(float a0, float a1);
    void func_000BC4C0(int a0, int a1);
    void func_000BC5D0(char *a0, int a1);
    int func_000BC670();
};
struct S_BFBA0_Pg { char pad[0x270]; S_BFBA0_Obj *f270; };
struct S_BFBA0_Chk {
    int func_0005C360();
    int func_0005C380();
    void func_0005C370();
};
struct S_BFBA0_Mgr { char pad[0x2c0]; S_BFBA0_Chk *f2c0; };
struct S_BFBA0_Mgr2 { int f0; int f4; char pad[0x2c0 - 8]; S_BFBA0_Chk *f2c0; };
struct S_BFBA0_G { char pad[0x2e0]; S_BFBA0_Mgr2 *f2e0; };
extern S_BFBA0_G *D_002A8490_b;

extern char D_0027958C[];
extern int D_0028F5E0;

struct S_C0010_Text {
    char pad[0x184];
    S_C0010_Text(int a0);
    void func_001B1580(char *a0, char *a1, int a2, int a3);
    void func_001B1A30(float x, float y, int a2);
    void func_001B19A0(int a0);
    void func_001B2270(unsigned int color);
};

struct S_C0010_Sub4 { char pad[0xae8]; int fae8; };
struct S_C0010_2E8 { int f0; S_C0010_Sub4 *f4; };
struct S_C0010_2EC {
    void func_0018C780(int a0, void *a1, int a2);
    void func_0018C160(char *a0);
};
struct S_BFEE0_Check { int func_0005C1D0(int index); void func_0005C310(int a, int b); void func_0005C340(int a); };
struct S_C09B0_Ui { void func_000B9A80(int a, int b); };
struct S_C09B0_Input { int func_00136170(int a, int b, int c); };
struct S_BFEE0_Manager { char pad[0x2c0]; S_BFEE0_Check *f2c0; };
struct S_BFEE0_List { int func_0001B3C0(char *name); char pad[0x2c]; char *f2c; };
struct S_BFEE0_Owner { char pad[0x484]; S_BFEE0_List *f484; };
struct S_BFEE0_Page { char pad[0x24]; S_C09B0_Ui *f24; char pad28[0x150-0x28]; S_BFEE0_Owner *f150; char pad154[0x27c-0x154]; char *f27c; };
struct S_BFEE0_Virtual { virtual void v0(); virtual void v4(); virtual void v8(); virtual void vc(); virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c(); };
struct S_C0010_Global {
    char pad[8];
    S_C09B0_Input *f8;
    char padc[0x2e0-0xc];
    S_BFEE0_Manager *f2e0;
    char pad2e4[4];
    S_C0010_2E8 *f2e8;
    S_C0010_2EC *f2ec;
};
extern S_C0010_Global *D_002A8490;

struct BmxUIPageDemo {
    void *vtbl;
    char pad4[0x124 - 4];
    S_BFEE0_Page *f124;
    char pad128[0x280-0x128];
    void func_000BFEE0();
    void func_000BFBA0();
    int func_000C09B0(int idx);
    int func_000C02D0(int idx);
    int func_000C0120(int idx);
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    char pad294[4];
    int items[20];
    void func_001BE360(int a0);
    BmxUIPageDemo *func_000BFE90(int a0);
    int func_000C0100(int idx);
    void func_001BE4F0(int a0, int a1, int a2);
    void func_001577A0(void *child, int b);
    BmxUIPageDemo *func_000C0010(int a0, int a1, int a2);
    int func_000C0480(int idx);
    int func_000C0630(int idx);
    int func_000C07F0(int idx);
};

static __forceinline int Item_000C0480(BmxUIPageDemo *p, int idx)
{
    if (idx >= p->unk290) {
        return -1;
    }
    return p->items[idx];
}

void BmxUIPageDemo::func_000BFBA0()
{
    char buf[0x104];
    S_BFBA0_Pg *page = (S_BFBA0_Pg *)f124;
    unk280 = 0;
    page->f270->f34 = 0;
    page->f270->f38 = 0;
    page->f270->func_00093280(1.0f);
    if (!((S_BFBA0_G *)D_002A8490)->f2e0->f2c0->func_0005C360() &&
        ((S_BFBA0_G *)D_002A8490)->f2e0->f2c0->func_0005C380() == 1 &&
        ((S_BFBA0_G *)D_002A8490)->f2e0->f4 == 10) {
        func_001ADCC0(buf, 0x104, D_00275678, D_002A64D0, D_0027DFF0);
        ((S_BFBA0_G *)D_002A8490)->f2e0->f2c0->func_0005C370();
    } else {
        func_001ADCC0(buf, 0x104, D_00275678, D_002A64D0, D_0027DFE4);
    }
    page->f270->func_000BC4A0(1.0f, 1.0f);
    page->f270->func_000BC4C0(0, 0);
    page->f270->func_000BC5D0(buf, 1);
    unk284 = page->f270->func_000BC670();
}

BmxUIPageDemo *BmxUIPageDemo::func_000BFE90(int a0)
{
    int i;

    func_001BE360(a0);
    unk280 = 0;
    unk284 = 1;
    unk288 = 1;
    unk28C = 0;
    unk290 = 0;
    vtbl = &D_0027E00C;
    for (i = 0; i < 20; i++)
        items[i] = -1;
    return this;
}

void BmxUIPageDemo::func_000BFEE0()
{
    S_BFEE0_Page *page = f124;
    int i, offset;
    for (i = 0, offset = 0; offset < 0x1a80; offset += 0x1a8, ++i) {
        if (!D_002A8490->f2e0->f2c0->func_0005C1D0(i)) {
            if (offset == 0x1a8 || offset == 0x4f8 || offset == 0x9f0 || offset == 0xd40 || offset == 0x13e0 || offset == 0x18d8) {
                int index = page->f150->f484->func_0001B3C0(page->f27c + offset);
                char *obj = *(char **)(*(char **)(page->f150->f484->f2c + 0x28) + index * 4);
                obj = *(char **)(obj + 0x1a4);
                ((S_BFEE0_Virtual *)(obj + *(int *)(*(char **)obj + 4)))->v14();
            }
        } else {
            if (offset == 0x1a8 || offset == 0x4f8 || offset == 0x9f0 || offset == 0xd40 || offset == 0x13e0 || offset == 0x18d8) {
                int index = page->f150->f484->func_0001B3C0(page->f27c + offset);
                char *obj = *(char **)(*(char **)(page->f150->f484->f2c + 0x28) + index * 4);
                obj = *(char **)(obj + 0x1a4);
                ((S_BFEE0_Virtual *)(obj + *(int *)(*(char **)obj + 4)))->v1c();
            }
        }
    }
}

BmxUIPageDemo *BmxUIPageDemo::func_000C0010(int a0, int a1, int a2)
{
    func_001BE4F0(a0, a1, a2);
    a2 = (int)D_0027958C;
    D_002A8490->f2ec->func_0018C780(1, &a2, 0);
    D_002A8490->f2ec->func_0018C160(D_0027958C);
    unk280 = (int)new S_C0010_Text(1);
    ((S_C0010_Text *)unk280)->func_001B1580(D_0027958C, D_0027958C, D_002A8490->f2e8->f4->fae8, 0);
    ((S_C0010_Text *)unk280)->func_001B1A30(320.0f, 224.0f, 0);
    ((S_C0010_Text *)unk280)->func_001B19A0(D_0028F5E0);
    ((S_C0010_Text *)unk280)->func_001B2270(0xffcccccc);
    func_001577A0((void *)unk280, -1);
    return this;
}

int BmxUIPageDemo::func_000C0100(int idx)
{
    if (idx >= unk290) {
        return -1;
    }
    return items[idx];
}

int BmxUIPageDemo::func_000C0120(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 7 <= 20) {
        if (func_000C0100(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 1) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 2) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(0, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C02D0(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 7 <= 20) {
        if (func_000C0100(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 1) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 2) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 3) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(8, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C0480(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 7 <= 20) {
        if (Item_000C0480(this, idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            Item_000C0480(this, idx + 1) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            Item_000C0480(this, idx + 2) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            Item_000C0480(this, idx + 3) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0x28, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(4, i);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C0630(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (Item_000C0480(this, idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            Item_000C0480(this, idx + 1) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            Item_000C0480(this, idx + 2) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            Item_000C0480(this, idx + 3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            D_002A8490->f2e0->f2c0->func_0005C340(1);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C07F0(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 8 <= 20) {
        if (Item_000C0480(this, idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            Item_000C0480(this, idx + 1) == D_002A8490->f8->func_00136170(6, 2, 0) &&
            Item_000C0480(this, idx + 2) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            Item_000C0480(this, idx + 3) == D_002A8490->f8->func_00136170(0, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(7, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 6) == D_002A8490->f8->func_00136170(1, 2, 0) &&
            func_000C0100(idx + 7) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            D_002A8490->f2e0->f2c0->func_0005C340(2);
            return 1;
        }
    }
    return 0;
}

int BmxUIPageDemo::func_000C09B0(int idx)
{
    S_C09B0_Ui *ui = f124->f24;
    if (idx + 6 <= 20) {
        if (func_000C0100(idx) == D_002A8490->f8->func_00136170(0x29, 2, 0) &&
            func_000C0100(idx + 1) == D_002A8490->f8->func_00136170(4, 2, 0) &&
            func_000C0100(idx + 2) == D_002A8490->f8->func_00136170(5, 2, 0) &&
            func_000C0100(idx + 3) == D_002A8490->f8->func_00136170(3, 2, 0) &&
            func_000C0100(idx + 4) == D_002A8490->f8->func_00136170(2, 2, 0) &&
            func_000C0100(idx + 5) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            ui->func_000B9A80(6, 1);
            for (int i = 0; i < 9; ++i)
                D_002A8490->f2e0->f2c0->func_0005C310(5, i);
            return 1;
        }
    }
    return 0;
}

