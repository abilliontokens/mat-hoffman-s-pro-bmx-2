/* 9 functions from 0x00098EE0 to 0x00099E50, found by Ghidra. */
#include "common.h"

struct S_00097FD0_owner;

struct C_00096870 {
    char pad0[0x1a4];
    f32 f1a4;
    char pad1a8[0xc];
    int f1b4;
    char pad1b8[0x48e0 - 0x1b8];
    int f48e0;
    void func_00096870(const char *name);
    void func_00097050(S_00097FD0_owner *owner);
};

struct S_00099D40_Slots {
    int func_0005C040(int a, int b, int c, int d);
    int func_0005C070(int a, int b, int c);
};

struct S_00097FD0_owner {
    char pad0[0x68];
    S_00099D40_Slots *f68;
    char pad6c[0x1c8 - 0x6c];
    int unk1c8;
};

struct S_00099D40_Sub {
    char pad0[0x48];
    int f48;
};

struct S_00099D40_Cam {
    char pad0[0x124];
    f32 f124;
};

struct S_00099D40_Global {
    char pad0[0x2a4];
    S_00099D40_Cam *f2a4;
    char pad2a8[0x2e0 - 0x2a8];
    S_00099D40_Sub *f2e0;
};

extern S_00099D40_Global *D_002A8490;

struct C_00097FD0 {
    C_00096870 **arr0;
    C_00096870 **arr1;
    C_00096870 **arr2;
    int cnt0;
    int cnt1;
    int cnt2;
    int mode0;
    int mode1;
    char pad20[0x198 - 0x20];
    S_00097FD0_owner *unk198;
    void func_00098E80(int idx);
    void func_000999B0(void);
    void func_00099500(const char *name);
    void func_00099590(void);
    void func_000999E0(void);
    void func_00099D40(int param);
    void func_00099600(f32 lo, f32 hi);
};

void C_00097FD0::func_00099500(const char *name) {
    C_00096870 **list;
    int count;
    int i;
    int flag;
    int mode;

    if (mode0 < 3) {
        flag = unk198->unk1c8;
        mode = flag ? mode1 : mode0;
        switch (mode) {
        case 0:
            list = arr0;
            break;
        case 1:
            list = arr1;
            break;
        case 2:
            list = arr2;
            break;
        default:
            list = 0;
            break;
        }
        mode = flag ? mode1 : mode0;
        switch (mode) {
        case 0:
            count = cnt0;
            break;
        case 1:
            count = cnt1;
            break;
        case 2:
            count = cnt2;
            break;
        default:
            count = 0;
            break;
        }
        for (i = 0; i < count; i++) {
            list[i]->func_00096870(name);
        }
    }
}

void C_00097FD0::func_00099590(void) {
    C_00096870 **list;
    int count;
    int i;
    int j;

    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            list = arr0;
            break;
        case 1:
            list = arr1;
            break;
        case 2:
            list = arr2;
            break;
        default:
            list = 0;
            break;
        }
        switch (i) {
        case 0:
            count = cnt0;
            break;
        case 1:
            count = cnt1;
            break;
        case 2:
            count = cnt2;
            break;
        default:
            count = 0;
            break;
        }
        for (j = 0; j < count; j++) {
            list[j]->f1a4 = -1.0f;
        }
    }
}

void C_00097FD0::func_000999B0(void) {
    int i;

    if (unk198->unk1c8 == 0) {
        for (i = 0; i < 3; i++) {
            func_00098E80(i);
        }
    }
}

void C_00097FD0::func_000999E0(void) {
    C_00096870 **list;
    int count;
    int i;
    int j;

    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            list = arr0;
            break;
        case 1:
            list = arr1;
            break;
        case 2:
            list = arr2;
            break;
        default:
            list = 0;
            break;
        }
        switch (i) {
        case 0:
            count = cnt0;
            break;
        case 1:
            count = cnt1;
            break;
        case 2:
            count = cnt2;
            break;
        default:
            count = 0;
            break;
        }
        for (j = 0; j < count; j++) {
            list[j]->f1b4 = 0;
        }
    }
    mode1 = unk198->unk1c8 ? mode1 : mode0;
}

void C_00097FD0::func_00099D40(int param) {
    C_00096870 **list;
    int count;
    int i;
    int j;
    C_00096870 *obj;

    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            list = arr0;
            break;
        case 1:
            list = arr1;
            break;
        case 2:
            list = arr2;
            break;
        default:
            list = 0;
            break;
        }
        switch (i) {
        case 0:
            count = cnt0;
            break;
        case 1:
            count = cnt1;
            break;
        case 2:
            count = cnt2;
            break;
        default:
            count = 0;
            break;
        }
        for (j = 0; j < count; j++) {
            int ok;
            if (param != -1) {
                ok = unk198->f68->func_0005C040(param, D_002A8490->f2e0->f48, i, j);
            } else {
                ok = unk198->f68->func_0005C070(D_002A8490->f2e0->f48, i, j);
            }
            if (ok) {
                list[j]->func_00097050(unk198);
                obj = list[j];
                obj->f48e0 = 1;
                obj->f1b4 = 1;
                if (D_002A8490->f2a4) {
                    obj->f1a4 = D_002A8490->f2a4->f124;
                }
            }
        }
    }
}

