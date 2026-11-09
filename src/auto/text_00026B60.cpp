/* 3 functions from 0x00026B60 to 0x00027860, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

struct V4_000273F0 {
    float x;
    float y;
    float z;
    float w;
    V4_000273F0() { x = y = z = 0.0f; w = 1.0f; }
    __forceinline V4_000273F0 &operator=(const V4_000273F0 &v) {
        ((volatile int *)this)[0] = ((const volatile int *)&v)[0];
        ((volatile int *)this)[1] = ((const volatile int *)&v)[1];
        ((volatile int *)this)[2] = ((const volatile int *)&v)[2];
        ((volatile int *)this)[3] = ((const volatile int *)&v)[3];
        return *this;
    }
};

struct C_000273F0_Node {
    void func_00197E70(V4_000273F0 *out);
};

struct C_000273F0_Cam {
    C_000273F0_Node *func_00198330(const char *name);
    void func_00199110(int a, V4_000273F0 *pos, V4_000273F0 *dir, int b, int c, int d);
    void func_00199790(int a, V4_000273F0 *pos);
    void func_00197AA0(void);
};

struct C_000273F0_Axis {
    void func_000269B0(float a, float b, float c);
};

struct C_000273F0_Link {
    void func_000BA430(V4_000273F0 *a, V4_000273F0 *b, int c, int d);
};

struct C_000273F0_Body {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45();
};

struct C_000273F0_Wheel {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(int a);
    char pad4[0x60];
    int f64;
    void func_000B6A70(int a);
};

struct C_000273F0 {
    char pad0[0x2C];
    V4_000273F0 f2C;
    V4_000273F0 f3C;
    char pad4C[0x13C - 0x4C];
    V4_000273F0 f13C;
    V4_000273F0 f14C;
    char pad15C[0x1E0 - 0x15C];
    C_000273F0_Body *f1E0;
    char pad1E4[4];
    C_000273F0_Wheel *f1E8;
    char pad1EC[0x220 - 0x1EC];
    C_000273F0_Axis *f220;
    C_000273F0_Axis *f224;
    C_000273F0_Axis *f228;
    C_000273F0_Link *f22C;
    C_000273F0_Cam *f230;
    char pad234[0x67C - 0x234];
    int f67C;
    int func_000273F0(V4_000273F0 *a1, V4_000273F0 *a2, V4_000273F0 *a3);
};

extern char D_00276690[];
extern V4_000273F0 D_002A10F0;
extern float D_002A10F4, D_002A10F8, D_002A10FC;
extern V4_000273F0 D_002A1110;
void func_00026340(V4_000273F0 *out, V4_000273F0 *in);

#pragma pack(push, 4)
struct CrossPacked_000273F0 { __m128 v; };
#pragma pack(pop)
static __forceinline void Cross_000273F0(V4_000273F0 * volatile out, V4_000273F0 * volatile a, V4_000273F0 * volatile b)
{
 CrossPacked_000273F0 x,y,sx,sy;
 x.v=_mm_loadu_ps(&a->x);y.v=_mm_loadu_ps(&b->x);
 sx.v=_mm_shuffle_ps(x.v,x.v,0xc9);sy.v=_mm_shuffle_ps(y.v,y.v,0xc9);
 y.v=_mm_mul_ps(y.v,sx.v);x.v=_mm_mul_ps(x.v,sy.v);
 x.v=_mm_sub_ps(x.v,y.v);x.v=_mm_shuffle_ps(x.v,x.v,0xc9);
 _mm_storeu_ps(&out->x,x.v);
}
struct PV4_26 { float x, y, z, w; };
struct ObjE0_26 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(void *); virtual void v28(void *);
    char pad4[0x2C - 4]; V4_000273F0 f2C; V4_000273F0 f3C;
    char pad4C[0x204 - 0x4C]; int f204;
    char pad208[0x218 - 0x208]; int f218;
    char pad21C[0x238 - 0x21C]; V4_000273F0 f238;
    char pad248[0x268 - 0x248]; V4_000273F0 f268;
    char pad278[0x300 - 0x278]; int f300;
    ObjE0_26 *func_00175110(int); void func_00174550(int, int, int);
};
struct ObjE4_26 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(void *); virtual void v28(void *);
    ObjE4_26 *func_00194130(int);
};
struct ObjF0_26 {
    char pad0[0x24]; int f24; int f28;
    char pad2C[0x3C - 0x2C]; int f3C; int f40; int f44;
    char pad48[4]; int f4C;
    char pad50[0x60 - 0x50]; int f60; char pad64[4]; int f68;
    char pad6C[0xB4 - 0x6C]; int fB4; int fB8;
    char padBC[0xC8 - 0xBC]; int fC8; int fCC; float fD0; int fD4;
    ObjF0_26 *func_001A8E30(int); void func_001A9070(int); void func_0001EDC0(void *);
};
struct ObjF4_26 {
    char pad0[0x58]; int f58; char pad5C[8]; void *f64; void *f68;
    ObjF4_26 *func_001A8630(int); void func_001A8BC0(void *, int, int, V4_000273F0, int, int); void func_001A8BC0(void *, int, int, int, V4_000273F0, int);
};
struct ObjFC_26 {
    char pad0[0x60]; void *f60; char pad64[4]; int f68;
    char pad6C[0xA7 - 0x6C]; unsigned char fA7;
    ObjFC_26 *func_0017F050(int); void func_0017F0A0(int); void func_001334E0(int);
    void func_00086C20(int); void func_00133660(int);
};
struct ObjF8_26 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    char pad4[0x60 - 4]; void *f60; void *f64; int f68;
    char pad6C[0x9C - 0x6C]; void *f9C;
    ObjF8_26 *func_0014AB30(int); void func_00129920(int); void func_0014C1C0(int, int, int);
};
struct Obj204_26 {
    char pad0[0x68]; int f68;
    Obj204_26 *func_001A4A50(int); void func_00129920(int);
};
struct Obj208_26 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(void *); virtual void v28(void *);
    char pad4[0x30 - 4]; int f30;
    Obj208_26 *func_0001EBB0(int);
};
struct ObjE8_26 {
    char pad0[0x94]; void *f94; void *f98;
    ObjE8_26 *func_000B6180(int); void func_000B6640(int, void *);
};
struct Axis14_26 { float f0, f4, f8, fC, f10;
    Axis14_26 *Init(float x) { f0 = x; f4 = 0.0f; fC = 3.402823466e+38f; f10 = -3.402823466e+38f; f8 = 1.0f; return this; } };
struct Obj20C_26 {
    char pad0[0x24]; int f24;
    char pad28[0x94 - 0x28]; void *f94; void *f98;
    Obj20C_26 *func_000B8B60(int); void func_000B8C80(void *);
};
struct Obj1EC_26 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
    Obj1EC_26 *func_00030C00(int); void func_00030CD0(void *);
};
struct Obj40_26 { Obj40_26 *func_00025E10(); };
struct Obj210_26 { Obj210_26 *func_0005E600(int); Obj210_26 *func_0005DA30(void *); };
struct Obj214_26 { Obj214_26 *func_000B50B0(int); void func_000B6050(void *); };
struct Obj218_26 { Obj218_26 *func_000B5990(int); void func_000B6050(void *); };
struct Obj21C_26 { Obj21C_26 *func_0011A440(int); void func_0011AB90(void *); };
void func_001A7FE0();
extern int D_002BA148;
extern int D_002BA15C;
extern int D_002BA154;
extern int D_002A4334;
extern char D_00276688;
void *func_001E8A44(unsigned int);
int func_00132E20_26(const char *);
struct Glob4334_26 { int func_00132E20(const char *); void func_001577A0(void *, int); };
struct C_00026B60 {
    char pad0[0x2C]; V4_000273F0 f2C; V4_000273F0 f3C;
    char pad4C[0x1E0 - 0x4C];
    ObjE0_26 *f1E0; ObjE4_26 *f1E4; ObjE8_26 *f1E8; Obj1EC_26 *f1EC;
    ObjF0_26 *f1F0; ObjF4_26 *f1F4; ObjF8_26 *f1F8; ObjFC_26 *f1FC; ObjFC_26 *f200;
    Obj204_26 *f204; Obj208_26 *f208; Obj20C_26 *f20C;
    Obj210_26 *f210; Obj214_26 *f214; Obj218_26 *f218; Obj21C_26 *f21C;
    Axis14_26 *f220; Axis14_26 *f224; Axis14_26 *f228;
    int f22C; int f230; int f234; int f238;
    char pad23C[0x33C - 0x23C]; char f33C[0x100];
    char pad43C[0x5EC - 0x43C]; Obj40_26 *f5EC; Obj40_26 *f5F0; Obj40_26 *f5F4;
    char pad5F8[0x758 - 0x5F8]; int f758;
    char pad75C[0x768 - 0x75C]; int f768;
    C_00026B60 *func_00026B60(char *name, V4_000273F0 a1, V4_000273F0 a2, V4_000273F0 a3, V4_000273F0 a4, int a5, int a6);
    void func_001577A0(void *, int);
};
struct C_00027850 {
    char pad0[0x5CC];
    int unk5CC;
    void func_00027850(int a0);
};


C_00026B60 *C_00026B60::func_00026B60(char *name, V4_000273F0 a1, V4_000273F0 a2, V4_000273F0 a3, V4_000273F0 a4, int a5, int a6)
{
    void *mem;
    int edi;
    {
        char *s = name;
        char *d = f33C;
        while ((*d++ = *s++) != 0) ;
    }
    mem = func_001E8A44(0x310);
    f1E0 = mem ? (ObjE0_26 *)((ObjE0_26 *)mem)->func_00175110(1) : 0;
    f1E0->v10();
    f1E0->func_00174550(0, 1, 0);
    f1E0->f204 = D_002BA148;
    func_001577A0(f1E0, -1);
    *(PV4_26 *)&f1E0->f2C = *(PV4_26 *)&a3;
    *(PV4_26 *)&f1E0->f3C = *(PV4_26 *)&a4;
    *(PV4_26 *)&f1E0->f238 = *(PV4_26 *)&f1E0->f2C;
    *(PV4_26 *)&f1E0->f268 = *(PV4_26 *)&f1E0->f3C;
    f1E0->f218 = 0x4a63d241;
    f1E0->f300 = 1;
    *(PV4_26 *)&f2C = *(PV4_26 *)&a1;
    *(PV4_26 *)&f3C = *(PV4_26 *)&a2;
    mem = func_001E8A44(0x44);
    f1E4 = mem ? (ObjE4_26 *)((ObjE4_26 *)mem)->func_00194130(1) : 0;
    f1E4->v27((void *)1);
    func_001577A0(f1E4, -1);
    f1E4->v28(f1E0);
    f230 = a6;
    f1E0->v27((void *)a6);
    f22C = a5;
    mem = func_001E8A44(0x158);
    f1F0 = mem ? (ObjF0_26 *)((ObjF0_26 *)mem)->func_001A8E30(1) : 0;
    f1F0->func_001A9070(0x3c);
    f1F0->func_0001EDC0(f1E0);
    f1F0->f28 = 1;
    f1F0->f68 = 0;
    f1F0->f60 = 1;
    f1F0->f3C = 0;
    f1F0->f40 = 0;
    f1F0->f4C = 1;
    f1F0->f44 = 1;
    f1F0->fB4 = 0;
    f1F0->fB8 = 0;
    f1F0->fD0 = 0.25f;
    f1F0->fD4 = 0;
    f1F0->fC8 = 0;
    func_001577A0(f1F0, -1);
    mem = func_001E8A44(0x6c);
    f1F4 = mem ? (ObjF4_26 *)((ObjF4_26 *)mem)->func_001A8630(1) : 0;
    f1F4->func_001A8BC0(f1F0, f22C, 0, 0, D_002A10F0, 0);
    func_001577A0(f1F4, -1);
    f1F4->f58 = 1;
    {
        ObjF4_26 *p = f1F4;
        p->f64 = &f234;
        p->f68 = &f238;
    }
    mem = func_001E8A44(0x110);
    f1FC = mem ? (ObjFC_26 *)((ObjFC_26 *)mem)->func_0017F050(1) : 0;
    f1FC->func_0017F0A0(2);
    func_001577A0(f1FC, 2);
    f1FC->f60 = this;
    f1FC->func_001334E0(1);
    f1FC->f68 = D_002BA15C;
    edi = ((Glob4334_26 *)D_002A4334)->func_00132E20(&D_00276688);
    f1FC->func_00086C20(0);
    f1FC->func_00133660(edi);
    f1FC->fA7 |= 1;
    mem = func_001E8A44(0x110);
    f200 = mem ? (ObjFC_26 *)((ObjFC_26 *)mem)->func_0017F050(1) : 0;
    f200->func_0017F0A0(2);
    func_001577A0(f200, 2);
    f200->f60 = this;
    f200->func_001334E0(1);
    f200->f68 = D_002BA15C;
    f200->func_00086C20(0);
    f200->func_00133660(edi);
    f200->fA7 |= 1;
    mem = func_001E8A44(0xf4);
    f1F8 = mem ? (ObjF8_26 *)((ObjF8_26 *)mem)->func_0014AB30(1) : 0;
    f1F8->func_00129920(2);
    func_001577A0(f1F8, 2);
    f1F8->f60 = this;
    f1F8->func_0014C1C0(1, 0, 0);
    f1F8->v32();
    f1F8->f9C = (void *)&func_001A7FE0;
    f1F8->f68 = D_002BA15C;
    f1F8->f60 = f1F0;
    f1F8->f64 = (void *)f1F0->f24;
    mem = func_001E8A44(0x120);
    f204 = mem ? (Obj204_26 *)((Obj204_26 *)mem)->func_001A4A50(1) : 0;
    f204->func_00129920(3);
    f204->f68 = D_002BA154;
    func_001577A0(f204, 2);
    mem = func_001E8A44(0x138);
    f208 = mem ? (Obj208_26 *)((Obj208_26 *)mem)->func_0001EBB0(1) : 0;
    f208->v10();
    func_001577A0(f208, 2);
    f208->v27(f1E0);
    f208->v28(this);
    f208->f30 = 1;
    mem = func_001E8A44(0x1ec);
    f1E8 = mem ? (ObjE8_26 *)((ObjE8_26 *)mem)->func_000B6180(1) : 0;
    f1E8->func_000B6640(f22C, f1E0);
    {
        ObjE8_26 *p = f1E8;
        p->f94 = &f234;
        p->f98 = &f238;
    }
    func_001577A0(f1E8, -1);
    mem = func_001E8A44(0x14);
    f220 = mem ? ((Axis14_26 *)mem)->Init(0.0f) : 0;
    mem = func_001E8A44(0x14);
    f224 = mem ? ((Axis14_26 *)mem)->Init(1.0f) : 0;
    mem = func_001E8A44(0x14);
    f228 = mem ? ((Axis14_26 *)mem)->Init(0.0f) : 0;
    mem = func_001E8A44(0xbc);
    f20C = mem ? (Obj20C_26 *)((Obj20C_26 *)mem)->func_000B8B60(1) : 0;
    func_001577A0(f20C, -1);
    f20C->f24 = 1;
    f20C->func_000B8C80(f1E0);
    f20C->f94 = &f758;
    f20C->f98 = &f768;
    mem = func_001E8A44(0x7c);
    f1EC = mem ? (Obj1EC_26 *)((Obj1EC_26 *)mem)->func_00030C00(1) : 0;
    f1EC->v10();
    func_001577A0(f1EC, -1);
    f1EC->func_00030CD0(f1E0);
    mem = func_001E8A44(0x40);
    f5EC = mem ? ((Obj40_26 *)mem)->func_00025E10() : 0;
    mem = func_001E8A44(0x40);
    f5F0 = mem ? ((Obj40_26 *)mem)->func_00025E10() : 0;
    mem = func_001E8A44(0x40);
    f5F4 = mem ? ((Obj40_26 *)mem)->func_00025E10() : 0;
    mem = func_001E8A44(0xe0);
    f210 = mem ? (Obj210_26 *)((Obj210_26 *)mem)->func_0005E600(1) : 0;
    f210->func_0005DA30(f1E0);
    func_001577A0(f210, -1);
    mem = func_001E8A44(0x70);
    f214 = mem ? (Obj214_26 *)((Obj214_26 *)mem)->func_000B50B0(1) : 0;
    f214->func_000B6050(f1E0);
    mem = func_001E8A44(0x70);
    f218 = mem ? (Obj218_26 *)((Obj218_26 *)mem)->func_000B5990(1) : 0;
    f218->func_000B6050(f1E0);
    mem = func_001E8A44(0x74);
    f21C = mem ? (Obj21C_26 *)((Obj21C_26 *)mem)->func_0011A440(1) : 0;
    f21C->func_0011AB90(f1E0);
    return this;
}

int C_000273F0::func_000273F0(V4_000273F0 *a1,V4_000273F0 *a2,V4_000273F0 *a3)
{
 C_000273F0 * volatile self=this;
 V4_000273F0 dir,up,pos,ground,node;
 this->f230->func_00198330(D_00276690)->func_00197E70(&node);
 if(a1) {pos=*a1; self->f2C=pos;} else pos=self->f2C;
 ground=pos;
 if(a2) {func_00026340(&dir,a2); self->f3C=dir;} else func_00026340(&dir,&self->f3C);
 if(a3) up=*a3; else { C_000273F0_Link *link=self->f22C; if(link) link->func_000BA430(&ground,&up,0,0); else {ground=D_002A10F0; up=D_002A1110;} }
 V4_000273F0 side;
 AsmVec3Cross(&side.x,&up.x,&dir.x); AsmVec3Cross(&dir.x,&side.x,&up.x);
 self->f230->func_00199110(0,&dir,&up,0,1,0);
 if(ground.y>pos.y) pos=ground;
 self->f230->func_00199790(0,&pos); self->f230->func_00197AA0(); self->f67C=1;
 self->f220->func_000269B0(up.x,3.402823466e38f,3.402823466e38f); self->f224->func_000269B0(up.y,3.402823466e38f,3.402823466e38f); self->f228->func_000269B0(up.z,3.402823466e38f,3.402823466e38f);
 self->f1E0->v45(); self->f13C=D_002A10F0; self->f14C=D_002A10F0; self->f1E8->func_000B6A70(0); self->f1E8->v13(0); return self->f1E8->f64!=0;
}

void C_00027850::func_00027850(int a0) {
    unk5CC = a0;
}
