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
void func_00158390(float *a, V4_000562C0 *b, V4_000562C0 *c, float *d);
void func_00055140(float *dst, const float *src);

extern int D_002B8FDC;
extern int D_002B8FD8;
extern V4_000562C0 D_002B8FC8;
void __fastcall _func_000562C0(void *self, int a1, float dt, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    V4s_000562C0 vA8;
    V4s_000562C0 v24;
    V4s_000562C0 v34;
    V4s_000562C0 v98;
    float scale;

    if (!(D_002B8FDC & 1)) {
        D_002B8FDC = D_002B8FDC | 1;
        D_002B8FD8 = (int)func_00026500(D_002A7CB8, D_002B8FDC, &D_00277F44, -1);
    }
    scale = D_00275460 / dt;
    if (!(D_002B8FDC & 2)) {
        D_002B8FDC |= 2;
        D_002B8FC8.z = 0.0f;
        D_002B8FC8.y = 0.0f;
        D_002B8FC8.x = 0.0f;
        D_002B8FC8.w = 1.0f;
    }
    if (*(int *)((char *)self + 0x1e8) == 0) {
        void *a = *(void **)((char *)self + 0x4);
        void *b = *(void **)((char *)a + 0x950);
        if (*(int *)((char *)b + 0xbc) == 0 && *(int *)((char *)a + 0x1584) == 0) {
            void *c = *(void **)((char *)a + 0xa00);
            *(u32 *)((char *)self + 0x10) = *(u32 *)((char *)c + 0x4);
            *(int *)((char *)self + 0xc) = 0;
            *(float *)((char *)self + 0x64) = 102.666664f;
            *(float *)((char *)self + 0x68) = 3.0f;
            *(int *)((char *)self + 0x1e8) = 1;
            D_002B8FC8 = *(V4_000562C0 *)((char *)self + 0x9c);
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
    if (*(void **)((char *)self + 0xc) != 0) {
        void *c = *(void **)((char *)self + 0x4);
        if (*(int *)((char *)c + 0x704) == 0 && *(int *)((char *)c + 0x70c) == 0) {
            if (*(int *)((char *)c + 0x11dc) != 0 && *(int *)((char *)c + 0x470) != 0)
                func_00108B00(c, &vA8);
        } else {
            func_001089C0(c, &vA8);
        }
    }
    vA8.x = scale;
    v24.y = scale;
}
