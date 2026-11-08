/* 2 functions from 0x00012B00 to 0x00013A40, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

struct S_13910_Vec { float x, y, z, w; S_13910_Vec() {} S_13910_Vec(float a,float b,float c,float d=1.0f):x(a),y(b),z(c),w(d) {} };
struct S_13910_Obj2 { S_13910_Vec *func_00199B00(S_13910_Vec *out, int a); };
struct S_13910_Sub { char pad[0xbc]; int fbc; };
struct S_13910_Ent {
    char pad[0x834]; S_13910_Vec f834;
    char pad2[0x950 - 0x844]; S_13910_Sub *f950;
    char pad3[0xa00 - 0x954]; struct S_13910_Pl *fa00;
};
struct S_13910_Pl { char pad[4]; S_13910_Obj2 *f4; };
struct S_13910_Row { int count; S_13910_Vec *points; float f8; };
extern void func_000111B0(S_13910_Vec *, S_13910_Vec *);
extern S_13910_Vec *func_00011140(S_13910_Vec *, S_13910_Vec *, float);
extern S_13910_Vec *func_000110E0(S_13910_Vec *, S_13910_Vec *, S_13910_Vec *);
struct S_13910_G {
    char pad[0x4e0]; struct S_13910_Arr *f4e0;
    char pad2[0x588 - 0x4e4]; S_13910_Row **f588;
};
struct S_13910_Arr { char pad[0x1a8]; S_13910_Ent *ents[1]; };
struct S_13910_Owner {
    char pad1[0x3b0]; int f3b0; int f3b4; char pad2[0x3d8 - 0x3b8]; int f3d8; char pad3[8]; S_13910_Vec pos; char pad4[0x41c-0x3f4]; int f41c;
    void func_00011BE0(int *a, int *b);
    int func_000119D0(S_13910_Vec *v);
    float func_00012510(int *p, int w);
    void func_001C6DA0(int a, int b);
    void func_00011440(S_13910_Vec v);
};
struct S_12B00_G { char pad[0x238]; int f238; };
extern S_12B00_G *D_002A8490;
struct AIPedFightState {
    void *vtbl;
    char pad[4];
    S_13910_Owner *f8;
    int fC;
    char pad10[0xc];
    int f1c;
    void func_00012B00(int a0);
    void func_00013910();
};
extern S_13910_G *D_002B9120;
struct S_12B00_Motion { void func_00197B40(S_13910_Vec *, S_13910_Vec *); };
struct S_12B00_Anim { void func_0008AB90(int); };
struct S_12B00_Obstacle { char pad[0x7c]; S_13910_Vec pos; };
struct S_12B00_Obstacles { char pad[0x38]; int count; char pad2[0xc]; S_12B00_Obstacle **items; };
extern S_12B00_Obstacles *D_002B9134;
extern S_13910_Vec D_002A051C;
struct S_12B00_L {
    AIPedFightState *volatile self;
    union { int next; float distance; } u4;
    int a; int b;
    float sq;
    union { float speed; float f8max; } u14;
    S_13910_Vec offset; S_13910_Vec side; S_13910_Vec t; S_13910_Vec toSelf;
    S_13910_Vec pos; S_13910_Vec target; S_13910_Vec forward; S_13910_Vec toTarget;
    S_13910_Vec cross; S_13910_Vec dir; S_13910_Vec up; S_13910_Vec along2; S_13910_Vec d;
};
static __forceinline S_13910_Vec sub12(const S_13910_Vec &a, const S_13910_Vec &b) { return S_13910_Vec(a.x-b.x,a.y-b.y,a.z-b.z); }
static __forceinline S_13910_Vec add12(const S_13910_Vec &a, const S_13910_Vec &b) { return S_13910_Vec(a.x+b.x,a.y+b.y,a.z+b.z); }
static __forceinline S_13910_Vec mul12(const S_13910_Vec &a, float b) { return S_13910_Vec(a.x*b,a.y*b,a.z*b); }
static __forceinline float dot12(const S_13910_Vec &a, const S_13910_Vec &b) { return a.x*b.x+a.y*b.y+a.z*b.z; }
static __forceinline void cross12(S_13910_Vec *out,const S_13910_Vec *a,const S_13910_Vec *b) { *out=S_13910_Vec(a->y*b->z-a->z*b->y,a->z*b->x-a->x*b->z,a->x*b->y-a->y*b->x,0); }
static __forceinline float sqrt12(float f) { return _mm_sqrt_ss(*(__m128 *)&f).m128_f32[0]; }

void AIPedFightState::func_00012B00(int a0)
{
 int a, b;
 this->f1c=D_002A8490->f238+375;
 f8->func_00011BE0(&a,&b);
 if(a==-1) return;
 S_13910_Row *row=D_002B9120->f588[f8->f3b4];
 S_13910_Vec pos=f8->pos;
 S_13910_Vec target;
 int moving;
 if(D_002B9120->f4e0->ents[a]->f950->fbc) {
  S_13910_Vec t;
  target=*D_002B9120->f4e0->ents[a]->fa00->f4->func_00199B00(&t,0);
  moving=1;
 } else {target=D_002B9120->f4e0->ents[a]->f834; moving=0;}
 S_13910_Vec forward,up;
 forward.z=0; forward.y=0; forward.x=0; forward.w=1;
 up.z=0; up.y=0; up.x=0; up.w=1;
 (*(S_12B00_Motion **)((char *)D_002B9120->f4e0->ents[a]+0x230))->func_00197B40(&forward,&up);
 S_13910_Vec toSelf=sub12(pos,target); func_000111B0(&toSelf,&toSelf);
 S_13910_Vec toTarget=sub12(target,pos); func_000111B0(&toTarget,&toTarget);
 float speed=*(float *)((char *)D_002B9120->f4e0->ents[a]+0x1194);
 S_13910_Vec dir;
 float distance;
 if(!a0) {
  int index=f8->func_000119D0(&f8->pos);
  S_13910_Vec d=sub12(row->points[index],f8->pos); func_000111B0(&d,&d);
  int next=index+1; if(next>=row->count) next=0;
  S_13910_Vec e=sub12(row->points[next],f8->pos); func_000111B0(&e,&e);
  if(e.y*d.y+e.x*d.x+e.z*d.z>0) {next=index; if(--index<0) index=row->count-1;}
  else {
   S_13910_Vec along=sub12(row->points[next],row->points[index]);func_000111B0(&along,&along);
   S_13910_Vec offset=sub12(f8->pos,row->points[index]);func_000111B0(&offset,&offset);
   if(dot12(offset,along)<0.3535f){next=index;if(--index<0)index=row->count-1;}
  }
  S_13910_Vec along=sub12(row->points[next],row->points[index]);func_000111B0(&along,&along);
  S_13910_Vec previous=sub12(*(S_13910_Vec *)((char *)this+0xc),f8->pos);func_000111B0(&previous,&previous);
  int direction;
  if(along.x*toSelf.x+along.y*toSelf.y+along.z*toSelf.z>0 && previous.y*toTarget.y+previous.x*toTarget.x+previous.z*toTarget.z<0.875f) {direction=1;index=next;}else direction=0;
  S_13910_Vec delta=sub12(row->points[index],f8->pos);
  float sq=delta.z*delta.z+delta.y*delta.y+delta.x*delta.x;
  distance=AsmSqrtF(sq);
  if(distance<2) {
   if(direction==1){if(++index>=row->count)index=0;}
   else if(--index<0)index=row->count-1;
  }
  dir=sub12(row->points[index],f8->pos);func_000111B0(&dir,&dir);
  f8->func_00011440(dir);
  if(speed>0.1f) {
   distance=AsmMinF(distance,row->f8);
   distance=AsmMaxF(distance,2.0f);
   *(S_13910_Vec *)((char *)this+0xc)=add12(f8->pos,mul12(dir,distance));
  }else *(S_13910_Vec *)((char *)this+0xc)=row->points[index];
  if(D_002B9134) {
   for(int i=0;i<D_002B9134->count;i++) {
    S_13910_Vec delta=sub12(D_002B9134->items[i]->pos,f8->pos);
    float sq=delta.x*delta.x+delta.y*delta.y+delta.z*delta.z;
    float len=AsmSqrtF(sq);
    if(len<=12) {
     func_000111B0(&delta,&delta);
     if(delta.y*dir.y+delta.x*dir.x+delta.z*dir.z>0.7071f)goto stop;
    }
   }
  }
  return;
 } else {
  S_13910_Vec side, cross;
  side.z=0; side.y=0; side.x=0; side.w=1;
  cross.z=0; cross.y=0; cross.x=0; cross.w=1;
  AsmVec3Cross((float *)&cross,(float *)&up,(float *)&forward);
  int direction=dot12(cross,toSelf)>0?0:1;
  int attempts=1;
  for(;;++attempts) {
   if(direction==1) {
    AsmVec3Cross((float *)&side,(float *)&D_002A051C,(float *)&toTarget);
    distance=row->f8*0.8f;
    S_13910_Vec candidate=add12(pos,mul12(side,distance));
    if(f8->func_00012510((int *)&candidate,f8->f3b0)>row->f8) {
     if(dot12(toSelf,forward)>=0.85f) {if(attempts!=1)break;direction=0;}
     else direction=-1;
    }else goto fb;
   }else if(direction==0) {
    AsmVec3Cross((float *)&side,(float *)&toTarget,(float *)&D_002A051C);
    distance=row->f8*0.8f;
    S_13910_Vec candidate=add12(pos,mul12(side,distance));
    if(f8->func_00012510((int *)&candidate,f8->f3b0)>row->f8) {
     if(dot12(toSelf,forward)>=0.85f) {if(attempts!=1)break;direction=1;}
     else direction=-1;
    }else goto fb;
   }else {
fb:
    {
    S_13910_Vec scaled,candidate;
    do {
     side=S_13910_Vec(-forward.x,-forward.y,-forward.z);
     distance=row->f8*0.8f;
     func_000110E0(&candidate,&pos,func_00011140(&scaled,&side,distance));
    } while(f8->func_00012510((int *)&candidate,f8->f3b0)<=row->f8);
    if(moving) {
     f8->func_00011440(side);
     *(S_13910_Vec *)((char *)this+0xc)=add12(f8->pos,mul12(side,distance));
    }
    goto stop;
    }
   }
  }
  if(moving) goto fb;
 }
stop:
 *(S_13910_Vec *)((char *)this+0xc)=f8->pos;
 void *g=*(void **)((char *)D_002A8490+0x2a4);
 if(g&&!*(int *)((char *)g+0x1c8)) {
  *(int *)((char *)f8+0x3bc)=8;
  (*(S_12B00_Anim **)((char *)f8+0x384))->func_0008AB90(*(int *)((char *)f8+0x3a8));
 }
}

void AIPedFightState::func_00013910()
{
    int a, b;
    f8->func_00011BE0(&a, &b);
    if (a != -1) {
        S_13910_Vec pos;
        pos.z = 0; pos.y = 0; pos.x = 0; pos.w = 1.0f;
        if (D_002B9120->f4e0->ents[a]->f950->fbc != 0) {
            S_13910_Vec t;
            pos = *D_002B9120->f4e0->ents[a]->fa00->f4->func_00199B00(&t, 0);
        } else {
            pos = D_002B9120->f4e0->ents[a]->f834;
        }
        S_13910_Row *row = D_002B9120->f588[f8->f3b4];
        if (f8->func_00012510((int *)&pos, f8->func_000119D0(&pos)) < row->f8) {
            f8->func_001C6DA0(f8->f41c, 1);
            f8->f3d8 = 0;
            fC = 0;
        }
    }
}
