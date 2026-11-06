/* 7 functions from 0x00189060 to 0x0018A010, found by Ghidra. */
#include "common.h"

void *func_001E8A44(int size);

struct C_00185B10 {
    virtual int dummy0(int param_1);
    C_00185B10 *func_00185B10(void);
};

struct C_00157600 {
    int func_00157600(int param_1);
};

extern int D_00289ABC;
extern int D_00289BFC;
extern int D_00289C9C;
extern int D_00289D8C;

struct SceneSound {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(int a);
    char pad4[0x24 - 4];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
};

struct BasicScene;

extern int D_0027B160;

struct SceneLoader {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(BasicScene *scene, int a, void *b, int c);
    SceneLoader *func_001B6E70(int a);
};

struct SceneItem {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2(BasicScene *scene);
};

struct SceneGroup {
    char pad0[0x24];
    int count;
    SceneItem **items;
};

struct SceneSlot {
    char pad0[0x38];
    int f38;
};

struct SceneEntry {
    char pad0[0x14c];
    unsigned char flags;
    char pad14d[0x160 - 0x14d];
};

int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct N_189D40 { virtual void v0(int d); };
struct M_189D40 {
    char pad0[0x1c]; 
};
struct O_189D40 { char pad[0xb4]; int fb4; char padb8[0x10]; int fc8; char padcc[4]; int fd0; int fd4; };
struct P_189D40 { char pad[0xc4]; char *unkc4; };
struct E_189D40 {
    virtual void v0(int a); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26();
    virtual void v27(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p);
    virtual void v28();
    char padx[0xd0 - 8];
    O_189D40 *unkd0;
    E_189D40 *func_001732E0(int a);
    void func_001740B0(int a, int b, int c, int d, int e, int f);
};
struct W_189D40 { char *vtbl; int kind; E_189D40 *obj; int pad; };
struct X_189D40 { virtual void v0(int f); };
struct G_189D40 { char pad[0x24]; int count; W_189D40 **items; char pad2[0]; };
struct R_189D40 { char pad0[0x24]; int cnt; char pad28[0]; };
struct Q_189D40 { char pad[0x248]; int a248, a24c, a250, a254, a258, a25c, a260, a264, a268, a26c; int a270[4]; };
extern char D_00289F8C[];
void __stdcall func_001577A0(void *v, int t);
int func_001E8AF0(void *a, void *b);

struct C_189D40 {
    char pad0[0x340];
    int f340;
    char pad344[0x3a8 - 0x344];
    G_189D40 **f3A8;
    char pad3ac[0x3e4 - 0x3ac];
    int f3E4;
    int f3E8;
    char pad3ec[0x498 - 0x3ec];
    int f498;
    Q_189D40 **f49C;
    int f4A0;
    int *f4A8;
    int *f4AC;
    int func_00189D40(void);
};
extern char D_0028A388[];
extern char D_0028A374[];
extern char D_0028A35C[];
extern int D_0028A0D4;

struct S_00189B60_Vec4 {
    float x, y, z, w;
    S_00189B60_Vec4(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
    S_00189B60_Vec4() {}
    void Set(float a, float b, float c, float d) {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

static inline void SetVec4Ref_00189B60(S_00189B60_Vec4 *v, const float &a, const float &b, const float &c, const float &d)
{
    v->z = c;
    v->y = b;
    v->x = a;
    v->w = d;
}

static __forceinline void SetVec4_00189B60(S_00189B60_Vec4 *v, float a, float b, float c, float d)
{
    v->x = a;
    v->y = b;
    v->z = c;
    v->w = d;
}

struct C_0015E0F0 {
    int func_0015E0F0(int a);
};
extern C_0015E0F0 *D_002E2930;

struct C_00189B60_Node;

struct C_0017A4D0 {
    C_00189B60_Node *func_0017A4D0(int a);
};

struct C_00167760 {
    C_00167760 *func_00167760(int a);
    C_00167760 *func_00167D10(C_00189B60_Node *owner, const char *name);
};

/* per-slot loaded object of the scene */
struct C_00189B60_Node {
    C_00189B60_Node *func_0017ABE0(const char *name);
    void func_0017A8F0(S_00189B60_Vec4 *a, S_00189B60_Vec4 *b, int c);
};

extern "C" int strcmp(const char *, const char *);

struct S_00189060_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
};

struct S_00189060_X {
    char pad0[4];
    S_00189060_Obj **f4;
    char pad8[0xc];
    int f14;
};

struct S_00189060_Holder {
    char pad0[0x28];
    S_00189060_X **f28;
};

struct S_00189060_Item {
    char pad0[4];
    int kind;
    char pad8[0x104];
    int f10c;
    int f110;
    char name[1];
};

struct S_00189060_Group {
    char pad0[8];
    int count;
    char padc[0x100];
    S_00189060_Item **items;
};

struct BasicScene;

struct S_00189060_Root {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(BasicScene *scene);
    char pad4[0x24 - 4];
    int count;
    S_00189060_Group **groups;
};

struct S_00189060_Name {
    char pad0[0xa0];
    char name[1];
};

struct S_00189060_List {
    char pad0[0x24];
    int count;
    S_00189060_Name **items;
};

struct S_00189060_Mgr {
    char pad0[0x2c];
    S_00189060_List *f2c;
    void func_0001C240(void);
    void func_0001BAC0(int idx, int a);
};

struct S_00189060_Sub {
    void func_00188E70(void);
};

struct BasicScene {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void dummy28();
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void dummy33();
    virtual void dummy34();
    virtual void dummy35();
    virtual void dummy36();
    virtual void dummy37();
    virtual void dummy38();
    virtual void dummy39();
    virtual void dummy40();
    virtual void dummy41();
    virtual void dummy42();
    virtual void dummy43();
    virtual void dummy44();
    virtual int dummy45();
    virtual void dummy46();
    virtual void dummy47();
    virtual void dummy48();
    virtual void dummy49();
    virtual void dummy50();
    virtual void dummy51();
    virtual void dummy52();
    virtual void dummy53();
    virtual void dummy54();
    virtual void dummy55();
    virtual void dummy56();
    virtual void dummy57();
    virtual void dummy58();
    virtual void dummy59();
    virtual void dummy60();
    char pad4[0x28 - 4];
    int f28;
    int f2c;
    char pad30[0x340 - 0x30];
    int f340;
    SceneEntry *f344;
    int f348;
    char pad34c[0x394 - 0x34c];
    C_00185B10 *f394;
    SceneSound *f398;
    SceneSound *f39c;
    SceneSound *f3a0;
    SceneSound *f3a4;
    SceneGroup **f3a8;
    char pad3ac[0x3b4 - 0x3ac];
    S_00189060_Root *f3b4;
    S_00189060_Sub *f3b8;
    char pad3bc[0x3c0 - 0x3bc];
    S_00189060_Holder *f3c0;
    char pad3c4[0x3e4 - 0x3c4];
    int f3e4;
    char pad3e8[0x3f4 - 0x3e8];
    C_00189B60_Node *arr3f4[12];
    C_00167760 *arr424[12];
    int arr454[12];
    S_00189060_Mgr *f484;
    char pad488[0x494 - 0x488];
    int f494;
    char pad498[0x4a8 - 0x498];
    SceneSlot **f4a8;
    int func_00189B60(int n);
    void func_00189060(void);
    void func_001898D0(void);
    int func_00189720(void);
    void func_00189770(void);
    int func_00189AA0(void);
};

void BasicScene::func_00189060(void)
{
    int i;
    int j;
    int k;
    int idx;
    S_00189060_Item *item;
    S_00189060_List *list;

    if (f3b8 != 0) {
        f3b8->func_00188E70();
    }
    if (f484 != 0) {
        f484->func_0001C240();
    }
    if (f3b4 != 0) {
        f3b4->v30(this);
        for (i = 0; i < f3b4->count; i++) {
            for (j = 0; j < f3b4->groups[i]->count; j++) {
                item = f3b4->groups[i]->items[j];
                if (item->kind == 1) {
                    list = f484->f2c;
                    idx = -1;
                    for (k = 0; k < list->count && idx == -1; k++) {
                        if (strcmp(item->name, list->items[k]->name) == 0) {
                            idx = k;
                        }
                    }
                    f484->func_0001BAC0(idx, 0);
                }
                item = f3b4->groups[i]->items[j];
                if (item->kind == 0xb) {
                    S_00189060_X *x = f3c0->f28[item->f10c - 1];
                    S_00189060_Obj *y = x->f4[item->f110 - 1];
                    y->v32();
                    if (x->f14 != 0) {
                        y->v30();
                        y->v6();
                    } else {
                        y->v31();
                        y->v4();
                    }
                }
            }
        }
    }
}

int BasicScene::func_00189720(void)
{
    if (f394 == 0) {
        void *mem = func_001E8A44(0x148);
        f394 = mem != 0 ? ((C_00185B10 *)mem)->func_00185B10() : 0;
    }
    if (f394->dummy0(f28) != 0) {
        return dummy45();
    }
}

void BasicScene::func_00189770(void)
{
    SceneSound *p;
    SceneSound *q;

    p = (SceneSound *)func_001E8A44(0x2c);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289ABC;
        p->unk24 = 0;
        p->unk28 = 0;
        q = p;
    } else {
        q = 0;
    }
    f398 = q;
    if (f398->dummy27(f2c) == 0) {
        f398->dummy2();
        f398 = 0;
    }

    p = (SceneSound *)func_001E8A44(0x30);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289BFC;
        p->unk24 = 0;
        p->unk28 = 0;
        p->unk2C = 0;
        q = p;
    } else {
        q = 0;
    }
    f39c = q;
    if (f39c->dummy27(f2c) == 0) {
        f39c->dummy2();
        f39c = 0;
    }

    p = (SceneSound *)func_001E8A44(0x2c);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289C9C;
        p->unk24 = 0;
        p->unk28 = 0;
        q = p;
    } else {
        q = 0;
    }
    f3a0 = q;
    if (f3a0->dummy27(f2c) == 0) {
        f3a0->dummy2();
        f3a0 = 0;
    }

    p = (SceneSound *)func_001E8A44(0x34);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289D8C;
        p->unk24 = 0;
        p->unk28 = 0;
        p->unk2C = 0;
        p->unk30 = 0;
        q = p;
    } else {
        q = 0;
    }
    f3a4 = q;
    if (f3a4->dummy27(f2c) == 0) {
        f3a4->dummy2();
        f3a4 = 0;
    }
    dummy60();
}

int BasicScene::func_00189AA0(void)
{
    int i = 0;
    if (f3a8 != 0 && 0 < f340) {
        do {
            f348 = i;
            f4a8[i]->f38 = (f344[i].flags >> 1) & 1;
            SceneGroup *g = f3a8[i];
            if (g->count > 0) {
                int j = 0;
                if (j < g->count) {
                    do {
                        g->items[j]->dummy2(this);
                        j++;
                    } while (j < g->count);
                }
            }
            dummy36();
            i++;
        } while (i < f340);
    }
    return 1;
}

int BasicScene::func_00189B60(int n)
{
    char nameB[0x80];
    char nameA[0x80];
    S_00189B60_Vec4 hi;
    S_00189B60_Vec4 lo;
    int i;

    hi = S_00189B60_Vec4(1000.0f, 1000.0f, 1000.0f, 1.0f);
    f494 = n;
    lo = S_00189B60_Vec4(-0.3f, -0.3f, -0.3f, 1.0f);
    D_002E2930->func_0015E0F0(2);
    for (i = 0; i < n; i++) {
        void *mem = func_001E8A44(0x170);
        arr3f4[i] = mem != 0 ? ((C_0017A4D0 *)mem)->func_0017A4D0(1) : 0;
        func_001ADCC0(nameA, 0x80, D_0028A388, i + 1);
        arr3f4[i] = arr3f4[i]->func_0017ABE0(nameA);
        if (arr3f4[i] != 0) {
            func_001ADCC0(nameA, 0x80, D_0028A374, i + 1);
            mem = func_001E8A44(0x364);
            C_00167760 *o = mem != 0 ? ((C_00167760 *)mem)->func_00167760(1) : 0;
            arr424[i] = o->func_00167D10(arr3f4[i], nameA);
            if (f3e4 != 0) {
                func_001ADCC0(nameB, 0x80, D_0028A35C, i + 1);
                void *p = func_001E8A44(0x6778);
                if (p != 0) {
                    ((C_00157600 *)p)->func_00157600(1);
                    *(void **)p = &D_0028A0D4;
                }
                arr454[i] = 0;
            }
            arr3f4[i]->func_0017A8F0(&hi, &lo, 3);
        }
    }
    return 1;
}

int C_189D40::func_00189D40(void)
{
    int i, j, k;
    void *p;
    E_189D40 *obj;
    W_189D40 *node;
    char *dst;

    if (f49C != 0) {
        p = func_001E8A44(0x24);
        if (p)
            ((C_00157600 *)p)->func_00157600(1);
        f4A0 = (int)p;
    }
    for (i = 0; i < f498; i++) {
        for (j = 0; j < f340; j++) {
            G_189D40 *g = (G_189D40 *)f3A8[j];
            for (k = 0; k < g->count; k++) {
                W_189D40 *item = g->items[k];
                if (item == 0)
                    continue;
                if (item->kind != 1)
                    continue;
                if (item->obj == 0)
                    continue;
                if (func_001E8AF0((char *)item->obj + 0x28, (char *)f49C[i] + 0x144) == 0)
                    continue;
                obj = 0;
                p = func_001E8A44(0x154);
                if (p)
                    obj = ((E_189D40 *)p)->func_001732E0(1);
                obj->func_001740B0((int)item->obj, f3E4, f3E8, (int)f49C[i] + 0x144, f4A8[j], f4AC[j]);
                obj->v27(f49C[i]->a248, f49C[i]->a24c, 0, 0, 0, 0, 0,
                         f49C[i]->a254, f49C[i]->a250, f49C[i]->a258, f49C[i]->a25c, 0, 0, 0, 0, 0);
                obj->unkd0->fb4 = f49C[i]->a260;
                obj->unkd0->fc8 = f49C[i]->a264;
                obj->unkd0->fd0 = f49C[i]->a268;
                obj->unkd0->fd4 = f49C[i]->a26c;
                *(int *)((char *)obj->unkd0 + 0xb8) = 0;
                dst = *(char **)((char *)obj + 0xc4);
                *(int *)(dst + 0x190) = f49C[i]->a270[0];
                *(int *)(dst + 0x194) = f49C[i]->a270[1];
                *(int *)(dst + 0x198) = f49C[i]->a270[2];
                *(int *)(dst + 0x19c) = f49C[i]->a270[3];
                obj->v28();
                func_001577A0((void *)f4A0, (int)obj);
                node = (W_189D40 *)func_001E8A44(0x10);
                if (node) {
                    node->kind = 0;
                    node->vtbl = D_00289F8C;
                    node->obj = 0;
                    node->pad = 0;
                } else {
                    node = 0;
                }
                node->kind = 2;
                node->obj = obj;
                g->items[k] = node;
                item->obj->v0(1);
            }
        }
    }
    return 1;
}

