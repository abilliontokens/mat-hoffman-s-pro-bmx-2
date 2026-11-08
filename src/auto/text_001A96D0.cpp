/* 4 functions from 0x001A96D0 to 0x001AA270, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

struct V4_001A96D0 {
float x, y, z, w;
V4_001A96D0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};
inline V4_001A96D0 operator*(float s, const V4_001A96D0 &v)
{
    V4_001A96D0 r;
    r.x = s * v.x;
    r.y = s * v.y;
    r.z = s * v.z;
    return r;
}

struct Pivot_001A96D0 {
    char pad0[0x190];
    float f190, f194, f198;
};

struct Body_001A96D0 {
    char pad0[0x130];
    float f130, f134, f138;
    char pad13C[4];
    float f140, f144, f148;
    char pad14C[0x22C - 0x14C];
    char *f22c;
    void AddPos(V4_001A96D0 v)
    {
        float *f = &f130;
        f[0] += v.x;
        f[1] += v.y;
        f[2] += v.z;
    }
};

/* transform object at frame->f22c */
struct Xf_001A9990 {
    V4_001A96D0 func_00198040(V4_001A96D0 *in);
    V4_001A96D0 func_00197EC0(V4_001A96D0 *in);
};

/* object at This_001A96D0::f24 as used by func_001A9990 */
struct Frame_001A9990 {
    char pad0[0x22c];
    Xf_001A9990 *f22c;
    char pad230[8];
    float f238, f23c, f240;
    char pad244[0x268 - 0x244];
    float f268[4];
};

/* body passed to func_001A9990 (virtual slots 42 and 44 return a V4) */
struct Other_001A9990 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41();
    virtual V4_001A96D0 v42();
    virtual void v43();
    virtual V4_001A96D0 v44();
    char pad4[0x18c];
    V4_001A96D0 f190;
    char pad1a0[0x22c - 0x1a0];
    char *f22c;
};

struct This_001A96D0 {
    char pad0[0x24];
    Pivot_001A96D0 *f24;
    char pad28[0x68 - 0x28];
    int f68;
    int f6c;
    char pad70[0x104 - 0x70];
    float f104, f108, f10c;
    char pad110[0x114 - 0x110];
    float f114, f118, f11c;
    char pad120[4];
    V4_001A96D0 f124;
    void func_001A96D0(Body_001A96D0 *body, V4_001A96D0 p, V4_001A96D0 q, float s);
    void func_001A9990(V4_001A96D0 p, Other_001A9990 *other);
};

void func_00030AC0(V4_001A96D0 *out, V4_001A96D0 *in, float *m);

extern float D_002AA248, D_002AA24C, D_002AA250;
void func_00030A30(V4_001A96D0 *out, V4_001A96D0 v, float *m);
void func_0011F540(V4_001A96D0 *out, V4_001A96D0 v, float *m);

static __forceinline void cross_001A96D0(float *out, float *a, float *b)
{
    float * volatile pa = a;
    float * volatile pb = b;
    float * volatile po = out;
    __m128 va = _mm_loadu_ps(pa);
    __m128 vb = _mm_loadu_ps(pb);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(po, va);
}

static __forceinline float Min_001A9FA0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(*(__m128 *)&a, *(__m128 *)&b)); return r; }
static __forceinline float Sqrt_001A9FA0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }

struct Obj_001A9FA0 {
    char pad0[0x204];
    unsigned f204;
    char pad208[8];
    float f210;
};

struct This_001A9FA0 {
    char pad0[0x24];
    Obj_001A9FA0 *f24;
    char pad28[0x7C - 0x28];
    unsigned f7c;
    char pad80[0xC8 - 0x80];
    float fc8;
    char padCC[0x124 - 0xCC];
    float f124, f128, f12c;
    void func_001A96D0(Obj_001A9FA0 *o, V4_001A96D0 p, V4_001A96D0 q, float s);
    void func_001A9FA0(float s, V4_001A96D0 v, V4_001A96D0 q, Obj_001A9FA0 *other, unsigned mask);
};

void func_001A8DC0(V4_001A96D0 *out, V4_001A96D0 *in);
extern float D_002755E8, D_00275BF8;

/* the two vectors func_001A9FA0 passes by address, next to the object they
   belong to, so all three live on the stack together */
struct Home_001A9FA0 {
    This_001A9FA0 *self;
    V4_001A96D0 a;
    V4_001A96D0 b;
};

struct V4 { float x, y, z, w; };
struct Other { char pad[0x204]; unsigned flags; char pad2[8]; float a; float b; };
struct Body {
    char p0[0x24]; Other* o; char p1[0x28]; int f4c; int f50; char p2[0x2c]; unsigned f7c; char p3[0x14];
    float f94; float f98; char p4[8]; float a0[2]; float a8[2]; char p5[0x0c]; int fb8;
    void func_001A9D20(Other* other, unsigned mask, V4 p4, V4 p5, float f);
};
struct Obj_001A9D20 {
    char pad0[0x204];
    unsigned f204;
    char pad208[8];
    float f210;
    float f214;
};

void __stdcall func_001A96D0(Obj_001A9D20 *o, V4_001A96D0 b, V4_001A96D0 c, int a);

struct This_001A9D20 {
    char pad0[0x24];
    Obj_001A9D20 *f24;
    char pad28[0x4c - 0x28];
    int f4c;
    int f50;
    char pad54[0x7c - 0x54];
    unsigned f7c;
    char pad80[0x94 - 0x80];
    float f94, f98;
    char pad9C[0xA0 - 0x9C];
    float fA0, fA4, fA8, fAC;
    char padB0[0xB8 - 0xB0];
    int fb8;
    char padBC[0x124 - 0xBC];
    float f124, f128, f12c;
    void func_001A96D0(Obj_001A9D20 *o, V4_001A96D0 b, V4_001A96D0 c, int a);
    void func_001A9D20(float s, V4_001A96D0 v, V4_001A96D0 q, Obj_001A9D20 *other, unsigned mask);
};

static __forceinline float Min_001A9D20(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_001A9D20(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

void This_001A96D0::func_001A96D0(Body_001A96D0 *body, V4_001A96D0 p, V4_001A96D0 q, float s)
{
    body->AddPos(p);
    if (q.x != D_002AA248 || q.y != D_002AA24C || q.z != D_002AA250) {
        V4_001A96D0 b;
        V4_001A96D0 a;
        func_00030A30(&b, p, (float *)(body->f22c + 0xf0));
        func_0011F540(&a, q, (float *)(body->f22c + 0xf0));
        V4_001A96D0 t;
        if (f6c) {
            t.x = a.x - f104;
            t.y = a.y - f108;
            t.z = a.z - f10c;
            a = t;
        } else {
            float *pv = &f24->f190;
            t.x = a.x - pv[0];
            t.y = a.y - pv[1];
            t.z = a.z - pv[2];
            a = t;
        }
        V4_001A96D0 c;
        AsmVec3Cross(&c.x, &a.x, &b.x);
        if (f68) {
            c.x = 0.0f;
            c.z = 0.0f;
        }
        body->f140 += c.x * s;
        body->f144 += c.y * s;
        body->f148 += c.z * s;
    }
}

void This_001A96D0::func_001A9990(V4_001A96D0 p, Other_001A9990 *other)
{
    This_001A96D0 * volatile self = this;
    V4_001A96D0 a;
    V4_001A96D0 b;
    V4_001A96D0 d;
    V4_001A96D0 c;
    V4_001A96D0 t;
    Frame_001A9990 *fr;

    t.x = p.x - f114;
    t.y = p.y - f118;
    t.z = p.z - f11c;
    a = t;
    a = ((Frame_001A9990 *)f24)->f22c->func_00198040(&a);
    cross_001A96D0(&b.x, &((Frame_001A9990 *)self->f24)->f268[0], &a.x);
    t = ((Frame_001A9990 *)self->f24)->f22c->func_00197EC0(&b);
    fr = (Frame_001A9990 *)self->f24;
    t.x = t.x + fr->f238;
    t.y = t.y + fr->f23c;
    t.z = t.z + fr->f240;
    if (other == 0) {
        d = *(V4_001A96D0 *)&D_002AA248;
    } else {
        V4_001A96D0 u;
        V4_001A96D0 r;
        V4_001A96D0 s;

        func_00030AC0(&d, &other->f190, (float *)(other->f22c + 0xf0));
        u.x = p.x - d.x;
        u.y = p.y - d.y;
        u.z = p.z - d.z;
        c = u;
        r = other->v44();
        cross_001A96D0(&b.x, &r.x, &c.x);
        s = other->v42();
        u.x = b.x + s.x;
        u.y = b.y + s.y;
        u.z = b.z + s.z;
        d = u;
    }
    {
        V4_001A96D0 f;

        f.x = t.x - d.x;
        f.y = t.y - d.y;
        f.z = t.z - d.z;
        self->f124 = f;
    }
}

void This_001A9D20::func_001A9D20(float s, V4_001A96D0 v, V4_001A96D0 q, Obj_001A9D20 *other, unsigned mask)
{
    float a, b;
    if (f4c && (other == 0 || f50 == 0)) { a = fA8; b = fAC; }
    else { a = fA0; b = fA4; }
    float f8;
    if (other)
        f8 = f24->f210 > other->f210 ? f24->f214 * other->f210 : other->f214 * f24->f210;
    else
        f8 = 1.0f;
    float m = AsmMinF(s, f94);
    float d = v.y * f128;
    d = d + v.x * f124;
    d = d + v.z * f12c;
    float nf = -f98;
    float dd = AsmMaxF(d, nf);
    dd = AsmMinF(dd, f98);
    float k = AsmMaxF(m * a - dd * b, 0.0f);
    k = k * f8;
    V4_001A96D0 w;
    w.x = k * v.x;
    w.y = k * v.y;
    w.z = k * v.z;
    if (!(f24->f204 & mask))
        func_001A96D0(f24, w, q, fb8);
    if (other && !(f7c & other->f204)) {
        V4_001A96D0 nw;
        nw.x = -w.x;
        nw.y = -w.y;
        nw.z = -w.z;
        func_001A96D0(other, nw, q, fb8);
    }
}

extern "C" double __cdecl sqrt(double);
void This_001A9FA0::func_001A9FA0(float s, V4_001A96D0 v, V4_001A96D0 q, Obj_001A9FA0 *other, unsigned mask)
{
    Home_001A9FA0 h;
    float p[3];

    h.self = this;
    float d = v.x * h.self->f124 + v.z * h.self->f12c + v.y * h.self->f128;
    p[0] = v.x * d;
    p[1] = v.y * d;
    p[2] = v.z * d;
    V4_001A96D0 t;
    t.x = h.self->f124 - p[0];
    t.y = h.self->f128 - p[1];
    t.z = h.self->f12c - p[2];
    h.a = t;
    func_001A8DC0(&h.b, &h.a);
    V4_001A96D0 nb;
    nb.x = -h.b.x;
    nb.y = -h.b.y;
    nb.z = -h.b.z;
    h.b = nb;
    float len = AsmSqrtF(h.a.y * h.a.y + h.a.z * h.a.z + h.a.x * h.a.x) * D_002755E8;
    float m = AsmMinF(len, 1.0f);
    float k = m * h.self->f24->f210 * s * D_00275BF8;
    V4_001A96D0 w;
    w.x = h.b.x * k;
    w.y = h.b.y * k;
    w.z = h.b.z * k;
    if (!(h.self->f24->f204 & mask))
        h.self->func_001A96D0(h.self->f24, w, q, h.self->fc8);
    if (other && !(h.self->f7c & other->f204)) {
        V4_001A96D0 nw;
        nw.x = -w.x;
        nw.y = -w.y;
        nw.z = -w.z;
        h.self->func_001A96D0(other, nw, q, h.self->fc8);
    }
}
