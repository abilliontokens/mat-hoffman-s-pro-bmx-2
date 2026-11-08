/* 9 functions from 0x001960F0 to 0x00196C00, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

extern float D_00275544;
extern float D_00275460;
extern float D_0028B010;

extern float D_002755E8;
extern "C" unsigned __int64 __ftol2(double x);
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline void Trunc_00196560(int *out, const float &f)
{
    int * volatile p = out;
    *p = _mm_cvttss_si32(*(__m128 *)&f);
}

struct S_001968C0_Hdr {
    float a;
    u32 b;
};

struct C_00196290 {
    char pad0[0x24];
    int f24;
    int f28;
    char pad2c[4];
    int f30;
    int f34;
    int f38;
    char pad3c[0x48 - 0x3c];
    int f48;
    u32 f4c;
    u8 *f50;
    u8 *f54;
    u8 *f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    u32 f6c;
    u32 f70;
    u32 f74;
    int *f78;
    int *f7c;
    int *f80;
    int *f84;
    int *f88;
    char pad8c[4];
    float *f90;
    float *f94;
    int *f98;
    int *f9c;
    int *fa0;
    float *fa4;
    float *fa8;
    int *fac;
    int *fb0;
    int *fb4;
    u8 *fb8;
    u8 *fbc;
    u8 fc0;
    char padc1[0xc8 - 0xc1];
    u32 fc8;
    u8 *fcc;
    void func_00196290(void);
    int func_001968C0(void);
    void func_00196BD0(void);
    void func_00196350(int param_1);
    int func_001961E0(int param_1, int param_2, int param_3);
    int func_001960F0(float param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
    void func_00196360(u8 *param_1);
    void func_001963D0(void);
    void func_00196560(void);
};

int C_00196290::func_001960F0(float param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
    f70++;
    if (param_1 > 0.0f && f74 < f6c && (fc0 & 0x10) == 0) {
        f78[f74] = param_2;
        if (param_3 != 0) {
            f7c[f74] = param_3;
        } else {
            f7c[f74] = param_2;
        }
        f80[f74] = 1;
        f84[f74] = param_7;
        f88[f74] = param_4;
        f90[f74] = param_1;
        f94[f74] = D_00275460 / param_1;
        fa4[f74] = (float)param_5;
        fa8[f74] = (float)param_6;
        return ++f74 - 1;
    }
    return -1;
}

int C_00196290::func_001961E0(int param_1, int param_2, int param_3)
{
    f70++;
    if (f74 < f6c && (fc0 & 0x10) == 0) {
        f78[f74] = param_1;
        if (param_2 != 0) {
            f7c[f74] = param_2;
        } else {
            f7c[f74] = param_1;
        }
        f80[f74] = 2;
        f84[f74] = param_3;
        f88[f74] = 4;
        f90[f74] = 1.0f;
        f94[f74] = 1.0f;
        return ++f74 - 1;
    }
    return -1;
}

void C_00196290::func_00196290(void)
{
    u32 i;
    fc0 &= 0xdf;
    f5c = f6c * 4 + 8;
    f60 = f6c * 5 + 8;
    f68 = 0;
    f24 = 0;
    f34 = 0;
    f38 = 0;
    f28 = 0;
    f48 = 0;
    f4c = 0x80000000;
    f64 = 0;
    f54 = f50;
    if (fc0 & 1) {
        f58 = fcc;
    } else {
        f58 = f50;
    }
    for (i = 0; i < f6c; i++) {
        f98[i] = 0;
        fa0[i] = 0;
        f9c[i] = 0;
        fac[i] = 0;
        fb4[i] = 0;
        fb0[i] = 0;
        fb8[i] = 0;
    }
}

void C_00196290::func_00196350(int param_1)
{
    func_00196290();
    f28 = param_1;
}

void C_00196290::func_00196BD0(void)
{
    if (fc0 & 1) {
        memcpy(fcc, f50, fc8);
    }
}

inline void C_00196290::func_00196360(u8 *param_1)
{
    f54[0] = param_1[0];
    f54[1] = param_1[1];
    f54[2] = param_1[2];
    f54[3] = param_1[3];
    f54[4] = param_1[4];
    f54[5] = param_1[5];
    f54[6] = param_1[6];
    f54[7] = param_1[7];
    f54 += 8;
    f68 += 8;
    f64 += 8;
}

void C_00196290::func_001963D0(void)
{
    int header[2];
    u32 i;
    if ((u32)(f5c + f68 + 8) < fc8) {
        header[0] = f24;
        header[1] = f64 | 0x80000000;
        f64 = 0;
        func_00196360((u8 *)header);
        for (i = 0; i < f74; ++i) {
            if (f80[i] == 0) {
                u8 *p = (u8 *)f78[i];
                f54[0] = p[0];
                f54[1] = p[1];
                f54[2] = p[2];
                f54[3] = p[3];
                f54 += 4;
                f68 += 4;
                f64 += 4;
                f98[i] = *(int *)f78[i];
            } else if (f80[i] == 1) {
                u8 *p = (u8 *)f78[i];
                f54[0] = p[0];
                f54[1] = p[1];
                f54[2] = p[2];
                f54[3] = p[3];
                f54 += 4;
                f68 += 4;
                f64 += 4;
                fac[i] = *(int *)f78[i];
            } else if (f80[i] == 2) {
                f54[0] = *(u8 *)f78[i];
                f54++;
                f68++;
                f64++;
            }
        }
        S_001968C0_Hdr h;
        h.a = -999.0f;
        h.b = f64 | 0x80000000;
        *(S_001968C0_Hdr *)f54 = h;
    } else if (!(fc0 & 0x80)) {
        fc0 |= 0x80;
    }
}

void C_00196290::func_00196560(void)
{
    u32 i;
    if ((u32)(f60 + f68 + 8) < fc8) {
        int q;
        int hdr[2];
        hdr[0] = f24;
        hdr[1] = f64;
        f64 = 0;
        func_00196360((u8 *)hdr);
        C_00196290 *p = this;
        for (i = 0; i < p->f74; i++) {
            int type = p->f80[i];
            if (type == 0) {
                float v = *(float *)p->f78[i];
                float diff;
                hdr[0] = -1;
                diff = v - ((float *)p->f98)[i];
                if (!(diff < D_00275544)) {
                    hdr[0] = 1;
                }
                q = (int)(diff * p->f90[i] + hdr[0] * D_002755E8);
                if (q <= 126 && q >= -127) {
                    signed char c = (signed char)q;
                    *p->f54 = c;
                    f54++;
                    f68++;
                    f64++;
                    ((float *)f98)[i] = c * f94[i] + v - diff;
                } else {
                    *p->f54 = 0x7f;
                    f54++;
                    f68++;
                    f64++;
                    f54[0] = ((u8 *)&v)[0];
                    f54[1] = ((u8 *)&v)[1];
                    f54[2] = (u8)((u16 *)&v)[1];
                    f54[3] = (u8)(((u16 *)&v)[1] >> 8);
                    f54 += 4;
                    f68 += 4;
                    f64 += 4;
                    ((float *)f98)[i] = v;
                }
            } else if (type == 1) {
                int iv = *(int *)p->f78[i];
                int idiff = iv - p->fac[i];
                float fd = (float)idiff;
                hdr[0] = -1;
                if (!(fd < D_00275544)) {
                    hdr[0] = 1;
                }
                AsmFloatToInt(fd * p->f90[i] + hdr[0] * D_002755E8, &q);
                if (q <= 126 && q >= -127) {
                    signed char c = (signed char)q;
                    *f54 = c;
                    f54++;
                    f68++;
                    f64++;
                    int r;
                    AsmFloatToInt(c * f94[i], &r);
                    fac[i] = r - idiff + iv;
                } else {
                    *f54 = 0x7f;
                    f54++;
                    f68++;
                    f64++;
                    f54[0] = ((u8 *)&iv)[0];
                    f54[1] = ((u8 *)&iv)[1];
                    f54[2] = (u8)((u16 *)&iv)[1];
                    f54[3] = (u8)(((u16 *)&iv)[1] >> 8);
                    f54 += 4;
                    f68 += 4;
                    f64 += 4;
                    fac[i] = iv;
                }
            } else if (type == 2) {
                *p->f54 = *(u8 *)p->f78[i];
                f54++;
                f68++;
                f64++;
            }
            p = this;
        }
        S_001968C0_Hdr h;
        h.a = -999.0f;
        h.b = p->f64 | 0x80000000;
        *(S_001968C0_Hdr *)p->f54 = h;
    } else if (!(fc0 & 0x80)) {
        fc0 |= 0x80;
    }
}

int C_00196290::func_001968C0(void)
{
    C_00196290 * volatile self = this;
    S_001968C0_Hdr h;
    u32 i;
    char c;
    int t;

    h = *(S_001968C0_Hdr *)f58;
    if (h.a == D_0028B010) {
        return 1;
    }
    f30 = f48;
    {
        C_00196290 *p = self;
        *(S_001968C0_Hdr *)&p->f48 = *(S_001968C0_Hdr *)p->f58;
    }
    {
        C_00196290 *p = self;
        p->f58 += 8;
    }
    if ((self->f4c & 0x80000000) == 0x80000000) {
        for (i = 0; i < self->f74; i++) {
            C_00196290 *p = self;
            int m = p->f80[i];
            if (m == 0) {
                p->f9c[i] = p->fa0[i];
                { C_00196290 *q = self; q->fa0[i] = *(int *)q->f58; }
                { C_00196290 *q = self; q->f58 += 4; }
                { C_00196290 *q = self; if ((q->f4c & 0x7fffffff) == 0) q->f9c[i] = q->fa0[i]; }
            } else if (m == 1) {
                p->fb0[i] = p->fb4[i];
                { C_00196290 *q = self; q->fb4[i] = *(int *)q->f58; }
                { C_00196290 *q = self; q->f58 += 4; }
                { C_00196290 *q = self; if ((q->f4c & 0x7fffffff) == 0) q->fb0[i] = q->fb4[i]; }
            } else if (m == 2) {
                p->fbc[i] = p->fb8[i];
                { C_00196290 *q = self; q->fb8[i] = *q->f58; }
                { C_00196290 *q = self; q->f58 += 1; }
                { C_00196290 *q = self; if ((q->f4c & 0x7fffffff) == 0) q->fbc[i] = q->fb8[i]; }
            }
        }
    } else {
        for (i = 0; i < self->f74; i++) {
            C_00196290 *p = self;
            int m = p->f80[i];
            if (m == 0) {
                p->f9c[i] = p->fa0[i];
                { C_00196290 *q = self; c = *(char *)q->f58; q->f58++; }
                if (c == 0x7f) {
                    { C_00196290 *q = self; q->fa0[i] = *(int *)q->f58; }
                    { C_00196290 *q = self; q->f58 += 4; }
                } else {
                    C_00196290 *q = self;
                    *(float *)&q->fa0[i] += (float)c * q->f94[i];
                }
            } else if (m == 1) {
                p->fb0[i] = p->fb4[i];
                { C_00196290 *q = self; c = *(char *)q->f58; q->f58++; }
                if (c == 0x7f) {
                    { C_00196290 *q = self; q->fb4[i] = *(int *)q->f58; }
                    { C_00196290 *q = self; q->f58 += 4; }
                } else {
                    C_00196290 *q = self;
                    t = (int)((float)c * q->f94[i]);
                    { C_00196290 *r = self; r->fb4[i] += t; }
                }
            } else if (m == 2) {
                { C_00196290 *q = self; q->fb8[i] = *q->f58; }
                { C_00196290 *q = self; q->f58 += 1; }
            }
        }
    }
    return 0;
}

