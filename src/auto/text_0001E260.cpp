/* 31 functions from 0x0001E260 to 0x0001EFA0, found by Ghidra. */
#include "common.h"
#include <stdlib.h>
#include <xmmintrin.h>
#include "ghidra.h"
#include "asm_helpers.h"
extern u8 D_002A0B18[];
struct Vec4 {
    float x, y, z, w;
};

struct C_00198040 {
    void func_00198040(void *out, void *in);
    void func_00197EC0(void *out, void *in);
};

/* Rigid body: accumulates transformed vectors into two vec3 accumulators. */
struct C_0001EAF0 {
    char pad0[0x130];
    float f130;
    float f134;
    float f138;
    char pad13c[4];
    float f140;
    float f144;
    float f148;
    char pad14c[0xe0];
    C_00198040 *f22c;
    void func_0001EAF0(Vec4 v);
    void func_0001EB50(Vec4 v);
};

struct C_0001E860 {
    void func_0001E860(void);
};

struct C_0001EED0 {
    void func_0001EED0(void);
};

struct C_0001EF40 {
    undefined4 func_0001EF40(void);
};

struct V4i_0001EBB0 {
    int x, y, z, w;
    void Init() { z = 0; y = 0; x = 0; w = 0x3f800000; }
};
struct C_0001EBB0 {
    void func_00157600(int a);
    C_0001EBB0 *func_0001EBB0(int a0);
};
extern int D_002A0E84;
extern int D_002A0E88;
extern int D_002A0E8C;
extern int D_002A0E90;

extern int D_00275F9C;
extern int D_00275F7C;
extern int D_00276004;
extern int D_002B7D54;
extern u32 *D_002B7D4C;
extern u32 D_002B7D50;
extern u32 *D_002A0DAC;
void func_001E891B(void *p);

void *func_001E8AA5(int size);
void func_001E8390(void *p);

/* Fixed-size element pool: chunks are linked through their first word. */
struct C_0001E930 {
    void *vtbl;
    int unk4;
    int unk8;           /* elements per chunk */
    void **unkC;        /* first chunk */
    void **unk10;       /* last chunk */
    void **unk14;       /* spare chunks */
    int unk18;          /* elements used in last chunk */
    unsigned int unk1C; /* element size */
    int unk20;          /* chunk size */
    void **unk24;       /* freed elements */
    int unk28;          /* bytes allocated from the heap */
    int unk2C;          /* bytes in use */
    void *func_0001E930(unsigned int flags);
    void func_0001E790(void **elem);
    int func_0001E7B0();
    void func_0001E800();
    void *func_0001E8A0();
    void func_0001DFF0();
};

struct GR_BitString {
    void *vtbl;
    u32 unk4;
    void *unk8;
    void *unkC;
    u8 unk10;
    char pad11[3];
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    GR_BitString *func_0001E3F0(u32 *a0, u32 a1, int a2);
    GR_BitString(u32 *a0, u32 a1, int a2);
    void func_0001E460();
    void func_0001E480(int *out);
    void *func_0001E6D0(unsigned int flags);
    void func_0001E710(int a0);
    void func_0001E5D0(int a0);
    void D_0001E650(int a0);
    void func_0001E0E0(int a0);
    void func_0001E260(int a0);
};

struct C_0001EF70 {
    void *vtbl;
    void func_00157660();
    void *func_0001EF70(unsigned int flags);
};

struct C_0001E740 {
    void *vtbl;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    void func_0001DFE0();
    C_0001E740 *func_0001E740(int a0, int a1);
};

struct C_0001EF00 {
    char pad0[0xE0];
    int unkE0;
    void func_0001EF00(int a0);
};

struct C_0001EDD0 {
    char pad0[0x28];
    int unk28;
    void func_0001EDD0(int a0);
};

struct C_00197B40_0001EDE0 {
    void func_00197B40(Vec4 *a, Vec4 *b);
};

struct C_0001EDE0_Owner {
    char pad0[0x230];
    C_00197B40_0001EDE0 *unk230;
};

struct C_0001EDE0 {
    char pad0[0x28];
    C_0001EDE0_Owner *unk28;
    char pad2C[0x24];
    int unk50;
    char pad54[4];
    int unk58;
    int unk5C;
    char pad60[0x98];
    int unkF8;
    char padFC[8];
    Vec4 unk104;
    void func_0001EDE0(int a0, int a1);
    Vec4 *func_0001EE00(Vec4 *out);
    Vec4 *func_0001EDE0(Vec4 *out);
};

struct C_0001EDC0 {
    char pad0[0x24];
    int unk24;
    void func_0001EDC0(int a0);
};

extern u32 D_002A0C18[];
static __forceinline u32 swap_shift_0001E260(u32 x)
{
    u32 r = ((unsigned char)x << 8) | (unsigned char)(x >> 8);
    x >>= 16;
    r = (r << 8) | (unsigned char)x;
    return (r << 8) | (unsigned char)(x >> 8);
}
static inline u32 swap32(u32 x)
{
    unsigned char b0 = (unsigned char)x;
    unsigned char b1 = (unsigned char)(x >> 8);
    unsigned char b2 = (unsigned char)(x >> 16);
    unsigned char b3 = (unsigned char)(x >> 24);
    return ((b0 << 8 | b1) << 8 | b2) << 8 | b3;
}

struct V16_0001E260 {
    int a, b, c, d;
};

struct C_0001EF10 {
    char pad0[0x124];
    V16_0001E260 unk124;
    V16_0001E260 func_0001EF10(void);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

/* 0.5f, 3.0f and the smallest length the inverse square root accepts */
extern float D_00275FC0;
extern float D_00275FC4;
extern float D_00275FC8;
float func_0001E960(float lengthSquared);

static __forceinline float vec3_lengthSquared(float *v) {
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

static __forceinline float vec3_invLength(float lengthSquared) {
    return func_0001E960(lengthSquared);
}


void GR_BitString::func_0001E260(int a0)
{
    union { unsigned int i; unsigned short s[2]; unsigned char c[4]; } u;
    int words = ((int)unk4 + 31) / 32;
    u32 *last = (u32 *)unk8 + words - 1;
    u32 *prev = last;
    char *cur = (char *)(last + 1);
    int m = 32 - a0;
    int i;
    u32 v;

    u.i = *last;
    u.i = (u32)(((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8)) >> a0;
    *last = ((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8);
    for (i = words - 1; i != 0; i--) {
        cur -= 4;
        prev--;
        if (*prev != 0) {
            if (*prev == 0xffffffff) {
                *(u32 *)cur |= D_002A0C18[a0];
                *prev = ~D_002A0C18[a0];
            } else {
                unsigned char *b = (unsigned char *)prev;
                *prev = ((b[0] << 8 | b[1]) << 8 | b[2]) << 8 | b[3];
                v = *prev << m;
                if (v != 0) {
                    u.i = v;
                    *(u32 *)cur |= ((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8);
                }
                v = *prev >> a0;
                *prev = v;
                if (v != 0) {
                    u.i = v;
                    *prev = ((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8);
                }
            }
        }
    }
    cur -= 4;
    if (unk18 == 0) {
        *(u32 *)cur &= ~D_002A0C18[a0];
    } else {
        *(u32 *)cur |= D_002A0C18[a0];
    }
}

GR_BitString *GR_BitString::func_0001E3F0(u32 *a0, u32 a1, int a2) {
    unk4 = a1;
    unk18 = a2 ? -1 : 0;
    unk14 = 0;
    vtbl = &D_00275F7C;
    unk8 = a0;
    unk1C = 1;
    unkC = a0;
    unk10 = 0x80;
    D_002B7D54 = 0;
    D_002B7D4C = a0;
    u32 v = *a0;
    u32 b3 = ((u8 *)a0)[3];
    u16 b2 = ((u8 *)&v)[2] << 8;
    D_002B7D50 = (((v & 0xFF00) | (v << 16)) << 8) | b2 | b3;
    return this;
}

void GR_BitString::func_0001E460() {
    vtbl = &D_00275F7C;
    if (unk1C == 0 && unk8 != 0) {
        func_001E891B(unk8);
    }
}

void GR_BitString::func_0001E480(int *out) {
    u8 *p = (u8 *)unk8;
    if (p == 0 || unk4 == 0)
        return;
    int bytes = ((int)unk4 + 7) / 8;
    int n = bytes / 2;
    u8 *q = (u8 *)unk8 + bytes;
    do {
        u8 *e = q - 1;
        u8 a = D_002A0B18[*p];
        u8 b = D_002A0B18[*e];
        q = e;
        *p++ = b;
        *q = a;
    } while (--n);
    *out = -((8 - (int)unk4 % 8) % 8);
}

#pragma optimize("y", off)
u32 __stdcall func_0001E550(int a0) {
    u32 *tab = D_002A0DAC;
    int n = a0;
    u32 cnt = D_002B7D54;
    u32 bits = D_002B7D50;
    u32 v = tab[n];
    cnt += n;
    D_002B7D54 = cnt;
    if (cnt < 0x20) {
        v &= bits >> (0x20 - cnt);
    } else {
        u32 *p = D_002B7D4C;
        cnt -= 0x20;
        D_002B7D54 = cnt;
        p += 1;
        v &= bits << cnt;
        u32 next = _byteswap_ulong(*p);
        D_002B7D4C = p;
        D_002B7D50 = next;
        if (cnt != 0) {
            v |= next >> (0x20 - cnt);
        }
    }
    return v;
}
#pragma optimize("", on)

void GR_BitString::func_0001E5D0(int a0)
{
    if (a0 >= 32) {
        int total = ((int)unk4 + 31) / 32;
        int skip = a0 / 32;
        int n;
        u32 *dst;
        u32 *src;

        a0 -= skip * 32;
        n = total - skip;
        if (n > 0) {
            dst = (u32 *)unk8;
            src = dst + skip;
            do {
                *dst++ = *src++;
            } while (--n);
            do {
                *dst++ = unk18;
            } while (--skip);
        } else {
            int m = total;

            dst = (u32 *)unk8;
            do {
                *dst++ = unk18;
            } while (--m);
        }
    }
    if (a0 > 0) {
        func_0001E0E0(a0);
    }
}

#pragma optimize("", on)

/* the twin of func_0001E5D0 that moves the bits the other way (0x1E650; the
   analysis merged it into func_0001E5D0) */
void GR_BitString::D_0001E650(int a0)
{
    if (a0 >= 32) {
        int total = ((int)unk4 + 31) / 32;
        int skip = a0 / 32;
        int n;
        u32 *dst;
        u32 *src;

        a0 -= skip * 32;
        n = total - skip;
        if (n > 0) {
            src = (u32 *)unk8 + n;
            dst = (u32 *)unk8 + total;
            do {
                *--dst = *--src;
            } while (--n);
            do {
                *--dst = unk18;
            } while (--skip);
        } else {
            dst = (u32 *)unk8;
            do {
                *dst++ = unk18;
            } while (--total);
        }
    }
    if (a0 > 0) {
        func_0001E260(a0);
    }
}

void *GR_BitString::func_0001E6D0(unsigned int flags) {
    vtbl = &D_00275F7C;
    if (unk1C == 0 && unk8 != 0) {
        func_001E891B(unk8);
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void GR_BitString::func_0001E710(int a0) {
    if (unk8 == 0 || unk4 == 0)
        return;
    if (a0 < 0) {
        func_0001E5D0(-a0);
        return;
    }
    if (a0 > 0) {
        D_0001E650(a0);
        return;
    }
}

C_0001E740 *C_0001E740::func_0001E740(int a0, int a1) {
    func_0001DFE0();
    int n = (a1 - a0) / a0;
    unk20 = a1;
    vtbl = &D_00275F9C;
    unkC = 0;
    unk10 = 0;
    unk1C = a0;
    unk24 = 0;
    unk28 = 0;
    unk14 = 0;
    unk8 = n;
    unk18 = n;
    return this;
}

void C_0001E930::func_0001E790(void **elem)
{
    if (unk1C > 4) {
        *elem = unk24;
        unk24 = elem;
        unk2C -= unk1C;
    }
}

int C_0001E930::func_0001E7B0()
{
    void **chunk = (void **)func_001E8AA5(unk20);
    if (chunk == 0) {
        return 0;
    }
    if (unkC == 0) {
        unkC = chunk;
    } else {
        *unk10 = chunk;
    }
    unk10 = chunk;
    *chunk = 0;
    unk28 += unk20;
    return 1;
}

void C_0001E930::func_0001E800()
{
    void **p;
    void **cur;

    p = unkC;
    while (p != 0) {
        cur = p;
        p = (void **)*p;
        func_001E8390(cur);
    }
    p = unk14;
    while (p != 0) {
        cur = p;
        p = (void **)*p;
        func_001E8390(cur);
    }
    unkC = 0;
    unk10 = 0;
    unk24 = 0;
    unk28 = 0;
    unk2C = 0;
    unk14 = 0;
    unk18 = unk8;
}

void C_0001E860::func_0001E860(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    if ((*(int *)(in_ECX + 0x14) != 0) && (*(int **)(in_ECX + 0x10) != (int *)0x0)) {
      **(int **)(in_ECX + 0x10) = *(int *)(in_ECX + 0x14);
    }
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0xc);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 8);
  return;
}

void *C_0001E930::func_0001E8A0()
{
    void **elem;

    if (unk18 < unk8) {
        int n = unk18 + 1;
        elem = (void **)((char *)unk10 + unk1C * n);
        unk18 = n;
    } else {
        elem = unk24;
        if (elem != 0) {
            unk24 = (void **)*elem;
        } else {
            elem = unk14;
            if (elem != 0) {
                if (unkC == 0) {
                    unkC = elem;
                    unk10 = unk14;
                } else {
                    *unk10 = elem;
                    unk10 = unk14;
                }
                unk14 = (void **)*unk10;
                *unk10 = 0;
            } else {
                if (func_0001E7B0() == 0) {
                    return 0;
                }
            }
            elem = (void **)((char *)unk10 + unk1C);
            unk18 = 1;
        }
    }
    if (elem != 0) {
        unk2C += unk1C;
    }
    return elem;
}

void *C_0001E930::func_0001E930(unsigned int flags) {
    vtbl = &D_00275F9C;
    func_0001E800();
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

#pragma optimize("y", on)
float func_0001E960(float lengthSquared)
{
    __m128 v;
    __m128 r;
    __m128 eps;

    v = _mm_load_ss(&lengthSquared);
    eps = _mm_load_ss(&D_00275FC8);
    v = _mm_add_ss(v, _mm_and_ps(_mm_cmplt_ss(v, eps), eps));
    r = _mm_rsqrt_ss(v);
    r = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00275FC0)),
                   _mm_sub_ss(_mm_load_ss(&D_00275FC4), _mm_mul_ss(_mm_mul_ss(v, r), r)));
    _mm_store_ss(&lengthSquared, r);
    return lengthSquared;
}
#pragma optimize("", on)
void func_0001E9B0(float *out, float *a, float *b)
{
    vec3_set(out, a[0] * b[0], a[1] * b[1], a[2] * b[2]);
}

float *func_0001E9E0(float *out, float *v)
{
 float t;
 *(volatile float *)&t=v[0]*v[0]+v[1]*v[1]+v[2]*v[2];
 float inv=func_0001E960(t);
 vec3_set(out,inv*v[0],inv*v[1],inv*v[2]);
 return out;
}

void func_0001EA40(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

#pragma optimize("y", on)
void func_0001EAB0(float *out, float *a, float *b) {
    AsmVec3Cross(out, a, b);
}
#pragma optimize("", on)
void C_0001EAF0::func_0001EAF0(Vec4 v)
{
    Vec4 r;

    if (f22c != 0) {
        f22c->func_00198040(&r, &v);
        f140 += r.x;
        f144 += r.y;
        f148 += r.z;
    }
}

void C_0001EAF0::func_0001EB50(Vec4 v)
{
    Vec4 r;

    if (f22c != 0) {
        f22c->func_00197EC0(&r, &v);
        f130 += r.x;
        f134 += r.y;
        f138 += r.z;
    }
}

C_0001EBB0 *C_0001EBB0::func_0001EBB0(int a0)
{
    int *u;
    int v;

    func_00157600(a0);
    u = (int *)this;
    u[0] = (int)&D_00276004;
    u[0x27] = u[0x28] = u[0x29] = 0; u[0x2a] = 0x3f800000;
    u[0x2f] = u[0x30] = u[0x31] = 0; u[0x32] = 0x3f800000;
    u[0x33] = u[0x34] = u[0x35] = 0; u[0x36] = 0x3f800000;
    u[0x41] = u[0x42] = u[0x43] = 0; u[0x44] = 0x3f800000;
    u[0x49] = u[0x4a] = u[0x4b] = 0; u[0x4c] = 0x3f800000;
    u[0xb] = 1;
    u[0xc] = 0;
    u[0x26] = 0;
    u[0xd] = 1;
    u[0xe] = 0;
    u[0x10] = 0;
    u[0x11] = 0;
    u[0x12] = 0;
    u[0x13] = 0;
    u[0x14] = 0;
    u[0x16] = 0;
    u[0x17] = 0;
    u[0x1e] = 0x41200000;
    u[0x1f] = 0x3f800000;
    u[0x20] = 0xbf800000;
    u[0x21] = 0;
    u[0x22] = 0x43af0000;
    u[0x23] = 0xc1c80000;
    u[0x15] = 0;
    u[0x24] = 0x3f800000;
    u[0x19] = 0x437a0000;
    u[0x1a] = 0x437a0000;
    u[0x1b] = 0x437a0000;
    u[0x1c] = 0xc1a00000;
    u[0x1d] = 0xc1a00000;
    u[0x27] = D_002A0E84;
    u[0x28] = D_002A0E88;
    u[0x29] = D_002A0E8C;
    u[0x2a] = D_002A0E90;
    u[0x2b] = 0;
    u[0x2c] = 0;
    u[0x2d] = 0;
    u[0x2f] = D_002A0E84;
    u[0x30] = D_002A0E88;
    u[0x31] = D_002A0E8C;
    u[0x32] = D_002A0E90;
    u[0x33] = D_002A0E84;
    u[0x34] = D_002A0E88;
    u[0x35] = D_002A0E8C;
    v = D_002A0E90;
    u[0x4d] = 0;
    u[0x37] = 0;
    u[0x39] = 0;
    u[0x3b] = 0;
    u[0x3c] = 0;
    u[0x3a] = 0;
    u[0x3d] = 0;
    u[0x3e] = 0;
    u[0x3f] = 0;
    u[0x40] = 0;
    u[9] = 0;
    u[10] = 0;
    u[0x36] = v;
    u[0x2e] = 0x40800000;
    u[0x38] = 1;
    return this;
}

void C_0001EDC0::func_0001EDC0(int a0) {
    unk24 = a0;
}

void C_0001EDD0::func_0001EDD0(int a0) {
    unk28 = a0;
}

Vec4 *C_0001EDE0::func_0001EDE0(Vec4 *out) {
    Vec4 a;
    Vec4 b;
    Vec4 c;
    float *p;

    if (unk50 != 0 && unkF8 != 0) {
        *out = unk104;
        return out;
    }
    a.z = 0; a.y = 0; a.x = 0; a.w = 1.0f;
    b.z = 0; b.y = 0; b.x = 0; b.w = 1.0f;
    unk28->unk230->func_00197B40(&a, &b);
    p = func_0001E9E0(&c.x, &a.x);
    *out = *(Vec4 *)p;
    return out;
}

/* vtable slot 30 (0x1EE00): the analysis merged it into func_0001EDE0 */
Vec4 *C_0001EDE0::func_0001EE00(Vec4 *out) {
    Vec4 a;
    Vec4 b;
    Vec4 c;
    float *p;

    if (unk50 != 0 && unkF8 != 0) {
        *out = unk104;
        return out;
    }
    a.z = 0; a.y = 0; a.x = 0; a.w = 1.0f;
    b.z = 0; b.y = 0; b.x = 0; b.w = 1.0f;
    unk28->unk230->func_00197B40(&a, &b);
    p = func_0001E9E0(&c.x, &a.x);
    *out = *(Vec4 *)p;
    return out;
}

void C_0001EED0::func_0001EED0(void)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x490) = 0;
  }
  return;
}

void C_0001EF00::func_0001EF00(int a0) {
    unkE0 = a0;
}

V16_0001E260 C_0001EF10::func_0001EF10(void)
{
    return unk124;
}

undefined4 C_0001EF40::func_0001EF40(void)
{
  int in_ECX = (int)this;
  
  if (((*(int *)(in_ECX + 0xe0) != 0) && (*(int *)(in_ECX + 0xdc) != 0)) &&
     (*(int *)(in_ECX + 0x118) != 0)) {
    return 1;
  }
  return 0;
}

void *C_0001EF70::func_0001EF70(unsigned int flags)
{
    vtbl = (void *)&D_00276004;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
