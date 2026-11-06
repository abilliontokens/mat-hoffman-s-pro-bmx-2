/* 6 functions from 0x001800A0 to 0x00180E00, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern float D_002755E8;
static __forceinline void Xform1800(float *out,const float *in,const float *m){__m128 v = _mm_loadu_ps(in);
__m128 r0 = _mm_load_ps(m);
_mm_storeh_pi((__m64 *)(out + 2), v);
__m128 r1 = _mm_load_ps(m+4);
out[3]=1.0f;
__m128 r2 = _mm_load_ps(m+8);
v=_mm_loadh_pi(v,(__m64 *)(out+2));
r0=_mm_mul_ps(r0,v);r1=_mm_mul_ps(r1,v);r2=_mm_mul_ps(r2,v);
__m128 t=r0;r0=_mm_unpacklo_ps(r0,r1);t=_mm_unpackhi_ps(t,r1);
__m128 h=_mm_movehl_ps(r2,r2);
r0=_mm_add_ps(r0,t);r2=_mm_add_ps(r2,h);t=_mm_movehl_ps(t,r0);
r0=_mm_movelh_ps(r0,r2);t=_mm_shuffle_ps(t,r2,0x14);
_mm_storeu_ps(out,_mm_add_ps(r0,t));out[3]=1.0f;}

struct V_1800 { float x,y,z,w; V_1800(){z=y=x=0;w=1;} V_1800(const float &a,const float &b,const float &c){x=a;y=b;z=c;w=1;} };
struct RayCollisionObject { char pad[0xB0]; float matrix[16]; char padF0[12]; float *pFC; float *p100; void func_001800A0(float *out,float *extent); };
extern "C" void func_0001C680(V_1800 *,V_1800,float *);
static __forceinline float Abs1800(float f){int i=*(int *)&f & 0x7fffffff;return *(float *)&i;}
static __forceinline V_1800 Add1800(float *a,float *b){return V_1800(a[0]+b[0],a[1]+b[1],a[2]+b[2]);}
static __forceinline V_1800 Sub1800(float *a,float *b){return V_1800(a[0]-b[0],a[1]-b[1],a[2]-b[2]);}
static __forceinline V_1800 Mul1800(V_1800 a){return V_1800(a.x*D_002755E8,a.y*D_002755E8,a.z*D_002755E8);}

static inline void FloatToInt(int *out, float f) { *out = (int)f; }
struct C_001805F0 {
    char pad0[0x104];
    int unk104;
    void func_001805F0(void);
};

struct C_00180DD0 {
    void *vtbl;
    void func_0017F0B0();
    void func_00133E60();
    void *func_00180DD0(unsigned int flags);
};

struct C_001804F0 {
    short unk0;
    short unk2;
    short unk4;
    C_001804F0 *func_001804F0(float *p);
};

struct C_001805C0 {
    C_001805C0 *func_001805C0(void);
};

extern float D_002EFD9C, D_002AB30C;
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
extern int func_00128910;
extern void *D_002BEAAC;
struct Reader180600 {
    void func_0013C8A0(int handle, void *dst, int size, int count);
    int func_0013C960(int handle, void *dst, int size);
};
struct Rec180600 {
    char pad0[4];
    float f4;
    float f8, fC, f10, f14, f18, f1C, f20;
};
struct C_00180600 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void func_000EBE90v();
    char pad4[0xAC];
    float mB0, mB4, mB8, mBC, mC0, mC4, mC8, mCC, mD0, mD4, mD8, mDC, mE0, mE4, mE8, mEC;
    char padF0[4];
    int fF4;
    float fF8;
    Rec180600 *fFC;
    Rec180600 *f100;
    short fF0s;
    void func_00180600(int a0, int a1);
};


C_001804F0 *C_001804F0::func_001804F0(float *p) {
    extern float D_002F0798;
    extern float D_002891BC;
    float f0 = D_002F0798 * p[0];
    float f1 = D_002F0798 * p[1];
    float f2 = D_002F0798 * p[2];
    int tmp;
    FloatToInt(&tmp, D_002891BC * f0);
    unk0 = (short)tmp;
    FloatToInt(&tmp, D_002891BC * f1);
    unk2 = (short)tmp;
    FloatToInt(&tmp, D_002891BC * f2);
    unk4 = (short)tmp;
    return this;
}

C_001805C0 *C_001805C0::func_001805C0(void) {
    int *p = (int *)((char *)this + 4);
    for (int i = 2; i != 0; i--) {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    }
    return this;
}

void C_001805F0::func_001805F0(void) {
    extern int D_002B9344;
    int func_0017F550(...);
    D_002B9344 = unk104;
    func_0017F550();
}

void *C_00180DD0::func_00180DD0(unsigned int flags) {
    extern int D_002891C4;
    void func_001E891B(void *);
    vtbl = (void *)&D_002891C4;
    func_0017F0B0();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

