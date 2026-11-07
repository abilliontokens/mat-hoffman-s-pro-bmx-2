/* 1 function from 0x000A9ED0 to 0x000AADB0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>

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

void func_000A9ED0(void)
{
}
