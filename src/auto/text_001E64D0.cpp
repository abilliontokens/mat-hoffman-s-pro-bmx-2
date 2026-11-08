/* 8 functions from 0x001E64D0 to 0x001E7480, found by Ghidra. */
#include "common.h"

extern float D_002755E8;

struct S_func_001E6B50_this {
    float unk_0x0;
    float unk_0x4;
    void func_001E6B50();
};

void func_001E64D0(float *tw, float *x)
{
    float w1 = tw[1];
    float w4 = tw[4];
    float w5 = tw[5];
    float w6 = tw[6];
    float w7 = tw[7];
    float w8 = tw[8];
    float w9 = tw[9];
    float a0 = (x[0] - x[17]);
    float a1 = (x[16] + x[1]);
    float b0 = (x[8] - x[25]);
    float b1 = (x[9] + x[24]);
    float t0 = (b0 - b1) * w1;
    float t1 = (b1 + b0) * w1;
    x[0] = t1 + a0;
    x[1] = t0 + a1;
    x[8] = a0 - t0;
    x[9] = a1 - t1;
    x[16] = (x[2] - x[11]) * w4 - (x[3] + x[10]) * w5;
    x[17] = (x[3] + x[10]) * w4 + (x[2] - x[11]) * w5;
    x[24] = (x[6] - x[15]) * w6 - (x[7] + x[14]) * w7;
    x[25] = (x[7] + x[14]) * w8 + (x[6] - x[15]) * w9;
}

void S_func_001E6B50_this::func_001E6B50()
{
    float* p;
    float s = unk_0x4;
    float a, b, c, d, e, f, g, h;
    float r0, r1, r2, r3, x, y, z, u, v;
    float q0, q1, q2, q3, xx, y2, z2, u2, v2;
    a = p[8] + p[0]; b = p[1] + p[9]; c = p[0] - p[8]; d = p[1] - p[9];
    e = p[4] + p[12]; f = p[5] + p[13]; g = p[4] - p[12]; h = p[5] - p[13];
    r0 = e + a; r1 = f + b; r2 = a - e; x = b - f;
    y = c - h; z = g + d; u = h + c; v = d - g;
    a = p[10] + p[2]; b = p[3] + p[11]; c = p[2] - p[10]; d = p[3] - p[11];
    e = p[6] + p[14]; f = p[7] + p[15]; g = p[6] - p[14]; h = p[7] - p[15];
    q0 = e + a; q1 = f + b; q2 = a - e; xx = b - f;
    y2 = c - h; z2 = g + d; u2 = h + c; v2 = d - g;
    float t1 = (y2 - z2) * s;
    float t2 = (y2 + z2) * s;
    float t3 = (u2 - v2) * s;
    float t4 = (v2 + u2) * s;
    p[8] = t1 + y; p[9] = t2 + z; p[10] = y - t1; p[11] = z - t2;
    p[12] = u - t4; p[13] = t3 + v; p[14] = t4 + u; p[15] = v - t3;
    p[0] = q0 + r0; p[1] = q1 + r1; p[2] = r0 - q0; p[3] = r1 - q1;
    p[4] = r2 - xx; p[5] = q2 + x; p[6] = xx + r2; p[7] = x - q2;
}

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

void __fastcall func_001E7170(float *a, float *b, int n, int step)
{
 int half=n>>1;
 int k=2;
 int stride=step*2/half;
 int back=-stride;
 if(k<half) {
 float *pa=a+step;
 float *pb=a;
 float *q=b+n-2;
 do {
 float c,s,x,y,u,v;
 pa+=back; c=D_002755E8-*pa;
 pb+=stride; s=*pb;
 x=b[k]-q[0];
 k+=2;
 q-=2;
 y=b[k-1]+q[3];
 u=x*c+y*s;
 v=y*c-x*s;
 b[k-2]-=u; b[k-1]-=v;
 q[2]+=u; q[3]-=v;
 }while(k<half);
 }
}

void func_001E7230(int n, float *buf, int total, int split, float *buf2, int top, float *in)
{
    int half = n >> 1;
    int stride = total / n;
    int i = 0;
    int k = 1;
    int j = 4;

    if (half - 1 >= 4) {
        float *p1 = buf + 1;
        float *p2 = buf + split - 1;
        float *pb = in + top;
        do {
            float d, s, u, v;
            i += stride; pb -= stride;
            d = in[i] - *pb;
            s = in[i] + *pb;
            u = s * *p1 - d * *p2;
            v = s * *p2 + d * *p1;
            *p1 = v;
            *p2 = u;
            i += stride; pb -= stride;
            d = in[i] - *pb;
            s = in[i] + *pb;
            u = s * p1[1] - d * p2[-1];
            v = s * p2[-1] + d * p1[1];
            p1[1] = v;
            p2[-1] = u;
            i += stride; pb -= stride;
            d = in[i] - *pb;
            s = in[i] + *pb;
            u = s * p1[2] - d * p2[-2];
            v = s * p2[-2] + d * p1[2];
            p1[2] = v;
            p2[-2] = u;
            i += stride; pb -= stride;
            d = in[i] - *pb;
            s = in[i] + *pb;
            u = s * p1[3] - d * p2[-3];
            v = s * p2[-3] + d * p1[3];
            p1[3] = v;
            p2[-3] = u;
            p1 += 4; p2 -= 4;
            k += 4;
            j += 4;
        } while (j < half);
    }
    if (k < half) {
        float *pa = in + i;
        float *pb = in + top - i;
        float *q1 = buf2 + k;
        float *q2 = buf2 + split - k - 1;
        do {
            float d, s, u;
            pb -= stride;
            d = pa[stride] - *pb;
            pa += stride;
            s = *pb + *pa;
            u = s * *q1 - d * *q2;
            *q1 = d * *q1 + s * *q2;
            *q2 = u;
            q1++; q2--;
            k++;
        } while (k < half);
    }
    buf2[half] *= in[0];
}

void func_001E5F20(float *dst, float *src);
void func_001E64D0(float *dst, float *src);
void func_001E6B50(float *dst, float *src);
static __forceinline void fft16_001E6D40(float *d, float *c)
{
    float s0, s4, s8, sC, s10, s14, s18, s1C, s20, s24, s28, s2C, s30, s34, s38, s3C;
    float k1 = c[1], k4 = c[4], k5 = c[5];
    float a, b;
    float p, q, r2, t;
    s4 = d[0] - d[9];
    sC = *(volatile float *)&d[8] + d[1];
    s28 = *(volatile float *)&d[9] + d[0];
    s2C = d[1] - d[8];
    a = d[4] - d[13]; b = *(volatile float *)&d[12] + d[5];
    s8 = (a - b) * k1; s10 = (a + b) * k1;
    a = d[13] + d[4]; b = d[5] - d[12];
    s30 = (a - b) * k1; s24 = (a + b) * k1;
    a = d[2] - d[11]; b = d[3] + d[10];
    s14 = a * k4 - b * k5; s1C = a * k5 + b * k4;
    a = d[11] + d[2]; b = d[3] - d[10];
    s38 = a * k5 - b * k4; s3C = a * k4 + b * k5;
    a = d[6] - d[15]; b = d[7] + d[14];
    s18 = a * k5 - b * k4; s20 = a * k4 + b * k5;
    a = d[15] + d[6]; b = d[7] - d[14];
    s34 = a * k4 - b * k5; s0 = a * k5 + b * k4;
    p = s8 + s4; q = s10 + sC; r2 = s18 + s14; t = s20 + s1C;
    d[0] = p + r2; d[1] = q + t; d[2] = p - r2; d[3] = q - t;
    p = s4 - s8; q = sC - s10; r2 = s14 - s18; t = s1C - s20;
    d[4] = p - t; d[5] = q + r2; d[6] = p + t; d[7] = q - r2;
    p = s28 - s24; q = s30 + s2C; r2 = s38 - s34; t = s3C - s0;
    d[8] = p + r2; d[9] = q + t; d[10] = p - r2; d[11] = q - t;
    p = s24 + s28; q = s2C - s30; r2 = s34 + s38; t = s0 + s3C;
    d[12] = p - t; d[13] = q + r2; d[14] = p + t; d[15] = q - r2;
}
float *__fastcall func_001E6D40(float *c, float *x);
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
float *__fastcall func_001E6D40(float *c, float *x)
{
    fft16_001E6D40(x, c);
    return x;
}
