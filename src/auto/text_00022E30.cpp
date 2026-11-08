/* 6 functions from 0x00022E30 to 0x00023CB0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <xmmintrin.h>

extern int D_00276218;
extern float D_0027627C;
extern "C" int func_001E8920(char *d, const char *s, int n);
extern "C" unsigned int __cdecl strlen(const char *);
extern char D_002A5EA0[], D_002A60B0[], D_002A48F8[], D_002A46E8[];
struct C_00022E30;
struct S_Vec4i_00023C30 {
    int x, y, z, w;
};
extern S_Vec4i_00023C30 D_002A0F74;

void func_001E891B(void *p);

struct V4_00023340 {
    float x, y, z, w;
    V4_00023340() { x = y = z = 0; w = 1.0f; }
    V4_00023340(float a, float b, float c) { x=a; y=b; z=c; w=1.0f; }
};

/* ---- C_00022E30: path follower variant at 0x22E30 ---- */
struct S_000235C0_Tbl;
struct S_000235C0_Cam;
void func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_002A45E0[], D_002A5348[], D_00275678[], D_002A5FA8[], D_002A47F0[], D_002A5870[];
extern int D_002B9120;

__forceinline void copy_22E30(char *dst, const char *src, int max)
{
    int length = strlen(src);
    int limit = max;
    int n = AsmMinI(limit, length);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

struct C_00022E30_Cfg {
    int f0;
    int f4;
    unsigned char f8;
    char pad9[3];
    int fc;
    V4_00023340 f10;
};

struct C_00022E30_Rig {
    int pad0;
    S_000235C0_Cam *f4;
};

struct C_00022E30_State {
    char pad0[0x108];
    int f108;
};

struct C_00022E30_Owner {
    virtual void v0();
    virtual void v1();
    virtual void v2(int);
    char pad4[0x1a0];
    C_00022E30_Rig *f1a4;
    C_00022E30_State *f1a8;
};

struct C_00022E30 {
    char pad0[0x24];
    C_00022E30_Cfg *f24;
    C_00022E30_Owner *f28;
    S_000235C0_Tbl *f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    char pad48[4];
    V4_00023340 f4c;
    V4_00023340 f5c;
    char pad6c[0xc];
    unsigned char f78;
    unsigned char f79;
    unsigned char f7a;
    void func_00022E30(void);
    void func_000219E0(int idx);
};

void func_000212C0(V4_00023340 *out, V4_00023340 *in);
static __forceinline float Min_239F0(float a,float b) { return _mm_min_ss(_mm_set_ss(a),_mm_set_ss(b)).m128_f32[0]; }

inline void cross_00023340(float *out, float *a, float *b)
{
    _mm_storeu_ps(out, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))), 0xc9));
}

struct C_00023340_Sub {
    void func_00198F50(V4_00023340 *a, V4_00023340 *b, int c, int d, int e);
};

struct C_00023340_Rig {
    int pad0;
    C_00023340_Sub *f4;
};

struct C_00023340_Owner {
    char pad0[0x1a4];
    C_00023340_Rig *f1a4;
};

struct C_00023340_Elem {
    float px, py, pz;
    float dx, dy, dz;
};

struct C_00023340_Tbl {
    int pad0;
    int count;
    char pad8[0x10];
    C_00023340_Elem *elems;
    char pad1c[0x10];
    char f2c;
    char pad2d[2];
    char f2f;
};

struct C_00023340 {
    char pad0[0x28];
    C_00023340_Owner *f28;
    C_00023340_Tbl *f2c;
    int pad30;
    int f34;
    int f38;
    char pad3c[0x10];
    V4_00023340 f4c;
    V4_00023340 f5c;
    float f6c;
    float f70;
    inline void Wrap()
    {
        if (f34 < 0 || f34 >= f2c->count) {
            f34 = 0;
        }
        f38 = f34 + 1;
        if (f38 >= f2c->count) {
            f38 = 0;
        }
    }
    void func_00023340();
};

/* Path follower (same class as C_00023340): walks along tables kept in D_002B7E18 */
struct V4_000235C0 {
    float x, y, z, w;
};

/* V4 built from a float triple (w = 1.0f); func_000212A0 is its constructor */
struct func_000212A0 {
    u32 x, y, z, w;
    func_000212A0(u32 *p);
    func_000212A0(const func_000212A0 &o) { x = o.x; y = o.y; z = o.z; w = o.w; }
};

struct W4_000235C0 {
    u32 x, y, z, w;
    W4_000235C0 *func_000212A0(u32 *p);
    inline void Set(u32 *p)
    {
        x = p[0];
        y = p[1];
        z = p[2];
        w = 0x3f800000;
    }
};

struct S_000235C0_V3 {
    float x, y, z;
};

struct S_000235C0_Elem {
    S_000235C0_V3 p;
    S_000235C0_V3 d;
};

struct S_000235C0_Tbl {
    int f0;
    int count;
    int f8;
    int fc;
    int f10;
    int f14;
    S_000235C0_Elem *elems;
    float f1c[4];
    unsigned char f2c;
    unsigned char f2d;
    unsigned char f2e;
    unsigned char f2f;
};

struct S_000235C0_Pt {
    u32 x, y, z;
    int used;
};

struct S_000235C0_Grp {
    int count;
    int cur;
    int f8;
    int fc;
    S_000235C0_Pt *pts;
};

struct S_000235C0_Mgr {
    char pad0[0x34];
    int f34;
    int f38;
    char pad3c[0x28];
    S_000235C0_Tbl **f64;
    S_000235C0_Grp **f68;
};

struct S_000235C0_Cam {
    void func_00199600(func_000212A0 v);
    void func_00199600(W4_000235C0 v);
    void func_00199600(V4_00023340 v);
    void func_00199110(int a, void *pos, void *dir, int b, int c, int d);
    void func_00198F50(V4_000235C0 *a, V4_000235C0 *b, int c, int d, int e);
};

struct S_000235C0_Rig {
    int pad0;
    S_000235C0_Cam *f4;
};

struct S_000235C0_Owner {
    char pad0[0x1a4];
    S_000235C0_Rig *f1a4;
};

extern S_000235C0_Mgr *D_002B7E18;
extern int D_002A0F94;
void func_00011110(V4_000235C0 *out, void *a, void *b);

struct C_000235C0 {
    char pad0[0x28];
    S_000235C0_Owner *f28;
    S_000235C0_Tbl *f2c;
    int f30;
    int f34;
    int f38;
    char pad3c[0xc];
    union {
        int f48;
        unsigned char b48[4];
    };
    W4_000235C0 f4c;
    V4_000235C0 f5c;
    char pad6c[0x78 - 0x6c];
    unsigned char f78;
    unsigned char f79;
    void func_00021A20();
    int func_00021A50(int idx, int v);
    void func_000219E0(int idx);
    void func_000239F0(float dt);
    inline void Select(int idx)
    {
        if (idx >= 0 && idx < D_002B7E18->f34 && D_002B7E18->f64[idx]->count != 0) {
            f2c = D_002B7E18->f64[idx];
            f30 = idx;
            f34 = 0;
            func_00021A20();
        }
    }
    void func_000235C0();
};

/* AmbientDebrisType */
struct C_00023BE0 {
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
    float unk2C;
    int unk30;
    int unk34;
    int unk38;
    float unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    void *func_00023BE0(int flags);
    C_00023BE0 *func_00023C30(int a, int b, int c, int d);
};

void C_00022E30::func_00022E30(void)
{
    char a[0x104], c[0x104], b[0x104], d[0x104];

    copy_22E30(c, D_002A5EA0, 0x103);
    copy_22E30(b, D_002A60B0, 0x103);
    copy_22E30(a, D_002A48F8, 0x103);
    copy_22E30(d, D_002A46E8, 0x103);

    if (f28->f1a8->f108) {
        func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A45E0);
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
        func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
        func_001ADCC0(D_002A46E8, 0x104, D_00275678, D_002A5348, D_002A45E0);
    } else {
        func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
        func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
        func_001ADCC0(D_002A46E8, 0x104, D_00275678, D_002A5870, D_002A45E0);
    }

    f28->v2(D_002B9120);
    f28->f1a4->f4->func_00199600(*(V4_00023340 *)((char *)f24 + 0x10));
    f5c = *(V4_00023340 *)((char *)f24 + 0x10);
    f79 = f24->f8;
    f44 = f24->fc;
    f78 = 0;
    if (f7a == 0) {
        f30 = f24->f0;
        f3c = f30;
        f2c = D_002B7E18->f64[f30];
        f34 = f24->f4;
        f40 = f34;
        f38 = f34 + 1;
        if (f79 == 1) {
            S_000235C0_Elem *e = &f2c->elems[f38];
            V4_00023340 *v = &f4c;
            v->x = e->p.x;
            v->y = e->p.y;
            v->z = e->p.z;
            v->w = 1.0f;
            func_000219E0(2);
        } else {
            if (f2c->f2c == 0) {
                f2c->f2d = 1;
                f28->f1a4->f4->func_00199110(0, &f2c->f1c, &D_002A0F94, 0, 1, 1);
            }
            f4c = *(V4_00023340 *)((char *)f24 + 0x10);
            func_000219E0(0);
        }
    }
    {
        C_00022E30_Cfg *cfg = f24;
        if (cfg != 0) {
            func_001E891B(cfg);
            f24 = 0;
        }
    }
    copy_22E30(D_002A5EA0, c, 0x103);
    copy_22E30(D_002A60B0, b, 0x103);
    copy_22E30(D_002A48F8, a, 0x103);
    copy_22E30(D_002A46E8, d, 0x103);
}

void C_00023340::func_00023340()
{
    C_00023340 *volatile self = this;

    self->f34++;
    self->Wrap();
    if (self->f2c->f2c == 1 || self->f2c->f2f == 1) {
        C_00023340_Elem *e = &self->f2c->elems[self->f38];
        V4_00023340 p;
        V4_00023340 dir;
        V4_00023340 cr;
        V4_00023340 up;
        V4_00023340 t;

        p.x = e->px;
        p.y = e->py + self->f70;
        p.z = e->pz;
        dir.x = p.x - self->f5c.x;
        dir.y = p.y - self->f5c.y;
        dir.z = p.z - self->f5c.z;
        func_000212C0(&dir, &dir);
        e = &self->f2c->elems[self->f38];
        up.x = e->dx;
        up.y = e->dy;
        up.z = e->dz;
        cross_00023340(&cr.x, &up.x, &dir.x);
        t.x = cr.x * self->f6c + p.x;
        t.y = cr.y * self->f6c + p.y;
        t.z = cr.z * self->f6c + p.z;
        self->f4c = t;
    } else {
        C_00023340_Elem *e = &self->f2c->elems[self->f38];
        self->f4c.x = e->px;
        self->f4c.y = e->py;
        self->f4c.z = e->pz;
        self->f4c.w = 1.0f;
    }
    {
        V4_00023340 v;
        V4_00023340 up2;
        C_00023340_Elem *e2;

        v.x = self->f4c.x - self->f5c.x;
        v.y = self->f4c.y - self->f5c.y;
        v.z = self->f4c.z - self->f5c.z;
        e2 = &self->f2c->elems[self->f34];
        up2.x = e2->dx;
        up2.y = e2->dy;
        up2.z = e2->dz;
        func_000212C0(&v, &v);
        self->f28->f1a4->f4->func_00198F50(&v, &up2, 0, 1, 0);
    }
}

void C_000235C0::func_000235C0()
{
    int i;
    int j;

    if (f2c->f2c == 0) {
        if (f34 >= f2c->count - 2 && f2c->f10 != -1) {
            if (D_002B7E18->f64[f2c->f10]->f2c == 0 && f79 == 1) {
                if (f34 >= f2c->count - 1) {
                    if (f78 != 2) {
                        for (i = 0; i < D_002B7E18->f38; i++) {
                            if (f30 == D_002B7E18->f68[i]->f8) {
                                for (j = 0; j < D_002B7E18->f68[i]->count; j++) {
                                    if (D_002B7E18->f68[i]->pts[j].used == 0) {
                                        V4_000235C0 up;
                                        V4_000235C0 dir;
                                        S_000235C0_V3 *d;

                                        f78 = 2;
                                        f48 = (j << 8) | i;
                                        D_002B7E18->f68[i]->pts[j].used = 1;
                                        f4c.Set(&D_002B7E18->f68[i]->pts[j].x);
                                        func_00011110(&dir, &f4c, &f5c);
                                        d = &f2c->elems[f34].d;
                                        up.x = d->x;
                                        up.y = d->y;
                                        up.z = d->z;
                                        up.w = 1.0f;
                                        func_000212C0((V4_00023340 *)&dir, (V4_00023340 *)&dir);
                                        f28->f1a4->f4->func_00198F50(&dir, &up, 0, 1, 0);
                                        return;
                                    }
                                }
                            }
                        }
                    }
                    if (f78 == 1) {
                        f28->f1a4->f4->func_00199600(func_000212A0((u32 *)&f2c->elems[f34]));
                        f28->f1a4->f4->func_00199110(0, &f2c->f1c, &D_002A0F94, 0, 1, 1);
                        f4c.func_000212A0((u32 *)&f2c->elems[f34]);
                    } else if (f78 == 2) {
                        f28->f1a4->f4->func_00199600(f4c);
                        f28->f1a4->f4->func_00199110(0, &f2c->f1c, &D_002A0F94, 0, 1, 1);
                    }
                    f79 = 0;
                    f78 = 0;
                    func_000219E0(0);
                }
            } else {
                int wasLocked;
                int k;

                f2c->f2d = 0;
                wasLocked = f2c->f2c;
                func_00021A50(f2c->f10, f2c->f14);
                if (wasLocked != 0 || f2c->f2c != 0) {
                    func_000219E0(2);
                    return;
                }
                func_000219E0(1);
                for (k = 0; k < D_002B7E18->f38; k++) {
                    if (f2c->f8 == D_002B7E18->f68[k]->f8) {
                        D_002B7E18->f68[f48 & 0xff]->pts[b48[1]].used = 0;
                        f48 = 0;
                        D_002B7E18->f68[k]->cur--;
                        if (D_002B7E18->f68[k]->cur < 0) {
                            D_002B7E18->f68[k]->cur = 0;
                        }
                        return;
                    }
                }
            }
        }
    } else {
        int i2;
        int k;
        int n = D_002B7E18->f34;

        for (i2 = 0; i2 < n; i2++) {
            S_000235C0_Tbl *t = D_002B7E18->f64[i2];
            if (f30 == t->f8 && f34 == t->fc && t->f2d == 0) {
                Select(i2);
                if (f2c->f2c == 0) {
                    f78 = 1;
                    if (f2c->f2f == 0) {
                        f2c->f2d = 1;
                        return;
                    }
                    k = 0;
                    while (k < D_002B7E18->f38) {
                        if (f30 == D_002B7E18->f68[k]->f8) {
                            D_002B7E18->f68[k]->cur++;
                            if (D_002B7E18->f68[k]->cur >= D_002B7E18->f68[k]->count) {
                                f2c->f2d = 1;
                                D_002B7E18->f68[k]->cur = D_002B7E18->f68[k]->count;
                            }
                            return;
                        }
                        k++;
                    }
                }
                return;
            }
        }
    }
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_000235C0::func_000239F0(float dt)
{
    V4_00023340 v(*(float *)&f4c.x - f5c.x, *(float *)&f4c.y - f5c.y, *(float *)&f4c.z - f5c.z), out;
    func_000212C0(&v, &v);
    if (f78) {
        float lim = 0.65f;
        float ratio = (float)(f2c->count - f34) / (float)f2c->count;
        _ReadWriteBarrier();
        float s = AsmMinF(lim, ratio);
        s = s + D_0027627C;
        s = s * *(float *)&f2c->f0;
        s = s * dt;
        v.x = s * v.x; v.y = s * v.y; v.z = s * v.z;
        out.x = v.x + f5c.x; out.y = v.y + f5c.y; out.z = v.z + f5c.z; out.w = 1.0f;
        f28->f1a4->f4->func_00199600(out);
        if (f34 == f2c->count - 3 && *(int *)((char *)f28->f1a4 + 0x18) != *(int *)(*(char **)((char *)f28 + 0x1ac) + 0xc)) func_000219E0(3);
    } else {
        float s = dt * *(float *)&f2c->f0;
        v.x = s * v.x; v.y = s * v.y; v.z = s * v.z;
        out.x = v.x + f5c.x; out.y = v.y + f5c.y; out.z = v.z + f5c.z; out.w = 1.0f;
        f28->f1a4->f4->func_00199600(out);
    }
}
void *C_00023BE0::func_00023BE0(int flags)
{
    vtbl = &D_00276218;
    if (unk18 != 0) {
        func_001E891B((void *)unk18);
        unk18 = 0;
        unk14 = 0;
    }
    if (unkC != 0) {
        func_001E891B((void *)unkC);
        unkC = 0;
        unk8 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

struct Vec4_00023C30 {
    int x, y, z;
    float w;
    Vec4_00023C30() {
        x = y = z = 0;
        w = 1.0f;
    }
};

struct C_00023C30 {
    Vec4_00023C30 v0;
    int unk10;
    char pad14[8];
    int unk1C;
    Vec4_00023C30 v20;
    Vec4_00023C30 v30;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    C_00023C30(int a, int b, int c, int d);
};

C_00023C30::C_00023C30(int a, int b, int c, int d)
{
    unk44 = b;
    unk48 = a;
    unk4C = c;
    unk50 = d;
    unk1C = 0;
    *(S_Vec4i_00023C30 *)&v0 = D_002A0F74;
    unk40 = 0;
    unk10 = 1;
}
