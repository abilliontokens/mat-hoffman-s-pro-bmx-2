/* 10 functions from 0x00138800 to 0x001396D0, found by Ghidra. */
#include "common.h"
extern int D_00284A2C;
extern float D_00275544;
struct CutSceneAudio { void func_001D1A30(int); };
struct CutSceneWorld { char pad[0xb4]; CutSceneAudio *audio; };
struct CutSceneRoot { char pad[4]; CutSceneWorld *world; };
struct CutScenePlayer { void func_001A4100(int,int,int); };
struct CutSceneTimer { void func_001C4E70(float); };
struct CutSceneView { void func_0012B7D0(void *,int,int,int,int); };
struct ResetValue { int f0, f4, f8; };
struct ResetObject { int f0, f4, f8, fc; };
struct ResetItem { int pad[4]; int count; int f14; ResetValue *values; ResetObject *obj; int tail[3]; };
struct ResetChild { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(int); virtual void v6(); virtual int v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); };
struct ResetGlobal { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(int,int,int,int); };
struct ResetGroup { int f0; ResetChild **children; int pad[2]; int count; };
struct ResetGroups { char pad[0x24]; int count; ResetGroup **groups; };
extern ResetGlobal *D_002A8490;
struct CutScene {
 void *vtbl; char pad4[0x20];
int f24;
int f28;
int f2c;
int f30;
int f34;
int f38;
int f3c;
int f40;
int f44;
int f48;
int f4c;
int f50;
int f54;
int f58;
int f5c;
int f60;
int f64;
int f68;
int f6c;
int f70;
int f74;
int f78;
int f7c;
int f80;
int f84;
int f88;
int f8c;
 void func_00157600(int);
 void func_00157660();
  CutScene *func_00138800(int);
 void func_00138890();
    void func_001390A0(int index);
   void func_00139360(int oldIndex, int index);
   void func_00139180(int index);
  void func_001394F0(int);
};
struct CutScene_Item {
    char pad0[0x18];
    void *f18;
    struct CutScene_Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(int); } *f1c;
    void *f20;
    void *f24;
};
extern "C" void func_001E8390(void *);
extern "C" void func_001E891B(void *);
struct C_00139080 {
    char pad0[0x88];
    int unk88;
    int unk8C;
    void func_00139080(int a0, int a1);
};

struct C_00139060 {
    char pad0[0x84];
    int unk84;
    char pad88[0x4];
    int unk8C;
    void func_00139060(int a0, int a1);
};

struct S_1390A0_This {
    char pad0[0x40];
    void *f40;
    char pad44[0x58 - 0x44];
    void *f58;
    char pad5C[4];
    void *f60;
};

struct S_1390A0_Entry {
    char pad0[4];
    int count1;
    int count2;
    char padC[0x14];
    char *list1;
    char *list2;
};

struct S_1390A0_Cam {
    void func_00198390(void);
};

struct S_1390A0_A {
    char pad0[4];
    S_1390A0_Cam *f4;
};

struct S_1390A0_Obj {
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
};

struct S_1390A0_Q {
    char pad0[4];
    S_1390A0_Obj **f4;
    char pad8[8];
    int f10;
};

struct S_1390A0_60 {
    char pad0[0x28];
    void **f28;
};
struct S_1395_Owner {
    char pad0[0x3c];
    int count;
    S_1390A0_Entry *entries;
    char pad44[0x14];
    S_1390A0_A **list58;
    char pad5c[4];
    S_1390A0_60 *p60;
};

CutScene *CutScene::func_00138800(int arg) {
func_00157600(arg);
vtbl = &D_00284A2C;
f24 = -1;
f3c = 0;
f54 = 0;
f70 = 0;
f6c = 0;
f28 = 0;
f34 = 0;
f38 = 0;
f40 = 0;
f44 = 0;
f48 = 0;
f4c = 0;
f50 = 0;
f58 = 0;
f5c = 0;
f60 = 0;
f78 = 0;
f7c = 0;
f80 = 0;
f84 = 0;
f88 = 0;
f8c = 0;
f2c = 0xbf800000;
f30 = 0x40000000;
f64 = -1;
f68 = 100;
f74 = 1;
return this;
}

void CutScene::func_00138890() {
    vtbl = &D_00284A2C;
    if (f58) func_001E8390((void *)f58);
    if (f80) func_001E891B((void *)f80);
    for (int i = 0; i < f3c; i++) {
        int off = i * 0x2c;
        if (((CutScene_Item *)(f40 + off))->f1c) ((CutScene_Item *)(f40 + off))->f1c->v4(1);
        if (((CutScene_Item *)(f40 + off))->f20) func_001E8390(((CutScene_Item *)(f40 + off))->f20);
        if (((CutScene_Item *)(f40 + off))->f24) func_001E8390(((CutScene_Item *)(f40 + off))->f24);
        if (((CutScene_Item *)(f40 + off))->f18) func_001E891B(((CutScene_Item *)(f40 + off))->f18);
    }
    if (f40) func_001E8390((void *)f40);
    func_00157660();
}

void C_00139060::func_00139060(int a0, int a1) {
    unk84 = a0;
    unk8C = a1;
}

void C_00139080::func_00139080(int a0, int a1) {
    unk88 = a0;
    unk8C = a1;
}

void CutScene::func_001390A0(int index)
{
    S_1390A0_This *self = (S_1390A0_This *)this;
    int off = index * 0x2c;
    int i, j, k;
    S_1390A0_Q *q;

    for (i = 0; i < ((S_1390A0_Entry *)((char *)self->f40 + off))->count1; i++) {
        if (*(int *)(((S_1390A0_Entry *)((char *)self->f40 + off))->list1 + i * 0x1c + 0x18) == 0)
            ((S_1390A0_A *)((void **)self->f58)[*(int *)(((S_1390A0_Entry *)((char *)self->f40 + off))->list1 + i * 0x1c)])->f4->func_00198390();
    }
    for (j = 0; j < ((S_1390A0_Entry *)((char *)self->f40 + off))->count2; j++) {
        if (*(int *)(((S_1390A0_Entry *)((char *)self->f40 + off))->list2 + j * 0x10 + 0xc) == 0) {
            q = (S_1390A0_Q *)((S_1390A0_60 *)self->f60)->f28[*(int *)(((S_1390A0_Entry *)((char *)self->f40 + off))->list2 + j * 0x10)];
            for (k = 0; k < q->f10; k++) {
                q->f4[k]->v31();
                q->f4[k]->v4();
            }
        }
    }
}

void CutScene::func_001394F0(int arg) {
    f24 = arg; f34 = 0; f28 = 0;
    int i, j;
    for (i = 0; i < f3c; i++) {
        ((ResetItem *)f40)[i].obj->fc = 0;
        if (((ResetItem *)f40)[i].values) {
            if (f74 == 1) ((ResetItem *)f40)[i].values->f4 = ((ResetItem *)f40)[i].values->f8;
            else for (j = 0; j < ((ResetItem *)f40)[i].count; j++)
                ((ResetItem *)f40)[i].values[j].f4 = ((ResetItem *)f40)[i].values[j].f8;
        }
    }
    if (f60) for (i = 0; i < ((ResetGroups *)f60)->count; i++) {
        ResetGroup *g = ((ResetGroups *)f60)->groups[i];
        for (j = 0; j < g->count; j++) g->children[j]->v32();
    }
    D_002A8490->v15(f44, 0, 0, 0);
}

