/* 10 functions from 0x001D6600 to 0x001D73E0, found by Ghidra. */
#include "common.h"

#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"

extern int D_0028F644;
struct TextureInit_001D6B70 {
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual void slot4(); virtual void slot5(); virtual void slot6(); virtual void slot7();
 virtual int slot8(int,int,int,int,int,int,int,int,int) volatile;
};
extern int D_002A83E0;

extern float D_00275460, D_002755E4, D_002F0B90, D_002ABDD0, D_002ABDD4, D_002ABE5C;
extern int D_002ABDCC;

struct Scale_001D6600 { char pad0[8]; int f8; int fC; };
struct Owner_001D6600 { Scale_001D6600 *func_0018C070(void); };
struct Glyph_001D6600 {
    char pad0[4];
    float f4;
    float f8;
    float fC;
    float f10;
    short s14;
    short s16;
    short s18;
    short s1A;
    int f1C;
};
struct Vertex_001D6600 { float x; float y; int z; int color; float u; float v; };
__declspec(align(16)) struct Mat_001D6600 { float m[16]; };
struct Draw_001D6600 { void func_001446B0(void *, int, int); };
struct Stream_001D6600 {
    char pad0[0xc];
    int count;
    char pad10[4];
    void *buf;
    char pad18[8];
    Mat_001D6600 mat;
};
struct Display_001D6600 { char pad0[0x1e0]; unsigned int w; unsigned int h; };
struct Gfx_001D6600 { int f0; Display_001D6600 *f4; };
extern Gfx_001D6600 *D_002EFDB8;
void *__stdcall func_001FF410(void *buffer, int flags);

static __forceinline void Identity_001D6600(Mat_001D6600 *&p)
{
    Mat_001D6600 *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

struct C_001D6600 {
    unsigned char *f0;
    float x4;
    float y8;
    char padC[8];
    float x14;
    float y18;
    char pad1C[0x18];
    float f34;
    char pad38[4];
    int f3C;
    Owner_001D6600 *f40;
    char pad44[4];
    int f48;
    char pad4C[2];
    unsigned char f4E;
    char pad4F;
    unsigned char f50;
    char pad51[3];
    Glyph_001D6600 **f54;
    Stream_001D6600 *f58;
    void *f5C;
    void func_001D6440(void);
    void func_001D6600(void);
};

int __cdecl func_001B2910(int a0);
unsigned int __stdcall func_00201100(void *p);
int __stdcall func_00200390(void *a0, void *a1);
int __stdcall func_001FCFE0(int a0);
void *__cdecl func_001E8A44(int size);
void __stdcall func_001FCEA0(void *map, int index, void *out, int a, int b);

extern char D_0028F6B8[], D_0028762C[], D_0028F6B4[], D_0028F6A0[], D_00276274[];
struct Img_001D6D00 { int f0; char pad[0x10]; int f14; int f18; };
struct Sz_001D6D00 { int w; void *p; };

struct S_001D7190_Pack {
    int func_0013C8A0(int a, void *b, int c, int d);
    int func_0013D310(char *name, char *ext, int *key, void *out, int flag);
    int func_0013AC40(char *name, int a, int b, int c, int *key, int d);
    int func_0013B1F0(int key, void *obj);
    int func_0013C110(int key);
};
extern S_001D7190_Pack *D_002BEAAC;

/* texture file header: {1, format, faces, width, w, h} + lock rect */
struct S_001D7190_Tex {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    void *f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
};

int __stdcall func_001FF460(int a);
int __stdcall func_001FF4C0(int a, int b);
int __stdcall func_001FCE40(int a, int b, void *c);
int __stdcall func_001FCF20(int a, int b, int c, int d, int e, int f, int g);

static __forceinline int Mips_001D7190(int size)
{
    int n = 0;

    while (size >= 4) {
        size >>= 1;
        n++;
    }
    return n;
}
int __cdecl func_001ADCC0(char *buf, int n, ...);
void *__cdecl func_0014FDF0(char *buf, char *mode);
void __cdecl func_0014FE50(void *h);
void *__cdecl func_001E8AA5(int n);
void __cdecl func_001E8390(void *p);
void __cdecl func_00178C60(void *a, void *b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
void __cdecl func_001B3A50(void *a, int b, int c, int d, char *e, int f);

extern char D_0028F6C8[], D_00275FB4[], D_0028F6C0[];
void __cdecl func_00030F30(char *path, char *ext);
void __cdecl func_001B3970(void *p);
char *__cdecl func_001E8920(char *dst, char *src, int n);

struct S_001D6E20_Info {
    char pad0[0xe];
    short w;
    short h;
    unsigned char bpp;
    char pad13;
    void *data;
};
S_001D6E20_Info *__cdecl func_001B3560(int key, int a);

struct S_001D6E20_Res {
    virtual void slot0(int flags);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual int slot23(char *name, int a2, unsigned int flags);
    S_001D6E20_Res *func_0013E8C0(int param);
};

struct S_001D6E20_Obj20 {
    S_001D6E20_Obj20 *func_0001C520(void);
    int func_0001C2E0(char *name, int key);
};

struct XboxTextureMap {
    void func_001D6D00(Img_001D6D00 *img, Sz_001D6D00 *sz, char *name);
    virtual void slot0(int flags);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual int func_001D7190(int a1, int a2, int a3);
    virtual int slot8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    char pad4[4];
    int f8;
    int fC;
    char pad10[0xa0 - 0x10];
    int fA0;
    int fA4;
    int fA8;
    int fAC;
    char padB0[0xb8 - 0xb0];
    void *fB8;
    void *fBC;
    u32 arrC0[10];
    u32 arrE8[10];
    void *func_001B1200(void *param);
    void func_001B11D0(void);
    XboxTextureMap *func_001D6AD0(void *param);
    void func_001D6B00(void);
    void func_001D6C50(void *param);
    int func_001D6CB0(int param);
    XboxTextureMap *func_001D6B70(void);
};

struct XboxTextureMapVtbl {
    virtual void slot0(int flags);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int slot8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};

void C_001D6600::func_001D6600(void)
{
    if (this->f4E & 2) {
        this->func_001D6440();
    }
    Vertex_001D6600 *verts = 0;
    if (this->f4E & 0xd) {
        verts = (Vertex_001D6600 *)func_001FF410(this->f58->buf, 0);
    }
    if (this->f4E & 5) {
        Scale_001D6600 *sc = this->f40->func_0018C070();
        volatile int iw = sc->f8;
        volatile int ih = sc->fC;
        float fw = (float)iw;
        float fh = (float)ih;
        float x = this->x14;
        float y = this->y18;
        volatile int z;

        if (this->f4E & 0x10) {
            float r = D_00275460 / this->f34;
            this->f4E &= ~0x10;
            x = x * r;
            y = y * r;
        }
        z = this->f3C;
        for (int i = 0; i < this->f50; i++) {
            Glyph_001D6600 *e = this->f54[this->f0[i]];
            Vertex_001D6600 *v = &verts[i * 6];

            if (e == 0) {
                e = this->f54[0];
                if (e == 0) {
                    continue;
                }
            }
            if (e->f1C != 0) {
                float left, right, top, bottom;
                float u0, u1, v0, v1;
                float lx, rx, ty, by;

                x = (float)e->s14 + x;
                left = x - D_002F0B90;
                right = (float)e->s16 + left;
                top = y - D_002F0B90;
                bottom = (float)e->s1A + top;
                lx = left * D_002ABDD0;
                by = D_002ABDD4 * bottom;
                ty = D_002ABDD4 * top;
                rx = D_002ABDD0 * right;
                v[0].z = z; v[1].z = z; v[2].z = z;
                v[3].z = z; v[4].z = z; v[5].z = z;
                v[0].x = lx; v[0].y = by;
                v[1].x = lx; v[1].y = ty;
                v[2].x = rx; v[2].y = ty;
                v[3].x = rx; v[3].y = ty;
                v[4].x = rx; v[4].y = by;
                v[5].x = lx; v[5].y = by;
                u0 = (float)(int)((fw - D_00275460) * e->f4 + D_002ABE5C) * (D_00275460 / fw);
                v0 = (float)(int)((fh - D_00275460) * e->fC + D_002ABE5C) * (D_00275460 / fh);
                u1 = (float)(int)((fw - D_00275460) * e->f8 + D_002ABE5C) * (D_00275460 / fw);
                v1 = (float)(int)((fh - D_00275460) * e->f10 + D_002ABE5C) * (D_00275460 / fh);
                v[0].u = u0; v[0].v = v1;
                v[1].u = u0; v[1].v = v0;
                v[2].u = u1; v[2].v = v0;
                v[3].u = u1; v[3].v = v0;
                v[4].u = u1; v[4].v = v1;
                v[5].u = u0; v[5].v = v1;
                x = (float)e->s18 + x;
            } else {
                float right = (e->f8 - e->f4) * fw + x;
                float bottom = (e->f10 - e->fC) * fh + y;
                float lx = x * D_002ABDD0;
                float by = D_002ABDD4 * bottom;
                float ty = D_002ABDD4 * y;
                float rx = D_002ABDD0 * right;

                v[0].z = z; v[1].z = z; v[2].z = z;
                v[3].z = z; v[4].z = z; v[5].z = z;
                v[0].x = lx; v[0].y = by;
                v[1].x = lx; v[1].y = ty;
                v[2].x = rx; v[2].y = ty;
                v[3].x = rx; v[3].y = ty;
                v[4].x = rx; v[4].y = by;
                v[5].x = lx; v[5].y = by;
                v[0].u = e->f4; v[0].v = e->f10;
                v[1].u = e->f4; v[1].v = e->fC;
                v[2].u = e->f8; v[2].v = e->fC;
                v[3].u = e->f8; v[3].v = e->fC;
                v[4].u = e->f8; v[4].v = e->f10;
                v[5].u = e->f4; v[5].v = e->f10;
                x = right;
            }
        }
        this->f4E &= ~4;
        this->f4E &= ~1;
    }
    if (this->f4E & 8) {
        for (int j = 0; j < this->f50 * 6; j++) {
            verts[j].color = this->f48;
        }
        this->f4E &= ~8;
    }
    this->f58->count = this->f50 * 6;
    AsmIdentityMatrix(this->f58->mat.m);
    this->f58->mat.m[3] = (float)D_002EFDB8->f4->w;
    this->f58->mat.m[7] = (float)D_002EFDB8->f4->h;
    this->f58->mat.m[0] = this->f34;
    this->f58->mat.m[5] = this->f34;
    if (D_002ABDCC != 0) {
        ((Draw_001D6600 *)this->f5C)->func_001446B0(this->f58, 0, -1);
    }
}

XboxTextureMap *XboxTextureMap::func_001D6AD0(void *param)
{
    func_001B1200(param);
    fB8 = 0;
    fBC = 0;
    *(void **)this = (void *)&D_0028F644;
    return this;
}

void XboxTextureMap::func_001D6B00(void)
{
    *(void **)this = (void *)&D_0028F644;
    if (fB8 != 0) {
        if (D_002A83E0 != 0) {
            func_001B2910(fA4);
        }
        func_00201100(fB8);
        fB8 = 0;
    }
    if (fBC != 0) {
        func_00201100(fBC);
        fBC = 0;
    }
    func_001B11D0();
}

XboxTextureMap *XboxTextureMap::func_001D6B70(void)
{
    int dims[2];
    XboxTextureMap *p;
    XboxTextureMap *q = 0;

    if (fB8 != 0) {
        func_001FCEA0(fB8, 0, dims, 0, 0x80);
        p = (XboxTextureMap *)func_001E8A44(0x110);
        if (p != 0) {
            p->func_001B1200((void *)1);
            ((void **)p)[0] = (void *)&D_0028F644;
            p->fB8 = 0;
            p->fBC = 0;
            q = p;
        }
        if (q != 0) {
            if (q->slot8(dims[1], f8, fC, (dims[0] << 3) / func_001B2910(fA4), fA0, fA4, fA4, 0, 0))
                return q;
            q->slot0(1);
        }
    }
    return 0;
}

int __stdcall func_001D6C40(int a0, int a1) {
    return 1;
}

void XboxTextureMap::func_001D6C50(void *param)
{
    if (fB8 != 0) {
        func_00200390(param, fB8);
    }
}

int XboxTextureMap::func_001D6CB0(int param)
{
    int v = f8;
    void *p = fB8;
    unsigned int n = func_001FCFE0((int)p);
    unsigned int i = 0;

    while (v != param) {
        if (i >= n) {
            break;
        }
        v /= 2;
        i++;
    }
    if (v == param) {
        return i;
    }
    return -1;
}

void XboxTextureMap::func_001D6D00(Img_001D6D00 *img, Sz_001D6D00 *sz, char *name)
{
    char buf[0x104];
    char *ext;
    int i;
    void *h;
    void *mem;

    if (func_001B2910(img->f0) == 8)
        ext = D_0028F6B8;
    else
        ext = D_0028762C;
    char *base = name;
    i = 0;
    if (base == 0)
        base = D_0028F6B4;
    h = 0;
    for (;;) {
        if (h != 0)
            func_0014FE50(h);
        func_001ADCC0(buf, 0x104, D_0028F6A0, base, i, ext);
        h = func_0014FDF0(buf, D_00276274);
        i++;
        if (h == 0)
            break;
    }
    mem = func_001E8AA5(img->f18 * img->f14 * 4);
    int w = img->f14;
    func_00178C60(mem, sz->p, w, img->f18, w, (sz->w << 3) / func_001B2910(fA4), 0x22b8, fA4, 0, 0, 0x80, 0xff00ff, 1);
    func_001B3A50(mem, img->f14, img->f18, 0, buf, 0x20);
    func_001E8390(mem);
}

void *func_001D6E20(char *name, int arg2, unsigned int flags)
{
    char buf[0x104];
    int hasC;
    int ok;
    int hasB;
    int hasA;
    int width;
    int height;
    int mips;
    int key;
    S_001D6E20_Res *found;
    S_001D6E20_Info *info;
    void *obj;
    char *s;
    char *d;

    obj = 0;
    info = 0;
    hasB = 0;
    hasA = 0;
    hasC = 0;
    ok = 0;
    s = name;
    d = buf;
    while ((*d++ = *s++) != 0)
        ;
    found = 0;
    key = -1;

    if (flags & 0x20) {
        func_00030F30(buf, D_0028F6C8);
        D_002BEAAC->func_0013D310(buf, D_00275FB4, &key, &found, 0);
        if (found != 0) {
            found->slot1();
            return found;
        }
        S_001D6E20_Res *p = (S_001D6E20_Res *)func_001E8A44(0x144);
        obj = p ? p->func_0013E8C0(1) : 0;
        if (((S_001D6E20_Res *)obj)->slot23(name, arg2, flags & ~0x20)) {
            D_002BEAAC->func_0013AC40(buf, 0, -1, 0, &key, 0);
            D_002BEAAC->func_0013B1F0(key, obj);
            D_002BEAAC->func_0013C110(key);
            return obj;
        }
        ((S_001D6E20_Res *)obj)->slot2();
        return 0;
    }

    func_00030F30(buf, D_0028F6C8);
    if (D_002BEAAC->func_0013D310(buf, D_00275FB4, &key, &found, 0)) {
        hasA = 1;
    } else {
        func_00030F30(buf, D_0028762C);
        if (D_002BEAAC->func_0013D310(buf, D_00275FB4, &key, &found, 0)) {
            hasB = 1;
        } else {
            func_00030F30(buf, D_0028F6C0);
            if (!D_002BEAAC->func_0013D310(buf, D_00275FB4, &key, &found, 0))
                return 0;
            hasC = 1;
        }
    }

    if (found != 0) {
        found->slot1();
        return found;
    }

    if (hasC) {
        S_001D6E20_Obj20 *p = (S_001D6E20_Obj20 *)func_001E8A44(0x20);
        obj = p ? p->func_0001C520() : 0;
        ((S_001D6E20_Obj20 *)obj)->func_0001C2E0(buf, key);
        ok = 1;
    } else {
        if (hasB) {
            info = func_001B3560(key, 0);
            if (info == 0)
                return 0;
            width = info->w;
            height = info->h;
        }
        XboxTextureMap *p = (XboxTextureMap *)func_001E8A44(0x110);
        obj = p ? p->func_001D6AD0((void *)1) : 0;
        func_001E8920((char *)obj + 0x18, buf, 0x7f);
        ((char *)obj)[0x97] = 0;
        mips = (flags & 2) ? 1 : width;
        if (hasB) {
            unsigned char bpp = info->bpp;
            int fmt;
            if (bpp == 0x10)
                fmt = 0x22b;
            else
                fmt = bpp == 0x18 ? 0x378 : 0x22b8;
            ok = ((XboxTextureMap *)obj)->slot8((int)info->data, width, height, width, mips, fmt,
                bpp == 0x20 ? 6 : 3, flags, 0);
            func_001B3970(info);
        }
        if (hasA)
            ok = ((XboxTextureMap *)obj)->func_001D7190(key, (int)name, flags);
    }
    if (ok)
        D_002BEAAC->func_0013B1F0(key, obj);
    D_002BEAAC->func_0013C110(key);
    return obj;
}

int XboxTextureMap::func_001D7190(int a1, int a2, int a3)
{
    S_001D7190_Tex t;
    int desc[3];
    int dims[2];
    int size;
    int fmt;
    int n;
    int i;
    XboxTextureMap *volatile p = this;

    t.f4 = -1;
    t.f0 = 1;
    t.f8 = 0;
    t.fC = 0;
    t.f10 = 0;
    t.f14 = 0;
    desc[0] = 0;
    desc[1] = 0;
    desc[2] = 0;
    D_002BEAAC->func_0013C8A0(*(volatile int *)&a1, &t, 0x18, 1);
    switch (t.f4) {
    case 0:
        fmt = 0xc;
        break;
    case 1:
    case 2:
        fmt = 0xe;
        break;
    case 3:
    case 4:
        fmt = 0xf;
        break;
    case 5:
        fmt = 0xb;
        {
            void **pdata = (void **)((char *)p + 0xbc);
            *pdata = (void *)func_001FF460(0);
            void *q = (void *)func_001FF4C0((int)p->fBC, 0);
            D_002BEAAC->func_0013C8A0(*(volatile int *)&a1, q, t.fC * 4, 1);
        }
        break;
    case 6:
        fmt = 0x13;
        break;
    default:
        fmt = *(volatile int *)&a1;
        break;
    }
    n = t.f8;
    if (n == 0) {
        n = 1;
        t.f8 = 1;
    }
    if ((a3 & 2) != 0 && n == 1) {
        size = AsmMinI(t.f10, t.f14);
        n = 0;
        while (size >= 4) {
            size >>= 1;
            n++;
        }
    }
    {
        void **pdata = (void **)((char *)p + 0xb8);
        void *r = (void *)func_001FCF20(t.f10, t.f14, 1, n, 0, fmt, 3);
        *pdata = r;
        if ((int)(((int)(r != 0) - 1) & 0x8007000e) < 0) {
            return 0;
        }
    }
    p->fA4 = fmt;
    p->fA8 = n;
    p->fAC = a3;
    p->f8 = t.f10;
    p->fC = t.f14;
    for (i = t.f8 - 1; i >= 0; i--) {
        func_001FCE40((int)p->fB8, i, &t.f18);
        func_001FCEA0(p->fB8, i, dims, 0, 0);
        D_002BEAAC->func_0013C8A0(*(volatile int *)&a1, desc, 0xc, 1);
        D_002BEAAC->func_0013C8A0(*(volatile int *)&a1, (void *)dims[1], desc[2], 1);
        p->arrC0[i] = dims[1];
        p->arrE8[i] = dims[0];
    }
    return 1;
}

