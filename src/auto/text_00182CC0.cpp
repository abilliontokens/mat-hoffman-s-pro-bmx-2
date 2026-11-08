/* 10 functions from 0x00182CC0 to 0x00183AF0, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00030F30(char *s, void *p);
void func_001E891B(void *p);
void *func_001E8A44(int size);
extern char D_00275678[];
extern int D_002893EC;

#include <string.h>

extern char D_002893D8[];
extern char D_002893BC[];
extern char D_002893B4[];
extern char D_0028939C[];
extern char D_00275630[];
extern char D_00276310[];
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

struct C_00168280 {
    C_00168280 *func_00168280(void);
    void func_001691E0(void);
    int func_00169490(char *buf, int flag);
    int func_00169710(const char *name);
    int func_00168C20(const char *key, int def, void *dst);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
    int func_00168550(const char *key, char *dst, int size);
    int func_00168A10(const char *key, void *dst);
    int func_00168B90(const char *key, void *dst);
    int func_00168CB0(const char *k1, const char *k2, void *dst);
};

struct S_00183130_Obj {
    char pad0[4];
    char name[0x13C];
    int f140;
};

struct S_00183130_Item {
    char pad0[4];
    int f4;
    char pad8[4];
    S_00183130_Obj *fC;
};

struct S_00183130_Group {
    char pad0[0x24];
    int f24;
    S_00183130_Item **f28;
};

struct C_001B82A0 {
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual int v27(C_00168280 *a);
    char pad4[0x20];
    int f24;
    C_001B82A0 *func_001B82A0(int a);
};

struct C_001B9B20 : C_001B82A0 {
    C_001B9B20 *func_001B9B20(int a);
};

struct C_001B8450 {
    C_001B8450 *func_001B8450(int a);
    void func_001BA9C0(C_00168280 *a);
};

struct S_00182CC0_Obj {
    char pad0[4];
    char name[0x144];
    int f148;
};

struct S_00182CC0_Item {
    char pad0[0xc];
    S_00182CC0_Obj *fC;
};

struct S_00182CC0_Group {
    char pad0[0x24];
    int f24;
    S_00182CC0_Item **f28;
};

extern char D_0027AEE4[];
extern char D_0027AED4[];
extern char D_0027AEC4[];
extern char D_0027AEA8[];
extern char D_0027AE94[];
extern char D_0027AE80[];
extern char D_0027AE7C[];

struct C_00182CC0_Scene {
    char pad0[0x2c];
    C_00168280 *f2C;
    char pad30[0x340 - 0x30];
    int f340;
    char pad344[0x3b0 - 0x344];
    S_00182CC0_Group **f3B0;
    void func_00182CC0();
};

struct S_00182EB0_Sub {
    char pad0[0x6d];
    char f6d;
};

struct S_00182EB0_Arr {
    char pad0[0x280];
    S_00182EB0_Sub **f280;
    int f284;
};

struct S_00182EB0_Veh {
    char pad0[0x300];
    char name[0x10c];
    S_00182EB0_Sub *f40C;
};

struct S_00182EB0_Ent {
    char pad0[4];
    int f4;
    char pad8[0x50];
    S_00182EB0_Veh *f58;
    char pad5C[0x44];
    char fA0[1];
    char padA1[0x103];
    S_00182EB0_Arr *f1A4;
};

struct S_00182EB0_Grp {
    char pad0[0x24];
    int f24;
    S_00182EB0_Ent **f28;
};

struct C_00182EB0_Scene {
    char pad0[0x2c];
    C_00168280 *f2C;
    char pad30[0x3ac - 0x30];
    S_00182EB0_Grp *f3AC;
    void func_00182EB0();
};
extern char D_0027AEA8[];

/* BmxScene */
struct C_00182CC0 {
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46(int a);
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    char pad4[0x24];
    C_00168280 *f28;
    char pad2C[4];
    char f30[0x104];
    char pad134[0x340 - 0x134];
    int f340;
    char pad344[0x3A8 - 0x344];
    S_00183130_Group **f3A8;
    char pad3AC[0x3BC - 0x3AC];
    C_001B8450 *f3BC;
    C_001B82A0 *f3C0;
    C_001B9B20 *f3C4;
    int f3C8;
    void func_00183130();
    void func_001832C0();
    int func_001832F0(char *name);
    int func_001833A0();
    void func_001839F0();
    void func_00183A50();
    void func_00183AB0();
};

struct V4 {
    float x, y, z, w;
};
extern char D_00289504[], D_002894F0[], D_002894E4[], D_00288A68[], D_002894D4[], D_002894C0[];
extern char D_002894B4[], D_002894A8[], D_0028949C[], D_00289494[], D_0028948C[], D_00289480[];
extern char D_00289474[], D_002A90B4[], D_00289464[], D_002A90D4[], D_00275AD4[], D_00289454[];
extern char D_00289440[], D_0028942C[], D_00289410[], D_002867E8[], D_002893F4[];
extern "C" V4 *func_00182980(V4 *out, const char *s);
void *func_001E83E8(void *p, int size);

struct C_001AE3E0 {
    C_001AE3E0 *func_001AE3E0(int a);
    void func_001AEBD0(char *s1, char *s2, void *pb, void *p1, void *p2, char *buf1, char *buf2, int n, V4 a, int p);
    void func_001AE4D0(V4 a, V4 b, int i);
};

struct C_00183450 {
    char pad0[0x28];
    C_00168280 *f28;
    char pad2C[0x340 - 0x2c];
    int f340;
    char pad344[0x48C - 0x344];
    C_001AE3E0 **f48C;
    int f490;
    void func_00183450(int param);
};

void C_00183450::func_00183450(int param)
{
    V4 pos, a, b;
    int cnt = 0, i, j, ok, ia = 0, old;
    register int n;
    char name[0x40];
    char s1[0x104], s2[0x104];
    char s3[0x40];
    char s4[0x40], s5[0x40], s6[0x40];
    char buf1[0x80], buf2[0x80];
    V4 p1, p2, p3, p4, v1, v2, v3, v4;
    C_001AE3E0 *obj;

    pos.x = pos.y = pos.z = 0; pos.w = 1.0f;
    a.x = a.y = a.z = 0; a.w = 1.0f;
    b.x = b.y = b.z = 0; b.w = 1.0f;

    f28->func_00169710(D_00289504);
    f28->func_00168C20(D_002894F0, 0, &cnt);
    if (cnt > 0) {
        if (f48C == 0) {
            old = 0;
            n = cnt;
            f490 = n;
            f48C = (C_001AE3E0 **)func_001E8A44(n * 4);
        } else {
            old = f490;
            n = old + cnt;
            f490 = n;
            f48C = (C_001AE3E0 **)func_001E83E8(f48C, n * 4);
        }
        for (i = old; i < n; i++) {
            func_001ADCC0(name, 0x40, D_002894E4, i + 1);
            if (f28->func_00169710(name)) {
                f28->func_00168550(D_00288A68, s1, -1);
                f28->func_00168BE0(D_002894C0, D_002894D4, s2, -1);
                f28->func_00168A10(D_002894B4, &ia);
                f28->func_00168B90(D_002894A8, &p1);
                f28->func_00168B90(D_0028949C, &p2);
                f28->func_00168C20(D_00289494, 0x80, buf1);
                f28->func_00168C20(D_0028948C, 0x80, buf2);
                f28->func_00168BE0(D_00289474, D_00289480, s3, -1);
                a = *func_00182980(&a, s3);
                ok = f28->func_00168CB0(D_00289464, D_002A90B4, &b);
                if (!ok) {
                    f28->func_00168CB0(D_00275AD4, D_002A90D4, &p3);
                    f28->func_00168CB0(D_00289454, D_002A90B4, &p4);
                    b.x = p4.x - p3.x;
                    b.y = p4.y - p3.y;
                    b.z = p4.z - p3.z;
                    b.w = 1.0f;
                }
                obj = (C_001AE3E0 *)func_001E8A44(0x88);
                obj = obj ? obj->func_001AE3E0(1) : 0;
                f48C[i] = obj;
                obj->func_001AEBD0(s1, s2, &b, &p1, &p2, buf1, buf2, f340, a, param);
                if (ia) {
                    int e1 = f28->func_00168550(D_00289440, s4, -1);
                    int e2 = f28->func_00168550(D_0028942C, s5, -1);
                    if (e1 && e2) {
                        v1 = *func_00182980(&v1, s5);
                        v2 = *func_00182980(&v2, s4);
                        for (j = 0; j < f340; j++)
                            obj->func_001AE4D0(v1, v2, j);
                    } else {
                        for (j = 0; j < f340; j++) {
                            func_001ADCC0(name, 0x40, D_002867E8, D_00289410, j + 1);
                            f28->func_00168550(name, s6, -1);
                            v3 = *func_00182980(&v3, s6);
                            func_001ADCC0(name, 0x40, D_002867E8, D_002893F4, j + 1);
                            f28->func_00168550(name, s6, -1);
                            v4 = *func_00182980(&v4, s6);
                            obj->func_001AE4D0(v3, v4, j);
                        }
                    }
                }
            }
        }
    }
}

void C_00182CC0_Scene::func_00182CC0()
{
    char bufB[0x100];
    char bufA[0x100];
    int j;
    int def;
    int n;
    int cnt;
    int i;
    int k;
    int m;

    n = 0;
    def = 0;
    cnt = 0;
    f2C->func_00169710(D_0027AEE4);
    f2C->func_00168C20(D_0027AED4, 0, &n);
    f2C->func_00168C20(D_0027AEC4, 0, &def);
    for (i = 1; i <= n; i++) {
        func_001ADCC0(bufA, 0x100, D_0027AEA8, i);
        f2C->func_00169710(bufA);
        f2C->func_00168C20(D_0027AE94, 0, &cnt);
        for (j = 1; j <= cnt; j++) {
            func_001ADCC0(bufA, 0x100, D_0027AE80, i, j);
            f2C->func_00169710(bufA);
            f2C->func_00168BE0(D_0027AE7C, D_00275630, bufB, -1);
            for (k = 1; k <= f340; k++) {
                for (m = 1; m <= f3B0[k - 1]->f24; m++) {
                    if (func_001EA426(bufB, f3B0[k - 1]->f28[m - 1]->fC->name) == 0) {
                        f3B0[k - 1]->f28[m - 1]->fC->f148 = i;
                    } else if (def != 0) {
                        if (f3B0[k - 1]->f28[m - 1]->fC->f148 == 0) {
                            f3B0[k - 1]->f28[m - 1]->fC->f148 = def;
                        }
                    }
                }
            }
        }
    }
}

void C_00182EB0_Scene::func_00182EB0()
{
    char bufB[0x100];
    char bufA[0x100];
    int n = 0;
    int def = 0;
    int cnt = 0;
    int i, j, k, m;

    if (f3AC) {
        f2C->func_00169710(D_0027AEE4);
        f2C->func_00168C20(D_0027AED4, 0, &n);
        f2C->func_00168C20(D_0027AEC4, 0, &def);
        for (i = 1; i <= n; i++) {
            func_001ADCC0(bufA, 0x100, D_0027AEA8, i);
            f2C->func_00169710(bufA);
            f2C->func_00168C20(D_0027AE94, 0, &cnt);
            for (j = 1; j <= cnt; j++) {
                func_001ADCC0(bufA, 0x100, D_0027AE80, i, j);
                f2C->func_00169710(bufA);
                f2C->func_00168BE0(D_0027AE7C, D_00275630, bufB, -1);
                for (k = 0; k < f3AC->f24; k++) {
                    S_00182EB0_Ent *e = f3AC->f28[k];
                    if (e->f4 == 1 && e->f1A4 && e->f1A4->f280) {
                        if (func_001EA426(bufB, e->fA0) == 0) {
                            for (m = 0; m < e->f1A4->f284; m++)
                                e->f1A4->f280[m]->f6d = (char)i;
                        } else if (def != 0 && e->f1A4->f280[0]->f6d == 0) {
                            for (m = 0; m < e->f1A4->f284; m++)
                                e->f1A4->f280[m]->f6d = (char)def;
                        }
                    }
                    if (e->f4 == 2 && e->f58 && e->f58->name) {
                        if (func_001EA426(bufB, e->f58->name) == 0)
                            e->f58->f40C->f6d = (char)i;
                        else if (def != 0 && e->f58->f40C->f6d == 0)
                            e->f58->f40C->f6d = (char)def;
                    }
                }
            }
        }
    }
}

void C_00182CC0::func_00183130()
{
    int j;
    int N;
    int Y;
    int i;
    char base[0x104];
    char buf[0x104];
    char *p;
    int k;

    f28->func_00169710(D_002893D8);
    f28->func_00168C20(D_002893BC, 0, &N);
    for (i = 0; i < N; i++) {
        func_001ADCC0(buf, 0x104, D_002893B4, i + 1);
        f28->func_00169710(buf);
        f28->func_00168BE0(D_00276310, D_00275630, base, -1);
        p = func_001E8AC0(base, '.');
        if (p != 0) {
            memset(p, 0, strlen(p));
        }
        f28->func_00168C20(D_0028939C, 1, &Y);
        for (j = 0; j < f340; j++) {
            S_00183130_Group *g = f3A8[j];
            for (k = 0; k < g->f24; k++) {
                S_00183130_Item *it = g->f28[k];
                if (it != 0 && it->f4 == 1 && func_001EA426(it->fC->name, base) == 0) {
                    it->fC->f140 = Y;
                }
            }
        }
    }
}

void C_00182CC0::func_001832C0()
{
    C_00168280 *p = f28;
    if (p != 0) {
        p->func_001691E0();
        func_001E891B(p);
        f28 = 0;
    }
}

int C_00182CC0::func_001832F0(char *name)
{
    char buf[0x104];

    func_001ADCC0(buf, 0x104, D_00275678, f30, name);
    func_00030F30(buf, &D_002893EC);
    v56();
    void *mem = func_001E8A44(0x4cc);
    C_00168280 *obj = mem != 0 ? ((C_00168280 *)mem)->func_00168280() : 0;
    f28 = obj;
    if (obj->func_00169490(buf, 0) == 0) {
        C_00168280 *p = f28;
        if (p != 0) {
            p->func_001691E0();
            func_001E891B(p);
        }
        f28 = 0;
        return 0;
    }
    return 1;
}

int C_00182CC0::func_001833A0()
{
    if (f28 == 0) {
        return 0;
    }
    if (f3C0 != 0) {
        f3C8 = f3C0->f24;
    } else {
        f3C8 = 0;
    }
    v34();
    v35();
    v40();
    v41();
    v44();
    v46(0);
    v47();
    v48();
    v49();
    v50();
    v42();
    return 1;
}

void C_00182CC0::func_001839F0()
{
    if (f3C0 == 0) {
        void *mem = func_001E8A44(0x2c);
        f3C0 = mem != 0 ? ((C_001B82A0 *)mem)->func_001B82A0(1) : 0;
    }
    if (f3C0->v27(f28) != 0) {
        return;
    }
    if (f3C0->f24 != 0) {
        return;
    }
    f3C0->v2();
    f3C0 = 0;
}

void C_00182CC0::func_00183A50()
{
    if (f3C4 == 0) {
        void *mem = func_001E8A44(0x2c);
        f3C4 = mem != 0 ? ((C_001B9B20 *)mem)->func_001B9B20(1) : 0;
    }
    if (f3C4->v27(f28) != 0) {
        return;
    }
    if (f3C4->f24 != 0) {
        return;
    }
    f3C4->v2();
    f3C4 = 0;
}

void C_00182CC0::func_00183AB0()
{
    if (f3BC == 0) {
        void *mem = func_001E8A44(0x2c);
        f3BC = mem != 0 ? ((C_001B8450 *)mem)->func_001B8450(1) : 0;
    }
    f3BC->func_001BA9C0(f28);
}

