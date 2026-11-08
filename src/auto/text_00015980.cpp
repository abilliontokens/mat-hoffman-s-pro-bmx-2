/* 1 function from 0x00015980 to 0x00016CF0, found by Ghidra. */
#include "common.h"

typedef struct { float x, y, z, w; } Vec4_15980;

struct S_15980_Sub {
    char pad0[0xbc];
    int fbc;
};

struct S_15980_Sub2 {
    char pad0[4];
    int f4;
};

struct S_15980_Elem {
    char pad0[0x230];
    void *f230;
    char pad234[0x600];
    Vec4_15980 v834;
    char pad844[0x10c];
    S_15980_Sub *f950;
    char pad954[0xac];
    S_15980_Sub2 *fa00;
    char pada04[0x790];
    void *f1194;
};

struct S_15980_World {
    char pad0[0x4e0];
    S_15980_Elem **f4e0;
};

struct S_15980_State {
    char pad0[0x1c8];
    int f1c8;
};

struct S_15980_Mgr {
    char pad0[0x2a4];
    S_15980_State *f2a4;
};

extern S_15980_World *D_002B9120;
extern S_15980_Mgr *D_002A8490;
extern float D_002756C0;
extern float D_002756C4;
extern float D_00275460;
extern float D_002755F8;
extern float D_002756BC;
extern float D_002755E0;
extern float D_00275544;

void func_000111B0(Vec4_15980 *dst, Vec4_15980 *src);

struct S_15980_Obj {
    void func_00011BE0(int *i, float *f);
    void *func_00199B00(int a, Vec4_15980 *out);
    void func_00197B40(void *a, void *b);
    void func_0008AB90(void *a);
    void func_000149A0(int a, float b);
};

struct C_00015980 {
    char pad0[0x384];
    void *f384;
    char pad388[8];
    int f390;
    int f394;
    int f398;
    int f39c;
    char pad3a0[0x1c];
    int f3bc;
    char pad3c0[0x18];
    float f3d8;
    char pad3dc[6];
    unsigned char f3e2;
    char pad3e3;
    float f3e4;
    float f3e8;
    float f3ec;
    void func_00011BE0(int *i, float *f);
    void *func_00199B00(int a, Vec4_15980 *out);
    void func_00197B40(void *a, void *b);
    void func_0008AB90(void *a);
    void func_000149A0(int a, float b);
    int func_00015980(void);
};

int C_00015980::func_00015980() {
float distance; int index; float value; Vec4_15980 pos, delta, a, b, temp;
func_00011BE0(&index,&distance);
if(index != -1 && distance < D_002756C0) {
S_15980_Elem *e = *(S_15980_Elem **)((char*)(*(S_15980_Elem ** volatile *)((char*)D_002B9120+0x4e0))+index*4+0x1a8);
value=*(float*)&e->f1194;
if(e->f950->fbc) {
e=*(S_15980_Elem **)((char*)(*(S_15980_Elem ** volatile *)((char*)D_002B9120+0x4e0))+index*4+0x1a8);
pos=*(Vec4_15980*)((S_15980_Obj*)e->fa00->f4)->func_00199B00((int)&temp,0);
} else pos=e->v834;
delta.x=f3e4-pos.x; delta.y=f3e8-pos.y; delta.z=f3ec-pos.z; delta.w=1;
func_000111B0(&delta,&delta);
a.x=0; a.y=0; a.z=0; a.w=1; b.x=0; b.y=0; b.z=0; b.w=1;
e=*(S_15980_Elem **)((char*)(*(S_15980_Elem ** volatile *)((char*)D_002B9120+0x4e0))+index*4+0x1a8);
((S_15980_Obj*)e->f230)->func_00197B40(&a,&b);
float dot=a.y*delta.y+delta.x*a.x+a.z*delta.z;
if(distance<=D_002756C4) {
if(!D_002A8490->f2a4 || !D_002A8490->f2a4->f1c8) f3bc=3;
((S_15980_Obj*)f384)->func_0008AB90((void*)f39c);
} else if(value<=D_00275460 && dot<D_002755F8) {
if(!D_002A8490->f2a4 || !D_002A8490->f2a4->f1c8) f3bc=2;
((S_15980_Obj*)f384)->func_0008AB90((void*)f398);
}
if(f3e2!=2) {
if(distance<D_002756BC && !(*(S_15980_Elem **)((char*)(*(S_15980_Elem ** volatile *)((char*)D_002B9120+0x4e0))+index*4+0x1a8))->f950->fbc) {
func_000149A0(index,-13.0f);
if(!D_002A8490->f2a4 || !D_002A8490->f2a4->f1c8) f3bc=6;
((S_15980_Obj*)f384)->func_0008AB90((void*)f390);
}
f3d8-=D_002755E0; if(f3d8<D_00275544) f3d8=0;
} return 1;
}
if(f3e2!=2) { f3d8-=D_002755E0; if(f3d8<D_00275544) f3d8=0; }
return 0;
}
