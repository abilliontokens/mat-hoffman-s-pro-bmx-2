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

