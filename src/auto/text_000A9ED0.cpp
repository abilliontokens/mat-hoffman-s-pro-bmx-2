/* 1 function from 0x000A9ED0 to 0x000AADB0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

struct Vec4_A9ED0 {
    float x,y,z,w;
    Vec4_A9ED0() { x=y=z=0.0f;w=1.0f; }
};
struct Item_A9ED0 {
    char pad[0x174];
    Item_A9ED0 *f174;
    void func_00199A70(int, float *);
    void func_00197E70(float *);
    void func_001994C0(int,float *,float *);
    void func_00199110(int,float *,float *,int,int,int);
    void func_001983A0();
    void func_00198390();
    void func_00182530(float);
    void func_0019AC50();
};
struct Sub_A9ED0 {
    char pad[0x104];
    int f104;
    char pad108[4];
    int f10C;
    float f110,f114,f118;
    Vec4_A9ED0 f11C;
    char pad12C[0x30];
    Item_A9ED0 **f15C;
};
struct BMXCameraFacingObjects {
    char pad[0x24];
    int f24;
    Sub_A9ED0 **f28;
    void func_000A9ED0();
    void func_001578D0();
};
extern void *D_002EFDB8;
extern float D_0027ADC0,D_0027ADB0,D_0027ADA0;
extern float D_002A2734,D_002A2738,D_002A273C;
extern float D_002A2744,D_002A2748,D_002A274C;
extern Vec4_A9ED0 D_002A2754;
extern float D_00275544;
extern "C" float func_001E8F70(float);
extern "C" void func_00158390(float,Vec4_A9ED0,Vec4_A9ED0,Vec4_A9ED0 *);
static __forceinline void normalize_A9ED0(float * volatile out,float * volatile in) {
    __m128 v=_mm_loadu_ps(in),sq=_mm_mul_ps(v,v);
    __m128 len=_mm_add_ss(_mm_movehl_ps(sq,sq),sq);
    len=_mm_add_ss(len,_mm_shuffle_ps(sq,sq,0xe1));
    __m128 minv=_mm_load_ss(&D_0027ADC0);
    len=_mm_add_ss(len,_mm_and_ps(_mm_cmplt_ss(len,minv),minv));
    __m128 r=_mm_rsqrt_ss(len);
    __m128 t=_mm_mul_ss(_mm_mul_ss(len,r),r);
    __m128 scale=_mm_mul_ss(_mm_mul_ss(r,_mm_load_ss(&D_0027ADA0)),_mm_sub_ss(_mm_load_ss(&D_0027ADB0),t));
    scale=_mm_shuffle_ps(scale,scale,0);
    _mm_storeu_ps(out,_mm_mul_ps(scale,v));
}
static __forceinline void cross_A9ED0(Vec4_A9ED0 * volatile out,const Vec4_A9ED0 * volatile a,const Vec4_A9ED0 * volatile b) {
    __m128 va=_mm_loadu_ps(&a->x),vb=_mm_loadu_ps(&b->x);
    __m128 c=_mm_sub_ps(_mm_mul_ps(va,_mm_shuffle_ps(vb,vb,0xc9)),_mm_mul_ps(vb,_mm_shuffle_ps(va,va,0xc9)));
    _mm_storeu_ps(&out->x,_mm_shuffle_ps(c,c,0xc9));
}

void BMXCameraFacingObjects::func_000A9ED0()
{
    BMXCameraFacingObjects * volatile self=this;
    Vec4_A9ED0 P,c2,axis,v2,rot,pos,c3,q;
    Vec4_A9ED0 cam=*(Vec4_A9ED0*)(*(char**)((char*)D_002EFDB8+4)+0x170);
    Vec4_A9ED0 B;
    float len;
    for(int i=0;i<self->f24;i++) {
        Sub_A9ED0 *sub=self->f28[i];
        if(!sub->f15C) continue;
        for(int j=0;j<sub->f104;j++) {
            Item_A9ED0 *obj=sub->f15C[j];
            if(!obj)continue;
            if(obj->f174) obj->f174->func_00199A70(0,&pos.x);
            else obj->func_00197E70(&pos.x);
            Vec4_A9ED0 delta;
            delta.x=pos.x-cam.x;delta.y=pos.y-cam.y;delta.z=pos.z-cam.z;delta.w=1.0f;
            P=delta;
            float sq=delta.z*delta.z+delta.y*delta.y+delta.x*delta.x;
            len=AsmSqrtF(sq);
            if(self->f28[i]->f10C) {
                AsmVec3Normalize(&P.x,&P.x);
                q=self->f28[i]->f11C;
                if(q.x==D_002A2734 && q.y==D_002A2738 && q.z==D_002A273C) {
                    rot=P;
                } else {
                    self->f28[i]->f15C[j]->func_001994C0(0,&axis.x,&v2.x);
                    double d=q.y*axis.y+q.x*axis.x+q.z*axis.z;
                    B=axis;
                    Vec4_A9ED0 projected;
                    projected.x=axis.x-q.x*d;projected.y=axis.y-q.y*d;projected.z=axis.z-q.z*d;projected.w=1.0f;
                    axis=projected;
                    AsmVec3Normalize(&axis.x,&axis.x);
                    double d2=q.y*P.y+q.x*P.x+q.z*P.z;
                    Vec4_A9ED0 projected2;
                    projected2.x=P.x-q.x*d2;projected2.y=P.y-q.y*d2;projected2.z=P.z-q.z*d2;projected2.w=1.0f;
                    P=projected2;
                    AsmVec3Normalize(&P.x,&P.x);
                    float dot=axis.x*P.x+axis.y*P.y+axis.z*P.z;
                    AsmVec3Cross(&q.x,&axis.x,&P.x);
                    AsmVec3Normalize(&q.x,&q.x);
                    func_00158390((float)acos(dot),B,q,&rot);
                    AsmVec3Normalize(&rot.x,&rot.x);
                }
                AsmVec3Cross(&c3.x,&rot.x,&D_002A2754.x);
                AsmVec3Normalize(&c3.x,&c3.x);
                AsmVec3Cross(&c2.x,&c3.x,&rot.x);
                AsmVec3Normalize(&c2.x,&c2.x);
                self->f28[i]->f15C[j]->func_00199110(0,&rot.x,&c2.x,0,1,0);
            }
            int i0=(int)self->f28[i]->f110;
            int i1=(int)self->f28[i]->f114;
            int i2=(int)self->f28[i]->f118;
            float t0=(float)i0;
            if(t0>D_00275544) {
                if(len>t0) {
                    self->f28[i]->f15C[j]->func_001983A0();
                    if(i0+i2>len)self->f28[i]->f15C[j]->func_00182530((len-t0)/i2);
                    else self->f28[i]->f15C[j]->func_00182530(1.0f);
                } else self->f28[i]->f15C[j]->func_00198390();
            }
            float t1=(float)i1;
            if(t1>D_00275544) {
                if(len<t1) {
                    self->f28[i]->f15C[j]->func_001983A0();
                    if(i1-i2<len)self->f28[i]->f15C[j]->func_00182530((t1-len)/i2);
                    else self->f28[i]->f15C[j]->func_00182530(1.0f);
                } else self->f28[i]->f15C[j]->func_00198390();
            }
            self->f28[i]->f15C[j]->func_0019AC50();
        }
    }
    self->func_001578D0();
}
