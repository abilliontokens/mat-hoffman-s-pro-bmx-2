/* 6 functions from 0x00022E30 to 0x00023CB0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_00276218;
struct S_Vec4i_00023C30 {
    int x, y, z, w;
};
extern S_Vec4i_00023C30 D_002A0F74;

void func_001E891B(void *p);

struct V4_00023340 {
    float x, y, z, w;
    V4_00023340() { x = y = z = 0; w = 1.0f; }
};

void func_000212C0(V4_00023340 *out, V4_00023340 *in);

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
};

struct W4_000235C0 {
    u32 x, y, z, w;
    W4_000235C0 *func_000212A0(u32 *p);
};

struct S_000235C0_Elem {
    float px, py, pz;
    float dx, dy, dz;
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

