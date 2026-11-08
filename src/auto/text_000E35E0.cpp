/* 10 functions from 0x000E35E0 to 0x000E4220, found by Ghidra. */
#include "common.h"

extern int D_00277038;

void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct S_000E35E0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int v16();
};

struct S_000E3790_Gfx {
    char padA30[0xA30];
    char *fA30;
};

struct S_000E3790_Sub {
    char pad0[4];
    S_000E3790_Gfx *p4;
};

struct S_000E35E0_Root {
    char pad0[8];
    S_000E35E0_Obj **f8;
    char padC[0x2D4];
    int *p2E0;
    char pad2E4[4];
    S_000E3790_Sub *p2E8;
    struct LookupObj_E38 *p2EC;
};

struct ClampObj_E38 {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_E38 {
    ClampObj_E38 *func_0018C070();
};

struct SubElem_E38 {
    ClampObj_E38 *func_001D5AA0();
};

struct LookupObj_E38 {
    int *func_0018C160(int a);
};

extern float D_00275AEC;
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;

struct C_000E3810 {
    char pad0[0x320];
    SubElem_E38 *a320[8][8];
    void func_000E3810(void);
    void func_001578D0(void);
};

extern S_000E35E0_Root *D_002A8490;
extern char D_0027FC6C[];

struct C_000E3C90_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B17D0(char *s);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000E3D30_Item {
    char pad0[0x38];
    int w38;
    char pad3C[0x1C];
    unsigned char flags;
    /* defined in the class (the compiler inlines it into the first calls only) */
    void func_00051120(short a) {
        w38 = ((int)a << 24) | (w38 & 0xffffff);
        flags |= 2;
    }
    void func_001D5AD0();
};

struct C_000E3D30_Btn {
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    C_000E3D30_Btn *f24, *f28, *f2C, *f30;
    char pad34[0x1C];
    C_000E3D30_Btn *f50, *f54;
    char pad58[0x10];
    C_000E3D30_Btn *f68, *f6C;
};
extern S_002B91AC *D_002B91AC;

struct C_000E35E0 {
    char pad0[0x280];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    char pad294[0x10];
    int f2A4;
    int f2A8;
    char pad2AC[0x14];
    int f2C0;
    char pad2C4[8];
    short f2CC;
    char pad2CE[0x12];
    C_000E3C90_Widget *f2E0[10];
    char pad308[0x18];
    C_000E3D30_Item *f320[8][8];
    int f420[8];
    void func_000E3D30(void);
    void func_000E35E0(int param_1);
    void func_000E3790(void);
    void func_000E3C90(void);
    void func_000E3AC0(void);
    void func_000E3BA0(void);
    void func_000E3FC0(void);
    void func_000E40F0(void);
    void func_000E3640(void);
};

void C_000E35E0::func_000E35E0(int param_1) {
    int i;

    for (i = 8; i >= 0; i--) {
        if (i != f420[param_1 == 0]) {
            S_000E35E0_Obj *obj = D_002A8490->f8[i + 5];
            if (obj != 0 && obj->v16() == 1) {
                f420[param_1] = i;
            }
        }
    }
}

extern "C" void *memset(void *, int, unsigned int);
void C_000E35E0::func_000E3640(void) {
    int list[8];
    int count;
    int i, j, k;

    memset(list, 0, sizeof(list));
    count = 0;
    for (i = 0; i < 8; i++) {
        S_000E35E0_Obj *obj = D_002A8490->f8[i + 5];
        if (obj != 0 && obj->v16() == 1) {
            list[count] = i;
            count++;
        }
    }
    f290 = count;
    if (count == 0) {
        for (i = 0; i < 8; i++) {
            f2E0[8 + i]->func_001B17D0(D_0027FC6C);
        }
        return;
    }
    j = 0;
    for (k = 0; k < 8; k++) {
        f420[k] = list[j];
        if (j >= f290 - 1)
            j = 0;
        else
            j++;
    }
}

void C_000E35E0::func_000E3790(void) {
    char dest[0x40];
    char buf[4];
    int i;

    for (i = 0; i < f280; i++) {
        func_001ADCC0(buf, 3, (char *)&D_00277038, i + 1);
        func_001AC330(dest, D_002A8490->p2E8->p4->fA30, buf);
        f2E0[i]->func_001B17D0(dest);
    }
}

void C_000E3810::func_000E3810(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_E38 *o;
    SubElem_E38 **e;
    LookupObj_E38 *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_E38 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = &a320[1][0];
    i = 8;
    do {
        o = e[-8]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[0]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[8]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[16]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[24]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[32]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[40]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = e[48]->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

void C_000E35E0::func_000E3AC0(void) {
    int i;
    for (i = 0; i < f280; i++) {
        f2E0[i]->func_001B1980();
        if (i == f284) {
            f2E0[i]->func_001B2270(0xffbfa35a);
            f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
        } else if (i == f2C0) {
            f2E0[i]->func_001B2270(0xffcccccc);
            f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0.0f, 0.2f, 0);
        } else {
            f2E0[i]->func_001B2270(0xffcccccc);
            f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0xbf800000, 0xff, 1.0f, 0, 0.0f, 0.0f, 0);
        }
    }
}

void C_000E35E0::func_000E3BA0(void) {
    int i;
    func_000E3790();
    for (i = 0; i < f280; i++) {
        f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, 0xbf800000, 0xff, 1.0f, 0, 0.0f, 0.0f, 0);
        f2E0[i]->func_001B1980();
        if (i == f284) {
            f2E0[i]->func_001B2270(0xffbfa35a);
            f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
        } else {
            f2E0[i]->func_001B2270(0xffcccccc);
            f2E0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0.0f, 0);
        }
    }
}

void C_000E35E0::func_000E3C90(void) {
    int i;

    for (i = 0; i < f280; i++) {
        f2E0[i]->func_001B1980();
        if (i == f284) {
            f2E0[i]->func_001B2270(0xffbfa35a);
            f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
        } else {
            f2E0[i]->func_001B2270(0xffcccccc);
            f2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0.0f, 0);
        }
    }
}

void C_000E35E0::func_000E3D30(void) {
    int i;
    (f2A4 ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
    (f2A8 ? D_002B91AC->f6C : D_002B91AC->f54)->func_001D5AD0();
    for (i = 0; i < f280; i++) {
        C_000E3D30_Item *p;
        if (i == 0) {
            p = f320[0][f420[0]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[0][f420[0]]->func_001D5AD0();
        } else if (i == 1) {
            p = f320[1][f420[1]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[1][f420[1]]->func_001D5AD0();
        } else if (i == 2) {
            p = f320[2][f420[2]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[2][f420[2]]->func_001D5AD0();
        } else if (i == 3) {
            p = f320[3][f420[3]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[3][f420[3]]->func_001D5AD0();
        } else if (i == 4) {
            p = f320[4][f420[4]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[4][f420[4]]->func_001D5AD0();
        } else if (i == 5) {
            p = f320[5][f420[5]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[5][f420[5]]->func_001D5AD0();
        } else if (i == 6) {
            p = f320[6][f420[6]];
            p->w38 = (f2CC << 24) | (p->w38 & 0xffffff);
            p->flags |= 2;
            f320[6][f420[6]]->func_001D5AD0();
        } else if (i == 7) {
            f320[7][f420[7]]->func_00051120(f2CC);
            f320[7][f420[7]]->func_001D5AD0();
        }
    }
    S_002B91AC *g = D_002B91AC;
    g->f24->func_001D5AD0();
    g->f28->func_001D5AD0();
    g->f2C->func_001D5AD0();
    g->f30->func_001D5AD0();
}

void C_000E35E0::func_000E3FC0(void) {
 if (D_002A8490->p2E0[1] == 10) {
 int other = f420[f284 == 0];
 while (f28C) {
 if (other != f420[f284]) {
 S_000E35E0_Obj *obj = D_002A8490->f8[f420[f284]+5];
 if (obj && obj->v16() == 1) { f28C = 0; continue; }
 }
 ++f420[f284];
 if (f420[f284] > 7) f420[f284] = 0;
 }
 } else {
 while (f28C) {
 S_000E35E0_Obj *obj = D_002A8490->f8[f420[f284]+5];
 if (obj && obj->v16() == 1) f28C = 0;
 else { ++f420[f284]; if (f420[f284] > 7) f420[f284] = 0; }
 }
 }
}

void C_000E35E0::func_000E40F0(void) {
    if (D_002A8490->p2E0[1] == 10) {
        int other = f420[f284 == 0];
        while (f28C != 0) {
            if (other != f420[f284]) {
                S_000E35E0_Obj *obj = D_002A8490->f8[f420[f284] + 5];
                if (obj != 0 && obj->v16() == 1) {
                    f28C = 0;
                    continue;
                }
            }
            f420[f284]--;
            if (f420[f284] < 0) {
                f420[f284] = 7;
            }
        }
    } else {
        while (f28C != 0) {
            S_000E35E0_Obj *obj = D_002A8490->f8[f420[f284] + 5];
            if (obj != 0 && obj->v16() == 1) {
                f28C = 0;
                continue;
            }
            f420[f284]--;
            if (f420[f284] < 0) {
                f420[f284] = 7;
            }
        }
    }
}

