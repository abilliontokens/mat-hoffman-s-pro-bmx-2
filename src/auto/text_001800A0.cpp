/* 6 functions from 0x001800A0 to 0x00180E00, found by Ghidra. */
#include "common.h"

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
#include <xmmintrin.h>
extern float D_002755E8;
struct V_1800 { float x,y,z,w; V_1800(){z=y=x=0;w=1;} V_1800(float a,float b,float c){x=a;y=b;z=c;w=1;} };
struct RayCollisionObject { char pad[0xB0]; float matrix[16]; char padF0[12]; float *pFC; float *p100; void func_001800A0(float *out,float *extent); };
extern "C" void func_0001C680(V_1800 *,V_1800,float *);
static __forceinline float Abs1800(float f){int i=*(int *)&f & 0x7fffffff;return *(float *)&i;}
static __forceinline V_1800 Add1800(float *a,float *b){return V_1800(a[0]+b[0],a[1]+b[1],a[2]+b[2]);}
static __forceinline V_1800 Sub1800(float *a,float *b){return V_1800(a[0]-b[0],a[1]-b[1],a[2]-b[2]);}
static __forceinline V_1800 Mul1800(V_1800 a){return V_1800(a.x*D_002755E8,a.y*D_002755E8,a.z*D_002755E8);}
