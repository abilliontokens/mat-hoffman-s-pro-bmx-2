/* 6 functions from 0x00183AF0 to 0x00184930, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int __stdcall func_001577A0(int a, int b);
void func_001E891B(void *ptr);
void *func_001E8A44(int size);
extern float D_0028957C;
extern char D_00289570[];

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

struct C_0015E300 {
    int func_0015E300(int a, int b, int c);
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
    virtual void dummy1(int i, void *scene);
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

struct BmxScene {
    char pad0[0x28];
    int f28;
    void *f2c;
    char f30[0x104];
    char pad134[0x340 - 0x134];
    int f340;
    char pad344[0x38c - 0x344];
    BmxSceneMgr *f38c;
    char pad390[0x3ac - 0x390];
    BmxSceneMgr *f3ac;
    void func_00183E90(void);
    void func_00183D70(void *a0);
    int func_00183DD0(int param_1);
    int func_00184880(void);
};

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

void BmxScene::func_00183E90(void)
{
    void *p = f2c;
    if (p != 0) {
        ((C_001691E0 *)p)->func_001691E0();
        func_001E891B(p);
        f28 = 0;
    }
}
