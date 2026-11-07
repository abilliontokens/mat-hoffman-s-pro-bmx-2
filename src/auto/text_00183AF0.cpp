/* 6 functions from 0x00183AF0 to 0x00184930, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int __stdcall func_001577A0(int a, int b);
void func_001E891B(void *ptr);
void *func_001E8A44(int size);
extern float D_0028957C;
extern char D_00289570[];

extern char D_00289528[];
extern char D_002769E8[];
extern char D_0028951C[];
extern char D_00289510[];
void *func_001E83E8(void *ptr, int size);

struct C_00169710 {
    void func_00169710(char *name);
    void func_00168C20(char *key, int flag, int *out);
};

struct C_001691E0 {
    void func_001691E0(void);
};

struct C_00168280 {
    C_00168280 *func_00168280(void);
};

struct C_00169490 {
    int func_00169490(char *buf, int flag);
};

struct C_001BB900 {
    char pad0[0x410];
    int f410;
    int func_001BB900(void *a1);
};

struct SceneNode;
struct C_0015E300 {
    int func_0015E300(int a, int b, int c);
    void func_0015D850(int,int,int,int,int,int,int,int,int);
    void func_0015DA60(int,int,SceneNode*);
};

extern C_0015E300 *D_002E2930;

struct ArgP {
    char pad0[4];
    int f4;
};

struct Elem58 {
    char pad0[4];
    int f4;
    char pad8[0x58 - 8];
    C_001BB900 *f58;
};

struct Rec12 {
    virtual void dummy0();
    virtual int dummy1(int i, void *scene);
    int f4;
    int f8;
};

struct BmxSceneMgr {
    char pad0[0x24];
    int count;
    Elem58 **objs;
    Rec12 *objs2;
    float *floats;
    int *ints;
};

struct SceneDispatch {
virtual void slot0();
virtual void slot1();
virtual void slot2();
virtual void slot3();
virtual void slot4();
virtual void slot5();
virtual void slot6();
virtual void slot7();
virtual void slot8();
virtual void slot9();
virtual void slot10();
virtual void slot11();
virtual void slot12();
virtual void slot13();
virtual void slot14();
virtual void slot15();
virtual void slot16();
virtual void slot17();
virtual void slot18();
virtual void slot19();
virtual void slot20();
virtual void slot21();
virtual void slot22();
virtual void slot23();
virtual void slot24();
virtual void slot25();
virtual void slot26();
virtual void slot27();
virtual void slot28();
virtual void slot29();
virtual void slot30();
virtual void slot31();
virtual void slot32();
virtual void slot33();
virtual void slot34();
virtual void slot35();
virtual void slot36();
virtual void slot37();
virtual void slot38();
virtual void slot39();
virtual void slot40();
virtual void slot41();
virtual void slot42();
virtual void slot43();
virtual void slot44();
virtual void slot45();
virtual void slot46();
virtual void slot47();
virtual void slot48();
virtual void slot49();
virtual void slot50();
virtual void slot51();
virtual void slot52();
virtual void slot53();
virtual void slot54();
virtual void slot55();
virtual void slot56();
virtual void slot57();
virtual void slot58();
virtual void slot59();
virtual void slot60();
virtual void slot61();
virtual void slot62();
virtual void slot63();
virtual void slot64();
virtual void slot65();
virtual void slot66(int);
virtual void slot67(int);
};
struct SceneNode {
    char pad0[0x3c]; int f3c;
    SceneNode *func_00192900(int);
    SceneNode *func_00157600(int);
    SceneNode *func_00179820(int);
    void func_00192AF0(int,int);
    void func_00192A50(SceneNode*,SceneNode*);
    void func_00192A90(void*);
    void func_00192AC0(void*);
    SceneNode *func_0017A310(void*);
    void func_001577A0(SceneNode*,int);
};
struct SceneBounds {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    SceneBounds *func_001C4F40();
    SceneBounds *func_001923F0(int);
    void func_001C4F70(int,int,int,int,int,int,int);
    void func_001C4FA0(int);
};
struct SceneResult {
    int f0; SceneNode *f4; SceneBounds *f8;
    SceneResult *func_00193490();
};
extern SceneBounds *D_002F07E8;
extern SceneResult *D_002EFE78;
struct BmxScene {
    char pad0[0x28];
    int f28;
    void *f2c;
    char f30[0x104];
    char pad134[0x340 - 0x134];
    int f340;
    int *f344; int f348; int f34c; int f350;
    char pad354[0x384-0x354];
    int *f384; int *f388;
    BmxSceneMgr *f38c;
    char pad390[0x3ac - 0x390];
    BmxSceneMgr *f3ac;
    char pad3b0[0x3d4 - 0x3b0];
    int f3d4;
    int *f3d8;
    char pad3dc[0x4a4-0x3dc];
    SceneNode *f4a4;
    SceneNode **f4a8, **f4ac;
    void **f4b0, **f4b4, **f4b8, **f4bc;
    void func_00183AF0(void);
    void func_00183E90(void);
    void func_00183D70(void *a0);
    int func_00183DD0(int param_1);
    int func_00184880(void);
    int func_00183EC0();
};

void BmxScene::func_00183AF0(void)
{
    int n;
    char buf[0x40];
    int i;
    int total;
    ((C_00169710 *)f28)->func_00169710(D_00289528);
    ((C_00169710 *)f28)->func_00168C20(D_002769E8, 0, &n);
    total = n;
    if (total > 0) {
        if (f3d8 != 0) {
            i = f3d4;
            total += i;
            f3d4 = total;
            f3d8 = (int *)func_001E83E8(f3d8, total * 4);
        } else {
            i = 0;
            f3d4 = total;
            f3d8 = (int *)func_001E8A44(total * 4);
        }
        for (; i < total; i++) {
            func_001ADCC0(buf, 0x40, D_0028951C, i + 1);
            ((C_00169710 *)f28)->func_00169710(buf);
            ((C_00169710 *)f28)->func_00168C20(D_00289510, 1, &f3d8[i]);
        }
    }
}

void BmxScene::func_00183D70(void *a0)
{
    int i = 0;
    if (((BmxSceneMgr *)f3ac)->count > 0) {
        do {
            Elem58 *e = ((BmxSceneMgr *)f3ac)->objs[i];
            if (e->f4 == 2) {
                ((C_001BB900 *)((ArgP *)a0)->f4)->func_001BB900((void *)e->f58->f410);
            }
            i++;
        } while (i < ((BmxSceneMgr *)f3ac)->count);
    }
}

int BmxScene::func_00183DD0(int param_1)
{
    char buf[0x104];
    func_001ADCC0(buf, 0x104, D_00289570, f30, pad134);
    void *mem = func_001E8A44(0x4cc);
    C_00168280 *obj = mem != 0 ? ((C_00168280 *)mem)->func_00168280() : 0;
    f2c = obj;
    if (((C_00169490 *)obj)->func_00169490(buf, 0) == 0) {
        void *p = f2c;
        if (p != 0) {
            ((C_001691E0 *)p)->func_001691E0();
            func_001E891B(p);
        }
        f2c = 0;
        return 0;
    }
    return 1;
}

void BmxScene::func_00183E90(void)
{
    void *p = f2c;
    if (p != 0) {
        ((C_001691E0 *)p)->func_001691E0();
        func_001E891B(p);
        f28 = 0;
    }
}

int _func_00183EC0(void) { return 1; }

int BmxScene::func_00184880(void)
{
    int i;
    for (i = 0; i < f38c->count; i++) {
        f38c->objs2[i].dummy1(i, this);
        func_001577A0(f38c->objs2[i].f4, 2);
    }
    for (i = 0; i < f340; i++) {
        float *f = f38c->floats;
        int *n = f38c->ints;
        if (f[i * 4] >= D_0028957C) {
            D_002E2930->func_0015E300(i, (int)&f[i * 4], (int)&n[i]);
        } else {
            D_002E2930->func_0015E300(i, 0, (int)&n[i]);
        }
    }
    return 1;
}

