/* 1 function from 0x00131510 to 0x001324B0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

struct V4_00131510 {
    float x, y, z, w;
};

struct Vec4_00131510 : V4_00131510 {
    Vec4_00131510() { x = y = z = 0; w = 1; }
};

/* a tracked value: current value, a time constant, and the smoothing ratio */
struct S_Node_00131510 {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    void func_000269B0(float, float, float);
    float func_00026A10(float, float);
};

struct S_Sub_00131510 {
    void func_000BA430(V4_00131510 *a, int b, int c, int d);
    void func_00199A70(int, V4_00131510*);
};

/* CinematographerCam */
struct C_00131510 {
    void *vtbl;
    V4_00131510 f4;
    V4_00131510 f14;
    V4_00131510 f24;
    V4_00131510 f34;
    float f44;
    float f48;
    float f4C;
    int f50;
    int f54;
    int f58;
    float f5C;
    float f60;
    int f64;
    int f68;
    S_Sub_00131510 *f6C;
    float f70;
    int f74;
    int f78;
    int f7C;
    S_Node_00131510 *f80;
    S_Node_00131510 *f84;
    S_Node_00131510 *f88;
    S_Node_00131510 *f8C;
    S_Node_00131510 *f90;
    S_Node_00131510 *f94;
    int f98;
    int f9C;
    float fA0;
    int fA4;
    float fA8;
    int fAC;
    int fB0;
    int fB4;
    int fB8;
    int fBC;
    int fC0;
    float fC4;
    float fC8;
    float fCC;
    float fD0;
    void func_00131510(float dt, int a1, int a2, int a3, float *p18, V4_00131510 *p1c, V4_00131510 *p20, int a7);
};

extern float D_00275544, D_002A4278, D_00275460, D_0028458C, D_00284588, D_002B9D6C;
extern V4_00131510 D_002A4220, D_002A4230, D_002A4240;
extern float D_002755EC, D_002A4274;
extern char* D_002A8490;
extern int D_002A9A68;
extern char D_00284574[],D_0028455C[],D_00284544[],D_0028452C[],D_00284524[];
void func_0013E260(void*,int,const char*);
void func_0013E1F0(void*,int,const char*,...);
float func_0014FBA0(float,float);

void func_001310E0(V4_00131510 *a, V4_00131510 *b);
float func_00016D60(float x);
void func_00158390(float angle, V4_00131510 axis, V4_00131510 v, V4_00131510 *out);
void func_000BA430(void *obj, V4_00131510 *a, int b, int c, int d);

static __forceinline float Min_00131510(float a, float b)
{
    return AsmMinF(a, b);
}

static __forceinline void Cross_00131510(V4_00131510 *out, V4_00131510 *a, V4_00131510 *b)
{
    AsmVec3Cross(&out->x, &a->x, &b->x);
}

static __forceinline float Track_00131510(S_Node_00131510 *n, float target, float dt)
{
    n->f8 = D_00275460 / n->f4 * AsmMinF(dt, n->f4);
    n->f0 = (target - n->f0) * n->f8 + n->f0;
    return n->f0;
}

#pragma optimize("y", on)
void C_00131510::func_00131510(float dt, int a1, int a2, int a3, float *p18, V4_00131510 *p1c, V4_00131510 *p20, int a7)
{
    if (this->f74 != 0 && this->f98 != 0) {
        float negC8 = -this->fC8;
        float c4 = this->fC4;
        Vec4_00131510 a;
        V4_00131510 r, da, db, pos;
        Vec4_00131510 b;
        Cross_00131510(&a, p20, p1c);
        if (this->f9C == 0) {
            a.y = 0;
        }
        func_001310E0(&a, &a);
        if (p1c->x == D_00275544 && p1c->z == D_00275544) {
            b.x = p20->x;
            b.y = p20->y;
            b.z = p20->z;
            b.w = p20->w;
        } else {
            b.x = p1c->x;
            b.y = p1c->y;
            b.z = p1c->z;
            b.w = p1c->w;
        }
        if (this->f9C == 0) {
            b.y = 0;
        }
        func_001310E0(&b, &b);
        float s = c4 * dt;
        float s2 = negC8 * dt;
        float k = this->f5C;
        da.x=a.x*s; da.y=a.y*s; da.z=a.z*s; da.w=1;
        da.x*=k; da.y*=k; da.z*=k;
        db.x=b.x*s2; db.y=b.y*s2; db.z=b.z*s2; db.w=1;
        db.x*=k; db.y*=k; db.z*=k;
        pos.x=this->f14.x+db.x;pos.y=this->f14.y+db.y;pos.z=this->f14.z+db.z;pos.w=1;
        r.x=pos.x+da.x;r.y=pos.y+da.y;r.z=pos.z+da.z;r.w=1;
        this->f14=r;
    }

float d0=this->fD0;
if(this->f98){
	if(!this->f7C){
	float ratio=(D_002A4278+*p18)/(D_002A4278+this->fA8);
	this->f4C-=this->fCC*this->f44*ratio*dt;
	this->f48+=Min_00131510(this->f44,1.57079637f)*ratio*d0*dt;
	}
	if(this->fAC)this->f14.y+=dt*this->f60;
	else if(this->fB0)this->f14.y-=dt*this->f60;
}
float angle=func_00016D60(Track_00131510(this->f90,this->f4C,dt));
float tilt=Track_00131510(this->f8C,this->f48,dt);
if(tilt<D_0028458C){tilt=-1.56765485f;this->f48=tilt;}
else if(tilt>=D_00284588){tilt=1.56765485f;this->f48=tilt;}
D_002B9D6C+=dt;
Vec4_00131510 v,side,t0,t1,up;
func_00158390(func_00016D60(tilt),D_002A4220,D_002A4240,&t0);
func_00158390(angle,D_002A4230,t0,&t1);
v=t1;
Cross_00131510(&side,&D_002A4230,&v);
func_001310E0(&side,&side);
func_001310E0(&v,&v);
Cross_00131510(&up,&v,&side);
this->f4.x=Track_00131510(this->f80,this->f14.x,dt);
this->f4.y=Track_00131510(this->f84,this->f14.y,dt);
this->f4.z=Track_00131510(this->f88,this->f14.z,dt);

if(this->f78){
	if(this->f6C){
	V4_00131510 pos=this->f4;this->f6C->func_000BA430(&pos,0,0,0);
	if(pos.y+D_00275460>this->f4.y){this->f14.y=this->f4.y=pos.y+D_00275460; this->f84->func_000269B0(this->f14.y,3.402823466e38f,3.402823466e38f);}
	}
	if(*(float*)&this->f70+D_00275460>this->f4.y){this->f14.y=this->f4.y=*(float*)&this->f70+D_00275460;this->f84->func_000269B0(this->f14.y,3.402823466e38f,3.402823466e38f);}
}
Vec4_00131510 norm;
Cross_00131510(&norm,&up,&v);
func_001310E0(&norm,&norm);
Cross_00131510(&up,&v,&norm);
if(a2)*(V4_00131510*)a2=this->f4;
if(p1c)*p1c=v;
if(p20)*p20=up;
if(this->f64||this->f68){
	if(this->f7C){
	Vec4_00131510 target;
	if(this->f64){
	Vec4_00131510 vel;
	((S_Sub_00131510*)*(int*)(this->f64+0x22c))->func_00199A70(0,&target);
	vel=*(Vec4_00131510*)(this->f64+0x238);
	vel.w=0;
	func_001310E0(&vel,&vel);
	target.x+=vel.x*D_002755EC;
	target.y+=vel.y*D_002755EC;
	target.z+=vel.z*D_002755EC;
	}else ((S_Sub_00131510*)this->f68)->func_00199A70(0,&target);
	v.x=target.x-this->f4.x;v.y=target.y-this->f4.y;v.z=target.z-this->f4.z;v.w=1;
	func_001310E0(&v,&v);
	Cross_00131510(&side,&D_002A4230,&v);
	func_001310E0(&side,&side);func_001310E0(&v,&v);
	Cross_00131510(&up,&v,&side);
	if(p1c)*p1c=v;if(p20)*p20=up;
	}else if(this->fC0){
	Vec4_00131510 target;
	((S_Sub_00131510*)(this->f64?*(int*)(this->f64+0x22c):this->f68))->func_00199A70(0,&target);
	v.x=target.x-this->f4.x;v.y=target.y-this->f4.y;v.z=target.z-this->f4.z;v.w=1;
	func_001310E0(&v,&v);
	Cross_00131510(&side,&D_002A4230,&v);
	func_001310E0(&side,&side);func_001310E0(&v,&v);
	Cross_00131510(&up,&v,&side);
	this->f4C=func_0014FBA0(v.x,v.z);
	}
}
if(this->fB4){this->fA0-=D_002A4274*dt;if(this->fA0<*(float*)&this->fA4)this->fA0=*(float*)&this->fA4;}
if(this->fB8){this->fA0+=D_002A4274*dt;if(this->fA0>this->fA8)this->fA0=this->fA8;}
if(p18)*p18=this->f94->func_00026A10(this->fA0,dt);
*(int*)a1=0;
void* debug=*(void**)(D_002A8490+0x18);
if(debug){
	if(D_002A9A68<0){D_002A9A68=*(int*)((char*)debug+0x1934);++*(int*)((char*)debug+0x1934);}
	func_0013E260(*(void**)(D_002A8490+0x18),D_002A9A68,D_00284574);
	func_0013E1F0(*(void**)(D_002A8490+0x18),D_002A9A68,D_0028455C,(double)this->f4.x,(double)this->f4.y,(double)this->f4.z);
	func_0013E1F0(*(void**)(D_002A8490+0x18),D_002A9A68,D_00284544,(double)v.x,(double)v.y,(double)v.z);
	func_0013E1F0(*(void**)(D_002A8490+0x18),D_002A9A68,D_0028452C,(double)up.x,(double)up.y,(double)up.z);
	func_0013E1F0(*(void**)(D_002A8490+0x18),D_002A9A68,D_00284524,(double)this->fA0);
}

}
#pragma optimize("", on)
