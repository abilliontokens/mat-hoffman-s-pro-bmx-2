/* 8 functions from 0x001E64D0 to 0x001E7480, found by Ghidra. */
#include "common.h"

extern float D_002755E8;

struct S_func_001E6B50_this {
    float unk_0x0;
    float unk_0x4;
    void func_001E6B50();
};

void func_001E6F70(float *p)
{
    float a = p[0] + p[4];
    float b = p[1] + p[5];
    float d0 = p[0] - p[4];
    float d1 = p[1] - p[5];
    float c = p[6] + p[2];
    float d = p[3] + p[7];
    float d2 = p[2] - p[6];
    float d3 = p[3] - p[7];

    p[0] = c + a;
    p[1] = d + b;
    p[4] = a - c;
    p[5] = b - d;
    p[2] = d0 - d3;
    p[3] = d2 + d1;
    p[6] = d3 + d0;
    p[7] = d1 - d2;
}

void func_001E70B0(float *a, float *b, int n, int step)
{
    int half = n >> 1;
    int k = 2;
    int stride = (step * 2) / half;

    if (k < half) {
        float *pa = a + step;
        float *pb = a;
        float *q = b + n - 2;
        do {
            float c, s, x, y, u, v;
            pa -= stride;
            c = D_002755E8 - *pa;
            s = *pb;
            pb += stride;
            x = b[k] - q[0];
            y = b[k + 1] + q[1];
            k += 2;
            u = x * c - y * s;
            v = y * c + x * s;
            b[k - 2] -= u;
            b[k - 1] -= v;
            q[0] += u;
            q[1] -= v;
            q -= 2;
        } while (k < half);
    }
}

void func_001E7170(float *a, float *b, int n, int step)
{
    int half = n >> 1;
    int k = 2;
    int stride = (step * 2) / half;

    if (k < half) {
        float *pa = a + step;
        float *pb = a;
        float *q = b + n - 2;
        do {
            float c, s, x, y, u, v;
            pa -= stride;
            c = D_002755E8 - *pa;
            s = *pb;
            pb += stride;
            x = b[k] - q[0];
            y = b[k + 1] + q[1];
            k += 2;
            u = x * c + y * s;
            v = y * c - x * s;
            b[k - 2] -= u;
            b[k - 1] -= v;
            q[0] += u;
            q[1] -= v;
            q -= 2;
        } while (k < half);
    }
}

void func_001E5F20(float *dst, float *src);
void func_001E64D0(float *dst, float *src);
void func_001E6B50(float *dst, float *src);
void __fastcall func_001E6D40(float *tw, float *x);
void func_001E7410(int n, float *a, float *b, int k)
{
    if (n == 0x80) {
        float *p = b + k - 8;
        func_001E5F20(a, p);
        func_001E64D0(a + 0x20, b + k - 0x20);
        func_001E5F20(a + 0x40, p);
        func_001E5F20(a + 0x60, p);
        return;
    }
    func_001E6B50(a, b + k - 0x10);
    func_001E6D40(a + 0x10, b);
    func_001E6B50(a + 0x20, b);
    func_001E6B50(a + 0x30, b);
}

