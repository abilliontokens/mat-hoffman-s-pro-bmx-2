/* 10 functions from 0x00138800 to 0x001396D0, found by Ghidra. */
#include "common.h"
extern int D_00284A2C;
extern float D_00275544;
struct SceneVector { int x,y,z,w; };
struct SceneCamera { void func_001983A0(); void func_00199600(SceneVector); void func_00198E60(); void func_0019ABA0(int,int); };
struct SceneActor { int f0; SceneCamera *camera; char pad8[0x2c]; int f34; void func_00164820(int); };
struct SceneTrack { int id, value; SceneVector vector; int tail; };
struct SceneEntry { int f0,count1,count2,id; int pad[3]; struct SceneTarget *target; SceneTrack *tracks; char *groups; int tail; };
struct SceneTarget { int pad[3]; int fc; void func_00194B40(int); };
struct SceneBank { char pad[0x4a8]; int *values; };
struct SceneOutput { void func_0012B350(); void func_0012A770(int,int); };
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
extern int D_00284A98;
int func_001EA426(char *a, char *b);
void *func_001E8A44(int size);
void func_0011CA60(int a, int b, int c, int d);
struct Obj138 {
    char pad0[8];
    int f8;
    char padC[0x30C];
    SceneVector vec318;
    int count328;
    int f32c;
};
struct Found138 {
    Found138 *func_00198330(char *s);
    int *func_00199B00(int *a, int b);
};
struct Elem138 {
    int f0;
    Found138 *f4;
};
struct ArrObj138 {
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
struct Entry138 {
    virtual void v0();
    virtual void v1();
    virtual int v2(int a, void *b, void *c);
    int *arr4;
    Obj138 *obj8;
    int typeC;
    int count10;
    int f14;
};
struct Cont138 {
    char pad0[0x24];
    int count;
    Entry138 **arr;
};
struct ArrVec138 {
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
    void func_0011CA60(SceneVector v);
};
struct C0_138 { C0_138 *func_0016ABE0(int); };
struct C1_138 { C1_138 *func_0016B770(int); };
struct C2_138 { C2_138 *func_0016BE40(int); };
struct C3_138 { C3_138 *func_0016C5B0(int); };
struct C4_138 { C4_138 *func_0016CE80(int); };
struct C5_138 { C5_138 *func_0016D620(int); };
struct C6_138 { C6_138 *func_0016DA40(int); };
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
   void func_00138950();
   void func_001577A0(void *o, int a);
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
    virtual void v30(int,int);
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
struct S_1395_Track {
    int id;
    char pad4[0x14];
    int flag;
};

struct S_1395_Group {
    int id;
    int pad4[2];
    int flag;
};

struct S_1395_Entry {
    char pad0[4];
    int count1;
    int count2;
    char padC[0x14];
    S_1395_Track *tracks;
    S_1395_Group *groups;
    int tail;
};

struct S_1395_Owner {
    char pad0[0x3c];
    int count;
    S_1395_Entry *entries;
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

void CutScene::func_00138950()
{
    int *a0, *a1, *a2, *a3, *a4, *a5, *a6;
    int index;
    SceneVector vec;
    SceneVector tmp;
    int i;
    int k;
    Found138 *found;

    index = 0;
    if (((Cont138 *)f60)->count > 0) {
        do {
            Entry138 *e = ((Cont138 *)f60)->arr[index];
            if (func_001EA426((char *)e->obj8 + 0x214, (char *)&D_00284A98) != 0) {
                e->typeC = e->obj8->f8;
                e->count10 = e->obj8->count328;
                e->f14 = e->obj8->f32c;
                if (e->count10 != 0) {
                    if ((unsigned int)e->typeC <= 0xc) {
                        switch (e->typeC) {
                        case 0:
                            a0 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x250);
                                a0[i] = (int)(m ? ((C0_138 *)m)->func_0016ABE0(1) : 0);
                            }
                            e->arr4 = a0;
                            break;
                        case 1:
                            a1 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x1f8);
                                a1[i] = (int)(m ? ((C1_138 *)m)->func_0016B770(1) : 0);
                            }
                            e->arr4 = a1;
                            break;
                        case 2:
                            a2 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x214);
                                a2[i] = (int)(m ? ((C2_138 *)m)->func_0016BE40(1) : 0);
                            }
                            e->arr4 = a2;
                            break;
                        case 8:
                            a3 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x21c);
                                a3[i] = (int)(m ? ((C3_138 *)m)->func_0016C5B0(1) : 0);
                            }
                            e->arr4 = a3;
                            break;
                        case 9:
                            a4 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x218);
                                a4[i] = (int)(m ? ((C4_138 *)m)->func_0016CE80(1) : 0);
                            }
                            e->arr4 = a4;
                            break;
                        case 11:
                            a5 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x230);
                                a5[i] = (int)(m ? ((C5_138 *)m)->func_0016D620(1) : 0);
                            }
                            e->arr4 = a5;
                            break;
                        case 12:
                            a6 = (int *)func_001E8A44(e->obj8->count328 * 4);
                            for (i = 0; i < e->obj8->count328; i++) {
                                void *m = func_001E8A44(0x238);
                                a6[i] = (int)(m ? ((C6_138 *)m)->func_0016DA40(1) : 0);
                            }
                            e->arr4 = a6;
                            break;
                        default:
                            break;
                        }
                        Obj138 *o = e->obj8;
                        vec = o->vec318;
                        found = 0;
                        if (func_001EA426((char *)o + 0xc, (char *)&D_00284A98) != 0) {
                            for (k = 0; k < f54; k++) {
                                if (func_001EA426((char *)e->obj8 + 0xc, (char *)((int *)f58)[k] + 0x138) == 0) {
                                    found = ((Elem138 *)((int *)f58)[k])->f4;
                                    if (func_001EA426((char *)e->obj8 + 0x110, (char *)&D_00284A98) != 0)
                                        found = ((Elem138 *)((int *)f58)[k])->f4->func_00198330((char *)e->obj8 + 0x110);
                                    if (found != 0)
                                        vec = *(SceneVector *)found->func_00199B00((int *)&tmp, 0);
                                    break;
                                }
                            }
                        }
                        switch (e->typeC) {
                        case 0:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a0[i], found) == 1)
                                    func_001577A0((void *)a0[i], 2);
                            }
                            break;
                        case 1:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a1[i], found) == 1)
                                    func_001577A0((void *)a1[i], 2);
                            }
                            break;
                        case 2:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a2[i], found) == 1)
                                    func_001577A0((void *)a2[i], 2);
                            }
                            break;
                        case 8:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a3[i], found) == 1)
                                    func_001577A0((void *)a3[i], 2);
                            }
                            break;
                        case 9:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a4[i], found) == 1)
                                    func_001577A0((void *)a4[i], 2);
                            }
                            break;
                        case 11:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a5[i], found) == 1)
                                    func_001577A0((void *)a5[i], 2);
                            }
                            break;
                        case 12:
                            for (i = 0; i < e->count10; i++) {
                                if (e->v2(f4c, (void *)a6[i], found) == 1)
                                    func_001577A0((void *)a6[i], 2);
                            }
                            break;
                        default:
                            break;
                        }
                        for (i = 0; i < e->count10; i++) {
                            ((ArrVec138 *)e->arr4[i])->func_0011CA60(vec);
                            ((ArrVec138 *)e->arr4[i])->func_0011CA60(vec);
                            ((ArrVec138 *)e->arr4[i])->v31();
                            ((ArrVec138 *)e->arr4[i])->v4();
                        }
                        func_001E891B(e->obj8);
                        e->obj8 = 0;
                    }
                }
            }
            index++;
        } while (index < ((Cont138 *)f60)->count);
    }
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

void CutScene::func_00139180(int index) {
 int off=index*0x2c;
 int value=((SceneBank *)f4c)->values[((SceneEntry *)((char *)f40+off))->id];
 int i,j,k;
 for(i=0;i<((SceneEntry *)((char *)f40+off))->count1;i++){
 int id=((SceneEntry *)((char *)f40+off))->tracks[i].id;
 ((SceneActor **)f58)[id]->camera->func_001983A0();
 ((SceneActor **)f58)[id]->func_00164820(((SceneEntry *)((char *)f40+off))->tracks[i].value);
 ((SceneActor **)f58)[id]->f34=f28;
 ((SceneActor **)f58)[id]->camera->func_00199600(((SceneEntry *)((char *)f40+off))->tracks[i].vector);
 ((SceneActor **)f58)[id]->camera->func_00198E60();
 ((SceneActor **)f58)[id]->camera->func_0019ABA0(value,2);
 }
 for(i=0;i<((SceneEntry *)((char *)f40+off))->count2;i++){
 if(*(float *)(((SceneEntry *)((char *)f40+off))->groups+i*16+4)==D_00275544){
 ResetGroup *g=((ResetGroups *)f60)->groups[*(int *)(((SceneEntry *)((char *)f40+off))->groups+i*16)];
 for(k=0;k<g->count;k++){g->children[k]->v31();g->children[k]->v32();g->children[k]->v30();g->children[k]->v6();}
 }
 }
 ((SceneEntry *)((char *)f40+off))->target->func_00194B40(0);
 ((SceneEntry *)((char *)f40+off))->target->fc=f28;
 ((SceneOutput *)f44)->func_0012B350();
 ((SceneOutput *)f44)->func_0012A770(value,2);
}

void CutScene::func_00139360(int oldIndex, int index)
{
 if(index==0 && f64!=-1 && ((CutSceneRoot *)D_002A8490)->world && f78){
 ((CutSceneRoot *)D_002A8490)->world->audio->func_001D1A30(f68);
 ((S_1390A0_Obj *)f78)->v30(f64,1);
 }
 
 if((&((ResetItem *)f40)[index])->values){
 if(f74==1){
 ResetValue *v=(&((ResetItem *)f40)[index])->values;
 if(*(float *)&v->f4 == D_00275544 && v->f0>=0 && f7c)
 ((CutScenePlayer *)f7c)->func_001A4100(v->f0,0,0);
 }else{
 for(int i=0;i<(&((ResetItem *)f40)[index])->count;i++){
 if(*(float *)&(&((ResetItem *)f40)[index])->values[i].f4==D_00275544){
 int id=(&((ResetItem *)f40)[index])->values[i].f0;
 if(id>=0 && ((ResetChild **)f80)[id] && !((ResetChild **)f80)[id]->v7())
 ((ResetChild **)f80)[id]->v5(0);
 }
 }
 }
 }
 if(oldIndex!=-1)func_001390A0(oldIndex);
 if(index!=-1){
 if((&((ResetItem *)f40)[index])->tail[2]==1){
 f2c=0x40000000;
 ((CutSceneTimer *)f50)->func_001C4E70(100.0f);
 }
 func_00139180(index);
 ((CutSceneView *)f48)->func_0012B7D0((&((ResetItem *)f40)[index])->obj,0,0,0,0);
 }
 f24=index;
 if(f88)((void (__cdecl *)(int,int))f88)(f8c,index);
 if(f84)((void (__cdecl *)(int,int))f84)(f8c,index);
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

void __fastcall func_001395D0(S_1395_Owner *self) {
    for (int i = 0; i < self->count; i++) {
        for (int j = 0; j < self->entries[i].count1; j++) {
            if (self->entries[i].tracks[j].flag == 1)
                self->list58[self->entries[i].tracks[j].id]->f4->func_00198390();
        }
        for (int k = 0; k < self->entries[i].count2; k++) {
            if (self->entries[i].groups[k].flag == 1) {
                S_1390A0_Q *q = (S_1390A0_Q *)self->p60->f28[self->entries[i].groups[k].id];
                for (int m = 0; m < q->f10; m++) {
                    q->f4[m]->v31();
                    q->f4[m]->v4();
                }
            }
        }
    }
}

