/* 9 functions from 0x0019EEC0 to 0x0019FD20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_0028B25C;

void func_001E891B(void *p);

extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);

extern char D_002A4C10[];
extern char D_002A4C0F[];
extern char D_00284644;
extern char D_0028463C;
extern char D_00284638;
extern int D_00275FB4;

void func_001E8BF0(char *dst, void *src, int n);
void func_00030F30(char *s, void *p);
int func_001EA426(void *a, void *b);
void func_00132E90(int a, void *b);

struct C_002BEAAC {
    int func_0013D310(char *a, void *b, int *c, int *d, int e);
    void func_0013C8A0(int a, void *b, int c, int d);
    void func_0013C110(int a);
    int func_0013B1F0(int h, void *obj);
};
extern C_002BEAAC *D_002BEAAC;

struct F3_F780 { float x, y, z; };
struct M_F780 { void func_000264C0(void *src); char pad[0x40]; };
struct N_F780 {
    char pad0[0xf0]; char fF0[0x40];
    char pad130[0x1b0 - 0x130];
    F3_F780 f1B0;
    short f1BC; char pad1be[6];
    int f1C4, f1C8; unsigned short f1CC, f1CE;
};
struct D_F780 {
    int f0, f4, f8; int *fC; int *f10; int *f14; int *f18;
    F3_F780 *f1C; M_F780 *f20; int pad24; short *f28; int f2C;
};
void *func_001E8AA5(int size);
struct C_0019F9B0 {
    char pad0[0x190]; int f190; char pad194[4]; int f198; char *f19C; N_F780 **f1A0; D_F780 *f1A4;
    void func_0019EB10(int h);
    void func_0019ECB0(char *path, int *p);
    void func_0019F780(char *path, int h);
    int func_0019F9B0(int a1, char *path);
};

void *func_001E8A44(int size);
void func_00133D80(void *p);
extern int D_002B92E0;
extern int D_002B92F0;

extern "C" unsigned __int64 __rdtsc();
#pragma intrinsic(__rdtsc)
extern const float D_00275460;
extern float D_0028B320;

/* one 0x50-byte timer record */
struct S_0019FC80_Timer {
    unsigned __int64 start;
    float f8;
    float fC;
    float f10;
    float f14;
    char pad18[8];
    float f20;
    float f24;
    char pad28[0x50 - 0x28];
};

struct C_0019FC80 {
    char pad0[0x28];
    float f28;
    char pad2C[0x38 - 0x2C];
    S_0019FC80_Timer timers[8];
    void func_0019FC80(int i);
};

/* (0, 0, 0, 1) vector */
struct V4_0019F500 {
    float x;
    float y;
    float z;
    float w;
    V4_0019F500() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_0019F500(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

/* the 0x38-byte transform stored at +0x54 */
struct S_0019F500_Xform {
    V4_0019F500 a;
    V4_0019F500 b;
    V4_0019F500 c;
    float f30;
    float f34;
    S_0019F500_Xform *Init(void)
    {
        a.z = 0.0f;
        a.y = 0.0f;
        a.x = 0.0f;
        a.w = 1.0f;
        b.z = 0.0f;
        b.y = 0.0f;
        b.x = 0.0f;
        b.w = 1.0f;
        c.z = 0.0f;
        c.y = 0.0f;
        c.x = 0.0f;
        c.w = 1.0f;
        return this;
    }
};

struct S_0019F600_Mat {
    void func_000264C0(void *src);
};
struct S_0019F600_Link {
    void func_00199C20(int a, void *out);
};
void func_0011ACC0(void *out, void *a, void *b);
struct S_0019F600_Node {
    char pad0[0xb0];
    char fB0[0x40];
    char fF0[0x40];
    char f130[0x40];
    S_0019F600_Mat f170;
    char pad171[0x1c0 - 0x171];
    S_0019F600_Link *f1C0;
};

static __forceinline void XformPoint(float *out, float *in, float *m)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 r0 = _mm_load_ps(m);
    _mm_storeh_pi((__m64 *)(out + 2), v);
    __m128 r1 = _mm_load_ps(m + 4);
    out[3] = 1.0f;
    __m128 r2 = _mm_load_ps(m + 8);
    v = _mm_loadh_pi(v, (__m64 *)(out + 2));
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 t = _mm_add_ps(_mm_unpacklo_ps(r0, r1), _mm_unpackhi_ps(r0, r1));
    __m128 u = _mm_add_ps(r2, _mm_movehl_ps(r2, r2));
    _mm_storeu_ps(out, _mm_add_ps(_mm_movelh_ps(t, u), _mm_shuffle_ps(_mm_movehl_ps(t, t), u, 0x14)));
    out[3] = 1.0f;
}

struct SoultreeHierarchyCollisionObject {
    void *vtbl;
    char pad4[0x24];
    float f28[4];
    char pad38[0x10];
    float f48;
    char pad4C[0x54 - 0x4C];
    S_0019F500_Xform *unk54;
    char pad58[0xA7 - 0x58];
    unsigned char unkA7;
    float fA8[4];
    float fB8, fBC, fC0;
    char padC4[0xF0 - 0xC4];
    S_0019F600_Mat fF0;
    char padF1[0x130 - 0xF1];
    S_0019F600_Mat f130;
    char pad131[0x190 - 0x131];
    int f190;
    char pad194[0x1A0 - 0x194];
    S_0019F600_Node **f1A0;
    void func_0019DEF0();
    void func_0019F600(float *m);
    void func_0019DC80();
    void func_00133E60();
    void *func_0019FBA0(int flags);
    void func_0019F500(void);
};

extern void *func_001E8AA5(int size);
extern void *func_001E8A44(int size);
extern void func_0019B700(void *o, int a);
extern void func_00129920(void *o, int a);
extern void func_000264C0(void *dst, const void *src);
struct S_0019B700 { void *func_0019B700(int a); };
struct S_00129920 { void func_00129920(int a); };
extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
char **__fastcall func_0019EEC0(char *self, int, int *out)
{
    int count = *(int *)(self + 0x190);
    int flags;
    char **arr;
    unsigned char f;
    int i;

    *out = count;
    arr = (char **)func_001E8AA5(count * 4);
    f = *(unsigned char *)(self + 0xa7);
    flags = 0;
    if (f & 4) flags = 4;
    if (f & 2) flags |= 2;
    if (f & 8) flags |= 8;
    i = 0;
    if (*(int *)(self + 0x190) <= 0) return arr;

    for (; i < *(int *)(self + 0x190); i++) {
        char *o = (char *)func_001E8A44(0x1e0);
        int n, m, k;

        if (o) o = (char *)((S_0019B700 *)o)->func_0019B700(1);
        else o = 0;
        arr[i] = o;
        ((S_00129920 *)arr[i])->func_00129920(flags);
        (*(void (__fastcall **)(char *))(*(int *)arr[i] + 0x6c))(arr[i]);
        *(int *)(arr[i] + 0x50) = 0;
        ((M_F780 *)(arr[i] + 0xb0))->func_000264C0(((char **)*(void **)(self + 0x1a0))[i] + 0xb0);
        ((M_F780 *)(arr[i] + 0xf0))->func_000264C0(((char **)*(void **)(self + 0x1a0))[i] + 0xf0);
        ((M_F780 *)(arr[i] + 0x130))->func_000264C0(((char **)*(void **)(self + 0x1a0))[i] + 0x130);
        ((M_F780 *)(arr[i] + 0x170))->func_000264C0(((char **)*(void **)(self + 0x1a0))[i] + 0x170);
        *(unsigned short *)(arr[i] + 0x1bc) = *(unsigned short *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1bc);
        *(int *)(arr[i] + 0x1c0) = *(int *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1c0);
        *(int *)(arr[i] + 0x1c4) = 0;
        *(int *)(arr[i] + 0x1c8) = 0;
        *(unsigned short *)(arr[i] + 0x1cc) = *(unsigned short *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1cc);
        *(unsigned short *)(arr[i] + 0x1ce) = *(unsigned short *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1ce);
        *(char **)(arr[i] + 0x1d4) = (char *)func_001E8A44(0x80);
        *(int *)(arr[i] + 0x1b8) = *(int *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b8);

        if (*(int *)(arr[i] + 0x1b8) != 0) {
            unsigned short *p;
            n = *(unsigned short *)(arr[i] + 0x1cc);
            p = (unsigned short *)func_001E8A44(n * 6);
            if (p) {
                for (k = 0; k < n; k++) {
                    p[2] = 0;
                    p[1] = 0;
                    p[0] = 0;
                    p += 3;
                }
            } else {
                p = 0;
            }
            *(void **)(arr[i] + 0x1b0) = p;
            for (k = 0; k < *(unsigned short *)(arr[i] + 0x1cc); k++) {
                char *d = (char *)(*(char **)(arr[i] + 0x1b0)) + k * 6;
                char *q = (char *)(*(char **)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b0)) + k * 6;
                *(int *)d = *(int *)q;
                *(unsigned short *)(d + 4) = *(unsigned short *)(q + 4);
            }
            if (*(int *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b4) != 0) {
                *(void **)(arr[i] + 0x1b4) = func_001E8A44(*(unsigned short *)(arr[i] + 0x1cc) * 6);
                for (k = 0; k < *(unsigned short *)(arr[i] + 0x1cc); k++) {
                    char *d = (char *)(*(char **)(arr[i] + 0x1b4)) + k * 6;
                    char *q = (char *)(*(char **)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b4)) + k * 6;
                    *(int *)d = *(int *)q;
                    *(unsigned short *)(d + 4) = *(unsigned short *)(q + 4);
                }
            } else {
                *(int *)(arr[i] + 0x1b4) = 0;
            }
        } else {
            int *p;
            n = *(unsigned short *)(arr[i] + 0x1cc);
            p = (int *)func_001E8A44(n * 12);
            if (p) {
                for (k = 0; k < n; k++) {
                    p[2] = 0;
                    p[1] = 0;
                    p[0] = 0;
                    p += 3;
                }
            } else {
                p = 0;
            }
            *(void **)(arr[i] + 0x1b0) = p;
            for (k = 0; k < *(unsigned short *)(arr[i] + 0x1cc); k++) {
                char *d = (char *)(*(char **)(arr[i] + 0x1b0)) + k * 12;
                char *q = (char *)(*(char **)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b0)) + k * 12;
                *(int *)d = *(int *)q;
                *(int *)(d + 4) = *(int *)(q + 4);
                *(int *)(d + 8) = *(int *)(q + 8);
            }
            if (*(int *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b4) != 0) {
                int *p2;
                n = *(unsigned short *)(arr[i] + 0x1cc);
                p2 = (int *)func_001E8A44(n * 12);
                if (p2) {
                    for (k = 0; k < n; k++) {
                        p2[2] = 0;
                        p2[1] = 0;
                        p2[0] = 0;
                        p2 += 3;
                    }
                } else {
                    p2 = 0;
                }
                *(void **)(arr[i] + 0x1b4) = p2;
                for (k = 0; k < *(unsigned short *)(arr[i] + 0x1cc); k++) {
                    char *d = (char *)(*(char **)(arr[i] + 0x1b4)) + k * 12;
                    char *q = (char *)(*(char **)(((char **)*(void **)(self + 0x1a0))[i] + 0x1b4)) + k * 12;
                    *(int *)d = *(int *)q;
                    *(int *)(d + 4) = *(int *)(q + 4);
                    *(int *)(d + 8) = *(int *)(q + 8);
                }
            } else {
                *(int *)(arr[i] + 0x1b4) = 0;
            }
        }

        m = *(unsigned short *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1ce);
        *(int *)(arr[i] + 0x1d0) = *(int *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1d0);
        {
            char *p = (char *)func_001E8A44(m * 0x24);
            if (p) {
                for (k = 0; k < m; k++) {
                    *(int *)(p + 0x14) = 0;
                    *(int *)(p + 0x10) = 0;
                    *(int *)(p + 0xc) = 0;
                    *(int *)(p + 0x20) = 0;
                    *(int *)(p + 0x1c) = 0;
                    *(int *)(p + 0x18) = 0;
                    p += 0x24;
                }
            } else {
                p = 0;
            }
            *(void **)(arr[i] + 0x1c4) = p;
            p = (char *)func_001E8A44((m * 5 + 5) * 4);
            *(void **)(arr[i] + 0x1c8) = p;
            for (k = 0; k < m - 1; k++) {
                memcpy((char *)(*(char **)(arr[i] + 0x1c4)) + k * 0x24,
                       (char *)(*(char **)(((char **)*(void **)(self + 0x1a0))[i] + 0x1c4)) + k * 0x24, 0x24);
            }
            for (k = 0; k < m; k++) {
                memcpy((char *)(*(char **)(arr[i] + 0x1c8)) + k * 0x14,
                       (char *)(*(char **)(((char **)*(void **)(self + 0x1a0))[i] + 0x1c8)) + k * 0x14, 0x14);
            }
        }

        *(int *)(*(char **)(arr[i] + 0x1d4) + 0) = 0;
        *(unsigned short *)(*(char **)(arr[i] + 0x1d4) + 8) = *(unsigned short *)(arr[i] + 0x1cc);
        *(unsigned short *)(*(char **)(arr[i] + 0x1d4) + 0xa) = *(unsigned short *)(arr[i] + 0x1ce);
        *(int *)(*(char **)(arr[i] + 0x1d4) + 0xc) = *(int *)(arr[i] + 0x1c4);
        *(int *)(*(char **)(arr[i] + 0x1d4) + 0x10) = *(int *)(arr[i] + 0x1c8);
        *(unsigned short *)(*(char **)(arr[i] + 0x1d4) + 0x20) = 0;
        *(int *)(*(char **)(arr[i] + 0x1d4) + 0x70) = 1;
        *(F3_F780 *)(*(char **)(arr[i] + 0x1d4) + 0x14) = *(F3_F780 *)(arr[i] + 0x1b0);

        *(int *)(arr[i] + 0x1d0) = *(int *)(((char **)*(void **)(self + 0x1a0))[i] + 0x1d0);
        (*(void (__fastcall **)(char *))(*(int *)arr[i] + 0x80))(arr[i]);
    }
    return arr;
}
void SoultreeHierarchyCollisionObject::func_0019F500(void)
{
    S_0019F500_Xform *p;

    unkA7 = unkA7 & 0xdf;
    D_002B92E0 = 0;
    D_002B92F0 = 0;
    if (unk54 == 0) {
        void *m = func_001E8A44(0x38);
        unk54 = m != 0 ? ((S_0019F500_Xform *)m)->Init() : 0;
    }
    func_00133D80(unk54);
    p = unk54;
    V4_0019F500 t(0);
    p->a = t;
    V4_0019F500 u(0);
    p->b = u;
    p->f34 = 0.0f;
    p->f30 = 1.0f;
}

void SoultreeHierarchyCollisionObject::func_0019F600(float *m)
{
    int i;
    fF0.func_000264C0(&f130);
    f130.func_000264C0(m);
    for (i = 0; i < f190; i++) {
        S_0019F600_Node *n = f1A0[i];
        n->f170.func_000264C0(n->f130);
        n->f1C0->func_00199C20(0, n->f130);
        func_0011ACC0(n->fB0, n->fF0, n->f130);
    }
    func_0019DEF0();
    *(V4_0019F500 *)f28 = *(V4_0019F500 *)fA8;
    float z = fC0, y = fBC, x = fB8;
    f48 = AsmSqrtF(x * x + y * y + z * z);
    AsmTransformPoint(f28, f28, m);
}

void C_0019F9B0::func_0019F780(char *path, int h)
{
    int i;
    f19C = path;
    f1A4 = (D_F780 *)func_001E8AA5(0x30);
    func_0019EB10(h);
    f1A4->f0 = 1;
    f1A4->f4 = 1;
    f1A4->f8 = f190;
    f1A4->f14 = (int *)func_001E8AA5(f190 * 4);
    f1A4->f18 = (int *)func_001E8AA5(f190 * 4);
    f1A4->fC = (int *)func_001E8AA5(f190 * 4);
    f1A4->f10 = (int *)func_001E8AA5(f190 * 4);
    f1A4->f1C = (F3_F780 *)func_001E8A44(f190 * 12);
    f1A4->f20 = (M_F780 *)func_001E8AA5(f190 << 6);
    f1A4->f28 = (short *)func_001E8AA5(f190 * 2);
    f1A4->f2C = 1;
    for (i = 0; i < f190; i++) {
        f1A4->f14[i] = f1A0[i]->f1C4;
        f1A4->f18[i] = f1A0[i]->f1C8;
        f1A4->fC[i] = f1A0[i]->f1CC;
        f1A4->f10[i] = f1A0[i]->f1CE;
        f1A4->f1C[i] = f1A0[i]->f1B0;
        f1A4->f20[i].func_000264C0(f1A0[i]->fF0);
        f1A4->f28[i] = f1A0[i]->f1BC;
    }
    D_002BEAAC->func_0013B1F0(h, f1A4);
}

int C_0019F9B0::func_0019F9B0(int a1, char *path)
{
    int h;
    int ptr;
    int vC;
    int v10;
    int v14;
    int v18;
    char buf[260];

    if (D_002A4C10[0] != 0) {
        strcpy(buf, D_002A4C10);
        if (D_002A4C0F[strlen(D_002A4C10)] != '\\')
            func_001E8BF0(buf, &D_00284644, 0x7f);
        strcat(buf, path);
    } else {
        strcpy(buf, path);
    }
    func_00030F30(buf, &D_0028463C);
    h = -1;
    ptr = 0;
    if (D_002BEAAC->func_0013D310(buf, &D_00275FB4, &h, &ptr, 1) == 0)
        return 0;
    if (ptr != 0) {
        v14 = *(int *)(ptr + 4);
        func_0019ECB0((char *)a1, (int *)ptr);
    } else {
        D_002BEAAC->func_0013C8A0(h, &v18, 1, 4);
        D_002BEAAC->func_0013C8A0(h, &vC, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &v10, 4, 1);
        if (v18 != 0x4d2 || func_001EA426(&vC, &D_00284638) != 0 || v10 != 1)
            D_002BEAAC->func_0013C110(h);
        func_00132E90(h, &v14);
        func_0019F780((char *)a1, h);
    }
    D_002BEAAC->func_0013C110(h);
    return 1;
}

void *SoultreeHierarchyCollisionObject::func_0019FBA0(int flags)
{
    vtbl = (void *)&D_0028B25C;
    func_0019DC80();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_0019FBD0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

unsigned __int64 __rdtsc(void);
#pragma intrinsic(__rdtsc)
void __fastcall func_0019FC40(char *self, void *, int i) {
 unsigned __int64 t = __rdtsc();
 *(unsigned __int64 *)(self + 0x38 + i * 0x50) = t;
}

void C_0019FC80::func_0019FC80(int i)
{
    S_0019FC80_Timer *e = &timers[i];
    unsigned __int64 now = __rdtsc();
    float elapsed;

    now -= e->start;
    elapsed = (float)(__int64)now * f28;
    e->f8 = e->f8 + 1.0f;
    e->fC = elapsed + e->fC;
    e->f10 = e->f10 + 1.0f;
    e->f14 = elapsed + e->f14;
    e->f20 = elapsed;
    if (elapsed > e->f24 || e->f24 > D_0028B320) {
        e->f24 = elapsed;
    }
}

struct C_0019EEC0 {
    char pad0[0x190];
    int f190;
    int func_0019EEC0(int *out);
};

