/* 1 function from 0x000B7520 to 0x000B8AD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

struct S_000B7520_Vec4 {
    float x, y, z, w;
    S_000B7520_Vec4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_000B7520_Vec4(float a,float b,float c) : x(a),y(b),z(c),w(1.0f) {}
    S_000B7520_Vec4 operator+(const S_000B7520_Vec4 &b) const { return S_000B7520_Vec4(x+b.x,y+b.y,z+b.z); }
    S_000B7520_Vec4 operator-(const S_000B7520_Vec4 &b) const { return S_000B7520_Vec4(x-b.x,y-b.y,z-b.z); }
    S_000B7520_Vec4 operator*(float s) const { return S_000B7520_Vec4(x*s,y*s,z*s); }
    float dot(const S_000B7520_Vec4 &b) const { return x*b.x+y*b.y+z*b.z; }
};

static __forceinline void cross7520(S_000B7520_Vec4 *out,const S_000B7520_Vec4 *a,const S_000B7520_Vec4 *b) {
    const float *pa=&a->x; const float *pb=&b->x; float *po=&out->x;
    _mm_storeu_ps(po,_mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(pa),_mm_shuffle_ps(_mm_loadu_ps(pb),_mm_loadu_ps(pb),0xc9)),_mm_mul_ps(_mm_loadu_ps(pb),_mm_shuffle_ps(_mm_loadu_ps(pa),_mm_loadu_ps(pa),0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(pa),_mm_shuffle_ps(_mm_loadu_ps(pb),_mm_loadu_ps(pb),0xc9)),_mm_mul_ps(_mm_loadu_ps(pb),_mm_shuffle_ps(_mm_loadu_ps(pa),_mm_loadu_ps(pa),0xc9))),0xc9));
}
struct Transform7520 {
    void func_001994C0(int, S_000B7520_Vec4 *, S_000B7520_Vec4 *);
    void func_00199110(int,S_000B7520_Vec4 *,S_000B7520_Vec4 *,int,int,int);
    S_000B7520_Vec4 *func_00197F70(S_000B7520_Vec4 *,const S_000B7520_Vec4 *);
    void func_00199960(int,S_000B7520_Vec4 *);
    S_000B7520_Vec4 *func_00198040(S_000B7520_Vec4 *,const S_000B7520_Vec4 *);
    S_000B7520_Vec4 *func_00198120(S_000B7520_Vec4 *,const S_000B7520_Vec4 *);
    void func_00199E50(S_000B7520_Vec4,S_000B7520_Vec4,float);
};
struct Body7520 { void func_0001C710(S_000B7520_Vec4); };
void func_000B60D0(S_000B7520_Vec4 *,const S_000B7520_Vec4 *);
float func_00011170(const S_000B7520_Vec4 *);
extern float D_002755E8, D_002A303C;
struct C_000B7520 {
    char pad0[0x38];
    int f38, f3c, f40, f44, f48, f4c, f50, f54;
    char pad58[0x24];
    float f7c;
    char pad80[8];
    void *f88;
    char pad8c[0x94];
    float f120, f124, f128, f12c;
      float f130, f134, f138;
    char pad13c[0x44];
    float f180, f184, f188, f18c;
      float f190, f194, f198, f19c;
      float f1a0, f1a4, f1a8, f1ac;
    int func_000B67C0();
    int func_000B7520(int a);
};

extern float D_002755E8;
extern float D_002A303C;
extern float D_00275544;
extern float D_002A3038;
extern float D_002A3034;
extern void *D_002B910C;
int C_000B7520::func_000B7520(int a)
{
    func_000B67C0();
    S_000B7520_Vec4 forward, side, front, rear, v5, v6, v7, v8;
    S_000B7520_Vec4 &n1=*(S_000B7520_Vec4 *)&f180;
    S_000B7520_Vec4 &n2=*(S_000B7520_Vec4 *)&f190;
    S_000B7520_Vec4 &normal=*(S_000B7520_Vec4 *)&f1a0;
    if ((f50 && f54) || (f38 && f3c)) {
        if (f40 && f44) {
            normal=S_000B7520_Vec4((f190+f180)*D_002755E8,(f184+f194)*D_002755E8,(f188+f198)*D_002755E8);
            S_000B7520_Vec4 &vel=*(S_000B7520_Vec4 *)((char *)f88+0x130);
            ((Body7520 *)f88)->func_0001C710(normal*(-normal.dot(vel)));
            S_000B7520_Vec4 x,y,z,t;
            (*(Transform7520 **)((char *)f88+0x22c))->func_001994C0(0,&x,&y);
            cross7520(&z,&x,&y);
            t=normal-z*z.dot(normal);
            func_000B60D0(&t,&t);
            cross7520(&x,&t,&z);
            (*(Transform7520 **)((char *)f88+0x22c))->func_00199110(0,&x,&t,0,1,0);
            S_000B7520_Vec4 p, tmp;
            if(f48) p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xa0))+S_000B7520_Vec4(0,-f7c,0);
            else p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xe0));
            front=y*y.dot(*(S_000B7520_Vec4 *)&f120-p);
            if(f4c) p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xb0))+S_000B7520_Vec4(0,-f7c,0);
            else p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xf0));
            rear=y*y.dot(*(S_000B7520_Vec4 *)&f130-p);
            float frontLength=func_00011170(&front);
            if(func_00011170(&rear)>frontLength) {
                front=front*D_002A303C;
                (*(Transform7520 **)((char *)f88+0x22c))->func_00199960(0,&front);
            } else {
                rear=rear*D_002A303C;
                (*(Transform7520 **)((char *)f88+0x22c))->func_00199960(0,&rear);
            }
        } else {
            S_000B7520_Vec4 &vel=*(S_000B7520_Vec4 *)((char *)f88+0x130);
            { float d=-n1.dot(vel); float x=d*n1.x, y=d*n1.y, z=d*n1.z; vel.x+=x; vel.y+=y; vel.z+=z; }
            { float d=-n2.dot(vel); float x=d*n2.x, y=d*n2.y, z=d*n2.z; vel.x+=x; vel.y+=y; vel.z+=z; }
            normal=n1;
            S_000B7520_Vec4 p,q,tmp;
            if(f48) p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xa0))+S_000B7520_Vec4(0,-f7c,0);
else p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xe0));
            front=n1*n1.dot(*(S_000B7520_Vec4 *)&f120-p);
            (*(Transform7520 **)((char *)f88+0x22c))->func_00199960(0,&front);
            if(f48) p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xa0))+S_000B7520_Vec4(0,-f7c,0);
else p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xe0));
            if(f4c) q=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xb0))+S_000B7520_Vec4(0,-f7c,0);
else q=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xf0));
            S_000B7520_Vec4 projected=q+n2*n2.dot(*(S_000B7520_Vec4 *)&f130-q);
            v5=q-p;
            v6=projected-p;
            func_000B60D0(&v5,&v5);
            func_000B60D0(&v6,&v6);
            cross7520(&v7,&v6,&v5);
            float angle=sqrtf(v7.dot(v7));
            if(angle>0.0f) {
                func_000B60D0(&v8,&v7);
                v8=*(*(Transform7520 **)((char *)f88+0x22c))->func_00198040(&tmp,&v8);
                S_000B7520_Vec4 *point=(*(Transform7520 **)((char *)f88+0x22c))->func_00198120(&tmp,(S_000B7520_Vec4 *)&f120);
                (*(Transform7520 **)((char *)f88+0x22c))->func_00199E50(*point,v8,angle);
            }
        }
    } else if(f50 || f38) {
        S_000B7520_Vec4 &vel=*(S_000B7520_Vec4 *)((char *)f88+0x130);
        { float d=-n1.dot(vel); float x=d*n1.x,y=d*n1.y,z=d*n1.z; vel.x+=x;vel.y+=y;vel.z+=z; }
        normal=n1;
        S_000B7520_Vec4 p,tmp;
        if(f48) p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xa0))+S_000B7520_Vec4(0,-f7c,0);
else p=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xe0));
        front=n1*n1.dot(*(S_000B7520_Vec4 *)&f120-p);
        (*(Transform7520 **)((char *)f88+0x22c))->func_00199960(0,&front);
    } else if(f54 || f3c) {
        S_000B7520_Vec4 &vel=*(S_000B7520_Vec4 *)((char *)f88+0x130);
        ((Body7520 *)f88)->func_0001C710(n2*(-n2.dot(vel)));
        normal=n2;
        S_000B7520_Vec4 q,tmp;
        if(f4c) q=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xb0))+S_000B7520_Vec4(0,-f7c,0);
else q=*(*(Transform7520 **)((char *)f88+0x22c))->func_00197F70(&tmp,(S_000B7520_Vec4 *)((char *)this+0xf0));
        front=n2*n2.dot(*(S_000B7520_Vec4 *)&f130-q);
        (*(Transform7520 **)((char *)f88+0x22c))->func_00199960(0,&front);
    }

    if(fabsf(f1a4)<0.15f && *(void **)((char *)this+0x1d8) &&
        *(int *)((char *)*(void **)((char *)this+0x1d8)+0x68)!=(int)D_002B910C) {
        f1a4=0; func_000B60D0(&normal,&normal);
    }
    if(f50 || f54 || f38 || f3c) {
        S_000B7520_Vec4 &velocity=*(S_000B7520_Vec4 *)((char *)f88+0x238);
        func_000B60D0(&forward,&velocity);
        if(fabsf(forward.dot(normal))>0.707f) {
            cross7520(&side,&velocity,&normal);
            cross7520(&forward,&normal,&side);
            func_000B60D0(&forward,&forward);
            velocity=velocity-normal*normal.dot(velocity);
        } else {
            cross7520(&side,&velocity,&normal);
            cross7520(&forward,&normal,&side);
            func_000B60D0(&forward,&forward);
            velocity=forward*sqrtf(velocity.dot(velocity));
        }
    }
    return 1;
}
