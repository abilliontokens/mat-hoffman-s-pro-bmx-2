/* 6 functions from 0x0011BBB0 to 0x0011CB40, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

struct S_0011CA20_V4 {
    int x;
    int y;
    int z;
    int w;
};
extern S_0011CA20_V4 D_002A3BBC;
extern int D_002A3BC0, D_002A3BC4, D_002A3BC8;

void *func_001E83E8(void *block, unsigned int size);

struct C_001334E0 {
    void func_001334E0(int a);
    void func_001334F0(void *a);
};

struct V4_0011C3F0 {
    float x, y, z, w;
    V4_0011C3F0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_0011C3F0(float x0, float y0, float z0, float w0) { x = x0; y = y0; z = z0; w = w0; }
};

extern float D_00275548, D_00276278, D_00275460;
extern V4_0011C3F0 D_002A3BDC;

static __forceinline float SmootherUpdate_0011C3F0(struct S_0011C3F0_Smoother *s, float target, float dt);

struct S_0011C3F0_Smoother {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    __forceinline float Update(float target, float dt)
    {
        return SmootherUpdate_0011C3F0(this, target, dt);
    }
};

static __forceinline float SmootherUpdate_0011C3F0(S_0011C3F0_Smoother *s, float target, float dt)
{
    float step = AsmMinF(dt, s->f4);
    s->f8 = step * (D_00275460 / s->f4);
    return s->f0 = (target - s->f0) * s->f8 + s->f0;
}

struct S_0011C3F0_Obj54 {
    char pad0[0x40];
    float f40;
    float f44;
    float f48;
};

struct S_0011C3F0_A0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(float *m);
    char pad4[0x50];
    S_0011C3F0_Obj54 *f54;
    char pad58[0xA7 - 0x58];
    unsigned char fA7;
    float func_00133F10(int a);
};

struct S_0011C3F0_80 {
    void func_000BA430(V4_0011C3F0 *a, V4_0011C3F0 *b, int c, int d);
};

int func_00134DE0(V4_0011C3F0 *seg, V4_0011C3F0 *out, V4_0011C3F0 *hit, int noSub, int count, void **skip, int mask, int a7, int mode);
void func_0011ABC0(V4_0011C3F0 *out, V4_0011C3F0 *in);
V4_0011C3F0 func_0011B1B0(float angle);
V4_0011C3F0 func_0001C610(const V4_0011C3F0 &a, const V4_0011C3F0 &b);
void func_000265C0(float *out, const V4_0011C3F0 *a, const V4_0011C3F0 *b, const V4_0011C3F0 *c, int d, int e);

struct C_0011C3F0 {
    char pad0[0x24];
    V4_0011C3F0 f24;
    char pad34[0x58 - 0x34];
    float f58;
    char pad5C[0x80 - 0x5C];
    S_0011C3F0_80 *f80;
    char pad84[0xA0 - 0x84];
    S_0011C3F0_A0 *fA0;
    char padA4[4];
    S_0011C3F0_Smoother *fA8;
    S_0011C3F0_Smoother *fAC;
    S_0011C3F0_Smoother *fB0;
    char padB4[0xF0 - 0xB4];
    void **fF0;
    int fF4;
    void func_0011C3F0(float *m, float dt);
};

struct C_0011CA60 {
    char pad0[0x24];
    S_0011CA20_V4 f24;
    S_0011CA20_V4 f34;
    void func_0011CA60(int a, int b, int c, int d);
};

struct C_0011CAA0 {
    char pad0[0x9C];
    C_001334E0 *f9C;
    C_001334E0 *fA0;
    C_001334E0 *fA4;
    char padA8[0x48];
    void **fF0;
    int fF4;
    void func_0011CAA0(void *a);
};

struct C_0011CA20 {
    char pad0[0x5C];
    S_0011CA20_V4 unk5C;
    char pad6C[0x50];
    int unkBC;
    char padC0[0x6C];
    int unk12C;
    void func_0011CA20();
};

struct C_0011C900_A {
    char pad0[0x18];
    int f18;
    char pad1C[0x1E8];
    S_0011CA20_V4 *f204;
    void func_00166C80(int a, int b);
};
struct C_0011C900_B {
    void func_00199A70(int a, S_0011CA20_V4 *b);
};
struct C_0011C900 {
    char pad0[0x24];
    S_0011CA20_V4 f24;
    S_0011CA20_V4 f34;
    int f44;
    S_0011CA20_V4 f48;
    char pad58[4];
    S_0011CA20_V4 f5C;
    S_0011CA20_V4 f6C;
    int f7C;
    char pad80[4];
    C_0011C900_A *f84;
    C_0011C900_B *f88;
    int f8C;
    char pad90[0x28];
    int fB8;
    int fBC;
    int fC0;
    int fC4;
    char padC8[0x64];
    int f12C;
    char pad130[0x58];
    S_0011CA20_V4 f188;
    void func_0011C900(S_0011CA20_V4 a, S_0011CA20_V4 b, S_0011CA20_V4 c, int d);
};

extern float D_002756DC, D_002755E8, D_00278C48;
extern V4_0011C3F0 D_002A3BCC;
static __forceinline V4_0011C3F0 VScale_0011BBB0(const V4_0011C3F0 &a, float k)
{
    return V4_0011C3F0(a.x * k, a.y * k, a.z * k, 1.0f);
}
static __forceinline V4_0011C3F0 VAdd_0011BBB0(const V4_0011C3F0 &a, const V4_0011C3F0 &b)
{
    return V4_0011C3F0(a.x + b.x, a.y + b.y, a.z + b.z, 1.0f);
}
static inline void Cross_0011BBB0(V4_0011C3F0 *out, const V4_0011C3F0 *a, const V4_0011C3F0 *b)
{
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 r = _mm_sub_ps(_mm_mul_ps(vb, _mm_shuffle_ps(va, va, 0xc9)), _mm_mul_ps(va, _mm_shuffle_ps(vb, vb, 0xc9)));
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(r, r, 0xc9));
}
struct S_0011BBB0_Att {
    void func_001A0C90(V4_0011C3F0 p);
};
struct S_0011BBB0_Bone {
    void func_00199A70(int a, V4_0011C3F0 *out);
};
struct C_0011BBB0 {
    char pad0[0xA4];
    S_0011C3F0_A0 *fA4;
    char padA8[0xF8 - 0xA8];
    S_0011BBB0_Att *fF8;
    S_0011BBB0_Att *fFC;
    S_0011BBB0_Att *f100;
    S_0011BBB0_Att *f104;
    S_0011BBB0_Att *f108;
    S_0011BBB0_Bone *f10C;
    S_0011BBB0_Bone *f110;
    S_0011BBB0_Bone *f114;
    S_0011BBB0_Bone *f118;
    S_0011BBB0_Bone *f11C;
    int f120;
    int f124;
    char pad128[0x1A8 - 0x128];
    int f1A8;
    int f1AC;
    int f1B0;
    int f1B4;
    int f1B8;
    int f1BC;
    V4_0011C3F0 f1C0;
    V4_0011C3F0 f1D0;
    V4_0011C3F0 f1E0;
    V4_0011C3F0 f1F0;
    V4_0011C3F0 f200;
    V4_0011C3F0 f210;
    void func_0011BBB0(V4_0011C3F0 a);
};

static inline void SetV4(S_0011CA20_V4 *v, int x, int y, int z, int w)
{
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;
}

static inline void CopyV4(S_0011CA20_V4 *dst, S_0011CA20_V4 src)
{
    *dst = src;
}

void C_0011BBB0::func_0011BBB0(V4_0011C3F0 a)
{
    V4_0011C3F0 up;
    if (a.y >= D_002756DC) {
        AsmVec3Cross((float *)&up, (const float *)&D_002A3BCC, (const float *)&a);
    } else {
        AsmVec3Cross((float *)&up, (const float *)&D_002A3BDC, (const float *)&a);
    }
    func_0011ABC0(&up, &up);
    __declspec(align(16)) float m[16];
    func_000265C0(m, (const V4_0011C3F0 *)&D_002A3BBC, &up, &a, 0, 1);
    f124 = 0;
    V4_0011C3F0 pos;
    f11C->func_00199A70(0, &pos);
    m[3] = pos.x;
    m[7] = pos.y;
    m[11] = pos.z;
    f1A8 = 1;
    fA4->v31(m);
    fA4->func_00133F10(0);
    if (fA4->fA7 & 0x20) {
        V4_0011C3F0 t = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x30);
        V4_0011C3F0 u = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x20);
        f1B4 = f1A8;
        f1C0 = t;
        f1F0 = u;
        V4_0011C3F0 p = VAdd_0011BBB0(VScale_0011BBB0(a, D_002755E8), t);
        f108->func_001A0C90(p);
        if (f120 == 0) {
            f120 = 1;
            f124 = 1;
        }
    } else {
        f120 = 0;
        f1B4 = 0;
    }
    f10C->func_00199A70(0, &pos);
    m[3] = pos.x;
    m[7] = pos.y;
    m[11] = pos.z;
    f1A8 = 1;
    fA4->v31(m);
    fA4->func_00133F10(0);
    if (fA4->fA7 & 0x20) {
        V4_0011C3F0 t = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x30);
        V4_0011C3F0 u = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x20);
        if (f1B0 == 0) {
            f1B8 = f1A8;
            f1D0 = t;
            f200 = u;
        }
        V4_0011C3F0 p = VAdd_0011BBB0(VScale_0011BBB0(a, D_00278C48), t);
        fF8->func_001A0C90(p);
    } else {
        f1B8 = 0;
    }
    f110->func_00199A70(0, &pos);
    m[3] = pos.x;
    m[7] = pos.y;
    m[11] = pos.z;
    f1A8 = 1;
    fA4->v31(m);
    fA4->func_00133F10(0);
    if (fA4->fA7 & 0x20) {
        V4_0011C3F0 t = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x30);
        V4_0011C3F0 u = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x20);
        if (f1B0 == 0) {
            f1BC = f1A8;
            f1E0 = t;
            f210 = u;
        }
        V4_0011C3F0 p = VAdd_0011BBB0(VScale_0011BBB0(a, D_00278C48), t);
        fFC->func_001A0C90(p);
    } else {
        f1BC = 0;
    }
    f114->func_00199A70(0, &pos);
    m[3] = pos.x;
    m[7] = pos.y;
    m[11] = pos.z;
    f1A8 = 1;
    fA4->v31(m);
    fA4->func_00133F10(0);
    if (fA4->fA7 & 0x20) {
        V4_0011C3F0 t = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x30);
        V4_0011C3F0 p = VAdd_0011BBB0(VScale_0011BBB0(a, D_00278C48), t);
        f100->func_001A0C90(p);
    }
    f118->func_00199A70(0, &pos);
    m[3] = pos.x;
    m[7] = pos.y;
    m[11] = pos.z;
    f1A8 = 1;
    fA4->v31(m);
    fA4->func_00133F10(0);
    if (fA4->fA7 & 0x20) {
        V4_0011C3F0 t = *(V4_0011C3F0 *)((char *)fA4->f54 + 0x30);
        V4_0011C3F0 p = VAdd_0011BBB0(VScale_0011BBB0(a, D_00278C48), t);
        f104->func_001A0C90(p);
    }
}

void C_0011C3F0::func_0011C3F0(float *m, float dt)
{
    if (this->f80 != 0) {
        V4_0011C3F0 dir;
        V4_0011C3F0 pos = this->f24;
        this->f80->func_000BA430(&pos, &dir, 0, 0);
    }
    V4_0011C3F0 seg[2];
    seg[0] = this->f24;
    seg[0].y = *(float volatile *)&seg[0].y + D_00275548;
    seg[1] = this->f24;
    seg[1].y = seg[1].y - D_00276278;
    V4_0011C3F0 hit;
    V4_0011C3F0 nrm;
    if (func_00134DE0(seg, &hit, &nrm, 0, this->fF4, this->fF0, -1, 0, 1) == 0) {
        hit = this->f24;
        nrm = D_002A3BDC;
    }
    V4_0011C3F0 sm;
    sm.x = this->fA8->Update(nrm.x, dt);
    sm.y = this->fAC->Update(nrm.y, dt);
    sm.z = this->fB0->Update(nrm.z, dt);
    func_0011ABC0(&sm, &sm);
    V4_0011C3F0 q;
    q = func_0001C610(sm, func_0011B1B0(this->f58));
    func_0011ABC0(&q, &q);
    func_000265C0(m, &hit, &func_0001C610(q, sm), &sm, 0, 1);
    this->fA0->v31(m);
    this->fA0->func_00133F10(0);
    if (this->fA0->fA7 & 0x20) {
        S_0011C3F0_Obj54 *p = this->fA0->f54;
        V4_0011C3F0 t = this->f24;
        t.x = t.x - p->f40;
        t.y = t.y - p->f44;
        t.z = t.z - p->f48;
        m[3] = t.x;
        m[7] = t.y;
        m[11] = t.z;
        this->fA0->v31(m);
        this->fA0->func_00133F10(0);
        if (this->fA0->fA7 & 0x20) {
            t.x = t.x - p->f40;
            t.y = t.y - p->f44;
            t.z = t.z - p->f48;
            m[3] = t.x;
            m[7] = t.y;
            m[11] = t.z;
        }
    }
}

void C_0011C900::func_0011C900(S_0011CA20_V4 a, S_0011CA20_V4 b, S_0011CA20_V4 c, int d)
{
    f5C = b;
    f6C = c;
    f7C = d;
    fBC = 1;
    f48 = a;
    f34 = a;
    f12C = 1;
    f44 = 1;
    fB8 = 0x40400000;
    f84->f18 = 0;
    f84->func_00166C80(fC4, 0);
    f88->func_00199A70(0, &f24);
    *f84->f204 = D_002A3BBC;
    f8C = 0;
    f188 = f24;
}

void C_0011CA20::func_0011CA20()
{
    unk5C = D_002A3BBC;
    unkBC = 0;
    unk12C = 0;
}

void C_0011CA60::func_0011CA60(int a, int b, int c, int d)
{
    f34 = f24;
    S_0011CA20_V4 *p = &f24;
    p->x = a;
    p->y = b;
    p->z = c;
    p->w = d;
}

void C_0011CAA0::func_0011CAA0(void *a)
{
    f9C->func_001334E0(1);
    f9C->func_001334F0(a);
    fA0->func_001334E0(1);
    fA0->func_001334F0(a);
    fA4->func_001334E0(1);
    fA4->func_001334F0(a);
    fF0 = (void **)func_001E83E8(fF0, fF4 * 4 + 4);
    fF0[fF4] = a;
    fF4++;
}

