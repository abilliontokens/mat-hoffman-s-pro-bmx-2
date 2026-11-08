/* 19 functions from 0x00142F30 to 0x00143C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct WaveBuffer {
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
 virtual void Lock(int,int *,int);
 virtual void Unlock(int);
};
struct C_00143BD0 {
    undefined4 func_00143BD0(byte param_1);
};

extern int D_002859D0;
extern int D_002859EC;
extern int D_00285A9C;
extern int D_00285AAC;
extern int D_00285AC4;
extern int *D_002EFDB8;
void *func_001E8A44(int size);
void func_001E891B(void *);
void __stdcall func_00201100(void *);

struct PageObj {
    virtual void destroy(int flags);
};

struct DXRenderableObjectData {
    void *vtbl;
    void func_00181410();
    void func_00181440();
    DXRenderableObjectData *func_00143520(void);
    void *func_00143770(int flags);
};

struct DXRenderableObject;

struct Vec4_143660 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    void Set(Vec4_143660 v) {
        x = v.x;
        y = v.y;
        z = v.z;
        w = v.w;
    }
    void SetRef(const Vec4_143660 &v) {
        x = v.x;
        y = v.y;
        z = v.z;
        w = v.w;
    }
    Vec4_143660() {}
    Vec4_143660(f32 a, f32 b, f32 c, f32 d) {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct Alloc190 {
    virtual void destroy(int flags);
    DXRenderableObject *f4;
    char pad8[0x158];
    Vec4_143660 f160;          /* 0x160 */
    Alloc190 *func_00142E90(DXRenderableObject *owner);
    void func_00142F30(int a);
    void func_001432B0(void);
};

#include <xmmintrin.h>
struct __declspec(align(16)) Mat_1432B0 {
    f32 m[16];
    /* this = transpose(*src) */
    __forceinline void transpose(const Mat_1432B0 *src)
    {
        const float *s = src->m;
        __m128 a, b, c, d;

        a = _mm_loadl_pi(a, (const __m64 *)&s[0]);
        a = _mm_loadh_pi(a, (const __m64 *)&s[4]);
        b = _mm_loadl_pi(b, (const __m64 *)&s[2]);
        b = _mm_loadh_pi(b, (const __m64 *)&s[6]);
        c = _mm_loadl_pi(c, (const __m64 *)&s[8]);
        c = _mm_loadh_pi(c, (const __m64 *)&s[12]);
        d = _mm_loadl_pi(d, (const __m64 *)&s[10]);
        d = _mm_loadh_pi(d, (const __m64 *)&s[14]);
        _mm_store_ps(&m[0], _mm_shuffle_ps(a, c, 0x88));
        _mm_store_ps(&m[4], _mm_shuffle_ps(a, c, 0xdd));
        _mm_store_ps(&m[8], _mm_shuffle_ps(b, d, 0x88));
        _mm_store_ps(&m[12], _mm_shuffle_ps(b, d, 0xdd));
    }
    /* *out = (*in as a point) * this, w forced to 1 */
    __forceinline void xform(float *in, float *out)
    {
        __m128 v = _mm_loadu_ps(in);
        __m128 r0 = _mm_load_ps(&m[0]);
        _mm_storeh_pi((__m64 *)(out + 2), v);
        __m128 r1 = _mm_load_ps(&m[4]);
        out[3] = 1.0f;
        __m128 r2 = _mm_load_ps(&m[8]);
        v = _mm_loadh_pi(v, (const __m64 *)(out + 2));
        r0 = _mm_mul_ps(r0, v);
        r1 = _mm_mul_ps(r1, v);
        r2 = _mm_mul_ps(r2, v);
        __m128 lo = _mm_unpacklo_ps(r0, r1);
        __m128 hi = _mm_unpackhi_ps(r0, r1);
        __m128 junk;
        junk = _mm_movehl_ps(junk, r2);
        lo = _mm_add_ps(lo, hi);
        r2 = _mm_add_ps(r2, junk);
        hi = _mm_movehl_ps(hi, lo);
        lo = _mm_movelh_ps(lo, r2);
        hi = _mm_shuffle_ps(hi, r2, 0x14);
        lo = _mm_add_ps(lo, hi);
        _mm_storeu_ps(out, lo);
        out[3] = 1.0f;
    }
};
struct UploadLocals_1432B0 {
    Alloc190 *volatile self;
    Mat_1432B0 *volatile dst;
    Mat_1432B0 *volatile src;
};
struct C_00197AA0 {
    char pad0[0xF0];
    Mat_1432B0 ff0;
    void func_00197AA0(void);
};
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_1432Light {
 void func_0015F880(int, Vec4_143660, int, void *, void *, int);
 void func_0015E420(void *, void *, int);
};
extern C_1432Light *D_002E2930;
extern int D_002A6E78;
static void Mat_Copy_1432B0(Mat_1432B0 *dst, const Mat_1432B0 *src)
{
    __m128 a = _mm_load_ps(&src->m[0]);
    __m128 b = _mm_load_ps(&src->m[4]);
    __m128 c = _mm_load_ps(&src->m[8]);
    __m128 d = _mm_load_ps(&src->m[12]);
    _mm_store_ps(&dst->m[0], a);
    _mm_store_ps(&dst->m[4], b);
    _mm_store_ps(&dst->m[8], c);
    _mm_store_ps(&dst->m[12], d);
}
void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);
void __fastcall func_001FEDC0(int n, void *p, int c);
extern int D_002BECB8;
extern f32 D_002A6E80;
extern f32 D_002BECB4;
extern f32 D_00275AEC;
extern f32 D_00275F60;
extern int D_002A6E7C;
extern int D_002BECB0;

struct S_143660_Prop {
    char pad0[0x24];
    unsigned char f24;         /* 0x24 */
};

struct S_143660_Node {
    char pad0[0x54];
    S_143660_Prop *f54;        /* 0x54 */
};

struct S_143660_Entry {
    int f0;
    S_143660_Node *f4;         /* 0x04 */
    int f8;
    int fC;
};

struct S_143660_Mgr {
    char pad0[0x14];
    S_143660_Entry *f14;       /* 0x14 */
};

extern S_143660_Mgr *D_002A829C;

struct C_001446B0 {
    char pad0[4];
    int f4;
    char pad8[0xC];
    void func_001446B0(int a0, int a1, int a2);
};

struct ShadowPiece {
    int count;
    int unk4;
    C_001446B0 *items;
};

struct ShadowPieceTable {
    char pad0[0x10];
    ShadowPiece *pieces;
};

struct ShadowTarget {
    char pad0[0xFC];
    int ffc;
    char pad100[0x54];
    int f154;
    int func_0017AB70(int a);
};

struct DXShadowCaster {
    void *vtbl;
    DXRenderableObject *f4;
    int f8;
    Alloc190 *fc;
    DXShadowCaster *func_00143820(DXRenderableObject *owner);
    void func_00143870(ShadowTarget *target);
    void *func_00143900(int flags);
};

struct DXRenderableObject {
    void *vtbl;
    char pad4[0xF0 - 4];
    Mat_1432B0 f0;             /* 0xF0 */
    char pad130[0x181 - 0x130];
    unsigned char f181;        /* 0x181 */
    char pad182[0x190 - 0x182];
    int f190;                  /* 0x190 */
    char pad194[0x1A0 - 0x194];
    unsigned char f1a0;        /* 0x1A0 */
    char pad1a1[2];
    unsigned char f1a3 : 1;
    ShadowPieceTable *f1a4;
    char pad1a8[0x1AC - 0x1A8];
    C_00197AA0 **f1ac;         /* 0x1AC */
    char pad1b0[0x1B8 - 0x1B0];
    int *f1b8;                 /* 0x1B8 */
    char pad1bc[4];
    Vec4_143660 f1c0;          /* 0x1C0 */
    PageObj *f1d0;
    int f1d4;
    int func_00143660(void);
    int func_00157960(void);
    void func_001814B0(int a);
    int func_001817F0(int a, int b, int c);
    void func_00181540();
    DXRenderableObject *func_00143540(int a1, int a2, int a3);
    DXRenderableObject *func_00143580(int a);
    void func_001435D0(void);
    void *func_001437A0(int flags);
};

struct C_001C5DE0 {
    void func_001C5DE0(void *a, void *b, void *c, int d);
};

extern C_001C5DE0 *D_002AB66C;

struct C_00143600 {
    void func_00143600();
};

struct C_001437E0 {
    int unk0;
    void *unk4;
    int unk8;
    void func_001437E0(void *p);
};

struct DXSignatureWaveObjVT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S_00143940_V4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

/* DXSignatureWave */
struct DXSignatureWave {
    void *vtbl;
    char pad4[0x48];
    u32 f4C;
    char pad50[0xA0];
    void *fF0[3];
    void *fFC;
    DXSignatureWaveObjVT **f100;
    void func_001439D0();
    int func_00143A40(const char *name, int id);
    DXSignatureWave *func_00143940(S_00143940_V4 a, S_00143940_V4 b, int c1, int c2,
                                   int c3, int c4, int c5, int c6, int c7, int c8,
                                   int c9, int c10);
    void func_001942C0();
    void func_00194600(S_00143940_V4 a, S_00143940_V4 b, int c1, int c2, int c3, int c4,
                       int c5, int c6, int c7, int c8, int c9, int c10);
    void func_00194600(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9,
                       int c10, int c11, int c12, int c13, int c14, int c15, int c16, int c17,
                       int c18);
    void func_00194600(f32 c1, f32 c2, f32 c3, f32 c4, f32 c5, f32 c6, f32 c7, f32 c8, int c9,
                       int c10, int c11, int c12, int c13, int c14, int c15, int c16, int c17,
                       int c18);
};


int func_000263B0(void *dst, const void *src, void *m);
void Alloc190::func_00142F30(int a)
{
    Mat_1432B0 t;
    char *m;
    int func_000263B0(...);
    int func_00030AC0(...);
    int func_0011ACC0(...);

    m = (char *)a;
    AsmTransposeMatrix((float *)&t, (const float *)((char *)f4 + 0xf0));
    {
        DXRenderableObject *o = f4;
        if (o->f1d4) {
            func_000263B0((char *)this + 0x90, (char *)o + 0xf0, (int)m + 0x290);
            AsmCopyMatrix((char *)this + 0x50, m + 0x290);
        } else {
            func_000263B0((char *)this + 0x90, (char *)o + 0xf0, (int)m + 0x250);
            AsmCopyMatrix((char *)this + 0x50, m + 0x250);
        }
    }
    *(float *)((char *)this + 0x150) = *(float *)(a + 0x170) - *(float *)((char *)f4 + 0xfc);
    *(float *)((char *)this + 0x154) = *(float *)(a + 0x174) - *(float *)((char *)f4 + 0x10c);
    *(float *)((char *)this + 0x158) = *(float *)(a + 0x178) - *(float *)((char *)f4 + 0x11c);
    AsmTransformPoint((float *)((char *)this + 0x150), (const float *)((char *)this + 0x150), (const float *)&t);
    {
        DXRenderableObject *o = f4;
        if ((o->f1a3 & 1) != 0 && *(int *)((char *)o + 0x18c) != 0) {
            D_002E2930->func_0015F880(*(int *)((char *)o + 0x18c),
                Vec4_143660(*(float *)((char *)o + 0xbc), *(float *)((char *)o + 0xcc), *(float *)((char *)o + 0xdc), 1.0f),
                D_002A6E78, (char *)this + 0xd0, (char *)this + 0x110, 0);
            if (*(int *)((char *)f4 + 0x190) <= 1) {
                func_00030AC0((char *)this + 0xd0, (char *)this + 0xd0, &t);
                func_00030AC0((char *)this + 0xe0, (char *)this + 0xe0, &t);
                func_00030AC0((char *)this + 0xf0, (char *)this + 0xf0, &t);
            }
        } else {
            D_002E2930->func_0015E420((char *)this + 0xd0, (char *)this + 0x110, 0);
            if (*(int *)((char *)f4 + 0x190) <= 1) {
                func_00030AC0((char *)this + 0xd0, (char *)this + 0xd0, &t);
            }
        }
    }
    func_0011ACC0((char *)this + 0x10, (char *)f4 + 0xf0, a + 0xb0);
    *(Vec4_143660 *)((char *)this + 0x170) = *(Vec4_143660 *)(a + 0x170);
    *(Vec4_143660 *)((char *)this + 0x180) = *(Vec4_143660 *)((char *)D_002EFDB8 + 0x74);
}

void Alloc190::func_001432B0()
{
    Mat_1432B0 m;
    int n;
    int i;
    int r;

    func_001FEC30(0x10, (char *)this + 0x50);
    func_001FEC30(0x18, (char *)this + 0x90);
    func_001FEC30(0x1c, (char *)this->f4 + 0xf0);
    func_001FEBD0(2, (char *)this + 0x150);
    func_001FEC30(4, (char *)this + 0xd0);
    func_001FEC30(8, (char *)this + 0x110);
    func_001FEC30(0x14, (char *)this + 0x10);
    func_001FEBD0(0x20, (char *)this + 0x160);
    func_001FEBD0(0x21, (char *)this + 0x170);
    func_001FEBD0(3, (char *)this + 0x180);
    if (D_002BECB8) {
        D_002BECB4 = D_002A6E80 + D_002BECB4;
        if (D_002BECB4 > D_00275AEC) {
            D_002A6E80 = -0.3f;
            D_002BECB4 = 0.0f;
        } else if (D_002BECB4 < D_00275F60) {
            D_002A6E80 = 0.3f;
            D_002BECB4 = 0.0f;
        }
        if (*(int *)((char *)this->f4 + 0x190) < 1) {
            AsmCopyMatrix(&m, (char *)this->f4 + 0xf0);
            for (i = 0; i < D_002A6E7C; i++) {
                m.m[3] += D_002BECB4;
                func_001FEDC0(0x60 + i * 3, &m, 0xc);
            }
        }
    } else {
        char *o = (char *)this->f4;

        n = *(int *)(o + 0x190);
        if (n > 1) {
            i = 0;
            if (i < n) {
                r = 0x60;
                do {
                    C_00197AA0 *p = (*(C_00197AA0 ***)(o + 0x1ac))[i];
                    if (p && r - 0x5d < 0x60) {
                        p->func_00197AA0();
                        func_001FEDC0(r, &p->ff0, 0xc);
                    }
                    o = (char *)this->f4;
                    n = *(int *)(o + 0x190);
                    i++;
                    r += 3;
                } while (i < n);
            }
            if (D_002BECB0) {
                for (i = *(int *)((char *)this->f4 + 0x190); i < 31; i++) {
                    r = 0x60 + 3 * i;
                    if (r - 0x5d < 0x60)
                        func_001FEDC0(r, (char *)this->f4 + 0xf0, 0xc);
                }
            }
        }
    }
}

DXRenderableObjectData *DXRenderableObjectData::func_00143520(void)
{
    func_00181410();
    vtbl = (void *)&D_002859D0;
    return this;
}

DXRenderableObject *DXRenderableObject::func_00143540(int a1, int a2, int a3)
{
    if (func_001817F0(a1, a2, 0) == 0)
        return 0;
    f1a3 = a3;
    return this;
}

DXRenderableObject *DXRenderableObject::func_00143580(int a)
{
    Alloc190 *p;

    func_001814B0(a);
    vtbl = (void *)&D_002859EC;
    p = (Alloc190 *)func_001E8A44(0x190);
    if (p)
        p = p->func_00142E90(this);
    else
        p = 0;
    f1d0 = (PageObj *)p;
    f1d4 = -1;
    return this;
}

void DXRenderableObject::func_001435D0(void)
{
    vtbl = (void *)&D_002859EC;
    if (f1d0)
        f1d0->destroy(1);
    func_00181540();
}

void C_00143600::func_00143600()
{
    __declspec(align(16)) float m[16];
    int func_000263B0(...);
    int func_00197AA0(...);

    func_00197AA0();
    func_000263B0(m, (char *)this + 0xf0, (char *)(D_002EFDB8[1] + 0xf0));
    D_002AB66C->func_001C5DE0(m, (char *)this + 0x150, (char *)this + 0x160, 0);
}

int DXRenderableObject::func_00143660(void)
{
    ShadowPiece *piece;
    int i;

    if (!(f181 & 1))
        return 1;
    if (f1d4 == -1)
        f1d4 = (D_002A829C->f14[*f1b8].f4->f54->f24 >> 3) & 1;
    ((Alloc190 *)f1d0)->func_00142F30(D_002EFDB8[1]);
    Vec4_143660 v(f1c0.x, f1c0.y, f1c0.z, f1c0.w);
    ((Alloc190 *)f1d0)->f160 = v;
    piece = &f1a4->pieces[f1a0];
    for (i = 0; i < piece->count; i++)
        piece->items[i].func_001446B0((int)f1d0, (int)this, f1b8[piece->items[i].f4]);
    return func_00157960();
}

void *DXRenderableObjectData::func_00143770(int flags)
{
    vtbl = (void *)&D_002859D0;
    func_00181440();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void *DXRenderableObject::func_001437A0(int flags)
{
    vtbl = (void *)&D_002859EC;
    if (f1d0)
        f1d0->destroy(1);
    func_00181540();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_001437E0::func_001437E0(void *p)
{
    unk4 = p;
    unk8 = 0;
}

DXShadowCaster *DXShadowCaster::func_00143820(DXRenderableObject *owner)
{
    Alloc190 *p;

    f4 = owner;
    f8 = 0;
    vtbl = (void *)&D_00285AAC;
    p = (Alloc190 *)func_001E8A44(0x190);
    if (p)
        p = p->func_00142E90(owner);
    else
        p = 0;
    fc = p;
    return this;
}

void DXShadowCaster::func_00143870(ShadowTarget *target)
{
    ShadowPiece *piece = &f4->f1a4->pieces[f8];
    int a2 = target->f154;
    int i;

    fc->f4 = f4;
    fc->func_00142F30(target->ffc);
    for (i = 0; i < piece->count; i++) {
        if (target->func_0017AB70(a2))
            piece->items[i].func_001446B0((int)fc, (int)this, a2);
    }
}

void *DXShadowCaster::func_00143900(int flags)
{
    vtbl = (void *)&D_00285AAC;
    if (fc)
        fc->destroy(1);
    vtbl = (void *)&D_00285A9C;
    if (flags & 1)
        func_001E891B(this);
    return this;
}

DXSignatureWave *DXSignatureWave::func_00143940(S_00143940_V4 a, S_00143940_V4 b, int c1, int c2,
                                                int c3, int c4, int c5, int c6, int c7, int c8,
                                                int c9, int c10)
{
    func_00194600(a.x, a.y, a.z, a.w, b.x, b.y, b.z, b.w, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
    f100 = 0;
    fF0[0] = 0;
    fF0[1] = 0;
    fF0[2] = 0;
    fFC = 0;
    vtbl = (void *)&D_00285AC4;
    return this;
}

void DXSignatureWave::func_001439D0()
{
    u32 i;

    vtbl = (void *)&D_00285AC4;
    if (f100 != 0) {
        for (i = 0; i < f4C; i++) {
            DXSignatureWaveObjVT *obj = f100[i];
            if (obj != 0)
                obj->v2();
        }
        func_001E891B(f100);
    }
    for (i = 0; i < 3; i++) {
        if (fF0[i] != 0)
            func_00201100(fF0[i]);
    }
    func_001942C0();
}

extern int D_002A99B0;
extern int D_002ABE74;
extern char D_00285B40[], D_00285B3C[], D_00285B30[];
int func_001ADCC0(char *, int, const char *, ...);
void *func_001D6E20(char *, int, int);
int func_001B2910(int);
extern float D_00275460;
int DXSignatureWave::func_00143A40(const char *name, int id)
{
 char buf[260];
 char *self=(char *)this;
 if(!D_002A99B0 && *(int *)(self+0xac)==3) return 1;
 *(void ***)(self+0x24)=(void **)func_001E8A44(f4C*4);
 if(!*(int *)(self+0xac)) f100=(DXSignatureWaveObjVT **)func_001E8A44(f4C*4);
 for(unsigned i=0;i<f4C;i++){
 func_001ADCC0(buf,260,D_00285B40,name,i,id);
 (*(void ***)(self+0x24))[i]=func_001D6E20(buf,8,2);
 if(!*(int *)(self+0xac)){
 int old=D_002ABE74; D_002ABE74=0;
 func_001ADCC0(buf,260,D_00285B30,name,i,D_00285B3C,id);
 f100[i]=(DXSignatureWaveObjVT *)func_001D6E20(buf,8,0);
 D_002ABE74=old;
 }
 }
 void *obj=**(void ***)(self+0x24);
 int size;
 ((WaveBuffer *)obj)->Lock(0,&size,0);
 *(unsigned *)(self+0x28)=size/(func_001B2910(*(int *)((char *)**(void ***)(self+0x24)+0xa4))/8);
 obj=**(void ***)(self+0x24);
 ((WaveBuffer *)obj)->Unlock(0);
 float scale=D_00275460 / *(unsigned *)(self+0x28);
 *(float *)(self+0x8c)*=scale;
 *(float *)(self+0x90)*=scale;
 return 1;
}

undefined4 C_00143BD0::func_00143BD0(byte param_1)
{
  int func_001439D0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001439D0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
extern int D_002A6F8C;
extern const float D_00275544;
extern float D_002EFEA0;
extern char *D_002F08BC;
extern char D_002A7054[];
extern int D_00040304, D_00040344, D_00040348, D_00040350;
extern int D_0020C6DC, D_0020C6E0, D_0020C6E4, D_0020C6EC, D_0020C6F0, D_0020C6F4, D_0020C6F8;
extern int D_0020C760, D_0020C764, D_0020C76C, D_0020C770, D_0020C774, D_0020C778;
extern int D_0020CA7C;
extern int D_0020C760, D_0020C764, D_0020C76C, D_0020C770, D_0020C774, D_0020C778;

void __stdcall func_001FF940(void *a, void *b);
void *__stdcall func_001FF3C0(int size);
void *__stdcall func_001FF410(void *buffer, int flags);
int __fastcall func_001FEBD0(int n, void *p);
void __fastcall func_001FEC30(int n, void *p);
void __fastcall func_001FD020(void *p, int v);
void __stdcall func_00200390(int index, int value);
void __stdcall func_00200510(int index, int value);
void __stdcall func_00200950(int a, int b, void *c, void *d, int e);
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200B30(void *a, int b, void *c);

struct Vec4_143C00 {
    float x, y, z, w;
};
extern Vec4_143C00 D_002BECE0[];

struct Vec3_143C00 {
    float x, y, z;
    Vec3_143C00() { x = y = z = 0; }
};

struct Corner_143C00 {
    Vec3_143C00 pos;
    float w;
};

struct Quad_143C00 {
    char pad0[0x74];
    Corner_143C00 c[4];
    char padB4[0x2c];
    int fE0;
    int fE4;
    char padE8[8];
    int fF0;
    int fF4;
};

struct Vtx28_143C00 {
    Vec3_143C00 pos;
    float u0, v0, u1, v1;
};

struct Vtx20_143C00 {
    Vec3_143C00 pos;
    float u, v;
};

struct Tex_143C00 {
    char pad0[0xb8];
    int fB8;
    int fBC;
};

struct Slot6C_143C00 {
    void func_0014A650(int a0);
};

struct Slot70_143C00 {
    void func_00142D00(int a0);
};

struct C_00143C00 {
    char pad0[0x24];
    Tex_143C00 **f24;
    char pad28[0xc];
    float f34;
    float f38;
    char pad3C[0x14];
    int f50;
    int f54;
    float f58;
    char pad5C[8];
    float f64;
    char pad68[4];
    float f6C;
    char pad70[0x14];
    float f84;
    float f88;
    char pad8C[8];
    float f94;
    float f98;
    char pad9C[8];
    int fA4;
    char padA8[4];
    int fAC;
    char padB0[0x28];
    float fD8;
    int fDC;
    char padE0[4];
    float fE4;
    char padE8[4];
    int fEC;
    void *fF0[3];
    int fFC;
    __forceinline float GetScale()
    {
        float s;
        switch (fAC) {
        case 0:
            s = fD8 / D_002EFEA0;
            break;
        case 1:
        case 2:
            s = fD8;
            break;
        case 3:
            s = D_00275460;
            break;
        }
        return s;
    }
    __forceinline void SetColor(float s);
    __forceinline void Uv28(Vtx28_143C00 *v, float rw, float rh);
    __forceinline void Uv20(Vtx20_143C00 *v, float rw, float rh);
    void func_00143C00(Quad_143C00 *arg);
};

struct Color_143C00 {
    float r, g, b, a;
    Color_143C00(float x, float y, float z, float w)
    {
        r = x;
        g = y;
        b = z;
        a = w;
    }
};

__forceinline void C_00143C00::SetColor(float s)
{
    const Vec4_143C00 *m = &D_002BECE0[fAC];
    Color_143C00 col(s * m->x, s * m->y, s * m->z, f58);
    func_001FEBD0(0x20, &col);
}

__forceinline void C_00143C00::Uv28(Vtx28_143C00 *v, float rw, float rh)
{
    v->u0 = (v->pos.x - f94) * rw;
    v->v0 = (v->pos.z - f98) * rh;
    v->u1 = v->u0;
    v->v1 = v->v0;
}

__forceinline void C_00143C00::Uv20(Vtx20_143C00 *v, float rw, float rh)
{
    v->u = (v->pos.x - f94) * rw;
    v->v = (v->pos.z - f98) * rh;
}

void C_00143C00::func_00143C00(Quad_143C00 *arg)
{
    int v;
    if (D_002A99B0 != 0 || fAC != 3) {
        int wide = fE4 != D_00275544;
        {
            char *g = D_002F08BC;
            char *tbl[4] = { g + 0x228, g + 0x240, g + 0x240, g + 0x240 };
            func_001FF940(tbl[fAC], g + 0x258);
        }
        f94 = f84 + f64;
        f98 = f88 + f6C;
        SetColor(GetScale());
        func_001FEC30(0x18, (void *)(*(int *)(D_002EFDB8 + 4) + 0x290));
        D_0020C6DC |= 0x3000;
        D_0020CA7C = 0;
        func_001FD020(&D_00040304, 1);
        func_001FD020(&D_00040350, fDC ? 0x8006 : 0x800b);
        func_001FD020(&D_00040344, 0x302);
        func_001FD020(&D_00040348, 1);
        func_00200390(0, f24[f50]->fB8);
        func_00200510(0, f24[f50]->fBC);
        v = D_0020C6DC;
        D_0020C6E0 = fA4;
        v |= 1;
        D_0020C6DC = v;
        D_0020C6E4 = fA4;
        v = D_0020C6DC;
        v |= 1;
        D_0020C6DC = v;
        v = D_0020C6DC;
        D_0020C6EC = 2;
        D_0020C6F0 = 2;
        D_0020C6F4 = 2;
        D_0020C6F8 = fEC;
        v |= 1;
        D_0020C6DC = v;
        if (fE4 != D_00275544) {
            func_00200390(1, f24[f54]->fB8);
            func_00200510(1, f24[f54]->fBC);
            v = D_0020C6DC;
            v |= 2;
            D_0020C6DC = v;
            D_0020C760 = fA4;
            D_0020C764 = fA4;
            v |= 2;
            D_0020C6DC = v;
            D_0020C76C = 2;
            D_0020C770 = 2;
            D_0020C774 = 2;
            v |= 2;
            D_0020C6DC = v;
            D_0020C778 = fEC;
        }
        Vtx28_143C00 v28[4];
        Vtx20_143C00 v20[4];
        if (fF0[0] == 0) {
            int size = wide ? 0x70 : 0x50;
            fF0[0] = func_001FF3C0(size);
            fF0[1] = func_001FF3C0(size);
            fF0[2] = func_001FF3C0(size);
        }
        if (wide) {
            ((Slot6C_143C00 *)*(void **)(D_002EFDB8 + 0x6c))->func_0014A650(arg->fE4);
            ((Slot70_143C00 *)*(void **)(D_002EFDB8 + 0x70))->func_00142D00(arg->fF4);
            if (D_002A6F8C != 0) {
                Vtx28_143C00 *p = (Vtx28_143C00 *)func_001FF410(fF0[fFC], 0);
                p[0].pos.x = arg->c[0].pos.x;
                p[0].pos.y = arg->c[0].pos.y;
                p[0].pos.z = arg->c[0].pos.z;
                p[0].u0 = (p[0].pos.x - f94) / f34;
                p[0].v0 = (p[0].pos.z - f98) / f38;
                p[0].u1 = p[0].u0;
                p[0].v1 = p[0].v0;
                p[1].pos.x = arg->c[1].pos.x;
                p[1].pos.y = arg->c[1].pos.y;
                p[1].pos.z = arg->c[1].pos.z;
                p[1].u0 = (p[1].pos.x - f94) / f34;
                p[1].v0 = (p[1].pos.z - f98) / f38;
                p[1].u1 = p[1].u0;
                p[1].v1 = p[1].v0;
                p[2].pos.x = arg->c[2].pos.x;
                p[2].pos.y = arg->c[2].pos.y;
                p[2].pos.z = arg->c[2].pos.z;
                p[2].u0 = (p[2].pos.x - f94) / f34;
                p[2].v0 = (p[2].pos.z - f98) / f38;
                p[2].u1 = p[2].u0;
                p[2].v1 = p[2].v0;
                p[3].pos.x = arg->c[3].pos.x;
                p[3].pos.y = arg->c[3].pos.y;
                p[3].pos.z = arg->c[3].pos.z;
                p[3].u0 = (p[3].pos.x - f94) / f34;
                p[3].v0 = (p[3].pos.z - f98) / f38;
                p[3].u1 = p[3].u0;
                p[3].v1 = p[3].v0;
                func_001FEE00(0, fF0[fFC], 0x1c);
                func_00200B30((void *)6, 4, D_002A7054);
                if (++fFC == 3) {
                    fFC = 0;
                }
            } else {
                v28[0].pos.x = arg->c[0].pos.x;
                v28[0].pos.y = arg->c[0].pos.y;
                v28[0].pos.z = arg->c[0].pos.z;
                v28[1].pos.x = arg->c[1].pos.x;
                v28[1].pos.y = arg->c[1].pos.y;
                v28[1].pos.z = arg->c[1].pos.z;
                v28[2].pos.x = arg->c[2].pos.x;
                v28[2].pos.y = arg->c[2].pos.y;
                v28[2].pos.z = arg->c[2].pos.z;
                v28[3].pos.x = arg->c[3].pos.x;
                v28[3].pos.y = arg->c[3].pos.y;
                v28[3].pos.z = arg->c[3].pos.z;
                float invW = D_00275460 / f34;
                float invH = D_00275460 / f38;
                Uv28(&v28[0], invW, invH);
                Uv28(&v28[1], invW, invH);
                Uv28(&v28[2], invW, invH);
                Uv28(&v28[3], invW, invH);
                func_00200950(6, 6, D_002A7054, v28, 0x1c);
            }
        } else {
            ((Slot6C_143C00 *)*(void **)(D_002EFDB8 + 0x6c))->func_0014A650(arg->fE0);
            ((Slot70_143C00 *)*(void **)(D_002EFDB8 + 0x70))->func_00142D00(arg->fF0);
            if (D_002A6F8C != 0) {
                Vtx20_143C00 *p = (Vtx20_143C00 *)func_001FF410(fF0[fFC], 0);
                p[0].pos.x = arg->c[0].pos.x;
                p[0].pos.y = arg->c[0].pos.y;
                p[0].pos.z = arg->c[0].pos.z;
                p[0].u = (p[0].pos.x - f94) / f34;
                p[0].v = (p[0].pos.z - f98) / f38;
                p[1].pos.x = arg->c[1].pos.x;
                p[1].pos.y = arg->c[1].pos.y;
                p[1].pos.z = arg->c[1].pos.z;
                p[1].u = (p[1].pos.x - f94) / f34;
                p[1].v = (p[1].pos.z - f98) / f38;
                p[2].pos.x = arg->c[2].pos.x;
                p[2].pos.y = arg->c[2].pos.y;
                p[2].pos.z = arg->c[2].pos.z;
                p[2].u = (p[2].pos.x - f94) / f34;
                p[2].v = (p[2].pos.z - f98) / f38;
                p[3].pos.x = arg->c[3].pos.x;
                p[3].pos.y = arg->c[3].pos.y;
                p[3].pos.z = arg->c[3].pos.z;
                p[3].u = (p[3].pos.x - f94) / f34;
                p[3].v = (p[3].pos.z - f98) / f38;
                func_001FEE00(0, fF0[fFC], 0x14);
                func_00200B30((void *)6, 4, D_002A7054);
                if (++fFC == 3) {
                    fFC = 0;
                }
            } else {
                v20[0].pos.x = arg->c[0].pos.x;
                v20[0].pos.y = arg->c[0].pos.y;
                v20[0].pos.z = arg->c[0].pos.z;
                v20[1].pos.x = arg->c[1].pos.x;
                v20[1].pos.y = arg->c[1].pos.y;
                v20[1].pos.z = arg->c[1].pos.z;
                v20[2].pos.x = arg->c[2].pos.x;
                v20[2].pos.y = arg->c[2].pos.y;
                v20[2].pos.z = arg->c[2].pos.z;
                v20[3].pos.x = arg->c[3].pos.x;
                v20[3].pos.y = arg->c[3].pos.y;
                v20[3].pos.z = arg->c[3].pos.z;
                float invW = D_00275460 / f34;
                float invH = D_00275460 / f38;
                Uv20(&v20[0], invW, invH);
                Uv20(&v20[1], invW, invH);
                Uv20(&v20[2], invW, invH);
                Uv20(&v20[3], invW, invH);
                func_00200950(6, 6, D_002A7054, v20, 0x14);
            }
        }
    }
}
