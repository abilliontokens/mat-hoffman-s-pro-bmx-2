/* 1 function from 0x000562C0 to 0x000590F0, found by Ghidra. */
#include "common.h"

#include <xmmintrin.h>
static __forceinline float Camera562C0Sqrt(float x) { float r; _mm_store_ss(&r,_mm_sqrt_ss(_mm_set_ss(x))); return r; }
static __forceinline float Camera562C0Min(float x,float y) { float r; _mm_store_ss(&r,_mm_min_ss(_mm_set_ss(x),_mm_set_ss(y))); return r; }
static __forceinline void Camera562C0Cross(float *out,const float *a,const float *b) { __m128 x=_mm_loadu_ps(a), y=_mm_loadu_ps(b); __m128 t=_mm_sub_ps(_mm_mul_ps(x,_mm_shuffle_ps(y,y,0xc9)),_mm_mul_ps(y,_mm_shuffle_ps(x,x,0xc9))); _mm_storeu_ps(out,_mm_shuffle_ps(t,t,0xc9)); }

struct V4_000562C0 { float x, y, z, w; };
struct Camera562C0Obj {
void *func_00026500(void*,int);
void func_00108B00(V4_000562C0*); void func_001089C0(V4_000562C0*);
void func_00199A70(int,V4_000562C0*); void func_001994C0(int,V4_000562C0*,V4_000562C0*);
void func_000560A0(); void func_00197E70(V4_000562C0*);
V4_000562C0 *func_00197F70(float*,V4_000562C0*); V4_000562C0 *func_00197EC0(float*,V4_000562C0*);
void func_00199600(V4_000562C0);
void func_00055A10(V4_000562C0,V4_000562C0,V4_000562C0,V4_000562C0,float);
};
struct V4s_000562C0 : V4_000562C0 {
    V4s_000562C0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

extern void *D_002A7CB8;
extern float D_00277F44;
extern float D_00275460;
extern float D_00277D04;
extern float D_002A1A64, D_002A1A68, D_002A1A6C;
extern float D_002A1A70;
extern float D_002A1A84, D_002A1A88, D_002A1A8C, D_002A1A90;
extern float D_002755E8;
extern float D_00277F38;
extern int D_002B8FC0;

void *__fastcall func_00026500(void *self, int guard, void *a, int b);
void __fastcall func_00108B00(void *self, V4_000562C0 *out);
void __fastcall func_001089C0(void *self, V4_000562C0 *out);
void __fastcall func_00199A70(void *self, int a, V4_000562C0 *out);
void __fastcall func_001994C0(void *self, int a, V4_000562C0 *b, V4_000562C0 *c);
void __fastcall func_000560A0(void *self);
V4_000562C0 *func_000110B0(float *a, float *b);
void func_0001EAB0(float *a, float *b, float *c);
void func_00158390(void *a, V4_000562C0 b, V4_000562C0 c, float *d);
void func_00055140(float *dst, const float *src);
void __fastcall func_00197E70(void *self, V4_000562C0 *out);
V4_000562C0 *__fastcall func_00197F70(void *self, float *a, V4_000562C0 *b);
void __fastcall func_00199600(void *self, V4_000562C0 v);
V4_000562C0 *__fastcall func_00197EC0(void *self, float *a, V4_000562C0 *b);
void __stdcall func_00055A10(V4_000562C0 a, V4_000562C0 b, V4_000562C0 c, V4_000562C0 d, float dt);

extern int D_002B8FDC;
extern int D_002B8FD8;
extern float D_002B8FC8, D_002B8FCC, D_002B8FD0, D_002B8FD4;
void __fastcall _func_000562C0(void *self, int a1, float dt, int *a3, V4_000562C0 *a4, V4_000562C0 *a5, int *a6, V4_000562C0 *a7, V4_000562C0 *a8, int *a9)
{
    float scale;
    V4s_000562C0 vA8;
    V4s_000562C0 v24;
    V4s_000562C0 v34;
    V4s_000562C0 v98;
    V4_000562C0 d;
    float t120;

    if (!(D_002B8FDC & 1)) {
        D_002B8FDC = D_002B8FDC | 1;
        D_002B8FD8 = (int)func_00026500(D_002A7CB8, D_002B8FDC, &D_00277F44, -1);
    }
    scale = D_00275460 / dt;
    if (!(D_002B8FDC & 2)) {
        D_002B8FDC |= 2;
        D_002B8FD0 = 0.0f;
        D_002B8FCC = 0.0f;
        D_002B8FC8 = 0.0f;
        D_002B8FD4 = 1.0f;
    }
    if (*(int *)((char *)self + 0x1e8) == 0) {
        void *a = *(void **)((char *)self + 0x4);
        void *b = *(void **)((char *)a + 0x950);
        if (*(int *)((char *)b + 0xbc) == 0 && *(int *)((char *)a + 0x1584) == 0) {
            void *c = *(void **)((char *)a + 0xa00);
            *(u32 *)((char *)self + 0x10) = *(u32 *)((char *)c + 0x4);
            *(int *)((char *)self + 0xc) = 0;
            *(float *)((char *)self + 0x64) = 102.66661f;
            *(float *)((char *)self + 0x68) = 3.0f;
            *(int *)((char *)self + 0x1e8) = 1;
            D_002B8FC8 = *(float *)((char *)self + 0x9c);
            D_002B8FCC = *(float *)((char *)self + 0xa0);
            D_002B8FD0 = *(float *)((char *)self + 0xa4);
            D_002B8FD4 = *(float *)((char *)self + 0xa8);
        }
    } else if (*(int *)((char *)self + 0x1e8) == 1) {
        void *a = *(void **)((char *)self + 0x4);
        void *b = *(void **)((char *)a + 0x950);
        if (*(int *)((char *)b + 0xbc) == 0 && *(int *)((char *)a + 0x1584) == -1) {
            void *e = *(void **)((char *)a + 0x1ec);
            float f = *(float *)((char *)e + 0x3c);
            f *= D_00277D04;
            *(u32 *)((char *)self + 0xc) = *(u32 *)((char *)a + 0x1e0);
            *(int *)((char *)self + 0x10) = 0;
            *(float *)((char *)self + 0x64) = f;
            *(float *)((char *)self + 0x68) = 3.0f;
            *(int *)((char *)self + 0x1e8) = 0;
            func_000560A0(self);
        }
    }
    if (*(int *)((char *)self + 0xc) != 0) {
        void *a = *(void **)((char *)self + 0x4);
        if (*(int *)((char *)a + 0x704) == 0 && *(int *)((char *)a + 0x70c) == 0) {
            if (*(int *)((char *)a + 0x11dc) != 0 && *(int *)((char *)a + 0x470) != 0)
                func_00108B00(a, &vA8);
            else
                func_00199A70(*(void **)((char *)*(void **)((char *)a + 0xa04) + 4), 0, &vA8);
        } else {
            func_001089C0(a, &vA8);
        }
        func_001994C0(*(void **)((char *)*(void **)((char *)a + 0xa04) + 4), 0, &v24, &v34);
        *(V4_000562C0 *)&v98 = *(V4_000562C0 *)((char *)*(void **)((char *)self + 0xc) + 0x238);
    } else {
        func_00199A70(*(void **)((char *)self + 0x10), 0, &vA8);
        func_001994C0(*(void **)((char *)self + 0x10), 0, &v24, &v34);
        d.w = 1.0f;
        d.x = (vA8.x - *(float *)((char *)self + 0x1c)) * scale;
        d.y = (vA8.y - *(float *)((char *)self + 0x20)) * scale;
        d.z = (vA8.z - *(float *)((char *)self + 0x24)) * scale;
        *(V4_000562C0 *)&v98 = d;
        {
            V4s_000562C0 t58;
            Camera562C0Cross((float *)&t58, (float *)&v24, (float *)((char *)self + 0x2c));
        }
        *(V4_000562C0 *)((char *)self + 0x1c) = vA8;
        *(V4_000562C0 *)((char *)self + 0x2c) = v24;
    }
    if (*(float *)((char *)self + 0x7c) == D_002A1A64
        && *(float *)((char *)self + 0x80) == D_002A1A68
        && *(float *)((char *)self + 0x84) != D_002A1A6C) {
        if (*(int *)((char *)self + 0x40) != 0) {
            *(V4_000562C0 *)((char *)self + 0x7c) = v24;
            *(V4_000562C0 *)((char *)self + 0x8c) = v34;
            *(V4_000562C0 *)((char *)self + 0xac) = v24;
            {
                V4_000562C0 d2;
                d2.w = 1.0f;
                d2.x = vA8.x - v24.x * *(float *)((char *)self + 0x5c);
                d2.y = vA8.y - v24.y * *(float *)((char *)self + 0x5c);
                d2.z = vA8.z - v24.z * *(float *)((char *)self + 0x5c);
                *(V4_000562C0 *)((char *)self + 0xfc) = d2;
            }
        }
    }
    if (*(int *)((char *)self + 0xc) != 0
        && *(int *)((char *)(*(void **)((char *)self + 0x4)) + 0x680) != 0
        && *(int *)((char *)(*(void **)((char *)self + 0x4)) + 0x470) == 0
        && *(int *)((char *)self + 0x1e4) != 0) {
        float len = Camera562C0Sqrt(v98.x * v98.x + v98.z * v98.z + v98.y * v98.y);
        Camera562C0Min(len / *(float *)((char *)self + 0x64), 1.0f);
        func_00055140((float *)((char *)self + 0x7c), (float *)((char *)self + 0x7c));
    }
    if (*(int *)((char *)self + 0xc) != 0) {
        void *g = *(void **)((char *)self + 0x4);
        if (*(int *)((char *)g + 0x1178) != 0
            && *(int *)((char *)g + 0x11d0) != 0
            && *(int *)((char *)self + 0x1e4) != 0
            && *(int *)((char *)g + 0x11dc) != 0
            && *(int *)((char *)self + 0x40) == 0
            && *(int *)((char *)g + 0x470) != 0
            && *(int *)((char *)g + 0x480) != 0) {
            V4_000562C0 old = v24;
            d = old;
            *(V4_000562C0 *)&v24 = *func_000110B0(&t120, (float *)&v34);
            *(V4_000562C0 *)&v34 = old;
            func_0001EAB0((float *)&d, (float *)&v34, (float *)&v24);
            {
                V4_000562C0 g1;
                g1.x = D_002A1A84;
                g1.y = D_002A1A88;
                g1.z = D_002A1A8C;
                g1.w = D_002A1A90;
                V4_000562C0 r1;
                r1.x = v34.y;
                r1.y = v24.y;
                r1.z = v24.z;
                r1.w = v24.w;
                func_00158390(*(void **)((char *)self + 0x1ac), g1, r1, (float *)&v24);
            }
            {
                V4_000562C0 r2;
                r2.x = d.x;
                r2.y = d.y;
                r2.z = v24.w;
                r2.w = v34.x;
                V4_000562C0 r3;
                r3.x = v34.x;
                r3.y = v34.y;
                r3.z = v24.z;
                r3.w = v24.w;
                func_00158390(*(void **)((char *)self + 0x1ac), r2, r3, (float *)&v34);
            }
        }
    }
    {
        V4s_000562C0 vD8;
        V4_000562C0 vE8;
        V4_000562C0 vC8;
        V4_000562C0 up;
        float t;
        void *a = *(void **)((char *)self + 0x4);

        vE8.x = D_002A1A64;
        vE8.y = D_002A1A68;
        vE8.z = D_002A1A6C;
        vE8.w = D_002A1A70;
        t = *(float *)((char *)self + 0x1c4);
        if (*(int *)((char *)self + 0x40) != 0)
            t = 1.0f;
        if (*(int *)((char *)self + 0xc) != 0) {
            up.w = 1.0f;
            up.x = *(float *)((char *)self + 0xfc) + (vA8.x - *(float *)((char *)self + 0xfc)) * t;
            up.y = *(float *)((char *)self + 0x100) + (vA8.y - *(float *)((char *)self + 0x100)) * t;
            up.z = *(float *)((char *)self + 0x104) + (vA8.z - *(float *)((char *)self + 0x104)) * t;
        }
        if (*(int *)((char *)a + 0x470) != 0) {
            V4_000562C0 v48;
            V4_000562C0 *res;
            vC8 = *(V4_000562C0 *)&vA8;
            v48.x = 0.0f;
            v48.y = *(float *)((char *)self + 0x158);
            v48.z = 0.0f;
            v48.w = 1.0f;
            res = func_00197EC0(*(void **)((char *)*(void **)((char *)a + 0x230) + 0x174), &t120, &v48);
            up.x = vC8.x + res->x;
            up.y = vC8.y + res->y;
            up.z = vC8.z + res->z;
            up.w = 1.0f;
            if (*(int *)((char *)self + 0x1e8) != 0) {
                up.x = *(float *)((char *)self + 0xfc) + (vA8.x - *(float *)((char *)self + 0xfc)) * t;
                up.y = *(float *)((char *)self + 0x100) + (vA8.y - *(float *)((char *)self + 0x100)) * t;
                up.z = *(float *)((char *)self + 0x104) + (vA8.z - *(float *)((char *)self + 0x104)) * t;
                vE8.z += *(float *)((char *)self + 0x158) * D_002755E8;
                {
                    void *t1 = *(void **)((char *)*(void **)((char *)a + 0xa00) + 4);
                    func_00197E70(t1, &vC8);
                    func_00199600(t1, up);
                    {
                        V4_000562C0 *r2 = func_00197F70(t1, &t120, &vE8);
                        V4_000562C0 m2;
                        up = *r2;
                        m2.x = vC8.x;
                        m2.y = vC8.y;
                        m2.z = vD8.z;
                        m2.w = vD8.w;
                        func_00199600(t1, m2);
                    }
                }
            }
        } else {
            vE8.y += *(float *)((char *)self + 0x158);
            {
                void *t1 = *(void **)((char *)*(void **)((char *)a + 0xa04) + 4);
                func_00197E70(t1, &vC8);
                func_00199600(t1, up);
                {
                    V4_000562C0 *r2 = func_00197F70(t1, &t120, &vE8);
                    V4_000562C0 m;
                    up = *r2;
                    m.x = vC8.x;
                    m.y = vC8.y;
                    m.z = v34.z;
                    m.w = v34.w;
                    func_00199600(t1, m);
                }
            }
        }
        *(float *)((char *)self + 0x6c) = vA8.x - *(float *)((char *)self + 0x5c) * *(float *)((char *)self + 0x7c);
        *(float *)((char *)self + 0x70) = vA8.y - *(float *)((char *)self + 0x5c) * *(float *)((char *)self + 0x80);
        *(float *)((char *)self + 0x74) = vA8.z - *(float *)((char *)self + 0x5c) * *(float *)((char *)self + 0x84);
        *(float *)((char *)self + 0x78) = 1.0f;
        if (!(D_002B8FDC & 4)) {
            D_002B8FDC = D_002B8FDC | 4;
            D_002B8FC0 = (int)func_00026500(D_002A7CB8, D_002B8FDC, &D_00277F38, -1);
        }
        {
            V4s_000562C0 v108;
            V4_000562C0 mix;
            Camera562C0Cross((float *)&v108, (float *)&v24, (float *)&v34);
            mix.x = v108.x;
            mix.y = vA8.x;
            mix.z = vA8.y;
            mix.w = vA8.z;
            func_00055A10(*(V4_000562C0 *)&v108, mix, *(V4_000562C0 *)&v24, *(V4_000562C0 *)&v34, dt);
        }
        *a3 = 0;
        if (a6 != 0)
            *a6 = *(int *)((char *)self + 0x48);
        if (a4 != 0)
            *(V4_000562C0 *)a4 = *(V4_000562C0 *)((char *)self + 0x6c);
        if (a7 != 0)
            *(V4_000562C0 *)a7 = *(V4_000562C0 *)((char *)self + 0x7c);
        if (a8 != 0)
            *(V4_000562C0 *)a8 = *(V4_000562C0 *)((char *)self + 0x8c);
        if (a5 != 0)
            *a5 = vE8;
        if (a9 != 0)
            *a9 = 0;
        if (*(int *)((char *)self + 0x40) != 0)
            *(int *)((char *)self + 0x40) = 0;
    }
}
