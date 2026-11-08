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

typedef void (__fastcall *VFn_000988B0)(void *);
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
#define VCALL(o, off) ((VFn_000988B0)(*(void ***)(o))[(off) / 4])(o)

typedef void (__fastcall *VFn_000988B0)(void *);
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
#define VCALL(o, off) ((VFn_000988B0)(*(void ***)(o))[(off) / 4])(o)

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
    char pad20[0xc];
    int arr2c[45];
    int arrE0[45];
    char pad194[4];
    S_00097FD0_owner *unk198;
    void func_00098E80(int idx);
    int func_00097FD0(void);
    int func_00098080(const char *name);
    void func_000981D0(void *a, void *b, int c);
};
struct S_981D0_Host { void func_0001B820(void *a); };
struct S_981D0_List { char pad0[0x24]; int cnt24; void **arr28; };
struct S_981D0_Mid { char pad0[0x3ac]; S_981D0_List *unk3AC; char pad3B0[0x484 - 0x3b0]; S_981D0_Host *unk484; };
struct S_981D0_Owner { char pad0[0x64]; S_981D0_Mid *unk64; char pad68[0x1c8 - 0x68]; void *unk1C8; };
struct S_981D0_Arg { char pad0[0x24]; int cnt24; void **arr28; };
struct S_981D0_VObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); };
struct S_981D0_Item { char pad0[4]; S_981D0_VObj *unk4; };

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

void C_00097FD0::func_000981D0(void *a, void *b, int c)
{
    S_981D0_Owner *owner;
    int mode;
    int t;
    int i;

    if (a == 0) {
        return;
    }
    if (((S_981D0_Arg *)a)->cnt24 == 0) {
        return;
    }
    owner = (S_981D0_Owner *)unk198;
    mode = owner->unk1C8 ? mode1 : mode0;
    if (mode != 3) {
        t = mode * 15;
        for (i = 0; i < 15; i++) {
            int idx = arr2c[t + i];
            if (idx != -1) {
                S_981D0_Mid *mid = owner->unk64;
                mid->unk484->func_0001B820(mid->unk3AC->arr28[idx]);
            }
            idx = arrE0[t + i];
            if (idx == -1) {
                break;
            }
            ((S_981D0_Item *)((S_981D0_Arg *)a)->arr28[idx])->unk4->v4();
        }
    }
}

static __forceinline void Refresh_000988B0(char **lp, char *a, int flag)
{
    int j;
    int k;
    int n;
    char *o;

    for (j = 0; j < *(int *)(*lp + 0x1b8); j++) {
        if (*(int *)(*(char ***)(*lp + 0x1c8))[j] == 1) {
            for (k = 0; k < *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2554); k++) {
                n = *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4);
                o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                ((void (__fastcall *)(void *))(*(void ***)o)[6])(o);
                if (!flag) {
                    o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                    ((void (__fastcall *)(void *))(*(void ***)o)[4])(o);
                }
            }
        } else {
            n = *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268);
            o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
            ((void (__fastcall *)(void *))(*(void ***)o)[6])(o);
            if (!flag) {
                o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                ((void (__fastcall *)(void *))(*(void ***)o)[4])(o);
            }
        }
        if (*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x40) == 0)
            flag = 0;
    }
}

static __forceinline void Refresh5_000988B0(char **lp, char *a)
{
    int flag = 1;
    int j;
    int k;
    int n;
    char *o;

    for (j = 0; j < *(int *)(*lp + 0x1b8); j++) {
        if (*(int *)(*(char ***)(*lp + 0x1c8))[j] == 1) {
            for (k = 0; k < *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2554); k++) {
                n = *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4);
                o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                ((void (__fastcall *)(void *))(*(void ***)o)[6])(o);
                if (!flag) {
                    o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                    ((void (__fastcall *)(void *))(*(void ***)o)[4])(o);
                }
            }
        } else {
            n = *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268);
            o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
            ((void (__fastcall *)(void *))(*(void ***)o)[6])(o);
            if (!flag) {
                o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                ((void (__fastcall *)(void *))(*(void ***)o)[4])(o);
            }
        }
        if (*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x40) == 0)
            flag = 0;
    }
}

static __forceinline void Refresh4_000988B0(char **lp, char *a, int flag)
{
    int j;
    int k;
    char *o;
    int n;

    for (j = 0; j < *(int *)(*lp + 0x1b8); j++) {
        if (*(int *)(*(char ***)(*lp + 0x1c8))[j] == 1) {
            for (k = 0; k < *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2554); k++) {
                n = *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4);
                o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                ((void (__fastcall *)(void *))(*(void ***)o)[6])(o);
                if (!flag) {
                    o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                    ((void (__fastcall *)(void *))(*(void ***)o)[4])(o);
                }
            }
        } else {
            n = *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268);
            o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
            ((void (__fastcall *)(void *))(*(void ***)o)[6])(o);
            if (!flag) {
                o = *(char **)((*(char ***)(a + 0x28))[n] + 4);
                ((void (__fastcall *)(void *))(*(void ***)o)[4])(o);
            }
        }
        if (*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x40) == 0)
            flag = 0;
    }
}

static __forceinline void Refresh3_000988B0(char **lp, char *a, int flag)
{
    int j;
    int k;

    for (j = 0; j < *(int *)(*lp + 0x1b8); j++) {
        if (*(int *)(*(char ***)(*lp + 0x1c8))[j] == 1) {
            for (k = 0; k < *(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2554); k++) {
                ((void (__fastcall *)(void *))(*(void ***)(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4)] + 4)))[6])(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4)] + 4));
                if (!flag) {
                    ((void (__fastcall *)(void *))(*(void ***)(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4)] + 4)))[4])(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x2558 + k * 4)] + 4));
                }
            }
        } else {
            ((void (__fastcall *)(void *))(*(void ***)(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268)] + 4)))[6])(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268)] + 4));
            if (!flag) {
                ((void (__fastcall *)(void *))(*(void ***)(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268)] + 4)))[4])(*(char **)((*(char ***)(a + 0x28))[*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x268)] + 4));
            }
        }
        if (*(int *)((*(char ***)(*lp + 0x1c8))[j] + 0x40) == 0)
            flag = 0;
    }
}

static __forceinline void Refresh2_000988B0(char *a, char **lp, int flag)
{
    Refresh_000988B0(lp, a, flag);
}

int __fastcall func_000988B0(char *self, int unused, char *a, char *b)
{
    int i;
    char **list;
    int count;
    int p;
    int j;
    int k;
    int m;
    int off;
    int found;
    char *mgr;

    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0: list = *(char ***)(self + 0x0); break;
        case 1: list = *(char ***)(self + 0x4); break;
        case 2: list = *(char ***)(self + 0x8); break;
        default: list = 0; break;
        }
        switch (i) {
        case 0: count = *(int *)(self + 0xc); break;
        case 1: count = *(int *)(self + 0x10); break;
        case 2: count = *(int *)(self + 0x14); break;
        default: count = 0; break;
        }
        for (p = 0; p < count; p++) {
            for (j = 0; j < *(int *)(list[p] + 0x1b8); j++) {
                if (*(int *)(*(char ***)(list[p] + 0x1c8))[j] == 1) {
                    for (k = 0; k < *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2554); k++) {
                        if (*(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2558 + k * 4) != -1)
                            continue;
                        found = 0;
                        for (m = 0; m < *(int *)(a + 0x24); m++) {
                            if (found)
                                break;
                            if (func_001EA426((*(char ***)(a + 0x28))[m] + 0x18, (*(char ***)(list[p] + 0x1c8))[j] + 0x25f8 + k * 0x78) == 0) {
                                *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2558 + k * 4) = m;
                                found = 1;
                            }
                        }
                        for (m = 0; m < *(int *)(b + 0x24); m++) {
                            if (found)
                                break;
                            for (off = 0; off < 0x2d0; off += 0x78) {
                                if (func_001EA426((*(char ***)(b + 0x28))[m] + off + 0x128, (*(char ***)(list[p] + 0x1c8))[j] + 0x25f8 + k * 0x78) == 0) {
                                    *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2580 + k * 4) = 1;
                                    *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2558 + k * 4) = m;
                                    found = 1;
                                }
                            }
                        }
                        for (m = 0; m < *(int *)(*(char **)(*(char **)(*(char **)(self + 0x198) + 0x64) + 0x530) + 0x28); m++) {
                            if (found)
                                break;
                            mgr = *(char **)(*(char **)(*(char **)(self + 0x198) + 0x64) + 0x530);
                            if (func_001EA426(*(char **)((*(char ***)(mgr + 0x34))[m] + 0x14), (*(char ***)(list[p] + 0x1c8))[j] + 0x25f8 + k * 0x78) == 0) {
                                *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2580 + k * 4) = 1;
                                *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x25a8 + k * 4) = 1;
                                *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2558 + k * 4) = m;
                                found = 1;
                            }
                        }
                        for (m = 0; m < *(int *)(*(char **)(*(char **)(self + 0x198) + 0x64) + 0x568); m++) {
                            if (found)
                                break;
                            mgr = *(char **)(*(char **)(self + 0x198) + 0x64);
                            if (func_001EA426((*(char ***)(mgr + 0x56c))[m] + 0x60, (*(char ***)(list[p] + 0x1c8))[j] + 0x25f8 + k * 0x78) == 0) {
                                *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x2558 + k * 4) = m;
                                *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x25d0 + k * 4) = 1;
                                found = 1;
                            }
                        }
                    }
                } else if (*(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x268) == -1 && (*(char ***)(list[p] + 0x1c8))[j][0x26c] != 0) {
                    for (m = 0; m < *(int *)(a + 0x24); m++) {
                        if (func_001EA426((*(char ***)(a + 0x28))[m] + 0x18, (*(char ***)(list[p] + 0x1c8))[j] + 0x26c) == 0)
                            *(int *)((*(char ***)(list[p] + 0x1c8))[j] + 0x268) = m;
                    }
                }
            }
        }
    }

    if (*(int *)(self + 0x18) != 3) {
        switch (*(char **)(*(char **)(self + 0x198) + 0x1c8) ? *(int *)(self + 0x1c) : *(int *)(self + 0x18)) {
        case 0: list = *(char ***)(self + 0x0); break;
        case 1: list = *(char ***)(self + 0x4); break;
        case 2: list = *(char ***)(self + 0x8); break;
        default: list = 0; break;
        }
        switch (*(char **)(*(char **)(self + 0x198) + 0x1c8) ? *(int *)(self + 0x1c) : *(int *)(self + 0x18)) {
        case 0: count = *(int *)(self + 0xc); break;
        case 1: count = *(int *)(self + 0x10); break;
        case 2: count = *(int *)(self + 0x14); break;
        default: count = 0; break;
        }
        for (p = 0; p < count; p++) {
            if (*(int *)(list[p] + 0x48e0) == 0 && *(int *)(list[p] + 0x1bc) != 0)
                Refresh4_000988B0(&list[p], a, 1);
        }
    }
    return 1;
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
