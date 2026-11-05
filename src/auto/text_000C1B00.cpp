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
};

static __forceinline int Item_000C2810(C_000C2810 *p, int idx)
{
    if (idx >= p->f290) {
        return -1;
    }
    return p->arr298[idx];
}
