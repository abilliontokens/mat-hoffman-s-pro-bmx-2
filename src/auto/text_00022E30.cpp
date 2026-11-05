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

static __forceinline void cross_00023340(float *out, float *a, float *b)
{
    __m128 va = _mm_loadu_ps(a);
    __m128 vb = _mm_loadu_ps(b);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
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
    f34++;
    Wrap();
    if (f2c->f2c == 1 || f2c->f2f == 1) {
        C_00023340_Elem *e = &f2c->elems[f38];
        V4_00023340 p;
        V4_00023340 dir;
        V4_00023340 cr;
        V4_00023340 up;
        V4_00023340 t;

        p.x = e->px;
        p.y = e->py + f70;
        p.z = e->pz;
        dir.x = p.x - f5c.x;
        dir.y = p.y - f5c.y;
        dir.z = p.z - f5c.z;
        func_000212C0(&dir, &dir);
        e = &f2c->elems[f38];
        up.x = e->dx;
        up.y = e->dy;
        up.z = e->dz;
        cross_00023340(&cr.x, &up.x, &dir.x);
        t.x = cr.x * f6c + p.x;
        t.y = cr.y * f6c + p.y;
        t.z = cr.z * f6c + p.z;
        f4c = t;
    } else {
        C_00023340_Elem *e = &f2c->elems[f38];
        f4c.x = e->px;
        f4c.y = e->py;
        f4c.z = e->pz;
        f4c.w = 1.0f;
    }
    {
        V4_00023340 v;
        V4_00023340 up2;
        C_00023340_Elem *e2;

        v.x = f4c.x - f5c.x;
        v.y = f4c.y - f5c.y;
        v.z = f4c.z - f5c.z;
        e2 = &f2c->elems[f34];
        up2.x = e2->dx;
        up2.y = e2->dy;
        up2.z = e2->dz;
        func_000212C0(&v, &v);
        f28->f1a4->f4->func_00198F50(&v, &up2, 0, 1, 0);
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

