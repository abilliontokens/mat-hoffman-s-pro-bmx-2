/* 7 functions from 0x00107380 to 0x00108370, found by Ghidra. */
#include "common.h"
extern float D_00282A78, D_002755E8;
struct RawVec_107380 { float x,y,z,w; };
struct Vec_107AE0 {
 float x,y,z,w;
 Vec_107AE0() { x=y=z=0; w=1; }
 Vec_107AE0(float a,float b,float c) { w=1;x=a;y=b;z=c; }
};
#include <xmmintrin.h>
static __forceinline Vec_107AE0 scale_107AE0(const volatile Vec_107AE0 &v,const float &s) {
 Vec_107AE0 r;
 r.x=v.x*s;r.y=v.y*s;r.z=v.z*s;return r;
}
extern Vec_107AE0 D_002A3A4C, D_002A3A5C, D_002A3A6C;
extern float D_002A3A50, D_002A3A54, D_002A3A58;
extern float D_002A3A60, D_002A3A64, D_002A3A68;
extern float D_002A3A70, D_002A3A74, D_002A3A78;
extern float D_00275544,D_002798A4,D_002755FC,D_002798A0,D_0027989C,D_00275AEC,D_00276524,D_00279054,D_00279898,D_00279894,D_00279890,D_0027E144,D_00282A74,D_0027A094;
void func_00104A90(Vec_107AE0*,Vec_107AE0*);
static __forceinline void cross_107380(Vec_107AE0 *d,Vec_107AE0 *a,Vec_107AE0 *b) {
 __m128 x=_mm_loadu_ps(&a->x),y=_mm_loadu_ps(&b->x);
 __m128 u=_mm_shuffle_ps(x,x,0xc9),v=_mm_shuffle_ps(y,y,0xc9);
 x=_mm_sub_ps(_mm_mul_ps(x,v),_mm_mul_ps(y,u));
 _mm_storeu_ps(&d->x,_mm_shuffle_ps(x,x,0xc9));
}
struct Mat_107AE0 { float m[16]; };
static __forceinline void crossG_107380(Vec_107AE0 *d, Vec_107AE0 *a, const float &bx, const float &by, const float &bz)
{
    d->x = a->y * bz - a->z * by;
    d->y = a->z * bx - a->x * bz;
    d->z = a->x * by - a->y * bx;
    d->w = 1.0f;
}
static __forceinline void identity_107AE0(Mat_107AE0 *a) {
 __m128 *p=(__m128*)a;
 __m128 z=_mm_setzero_ps();p[0]=z;p[1]=z;p[2]=z;p[3]=z;
 a->m[0]=1;a->m[5]=1;a->m[10]=1;a->m[15]=1;
}
struct Obj_107AE0 {
 char pad[8];
 Obj_107AE0 *f8;
 void func_00199A70(int,Vec_107AE0*);
 void func_001994C0(int,Vec_107AE0*,Vec_107AE0*);
 void func_00199110(int,Vec_107AE0*,Vec_107AE0*,int,int,int);
 void func_001A0C90(Vec_107AE0);
 void func_00197B40(Vec_107AE0*,Vec_107AE0*);
 void func_00197E70(Vec_107AE0*);
 void func_00199CF0(Vec_107AE0,float);
 void func_001824E0(Vec_107AE0*,float,float,float);
 float func_000260F0();
};
struct Model_107AE0 {
 virtual void vf0();
 virtual void vf1();
 virtual void vf2();
 virtual void vf3();
 virtual void vf4();
 virtual void vf5();
 virtual void vf6();
 virtual void vf7();
 virtual void vf8();
 virtual void vf9();
 virtual void vf10();
 virtual void vf11();
 virtual void vf12();
 virtual void vf13();
 virtual void vf14();
 virtual void vf15();
 virtual void vf16();
 virtual void vf17();
 virtual void vf18();
 virtual void vf19();
 virtual void vf20();
 virtual void vf21();
 virtual void vf22();
 virtual void vf23();
 virtual void vf24();
 virtual void vf25();
 virtual void vf26();
 virtual void vf27();
 virtual void vf28();
 virtual void vf29();
 virtual void vf30();
 virtual void vf31(Mat_107AE0*);
 char p4[0x50];
 char *f54;
 char p58[0x4c];
 unsigned char fa4[4];
 void func_00180E00(int,Vec_107AE0*,int,int);
 float func_00133F10(int);
};
struct C_107AE0 {
 char p0[0x1e8]; char *f1e8;
 char p1ec[0x11c0-0x1ec]; Model_107AE0 *f11c0;
 char p11c4[0x2054-0x11c4]; Obj_107AE0 *f2054,*f2058;
 char p205c[0x207c-0x205c]; Obj_107AE0 *f207c,*f2080;
 char p2084[0x2094-0x2084]; int f2094,f2098;
 void func_00107AE0();
};

struct C_107380 {
    char p0[0xa00];
    Obj_107AE0 *fa00;
    char pa04[4];
    Obj_107AE0 *fa08, *fa0c, *fa10, *fa14;
    void func_00107380();
};

struct V_00107A40 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
};

struct S_00107A40_Mgr {
    char pad0[0x190];
    int arr190[16];
    char pad1d0[0x2d4 - 0x1d0];
    int f2d4;
};

struct S_00108270_Item {
    int func_000831C0(void);
};

struct S_00108270_Mgr2A4 {
    char pad0[0x170];
    S_00108270_Item *arr170[16];
};

struct V_00107FB0_Input {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual int vf4(int button, int a, int b, int pad);
};

struct S_00107FB0_Holder {
    char pad0[8];
    V_00107FB0_Input *f8;
};

struct S_00107FB0_Axis {
    char pad0[0x24];
    float f24;
};

extern float D_00279B54;
extern float D_00282A98;
extern float D_00282A94;
extern float D_00282A90;
extern float D_00282A8C;
extern float D_00282A88;
extern float D_00282A84;
extern float D_00282A80;
extern float D_00282A7C;
float func_0014FBA0(float a, float b);
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline void length_00107FB0(float *d, float x, float y)
{
    float square = y * y + x * x;
    _mm_store_ss(d, _mm_sqrt_ss(_mm_load_ss(&square)));
}

struct C_00107FB0 {
    char pad0[0x970];
    int f970;
    char pad974[0x9e8 - 0x974];
    S_00107FB0_Axis *f9e8;
    S_00107FB0_Axis *f9ec;
    int func_00107FB0(void);
};

struct S_00107A40_Global {
    char pad0[8];
    V_00107FB0_Input *f8;
    char pad0c[0x2a4 - 0xc];
    S_00108270_Mgr2A4 *f2a4;
    char pad2a8[0x2e0 - 0x2a8];
    S_00107A40_Mgr *f2e0;
};
extern S_00107A40_Global *D_002A8490;

/* binding tables: 16 slots of 8 entries; (key1, key2) -> value */
struct S_00108270_Tables {
    char pad0[0x2df0];
    int a2df0[128];
    int a2ff0[128];
    int a31f0[128];
    int a33f0[128];
    int a35f0[128];
    int a37f0[128];
};

struct S_00108270_Owner {
    char pad0[0x52c];
    S_00108270_Tables *f52c;
};

struct C_00108270 {
    char pad0[0x24];
    S_00108270_Owner *f24;
    char pad28[0xa28 - 0x28];
    int fa28;
    int fa2c;
    int func_00108270(int a, int b);
};

struct C_00107A40 {
    char pad0[0xa08];
    V_00107A40 *fa08;
    V_00107A40 *fa0c;
    V_00107A40 *fa10;
    V_00107A40 *fa14;
    char pada18[0x1e58 - 0xa18];
    int f1e58;
    void func_00107A40(int a0);
    void func_00107AB0(void);
};

struct C_00108360 {
    char pad0[0x1FC0];
    int unk1FC0;
    void func_00108360(void);
};


extern float D_002755E8, D_002755FC, D_0027989C, D_002798A0, D_00276524, D_00275AEC, D_00279054, D_00279894, D_00279898, D_00279890, D_0027E144, D_00282A74, D_0027A094, D_00275544;
extern float func_000260F0(void);
void C_107380::func_00107380()
{
 Vec_107AE0 up,unused;
 (*(Obj_107AE0**)((char*)fa00+4))->func_00197B40(&unused,&up);
 unused.x=D_002A3A5C.x;unused.y=D_002A3A60;unused.z=D_002A3A64;unused.w=D_002A3A68;
 char *mgr=*(char**)((char*)D_002A8490+0x2a4);
 char *item=*(char**)(mgr+0x44+4* *(int*)((char*)this+0xa2c));
 float *pos=(float*)(*(char**)(item+0x30)+0x170);
 Vec_107AE0 origin,delta,forward,right,temp;
 fa08->func_00197E70(&origin);
 temp.x=pos[0]-origin.x;temp.y=pos[1]-origin.y;temp.z=pos[2]-origin.z;
 delta=temp;
 float square=forward.y*forward.y+forward.z*forward.z+forward.x*forward.x;
 float len=AsmSqrtF(square);
 temp.x=-delta.x;temp.y=-delta.y;temp.z=-delta.z;
 func_00104A90(&delta,&temp);func_00104A90(&up,&up);func_00104A90(&forward,&delta);
 AsmVec3Cross((float*)&right,(float*)&delta,(float*)&D_002A3A5C);func_00104A90(&right,&right);
 AsmVec3Cross((float*)&up,(float*)&right,(float*)&forward);func_00104A90(&up,&up);
 fa08->func_00199110(0,&forward,&up,0,1,0);fa0c->func_00199110(0,&forward,&up,0,1,0);fa10->func_00199110(0,&forward,&up,0,1,0);fa14->func_00199110(0,&forward,&up,0,1,0);
 if(*(int*)((char*)this+0x1e58)) {fa08->func_00199CF0(D_002A3A4C,-0.34906581f);fa14->func_00199CF0(D_002A3A4C,-0.34906581f);} else {fa0c->func_00199CF0(D_002A3A5C,1.57079613f);fa0c->func_00199CF0(D_002A3A6C,-0.34906581f);fa10->func_00199CF0(D_002A3A5C,1.57079613f);fa10->func_00199CF0(D_002A3A6C,-0.34906581f);fa14->func_00199CF0(D_002A3A5C,1.57079613f);fa14->func_00199CF0(D_002A3A6C,-0.34906581f);}
 float value;
 switch(*(int*)((char*)this+0x5e8)) {case 1:value=(*(Obj_107AE0**)((char*)this+0x5ec))->func_000260F0();break;case 3:value=(*(Obj_107AE0**)((char*)this+0x5f0))->func_000260F0();break;case 5:value=(*(Obj_107AE0**)((char*)this+0x5f4))->func_000260F0();break;default:value=D_00275544;}
 int bits=*(int*)&value & 0x7fffffff;
 float a=*(float*)&bits;
 int r,g,b;
 if(a<D_002755E8){r=(int)(a*D_002798A4+D_002755FC);g=(int)(D_0027989C-a*D_002798A0);b=(int)(D_00276524-a*D_00275AEC);}else {a-=D_002755E8;r=(int)(D_0027989C-D_00279054*a);g=(int)(D_00279894-D_00279898*a);b=(int)(a*D_00279890+D_002755FC);}
 fa14->func_00199CF0(D_002A3A5C,value*D_0027E144*D_00282A74);
 fa14->func_001824E0(&temp,r*D_0027A094,g*D_0027A094,b*D_0027A094);
}

void C_00107A40::func_00107A40(int a0) {
    if (D_002A8490->f2e0->f2d4 == 0) {
        f1e58 = a0;
        if (a0 != 0) {
            fa08->vf6();
        } else {
            fa0c->vf6();
            fa10->vf6();
        }
        fa14->vf6();
    }
}

void C_00107A40::func_00107AB0(void) {
    fa08->vf4();
    fa0c->vf4();
    fa10->vf4();
    fa14->vf4();
}

void C_107AE0::func_00107AE0() {
 Vec_107AE0 pos,dir;
 __declspec(align(16)) Mat_107AE0 identity;
 Mat_107AE0 * volatile pm=&identity;
 identity_107AE0(pm);
 Mat_107AE0 mat=*pm;
 Vec_107AE0 line[2];
 C_107AE0 * volatile self=this;
 line[1]=scale_107AE0(*(Vec_107AE0*)(self->f1e8+0x1a0),D_00282A78);
 line[0]=scale_107AE0(*(Vec_107AE0*)(self->f1e8+0x1a0),2.0f);
 self->f11c0->func_00180E00(1,line,0,0);
 if(self->f2094) {
 self->f207c->func_00199A70(0,&pos);
 mat.m[3]=pos.x;mat.m[7]=pos.y;mat.m[11]=pos.z;
 self->f11c0->vf31(&mat);
 self->f11c0->func_00133F10(0);
 if(self->f11c0->fa4[3] & 0x20) {
 Vec_107AE0 p=*(Vec_107AE0*)(self->f11c0->f54+0x30);
 Vec_107AE0 *direction=(Vec_107AE0*)(self->f11c0->f54+0x20);
 dir=*direction;
 Vec_107AE0 offset=scale_107AE0(*direction,D_002755E8);
 p.x+=offset.x;p.y+=offset.y;p.z+=offset.z;
 self->f2054->func_001A0C90(p);
 Vec_107AE0 a,b;
 self->f2054->f8->func_001994C0(0,&a,&b);
 self->f2054->f8->func_00199110(0,&a,&dir,1,0,0);
 }
 } else if(self->f2098) {
 self->f2080->func_00199A70(0,&pos);
 mat.m[3]=pos.x;mat.m[7]=pos.y;mat.m[11]=pos.z;
 self->f11c0->vf31(&mat);
 self->f11c0->func_00133F10(0);
 if(self->f11c0->fa4[3] & 0x20) {
 Vec_107AE0 p=*(Vec_107AE0*)(self->f11c0->f54+0x30);
 Vec_107AE0 *direction=(Vec_107AE0*)(self->f11c0->f54+0x20);
 dir=*direction;
 Vec_107AE0 offset=scale_107AE0(*direction,D_002755E8);
 p.x+=offset.x;p.y+=offset.y;p.z+=offset.z;
 self->f2058->func_001A0C90(p);
 Vec_107AE0 a,b;
 self->f2058->f8->func_001994C0(0,&a,&b);
 self->f2058->f8->func_00199110(0,&a,&dir,1,0,0);
 }
 }
}

int C_00107FB0::func_00107FB0(void)
{
    int b0, b1, b2, b3;
    int r;
    float x = f9e8->f24;
    float y = f9ec->f24;
    float sq = y * y + x * x;
    float len = AsmSqrtF(sq);
    float a = func_0014FBA0(-y, x);

    if (len > D_00279B54) {
        r = -1;
        if (a < D_00282A98 && a > D_00282A94) r = 5;
        else if (a < D_00282A90 && a > D_00282A98) r = 0;
        else if (a < D_00282A8C && a > D_00282A90) r = 4;
        else if (a < D_00282A88 && a > D_00282A8C) r = 3;
        else if (a < D_00282A84 || a > D_00282A88) r = 7;
        else if (a < D_00282A80 && a > D_00282A84) r = 2;
        else if (a < D_00282A7C && a > D_00282A80) r = 6;
        else if (a < D_00282A94 && a > D_00282A7C) r = 1;
    } else {
        b0 = D_002A8490->f8->vf4(0, 2, 0x3f, f970);
        b1 = D_002A8490->f8->vf4(1, 2, 0x3f, f970);
        b2 = D_002A8490->f8->vf4(2, 2, 0x3f, f970);
        b3 = D_002A8490->f8->vf4(3, 2, 0x3f, f970);
        if (b2) {
            if (b0) r = 3;
            else if (b1) r = 0;
            else r = 4;
        } else if (b3) {
            if (b0) r = 2;
            else if (b1) r = 1;
            else r = 6;
        } else if (b0) r = 7;
        else if (b1) r = 5;
        else r = -1;
    }
    return r;
}

int C_00108270::func_00108270(int a, int b)
{
    int idx = D_002A8490->f2e0->arr190[fa28];
    S_00108270_Item *item = D_002A8490->f2a4->arr170[fa2c];
    int i;

    if (item != 0 && item->func_000831C0() != 0) {
        for (i = 0; i < 8; i++) {
            if (f24->f52c->a33f0[idx * 8 + i] == a && f24->f52c->a37f0[idx * 8 + i] == b) {
                return f24->f52c->a35f0[idx * 8 + i];
            }
        }
    }
    for (i = 0; i < 8; i++) {
        if (f24->f52c->a2df0[idx * 8 + i] == a && f24->f52c->a31f0[idx * 8 + i] == b) {
            return f24->f52c->a2ff0[idx * 8 + i];
        }
    }
    return -1;
}

void C_00108360::func_00108360(void) {
    unk1FC0 = 1;
}

