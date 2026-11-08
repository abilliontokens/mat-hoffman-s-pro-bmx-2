/* 12 functions from 0x000E1070 to 0x000E2030, found by Ghidra. */
#include "common.h"

extern int D_0027FAA4;
extern int D_00277038;

void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct DelObjNumHorse {
    virtual void Destroy(int a0);
};

struct C_NumHorse_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
    void func_001B17D0(char *s);
};

struct C_NumHorse_Obj4 {
    char pad0[0xA28];
    char *fA28;
};

struct C_NumHorse_Obj2E8 {
    char pad0[4];
    C_NumHorse_Obj4 *p4;
};

struct C_NumHorse_Lookup {
    int *func_0018C160(int a);
};

/* input query object held at the root +8 */
struct S_000E1070_Input {
    int func_00136170(int id, int kind, int flag);
};

/* game settings record held at the root +0x2E0 */
struct S_000E1070_Cfg {
    int f0;
    char pad4[0xC];
    float f10;
    int f14;
    char pad18[8];
    int f20;
    char pad24[0x190 - 0x24];
    int f190;
    void func_0005B220();
};

struct C_NumHorse_Root {
    char pad0[8];
    S_000E1070_Input *f8;
    char padC[0x2E0 - 0xC];
    S_000E1070_Cfg *p2E0;
    char pad2E4[4];
    C_NumHorse_Obj2E8 *p2E8;
    C_NumHorse_Lookup *p2EC;
};

extern float D_00275AEC;
extern int D_002786A0;
extern int D_00278690;
extern int D_00278678;

struct C_NumHorse_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

struct C_NumHorse_Mid {
    C_NumHorse_Clamp *func_0018C070();
};

struct C_NumHorse_Sub {
    C_NumHorse_Clamp *func_001D5AA0();
};

extern C_NumHorse_Root *D_002A8490;

struct C_000E1_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    C_000E1_Elem *unk24;
    C_000E1_Elem *unk28;
    C_000E1_Elem *unk2C;
    C_000E1_Elem *unk30;
    char pad34[0x50 - 0x34];
    C_000E1_Elem *unk50;
    C_000E1_Elem *unk54;
    char pad58[0x68 - 0x58];
    C_000E1_Elem *unk68;
    C_000E1_Elem *unk6C;
};

extern S_002B91AC *D_002B91AC;

struct C_000E1650_Sel {
    char pad0[0x30];
    int f30;
};

struct C_000E1650_Page {
    char pad0[4];
    C_000E1650_Sel *f4;
};

/* page with a row of 8 drawables, two of which are highlighted */
struct C_000E1650 {
    char pad0[0x140];
    C_000E1650_Page *f140;
    char pad144[0x28C - 0x144];
    int f28C;
    int f290;
    char pad294[0x2C0 - 0x294];
    short f2C0;
    char pad2C2[0x2D0 - 0x2C2];
    C_000E1_Elem *arr2D0[8];
    void func_000E1650(void);
};

/* the sound/animation service a manager's owner holds at +0x74 */
struct S_000E1070_Svc {
    int func_000301D0();
};

struct S_000E1070_Owner {
    char pad0[0x74];
    S_000E1070_Svc *f74;
};

/* sound player a page's manager holds at +0x24 */
struct S_000E1070_Snd {
    void func_000B9A80(int a, int b);
};

/* a control the manager hands out by index */
struct S_000E1070_Ctl {
    char pad0[0x304];
    float f304;
    char pad308[0x360 - 0x308];
    int f360;
    char pad364[0x59C - 0x364];
    int f59C;
    int f5A0;
};

/* the manager a page holds at +0x124 */
struct S_000E1070_Mgr {
    char pad0[0x24];
    S_000E1070_Snd *f24;
    char pad28[0x134 - 0x28];
    int f134;
    int f138;
    char pad13C[0x25C - 0x13C];
    S_000E1070_Owner *f25C;
    S_000E1070_Ctl *func_000BA9D0(int idx);
    void func_000BB7C0(int a);
};

/* the selector a page holds at +0x140 +4 */
struct S_000E1070_Sel {
    char pad0[0x30];
    int f30;
    void func_001BDF00(int a);
    void func_001BDE90(int a);
};

struct S_000E1070_Lst {
    char pad0[4];
    S_000E1070_Sel *f4;
};

/* BmxUIPageTime */
struct C_000E1070 {
    char pad0[0x124];
    S_000E1070_Mgr *f124;
    char pad128[0x140 - 0x128];
    S_000E1070_Lst *f140;
    char pad144[0x280 - 0x144];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    char pad298[0x2A4 - 0x298];
    int f2A4;
    int f2A8;
    char pad2AC[0x2B4 - 0x2AC];
    int f2B4;
    int func_001BF050(int a);
    int func_000E1070(int a0, int a1);
};

/* BmxUIPageTime */
struct C_000E1550 {
    char pad0[0x2D0];
    C_NumHorse_Sub *ptrs[8];
    void func_000E1550(void);
    void func_001578D0(void);
};

/* BmxUIPageNumHorsePlayers */
struct C_000E1770 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    C_NumHorse_Widget *f298;
    int f29C;
    char pad2A0[8];
    int f2A8;
    int f2AC;
    char pad2B0[8];
    int f2B8;
    int f2BC;
    int f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    int f2D0;
    DelObjNumHorse *arr2D4[2];
    void func_001578D0();
    void func_000E1DA0();
    void func_001BE360(int a);
    void func_001BE3F0();
    C_000E1770 *func_000E1770(int a);
    void func_000E1810();
    void func_000E1C20();
    void func_000E1EA0();
    void func_000E1F00();
    void func_000E1F60();
    void func_000E1850();
    void func_000E1C80(float dt);
    void func_001BED00(float dt);
};

/* BmxUIPageNumHorsePlayers' virtual functions, up to slot 28 */
struct C_000E1770_V {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(int a0, int a1);
};

struct C_E1850_Text { void func_0005E840(int s); };
struct C_E1850_Ui { void func_000BF860(int a, int b, int c, int d); };

extern float D_0027DE74;
extern float D_00278C48;

int C_000E1070::func_000E1070(int a0, int a1)
{
    S_000E1070_Mgr *mgr = f124;
    S_000E1070_Snd *snd = mgr->f24;
    S_000E1070_Ctl *c;

    if (mgr->f25C->f74->func_000301D0() || f124->f138 == 4 || f124->f138 == 3 || !f2A8) return 0;
    if ((f28C || f290) && !f294) return 0;
    if (a1 != D_002A8490->f8->func_00136170(4, 2, 0) && a1 != D_002A8490->f8->func_00136170(0x17, 2, 0)) {
        if (a1 == D_002A8490->f8->func_00136170(2, 2, 0)) {
            snd->func_000B9A80(2, 1);
            f140->f4->func_001BDF00(0);
            f2B4 = f140->f4->f30;
            goto done;
        }
        if (a1 == D_002A8490->f8->func_00136170(3, 2, 0)) {
            snd->func_000B9A80(2, 1);
            f140->f4->func_001BDE90(0);
            f2B4 = f140->f4->f30;
            goto done;
        }
        if (a1 == D_002A8490->f8->func_00136170(5, 2, 0) || a1 == D_002A8490->f8->func_00136170(0x18, 2, 0)) {
            if (!f290) {
                f2A4 = 1;
                snd->func_000B9A80(1, 1);
            }
            f290 = 1;
            f288 = 0;
            f280 = a1;
            f284 = a0;
            if (!f294) return 0;
            f124->f138 = 7;
            if (D_002A8490->p2E0->f0 > 1) {
                mgr->func_000BA9D0(1)->f360 = 15;
                mgr->func_000BA9D0(10)->f304 = 1.0f;
                f124->f134 = 10;
            } else {
                f124->f134 = 1;
            }
        }
        goto done;
    }
    if (!f28C) {
        f2A4 = 1;
        mgr->f24->func_000B9A80(4, 1);
    }
    if (!f294) {
        f28C = 1;
        f288 = 0;
        f280 = a1;
        f284 = a0;
        return 0;
    }
    switch (func_001BF050(1)) {
    case 1:
        D_002A8490->p2E0->f10 = 120.0f;
        D_002A8490->p2E0->f14 = 1;
        D_002A8490->p2E0->f20 = 0;
        f124->f138 = 7;
        f124->f134 = 3;
        D_002A8490->p2E0->func_0005B220();
        f2B4 = 1;
        break;
    case 2:
        D_002A8490->p2E0->f10 = 300.0f;
        D_002A8490->p2E0->f14 = 2;
        D_002A8490->p2E0->f20 = 0;
        f124->f138 = 7;
        f124->f134 = 3;
        D_002A8490->p2E0->func_0005B220();
        f2B4 = 2;
        break;
    case 3:
        D_002A8490->p2E0->f10 = 600.0f;
        D_002A8490->p2E0->f14 = 3;
        D_002A8490->p2E0->f20 = 0;
        f124->f138 = 7;
        f124->f134 = 3;
        D_002A8490->p2E0->func_0005B220();
        f2B4 = 3;
        break;
    case 4:
        D_002A8490->p2E0->f20 = 1;
        D_002A8490->p2E0->f14 = 4;
        f124->f138 = 7;
        f124->f134 = 3;
        D_002A8490->p2E0->func_0005B220();
        f2B4 = 4;
        c = mgr->func_000BA9D0(3);
        c->f59C = 1;
        c->f5A0 = 0;
        mgr->func_000BB7C0(D_002A8490->p2E0->f190);
        goto done;
    default:
        goto done;
    }
    c = mgr->func_000BA9D0(3);
    c->f59C = 1;
    c->f5A0 = 0;
    mgr->func_000BB7C0(D_002A8490->p2E0->f190);
done:
    return 1;
}

void C_000E1550::func_000E1550(void)
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    C_NumHorse_Sub **e;
    C_NumHorse_Lookup *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((C_NumHorse_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = ptrs;
    i = 8;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

void C_000E1650::func_000E1650(void)
{
    C_000E1_Elem *m;
    C_000E1_Elem *e;
    S_002B91AC *s;
    int n;
    int i;

    if (f28C)
        m = D_002B91AC->unk68;
    else
        m = D_002B91AC->unk50;
    m->func_001D5AD0();
    if (f290)
        m = D_002B91AC->unk6C;
    else
        m = D_002B91AC->unk54;
    m->func_001D5AD0();
    n = f140->f4->f30 - 1;
    for (i = 0; i < 8; i++) {
        e = arr2D0[i];
        e->f38 = ((int)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        if (i == n * 2 || i == n * 2 + 1) {
            e = arr2D0[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
            arr2D0[i]->func_001D5AD0();
        } else {
            e = arr2D0[i];
            e->f38 = (e->f38 & 0xffcccccc) | 0xcccccc;
            e->b58 |= 2;
        }
    }
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

C_000E1770 *C_000E1770::func_000E1770(int a)
{
    func_001BE360(a);
    vtbl = &D_0027FAA4;
    f28C = 0;
    f290 = 0;
    f288 = 0;
    f294 = 0;
    f280 = 0;
    f284 = 0;
    f298 = 0;
    f29C = 2;
    f2AC = 0;
    f2A8 = 0;
    f2BC = 0;
    f2B8 = 0;
    for (int i = 0; i < 2; i++) {
        arr2D4[i] = 0;
    }
    f2C0 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2D0 = 0;
    return this;
}

void C_000E1770::func_000E1810()
{
    int i;
    vtbl = &D_0027FAA4;
    for (i = 0; i < 2; i++) {
        if (arr2D4[i] != 0) {
            arr2D4[i]->Destroy(1);
            arr2D4[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000E1770::func_000E1850()
{
    f294 = 0;
    f28C = 0;
    f290 = 0;
    *(int *)((char *)this + 0x2B0) = 1;
    f2AC = 0;
    f2A8 = 0;
    f2BC = 0;
    f2B8 = 0;
    *(int *)((char *)this + 0x2B4) = 0;
    f2C0 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2D0 = 0;
    f29C = **(int **)((char *)D_002A8490 + 0x2E0);
    if (f29C == 1)
        f29C = 2;
    (*(C_E1850_Text **)((char *)D_002B91AC + 0x34))->func_0005E840(*(int *)((char *)D_002A8490->p2E8->p4 + 0xA18));
    ((C_E1850_Ui *)D_002B91AC)->func_000BF860(0, 0x1EB, 0x184, 0);
    (*(C_E1850_Text **)((char *)D_002B91AC + 0x38))->func_0005E840(*(int *)((char *)D_002A8490->p2E8->p4 + 0x7C8));
    ((C_E1850_Ui *)D_002B91AC)->func_000BF860(1, 0x17B, 0x184, 0);
    (*(C_E1850_Text **)((char *)D_002B91AC + 0x3C))->func_0005E840(*(int *)((char *)D_002A8490->p2E8->p4 + 0x838));
}

void C_000E1770::func_000E1C20()
{
    char dest[0x40];
    char buf[4];

    func_001ADCC0(buf, 3, (char *)&D_00277038, f29C);
    func_001AC330(dest, D_002A8490->p2E8->p4->fA28, buf);
    f298->func_001B17D0(dest);
}

void C_000E1770::func_000E1C80(float dt)
{
    if (f28C || f290) {
        if ((*(float *)&f288 += dt) >= D_0027DE74) {
            f294 = 1;
            ((C_000E1770_V *)this)->v28(f284, f280);
            *(float *)&f288 = 0.0f;
        }
    }
    if (f2C0 != ((unsigned char *)arr2D4[0])[0x3b]) {
        if (*(float *)&f2CC >= *(float *)&f2D0) {
            f2C8 = f2C0;
        } else {
            int base = f2C4;
            f2C8 = (int)((float)(f2C0 - base) * (*(float *)&f2CC / *(float *)&f2D0)) + base;
            *(float *)&f2CC = dt + *(float *)&f2CC;
        }
    }
    if (f2BC && !f2A8) {
        if ((*(float *)&f2B8 += dt) >= D_00278C48) {
            f2A8 = 1;
            f2BC = 0;
        }
    }
    func_001BED00(dt);
}

void C_000E1770::func_000E1DA0()
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    C_NumHorse_Sub **e;
    C_NumHorse_Lookup *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((C_NumHorse_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = (C_NumHorse_Sub **)arr2D4;
    i = 2;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

void C_000E1770::func_000E1EA0()
{
    f298->func_001B1980();
    func_000E1C20();
    f298->func_001B2270(0xffbfa35a);
    f298->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
}

void C_000E1770::func_000E1F00()
{
    f298->func_001B1980();
    func_000E1C20();
    f298->func_001B2270(0xffbfa35a);
    f298->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
}

void C_000E1770::func_000E1F60()
{
    C_000E1_Elem **ptr;
    C_000E1_Elem *e;
    int count;
    S_002B91AC *s;

    if (f28C) {
        D_002B91AC->unk68->func_001D5AD0();
    } else {
        D_002B91AC->unk50->func_001D5AD0();
    }
    if (f290) {
        D_002B91AC->unk6C->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    ptr = (C_000E1_Elem **)arr2D4;
    count = 2;
    do {
        e = *ptr;
        e->f38 = ((short)f2C8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        e = *ptr;
        e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
        e->b58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

