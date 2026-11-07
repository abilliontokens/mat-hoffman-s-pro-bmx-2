/* 14 functions from 0x001AB670 to 0x001AC440, found by Ghidra. */
#include "common.h"
#include <stdarg.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline float Min_001AB670(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static inline float Dot_001AB670(const float *a, const float *b) { return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; }
static __forceinline float Dot2_001AB670(const float *a, const float *b) { return (a[1] * b[1] + b[0] * a[0]) + a[2] * b[2]; }
struct V4_001AB670 { float x, y, z, w; V4_001AB670() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; } };
struct V4P_001AB670 { float x, y, z, w; };
struct Body_001AB670 {
    char pad_00[0x130];
    float vel[3];
    char pad_13C[0x238 - 0x13C];
    float n[3];
    void func_00030B20(V4_001AB670 v);
};
struct C_001AB670 {
    char pad_00[0x24];
    Body_001AB670 *field_24;
    void func_001AB670(float *v, int a, int b);
};
extern int D_0028BFC4;
extern int D_0028C03C;
extern int D_0028C0BC;

void func_001E8390(void *p);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct StateObject {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2(int a);
};

struct C_001AC150 {
    int **field_00;
    int *field_04;
    int field_08;
    int field_0C;
    void func_001AC150(int count);
    void func_001AC1A0(int n);
};

struct Elem_001AB800 {
    char pad_00[0x10];
    float in[4];
    float n[4];
    float p[3];
    char pad_3c[4];
    void *mat;
    int f44;
    void *f48;
    float f4c;
    int idx;
    unsigned char flags;
    char pad_55[3];
};

struct ElemView_001AB800 {
    float n1;
    float n2;
    float n3;
    float p0;
    float p1;
    float p2;
    char pad_18[4];
    void *mat;
    int f44;
    void *f48;
    float f4c;
    int idx;
    unsigned char flags;
    char pad_31[0x58 - 0x31];
};

struct Frame_001AB800 {
    char pad_00[0x22c];
    char *f22c;
};

extern float D_00275544;
extern float D_002755F4;
void func_00030AC0(float *out, float *v, float *m);

static __forceinline void Xform_001AB800(float *out, float *v, float *m)
{
    __m128 r0 = _mm_load_ps(m);
    __m128 r1 = _mm_load_ps(m + 4);
    __m128 r2 = _mm_load_ps(m + 8);
    __m128 vec = _mm_loadu_ps(v);
    __m128 lo, hi;
    _mm_storeh_pi((__m64 *)(out + 2), vec);
    out[3] = 1.0f;
    vec = _mm_loadh_pi(vec, (__m64 *)(out + 2));
    r0 = _mm_mul_ps(r0, vec);
    r1 = _mm_mul_ps(r1, vec);
    r2 = _mm_mul_ps(r2, vec);
    lo = _mm_unpacklo_ps(r0, r1);
    hi = _mm_unpackhi_ps(r0, r1);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, _mm_movehl_ps(r2, r2));
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(out, lo);
    out[3] = 1.0f;
}

struct SpringCollisionModel {
    void *vtbl;
    char pad_04[0x20];
    Frame_001AB800 *field_24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    Elem_001AB800 *field_84;
    int f88;
    int f8c;
    Elem_001AB800 *field_90;
    float f94;
    char pad_98[0xdc - 0x98];
    float fdc[10];
    float f104[4];
    float f114[4];
    char pad_124[0x134 - 0x124];
    V4_001AB670 f134;
    V4_001AB670 f144;
    void func_00157660();
    void *func_001AB7B0(unsigned int flags);
    void func_001A9990(V4_001AB670 v, void *other);
    void func_001AA270(float s, V4_001AB670 v, V4_001AB670 q, void *other, unsigned int mask);
    void func_001A9D20(float s, V4_001AB670 v, V4_001AB670 q, void *other, unsigned int mask);
    void func_001A9FA0(float s, V4_001AB670 v, V4_001AB670 q, void *other, unsigned int mask);
    void func_001AB670(float *v, void *q, int b);
    int func_001AB800();
    int func_001AB800(int);
};

struct StateMachine {
    void *vtbl;
    char pad_04[0x20];
    int field_24;
    int field_28;
    char field_2C[1];
    void func_00157600(int a);
    void func_00157660();
    void func_001D3F50();
    void func_00157A00(int a);
    StateMachine *func_001AC080();
    void func_001AC0A0(int a, const char *name);
    void func_001AC0D0(int a);
    void *func_001AC120(unsigned int flags);
};

struct StringTableEntry {
    void *str;
    int pad04[3];
};

struct StringTable {
    void *vtbl;
    int field_04;
    int field_08;
    int field_0C;
    void *field_10;
    void *field_14;
    StringTableEntry *field_18;
    int field_1C;
    void func_0001DFE0();
    void func_0001DFF0();
    StringTable *func_001AC3A0();
    void func_001AC3D0();
};

struct C_001AC200 {
    int field_00;
    int field_04;
    const char *field_08;
    char *field_0C;
    C_001AC150 *field_10;
    C_001AC200() {}
    C_001AC200(char *buf, const char *fmt, C_001AC150 *a) {
        field_00 = 0;
        field_04 = 0;
        field_08 = fmt;
        field_0C = buf;
        field_10 = a;
    }
    void func_001AC200(int n);
    void func_001AC240();
};

extern "C" char *strcpy(char *, const char *);
void C_001AB670::func_001AB670(float *v, int a, int b)
{
    float zero = 0.0f;
    float zero2 = 0.0f;
    float dot;
    float t;
    float *fv;
    V4P_001AB670 p;

    dot = Dot2_001AB670(field_24->n, v);
    t = -AsmMinF(dot, zero);
    p.x = t * v[0];
    p.y = t * v[1];
    p.z = t * v[2];
    p.w = 1.0f;
    field_24->func_00030B20(*(V4_001AB670 *)&p);
    dot = Dot2_001AB670(field_24->vel, v);
    t = -AsmMinF(dot, zero2);
    p.x = t * v[0];
    p.y = t * v[1];
    p.z = t * v[2];
    fv = field_24->vel;
    fv[0] += p.x;
    fv[1] += p.y;
    fv[2] += p.z;
}

void *SpringCollisionModel::func_001AB7B0(unsigned int flags)
{
    vtbl = (void *)&D_0028BFC4;
    if (field_84) func_001E8390(field_84);
    if (field_90) func_001E8390(field_90);
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

int SpringCollisionModel::func_001AB800(int arg)
{
    V4_001AB670 loc;
    int i;
    Elem_001AB800 *e;
    float dot;

    if (f3c == 0 && f88 > 0) {
        if (f6c != 0) {
            func_00030AC0(f114, f104, (float *)(field_24->f22c + 0xf0));
        } else {
            func_00030AC0(f114, (float *)((char *)field_24 + 0x190), (float *)(field_24->f22c + 0xf0));
        }
    }
    if (f3c != 0) {
        for (e = field_84, i = 0; i < f80; e++, i++) {
            AsmTransformPoint(&loc.x, e->in, (float *)((char *)e->mat + 0xf0));
            dot = (e->p[0] - loc.x) * e->n[0];
            dot += (e->p[1] - loc.y) * e->n[1];
            dot += (e->p[2] - loc.z) * e->n[2];
            dot += e->f4c;
            if (dot > D_00275544) {
                f30 = 1;
                f74 = 1;
                e->flags |= 2;
                f144 = *(V4_001AB670 *)e->n;
                f134.x = dot * e->n[0] + loc.x;
                f134.y = dot * e->n[1] + loc.y;
                f134.z = dot * e->n[2] + loc.z;
                f134.w = 1.0f;
                func_001A9990(f134, 0);
                if (f4c != 0) {
                    func_001AA270(dot, *(V4_001AB670 *)e->n, f134, 0, 0);
                }
                if (f64 != 0) {
                    func_001AB670(e->n, &f134, 0);
                }
                if (f40 != 0) {
                    if (f5c != 0 && dot >= f94 && f4c == 0) {
                        func_001AB670(e->n, &f134, 0);
                    }
                    func_001A9D20(dot, *(V4_001AB670 *)e->n, f134, 0, 0);
                }
                if (f44 != 0) {
                    func_001A9FA0(fdc[e->idx], *(V4_001AB670 *)e->n, f134, 0, 0);
                }
            } else {
                e->flags &= 0xfd;
            }
        }
    }
    for (e = field_90, i = 0; i < f88; e++, i++) {
        if (e->mat != 0) {
            AsmTransformPoint(&loc.x, e->in, (float *)((char *)e->mat + 0xf0));
        } else {
            AsmTransformPoint(&loc.x, e->in, (float *)(field_24->f22c + 0xf0));
        }
        dot = (e->p[0] - loc.x) * e->n[0];
        dot += (e->p[1] - loc.y) * e->n[1];
        dot += (e->p[2] - loc.z) * e->n[2];
        if (dot > D_00275544) {
            f30 = 1;
            f78 = 1;
            if (e->f48 != 0) {
                f38 = 1;
            } else {
                if (e->n[1] > D_002755F4) {
                    f34 = 1;
                }
            }
            f144 = *(V4_001AB670 *)e->n;
            f134.x = dot * e->n[0] + loc.x;
            f134.y = dot * e->n[1] + loc.y;
            f134.z = dot * e->n[2] + loc.z;
            f134.w = 1.0f;
            e->flags |= 2;
            func_001A9990(f134, e->f48);
            if (e->f48 != 0 && f50 != 0) {
                func_001A9D20(dot, *(V4_001AB670 *)e->n, f134, e->f48, (unsigned int)e->f44);
                if (f44 != 0 && f48 != 0) {
                    func_001A9FA0(fdc[e->idx], *(V4_001AB670 *)e->n, f134, e->f48, (unsigned int)e->f44);
                }
            } else {
                if (f4c != 0) {
                    func_001AA270(dot, *(V4_001AB670 *)e->n, f134, e->f48, (unsigned int)e->f44);
                }
                if (f64 != 0) {
                    func_001AB670(e->n, &f134, (int)e->f48);
                }
                if (f40 != 0) {
                    if (f5c != 0 && dot >= f94 && f4c == 0) {
                        func_001AB670(e->n, &f134, (int)e->f48);
                    }
                    func_001A9D20(dot, *(V4_001AB670 *)e->n, f134, e->f48, (unsigned int)e->f44);
                }
                if (f44 != 0 && (e->f48 == 0 || f48 != 0)) {
                    func_001A9FA0(fdc[e->idx], *(V4_001AB670 *)e->n, f134, e->f48, (unsigned int)e->f44);
                }
            }
        } else {
            e->flags &= 0xfd;
        }
    }
    f2c = 0;
    return 1;
}

StateMachine *StateMachine::func_001AC080()
{
    func_00157600(1);
    field_24 = 0;
    field_28 = 0;
    vtbl = (void *)&D_0028C03C;
    return this;
}

void StateMachine::func_001AC0A0(int a, const char *name)
{
    strcpy(field_2C, name);
    field_28 = a;
    func_001D3F50();
}

void StateMachine::func_001AC0D0(int a)
{
    if (field_28 != 0) {
        if (field_24 != 0) {
            ((StateObject *)field_24)->vf1();
        }
        field_24 = field_28;
        ((StateObject *)field_28)->vf0();
        field_28 = 0;
    }
    if (field_24 != 0) {
        ((StateObject *)field_24)->vf2(a);
    }
    func_00157A00(a);
}

void *StateMachine::func_001AC120(unsigned int flags)
{
    vtbl = (void *)&D_0028C03C;
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void C_001AC150::func_001AC150(int count)
{
    int *p = (int *)func_001E8A44(count * 4);
    for (int i = 0; i < field_08; i++) {
        p[i] = field_04[i];
    }
    func_001E891B(field_04);
    field_04 = p;
    field_08 = count;
}

void C_001AC150::func_001AC1A0(int n)
{
    if (n > field_08) {
        func_001AC150((n / 10 + 1) * 10);
    }
    while (field_0C < n) {
        (*field_00)++;
        field_04[field_0C] = *(*field_00 - 1);
        field_0C++;
    }
}

void C_001AC200::func_001AC200(int n)
{
    C_001AC150 *args = field_10;
    char *s;
    char c;
    int *pos = &field_04;
    if (n > args->field_0C) {
        args->func_001AC1A0(n);
    }
    s = (char *)args->field_04[n - 1];
    c = *s;
    if (c != 0) {
        s++;
        do {
            field_0C[(*pos)++] = c;
            c = *s++;
        } while (c != 0);
    }
}

void C_001AC200::func_001AC240()
{
    int state;
    int n;
    char c;

    c = field_08[field_00++];
    n = 0;
    state = 0;
    while (c != 0) {
        switch (state) {
        case 0:
            if (c != '^') {
                field_0C[field_04++] = c;
            } else {
                state = 1;
            }
            break;
        case 1:
            if (c == '^') {
                field_0C[field_04++] = '^';
                state = 0;
            } else if (c >= '0' && c <= '9') {
                state = 2;
                n = c - '0';
            } else {
                state = 0;
            }
            break;
        case 2:
            if (c == '^') {
                func_001AC200(n);
                state = 0;
            } else if (c == '.') {
                func_001AC200(n);
                state = 3;
            } else if (c >= '0' && c <= '9') {
                n = n * 10 + (c - '0');
            } else {
                state = 0;
            }
            break;
        case 3:
            if (c == '^') {
                state = 0;
            }
            break;
        }
        c = field_08[field_00++];
    }
    field_0C[field_04++] = 0;
}

void func_001AC330(char *buf, const char *fmt, ...)
{
    va_list ap;
    C_001AC200 out;
    C_001AC150 args;

    va_start(ap, fmt);
    args.field_00 = (int **)&ap;
    args.field_08 = 10;
    args.field_0C = 0;
    args.field_04 = (int *)func_001E8A44((s32)0x28);
    out.field_10 = &args;
    out.field_00 = 0;
    out.field_04 = 0;
    out.field_08 = fmt;
    out.field_0C = buf;
    out.func_001AC240();
    va_end(ap);
    func_001E891B(args.field_04);
}

StringTable *StringTable::func_001AC3A0()
{
    func_0001DFE0();
    field_08 = 0;
    field_0C = 0;
    field_10 = 0;
    field_14 = 0;
    field_18 = 0;
    field_1C = 0;
    vtbl = (void *)&D_0028C0BC;
    return this;
}

void StringTable::func_001AC3D0()
{
    int i;

    vtbl = (void *)&D_0028C0BC;
    if (field_18 != 0) {
        for (i = 0; i < field_1C; i++) {
            func_001E8390(field_18[i].str);
        }
        func_001E8390(field_18);
    }
    if (field_14 != 0) {
        func_001E891B(field_14);
    }
    if (field_10 != 0) {
        func_001E8390(field_10);
    }
    func_0001DFF0();
}

