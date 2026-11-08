/* 13 functions from 0x00179B40 to 0x0017AA90, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "asm_helpers.h"
struct ShadowPieceTable { char pad0[8]; int count; };
struct DXRenderableObject { char pad0[0x1a4]; ShadowPieceTable *f1a4; };
struct Alloc190;
struct DXShadowCaster {
    virtual void v0();
    virtual void v1();
    virtual void v2(DXRenderableObject *);
    DXRenderableObject *f4;
    int f8;
    Alloc190 *fc;
    DXShadowCaster *func_00143820(DXRenderableObject *);
};
static inline const int &ShadowMin(const int &a, const int &b) { return a > b ? b : a; }
struct C_0017A700 {
    char pad0[0xf0];
    DXShadowCaster **fF0;
    int fF4, fF8;
    void func_0017A700(DXRenderableObject *owner, int index);
};
struct C_0017B9E0 {
    int unk0, unk4;
    void func_001D3F50();
    C_0017B9E0 *func_0017B9E0(int a0, int a1);
};
struct C_0017BB10 {
    void func_0017BB10(C_0017B9E0 *p);
    void func_0017BB50(struct V4_0017A8F0 *p);
    void func_0017BE40();
};
extern C_0017BB10 D_002EFD38;
struct C_0017A6F0 {
    char pad0[0x134];
    int unk134;
    void func_0017A6F0(int a0);
};

struct C_0017A850 {
    char pad0[0xF4];
    int unkF4;
    void func_0017A850(void);
};

struct V4_0017A8F0 { float x, y, z, w; };
struct C_0017A8F0 {
    char pad0[0xfc];
    void *fFC;
    char pad100[0x18];
    int f118;
    int func_0017A8F0(V4_0017A8F0 *a0, V4_0017A8F0 *a1, int mode);
};
extern float D_002A8D0C, D_002A8D10, D_002A8D14, D_002A8D18, D_002A8CE0, D_00275800;
extern int D_002EFD6C;
extern struct { char pad[4]; char *p; } *D_002EFDB8;
V4_0017A8F0 *func_0001E9E0(V4_0017A8F0 *, V4_0017A8F0 *);
V4_0017A8F0 *func_0001C610(V4_0017A8F0 *, V4_0017A8F0 *, V4_0017A8F0 *);
void func_0017A460(V4_0017A8F0 *, V4_0017A8F0 *);
void __stdcall func_0012AB70(V4_0017A8F0 *, V4_0017A8F0 *, V4_0017A8F0 *, int, int);

extern int D_00288ED4;
extern int D_00288F84;
extern void func_001E8390(void *p);

struct C_0017A2E0 {
    void *vtbl;
    void func_00157660();
    void *func_0017A2E0(unsigned int flags);
};

struct C_0017A640_Vtbl0 {
    virtual void v0(int a0);
};

struct C_0017A640_Vtbl2 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0017A640_Mgr {
    void func_001B26C0(int a0);
};

extern C_0017A640_Mgr *D_002A829C;

struct C_0017A640 {
    void *vtbl;
    char pad4[0xEC];
    C_0017A640_Vtbl0 **fF0;
    char padF4[4];
    int fF8;
    C_0017A640_Vtbl2 *fFC;
    char pad100[0x40];
    void *f140;
    char pad144[0x10];
    int f154;
    void *f158;
    char pad15C[4];
    C_0017A640_Vtbl0 *f160;
    void func_00157660();
    void func_0017A640();
};

struct C_0017A1D0_Vec4 {
    float x, y, z, w;
};

static inline float C_0017A1D0_Dot(const C_0017A1D0_Vec4 &a, const C_0017A1D0_Vec4 &b)
{
    return a.z * b.z + (a.x * b.x + a.y * b.y);
}

struct C_00179B40 { char pad0[0x24]; float f24, f28, f2c; char pad30[0x34]; float f64, f68, f6c; int func_00179B40(C_0017BB10 *a0, char *a1); };
extern void func_00161BE0(V4_0017A8F0 *, void *, ...);
extern int func_001325D0(V4_0017A8F0 *);
extern int func_00132650(V4_0017A8F0 *, V4_0017A8F0 *, int);
extern float D_00275544, D_00275460;
struct V3_0017A010 { float x, y, z; };
static inline float V3Dot_0017A010(const V3_0017A010 &a, const V3_0017A010 &b)
{
    return a.z * b.z + (a.x * b.x + a.y * b.y);
}
static inline void V3Sub_0017A010(V3_0017A010 &r, const V3_0017A010 &a, const V3_0017A010 &b)
{
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
}
static inline void V3Scale_0017A010(V3_0017A010 &r, const V3_0017A010 &v, float s)
{
    r.x = v.x * s;
    r.y = v.y * s;
    r.z = v.z * s;
}
static inline void V3Add_0017A010(V3_0017A010 &r, const V3_0017A010 &a, const V3_0017A010 &b)
{
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
}
int func_001793E0(C_0017A1D0_Vec4 *p, V3_0017A010 *n, V3_0017A010 *o, V3_0017A010 *a, V3_0017A010 *b, V3_0017A010 *c);
struct C_0017A010 {
    char pad0[0x24];
    V3_0017A010 f24;
    char pad30[4];
    V3_0017A010 f34;
    char pad40[4];
    V3_0017A010 f44;
    char pad50[4];
    V3_0017A010 f54;
    char pad60[4];
    V3_0017A010 f64;
    int func_0017A010(V3_0017A010 *a, V3_0017A010 *b, C_0017A1D0_Vec4 *out);
};

static inline float C_0017A1D0_Fabs(const float &f)
{
    int i = *(int *)&f;
    i &= 0x7fffffff;
    return *(float *)&i;
}

static inline float C_0017A1D0_Abs(volatile float f)
{
    union { float f; int i; } u;
    u.f = f;
    u.i &= 0x7fffffff;
    return u.f;
}

static __forceinline float C_0017A1D0_AbsV(float x)
{
    volatile int tmp;
    tmp = *(int *)&x & 0x7fffffff;
    return *(float *)&tmp;
}

struct C_0017A1D0 {
    char pad0[0x24];
    C_0017A1D0_Vec4 pts[4];
    C_0017A1D0_Vec4 normals[5];
    int func_0017A1D0(float *p, float r, float *out);
    C_0017A1D0 *func_0017A310(C_0017A1D0_Vec4 *p);
    void func_00179880();
    void func_00179950();
};

extern int D_002A8CEC, D_002A8CF0, D_002A8CF4, D_002A8CF8;

static __forceinline void ZeroVec4_0017A4D0(int *v)
{
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
}

/* ProjectedShadow: GameObject (0xb0 bytes) followed by four vec4s and shadow state */
struct C_0017A4D0 {
    void *vtbl;
    char pad4[0xAC];
    int u[45];
    C_0017A4D0 *func_0017A4D0(int a0);
    void func_00157600(int a0);
};

struct C_0017A860 {
    char pad0[0x138];
    int f138;
    int f13C;
    int *f140;
    void func_0017A860(int value);
};


int C_00179B40::func_00179B40(C_0017BB10 *a0, char *a1)
{
    V4_0017A8F0 v[10];
    C_0017B9E0 t[4];
    C_00179B40 *volatile selfp[1];
    C_00179B40 *p;
    V4_0017A8F0 *q;
    int i, n, all, any;
    int ad;
    selfp[0] = this;
    for (i = 0; i < 10; i++) { v[i].z = 0; v[i].y = 0; v[i].x = 0; v[i].w = 1.0f; }
    p = selfp[0];
    const float d = (p->f68 * p->f28 + p->f64 * p->f24 + p->f6c * p->f2c) - (p->f68 * *(float *)(a1 + 0x174) + p->f64 * *(float *)(a1 + 0x170) + p->f6c * *(float *)(a1 + 0x178));
    ad = *(int *)&d & 0x7fffffff;
    if (*(float *)&ad < *(float *)(a1 + 0x1fc)) {
        a0->func_0017BB10((C_0017B9E0 *)&D_002EFD38);
        return 1;
    }
    p = selfp[0];
    func_00161BE0(&v[0], &p->f24, a1 + 0xf0, 4, 16, 16);
    all = -1;
    q = v;
    any = 0;
    for (i = 0; i < 4; i++) { int c = func_001325D0(q); all &= c; any |= c; q++; }
    if (any == 0) n = 4;
    else {
        if (all) return 0;
        n = func_00132650(&v[0], &v[0], 4);
        if (n == 0) return 0;
    }
    q = v;
    for (i = 0; i < n; i++) {
        float r = D_00275460 / q->w;
        q->x *= r;
        q->y *= r;
        q++;
    }
    if (n == 4) {
        a0->func_0017BB50(v);
        a0->func_0017BE40();
        return 1;
    }
    for (i = 0; i < 4; i++) t[i].func_001D3F50();
    if (n == 3) {
        t[0].unk0 = *(int *)&v[0].x; t[0].unk4 = *(int *)&v[0].y;
        t[1].unk0 = *(int *)&v[1].x; t[1].unk4 = *(int *)&v[1].y;
        t[2].unk0 = *(int *)&v[2].x; t[2].unk4 = *(int *)&v[2].y;
        t[3] = t[2];
        a0->func_0017BB10(t);
        a0->func_0017BE40();
        return 1;
    }
    float miny = v[0].y, minx = v[0].x, maxx = v[0].x, maxy = v[0].y;
    q = &v[1];
    for (i = 1; i < n; i++) {
        if (q->x < minx) minx = q->x;
        if (q->x > maxx) maxx = q->x;
        if (q->y < miny) miny = q->y;
        if (q->y > maxy) maxy = q->y;
        q++;
    }
    *(float *)&t[0].unk0 = minx; *(float *)&t[0].unk4 = maxy;
    *(float *)&t[1].unk0 = maxx; *(float *)&t[1].unk4 = maxy;
    *(float *)&t[2].unk0 = maxx; *(float *)&t[2].unk4 = miny;
    *(float *)&t[3].unk0 = minx; *(float *)&t[3].unk4 = miny;
    a0->func_0017BB10(t);
    return 1;
}

int C_0017A010::func_0017A010(V3_0017A010 *a, V3_0017A010 *b, C_0017A1D0_Vec4 *out)
{
    V3_0017A010 va;
    C_0017A1D0_Vec4 d;
    V3_0017A010 &dv = *(V3_0017A010 *)&d;
    V3Sub_0017A010(va, *a, f24);
    V3Sub_0017A010(dv, *b, f24);
    float da = V3Dot_0017A010(va, f64);
    float db = V3Dot_0017A010(dv, f64);
    int ia = *(int *)&da;
    int ib = *(int *)&db;
    if ((ib ^ ia) <= 0) {
        V3Sub_0017A010(dv, *b, *a);
        float c = -V3Dot_0017A010(f24, f64);
        float t = -((c + V3Dot_0017A010(*a, f64)) / V3Dot_0017A010(dv, f64));
        if (t >= D_00275544 && t <= D_00275460) {
            C_0017A1D0_Vec4 pt;
            V3Scale_0017A010(*(V3_0017A010 *)&pt, dv, t);
            V3Add_0017A010(dv, *(V3_0017A010 *)&pt, *a);
            d.w = 1.0f;
            pt = d;
            if (out) {
                *out = pt;
            }
            if (func_001793E0(&pt, &f64, &f24, &f34, &f44, &f54))
                return 1;
        }
    }
    return 0;
}

int C_0017A1D0::func_0017A1D0(float *p, float r, float *out)
{
    C_0017A1D0_Vec4 v;
    volatile float d;
    int i;
    v.x = p[0] - pts[0].x;
    v.y = p[1] - pts[0].y;
    v.z = p[2] - pts[0].z;
    d = C_0017A1D0_Dot(v, normals[0]);
    if (out) {
        *out = C_0017A1D0_AbsV(d);
    }
    if (d > r || -r > d) return 0;
    if (C_0017A1D0_Dot(v, normals[1]) > r) return 0;
    for (i = 1; i < 4; i++) {
        v.x = p[0] - pts[i].x;
        v.y = p[1] - pts[i].y;
        v.z = p[2] - pts[i].z;
        if (C_0017A1D0_Dot(v, normals[i + 1]) > r) return 0;
    }
    return 1;
}

void *C_0017A2E0::func_0017A2E0(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = &D_00288ED4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0017A1D0 *C_0017A1D0::func_0017A310(C_0017A1D0_Vec4 *p)
{
    pts[0] = p[0];
    pts[1] = p[1];
    pts[2] = p[2];
    pts[3] = p[3];
    C_0017B9E0 a[4];
    C_0017B9E0 tmp;
    for (int i=0;i<4;i++) a[i].func_001D3F50();
    a[0] = *tmp.func_0017B9E0(0xbf800000,0xbf800000);
    a[1] = *tmp.func_0017B9E0(0xbf800000,0x3f800000);
    a[2] = *tmp.func_0017B9E0(0x3f800000,0x3f800000);
    a[3] = *tmp.func_0017B9E0(0x3f800000,0xbf800000);
    D_002EFD38.func_0017BB10(a);
    D_002EFD38.func_0017BE40();
    func_00179880();
    func_00179950();
    return this;
}

void func_0017A460(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_0017A4D0 *C_0017A4D0::func_0017A4D0(int a0)
{
    int *p;
    func_00157600(a0);
    vtbl = (void *)&D_00288F84;
    p = &u[0]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[8]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[12]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[16] = 0; u[17] = 0; u[18] = 0; u[19] = 0;
    memset(&u[21], 0, 16);
    u[25] = 0; u[35] = 0; u[36] = 0; u[34] = 0;
    u[26] = 1; u[28] = 1;
    u[4] = D_002A8CEC; u[5] = D_002A8CF0; u[6] = D_002A8CF4; u[7] = D_002A8CF8;
    u[0] = D_002A8CEC; u[1] = D_002A8CF0; u[2] = D_002A8CF4;
    int w = D_002A8CF8;
    u[37] = 0; u[40] = 0; u[42] = 0; u[43] = 0; u[44] = 0;
    u[3] = w;
    u[31] = 0x3f800000; u[32] = 0x3f800000; u[41] = -1; u[33] = 0x3f800000;
    return this;
}

void C_0017A640::func_0017A640()
{
    int i;

    vtbl = &D_00288F84;
    if (fFC) {
        fFC->v2();
    }
    if (f160) {
        f160->v0(1);
    }
    for (i = 0; i < fF8; i++) {
        if (fF0[i]) {
            fF0[i]->v0(1);
        }
    }
    if (fF0) {
        func_001E8390(fF0);
    }
    if (f140) {
        func_001E8390(f140);
    }
    if (f158) {
        func_001E8390(f158);
    }
    D_002A829C->func_001B26C0(f154);
    func_00157660();
}

void C_0017A6F0::func_0017A6F0(int a0) {
    unk134 = a0;
}

void C_0017A700::func_0017A700(DXRenderableObject *owner, int index)
{
    void *func_001E8AA5(int);
    void *func_001E83E8(void *, int);
    void *func_001E8A44(int);
    volatile struct { volatile C_0017A700 *self; int max; int value; } L;
    L.self = this;
    DXShadowCaster **f0 = ((volatile C_0017A700 *)this)->fF0;
    if (!f0) {
        L.self->fF0 = (DXShadowCaster **)func_001E8AA5(4);
        L.self->fF8 = 1;
        volatile C_0017A700 *s = L.self;
        s->fF0[s->fF4] = 0;
    } else if (fF8 < fF4 + 1) {
        L.self->fF0 = (DXShadowCaster **)func_001E83E8(f0, fF4 * 4 + 4);
        volatile C_0017A700 *s1 = L.self;
        s1->fF8 = s1->fF4 + 1;
        volatile C_0017A700 *s2 = L.self;
        s2->fF0[s2->fF4] = 0;
    }
    volatile C_0017A700 *s3 = L.self;
    int k = s3->fF4;
    DXShadowCaster **a = s3->fF0;
    DXShadowCaster *e = a[k];
    if (e) e->v2(owner);
    else {
        DXShadowCaster *p = (DXShadowCaster *)func_001E8A44(16);
        if (p) p = p->func_00143820(owner);
        else p = 0;
        volatile C_0017A700 *s4 = L.self;
        s4->fF0[s4->fF4] = p;
    }
    volatile C_0017A700 *s5 = L.self;
    DXShadowCaster *c = s5->fF0[s5->fF4];
    L.max = c->f4->f1a4->count - 1;
    int i = *(volatile int *)&index;
    int m = L.max;
    L.value = i > m ? m : i;
    c->f8 = L.value;
    ((C_0017A700 *)L.self)->fF4++;
}

void C_0017A850::func_0017A850(void) {
    unkF4 = 0;
}

void C_0017A860::func_0017A860(int value)
{
    int *func_001E8AA5(...);
    int *func_001E83E8(...);

    if (f140 == 0) {
        f140 = func_001E8AA5(f13C * 4 + 4);
        f138 = f13C + 1;
    } else if (f138 < f13C + 1) {
        f140 = func_001E83E8(f140, f13C * 4 + 4);
        f138 = f13C + 1;
    }
    f140[f13C] = value;
    f13C++;
}

int C_0017A8F0::func_0017A8F0(V4_0017A8F0 *out, V4_0017A8F0 *a0, int mode)
{
 V4_0017A8F0 up, t1;
 {
 V4_0017A8F0 t0;
 *a0 = *func_0001E9E0(&t0,a0);
 up.x=D_002A8D0C; up.y=D_002A8D10; up.z=D_002A8D14; up.w=D_002A8D18;
 func_0001C610(&t1,&up,a0);
 func_0017A460(&t1,&t1);
 up=*func_0001C610(&t0,a0,&t1);
 }
 if(mode==1) {
  if(D_002EFD6C) {
   out->x=*(float *)(D_002EFDB8->p+0x170);
   out->y=*(float *)(D_002EFDB8->p+0x174);
   out->z=*(float *)(D_002EFDB8->p+0x178)-D_00275800;
  }
 } else if(mode==3) {
  float xyz[4];
  V4_0017A8F0 v;
  xyz[0]=D_002A8CE0*a0->x; xyz[1]=D_002A8CE0*a0->y; xyz[2]=D_002A8CE0*a0->z;
  v.w=1.0f;v.x=-xyz[0];v.y=-xyz[1];v.z=-xyz[2];
  *out=v;
 } else return 0;
 if(fFC) func_0012AB70(out,a0,&up,0,0);
 f118=mode;
 return 1;
}

