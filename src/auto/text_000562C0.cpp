/* 1 function from 0x000562C0 to 0x000590F0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct V4_000562C0 { float x, y, z, w; };
struct V4s_000562C0 : V4_000562C0 {
    V4s_000562C0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

extern void *D_002A7CB8;
extern float D_00277F44;
extern float D_00275460;
extern float D_00277D04;
extern float D_002A1A64, D_002A1A68, D_002A1A6C;
extern float D_002A1A84, D_002A1A88, D_002A1A8C, D_002A1A90;

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

extern int D_002B8FDC;
extern int D_002B8FD8;
extern float D_002B8FC8, D_002B8FCC, D_002B8FD0, D_002B8FD4;
void __fastcall _func_000562C0(void *self, int a1, float dt, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
            *(float *)((char *)self + 0x64) = 102.66632f;
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
            float f = *(float *)((char *)e + 0x3c) * D_00277D04;
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
        void *cam = *(void **)((char *)a + 0xa04);
        if (*(int *)((char *)a + 0x704) == 0 && *(int *)((char *)a + 0x70c) == 0) {
            if (*(int *)((char *)a + 0x11dc) != 0 && *(int *)((char *)a + 0x470) != 0)
                func_00108B00(a, &vA8);
            else
                func_00199A70(*(void **)((char *)cam + 0x4), 0, &vA8);
        } else {
            func_001089C0(a, &vA8);
        }
        func_001994C0(*(void **)((char *)cam + 0x4), 0, &v24, &v34);
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
            AsmVec3Cross((float *)&t58, (float *)&v24, (float *)((char *)self + 0x2c));
        }
        *(V4_000562C0 *)((char *)self + 0x1c) = vA8;
        *(V4_000562C0 *)((char *)self + 0x2c) = v24;
    }
    if (*(float *)((char *)self + 0x7c) == D_002A1A64
        && *(float *)((char *)self + 0x80) == D_002A1A68
        && *(float *)((char *)self + 0x84) == D_002A1A6C) {
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
        float len = AsmSqrtF(v98.x * v98.x + v98.z * v98.z + v98.y * v98.y);
        AsmMinF(len / *(float *)((char *)self + 0x64), 1.0f);
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
        }
    }
}
