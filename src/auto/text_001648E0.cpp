/* 3 functions from 0x001648E0 to 0x001653E0, found by Ghidra. */
#include "common.h"
#include <string.h>
struct Vec4_165EF0 {
 float x,y,z,w;
 __forceinline Vec4_165EF0 operator-(const Vec4_165EF0 &b) const { Vec4_165EF0 r; r.x=x-b.x; r.y=y-b.y; r.z=z-b.z; r.w=1.0f; return r; }
 __forceinline Vec4_165EF0 operator*(float s) const { Vec4_165EF0 r; r.x=x*s; r.y=y*s; r.z=z*s; r.w=1.0f; return r; }
 __forceinline Vec4_165EF0 operator+(const Vec4_165EF0 &b) const { Vec4_165EF0 r; r.x=x+b.x; r.y=y+b.y; r.z=z+b.z; r.w=1.0f; return r; }
};
struct C_001648E0_Item {
 virtual void v0();
 virtual void v1();
 virtual void v2(float, Vec4_165EF0 *);
 virtual void v3(float, Vec4_165EF0 *);
 int f4;
};
struct C_001648E0_Arg {
 char pad0[0x14];
 C_001648E0_Item **f14, **f18;
 int f1C, f20;
 char pad24[0x14];
 float f38;
};
struct C_00165D00_Node {
 char pad0[0x170];
 int f170;
 void func_00199300(Vec4_165EF0 *);
 void func_00199650(Vec4_165EF0 *);
};
struct C_00165D00_Elem {
 char pad0[0x34];
 C_00165D00_Node *f34;
 char pad38[8];
};
struct C_001648E0 {
 int f0;
 void *f4;
 int f8;
 int fC;
 char pad10[8];
 int f18;
 char pad1C[0x1D0];
 C_00165D00_Elem *f1EC;
 int *f1F0;
 char pad1F4[0xC];
 Vec4_165EF0 *f200, *f204;
 void func_001648E0(C_001648E0_Arg *, float, int, int *, float);
    void func_00164F80(C_001648E0_Arg *, C_001648E0_Arg *, float, float, float, int, int *, float);
 void func_00164BA0(C_001648E0_Arg *, C_001648E0_Arg *, float, float, int, float);
};
void func_001641B0(void *, void *);
void func_001640D0(void *, int, void *, void *);
void func_0015C7D0(Vec4_165EF0 *, Vec4_165EF0 *, Vec4_165EF0 *, float);
extern float D_00275544;
static __forceinline Vec4_165EF0 Blend_1648E0(const Vec4_165EF0 &a, const Vec4_165EF0 &b, float t) {
 Vec4_165EF0 r;
 float x=b.x-a.x, y=b.y-a.y, z=b.z-a.z;
 r.w=1.0f;
 r.x=x*t+a.x; r.y=y*t+a.y; r.z=z*t+a.z;
 return r;
}

void C_001648E0::func_001648E0(C_001648E0_Arg *a1, float time, int transform, int *mask, float blend)
{
 Vec4_165EF0 pos;
 int i, idx;
 float t;
 f18 = 0;
 t = time * a1->f38;
 for (i=0;i<a1->f20;i++) {
  if (mask && mask[a1->f18[i]->f4]) continue;
  Vec4_165EF0 quat;
  a1->f18[i]->v2(t,&quat);
  if (transform) {
   func_001641B0((void *)fC,&quat);
   idx=f1F0[a1->f18[i]->f4];
  } else idx=a1->f18[i]->f4;
  if (blend>D_00275544 && f200) {
   Vec4_165EF0 old;
   old = f200[idx];
   func_0015C7D0(&quat,&old,&quat,blend);
  }
  f1EC[idx].f34->func_00199300(&quat);
 }
 for (i=0;i<a1->f1C;i++) {
  if (mask && mask[a1->f14[i]->f4]) continue;
  pos.x=pos.y=pos.z=0.0f; pos.w=1.0f;
  a1->f14[i]->v3(t,&pos);
  if (transform) {
   func_001640D0(f4,f1EC[f1F0[a1->f14[i]->f4]].f34->f170,(void *)fC,&pos);
   idx=f1F0[a1->f14[i]->f4];
  } else idx=a1->f14[i]->f4;
  if (blend>D_00275544 && f204) {
   Vec4_165EF0 old;
   old = f204[idx];
   pos = (old-pos)*blend+pos;
  }
  f1EC[idx].f34->func_00199650(&pos);
 }
}

void C_001648E0::func_00164BA0(C_001648E0_Arg *a, C_001648E0_Arg *b, float time, float blend, int flag, float t2)
{
    int i;
    int idx;
    float ft;
    f18 = 0;
    ft = time * a->f38;
    for (i = 0; i < a->f20; i++) {
        Vec4_165EF0 pa;
        Vec4_165EF0 pb;
        a->f18[i]->v2(ft, &pa);
        b->f18[i]->v2(ft, &pb);
        func_0015C7D0(&pb, &pa, &pb, blend);
        if (flag) {
            int mode = (int)fC;
            float y = pb.z;
            float z = pb.w;
            if (mode == 0) pb.y = -pb.y;
            else if (mode == 1) y = -y;
            else if (mode == 2) z = -z;
            pb.y = -pb.y;
            pb.z = -y;
            pb.w = -z;
            idx = f1F0[a->f18[i]->f4];
        } else {
            idx = a->f18[i]->f4;
        }
        if (t2 > D_00275544 && f200) {
            pa = f200[idx];
            func_0015C7D0(&pb, &pa, &pb, t2);
        }
        f1EC[idx].f34->func_00199300(&pb);
    }
    for (i = 0; i < a->f1C; i++) {
        Vec4_165EF0 pa;
        Vec4_165EF0 pb;
        pa.x = 0.0f; pa.y = 0.0f; pa.z = 0.0f; pa.w = 1.0f;
        a->f14[i]->v3(ft, &pa);
        pb.x = 0.0f; pb.y = 0.0f; pb.z = 0.0f; pb.w = 1.0f;
        b->f14[i]->v3(ft, &pb);
        pa = pb - (pb - pa) * blend;
        if (flag) {
            func_001640D0(f4, f1EC[f1F0[a->f14[i]->f4]].f34->f170, (void *)fC, &pa);
            idx = f1F0[a->f14[i]->f4];
        } else {
            idx = a->f14[i]->f4;
        }
        if (t2 > D_00275544 && f204) {
            pb = f204[idx];
            pa = pa + (pb - pa) * t2;
        }
        f1EC[idx].f34->func_00199650(&pa);
    }
}

void C_001648E0::func_00164F80(C_001648E0_Arg *a, C_001648E0_Arg *b, float s0, float s1, float t, int flag, int *mask, float w)
{
    int i, idx;
    float k[2];
    f18 = 0;
    k[1] = s0 * a->f38;
    k[0] = s1 * b->f38;
    for (i = 0; i < a->f20; i++) {
        Vec4_165EF0 v[2];
        a->f18[i]->v2(k[1], &v[0]);
        b->f18[i]->v2(k[0], &v[1]);
        if (mask && mask[b->f18[i]->f4]) {
            v[1] = v[0];
        } else {
            func_0015C7D0(&v[1], &v[0], &v[1], t);
        }
        if (flag) {
            float y = v[1].y;
            float ww = v[1].w;
            if (fC == 0) y = -y;
            else if (fC == 1) v[1].z = -v[1].z;
            else if (fC == 2) ww = -ww;
            v[1].y = -y; v[1].z = -v[1].z; v[1].w = -ww;
            idx = f1F0[a->f18[i]->f4];
        } else {
            idx = a->f18[i]->f4;
        }
        if (w > D_00275544 && f200) {
            v[0] = f200[idx];
            func_0015C7D0(&v[1], &v[0], &v[1], w);
        }
        f1EC[idx].f34->func_00199300(&v[1]);
    }
    for (i = 0; i < a->f1C; i++) {
        Vec4_165EF0 v[2];
        v[0].x = v[0].y = v[0].z = 0.0f; v[0].w = 1.0f;
        v[1].x = v[1].y = v[1].z = 0.0f; v[1].w = 1.0f;
        a->f14[i]->v3(k[1], &v[0]);
        b->f14[i]->v3(k[0], &v[1]);
        if (!(mask && mask[b->f14[i]->f4]))
            v[0] = v[1] - (v[1] - v[0]) * t;
        if (flag) {
            func_001640D0(f4, f1EC[f1F0[a->f14[i]->f4]].f34->f170, (void *)fC, &v[0]);
            idx = f1F0[a->f14[i]->f4];
        } else {
            idx = a->f14[i]->f4;
        }
        if (w > D_00275544 && f204) {
            v[1] = f204[idx];
            v[0] = v[0] + (v[1] - v[0]) * w;
        }
        f1EC[idx].f34->func_00199650(&v[0]);
    }
}

