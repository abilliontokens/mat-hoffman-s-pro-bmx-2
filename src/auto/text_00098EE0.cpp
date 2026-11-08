/* 9 functions from 0x00098EE0 to 0x00099E50, found by Ghidra. */
#include "common.h"

struct S_00097FD0_owner;
struct S_00098EE0_release { void func_0001B8A0(void *); };
struct S_00098EE0_tbl {
    char pad0[0x24];
    int count;
    void **arr;
};
struct S_00098EE0_mgr {
    char pad0[0x3ac];
    S_00098EE0_tbl *f3ac;
    char pad3b0[0x484 - 0x3b0];
    S_00098EE0_release *f484;
};
struct S_00098EE0_self { void func_00097890(char *name); };
extern int func_001EA426(const char *, const char *);
extern char D_0027A30C[];
extern "C" int memcmp(const void *, const void *, unsigned int);

#define FLD(T, p, off) (*(T *)((char *)(p) + (off)))
extern "C" char *strcpy(char *, const char *);

#define FLD(T, p, off) (*(T *)((char *)(p) + (off)))
extern "C" char *strcpy(char *, const char *);

struct S_001B65E0_obj {
    void func_001B65E0(void);
    void func_001B65F0(void);
};

struct S_00099A60_vt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
struct S_00099A60_ent {
    char pad0[4];
    S_00099A60_vt *f4;
    char pad8[8];
    int f10;
};
struct S_00099A60_arg {
    char pad0[0x24];
    int f24;
    S_00099A60_ent **f28;
};

extern f32 D_00275544;

struct C_00096870 {
    int f0;
    char pad4[0x40 - 4];
    int f40;
    char pad44[0x1a4 - 0x44];
    f32 f1a4;
    char pad1a8[0xc];
    int f1b4;
    int f1b8;
    char pad1bc[0xc];
    C_00096870 **f1c8;
    int f1cc;
    char pad1d0[0x2554 - 0x1d0];
    int f2554;
    char pad2558[0x48e0 - 0x2558];
    int f48e0;
    char pad48e4[0x63b0 - 0x48e4];
    f32 f63b0[1];
    void func_00096750();
    void func_00096870(const char *name);
    void func_00096450(int idx);
    void func_00096200(int idx);
    void func_00096AB0(void);
    void func_00097050(S_00097FD0_owner *owner);
};

struct S_00099D40_Slots {
    int func_0005C040(int a, int b, int c, int d);
    int func_0005C070(int a, int b, int c);
};

struct S_00097FD0_owner {
    char pad0[0x64];
    void *f64;
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
    void func_00098EE0(S_00099A60_arg *a, int b);
    void func_000999B0(void);
    void func_00099500(const char *name);
    void func_00099590(void);
    void func_000999E0(void);
    void func_00099D40(int param);
    void func_00099A60(S_00099A60_arg *arg);
    void func_00099600(f32 lo, f32 hi);
    void func_00099750(S_00097FD0_owner *owner, f32 hi);
};

void C_00097FD0::func_00098EE0(S_00099A60_arg *a, int b)
{
    C_00096870 **list;
    int *slotp;
    int count;
    int pass;
    int k;
    int j;
    int m;
    int n;
    int q;
    int z;
    int off;
    int active;
    int x;
    int y;
    int special;
    int found;
    char buf[0x104];

    for (pass = 0; pass < 3; pass++) {
        count = 0;
        switch (pass) {
        case 0: list = arr0; break;
        case 1: list = arr1; break;
        case 2: list = arr2; break;
        default: list = 0; break;
        }
        switch (pass) {
        case 0: count = cnt0; break;
        case 1: count = cnt1; break;
        case 2: count = cnt2; break;
        }
        slotp = (int *)((char *)this + 0x2c) + pass * 15;
        for (k = 0; k < 15; k++) {
            int id = *slotp;
            if (id != -1) {
                S_00098EE0_mgr *mgr = (S_00098EE0_mgr *)unk198->f64;
                mgr->f484->func_0001B8A0(mgr->f3ac->arr[id]);
            }
            slotp++;
        }
        for (j = 0; j < count; j++) {
            if (list[j]->f48e0 == 0)
                list[j]->func_00096750();
            active = 0;
            if (unk198->unk1c8 != 0 && list[j]->f1b4 != 0)
                active = 1;
            x = 0;
            y = 0;
            if (FLD(int, list[j], 0x1a8) != 0)
                x = 1;
            if (FLD(int, list[j], 0x1ac) != 0)
                y = 1;
            special = 0;
            if (y && list[j]->f48e0 == 0 && !active && !x)
                special = 1;
            if (list[j]->f48e0 != 0 && !active && !x && !y)
                continue;
            if (FLD(char, list[j], 0x12c) != 0)
                ((S_00098EE0_self *)this)->func_00097890((char *)list[j] + 0x12c);
            for (off = 0; off < 0x5a0; off += 0x78) {
                if (((char *)list[j])[off + 0x1910] != 0) {
                    found = -1;
                    for (n = 0; n < ((S_00098EE0_mgr *)unk198->f64)->f3ac->count && found == -1; n++) {
                        if (!func_001EA426((char *)list[j] + off + 0x1910,
                                           (char *)((S_00098EE0_mgr *)unk198->f64)->f3ac->arr[n] + 0xa0))
                            found = n;
                    }
                    {
                        S_00098EE0_mgr *mgr = (S_00098EE0_mgr *)unk198->f64;
                        mgr->f484->func_0001B8A0(mgr->f3ac->arr[found]);
                    }
                }
                if (((char *)list[j])[off + 0x290] != 0) {
                    found = -1;
                    for (n = 0; n < ((S_00098EE0_mgr *)unk198->f64)->f3ac->count && found == -1; n++) {
                        if (!func_001EA426((char *)list[j] + off + 0x290,
                                           (char *)((S_00098EE0_mgr *)unk198->f64)->f3ac->arr[n] + 0xa0))
                            found = n;
                    }
                    {
                        S_00098EE0_mgr *mgr = (S_00098EE0_mgr *)unk198->f64;
                        mgr->f484->func_0001B8A0(mgr->f3ac->arr[found]);
                    }
                }
            }
            for (m = 0; m < list[j]->f1b8; m++) {
                if (special && memcmp((char *)list[j] + 0xb4, D_0027A30C, 15) != 0)
                    continue;
                list[j]->f1c8[m]->f40 = 0;
                if (list[j]->f1c8[m]->f0 != 1)
                    continue;
                for (n = 0; n < list[j]->f1c8[m]->f2554; n++) {
                    ((int *)((char *)list[j]->f1c8[m] + 0x6388))[n] = 0;
                    if (((int *)((char *)list[j]->f1c8[m] + 0x2580))[n] == 0 &&
                        ((int *)((char *)list[j]->f1c8[m] + 0x25d0))[n] == 0) {
                        for (z = 0; z < FLD(int, a->f28[((int *)((char *)list[j]->f1c8[m] + 0x2558))[n]], 0x8); z++) {
                            void *item = FLD(void **, a->f28[((int *)((char *)list[j]->f1c8[m] + 0x2558))[n]], 0x10c)[z];
                            if (FLD(int, item, 4) == 4) {
                                found = -1;
                                for (q = 0; q < ((S_00098EE0_mgr *)unk198->f64)->f3ac->count && found == -1; q++) {
                                    if (!func_001EA426((char *)item + 0x110,
                                                       (char *)((S_00098EE0_mgr *)unk198->f64)->f3ac->arr[q] + 0xa0))
                                        found = q;
                                }
                                {
                                    S_00098EE0_mgr *mgr = (S_00098EE0_mgr *)unk198->f64;
                                    mgr->f484->func_0001B8A0(mgr->f3ac->arr[found]);
                                }
                            } else if (FLD(int, item, 4) == 1) {
                                found = -1;
                                for (q = 0; q < ((S_00098EE0_mgr *)unk198->f64)->f3ac->count && found == -1; q++) {
                                    if (!func_001EA426((char *)item + 0x114,
                                                       (char *)((S_00098EE0_mgr *)unk198->f64)->f3ac->arr[q] + 0xa0))
                                        found = q;
                                }
                                {
                                    S_00098EE0_mgr *mgr = (S_00098EE0_mgr *)unk198->f64;
                                    mgr->f484->func_0001B8A0(mgr->f3ac->arr[found]);
                                }
                            }
                        }
                    }
                    strcpy(buf, (char *)list[j]->f1c8[m] + 0x2ff8 + n * 0x78);
                    if (buf[0] != 0) {
                        found = 0;
                        for (q = 0; q < ((S_00098EE0_mgr *)unk198->f64)->f3ac->count && !found; q++) {
                            void *item = ((S_00098EE0_mgr *)unk198->f64)->f3ac->arr[q];
                            if (!func_001EA426((char *)item + 0xa0, buf)) {
                                S_00098EE0_mgr *mgr = (S_00098EE0_mgr *)unk198->f64;
                                mgr->f484->func_0001B8A0(item);
                                found = 1;
                            }
                        }
                    }
                }
            }
        }
    }
}

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

void C_00097FD0::func_00099600(f32 lo, f32 hi) {
    C_00096870 **list;
    int count;
    int i;
    int j;
    int k;
    int m;
    f32 v;

    if (mode0 <= 3) {
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
                v = list[j]->f1a4;
                if (v < hi && v >= lo) {
                    list[j]->func_00096AB0();
                }
                for (k = 0; k < list[j]->f1b8; k++) {
                    if (list[j]->f1c8[k]->f0 == 1) {
                        for (m = 0; m < list[j]->f1c8[k]->f2554; m++) {
                            v = list[j]->f1c8[k]->f63b0[m];
                            if (v < hi && v >= lo) {
                                list[j]->f1c8[k]->func_00096450(m);
                            }
                        }
                    }
                }
            }
        }
    }
}

void C_00097FD0::func_00099750(S_00097FD0_owner *owner, f32 hi) {
    C_00096870 **list;
    int count;
    int i;
    int j;
    int k;
    int m;
    int flag;
    int mode;
    f32 v;

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
        for (j = 0; j < count; j++) {
            v = list[j]->f1a4;
            if ((v < hi && v >= D_00275544) || (list[j]->f48e0 != 0 && list[j]->f1b4 == 0)) {
                list[j]->func_00097050(owner);
            }
            for (k = 0; k < list[j]->f1b8; k++) {
                if (list[j]->f1c8[k]->f0 == 1) {
                    for (m = 0; m < list[j]->f1c8[k]->f2554; m++) {
                        v = list[j]->f1c8[k]->f63b0[m];
                        if ((v < hi && v >= D_00275544) || list[j]->f1c8[k]->f40 != 0) {
                            list[j]->f1c8[k]->func_00096200(m);
                        }
                    }
                }
            }
        }
    }
    for (i = 0; i < 3; i++) {
        if (i != mode0) {
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
                if (list[j]->f48e0 != 0) {
                    list[j]->func_00097050(owner);
                    for (k = 0; k < list[j]->f1b8; k++) {
                        if (list[j]->f1c8[k]->f0 == 1) {
                            for (m = 0; m < list[j]->f1c8[k]->f2554; m++) {
                                list[j]->f1c8[k]->func_00096200(m);
                            }
                        }
                    }
                }
            }
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

void C_00097FD0::func_00099A60(S_00099A60_arg *arg) {
    C_00096870 **list;
    int count;
    int i;
    int j;
    int m;
    char buf1[0x104];
    char buf2[0x104];

    for (i = 0; i < arg->f24; i++) {
        S_00099A60_ent *e = arg->f28[i];
        if (e->f10)
            e->f4->v6();
        else
            e->f4->v4();
    }
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
            int flag = 0;
            if (unk198 != 0 && unk198->unk1c8 != 0 && list[j]->f1b4 != 0)
                flag = 1;
            if (list[j]->f48e0 != 0 && !flag) {
                list[j]->func_00097050(unk198);
                continue;
            }
            for (m = 0; m < list[j]->f1cc; m++) {
                if (((char *)list[j])[0x2450 + m * 0x78] != 0) {
                    ((S_001B65E0_obj *)*(void **)((char *)list[j] + 0x4880 + m * 4))->func_001B65E0();
                    ((S_001B65E0_obj *)*(void **)((char *)list[j] + 0x4880 + m * 4))->func_001B65F0();
                }
            }
            for (m = 0; m < list[j]->f1b8; m++) {
                if (list[j]->f1c8[m]->f0 != 1)
                    continue;
                for (int n = 0; n < list[j]->f1c8[m]->f2554; n++) {
                    strcpy(buf1, (char *)list[j]->f1c8[m] + 0x5578 + n * 0x78);
                    strcpy(buf2, (char *)list[j]->f1c8[m] + 0x50c8 + n * 0x78);
                    if (buf2[0] != 0 && buf1[0] != 0) {
                        ((S_001B65E0_obj *)*(void **)((char *)list[j]->f1c8[m] + 0x63d8 + n * 4))->func_001B65E0();
                        ((S_001B65E0_obj *)*(void **)((char *)list[j]->f1c8[m] + 0x63d8 + n * 4))->func_001B65F0();
                    }
                    strcpy(buf1, (char *)list[j]->f1c8[m] + 0x5ed8 + n * 0x78);
                    strcpy(buf2, (char *)list[j]->f1c8[m] + 0x5a28 + n * 0x78);
                    if (buf1[0] != 0 && buf2[0] != 0) {
                        ((S_001B65E0_obj *)*(void **)((char *)list[j]->f1c8[m] + 0x6400 + n * 4))->func_001B65E0();
                        ((S_001B65E0_obj *)*(void **)((char *)list[j]->f1c8[m] + 0x6400 + n * 4))->func_001B65F0();
                    }
                }
            }
        }
    }
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

