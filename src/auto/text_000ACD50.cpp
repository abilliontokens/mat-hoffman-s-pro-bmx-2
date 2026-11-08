/* 7 functions from 0x000ACD50 to 0x000AD5C0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct C_000ACE60_s4 {
    int a;
    int b;
    int c;
    int d;
    int func_000A4150(char *name);
    int func_000A4250(void);
    int func_000A4400(char *name);
};

struct C_000ACF30_Game;
struct C_000ACF30_Obj;

struct C_000ACE60 {
    int unk0;
    char pad4[0x20];
    int unk24;
    C_000ACE60_s4 arr1[8];
    C_000ACE60_s4 arr2[8];
    C_000ACE60_s4 arr3[8];
    C_000ACF30_Obj *arr4[8];
    int arr5[8];
    C_000ACE60 *func_000ACE60(int param);
    void func_001577A0(void *p, int n);
    int func_000ACF30(C_000ACF30_Game *game, int count, int flag3, int flag4);
};

struct C_000ACF00 {
    int unk0;
    void *func_000ACF00(int flags);
};

struct C_000ACE30 {
    int unk0;
    void *func_000ACE30(int flags);
};

struct C_00157600 {
    void func_00157600(int param_1);
};

extern int D_0027C724;
extern int D_0027C604;

struct C_0027C724 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_0027C604 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_000AB4F0 {
    void func_000AB4F0(void *param_1);
};

struct C_000AADB0 {
    void func_000AADB0(void *param_1);
};

struct C_000ACD50 {
    char pad0[0x28];
    void *unk28;
    char pad2C[0x514];
    C_0027C724 *unk540;
    void func_000ACD50(void);
};

struct C_000ACDB0 {
    char pad0[0x28];
    void *unk28;
    char pad2C[0x520];
    C_0027C604 *unk54C;
    void func_000ACDB0(void);
};

struct C_000ACE10 {
    char pad0[0x2C];
    int unk2C;
    void func_00189770(void);
    void func_000ACE10(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);

static inline int C_000ACF30_strlen(const char *s)
{
    const char *p = s + 1;
    const char *q = s;
    while (*q++) {
    }
    return q - p;
}

template <class T> inline T C_000ACF30_min(const volatile T &a, const volatile T &b)
{
    T x = a;
    T y = b;
    return x > y ? y : x;
}

struct C_000ACF30_Pos {
    char pad0[0x24];
    C_000ACE60_s4 a[8];
    C_000ACE60_s4 b[8];
};

struct C_000ACF30_Stage {
    C_000ACF30_Stage *func_000A4570(void);
    void func_000A4D30(void);
};

struct C_000ACF30_Game {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(int a); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(void *a); virtual void v90(); virtual void v91(void *a);
    char pad4[0x3e0];
    int f3E4;
    char pad3E8[0xa0];
    int f488;
    char pad48C[0x34];
    int f4C0;
    char pad4C4[0x18];
    C_000ACF30_Pos *f4DC;
    C_000ACE60 *f4E0;
    char pad4E4[0x48];
    C_000ACF30_Stage *f52C;
};

struct C_000ACF30_Obj {
    char pad0[0x1244];
    void *f1244;
    C_000ACF30_Obj *func_0010E920(int a);
    void func_0010F320(C_000ACF30_Game *game, int a, int b, C_000ACE60_s4 c, int d, C_000ACE60_s4 e,
                       C_000ACE60_s4 f, C_000ACE60_s4 g, int h, int i);
    void func_0010DA70(void *p);
    void func_00108370(void);
    void func_001083E0(void);
};

struct C_000ACF30_Blk {
    char b[0x18];
};

struct C_000ACF30_Lvl {
    char pad0[0x150];
    char names150[8][8];
    int f190[8];
    int f1B0[8];
    char pad1D0[0x24];
    char names1F4[8][8];
    char pad234[0x164];
    C_000ACF30_Blk f398[8];
    char pad458[4];
    int f45C;
};

struct C_000ACF30_Mgr {
    void *func_0001CD90(int a);
};

struct C_000ACF30_Glob {
    char pad0[4];
    C_000ACF30_Mgr *f4;
    char pad8[0x2d8];
    C_000ACF30_Lvl *f2E0;
    int f2E4;
};

struct C_000ACF30_Con {
    void func_0013C1D0(int *a);
    void func_0013B260(int a);
    int func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    int func_0013DFF0(char *name, int a2);
};

struct C_000ACF30_O61 {
    void func_00161680(void);
};

struct C_000ACF30_O62 {
    void func_001B2640(void);
};

extern C_000ACF30_Glob *D_002A8490;
extern C_000ACF30_Con *D_002BEAAC;
extern C_000ACF30_O61 *D_002A829C;
extern C_000ACF30_O62 *D_002AA6C0;
extern int D_00040000;
extern C_000ACE60_s4 D_002A2754;
extern char D_002772CC[], D_002A5348[], D_00276C34[], D_0027CAC4[], D_00275678[], D_002A5870[];
extern char D_002A47F0[], D_002A5FA8[], D_002A48F8[], D_002A60B0[];

void C_000ACD50::func_000ACD50(void) {
    void *func_001E8A44(...);
    C_0027C724 *p;
    if (unk540 == 0) {
        p = (C_0027C724 *)func_001E8A44(0x2c);
        if (p != 0) {
            ((C_00157600 *)p)->func_00157600(1);
            p->vtbl = &D_0027C724;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        unk540 = p;
    }
    ((C_000AB4F0 *)unk540)->func_000AB4F0(unk28);
}

void C_000ACDB0::func_000ACDB0(void) {
    void *func_001E8A44(...);
    C_0027C604 *p;
    if (unk54C == 0) {
        p = (C_0027C604 *)func_001E8A44(0x2c);
        if (p != 0) {
            ((C_00157600 *)p)->func_00157600(1);
            p->vtbl = &D_0027C604;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        unk54C = p;
    }
    ((C_000AADB0 *)unk54C)->func_000AADB0(unk28);
}

void C_000ACE10::func_000ACE10(void) {
    void __stdcall func_000A3BA0(int);
    func_000A3BA0(unk2C);
    func_00189770();
}

void *C_000ACE30::func_000ACE30(int flags) {
    extern int D_0027B1A4;
    void func_001E891B(void *);
    int func_001BAEC0(...);
    unk0 = (int)&D_0027B1A4;
    func_001BAEC0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_000ACE60 *C_000ACE60::func_000ACE60(int param) {
    extern int D_0027B274;
    C_000ACE60_s4 *p;
    int n;
    int i;

    ((C_00157600 *)this)->func_00157600(param);
    unk0 = (int)&D_0027B274;
    p = arr1;
    n = 8;
    do {
        p->a = 0;
        p->b = 1;
        p->c = 1;
        p->d = 1;
        p++;
    } while (--n);
    p = arr2;
    n = 8;
    do {
        p->a = 0;
        p->b = 1;
        p->c = 1;
        p->d = 1;
        p++;
    } while (--n);
    p = arr3;
    n = 8;
    do {
        p->a = 0;
        p->b = 0;
        p->c = 0;
        p->d = 0;
        p++;
    } while (--n);
    unk24 = 0;
    for (i = 0; i < 8; i++) {
        arr4[i] = 0;
        arr5[i] = 0;
    }
    return this;
}

void *C_000ACF00::func_000ACF00(int flags) {
    extern int D_0027B274;
    void func_001E891B(void *);
    int func_00157660(...);
    unk0 = (int)&D_0027B274;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_000ACE60::func_000ACF30(C_000ACF30_Game * volatile game, int count, int volatile flag3, int volatile flag4)
{
    void *func_001E8A44(...);
    C_000ACE60_s4 *p;
    C_000ACF30_Stage *stage;
    C_000ACF30_Obj *obj;
    void *f;
    int i;
    int n;
    int cnt;
    int idx;
    char buf[0x104];
    char name[0x104];

    unk24 = count;
    D_002BEAAC->func_0013C1D0(&D_00040000);
    D_002BEAAC->func_0013B260(0);
    stage = (C_000ACF30_Stage *)func_001E8A44(0x7a90);
    game->f52C = stage ? stage->func_000A4570() : 0;
    game->f52C->func_000A4D30();
    cnt = unk24;
    for (i = 0; i < cnt; i++, cnt = unk24) {
        func_001ADCC0(name, 0x104, D_002772CC, D_002A8490->f2E0->names150[i], D_002A8490->f2E0->f1B0[i] + 1);
        func_001ADCC0(buf, 0x104, D_00276C34, D_002A5348, name);
        D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0);
        arr2[i].func_000A4150(name);
        D_002A829C->func_00161680();
        D_002AA6C0->func_001B2640();
        D_002BEAAC->func_0013DFF0(buf, 1);
    }
    cnt = unk24;
    for (i = 0; i < cnt; i++, cnt = unk24) {
        int lim = 0x103;
        int len = C_000ACF30_strlen(D_002A8490->f2E0->names1F4[i]);
        n = AsmMinI(lim, len);
        func_001E8920(name, D_002A8490->f2E0->names1F4[i], n);
        name[n] = 0;
        func_001ADCC0(buf, 0x104, D_00276C34, D_002A5348, name);
        D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0);
        arr1[i].func_000A4400(name);
        D_002A829C->func_00161680();
        D_002AA6C0->func_001B2640();
        D_002BEAAC->func_0013DFF0(buf, 1);
    }
    func_001ADCC0(buf, 0x104, D_0027CAC4, D_002A5348);
    D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0);
    D_002BEAAC->func_0013B260(0);
    cnt = unk24;
    for (i = 0; i < cnt; i++, cnt = unk24) {
        if (flag3) {
            if (i == 0) {
                arr3[0].func_000A4250();
                p = &arr3[0];
                func_001577A0((void *)p->a, 2);
                func_001577A0((void *)p->b, 2);
                func_001577A0((void *)p->c, 2);
                func_001577A0((void *)p->d, 2);
            }
        } else {
            arr3[i].func_000A4250();
            p = &arr3[i];
            func_001577A0((void *)p->a, 2);
            func_001577A0((void *)p->b, 2);
            func_001577A0((void *)p->c, 2);
            func_001577A0((void *)p->d, 2);
        }
        obj = (C_000ACF30_Obj *)func_001E8A44(0x20d0);
        arr4[i] = obj ? obj->func_0010E920(1) : 0;
        idx = i;
        if (flag3) idx = 0;
        {
            C_000ACF30_Game *g = game;
            arr4[i]->func_0010F320(g, arr1[i].a, arr2[i].a, *p, g->f488,
                                   g->f4DC->a[idx], g->f4DC->b[idx], D_002A2754, g->f3E4, i);
        }
        if (D_002A8490->f2E4) {
            game->f4E0->arr4[i]->func_0010DA70(&D_002A8490->f2E0->f398[i]);
        }
        func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
        arr4[i]->f1244 = D_002A8490->f4->func_0001CD90(game->f4C0);
        f = arr4[i]->f1244;
        if (f) {
            game->v89(f);
            game->v91(arr4[i]->f1244);
        }
        func_001577A0(arr4[i], 0x40e);
        if (D_002A8490->f2E0->f190[i] == 3 || D_002A8490->f2E0->f45C) {
            arr4[i]->func_00108370();
            arr4[i]->func_001083E0();
        }
    }
    if (flag4) {
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
        if (flag3) {
            game->v82(1);
        } else {
            game->v82(unk24);
        }
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    }
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
    D_002BEAAC->func_0013DFF0(buf, 1);
    D_002BEAAC->func_0013B260(0);
    return 1;
}

