/* 15 functions from 0x00134A10 to 0x001358A0, found by Ghidra. */
#include "common.h"

extern int D_0028472C;
extern int D_00284774;

void func_001E891B(void *p);

/* the game's operator delete is func_001E891B */
inline void operator delete(void *p) { func_001E891B(p); }

struct C_0013B210 {
    void func_0013B210(void *p);
    int func_0013C8A0(int f, void *dst, int size, int count);
};

extern char D_00010000[];
extern char D_00017F2F;

void *func_001E8AA5(unsigned int n);
void func_001E8390(void *p);
void func_001611C0(void *dst, void *src, int n);

struct C_0001DFE0 {
    void func_0001DFE0();
};

/* ColorMapper: palette plus 555 and 565 inverse lookup tables */
struct ColorMapper : C_0001DFE0 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    unsigned char pal[256][3];
    char pad310[0x400];
    unsigned char map555[0x8000];
    unsigned char map565[0x10000];
    ColorMapper *func_00135150(int f);
};
extern C_0013B210 *D_002BEAAC;

struct C_0001DFF0 {
    void func_0001DFF0();
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_00157660 {
    void func_00157660();
};

struct C_00157A00 {
    void func_00157A00(int a);
};

/* ColorMapper */
struct C_00135430 {
    void *vtbl;
    void *func_00135430(int flags);
};

/* one 0x4c-byte particle of ParticleSystem::f34 (virtual destructor, slot 0) */
struct S_Particle {
    virtual ~S_Particle();
    char pad4[0x48];
    void func_00135550(float dt);
    static void operator delete[](void *p) { func_001E891B(p); }
    static void operator delete(void *p) { func_001E891B(p); }
};

extern float D_00275544;
extern float D_00275460;

struct S_Vec4 {
    float x;
    float y;
    float z;
    float w;
    S_Vec4() { w = 1.0f; }
    S_Vec4(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    S_Vec4 operator+(const S_Vec4 &o) const { return S_Vec4(x + o.x, y + o.y, z + o.z); }
    S_Vec4 operator-(const S_Vec4 &o) const { return S_Vec4(x - o.x, y - o.y, z - o.z); }
    S_Vec4 operator*(float s) const { S_Vec4 r; r.x = x * s; r.y = y * s; r.z = z * s; return r; }
    S_Vec4 operator/(float s) const { float inv = D_00275460 / s; return S_Vec4(x * inv, y * inv, z * inv); }
};

/* the particle's verlet state: previous and current position, velocity, acceleration */
struct S_ParticleData {
    void *vtbl;
    char pad4[8];
    S_Vec4 prev;
    S_Vec4 cur;
    S_Vec4 vel;
    S_Vec4 acc;
};

/* polymorphic helper object held in the f38 / f3c tables */
struct S_ParticleObj {
    virtual void v0();
    virtual void v1();
};

struct ParticleSystem;
typedef void (__cdecl *ParticleCb)(S_Particle *p, ParticleSystem *sys);
typedef void (__cdecl *ParticleEndCb)(ParticleSystem *sys, void *data);

/* ParticleSystem */
struct ParticleSystem {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    S_Particle *f34;
    S_ParticleObj **f38;
    S_ParticleObj **f3c;
    void *f40;
    ParticleCb f44;
    ParticleEndCb f48;
    ParticleSystem *func_00135700(int a);
    void func_00135740();
    void func_001357A0(int dt);
};

extern int D_00284768;
extern float D_002A4434;
extern float D_002A4438;
extern float D_002A443C;
extern float D_002A4440;

struct V4_00135470 {
    float x;
    float y;
    float z;
    float w;
    V4_00135470() {
        x = y = z = 0.0f;
        w = 1.0f;
    }
};

struct PhysicsParticleBase {
    void *vtbl;
    PhysicsParticleBase() { vtbl = (void *)&D_00284768; }
};

/* PhysicsParticle */
struct PhysicsParticle : PhysicsParticleBase {
    int f4;
    int f8;
    V4_00135470 m0;
    V4_00135470 m1;
    V4_00135470 m2;
    V4_00135470 m3;
    PhysicsParticle();
};

extern char D_0000FFF8;
extern char D_0000FFFC;

/* palette (256 RGB entries) with its two converted lookup tables */
struct C_00135020 {
    char pad0[0x10];
    unsigned char pal[256][3];
    unsigned short tab555[256];
    unsigned short tab565[256];
    void func_00135020(void);
};

struct C_00135870 {
    char pad0[0x4];
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    void func_00135870(int a0, int a1, int a2, int a3, int a4);
};

struct C_00135850 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00135850* func_00135850(void);
};

struct C_00135420 {
    char pad0[0x8710];
    int unk8710;
    int func_00135420(void);
};

struct C_00135410 {
    char pad0[0x710];
    int unk710;
    int func_00135410(void);
};

struct V4_00134DE0 {
    float x, y, z, w;
};

struct S_00134DE0_Node {
    char pad0[2];
    unsigned char f2;
    int func_0014CA60(void);
    void *func_0014CA80(int i);
};

struct S_00134DE0_Iter {
    char pad0[0x40];
    void func_001A46F0(void);
    void func_001A4790(int a, int b, float *c, float *d, int e, int f, int g);
    S_00134DE0_Node *func_001A4840(void);
    void func_001A4A20(void);
};

extern float D_002755E8;
extern unsigned char D_002A4330;
extern unsigned char D_002A4331;
int func_00134A10(V4_00134DE0 *seg, void *obj, V4_00134DE0 *out, void *hit);

extern V4_00134DE0 D_002A4340;
extern int D_002A4344;
extern int D_002A4348;
extern int D_002A434C;
struct CollisionResult {
    V4_00134DE0 a, b, normal;
    char pad30[0x40];
    int f70, f74, f78, f7C, f80, f84, f88, f8C, f90;
    float fraction;
    char pad98[8];
    void func_00134980();
};
extern CollisionResult *D_002B92EC;
struct CollisionNode {
    char pad0[0x21]; unsigned char flags;
    char pad22[6]; V4_00134DE0 center;
    char pad38[0x10]; float radius;
    int f4c, mode;
    char pad54[0x13c]; int count;
    char pad194[0xc]; CollisionNode **children;
    char pad1a4[0x20]; int low, high;
};
struct __declspec(align(16)) CollisionMatrix {
    float m[16];
    void func_000264C0(void *);
};
float func_0011FDF0(void *, void *, void *);
void func_0011AC30(void *, void *);
int func_001294E0(void *, int, void *, void *, void *);
int func_00122090(void *, void *, void *, int, void *);
V4_00134DE0 *func_00011110(V4_00134DE0 *, void *, void *);
V4_00134DE0 *func_00011140(V4_00134DE0 *, V4_00134DE0 *, float);
V4_00134DE0 *func_000110E0(V4_00134DE0 *, V4_00134DE0 *, void *);
void func_0001C680(void *, V4_00134DE0, void *);

struct C_00135400 {
    char pad0[0x10];
    int unk10;
    int func_00135400(void);
};


int func_00134A10(V4_00134DE0 *seg, void *obj, V4_00134DE0 *out, void *hit) {
    char *o = (char *)obj;
    if (!(*(unsigned char *)(o+0x21)&1)) return 0;
    V4_00134DE0 *end = seg+1;
    if (!(func_0011FDF0(o+0x28, seg, end) < *(float *)(o+0x48))) return 0;
    CollisionResult result;
    result.func_00134980();
    V4_00134DE0 t;
    ((int *)&t)[0] = *(int *)&D_002A4340;
    ((int *)&t)[1] = D_002A4344;
    ((int *)&t)[2] = D_002A4348;
    ((int *)&t)[3] = D_002A434C;
    result.a = t;
    result.b = t;
    V4_00134DE0 zero = {0.0f,0.0f,0.0f,1.0f};
    result.normal = zero;
    result.fraction=1.0f;
    result.f80=0; result.f90=0; result.f70=0; result.f8C=0;
    result.f74=0; result.f84=0; result.f88=0; result.f78=0;
    CollisionMatrix matrix;
    V4_00134DE0 a,b,c,d,e,f;
    int bounds[2];
    switch (*(int *)(o+0x50)) {
    case 0: {
        void *transform=o+0xb0;
        D_002B92EC=&result;
        matrix.func_000264C0(transform);
        func_0011AC30(&matrix,&matrix);
        bounds[0]=*(int *)(o+0x1c4); bounds[1]=*(int *)(o+0x1c8);
        int found=func_001294E0(seg,0,bounds,&matrix,o+0x1b0);
        if (found) {
            *out=*func_000110E0(&c,func_00011140(&b,func_00011110(&a,end,seg),result.fraction),seg);
            func_0001C680(hit,result.normal,transform);
        }
        return found;
    }
    case 1:
        D_002B92EC=&result;
        matrix.func_000264C0(o+0x130);
        func_0011AC30(&matrix,&matrix);
        if (!func_00122090(o+0xa8,o+0xb8,seg,0,&matrix)) break;
        for(int i=0;i<*(int *)(o+0x190);++i) {
            char *child=(*(char ***)(o+0x1a0))[i];
            matrix.func_000264C0(child+0xb0);
            func_0011AC30(&matrix,&matrix);
            bounds[1]=*(int *)(child+0x1c8); bounds[0]=*(int *)(child+0x1c4);
            if (func_001294E0(seg,0,bounds,&matrix,child+0x1b0)) {
                *out=*func_000110E0(&f,func_00011140(&e,func_00011110(&d,end,seg),result.fraction),seg);
                func_0001C680(hit,result.normal,child+0xb0);
                return 1;
            }
        }
        break;
    case 2: case 3: return 0;
    }
    return 0;
}

int func_00134DE0(V4_00134DE0 *seg, V4_00134DE0 *out, void *hit, int noSub, int count, void **skip, int mask, int a7, int mode)
{
    int result = 0;
    float center[4];
    float half[4];
    S_00134DE0_Iter iter;
    S_00134DE0_Node *node;
    int type;

    center[3] = 1.0f;
    half[3] = 1.0f;
    center[0] = (seg[0].x + seg[1].x) * D_002755E8;
    center[1] = 0.0f;
    *(int *)&half[1] = 0x7effffff;
    center[2] = (seg[0].z + seg[1].z) * D_002755E8;
    half[0] = (seg[0].x - seg[1].x) * D_002755E8;
    half[2] = (seg[0].z - seg[1].z) * D_002755E8;
    if (half[0] < D_00275544) {
        half[0] = -half[0];
    }
    if (half[2] < D_00275544) {
        half[2] = -half[2];
    }
    iter.func_001A46F0();
    type = 1;
    if (mode == 1) {
        type = 3;
    }
    iter.func_001A4790(a7, type, center, half, 0, 0, 1);
    for (node = iter.func_001A4840(); node != 0; node = iter.func_001A4840()) {
        if (node->f2 == D_002A4330) {
            char *obj = (char *)node - 0x24;
            int found = 0;
            int i;
            for (i = 0; i < count; i++) {
                if (obj == skip[i]) {
                    found = 1;
                }
            }
            if ((*(int *)(obj + 0x68) & mask) && !found) {
                obj[0xa7] |= 0x10;
                if (func_00134A10(seg, obj, out, hit) != 0) {
                    seg[1] = *out;
                    result = 1;
                }
            }
        } else if (noSub == 0 && node->f2 == D_002A4331) {
            int i;
            for (i = 0; i < node->func_0014CA60(); i++) {
                void *sub = node->func_0014CA80(i);
                if (func_00134A10(seg, sub, out, hit) != 0) {
                    seg[1] = *out;
                    result = 1;
                }
            }
        }
    }
    iter.func_001A4A20();
    return result;
}

void C_00135020::func_00135020(void)
{
    int i;

    for (i = 0; i < 256; i += 4) {
        unsigned short t;
        unsigned short d;

        t = ((pal[i][2] & 0xFFF8) << 5) | pal[i][1];
        d = pal[i][0] >> 3;
        tab555[i] = ((t & 0xFFF8) << 2) | d;
        tab565[i] = ((t & 0xFFFC) << 3) | d;
        t = ((pal[i + 1][2] & 0xFFF8) << 5) | pal[i + 1][1];
        d = pal[i + 1][0] >> 3;
        tab555[i + 1] = ((t & 0xFFF8) << 2) | d;
        tab565[i + 1] = ((t & 0xFFFC) << 3) | d;
        t = ((pal[i + 2][2] & 0xFFF8) << 5) | pal[i + 2][1];
        d = pal[i + 2][0] >> 3;
        tab555[i + 2] = ((t & 0xFFF8) << 2) | d;
        tab565[i + 2] = ((t & 0xFFFC) << 3) | d;
        t = ((pal[i + 3][2] & 0xFFF8) << 5) | pal[i + 3][1];
        d = pal[i + 3][0] >> 3;
        tab555[i + 3] = ((t & 0xFFF8) << 2) | d;
        tab565[i + 3] = ((t & 0xFFFC) << 3) | d;
    }
}

ColorMapper *ColorMapper::func_00135150(int f)
{
    int compressed;

    func_0001DFE0();
    vtbl = &D_0028472C;
    if (D_002BEAAC->func_0013C8A0(f, &f8, 4, 1) != 1) goto out;
    if (D_002BEAAC->func_0013C8A0(f, &fC, 4, 1) != 1) goto out;
    if (D_002BEAAC->func_0013C8A0(f, &compressed, 4, 1) != 1) goto out;
    if (compressed) {
        int size;
        void *buf = func_001E8AA5((unsigned int)&D_00010000);
        if (buf == 0) goto out;
        if (D_002BEAAC->func_0013C8A0(f, &size, 4, 1) != 1) goto out;
        if (size == 0x300) {
            if (D_002BEAAC->func_0013C8A0(f, pal, size, 1) != 1) goto out;
        } else {
            if (D_002BEAAC->func_0013C8A0(f, buf, size, 1) != 1) goto out;
            func_001611C0(pal, buf, 0x300);
        }
        if (D_002BEAAC->func_0013C8A0(f, &size, 4, 1) != 1) goto out;
        if (size == 0x8000) {
            if (D_002BEAAC->func_0013C8A0(f, map555, size, 1) != 1) goto out;
        } else {
            if (D_002BEAAC->func_0013C8A0(f, buf, size, 1) != 1) goto out;
            func_001611C0(map555, buf, 0x8000);
        }
        if (D_002BEAAC->func_0013C8A0(f, &size, 4, 1) != 1) goto out;
        if (size == 0x10000) {
            if (D_002BEAAC->func_0013C8A0(f, map565, size, 1) != 1) goto out;
        } else {
            if (D_002BEAAC->func_0013C8A0(f, buf, size, 1) != 1) goto out;
            func_001611C0(map565, buf, (int)&D_00010000);
        }
        func_001E8390(buf);
    } else {
        if (D_002BEAAC->func_0013C8A0(f, pal, 0x300, 1) != 1) goto out;
        if (D_002BEAAC->func_0013C8A0(f, map555, 0x8000, 1) != 1) goto out;
        if (D_002BEAAC->func_0013C8A0(f, map565, (int)&D_00010000, 1) != 1) goto out;
    }
    if (fC != 0x100) {
        pal[fC + f8][2] = 0xff;
        pal[fC + f8][1] = 0;
        pal[fC + f8][0] = 0xff;
        ((unsigned char *)this)[(int)&D_00017F2F] = map555[0x7c1f] = (unsigned char)(fC + f8);
        fC++;
    }
    ((C_00135020 *)this)->func_00135020();
out:
    return this;
}

int C_00135400::func_00135400(void) {
    return (int)&unk10;
}

int C_00135410::func_00135410(void) {
    return (int)&unk710;
}

int C_00135420::func_00135420(void) {
    return (int)&unk8710;
}

void *C_00135430::func_00135430(int flags)
{
    vtbl = (void *)&D_0028472C;
    D_002BEAAC->func_0013B210(this);
    ((C_0001DFF0 *)this)->func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

PhysicsParticle::PhysicsParticle()
{
    f4 = 0;
    m0.x = D_002A4434;
    m0.y = D_002A4438;
    m0.z = D_002A443C;
    m0.w = D_002A4440;
    m1.x = D_002A4434;
    m1.y = D_002A4438;
    m1.z = D_002A443C;
    m1.w = D_002A4440;
    m2.x = D_002A4434;
    m2.y = D_002A4438;
    m2.z = D_002A443C;
    m2.w = D_002A4440;
    m3.x = D_002A4434;
    m3.y = D_002A4438;
    m3.z = D_002A443C;
    m3.w = D_002A4440;
}

void S_Particle::func_00135550(float dt)
{
    S_ParticleData *p = (S_ParticleData *)this;

    if (dt != D_00275544) {
        S_Vec4 vel;
        S_Vec4 next;
        float *pf = &p->prev.x;
        if (pf[0] == D_002A4434 && pf[1] == D_002A4438 && pf[2] == D_002A443C) {
            p->prev = p->cur;
        }
        next = (p->cur * 2.0f - p->prev) + p->acc * dt * dt;
        vel = (p->cur - p->prev) / dt;
        p->vel = vel;
        p->prev = p->cur;
        p->cur = next;
        p->acc = (S_Vec4 &)D_002A4434;
    }
}

ParticleSystem *ParticleSystem::func_00135700(int a)
{
    ((C_00157600 *)this)->func_00157600(a);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f34 = 0;
    f38 = 0;
    f3c = 0;
    f44 = 0;
    f48 = 0;
    f40 = 0;
    vtbl = (void *)&D_00284774;
    f30 = 1;
    return this;
}

void ParticleSystem::func_00135740()
{
    vtbl = (void *)&D_00284774;
    if (f34 != 0) {
        delete[] f34;
    }
    if (f38 != 0) {
        func_001E891B(f38);
    }
    if (f3c != 0) {
        func_001E891B(f3c);
    }
    ((C_00157660 *)this)->func_00157660();
}

void ParticleSystem::func_001357A0(int dt)
{
    int i;
    int j;
    int k;
    S_Particle *p;
    S_Particle *end;

    for (i = 0; i < f28; i++) {
        f38[i]->v1();
    }
    p = f34;
    end = p + f24;
    for (; p < end; p++) {
        if (f44 != 0) {
            f44(p, this);
        }
        p->func_00135550(*(float *)&dt);
    }
    for (j = 0; j < f30; j++) {
        for (k = 0; k < f2c; k++) {
            f3c[k]->v1();
        }
    }
    if (f48 != 0) {
        f48(this, f40);
    }
    ((C_00157A00 *)this)->func_00157A00(dt);
}

C_00135850* C_00135850::func_00135850(void) {
    extern int D_002847F0;
    unk0 = (int)&D_002847F0;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    return this;
}

void C_00135870::func_00135870(int a0, int a1, int a2, int a3, int a4) {
    unk4 = a4;
    unk8 = a0;
    unk10 = a1;
    unk14 = a2;
    unkC = a3;
}

