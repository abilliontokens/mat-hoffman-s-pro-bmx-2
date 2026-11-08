/* 1 function from 0x001AA270 to 0x001AB670, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <xmmintrin.h>

extern float D_00276278;
extern float D_002755F4;
extern float D_00275544;
extern float D_00275460;
extern float D_002AA248, D_002AA24C, D_002AA250, D_002AA254;

struct V4_001AA270 {
    float x, y, z, w;
    V4_001AA270() { x = y = z = 0.0f; w = 1.0f; }
    V4_001AA270 operator*(float s) const { V4_001AA270 r; r.x=x*s; r.y=y*s; r.z=z*s; return r; }
    V4_001AA270 operator-() const { V4_001AA270 r; r.x=-x; r.y=-y; r.z=-z; return r; }
    V4_001AA270 operator+(const V4_001AA270 &b) const { V4_001AA270 r; r.x=x+b.x; r.y=y+b.y; r.z=z+b.z; return r; }
    V4_001AA270 operator-(const V4_001AA270 &b) const { V4_001AA270 r; r.x=x-b.x; r.y=y-b.y; r.z=z-b.z; return r; }
};

void func_00030A30(V4_001AA270 *out, V4_001AA270 v, void *m);
void func_00030AC0(V4_001AA270 *out, V4_001AA270 *a, void *m);
void func_00030B20(V4_001AA270 *out, V4_001AA270 v, void *m);
V4_001AA270 *func_000267F0(V4_001AA270 *out, V4_001AA270 *a, void *m);
V4_001AA270 func_000267F0(V4_001AA270 *a, void *m);
void func_00198040(V4_001AA270 *out, V4_001AA270 *a);


struct Xf_001AA270 {
 V4_001AA270 func_00198040(V4_001AA270 *v);
 V4_001AA270 func_00197EC0(V4_001AA270 *v);
};
struct Body_001AA270 {
 void func_00030B20(V4_001AA270 v);
 void func_00030B90(V4_001AA270 v);
 void func_00171BA0(V4_001AA270 v);
 void func_00171D00(V4_001AA270 v);
};
V4_001AA270 *func_000110B0(V4_001AA270 *a, V4_001AA270 *b);

struct C_001AA270 {
    char pad0[0x24];
    void *f24;
    char pad28[0x58 - 0x28];
    int f58;
    char pad5c[0x68 - 0x5c];
    int f68;
    char pad6c[0xbc - 0x6c];
    float fbc;
    float fc0;
    float fc4;
    char padc8[0x114 - 0xc8];
    float f114, f118, f11c;
    float f120;
    float f124, f128, f12c;
    int func_001AA270(float depth, V4_001AA270 normal, V4_001AA270 point, void *other, int mask);
    void func_001A96D0(void *body, V4_001AA270 impulse, V4_001AA270 point, int scale);
    void func_001AA270(float a0, float a1, float a2, float a3, void *a4, void *a5, void *a6, void *a7, void *a8, int a9, int a10);
};

int C_001AA270::func_001AA270(float depth, V4_001AA270 normal, V4_001AA270 point, void *other, int mask)
{
 V4_001AA270 v0,v1,v2,v3,v4,r0,r1,t0,t1,t2,n0,n1,imp,tmp,cross,out0,out1,out2;
 float bounce, mass, mass1, denom, denom1, inv, dot, scale, speed, q, m, k, vx, vy, vz;
 if(other) bounce=*(float*)((char*)other+0x210)>D_00276278 ? 0.25f:fc4;
 else bounce=normal.y>D_002755F4?fc0:fbc;
 if(f58) {r0=*(V4_001AA270*)&D_002AA248;r1=r0;}
 else {
 tmp.w=1;tmp.x=point.x-f114;tmp.y=point.y-f118;tmp.z=point.z-f11c;
 func_00030A30(&r0,tmp,(char*)*(void**)((char*)f24+0x22c)+0xf0);
 if(other) {
 func_00030AC0(&t0,(V4_001AA270*)((char*)other+0x190),(char*)*(void**)((char*)other+0x22c)+0xf0);
 tmp.w=1;tmp.x=point.x-t0.x;tmp.y=point.y-t0.y;tmp.z=point.z-t0.z;
 func_00030A30(&r1,tmp,(char*)*(void**)((char*)other+0x22c)+0xf0);
 }
 }
 mass=*(float*)((char*)f24+0x214);
 func_00030A30(&n0,normal,(char*)*(void**)((char*)f24+0x22c)+0xf0);
 AsmVec3Cross(&cross.x,&r0.x,&n0.x);
 v0=*func_000267F0(&out0,&cross,(char*)f24+0xf0);
 AsmVec3Cross(&v2.x,&v0.x,&r0.x);
 denom=n0.x*v2.x+n0.y*v2.y+n0.z*v2.z;
 if(other) {
 mass1=*(float*)((char*)other+0x214);
 func_00030A30(&n1,normal,(char*)*(void**)((char*)other+0x22c)+0xf0);
 AsmVec3Cross(&v4.x,&r1.x,&n1.x);
 v1=*func_000267F0(&out0,&v4,(char*)other+0xf0);
 AsmVec3Cross(&v2.x,&v1.x,&r1.x);
 denom1=n1.x*v2.x+n1.y*v2.y+n1.z*v2.z;
 } else {mass1=0;n1=*(V4_001AA270*)&D_002AA248;denom1=D_00275544;}
 inv=D_00275460/(mass1+denom1+denom+mass);
 dot=normal.y*f128+normal.x*f124+normal.z*f12c;
 if(dot<=D_00275544 && !(*(int*)((char*)f24+0x204)&mask)) {
 scale=-((bounce+D_00275460)*dot*inv);
 tmp.w=1;tmp.x=normal.x*scale;tmp.y=normal.y*scale;tmp.z=normal.z*scale;imp=tmp;
 tmp.w=1;tmp.x=tmp.x*mass;tmp.y=tmp.y*mass;tmp.z=tmp.z*mass;
 ((Body_001AA270*)f24)->func_00030B20(tmp);
 out1=((Xf_001AA270*)*(void**)((char*)f24+0x22c))->func_00198040(&imp);
 AsmVec3Cross(&out2.x,&r0.x,&out1.x);
 tmp=*func_000267F0(&out0,&out2,(char*)f24+0xf0);
 if(f68) {tmp.x=0;tmp.z=0;}
 scale=*(float*)((char*)this+0xb4);
 tmp.x*=scale;tmp.y*=scale;tmp.z*=scale;
 ((Body_001AA270*)f24)->func_00030B90(tmp);
 if(other && *(int*)((char*)this+0x54) && !(*(int*)((char*)this+0x7c)&*(int*)((char*)other+0x204))) {
 bounce=*(float*)((char*)other+0x214);
 tmp.w=1;tmp.x=-imp.x*bounce;tmp.y=-imp.y*bounce;tmp.z=-imp.z*bounce;
 ((Body_001AA270*)other)->func_00030B20(tmp);
 out1=((Xf_001AA270*)*(void**)((char*)other+0x22c))->func_00198040(&imp);
 AsmVec3Cross(&out2.x,&r1.x,&out1.x);
 tmp=*func_000267F0(&out0,&out2,(char*)other+0xf0);
 if(f68) {tmp.x=0;tmp.z=0;}
 scale=-*(float*)((char*)this+0xb4);
 tmp.x*=scale;tmp.y*=scale;tmp.z*=scale;
 ((Body_001AA270*)other)->func_00030B90(tmp);
 }
 }
 if(!(*(int*)((char*)f24+0x204)&mask)) {
 if(*(int*)((char*)this+0x70)) {
 speed=normal.y**(float*)((char*)f24+0x134)+normal.x**(float*)((char*)f24+0x130)+normal.z**(float*)((char*)f24+0x138);
 if(speed<=D_00275544) {
 q=-speed**(float*)((char*)this+0x9c);
 tmp.w=1;tmp.x=normal.x*q;tmp.y=normal.y*q;tmp.z=normal.z*q;
 func_001A96D0(f24,tmp,point,*(int*)((char*)this+0xb8));
 if(other && *(int*)((char*)this+0x54) && !(*(int*)((char*)this+0x7c)&*(int*)((char*)other+0x204))) {
 goto applyOther;
 }
 }
 } else {
 v3=*func_000267F0(&out0,(V4_001AA270*)((char*)f24+0x140),(char*)f24+0xf0);
 AsmVec3Cross(&t2.x,&v3.x,&r0.x);
 tmp=((Xf_001AA270*)*(void**)((char*)f24+0x22c))->func_00197EC0(&t2);
 m=*(float*)((char*)f24+0x214);
 vx=m**(float*)((char*)f24+0x130);
 vy=m**(float*)((char*)f24+0x134);
 vz=m**(float*)((char*)f24+0x138);
 out0.x=vx+tmp.x;out0.y=vy+tmp.y;out0.z=vz+tmp.z;
 if(other) {
 AsmVec3Cross(&t2.x,(float*)((char*)other+0x7c),&r1.x);
 tmp=((Xf_001AA270*)*(void**)((char*)other+0x22c))->func_00197EC0(&t2);
 tmp.x+=*(float*)((char*)other+0x6c);tmp.y+=*(float*)((char*)other+0x70);tmp.z+=*(float*)((char*)other+0x74);
 } else tmp=*(V4_001AA270*)&D_002AA248;
 V4_001AA270 relative=out0-tmp;
 speed=relative.y*normal.y+relative.x*normal.x+relative.z*normal.z;
 if(speed<=D_00275544) {
 q=-speed**(float*)((char*)this+0x9c)*inv;
 tmp.w=1;tmp.x=normal.x*q;tmp.y=normal.y*q;tmp.z=normal.z*q;
 func_001A96D0(f24,tmp,point,*(int*)((char*)this+0xb8));
 if(other && *(int*)((char*)this+0x54)) {
 tmp=*func_000110B0(&tmp,&tmp);
 func_001A96D0(other,tmp,point,*(int*)((char*)this+0xb8));
 }
 }
 }
 goto finishResponse;
applyOther:
 func_001A96D0(other,*func_000110B0(&out0,&tmp),point,*(int*)((char*)this+0xb8));
finishResponse:
 if(*(int*)((char*)this+0x60) && depth>D_00275544) {
 q=inv*depth;
 tmp.w=1;tmp.x=normal.x*q;tmp.y=normal.y*q;tmp.z=normal.z*q;t1=tmp;
 m=*(float*)((char*)f24+0x214); k=*(float*)((char*)this+0xd0);
 tmp.x=tmp.x*k*m;tmp.y=tmp.y*k*m;tmp.z=tmp.z*k*m;
 ((Body_001AA270*)f24)->func_00171BA0(tmp);
 v4=((Xf_001AA270*)*(void**)((char*)f24+0x22c))->func_00198040(&t1);
 AsmVec3Cross(&t0.x,&r0.x,&v4.x);
 tmp=*func_000267F0(&out0,&t0,(char*)f24+0xf0);
 k=*(float*)((char*)this+0xd4);
 tmp.x*=k;tmp.y*=k;tmp.z*=k;
 if(f68) {tmp.x=0;tmp.z=0;}
 ((Body_001AA270*)f24)->func_00171D00(tmp);
 }
 }
 return 1;
}
