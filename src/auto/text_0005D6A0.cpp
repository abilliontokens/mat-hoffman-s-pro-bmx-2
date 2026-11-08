/* 7 functions from 0x0005D6A0 to 0x0005E600, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memcpy, memset)
struct S_002A8490_4 { char pad0[0xB4]; int fB4; };
struct S_001577A0 { void func_001577A0(void *a, int b); };
struct S_002A8490 { char pad0[0x4]; S_002A8490_4 *f4; char pad8[0xC]; S_001577A0 *f14; char pad18[0x2CC]; int f2E4; };
extern S_002A8490 *D_002A8490;
extern char D_0027829C[], D_002782AC[], D_00278438[], D_00278138[], D_000149F0[];
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_0027842C[];
int func_001ADCC0(char *buf, int n, const char *fmt, ...);
void *func_001E8A44(unsigned int n);
struct S_0005CBD0 { void func_0005CBD0(void); };
struct S_001D3F60 { void *func_001D3F60(void); };
struct S_00094F40 {
    S_00094F40 *func_00094F40(S_002A8490_4 *a);
    void func_00095640(char *buf, int a, int b);
};
struct C_0005D6A0 { C_0005D6A0 *func_0005D6A0(void); };

struct Vec4_5DAB0 {
    Vec4_5DAB0() { x=y=z=0; w=1; }
    float x;
    float y;
    float z;
    float w;
};

struct Node_5DAB0 {
    char pad0[0x20];
    float f20;
    float f24;
    float f28;
    char pad2C[0x40 - 0x2C];
    float f40;
    float f44;
    float f48;
};

extern float D_00275544;
static __forceinline Vec4_5DAB0 Scale_5DAB0(const Node_5DAB0 *n, float scale) {
    Vec4_5DAB0 r;
    r.x=scale*n->f40; r.y=scale*n->f44; r.z=scale*n->f48; r.w=1;
    return r;
}
struct Obj22C_5DAB0 {
    Vec4_5DAB0 func_00197F70(const Vec4_5DAB0 &a);
    Vec4_5DAB0 func_00198040(const Vec4_5DAB0 &a);
    Vec4_5DAB0 *func_00197F70(void *out, void *in);
    Vec4_5DAB0 *func_00198040(void *out, void *in);
    void func_001994C0(int a, void *b, void *c);
    void func_00199960(int a, void *b);
    void func_00199E50(Vec4_5DAB0 a, Vec4_5DAB0 b, float c);
    void func_00199CF0(Vec4_5DAB0 a, float b);
    Vec4_5DAB0 *func_00197F70(void *a);
    void func_001994C0(void *a, void *b, int c);
    void func_00199960(void *a, int b);
};

struct Holder_5DAB0 {
    char pad0[0x22c];
    Obj22C_5DAB0 *f22C;
};

struct BmxGrindConstraint {
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
    int func_0005DAB0();
    int func_0005DAB0(int unused);
    char pad34[0x58 - 0x34];
    float f58;
    float f5C;
    float f60;
    int f64;
    float f68;
    float f6C;
    float f70;
    int f74;
    char pad78[0xC0 - 0x78];
    int fC0;
    float fC4;
    char padC8[0xCC - 0xC8];
    int fCC;
    int fD0;
    int fD4;
    int fD8;
    int fDC;
    int f24;
    int f28;
    Holder_5DAB0 *f2C;
    Node_5DAB0 *f30;
    Node_5DAB0 *f34;
    int f38;
    int f3C;
    int f40;
    int f44;
};
struct C_0005DA30 {
    char pad0[0x2C];
    int unk2C;
    void func_0005DA30(int a0);
};

struct C_0005DA40 {
    char pad0[0x34];
    int unk34;
    void func_0005DA40(int a0);
};

struct S_0005DA50_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA50 {
    char pad0[0x78];
    int unk78;
    void func_0005DA50(int a0);
};

struct S_0005DA80_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA80 {
    char pad0[0x7C];
    int unk7C;
    void func_0005DA80(int a0);
};


C_0005D6A0 *C_0005D6A0::func_0005D6A0(void)
{
    char *p = (char *)this;
    char buf[0x104];
    int i;
    *(int *)(p + 0x4) = 1;
    *(int *)(p + 0x0) = 1;
    *(int *)(p + 0x14) = 1;
    *(int *)(p + 0x460) = 1;
    *(int *)(p + 0x38c) = 1;
    *(int *)(p + 0x324) = 0;
    *(int *)(p + 0x2d8) = 0;
    *(int *)(p + 0x320) = 0;
    *(int *)(p + 0x328) = 0;
    *(int *)(p + 0x458) = 0;
    *(int *)(p + 0x45c) = 0;
    *(int *)(p + 0x8) = 0;
    *(int *)(p + 0xc) = 2;
    *(float *)(p + 0x10) = 120.0f;
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x24) = 0;
    *(int *)(p + 0x18) = 50;
    *(int *)(p + 0x1c) = 100;
    *(int *)(p + 0x464) = 0;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x48) = 0;
    memcpy(p + 0x4c, D_0027829C, 9);
    for (i = 0; i < 8; i++) {
        *(int *)(p + 0x190 + i * 4) = 0;
        *(int *)(p + 0x150 + i * 8) = 0x74616d;
        *(int *)(p + 0x1b0 + i * 4) = 0;
        memcpy(p + 0x1f4 + i * 8, D_002782AC, 6);
        *(int *)(p + 0x398 + i * 0x18) = 0;
        *(int *)(p + 0x39c + i * 0x18) = 0;
        *(int *)(p + 0x3a0 + i * 0x18) = 0;
        *(int *)(p + 0x3a4 + i * 0x18) = 0;
        *(int *)(p + 0x3a8 + i * 0x18) = 0;
        *(int *)(p + 0x3ac + i * 0x18) = 0;
    }
    *(int *)(p + 0x1f0) = 0;
    *(int *)(p + 0x2d0) = 0;
    *(int *)(p + 0x2d4) = 0;
    if (D_002A8490->f2E4 == 0) {
        *(int *)(p + 0x194) = 5;
        *(int *)(p + 0x158) = 0x6b696d;
        *(int *)(p + 0x198) = 2;
        *(int *)(p + 0x160) = 0x656f6a;
        *(int *)(p + 0x19c) = 9;
        *(int *)(p + 0x168) = 0x76656b;
    }
    for (i = 0; i < 8; i++) {
        *(int *)(p + 0x2dc + i * 4) = 0;
        *(int *)(p + 0x32c + i * 4) = 0;
        *(int *)(p + 0x34c + i * 4) = 0;
        *(int *)(p + 0x36c + i * 4) = 0;
    }
    for (i = 0; i < 8; i++) {
        func_001ADCC0(p + 0x25f + i * 11, 11, D_00278438, i + 1);
    }
    for (i = 0; i < 8; i++) {
        *(int *)(p + 0x300 + i * 4) = -1;
    }
    memcpy(p + 0x254, D_00278138, 6);
    *(int *)(p + 0x2bc) = 1;
    *(int *)(p + 0x2b8) = 0;
    *(int *)(p + 0x2c0) = 0;
    *(int *)(p + 0x2c4) = 0;
    *(int *)(p + 0x2c8) = 0;
    void *m = func_001E8A44(0x1a8);
    *(void **)(p + 0x2c8) = m;
    memset(m, 0, 0x1a8);
    *(int *)(p + 0x2cc) = 0;
    if (*(int *)(p + 0x2c0) == 0) {
        S_0005CBD0 *o = (S_0005CBD0 *)func_001E8A44((unsigned int)D_000149F0);
        if (o != 0) {
            o->func_0005CBD0();
        } else {
            o = 0;
        }
        *(S_0005CBD0 **)(p + 0x2c0) = o;
    }
    if (*(int *)(p + 0x2cc) == 0) {
        S_001D3F60 *o = (S_001D3F60 *)func_001E8A44(0xc);
        *(void **)(p + 0x2cc) = o ? o->func_001D3F60() : 0;
    }
    *(int *)(p + 0x468) = 0;
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    func_001ADCC0(buf, 0x104, D_0027842C, D_002A48F8);
    S_00094F40 *t = (S_00094F40 *)func_001E8A44(0x98);
    *(S_00094F40 **)(p + 0x2fc) = t ? t->func_00094F40(D_002A8490->f4) : 0;
    (*(S_00094F40 **)(p + 0x2fc))->func_00095640(buf, D_002A8490->f4->fB4, 1);
    D_002A8490->f14->func_001577A0(*(void **)(p + 0x2fc), -1);
    return this;
}

void func_0005D9C0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void C_0005DA30::func_0005DA30(int a0) {
    int func_001D3F50(...);
    unk2C = a0;
    func_001D3F50();
}

void C_0005DA40::func_0005DA40(int a0) {
    unk34 = a0;
}

void C_0005DA50::func_0005DA50(int a0) {
    unk78 = a0;
    *(S_0005DA50_rec *)((char *)this + 0x38) = *(S_0005DA50_rec *)((char *)this + (a0 + 8) * 16);
}

void C_0005DA80::func_0005DA80(int a0) {
    unk7C = a0;
    *(S_0005DA80_rec *)((char *)this + 0x48) = *(S_0005DA80_rec *)((char *)this + (a0 + 8) * 16);
}

extern float D_002784F0;
extern float D_002A1CA4;
extern "C" double sqrt(double x);
int BmxGrindConstraint::func_0005DAB0(int unused)
{
 Vec4_5DAB0 delta, line, projected, cross, axis, velocity, position, normal;
 Vec4_5DAB0 tmp, scratch;
 float dx,dy,len; volatile float dz;
 float dot;
 float scale[3];
 int flag;
 delta.x=delta.y=delta.z=0; delta.w=1;
 line.x=line.y=line.z=0; line.w=1;
 projected.x=projected.y=projected.z=0; projected.w=1;
 cross.x=cross.y=cross.z=0; cross.w=1;
 axis.x=axis.y=axis.z=0; axis.w=1;
 velocity.x=velocity.y=velocity.z=0; velocity.w=1;
 position.x=position.y=position.z=0; position.w=1;
 normal.x=normal.y=normal.z=0; normal.w=1;
 *(Vec4_5DAB0*)(((char*)this)+0xd0)=*(Vec4_5DAB0*)((char*)*(Node_5DAB0**)(((char*)this)+0x30)+0x40);
 (*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_001994C0(0,&velocity,&position);
 *(Vec4_5DAB0*)(((char*)this)+0x58)=(*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00197F70(*(Vec4_5DAB0*)(((char*)this)+0x38));
 Node_5DAB0 *node=*(Node_5DAB0**)(((char*)this)+0x30);
 dx=node->f20-*(float*)(((char*)this)+0x58);
 dy=node->f24-*(float*)(((char*)this)+0x5c);
 dz=node->f28-*(float*)(((char*)this)+0x60);
 dot=dy*node->f44+dx*node->f40+dz*node->f48;
 scale[2]=dot*node->f48; scale[1]=dot*node->f44; scale[0]=dot*node->f40;
 tmp.x=dx-scale[0]; tmp.y=dy-scale[1]; tmp.z=dz-scale[2]; tmp.w=1;
 delta=tmp;
 if(delta.y>D_002784F0) flag=1;
 else { flag=0; if(!*(int*)(((char*)this)+0x28)) delta.y=0; }
 len=AsmSqrtF(delta.x*delta.x+delta.z*delta.z+delta.y*delta.y);
 if(flag && len<D_002A1CA4) {
  *(int*)(((char*)this)+0x24)=0;
  (*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00199960(0,&delta);
  *(Vec4_5DAB0*)(((char*)this)+0x58)=(*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00197F70(*(Vec4_5DAB0*)(((char*)this)+0x38));
  *(Vec4_5DAB0*)(((char*)this)+0x68)=(*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00197F70(*(Vec4_5DAB0*)(((char*)this)+0x48));
  node=*(Node_5DAB0**)(((char*)this)+0x34);
  dx=node->f20-*(float*)(((char*)this)+0x68); dy=node->f24-*(float*)(((char*)this)+0x6c); dz=node->f28-*(float*)(((char*)this)+0x70);
  dot=dy*node->f44+dx*node->f40+dz*node->f48;
  scale[2]=dot*node->f48; scale[1]=dot*node->f44; scale[0]=dot*node->f40;
 dx=node->f20-scale[0]; dy=node->f24-scale[1]; dz=node->f28-scale[2];
  tmp.x=dx-*(float*)(((char*)this)+0x58); tmp.y=dy-*(float*)(((char*)this)+0x5c); tmp.z=dz-*(float*)(((char*)this)+0x60); tmp.w=1; projected=tmp;
  tmp.x=*(float*)(((char*)this)+0x68)-*(float*)(((char*)this)+0x58); tmp.y=*(float*)(((char*)this)+0x6c)-*(float*)(((char*)this)+0x5c); tmp.z=*(float*)(((char*)this)+0x70)-*(float*)(((char*)this)+0x60); tmp.w=1; line=tmp;
  func_0005D9C0(&line.x,&line.x); func_0005D9C0(&projected.x,&projected.x);
  AsmVec3Cross(&cross.x,&projected.x,&line.x);
  len=AsmSqrtF(cross.x*cross.x+cross.y*cross.y+cross.z*cross.z);
  if(len>D_00275544) {
   func_0005D9C0(&axis.x,&cross.x);
   axis=(*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00198040(axis);
   (*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00199E50(*(Vec4_5DAB0*)(((char*)this)+0x38),axis,len);
  }
 } else {
  *(int*)(((char*)this)+0x24)=1;
  func_0005D9C0(&normal.x,&delta.x);
  len=AsmMinF(len,*(float*)(((char*)this)+0xc0));
  tmp.x=len*normal.x; tmp.y=len*normal.y; tmp.z=normal.z*len; tmp.w=1; delta=tmp;
  (*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00199960(0,&delta);
  node=*(Node_5DAB0**)(((char*)this)+0x30);
  if(velocity.y*node->f44+velocity.x*node->f40+velocity.z*node->f48< D_00275544) {
    tmp.x=-node->f40; tmp.y=-node->f44; tmp.z=-node->f48; tmp.w=1; normal=tmp;
  } else normal=*(Vec4_5DAB0*)&node->f40;
  AsmVec3Cross(&cross.x,&velocity.x,&normal.x);
  len=AsmSqrtF(cross.x*cross.x+cross.y*cross.y+cross.z*cross.z);
  if(len>D_00275544) {
   func_0005D9C0(&axis.x,&cross.x);
   axis=(*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00198040(axis);
   (*(Holder_5DAB0**)(((char*)this)+0x2c))->f22C->func_00199CF0(axis,len* *(float*)(((char*)this)+0xc4));
  }
 }

 char *holder=(char*)*(Holder_5DAB0**)(((char*)this)+0x2c);
 node=*(Node_5DAB0**)(((char*)this)+0x30);
 dot=*(float*)(holder+0x23c)*node->f44+*(float*)(holder+0x238)*node->f40+*(float*)(holder+0x240)*node->f48;
 int sign=(dot<D_00275544)?1:-1;
 float magnitude=dot;
 *(unsigned int*)&magnitude &= 0x7fffffff;
 float amount=sign*AsmMinF(*(float*)(((char*)this)+0xcc),magnitude);
 tmp.x=amount*node->f40; tmp.y=amount*node->f44; tmp.z=amount*node->f48; tmp.w=1; normal=tmp;
 if(!flag && !*(int*)(((char*)this)+0x28)) normal.y=*(float*)(holder+0x23c);
 *(Vec4_5DAB0*)(holder+0x238)=normal;
 holder=(char*)*(Holder_5DAB0**)(((char*)this)+0x2c);
 node=*(Node_5DAB0**)(((char*)this)+0x30);
 dot=*(float*)(holder+0x134)*node->f44+*(float*)(holder+0x130)*node->f40+*(float*)(holder+0x138)*node->f48;
 dx=*(float*)(holder+0x130)-dot*node->f40;
 dy=*(float*)(holder+0x134)-dot*node->f44;
 dz=*(float*)(holder+0x138)-dot*node->f48;
 tmp.x=-dx;tmp.y=-dy;tmp.z=-dz;tmp.w=1; scratch=tmp;
 if(!flag && !*(int*)(((char*)this)+0x28)) scratch.y=AsmMinF(tmp.y,0.0f);
 *(float*)(holder+0x130)+=scratch.x;
 *(float*)(holder+0x134)+=scratch.y;
 *(float*)(holder+0x138)+=scratch.z;
 holder=(char*)*(Holder_5DAB0**)(((char*)this)+0x2c);
 node=*(Node_5DAB0**)(((char*)this)+0x34);
 dot=*(float*)(holder+0x134)*node->f44+*(float*)(holder+0x130)*node->f40+*(float*)(holder+0x138)*node->f48;
 dx=*(float*)(holder+0x130)-dot*node->f40;
 dy=*(float*)(holder+0x134)-dot*node->f44;
 dz=*(float*)(holder+0x138)-dot*node->f48;
 tmp.x=-dx;tmp.y=-dy;tmp.z=-dz;tmp.w=1; scratch=tmp;
 if(!flag && !*(int*)(((char*)this)+0x28)) scratch.y=AsmMinF(tmp.y,0.0f);
 *(float*)(holder+0x130)+=scratch.x;
 *(float*)(holder+0x134)+=scratch.y;
 *(float*)(holder+0x138)+=scratch.z;
 return 1;
}

