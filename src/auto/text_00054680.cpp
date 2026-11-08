/* 6 functions from 0x00054680 to 0x00055380, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

struct V_000551B0 {
    int x, y, z, w;
};
extern V_000551B0 D_002A1A64;
extern int D_002A1A68, D_002A1A6C, D_002A1A70;

static __forceinline void copyQuat_000551B0(V_000551B0 *d, const V_000551B0 *s)
{
    *d = *s;
}
extern int D_002BA160, D_002B9118, D_002B9108, D_002B9114, D_002B9110, D_002B910C;

struct Q_000551B0_Src {
    int pad0;
    int count;
    char pad8[0x1c];
    V_000551B0 f24;
    char pad34[0x20];
    V_000551B0 f54;
};
struct Q_000551B0_Dst {
    char pad0[0x10c];
    V_000551B0 f10c;
    V_000551B0 f11c;
    int f12c;
};
struct Q_000551B0_Owner {
    char pad0[0x54];
    Q_000551B0_Src *f54;
    char pad58[8];
    Q_000551B0_Dst *f60;
};
struct Q_000551B0_Item {
    char pad0[0x68];
    int f68;
};

struct S_00054430_V4 {
    float x, y, z, w;
    S_00054430_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_00054430_V4(float px, float py, float pz, float pw) { x = px; y = py; z = pz; w = pw; }
};
struct S_00054430_Orient {
    S_00054430_V4 func_00198040(S_00054430_V4 *v);
};
struct S_00054430_Item {
    char pad0[0x230]; S_00054430_Orient *f230;
    char pad234[0x834 - 0x234]; S_00054430_V4 f834;
};
struct S_00054430_Items {
    char pad0[0x1a8]; S_00054430_Item *f1a8[2];
};
struct S_00054430_Ctx {
    char pad0[0x4e0]; S_00054430_Items *f4e0;
};
struct S_00054680_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    void func_00088A40(int a, S_00054430_V4 *v);
};
struct C_00054680 {
    char pad0[0x64]; S_00054430_Ctx *f64;
    char pad68[0x28]; int f90;
    char pad94[0x284 - 0x94]; S_00054680_Obj *f284[8];
    S_00054680_Obj *f2a4[8];
    int f2c4;
    void func_00054680();
};
void func_00053CB0(S_00054430_V4 *out, S_00054430_V4 *in);
float func_0014FBA0(float a, float b);
extern float D_00277240;
extern float D_002755EC;

static __forceinline void NormInPlace_00054680(S_00054430_V4 *p)
{
    func_00053CB0(p, p);
}

static __forceinline void Aim_00054680(C_00054680 *self, S_00054430_V4 &a, S_00054430_V4 &b, int k)
{
    S_00054430_V4 *q = &self->f64->f4e0->f1a8[k]->f834;
    S_00054430_V4 *pos = &self->f64->f4e0->f1a8[1 - k]->f834;
    float ang;

    a = S_00054430_V4(pos->x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, &a);
    a = self->f64->f4e0->f1a8[k]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z);
    b = self->f64->f4e0->f1a8[1 - k]->f834;
    b.y += 3.0f;
    self->f2a4[k]->func_00088A40((int)(ang * 57.29578f), &b);
}

static __forceinline float Sqrt549(float f) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&f)); return r; }
struct V549 { float x, y, z, w; };
struct Item549 {
    char pad0[0x5c8]; int f5c8;
    char pad5cc[0x834 - 0x5cc]; V549 f834;
    char pad844[0xa00 - 0x844]; struct SubA00549 *fa00;
    char pada04[0xa3c - 0xa04]; int fa3c; int fa40;
    char pada44[8]; int fa4c; char pada50[4]; int fa54;
    char pada58[0x1058 - 0xa58]; int f1058;
    char pad105c[0x11b0 - 0x105c]; int f11b0;
    char pad11b4[0x1584 - 0x11b4]; int f1584;
    int func_00108660(); void func_001084E0(); void func_001092D0(float);
};
struct SubA00549 { void *pad0; struct Obj983549 *f4; };
struct Obj983549 {
    void *func_00198330(const char *);
    void func_00197E70(V549 *);
    V549 *func_00197F70(V549 *, V549 *);
};
struct Items549 { char pad0[0x24]; int count24; char pad28[0x1a8 - 0x28]; Item549 *items[16]; };
struct List549 { char pad0[0x28]; void **items; };
struct Lookup549 { int func_0001B3C0(const char *); void func_0001B820(void *); void func_0001B8A0(void *); };
struct Ctx549 {
    char pad0[0x3ac]; List549 *f3ac; char pad3b0[4]; List549 *f3b4;
    char pad3b8[0x484 - 0x3b8]; Lookup549 *f484;
    char pad488[0x4e0 - 0x488]; Items549 *f4e0;
};
struct Entry549 { int pad0; struct Obj2E8549 *f4; };
struct Obj2E8549 { char pad0[0x2e8]; int f2e8; unsigned char flags2ec; };
struct TagObj549 { void func_00199600(V549); void func_0019AC50(); };
struct Bx549 { char pad0[0x1a4]; TagObj549 *f1a4arr[2]; };
struct BxSub549 { void *pad0; TagObj549 *f4; };
struct Rules549 { int func_0005B960(int, float); int func_0005B960(int, int); };
struct Sub190549 { char pad0[0x168]; int f168; void func_00067D60(int, int); void func_000684B0(); };
struct Obj8BB549 { void func_0008BB50(int); };
struct Obj831549 { int func_000831C0(); };
struct Glob2A4549 { char pad0[0x170]; Obj831549 *arr[16]; };
struct GlobInfo549 { int f0; char pad4[0xc]; float f10; char pad14[0xc]; int f20; };
struct Glob549 { char pad0[0x2a4]; Glob2A4549 *f2a4; char pad2a8[0x2e0 - 0x2a8]; GlobInfo549 *f2e0; };
extern Glob549 *D_002A8490;
extern char D_00277C9C;
extern char D_00277CA4;
extern V549 D_002A1988;
extern float D_00275544;
int func_00011260(int, int);
struct CtxF54430 { void func_00054430(); };
struct Vt549 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(int);
};
struct C_000549F0 {
    char pad0[0x64]; Ctx549 *f64; Rules549 *f68;
    char pad6c[0x24]; int f90;
    char pad94[0x90]; float f124; float f128; int f12c;
    char pad130[0x60]; Sub190549 *f190;
    char pad194[0x60]; int f1f4;
    char pad1f8[0x8c]; Obj8BB549 *f284[16];
    int f2c4; int f2c8; float f2cc; int f2d0;
    char pad2d4[0xc]; float f2e0; float f2e4; int f2e8;
    void func_000549F0(float dt);
    void func_00157A00(float dt);
    void func_00031260(float dt);
    void func_00054210(float dt);
    void func_00054680();
};

struct C_000549C0 {
    void *vtbl;
    void *func_000549C0(int flags);
};

struct C_00054960 {
    char pad0[0x90];
    int f90;
    char pad94[0x1f0];
    void *f284[8];
    void *f2a4[1];
    void func_00054960(void);
    void func_001577A0(void *a, int b);
};

void C_00054680::func_00054680()
{
    S_00054430_V4 a;
    S_00054430_V4 b;
    S_00054430_V4 *q;
    S_00054430_V4 *pos;
    float ang;
    int i;
    int deg;

    q = &f64->f4e0->f1a8[0]->f834;
    pos = &f64->f4e0->f1a8[1]->f834;
    a = S_00054430_V4(pos->x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, &a);
    a = f64->f4e0->f1a8[0]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z);
    b = f64->f4e0->f1a8[1]->f834;
    b.y += 3.0f;
    deg = (int)(ang * 57.29578f);
    f2a4[0]->func_00088A40(deg, &b);

    q = &f64->f4e0->f1a8[1]->f834;
    pos = &f64->f4e0->f1a8[0]->f834;
    a = S_00054430_V4(pos->x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, &a);
    a = f64->f4e0->f1a8[1]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z);
    b = f64->f4e0->f1a8[0]->f834;
    b.y += 3.0f;
    deg = (int)(ang * 57.29578f);
    f2a4[1]->func_00088A40(deg, &b);

    for (i = 0; i < f90; i++) {
        if (i == f2c4) {
            f284[i]->v4();
            f2a4[i]->v4();
        } else {
            f284[i]->v6();
            f2a4[i]->v6();
        }
    }
}

void C_00054960::func_00054960(void)
{
    int func_00031640(...);
    int i;

    func_00031640();
    for (i = 0; i < f90; i++) {
        if (f284[i] != 0) {
            func_001577A0(f284[i], -1);
        }
        if (f2a4[i] != 0) {
            func_001577A0(f2a4[i], -1);
        }
    }
}

void *C_000549C0::func_000549C0(int flags) {
    extern int D_00277B74;
    void func_00033220();
    void func_001E891B(void *);
    vtbl = (void *)&D_00277B74;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

float sqrtf(float);
void C_000549F0::func_000549F0(float dt)
{
    Bx549 *bx;
    int i;
    int edi;
    if (f1f4) {
        func_00157A00(dt);
        return;
    }
    bx = (Bx549 *)f64->f3ac->items[f64->f484->func_0001B3C0(&D_00277C9C)];
    if (f2c4 < 0) {
        for (i = 0; i < f90; i++) {
            f64->f4e0->items[i]->fa3c = 1;
        }
        if (f64->f3b4 != 0) {
            ((CtxF54430 *)this)->func_00054430();
            Obj2E8549 *e = ((Entry549 *)f64->f3b4->items[f2c8])->f4;
            if (e->flags2ec & 0x10) {
                for (i = 0; i < f90; i++) {
                    if (e->f2e8 == f64->f4e0->items[i]->f11b0) {
                        f2c4 = i;
                    }
                }
            }
        }
    } else {
        V549 v1;
        V549 v0;
        V549 tmp;
        func_00054680();
        edi = 1;
        for (i = 0; i < f90; i++) {
            if (f64->f4e0->items[i]->f5c8 == 0) {
                edi = 0;
            }
        }
        if (edi) {
            f64->f484->func_0001B820(bx);
        } else {
            if (f2e8 == 0) {
                f64->f484->func_0001B8A0(bx);
            }
            f2e8 = edi;
        }
        if (f64->f4e0->items[f2c4]->f5c8 == 0 && f64->f4e0->items[f2c4]->f1584 == 0 && !edi) {
            int prev = f2c4;
            do {
                f2c4 = func_00011260(0, D_002A8490->f2e0->f0 - 1);
            } while (f2c4 == prev);
            func_00031260(dt);
            return;
        }
        v0 = f64->f4e0->items[0]->f834;
        v1 = f64->f4e0->items[1]->f834;
        {
            float dx = v1.x - v0.x;
            float dy = v1.y - v0.y;
            float dz = v1.z - v0.z;
            float sum = dx * dx + dy * dy + dz * dz;
            float dist = AsmSqrtF(sum);
            if (dist <= f2e0 && f2cc <= D_00275544) {
                f2c4 = (f2c4 == 0);
                f2cc = f2e4;
            } else {
                if (f2cc > D_00275544) {
                    f2cc -= dt;
                    if (f2cc <= D_00275544) {
                        f2cc = 0.0f;
                    }
                }
            }
        }
        for (i = 0; i < f90; i++) {
            if (i == f2c4) {
                f64->f4e0->items[i]->fa3c = 0;
            } else {
                f64->f4e0->items[i]->fa3c = 1;
                if (D_002A8490->f2a4->arr[i]->func_000831C0()) {
                    f64->f4e0->items[f2c4]->func_001092D0(0.5f);
                } else {
                    f64->f4e0->items[f2c4]->func_001092D0(1.0f);
                }
                f64->f4e0->items[i]->func_001092D0(1.0f);
                f284[i]->func_0008BB50(f2c4);
            }
        }
        {
            Obj983549 *o;
            void *obj;
            Obj983549 *os;
            V549 *ret;
            f64->f484->func_0001B3C0(&D_00277C9C);
            o = f64->f4e0->items[f2c4]->fa00->f4;
            obj = o->func_00198330(&D_00277CA4);
            os = (Obj983549 *)obj;
            tmp = D_002A1988;
            os->func_00197E70(&tmp);
            ret = os->func_00197F70(&v0, &tmp);
            tmp = *ret;
            ((BxSub549 *)bx->f1a4arr[0])->f4->func_00199600(*ret);
            ((BxSub549 *)bx->f1a4arr[0])->f4->func_0019AC50();
        }
    }
    if (f190) {
        int all;
        if (!f2d0) {
            GlobInfo549 *m = D_002A8490->f2e0;
            if (!m->f20) { if (f128 <= D_00275544) f2d0 = 1; }
            else { if (f124 > m->f10) f2d0 = 1; }
        }
        all = 1;
        for (i = 0; i < f90; i++) {
            if (!f64->f4e0->items[i]->func_00108660()) all = 0;
        }
        if (f2d0) {
            for (i = 0; i < f90; i++) {
                f64->f4e0->items[i]->func_001084E0();
            }
        }
        if (f2d0 && all && !f190->f168) {
            for (i = 0; i < f90; i++) {
                f190->func_00067D60(i, f64->f4e0->items[i]->fa40);
            }
            ((Vt549 *)this)->v18(1);
            for (i = 0; i < f64->f4e0->count24; i++) {
                if (f68->func_0005B960(3, (float)f12c)) break;
                if (f68->func_0005B960(1, f64->f4e0->items[i]->fa4c)) break;
                if (f68->func_0005B960(4, (float)f64->f4e0->items[i]->fa40)) break;
                if (f68->func_0005B960(2, f64->f4e0->items[i]->f1058)) break;
                f68->func_0005B960(0, f64->f4e0->items[i]->fa54);
            }
            f190->func_000684B0();
        }
    }
    func_00054210(dt);
    func_00031260(dt);
}

void func_00055140(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_000551B0(Q_000551B0_Owner *a, Q_000551B0_Item *b)
{
    Q_000551B0_Src *d;
    Q_000551B0_Dst *s;
    if (b->f68 == D_002BA160 || b->f68 == D_002B9118 ||
        b->f68 == D_002B9108 || b->f68 == D_002B9114 ||
        b->f68 == D_002B9110) {
        d = a->f54;
        s = a->f60;
        s->f11c = D_002A1A64;
        s->f10c = D_002A1A64;
        if (d->count > 0) {
            s->f10c = d->f54;
            s->f11c = d->f24;
        }
        s->f12c = 1;
    }
}

