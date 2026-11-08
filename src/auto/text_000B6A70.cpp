/* 1 function from 0x000B6A70 to 0x000B7520, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec4B { float x; float y; float z; float w; void func_000B60D0(); };
struct __declspec(align(16)) MatB { float m[16]; };
struct NodeB { void func_001994C0(int a, Vec4B *p, Vec4B *q); };
struct OwnerB { char pad0[0x22c]; NodeB *f22c; };
struct MatSrcB {
    char pad0[0x20];
    Vec4B v20;
    Vec4B v30;
    Vec4B v40;
    char pad50[0x48];
    unsigned char b98;
    char pad99[7];
};
struct ChildB {
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11();
    virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15();
    virtual void c16(); virtual void c17(); virtual void c18(); virtual void c19();
    virtual void c20(); virtual void c21(); virtual void c22(); virtual void c23();
    virtual void c24(); virtual void c25(); virtual void c26(); virtual void c27();
    virtual void c28(); virtual void c29(); virtual void c30();
    virtual void v31(MatB *m);
    char pad4[0x50];
    MatSrcB *f54;
    char pad58[0x3c];
    int *f94;
    int f98;
    char pad9C[0xb];
    unsigned char fA7;
    char padA8[0x28];
    void func_00133660(int a);
    void func_00133700();
    void func_00134770(int a, int b);
    float func_00133F10(int a);
};
struct EObjB { char pad0[0x68]; int f68; };
struct F90B {
    void func_000BA430(Vec4B *a, Vec4B *b, int c, void *d);
};
extern int D_002BA154;
extern int D_002BA148;
extern int D_002B911C;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B9154;
extern float D_002B9150;
extern float D_00278C48;
extern float D_002756DC;
extern float D_00275544;
float func_0014F550(float a);
float func_0014F7E0(float a);
void func_00030AC0(void *a, void *b, void *c);

struct C_000B6A70 {
    char pad0[0x24];
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    int f58;
    int f5C;
    int f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    float f78;
    float f7C;
    int f80;
    float f84;
    OwnerB *f88;
    int f8C;
    F90B *f90;
    int *f94;
    int f98;
    int f9C;
    Vec4B vA0;
    Vec4B vB0;
    Vec4B vC0;
    Vec4B vD0;
    Vec4B vE0;
    Vec4B vF0;
    Vec4B v100;
    Vec4B v110;
    Vec4B v120;
    Vec4B v130;
    Vec4B v140;
    Vec4B v150;
    Vec4B v160;
    Vec4B v170;
    Vec4B v180;
    Vec4B v190;
    Vec4B v1A0;
    Vec4B v1B0;
    Vec4B v1C0;
    ChildB *f1D0;
    ChildB *f1D4;
    void *f1D8;
    void *f1DC;
    void *f1E0;
    EObjB *f1E4;
    EObjB *f1E8;
    void func_000B6A70(int a0);
    void func_000B67C0();
};

void func_000B60D0(Vec4B *, Vec4B *);
#pragma optimize("y", on)
void C_000B6A70::func_000B6A70(int a0)
{
    Vec4B l2;
    Vec4B tv;
    Vec4B l1;
    l2.z = 0.0f;
    l2.y = 0.0f;
    l2.x = 0.0f;
    l2.w = 1.0f;
    l1.z = 0.0f;
    l1.y = 0.0f;
    l1.x = 0.0f;
    l1.w = 1.0f;
    f88->f22c->func_001994C0(0, &l2, &l1);
    if (f74 != 0) {
        f1D0->func_00133700();
        f1D4->func_00133700();
        f1D0->func_00133660(D_002BA154);
        f1D4->func_00133660(D_002BA154);
        f1D0->func_00133660(D_002BA148);
        f1D4->func_00133660(D_002BA148);
    } else {
        f1D0->func_00133660(D_002B911C);
        f1D4->func_00133660(D_002B911C);
    }
    f28 = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    f48 = 0;
    f4C = 0;
    f38 = 0;
    f3C = 0;
    f8C = 0;
    void * volatile src = (char *)f88->f22c + 0xf0;
    func_00030AC0(&vC0, &vA0, src);
    func_00030AC0(&vD0, &vB0, src);
    func_00030AC0(&v100, &vE0, src);
    func_00030AC0(&v110, &vF0, src);
    if (f90 != 0) {
        v120 = v100;
        f90->func_000BA430(&v120, &v180, 0, 0);
        v130 = v110;
        f90->func_000BA430(&v130, &v190, 0, &f9C);
        if (f78 - f7C > v100.y - v120.y) {
            f28 = 1;
        }
        if (f78 - f7C > v110.y - v130.y) {
            f30 = 1;
        }
    }
    if ((D_002B9154 & 1) == 0) {
        D_002B9154 = D_002B9154 | 1;
        D_002B9150 = func_0014F550(0.52359873f);
    }
    if (f24 != 0) {
        MatB mat;
        mat = *(MatB *)src;
        mat.m[3] = vC0.x;
        mat.m[7] = vC0.y;
        mat.m[11] = vC0.z;
        f1D0->v31(&mat);
        mat.m[3] = vD0.x;
        mat.m[7] = vD0.y;
        mat.m[11] = vD0.z;
        f1D4->v31(&mat);
        if (f98 != 0) {
            f1D4->func_00134770(*f94, f98);
            f1D0->func_00134770(*f94, f98);
        } else {
            f1D4->func_00133F10(0);
            f1D0->func_00133F10(0);
        }
        if (f1D0->fA7 & 0x20) {
            MatSrcB * volatile s = f1D0->f54;
            int raw = *(int *)&s->v20.y;
            if (D_00278C48 < *(float *)&(raw = raw & 0x7fffffff, raw) ||
                f1E4->f68 == D_002B9108 || f1E4->f68 == D_002B911C || f1E4->f68 == D_002B910C) {
                v180 = s->v20;
                v120 = s->v30;
                v1B0 = s->v40;
                f40 = (s->b98 >> 1) & 1;
                f28 = 0;
                f2C = 1;
                f38 = (f1E4->f68 == D_002B911C);
            }
            if (D_002B9150 < l1.x * s->v20.x + l1.y * s->v20.y + l1.z * s->v20.z) {
                f1D8 = f1E4;
                f1DC = f1E4;
            }
        }
        if (f1D4->fA7 & 0x20) {
            MatSrcB * volatile s = f1D4->f54;
            int raw = *(int *)&s->v20.y;
            if (D_00278C48 < *(float *)&(raw = raw & 0x7fffffff, raw) ||
                f1E8->f68 == D_002B9108 || f1E8->f68 == D_002B911C || f1E8->f68 == D_002B910C) {
                v190 = s->v20;
                v130 = s->v30;
                v1C0 = s->v40;
                f44 = (s->b98 >> 1) & 1;
                f30 = 0;
                f34 = 1;
                f3C = (f1E8->f68 == D_002B911C);
            }
            if (D_002B9150 < l1.x * s->v20.x + l1.y * s->v20.y + l1.z * s->v20.z) {
                f1E0 = f1E8;
            }
        }
    }
    if (f5C != 0 && (f28 != 0 || f2C != 0)) {
        float dx = v120.x - vC0.x;
        float dy = v120.y - vC0.y;
        float dz = v120.z - vC0.z;
        float square = dz * dz + (dy * dy + dx * dx);
        float len;
        _mm_store_ss(&len, _mm_sqrt_ss(_mm_load_ss(&square)));
        if (f7C + D_002756DC >= len) {
            f5C = 0;
        }
    }
    if (f60 != 0 && (f30 != 0 || f34 != 0)) {
        float dx = v130.x - vD0.x;
        float dy = v130.y - vD0.y;
        float dz = v130.z - vD0.z;
        float square = dz * dz + (dy * dy + dx * dx);
        float len;
        _mm_store_ss(&len, _mm_sqrt_ss(_mm_load_ss(&square)));
        if (f7C + D_002756DC >= len) {
            f60 = 0;
        }
    }
    if ((f28 == 0 && f2C == 0) || f5C != 0 || f38 != 0) {
        f50 = 0;
    } else {
        if (f50 == 0) {
            v140 = v180;
        }
        f50 = 1;
    }
    if ((f30 == 0 && f34 == 0) || f60 != 0 || f3C != 0) {
        f54 = 0;
    } else {
        if (f54 == 0) {
            v150 = v190;
        }
        f54 = 1;
    }
    tv.x = 0.0f;
    tv.y = 0.0f;
    tv.z = 0.0f;
    tv.w = 1.0f;
    if (f50 != 0) {
        volatile float d = func_0014F7E0(v140.z * v180.z + (v140.y * v180.y + v140.x * v180.x));
        Vec4B delta;
        delta.x = v120.x - v160.x;
        delta.y = v120.y - v160.y;
        delta.z = v120.z - v160.z;
        delta.w = 1.0f;
        tv = delta;
        func_000B60D0(&tv, &tv);
        if (f84 < d && D_00275544 < tv.x * v180.x + tv.y * v180.y + tv.z * v180.z) {
            f50 = 0;
            f5C = 1;
        }
        v140 = v180;
        v160 = v120;
    }
    if (f54 != 0) {
        volatile float d = func_0014F7E0(v150.z * v190.z + (v150.y * v190.y + v150.x * v190.x));
        Vec4B delta;
        delta.x = v130.x - v170.x;
        delta.y = v130.y - v170.y;
        delta.z = v130.z - v170.z;
        delta.w = 1.0f;
        tv = delta;
        func_000B60D0(&tv, &tv);
        if (D_00275544 < tv.x * v190.x + tv.y * v190.y + tv.z * v190.z && f84 < d) {
            f54 = 0;
            f60 = 1;
        }
        v150 = v190;
        v170 = v130;
    }
    func_000B67C0();
}
#pragma optimize("", on)
