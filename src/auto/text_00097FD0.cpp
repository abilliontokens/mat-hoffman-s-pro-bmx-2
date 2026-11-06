/* 5 functions from 0x00097FD0 to 0x00098EE0, found by Ghidra. */
#include "common.h"

struct S_00098080_Sub {
    int unk0;
    char pad4[0x2554 - 4];
    int cnt2554;
    char pad2558[0x6388 - 0x2558];
    int arr6388[1];
};

struct C_00096930 {
    char name0[0x3c];
    char name3c[0xb4 - 0x3c];
    char nameb4[0x1a4 - 0xb4];
    int unk1a4;
    int unk1a8;
    char pad1ac[0x1b4 - 0x1ac];
    int unk1b4;
    int cnt1b8;
    char pad1bc[0x1c8 - 0x1bc];
    S_00098080_Sub **arr1c8;
    char pad1cc[0x48e0 - 0x1cc];
    int unk48e0;
    void func_00096930(void);
};

struct S_00098080_Cur {
    char pad0[0x124];
    int unk124;
};

struct S_00098080_Global {
    char pad0[0x2a4];
    S_00098080_Cur *unk2a4;
};

extern S_00098080_Global *D_002A8490;
int func_001EA426(const char *a, const char *b);

struct Vobj_000988B0 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
};

class C_000988B0_Obj {
public:
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
};

struct S_000988B0 {
    char **arr[3];
    int cnt[3];
    int unk18;
    int unk1c;
    char pad20[0x198 - 0x20];
    char *unk198;
    int func_000988B0(char *a, char *b);
};

struct C_000831E0 {
    void func_00083A70(const char *name);
};

struct S_00097FD0_owner {
    char pad0[0x170];
    C_000831E0 *unk170;
    char pad174[0x1c8 - 0x174];
    int unk1c8;
};

struct C_00097FD0 {
    C_00096930 **arr0;
    C_00096930 **arr1;
    C_00096930 **arr2;
    int cnt0;
    int cnt1;
    int cnt2;
    int mode0;
    int mode1;
    char pad20[0x198 - 0x20];
    S_00097FD0_owner *unk198;
    void func_00098E80(int idx);
    int func_00097FD0(void);
    int func_00098080(const char *name);
};

int C_00097FD0::func_00097FD0(void) {
    int flag = unk198->unk1c8;
    C_00096930 **list;
    int count;
    int i;
    int mode;

    mode = flag ? mode1 : mode0;
    if (mode == 3) {
        return 1;
    }
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
        if (list[i]->unk1a8 == 0 && list[i]->unk48e0 == 0) {
            return 0;
        }
    }
    return 1;
}

int C_00097FD0::func_00098080(const char *name) {
    int mode;
    int i;
    int j;
    int k;
    C_00096930 **list;
    int count;

    for (mode = 0; mode < 3; mode++) {
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
            if (func_001EA426(name, list[i]->nameb4) == 0) {
                if (unk198->unk170 != 0) {
                    if (list[i]->name3c[0]) {
                        unk198->unk170->func_00083A70(list[i]->name3c);
                    } else {
                        unk198->unk170->func_00083A70(list[i]->name0);
                    }
                }
                C_00096930 *e = list[i];
                e->unk48e0 = 1;
                e->unk1b4 = 1;
                if (D_002A8490->unk2a4 != 0) {
                    e->unk1a4 = D_002A8490->unk2a4->unk124;
                }
                for (j = 0; j < list[i]->cnt1b8; j++) {
                    if (list[i]->arr1c8[j]->unk0 == 1) {
                        for (k = 0; k < list[i]->arr1c8[j]->cnt2554; k++) {
                            list[i]->arr1c8[j]->arr6388[k] = 1;
                        }
                    }
                }
                return 1;
            }
        }
    }
    return 0;
}

void C_00097FD0::func_00098E80(int idx) {
    C_00096930 **list;
    int count;
    int i;

    switch (idx) {
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
    switch (idx) {
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
        list[i]->func_00096930();
    }
}
