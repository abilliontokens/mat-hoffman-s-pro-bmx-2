/* 4 functions from 0x00152E30 to 0x00153DF0, found by Ghidra. */
#include "common.h"

extern int D_00286CBC;
void func_001E891B(void *p);
int func_00011260(int a, int b);
struct Q4_00152E30 { int x, y, z, w; };
#include <xmmintrin.h>
#include "asm_helpers.h"
struct V153 { float x,y,z,w; };
static __forceinline void init153(V153 *v) {
    int *p=(int *)v; p[2]=0;p[1]=0;p[0]=0;p[3]=0x3f800000;
}
struct __declspec(align(16)) M153 { float m[16]; };
struct Camera153 {
    void func_00199B00(V153 *, int);
    void func_00197B40(V153 *, V153 *);
    void func_00198F50(V153 *, V153 *, int, int, int);
};
struct Link153 { char pad[4]; Camera153 *cam; void func_00132D20(); };
struct Owner153 { char pad[0x1a4]; Link153 *link; };
extern Q4_00152E30 D_002A78CC;
extern float D_002A7890, D_002A788C;
float func_00016D60(float);
float func_0014F510(float);
float func_0014F550(float);
float func_0001E960(float);
void func_0011F010(M153 *, float, float, float, float, float);
void func_000263B0(M153 *, M153 *, M153 *);
static __forceinline void cross153(V153 *d, V153 *a, V153 *b) {
    V153 * volatile ap=a; V153 * volatile bp=b; V153 * volatile dp=d;
    __m128 x=_mm_loadu_ps(&ap->x), y=_mm_loadu_ps(&bp->x);
    __m128 v=_mm_sub_ps(_mm_mul_ps(x,_mm_shuffle_ps(y,y,0xc9)),_mm_mul_ps(y,_mm_shuffle_ps(x,x,0xc9)));
    _mm_storeu_ps(&dp->x,_mm_shuffle_ps(v,v,0xc9));
}
static __forceinline void norm153(V153 *v) {
    V153 * volatile src=v; V153 * volatile dst=v;
    __m128 x=_mm_loadu_ps(&src->x), q=_mm_mul_ps(x,x);
    __m128 n=_mm_add_ss(_mm_movehl_ps(q,q),q);
    n=_mm_add_ss(n,_mm_shuffle_ps(q,q,0xe1));
    __m128 tiny=_mm_set_ss(1.17549435e-38f);
    n=_mm_add_ss(n,_mm_and_ps(_mm_cmplt_ss(n,tiny),tiny));
    __m128 r=_mm_rsqrt_ss(n);
    r=_mm_mul_ss(_mm_mul_ss(r,_mm_set_ss(0.5f)),_mm_sub_ss(_mm_set_ss(3),_mm_mul_ss(_mm_mul_ss(n,r),r)));
    _mm_storeu_ps(&dst->x,_mm_mul_ps(_mm_shuffle_ps(r,r,0),x));
}
static __forceinline void transform153(V153 *v,M153 *m) {
    __m128 p=_mm_loadu_ps(&v->x);
    _mm_storeh_pi((__m64 *)&v->z,p);
    v->w=1;
    p=_mm_loadh_pi(p,(const __m64 *)&v->z);
    __m128 a=_mm_mul_ps(_mm_load_ps(&m->m[0]),p);
    __m128 b=_mm_mul_ps(_mm_load_ps(&m->m[4]),p);
    __m128 c=_mm_mul_ps(_mm_load_ps(&m->m[8]),p);
    __m128 hi=_mm_unpackhi_ps(a,b);
    a=_mm_unpacklo_ps(a,b);
    __m128 h=_mm_movehl_ps(c,c);
    a=_mm_add_ps(a,hi);
    c=_mm_add_ps(c,h);
    hi=_mm_movehl_ps(a,a);
    a=_mm_movelh_ps(a,c);
    hi=_mm_shuffle_ps(hi,c,0x14);
    _mm_storeu_ps(&v->x,_mm_add_ps(a,hi));
    v->w=1;
}
extern Q4_00152E30 D_002A78BC, D_002A789C;
extern int D_002A78C0, D_002A78C4, D_002A78C8, D_002A78A0, D_002A78A4, D_002A78A8;
static __forceinline void set_id_00152E30(int *d)
{
    d[0] = D_002A789C.x; d[1] = D_002A789C.y; d[2] = D_002A789C.z; d[3] = D_002A789C.w;
}
struct C_00152E30 {
    int f0;
    C_00152E30 *func_00152E30(int a0);
    void func_00157600(int a0);
};

struct C_00136300 {
    void func_00136300(void);
};

struct C_00157660 {
    void func_00157660(void);
};

/* FPSPlayer */
struct C_001532E0 {
    void *vtbl;
    char pad4[0x34];
    C_00136300 *unk38;
    C_00136300 *unk3C;
    C_00136300 *unk40;
    C_00136300 *unk44;
    void func_001532E0(void);
};

struct S_Obj_153 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int a);
};

struct S_Slot_153 {
    char pad0[0x60];
    int unk60;
};

struct S_Player_153 {
    char pad0[0x284];
    S_Slot_153 *slots[16];
};

struct S_Global_153 {
    char pad0[0x2a4];
    S_Player_153 *unk2A4;
};

extern S_Global_153 *D_002A8490;

struct S_In_153 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual int v5(int a, int b, int c, int d); int func_00136170(int,int,int); };
struct S_G2_153 { char pad[8]; S_In_153 *unk8; };
struct C_00153350 {
    char pad[0x28];
    int unk28;
    int f2c;
    float f30;
    float f34;
    void *f38; void *f3c; void *f40; void *f44;
    float f48; float f4c; float f58;
    char pad5c[0xb8 - 0x5c];
    float fB8;
    char padBc[0xf8 - 0xbc];
    V153 fF8;
    float f108;
    float f10c;
    char pad110[0x588 - 0x110];
    int f588;
    char pad58c[0x5c8 - 0x58c];
    int arr5C8[32];
    void func_00153350(float dt);
    void func_00152BA0();
};

struct C_00153D30 {
    char pad0[0x24];
    int unk24;
    char pad28[0x584 - 0x28];
    int unk584;
    int unk588;
    int unk58C;
    int unk590;
    int unk594;
    char pad598[0x5A8 - 0x598];
    S_Obj_153 *arr5A8[4];
    S_Obj_153 *arr5B8[4];
    char pad5C8[0x6CC - 0x5C8];
    int unk6CC;
    void func_00153D30(int dt);
    void func_00153350(float dt);
};

C_00152E30 *C_00152E30::func_00152E30(int a0)
{
    int *u = (int *)this;
    int *p;
    int i;
    int j;
    int k;
    func_00157600(1);
    u[0] = (int)&D_00286CBC;
    p = &u[0x68 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x84 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x94 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xa4 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xb4 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xc8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xe8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xf8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x110 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x120 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x130 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x140 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x158 / 4];
    i = 11;
    do {
        p[1] = 0; p[0] = 0; p[-1] = 0; p[2] = 0x3f800000;
        p[5] = 0; p[4] = 0; p[3] = 0; p[6] = 0x3f800000;
        p[9] = 0; p[8] = 0; p[7] = 0; p[10] = 0x3f800000;
        p[13] = 0; p[12] = 0; p[11] = 0; p[14] = 0x3f800000;
        p += 24;
    } while (--i);
    p = &u[0x6dc / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    *(Q4_00152E30 *)&u[0xa4 / 4] = D_002A78BC;
    *(Q4_00152E30 *)&u[0xb4 / 4] = D_002A789C;
    u[0x24 / 4] = 0; u[0x28 / 4] = 0; u[0x2c / 4] = 0;
    u[0x584 / 4] = 0x3e8;
    u[0x30 / 4] = 0;
    u[0x34 / 4] = 0x40b00000;
    u[0x5c / 4] = 0;
    u[0x38 / 4] = 0; u[0x3c / 4] = 0; u[0x40 / 4] = 0; u[0x44 / 4] = 0;
    u[0x48 / 4] = 0; u[0x4c / 4] = 0; u[0x50 / 4] = 0; u[0x60 / 4] = 0;
    u[0x7c / 4] = 0; u[0x78 / 4] = 0; u[0x80 / 4] = 0; u[0x64 / 4] = 0;
    *(Q4_00152E30 *)&u[0x68 / 4] = D_002A789C;
    *(Q4_00152E30 *)&u[0x120 / 4] = D_002A789C;
    *(Q4_00152E30 *)&u[0xe8 / 4] = D_002A789C;
    *(Q4_00152E30 *)&u[0xf8 / 4] = D_002A789C;
    u[0x108 / 4] = 0; u[0x10c / 4] = 0; u[0x54 / 4] = 0;
    u[0x58 / 4] = 0x3dcccccd;
    u[0x57c / 4] = 0; u[0x580 / 4] = 0; u[0x574 / 4] = 0; u[0x578 / 4] = 0;
    u[0x590 / 4] = 0; u[0x594 / 4] = 0;
    for (j = 0; j < 11; j++) {
        u[0x150 / 4 + j * 24] = 0;
        *(Q4_00152E30 *)&u[0x154 / 4 + j * 24] = D_002A789C;
        *(Q4_00152E30 *)&u[0x164 / 4 + j * 24] = D_002A789C;
        *(Q4_00152E30 *)&u[0x174 / 4 + j * 24] = D_002A789C;
        *(Q4_00152E30 *)&u[0x184 / 4 + j * 24] = D_002A789C;
        u[0x194 / 4 + j * 24] = 0;
        u[0x198 / 4 + j * 24] = 0;
        u[0x19c / 4 + j * 24] = 0;
        u[0x1a4 / 4 + j * 24] = 0;
        u[0x1a8 / 4 + j * 24] = 0;
        u[0x1ac / 4 + j * 24] = 0;
    }
    u[0xe0 / 4] = 0; u[0xe4 / 4] = 0; u[0x570 / 4] = 0;
    u[0x598 / 4] = 0; u[0x59c / 4] = 0; u[0x5a0 / 4] = 0; u[0x5a4 / 4] = 0;
    u[0x5c0 / 4] = 0;
    for (k = 0; k < 4; k++) {
        u[0x5a8 / 4 + k] = 0;
    }
    u[0x5b8 / 4] = 0; u[0x5bc / 4] = 0; u[0x588 / 4] = 0; u[0x58c / 4] = 0;
    u[0x6d4 / 4] = 0; u[0x6cc / 4] = 0; u[0x6d0 / 4] = 0; u[0x6d8 / 4] = 0;
    u[0x6c8 / 4] = -1;
    *(Q4_00152E30 *)&u[0x6dc / 4] = D_002A789C;
    u[0x6ec / 4] = 0; u[0x6f0 / 4] = 0; u[0x5c4 / 4] = 0;
    return this;
}

void C_001532E0::func_001532E0(void)
{
    C_00136300 *p = unk38;
    vtbl = (void *)&D_00286CBC;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    p = unk3C;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    p = unk40;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    p = unk44;
    if (p != 0) {
        p->func_00136300();
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
}

void C_00153350::func_00153350(float dt)
{
    C_00153350 * volatile t = this;
    float * volatile fv = (float *)this;
    int * volatile uv = (int *)this;
    int i;
    int *p;
    V153 pos, cross, up, forward, up2, cross2, forward2;
    M153 m1,m2,m3;
    p = t->arr5C8;
    for (i = 0; i < 32; i++) {
        *p++ = (int)(float)((S_G2_153 *)D_002A8490)->unk8->v5(i,2,63,t->unk28);
    }
    if(!uv[0x2c/4]) *(Q4_00152E30 *)&pos=D_002A789C;
    else ((Owner153 *)uv[0x2c/4])->link->cam->func_00199B00(&pos,0);
    init153(&cross);
    init153(&up);
    init153(&forward);
    if(!uv[0x2c/4]) {
        *(Q4_00152E30 *)&forward=D_002A78CC;
        *(Q4_00152E30 *)&up=D_002A78BC;
    } else ((Owner153 *)uv[0x2c/4])->link->cam->func_00197B40(&forward,&up);
    forward.y=0;
    AsmVec3Normalize(&forward.x,&forward.x);
    AsmVec3Cross(&cross.x,&forward.x,&up.x);
    {
    float a=*(float *)(uv[0x38/4]+0x24);
    float b=-*(float *)(uv[0x3c/4]+0x24);
    float c=-*(float *)(uv[0x40/4]+0x24);
    float d=*(float *)(uv[0x44/4]+0x24);
    if(t->arr5C8[((S_G2_153 *)D_002A8490)->unk8->func_00136170(27,2,0)] && !uv[0x588/4]) t->func_00152BA0();
    if(!uv[0x588/4]) {
        float h=5.5f-func_0014F510(func_00016D60(fv[0x10c/4]*12.566371f))*0.5f;
        if(fv[0x34/4]-h<=-0.2f) h=fv[0x34/4]+0.2f;
        fv[0x34/4]=h;
    } else {
        if(fv[0x34/4]-1.0f<0.2f) fv[0x34/4]=1;
        else fv[0x34/4]-=dt*7.0f;
    }
    *(Q4_00152E30 *)&fv[0xf8/4]=D_002A789C;
    if(c>0.25f&&!uv[0x588/4]) {
        V153 v; v.x=forward.x*c; v.y=c*forward.y; v.z=forward.z*c;
        v.x*=100;v.y*=100;v.z*=100;
        fv[0xf8/4]+=v.x;fv[0xfc/4]+=v.y;fv[0x100/4]+=v.z;
    }
    if(c<-0.25f&&!uv[0x588/4]) {
        V153 v; v.x=forward.x*c; v.y=c*forward.y; v.z=forward.z*c;
        v.x*=100;v.y*=100;v.z*=100;
        fv[0xf8/4]+=v.x;fv[0xfc/4]+=v.y;fv[0x100/4]+=v.z;
    }
    if((d>0.35f&&!uv[0x588/4])||(d<-0.35&&!uv[0x588/4])) {
        V153 v; v.x=-cross.x;v.y=-cross.y;v.z=-cross.z;
        v.x*=d;v.y*=d;v.z*=d;v.x*=100;v.y*=100;v.z*=100;
        fv[0xf8/4]+=v.x;fv[0xfc/4]+=v.y;fv[0x100/4]+=v.z;
    }
    if(fv[0x58/4]>0.25f) {
        if((t->arr5C8[((S_G2_153 *)D_002A8490)->unk8->func_00136170(25,2,0)]||
            t->arr5C8[((S_G2_153 *)D_002A8490)->unk8->func_00136170(26,2,0)]) &&
            pos.y-fv[0xb8/4]-fv[0x34/4]<3.0f&&!uv[0x588/4]) fv[0x58/4]=0;
    }
    if(fv[0x58/4]<0.1) fv[0xfc/4]=4500;
    if(b>0.35f) {
        if(fv[0x48/4]>-0.785398185f&&!uv[0x588/4]) fv[0x48/4]-=D_002A7890*b*dt*3.14159274f;
    } else if(b<-0.35f&&!uv[0x588/4]&&fv[0x48/4]<1.39626324f)
        fv[0x48/4]-=D_002A7890*b*dt*3.14159274f;
    if(a>0.25f&&!uv[0x588/4]) {
        fv[0x4c/4]-=D_002A788C*a*dt*3.14159274f;
        if(fv[0x4c/4]<-3.14159274f) fv[0x4c/4]+=6.28318548f;
    } else if(a<-0.25f&&!uv[0x588/4]) {
        fv[0x4c/4]-=D_002A788C*a*dt*3.14159274f;
        if(fv[0x4c/4]>3.14159274f) fv[0x4c/4]-=6.28318548f;
    }
    }
    *(Q4_00152E30 *)&forward2=D_002A78CC;
    *(Q4_00152E30 *)&up2=D_002A78BC;
    init153(&cross2);
    AsmVec3Cross(&cross2.x,&forward2.x,&up2.x);
    {
    float angle=fv[0x48/4];
    float z=cross2.z,y=cross2.y,x=cross2.x;
    float sn=func_0014F510(angle),cs=func_0014F550(angle);
    float r=func_0001E960(z*z+y*y+x*x);
    func_0011F010(&m1,x*r,y*r,z*r,cs,sn);
    angle=fv[0x4c/4];
    sn=func_0014F510(angle);cs=func_0014F550(angle);
    r=func_0001E960(1);
    func_0011F010(&m2,0*r,r,0*r,cs,sn);
    func_000263B0(&m3,&m1,&m2);
    AsmTransformPoint(&forward2.x,&forward2.x,&m3.m[0]);
    AsmTransformPoint(&up2.x,&up2.x,&m3.m[0]);
    ((Owner153 *)uv[0x2c/4])->link->cam->func_00198F50(&forward2,&up2,0,1,0);
    ((Owner153 *)uv[0x2c/4])->link->func_00132D20();
    }
}

void C_00153D30::func_00153D30(int dt)
{
    int idx;
    if (unk588 == 0) {
        unk584 -= dt;
        D_002A8490->unk2A4->slots[unk24]->unk60 = 200;
        if (unk584 <= 0) {
            unk584 = 0;
            unk588 = 1;
            unk58C = 0;
            unk590 = 0;
            unk594 = 0;
            unk6CC = unk6CC + 1;
            idx = func_00011260(0, 1);
            S_Obj_153 *o = arr5B8[idx];
            o->v5(0);
            return;
        }
        idx = func_00011260(0, 3);
        S_Obj_153 *o = arr5A8[idx];
        o->v5(0);
    }
}

