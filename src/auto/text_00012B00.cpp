/* 2 functions from 0x00012B00 to 0x00013A40, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>

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
struct S_13910_G {
    char pad[0x4e0]; struct S_13910_Arr *f4e0;
    char pad2[0x588 - 0x4e4]; S_13910_Row **f588;
};
struct S_13910_Arr { char pad[0x1a8]; S_13910_Ent *ents[1]; };
struct S_13910_Owner {
    char pad1[0x3b4]; int f3b4; char pad2[0x3d8 - 0x3b8]; int f3d8; char pad3[0x41c - 0x3dc]; int f41c;
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
static __forceinline S_13910_Vec sub12(const S_13910_Vec &a, const S_13910_Vec &b) { return S_13910_Vec(a.x-b.x,a.y-b.y,a.z-b.z); }
static __forceinline S_13910_Vec add12(const S_13910_Vec &a, const S_13910_Vec &b) { S_13910_Vec r; r.x=a.x+b.x; r.y=a.y+b.y; r.z=a.z+b.z; r.w=1; return r; }
static __forceinline S_13910_Vec mul12(const S_13910_Vec &a, float b) { S_13910_Vec r; r.x=a.x*b; r.y=a.y*b; r.z=a.z*b; r.w=1; return r; }
static __forceinline float dot12(const S_13910_Vec &a, const S_13910_Vec &b) { return a.x*b.x+a.y*b.y+a.z*b.z; }
static __forceinline void cross12(S_13910_Vec *out,const S_13910_Vec *a,const S_13910_Vec *b) {
 _mm_storeu_ps(&out->x,_mm_shuffle_ps(
 _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x),_mm_shuffle_ps(_mm_loadu_ps(&b->x),_mm_loadu_ps(&b->x),0xc9)),_mm_mul_ps(_mm_loadu_ps(&b->x),_mm_shuffle_ps(_mm_loadu_ps(&a->x),_mm_loadu_ps(&a->x),0xc9))),
 _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x),_mm_shuffle_ps(_mm_loadu_ps(&b->x),_mm_loadu_ps(&b->x),0xc9)),_mm_mul_ps(_mm_loadu_ps(&b->x),_mm_shuffle_ps(_mm_loadu_ps(&a->x),_mm_loadu_ps(&a->x),0xc9))),0xc9));
}
static __forceinline float sqrt12(float f) { float r; _mm_store_ss(&r,_mm_sqrt_ss(_mm_load_ss(&f))); return r; }

void AIPedFightState::func_00012B00(int a0)
{
    int a, b;

    f1c = D_002A8490->f238 + 0x177;
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
