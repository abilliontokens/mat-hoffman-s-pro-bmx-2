/* 15 functions from 0x0004C7A0 to 0x0004D7A0, found by Ghidra. */
#include "common.h"

struct C_0004D610Obj {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void func4(void);
};

struct C_0004D610 {
    char pad0[0x288];
    C_0004D610Obj *f288;
    void func_00031450(void);
    void func_0004D610(void);
};

struct C_0004CC60Vec {
    int x, y, z, w;
};

struct C_0004CC60Item {
    char pad0[0x11b0];
    int f11b0;
    void func_00108510(void *p, C_0004CC60Vec v);
};

struct C_0004CC60 {
    char pad0[0x64];
    void *f64;
    char pad68[0x28];
    int f90;
    void func_0004CC60(int id, int a1, int a2, int a3, int a4, int a5);
};

struct C_0002EF70 {
    void func_0002EF70(int a, int b);
};

struct C_00030240 {
    void func_00030240(int a, int b, int c, int d, int e);
};

struct C_0012A770 {
    void func_0012A770(int a, int b);
};

struct C_0004D010 {
    char pad0[0x24];
    void *f24;
    char pad28[0x1C];
    void *f44;
    char pad48[0x1C];
    void *f64;
    void func_0004D010(void);
};

struct C_0001CCE0 {
    void func_0001CCE0(int a, void *b, void *c, void *d, void *e);
};

struct S_0004D070_Global {
    char pad0[4];
    C_0001CCE0 *f4;
};

struct C_0004D070 {
    char pad0[0x24];
    char *f24;
    char pad28[0x3C];
    void *f64;
    char pad68[4];
    int f6c;
    char pad70[0xB0];
    int f120;
    void func_0004D070(int flag);
};

extern S_0004D070_Global *D_002A8490;

/* the two functions the analysis merged into func_0004CEC0: 0x4CED0 and 0x4CFC0 */
struct V4_0004CED0 { int a, b, c, d; };
struct C_0012B410_0004CED0 { void func_0012B410(int a, int b, int c); };
struct C_0013E4F0_0004CED0 { C_0012B410_0004CED0 *func_0013E4F0(int a); };
struct C_000306F0_0004CED0;
struct C_0002EF20_0004CED0 { C_000306F0_0004CED0 *func_0002EF20(int a); };
struct C_000306F0_0004CED0 { void func_000306F0(void *a, int b, int c, V4_0004CED0 d, int e, int f); };
struct G_0004CED0_E0 { char pad0[8]; int f8; };
struct G_0004CED0 {
    char pad0[0x124]; int f124;
    char pad128[0x108]; unsigned char f230;
    char pad231[0xAF]; G_0004CED0_E0 *f2E0;
};
struct O_0004CED0_4DC { char pad0[0x24]; V4_0004CED0 f24; };
struct O_0004CED0_64 { char pad0[0x4ac]; int *f4AC; char pad4B0[0x2c]; O_0004CED0_4DC *f4DC; };
struct M_0004CFC0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual int v15(void *a, int b, int c, int d);
};
struct S_0004CFC0_Data { int w[6]; };
struct S_0004CFC0_Sub {
    char pad0[0x1E0];
    S_0004CFC0_Data f1E0;
    char pad1F8[0xC];
    int f204;
    int f208;
    void func_0012B190(int a, int b, int c, int d);
};
struct C_0004CED0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    char pad4[0x20];
    C_0012B410_0004CED0 *f24;
    char pad28[0x1C];
    C_000306F0_0004CED0 *f44;
    char pad48[0x1C];
    O_0004CED0_64 *f64;
    char pad68[0x174];
    int func_0004CED0();
    int func_0004CEC0();
};

struct C_0004CFC0 {
    char pad0[0x24];
    S_0004CFC0_Sub *f24;
    char pad28[0x1B4];
    S_0004CFC0_Data f1DC;
    void func_0004CFC0();
};

struct C_00088F70 {
    void func_00088F70(int a, int b);
    int func_00089040(void);
    void func_00089010(void);
};
struct C_00108660 {
    int func_00108660(void);
    void func_001084E0(void);
};
struct C_00067D60 {
    void func_00067D60(int a, int b);
    void func_000684B0(void);
};
struct C_0004C7A0 {
    void func_0004C7A0(int a);
    void func_00157A00(int a);
    void func_0004C3F0(int a, int b, int c);
    void func_00032A20(void);
    void func_00031260(int a);
};
extern float D_00275544;

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);
extern char D_002A5870[];
extern char D_002775F0[];
extern char D_002775E8[];
extern char D_002775D4[];
extern char D_002775BC[];
extern char D_002775A4[];
extern char D_00277590[];
extern char D_002A16E8[];
extern char D_002A1718[];

struct C_00168280 {
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168C20(const char *key, int flag, int *out);
    void func_00168550(const char *key, void *dst, int size);
    void func_00168CB0(const char *key, void *def, void *dst);
};

struct C_0013B1A0 {
    int func_0013B1A0(const char *key);
};
extern C_0013B1A0 *D_002BEAAC;

struct C_0004D480 {
    char pad0[0x64];
    char *f64;
    char pad68[0x61c];
    int f684;
    void func_0004D480(void);
};
extern char D_00275630;

struct H2_Ctl {
    void func_00086130(int a);
    void func_00086140(int a);
    void func_00085BD0(int a);
    void func_00085D00(int a);
    void func_00085E50(int a);
    void func_00085F40(int a);
    void func_00086030(int a);
};
struct H2_Item { char pad0[0x95c]; int unk95c; };
struct H2_Owner {
    char pad0[0x4e0];
    struct { char pad[0x1a8]; H2_Item *items[1]; } *unk4e0;
};
struct H2_Obj19c { char pad0[0xb8]; int unkb8; void func_0006D280(); };
struct H2_Event {
    char pad0[0x64];
    H2_Owner *unk64;
    char pad68[0xb8];
    int unk120;
    char pad124[0x10];
    int unk134;
    char pad138[0x64];
    H2_Obj19c *unk19c;
    char pad1a0[0xe8];
    H2_Ctl *unk288;
    char pad28c[4];
    int unk290;
    int unk294;
    char pad298[4];
    float unk29c;
    void func_00032A20();
    int func_0004CCF0(int state);
};

struct H_Obj {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    virtual void vf5(); virtual void vf6();
    H_Obj *func_00088530(int a);
    H_Obj *func_00088570(int a);
    H_Obj *func_0005ECA0(int a);
    H_Obj *func_0005EDC0(void *a);
    H_Obj *func_000715B0(int a);
    H_Obj *func_00071880(void *a);
    H_Obj *func_00066C90(int a);
    H_Obj *func_00066FA0(void *a);
    H_Obj *func_00082450(int a);
    H_Obj *func_0008DB70(void *a, int b, int c, int d, int e, int f, int g);
    H_Obj *func_0006C380(int a);
    H_Obj *func_0006C570(void *a);
    H_Obj *func_00085470(int a);
    H_Obj *func_00085630(int a, int b);
};
struct H_Owner {
    char pad0[0x4e0];
    struct { char pad[0x1a8]; int unk1a8; } *unk4e0;
};
struct H_Global {
    char pad0[0x2e0];
    struct { int pad[2]; int unk8; } *unk2e0;
};
struct BmxEventHorse {
    void *vtbl;
    char pad4[0x60];
    H_Owner *unk64;
    char pad68[0x7c];
    H_Obj *unke4;
    char pade8[0x74];
    H_Obj *unk15c;
    char pad160[0x10];
    H_Obj *unk170;
    char pad174[0x1c];
    H_Obj *unk190;
    char pad194[8];
    H_Obj *unk19c;
    H_Obj *unk1a0;
    char pad1a4[0xe4];
    H_Obj *unk288;
    void func_00031630();
    void func_0004D2C0();
};

struct S_0004D630_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct C_0004D630 {
    char pad0[0x288];
    S_0004D630_Obj *f288;
    void func_000314A0();
    void func_0004D630();
};

struct C_0004D5F0 {
    char pad0[0x288];
    void *f288;
    void func_00031640();
    void func_0004D5F0();
};

void __stdcall func_001577A0(void *p, int flag);
int __stdcall func_00097DA0(void *p);

struct S_4D230_Obj {
    void func_0010C090(void *a, void *b, int c, int d);
};

struct S_4D230_Tbl {
    char pad0[0x1a8];
    S_4D230_Obj *objs[1];
};

struct S_4D230_Mgr {
    char pad0[0x4e0];
    S_4D230_Tbl *f4e0;
};

struct C_0004D230 {
    char pad0[0x64];
    S_4D230_Mgr *f64;
    char pad68[0xb8];
    int f120;
    char pad124[0x9c];
    void *f1c0;
    char pad1c4[0xc8];
    int f28c;
    char pad290[0x34];
    char f2c4[0x3c0];
    int f684;
    void func_0004D230();
};

struct S_4D0E0_Obj {
    char pad0[0x95c];
    int f95c;
    void func_00108680(int a);
    void func_0010C090(void *a, void *b, int c, int d);
    void func_0010E810();
};

struct S_4D0E0_Tbl {
    char pad0[0x1a8];
    S_4D0E0_Obj *objs[1];
    void func_000A4500(int a, int idx);
};

struct S_4D0E0_Mgr {
    char pad0[0x4e0];
    S_4D0E0_Tbl *f4e0;
};

struct S_4D0E0_A {
    void func_001C4D50(int a);
};

struct S_4D0E0_B {
    void func_000861A0(int idx);
    void func_00086200();
    void func_00086190();
    void func_00086130(int a);
    void func_00086140(int a);
    void func_00085BD0(int a);
};

struct S_4D0E0_C {
    void func_00056080();
};

struct S_4D0E0_D {
    char pad0[0x50];
    S_4D0E0_C *f50;
};

struct S_4D0E0_E {
    void func_00086C30(int a);
    void func_000847A0();
};

struct C_0004D0E0 {
    char pad0[0x44];
    S_4D0E0_D *f44;
    char pad48[0x1c];
    S_4D0E0_Mgr *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x8c];
    int f120;
    char pad124[0x34];
    S_4D0E0_A *f158;
    char pad15c[0x14];
    S_4D0E0_E *f170;
    char pad174[0x114];
    S_4D0E0_B *f288;
    int f28c;
    int f290;
    char pad294[0xc];
    int f2a0[8];
    int f2c0;
    void func_00034090();
    void func_0004D0E0();
    int func_0004D650();
};

void C_0004C7A0::func_0004C7A0(int a)
{
    char *s = (char *)this;
    int i, j, k;
    if (*(int *)(s + 0x1f4)) {
        func_00157A00(a);
        return;
    }
    if (*(int *)(*(char **)(s + 0x64) + 0x3b4)) {
        for (i = 0; i < *(int *)(s + 0x1250); i++) {
            char *o = *(char **)((*(char ***)(*(char **)(*(char **)(s + 0x64) + 0x3b4) + 0x28))[((int *)(s + 0x98c))[i]] + 4);
            if (*(u8 *)(o + 0x2ec) & 0x10) {
                for (j = 0; j < *(int *)(s + 0x90); j++) {
                    int *rec = (int *)(s + 0xbe4 + j * 0xcc);
                    if (*(int *)(o + 0x2e8) == *(int *)((*(char ***)(*(char **)(s + 0x64) + 0x4e0))[0x6a + j] + 0x11b0)) {
                        int n = rec[0];
                        if (n < 50) {
                            k = 0;
                            do {
                                if (rec[k + 1] == i)
                                    goto next;
                                k++;
                            } while (k < 50);
                            rec[n + 1] = i;
                            rec[0]++;
                        }
                    }
                next:;
                }
                *(u8 *)(o + 0x2ec) &= ~0x10;
            }
        }
    }
    for (j = 0; j < *(int *)(s + 0x90); j++) {
        int *rec = (int *)(s + 0xbe4 + j * 0xcc);
        char *p = (*(char ***)(*(char **)(s + 0x64) + 0x4e0))[0x6a + j];
        if (*(int *)(p + 0x1178) && !*(int *)(p + 0x11f8) && rec[0]) {
            rec[0] = 0;
            for (k = 0; k < 50; k++)
                rec[k + 1] = -1;
        }
        if (*(int *)(p + 0x11f8) == 3 && *(int *)(p + 0x11f4) != 3) {
            int score = *(int *)((*(char ***)((char *)D_002A8490 + 0x2a4))[0x5c + j] + 0x130);
            int id;
            if (rec[0] <= 0)
                continue;
            id = rec[rec[0]];
            rec[rec[0]] = -1;
            rec[0]--;
            while (id != -1) {
                if (score > *(int *)(s + id * 8 + 0xa58)) {
                    int prev = *(int *)(s + id * 8 + 0xa54);
                    *(int *)(s + id * 8 + 0xa54) = j;
                    *(int *)(s + id * 8 + 0xa58) = score;
                    if (prev >= 0) {
                        (*(int *)((*(char ***)(*(char **)(s + 0x64) + 0x4e0))[0x6a + prev] + 0xa40))--;
                        if (prev != j)
                            ((C_00088F70 **)(s + 0x1248))[prev]->func_00088F70(*(int *)((*(char ***)(*(char **)(s + 0x64) + 0x4e0))[0x6a + prev] + 0xa40), 0);
                    }
                    func_0004C3F0(id, j, score < 5000 ? 1 : score < 10000 ? 2 : (score >= 50000) + 3);
                    (*(int *)(p + 0xa40))++;
                    ((C_00088F70 **)(s + 0x1248))[j]->func_00088F70(*(int *)(p + 0xa40), 0);
                }
                if (rec[0] <= 0)
                    break;
                id = rec[rec[0]];
                rec[rec[0]] = -1;
                rec[0]--;
            }
        }
    }
    if (*(void **)(s + 0x190)) {
        if (!*(int *)(s + 0x1244)) {
            if (!*(int *)(*(char **)((char *)D_002A8490 + 0x2e0) + 0x20) && *(float *)(s + 0x128) <= D_00275544)
                *(int *)(s + 0x1244) = 1;
            for (i = 0; i < *(int *)(s + 0x90); i++)
                if (((C_00088F70 **)(s + 0x1248))[i]->func_00089040())
                    *(int *)(s + 0x1244) = 1;
        }
        int ok = 1;
        for (i = 0; i < *(int *)(s + 0x90); i++)
            if (!((C_00108660 **)(*(char **)(*(char **)(s + 0x64) + 0x4e0)))[0x6a + i]->func_00108660())
                ok = 0;
        if (*(int *)(s + 0x1244)) {
            for (i = 0; i < *(int *)(s + 0x90); i++)
                ((C_00108660 **)(*(char **)(*(char **)(s + 0x64) + 0x4e0)))[0x6a + i]->func_001084E0();
            if (*(int *)(s + 0x1244) && ok && !*(int *)(*(char **)(s + 0x190) + 0x168)) {
                for (i = 0; i < *(int *)(s + 0x90); i++)
                    (*(C_00067D60 **)(s + 0x190))->func_00067D60(i, *(int *)((*(char ***)(*(char **)(s + 0x64) + 0x4e0))[0x6a + i] + 0xa40));
                char **pl = *(char ***)(*(char **)(s + 0x64) + 0x4e0);
                int a0 = *(int *)(pl[0x6a] + 0xa40);
                int a1 = *(int *)(pl[0x6b] + 0xa40);
                if (a0 > a1)
                    (*(C_00088F70 **)(s + 0x1248))->func_00089010();
                else if (a0 < a1)
                    (*(C_00088F70 **)(s + 0x124c))->func_00089010();
                func_00032A20();
                (*(C_00067D60 **)(s + 0x190))->func_000684B0();
            }
        }
    }
    func_00031260(a);
}

void C_0004CC60::func_0004CC60(int id, int a1, int a2, int a3, int a4, int a5)
{
    for (int i = 0; i < f90; i++) {
        C_0004CC60Item *item = *(C_0004CC60Item **)(*(int *)((char *)f64 + 0x4e0) + 0x1a8 + i * 4);
        if (item != 0 && item->f11b0 == id) {
            C_0004CC60Vec v;
            v.x = a2;
            v.y = a3;
            v.z = a4;
            v.w = a5;
            item->func_00108510(&D_00275630, v);
        }
    }
}

int func_0004CCE0(void) {
    int func_00033300(...);
    func_00033300();
    return 1;
}

void func_00031400(void);
int C_0004CED0::func_0004CEC0()
{
    G_0004CED0 *g = (G_0004CED0 *)D_002A8490;
    g->f230 |= 1;
    ((G_0004CED0 *)D_002A8490)->f124 = 0;
    C_0013E4F0_0004CED0 *p = (C_0013E4F0_0004CED0 *)func_001E8A44(0x2d0);
    f24 = p ? p->func_0013E4F0(1) : 0;
    f24->func_0012B410(0x3f9f49f5, 0x280, 0x1c0);
    C_0002EF20_0004CED0 *q = (C_0002EF20_0004CED0 *)func_001E8A44(0x78);
    f44 = q ? q->func_0002EF20(1) : 0;
    f44->func_000306F0(f24, ((G_0004CED0 *)D_002A8490)->f2E0->f8, *f64->f4AC, f64->f4DC->f24, 0, 0);
    v27();
    v28();
    return 1;
}

/* 0x4CFC0, merged into func_0004CEC0 by the analysis (matches 100% on its own part) */
void C_0004CFC0::func_0004CFC0()
{
    ((M_0004CFC0 *)D_002A8490)->v15(f24, 0, 0, 0);
    f24->func_0012B190(0, 0, f24->f204, f24->f208);
    f1DC = f24->f1E0;
}

void C_0004D010::func_0004D010(void)
{
    int v = *(int *)((char *)f64 + 0x4e0);
    if (v != 0) {
        v = *(int *)(v + 0x1a8);
        if (v != 0) {
            ((C_0002EF70 *)f44)->func_0002EF70(v, 0);
        }
    }
    ((C_00030240 *)f44)->func_00030240(*(int *)((char *)f64 + 0x3e4), 0, 0, 0, 0);
    ((C_0012A770 *)f24)->func_0012A770(**(int **)((char *)f64 + 0x4a8), 2);
}

void C_0004D070::func_0004D070(int flag)
{
    if (f6c != -1) {
        void *p;
        if (flag != 0) {
            p = (void *)(*(int *)(*(int *)(*(int *)((char *)f64 + 0x4e0) + 0x1a8 + f120 * 4) + 0x1e0) + 0x238);
        } else {
            p = 0;
        }
        D_002A8490->f4->func_0001CCE0(f6c, f24 + 0x170, f24 + 0x180, f24 + 0x190, p);
    }
}

void C_0004D0E0::func_0004D0E0()
{
    f158->func_001C4D50(1000);
    if (f120 < f90) {
        f64->f4e0->func_000A4500(0, f120);
    }
    do {
        if (++f120 >= f90) {
            f120 = 0;
        }
    } while (f2a0[f120] == 0);
    f288->func_000861A0(f120);
    ((C_0002EF70 *)f44)->func_0002EF70((int)f64->f4e0->objs[f120], 0);
    f64->f4e0->func_000A4500(1, f120);
    char *base = (char *)this + f28c * 0x10;
    f64->f4e0->objs[f120]->func_0010C090(base + 0x688, base + 0x708, 0, 1);
    f64->f4e0->objs[f120]->func_0010E810();
    f44->f50->func_00056080();
    if (f170 != 0) {
        f170->func_00086C30((int)f64->f4e0->objs[f120]);
        f170->func_000847A0();
    }
}

#pragma optimize("", on)
void C_0004D230::func_0004D230()
{
 char *p;
 do {
 if (++f28c >= f684) f28c=0;
 p=(char*)this+f28c*0x78+0x2c4;
 } while (*p != 0 && f1c0 != 0 && func_00097DA0(p)==0);
 
 S_4D230_Mgr *m=f64;
 m->f4e0->objs[f120]->func_0010C090(&((C_0004CC60Vec*)((char*)this+0x688))[f28c],&((C_0004CC60Vec*)((char*)this+0x708))[f28c],0,1);
}
void BmxEventHorse::func_0004D2C0() {
    func_00031630();
    void *p = func_001E8A44(0xf4);
    unke4 = p ? ((H_Obj *)p)->func_00088530(1) : 0;
    unke4 = unke4->func_00088570(((H_Global *)D_002A8490)->unk2e0->unk8);
    p = func_001E8A44(0x134);
    unk15c = p ? ((H_Obj *)p)->func_0005ECA0(1) : 0;
    unk15c->func_0005EDC0(this);
    unk15c->vf4();
    p = func_001E8A44(0x140);
    unk1a0 = p ? ((H_Obj *)p)->func_000715B0(1) : 0;
    unk1a0->func_00071880(this);
    unk1a0->vf4();
    p = func_001E8A44(0x16c);
    unk190 = p ? ((H_Obj *)p)->func_00066C90(1) : 0;
    unk190->func_00066FA0(this);
    unk190->vf4();
    p = func_001E8A44(0xda4);
    unk170 = p ? ((H_Obj *)p)->func_00082450(1) : 0;
    unk170->func_0008DB70(unk64, unk64->unk4e0->unk1a8, ((H_Global *)D_002A8490)->unk2e0->unk8, 0, 0, 1, 1);
    unk170->vf6();
    p = func_001E8A44(0xf0);
    unk19c = p ? ((H_Obj *)p)->func_0006C380(1) : 0;
    unk19c->func_0006C570(this);
    unk19c->vf4();
    p = func_001E8A44(0xf8);
    H_Obj *q = p ? ((H_Obj *)p)->func_00085470(1) : 0;
    unk288 = q->func_00085630((int)unk64->unk4e0, 0);
}

void C_0004D480::func_0004D480(void)
{
    char buf[0x104];
    char name[0x104];
    C_00168280 *obj;
    void *mem;
    int i;

    func_001ADCC0(buf, 0x104, D_002775F0, D_002A5870, f64 + 0x134);
    if (D_002BEAAC->func_0013B1A0(buf) != 0) {
        mem = func_001E8A44(0x4cc);
        obj = mem != 0 ? ((C_00168280 *)mem)->func_00168280() : 0;
        obj->func_00169490(buf, 0);
        obj->func_00169710(D_002775E8);
        obj->func_00168C20(D_002775D4, 0, &f684);
        for (i = 0; i < f684; i++) {
            func_001ADCC0(name, 0x104, D_002775BC, i + 1);
            obj->func_00168CB0(name, D_002A16E8, (char *)this + 0x688 + i * 0x10);
            func_001ADCC0(name, 0x104, D_002775A4, i + 1);
            obj->func_00168CB0(name, D_002A1718, (char *)this + 0x708 + i * 0x10);
            func_001ADCC0(name, 0x104, D_00277590, i + 1);
            obj->func_00168550(name, (char *)this + 0x2c4 + i * 0x78, 0x77);
        }
    }
}

void C_0004D5F0::func_0004D5F0()
{
    if (f288 != 0) {
        func_001577A0(f288, -1);
    }
    func_00031640();
}

void C_0004D610::func_0004D610(void)
{
    func_00031450();
    C_0004D610Obj *p = f288;
    if (p != 0) {
        p->func4();
    }
}

void C_0004D630::func_0004D630()
{
    func_000314A0();
    int *p = *(int **)((char *)this + 0x288);
    if (p != 0) {
        (*(void (__fastcall **)(void *))(*(int *)p + 0x18))(p);
    }
}

int C_0004D0E0::func_0004D650()
{
    int i;
    int n;
    int *z;
    func_00034090();
    if (f288 != 0) {
        f288->func_00086200();
        f288->func_00086190();
    }
    z = f2a0;
    for (n = 8; n > 0; n--) {
        *z++ = 1;
    }
    f28c = 0;
    for (i = 0; i < f90; i++) {
        f64->f4e0->func_000A4500(0, i);
        f64->f4e0->objs[i]->f95c = 1;
        f64->f4e0->objs[i]->func_00108680(0);
        char *base = (char *)this + f28c * 0x10;
        f64->f4e0->objs[i]->func_0010C090(base + 0x688, base + 0x708, 0, 1);
    }
    f120 = f90 - 1;
    func_0004D0E0();
    f288->func_00086130(0);
    f288->func_00086140(0);
    f288->func_00085BD0(1);
    f64->f4e0->objs[f120]->f95c = 1;
    f290 = 0;
    f2c0 = 0;
    f288->func_000861A0(f120);
    return 1;
}

