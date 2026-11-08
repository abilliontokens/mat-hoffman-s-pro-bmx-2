/* 11 functions from 0x0014E630 to 0x0014F600, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

extern float D_00275460;
extern float D_002756D0;
extern float D_002A7710;
extern float D_002A7714;
extern float D_002A7718;
extern float D_002A771C;
extern float D_002A7720;
extern float D_002A7730;
extern float D_002A7734;
extern float D_002A7738;
extern float D_002A773C;
extern float D_002DF870;
extern float D_002DF874;

/* lookup table entry: value and slope */
struct TrigEntry {
    float a;
    float b;
};
extern TrigEntry *D_002CF6B4;

struct V4x { float x, y, z, w; };
struct ObjB700 { ObjB700 *func_0019B700(int a); void func_0019D7B0(void *a, void *b); void func_00129920(int a); void func_001334E0(int a); void func_00011FF0(void *buf, int a, int b, void *cb); void func_0019C710(void *a, void *b, int c, int d); };
struct ObjA50 { ObjA50 *func_001A4A50(int a); void func_00129920(int a); void func_001A57E0(int a, int b, V4x v); };
struct ObjE620 { ObjE620 *func_0017E620(int a); void func_00129920(int a); void func_0017E6F0(V4x a, V4x b, int c); };
struct Ent14E { char p0[0x20]; int type; float f24; int f28; void func_001577A0(void *a, int b); };
void func_00129920(int a);
extern int D_002BA150;
extern int D_002BA574;

struct S_0014E630_Holder {
    char pad0[0x1ec];
    int count;
    void *items;
    void **out;
};
void *func_001E8AA5(unsigned int n);

float func_00016D60(int x);

/* resource loader object (0x21e4+ bytes), second base at +0x24 */
struct S_0014ECD0_Obj {
    char pad0[0x1ec];
    int f1ec;
    void func_0014C890(int a);
};

struct S_0014ECD0_Item {
    unsigned short s0;
    unsigned char c2;
    unsigned char lo3 : 3;
    unsigned char hi3 : 5;
    char pad4[4];
    unsigned short s8;
    unsigned short sA;
    unsigned short sC;
    unsigned char cE;
    unsigned char padF;
    unsigned char c10;
    unsigned char c11;
    char pad12[10];
};

struct S_0014ECD0_Vec {
    float x, y, z, w;
    S_0014ECD0_Vec() { z = 0; y = 0; x = 0; w = 1.0f; }
};

struct S_0014ECD0_Base {
    int f0;
};

struct S_0014ECD0_G {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual int v6(S_0014ECD0_Vec *a, S_0014ECD0_Vec *b, int c);
    virtual void v7(S_0014ECD0_Base *base, int r, S_0014ECD0_Vec *a, S_0014ECD0_Vec *b);
    char pad04[0x3c];
    float f40;
    float f44;
};

struct S_0014ECD0_Files {
    int func_0013B1A0(const char *name);
    void func_0013C110(int h);
};

struct S_0014ECD0_Class {
    char func_001BC6E0(const char *name);
};

struct S_0014ECD0_Cfg {
    char pad0[0x568];
    char f568;
};

struct C_0014ECD0 {
    virtual void v0(); virtual void v1(); virtual void v2();
    char pad04[0x38];
    int f3c;
    S_0014ECD0_Item *f40;
    int *f44;
    int *f48;
    int *f4c;
    int f50;
    S_0014ECD0_Obj *f54[256];
    int f454[0x108 / 4 - 0x100 + 0x100];
    int f55c;
    float f560;
    float f564;
    char f568;
    char pad569[0x578 - 0x569];
    float f578;
    float f57c;
    int f580;
    int f584;
    int f588;
    char pad58c[0x21d4 - 0x58c];
    int f21d4;
    int *f21d8;
    int f21dc;
    int f21e0;
    int func_0014CC60(const char *name, int *out);
    void func_0014E630(S_0014ECD0_Obj *o);
    void func_0014D360(int a, int b);
    int func_0013F690(void);
    C_0014ECD0 *func_0014ECD0(int a0, char *name, int a2, int a3, int a4, float f5, float f6, int a7);
};

extern "C" unsigned int __cdecl strlen(const char *);
extern float D_002755E8;
extern S_0014ECD0_G *D_002F07E8;
extern S_0014ECD0_Files *D_002BEAAC;
extern S_0014ECD0_Class *D_002AAEC8;
extern S_0014ECD0_Cfg *D_002BF250;
extern char D_00286A94[], D_00286A88[], D_00282A9C[];
extern float D_00286A9C, D_00286A90;
void func_001D3F50(void);
int func_001E8AF0(const char *s, const char *pat);
void *func_001E8920(void *, const void *, unsigned int);
void func_00030F30(char *dst, const char *src);
void *func_001E8A44(unsigned int);
int func_0013F650(void);
int func_0013F7B0(void);
extern "C" void func_001E8390(void*);
extern "C" void* func_001E8AA5(int);

static inline void FloatToIndex(int *out, float f) {
    int * volatile p = out;
    *p = _mm_cvttss_si32(*(__m128 *)&f);
}

struct C_0014F170 {
    undefined4 func_0014F170(byte param_1);
};


extern void func_0014F670(float value, void *grid, float *out);
extern void func_00011060();
extern float D_00283E00, D_002756D0, D_002756B8, D_002756E8;
void __fastcall func_0014E630(void *self, int, S_0014E630_Holder *a)
{
    int i;
    int off;
    (void)self;
    if (a->count == 0) {
        a->out = 0;
        return;
    }
    a->out = (void **)func_001E8AA5(a->count * 4);
    if (a->count <= 0)
        return;
    off = 0;
    for (i = 0; i < a->count; i++) {
        Ent14E *e = (Ent14E *)((char *)a->items + off);
        int type = e->type;
        if (type == 0) {
            void *mem = func_001E8A44(0x1e0);
            ObjB700 *o = mem ? ((ObjB700 *)mem)->func_0019B700(1) : 0;
            o->func_00129920(4);
            o->func_0019D7B0(*(void **)((char *)a + 0x1f8), a);
            a->out[i] = o;
            *(int *)((char *)o + 0x68) = D_002BA150;
            o->func_001334E0(1);
            *(int *)((char *)o + 0x60) = 0;
            *(int *)((char *)o + 0x64) = 0;
            e->func_001577A0(o, -1);
        } else if (type == 2) {
            void *mem = func_001E8A44(0x120);
            ObjA50 *o = mem ? ((ObjA50 *)mem)->func_001A4A50(1) : 0;
            o->func_00129920(4);
            o->func_001A57E0(e->f24, 0, *(V4x *)e->p0);
            a->out[i] = o;
            *(int *)((char *)o + 0x68) = D_002BA574;
            e->func_001577A0(o, -1);
        } else if (type == 3) {
            void *mem = func_001E8A44(0x120);
            ObjE620 *o = mem ? ((ObjE620 *)mem)->func_0017E620(1) : 0;
            o->func_00129920(4);
            o->func_0017E6F0(*(V4x *)((float *)e->p0 + 4), *(V4x *)e->p0, e->f24);
            a->out[i] = o;
            *(int *)((char *)o + 0x68) = D_002BA574;
            e->func_001577A0(o, -1);
        } else if (type == 1) {
            void *mem = func_001E8A44(0x1e0);
            ObjB700 *o = mem ? ((ObjB700 *)mem)->func_0019B700(1) : 0;
            o->func_00129920(4);
            char grid[0x200];
            o->func_00011FF0(grid, 0x10, 0x20, (void *)func_00011060);
            float *rec = (float *)grid;
            for (int k = 0; k < 0x10; k++) {
                float v = (float)k * D_00283E00;
                if (v <= D_002756D0)
                    v -= D_002756B8;
                else if (v < D_002756E8)
                    v += D_002756B8;
                float r[2];
                func_0014F670(v, grid, r);
                rec[0] = r[0] * e->f24;
                rec[1] = (float)e->f28;
                rec[2] = r[1] * e->f24;
                rec[3] = 0.0f;
                *(float *)((char *)grid + 0x100 + 8 * k) = rec[0];
                *(int *)((char *)grid + 0x104 + 0x10 * k) = 0;
                rec += 4;
            }
            float one = 1.0f;
            float *pv = (float *)grid;
            for (int t = 0; t < 4; t++) {
                for (int q = 0; q < 4; q++) {
                    pv[0] += ((float *)e->p0)[0];
                    pv[1] += ((float *)e->p0)[1];
                    pv[2] += ((float *)e->p0)[2];
                    pv[3] = one;
                    pv += 4;
                }
                pv += 16;
            }
            int ixbuf[16][6];
            int c = 0;
            for (int n = 0; n < 0x10; n++) {
                int d = c + 1;
                int s = (d < 0x10) ? d : 0;
                int s2 = s + 0x10;
                int *ip = ixbuf[n];
                ip[0] = c;
                ip[1] = s2;
                ip[2] = s;
                ip[3] = c;
                ip[4] = s2;
                ip[5] = d + 0xf;
                c = d;
            }
            o->func_0019C710(grid, ixbuf, 0x20, 0x20);
            AsmIdentityMatrix((char *)o + 0x130);
            a->out[i] = o;
            *(int *)((char *)o + 0x68) = D_002BA150;
            o->func_001334E0(1);
            *(int *)((char *)o + 0x60) = 0;
            *(int *)((char *)o + 0x64) = 0;
            e->func_001577A0(o, -1);
        }
        off += 0x2c;
    }
}

C_0014ECD0 *C_0014ECD0::func_0014ECD0(int a0, char * volatile name, int a2, int volatile a3, int a4, volatile float f5, volatile float f6, int a7)
{
    C_0014ECD0 * volatile self = this;
    C_0014ECD0 *p;
    float tb;
    float ta;
    float m;
    char buf[260];
    int n;
    int i;
    int cnt;
    int ma;
    int mb;
    int r;
    int v;
    int len;
    int lim;
    int var;
    int res;
    S_0014ECD0_Item *items;
    S_0014ECD0_Item *mem;
    S_0014ECD0_Base *base;

    func_001D3F50();
    self->f560 = f5;
    self->f564 = f6;
    self->f50 = a0;
    self->f55c = a2;
    tb = D_002F07E8->f44;
    ta = D_002F07E8->f40;
    m = AsmMaxF(ta, tb);
    self->f57c = *(volatile float *)&D_00286A9C / m;
    self->f578 = m * D_00286A90;
    if (func_001E8AF0(name, D_00286A94) == 0) {
        if (func_001E8AF0(name, D_00286A88) != 0) {
            len = strlen(name);
            lim = 0x103;
            ma = lim;
            mb = len;
            res = AsmMinI(ma, mb);
            n = res;
            func_001E8920(buf, name, n);
            buf[n] = 0;
            func_00030F30(buf, D_00286A94);
            if (D_002BEAAC->func_0013B1A0(buf) != 0) {
                func_00030F30(name, D_00286A94);
            }
        }
    }
    var = -1;
    if (self->func_0014CC60(name, &var) == 0) {
        self->v2();
        return 0;
    }
    for (i = 0; i < 0x100; i++) {
        p = self;
        if (p->f54[i] != 0) {
            p->f54[i]->func_0014C890(0x22b8);
            if (a3 != 0) {
                p = self;
                p->func_0014E630(p->f54[i]);
            } else {
                p = self;
                p->f54[i]->f1ec = 0;
            }
        }
    }
    self->f568 = D_002AAEC8->func_001BC6E0(D_00282A9C);
    p = self;
    cnt = p->f3c;
    mem = (S_0014ECD0_Item *)func_001E8A44(cnt * 0x1c);
    if (mem != 0) {
        S_0014ECD0_Item *it = mem;
        for (i = cnt - 1; i >= 0; i--) {
            it->c2 = 0xff;
            it->s0 = 0;
            it->lo3 = 0;
            it->s8 = 0;
            it->sA = 0;
            it->sC = 0;
            it->c10 = 0;
            it->c11 = 0;
            it->cE = 0;
            it->c2 = D_002BF250->f568;
            it++;
        }
        items = mem;
    } else {
        items = 0;
    }
    self->f40 = items;
    self->f580 = 0x5dc;
    self->f584 = 0x3c;
    self->f588 = 0x3c;
    self->f21d4 = 0x3c;
    self->f44 = (int *)func_001E8AA5(self->f580 << 2);
    self->f48 = (int *)func_001E8AA5(self->f584 << 2);
    self->f4c = (int *)func_001E8AA5(self->f588 << 2);
    self->f21d8 = (int *)func_001E8AA5(self->f21d4 << 2);
    p = self;
    if (p->f40 != 0 && p->f44 != 0 && p->f48 != 0 && p->f4c != 0 && p->f21d8 != 0) {
        for (i = 0; i < 0x3c; i++) {
            self->f21d8[i] = func_0013F650();
        }
        self->f21dc = self->func_0013F690();
        self->f21e0 = func_0013F7B0();
        v = var;
        self->func_0014D360(v, a7);
        D_002BEAAC->func_0013C110(v);
        S_0014ECD0_Vec a;
        S_0014ECD0_Vec b;
        a.x = D_002755E8 * D_002F07E8->f40;
        a.y = 0;
        a.z = D_002755E8 * D_002F07E8->f44;
        b.y = 1000.0f;
        b.x = D_002755E8 * a.x;
        b.z = D_002755E8 * a.z;
        r = D_002F07E8->v6(&a, &b, 0);
        p = self;
        if (p != 0) {
            base = (S_0014ECD0_Base *)((char *)p + 0x24);
        } else {
            base = 0;
        }
        D_002F07E8->v7(base, r, &a, &b);
        return self;
    }
    p->v2();
    return 0;
}

undefined4 C_0014F170::func_0014F170(byte param_1)
{
  int func_0014E4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014E4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)
extern int D_002A7700;
extern float* D_002DF87C;
extern float D_002755E8;
extern float D_002DF86C;
extern float D_00275600;
int func_0014F190()
{
    D_002DF86C = (float)(D_002A7700 - 2) * D_002755E8;
    if (D_002DF87C)
        func_001E8390(D_002DF87C);
    D_002DF87C = (float*)func_001E8AA5(D_002A7700 * 4);
    if (!D_002DF87C)
        return 0;
    float step = D_00275600 / (float)(D_002A7700 - 2);
    float* p = D_002DF87C;
    for (int i = 0; i < D_002A7700 - 1; i++) {
        float a = i * step - D_00275460;
        if (a > D_00275460)
            a = 1.0f;
        *p++ = (float)acos(a);
    }
    *p = p[-1];
    return 1;
}

extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
extern "C" double __cdecl acos(double);
#pragma intrinsic(cos, sin, acos)
extern int D_002A7704;
extern int D_002A7708;

/* arccos lookup tables, 12 bytes per power-of-two input range:
   float lo; float scale; float *table. D_002DF748 is the first table
   pointer, D_002DF868 the last one. */
extern float *D_002DF748;
extern char D_002DF868;
extern float D_002756EC;
extern float D_002756B8;
extern "C" void func_001E8390(void*);
extern "C" void* func_001E8AA5(int);
int func_0014F270()
{
    float n = (float)(D_002A7704 - 2);
    D_002DF870 = D_002756EC * n;
    D_002DF874 = D_002756B8 / n;
    if (D_002CF6B4)
        func_001E8390(D_002CF6B4);
    float* p = (float*)func_001E8AA5(D_002A7704 * 8);
    D_002CF6B4 = (TrigEntry*)p;
    if (!p)
        return 0;
    float step = D_002756B8 / (float)(D_002A7704 - 2);
    for (int i = 0; i < D_002A7704 - 1; i++) {
        float a = i * step - D_002756D0;
        p[0] = (float)cos(a);
        p[1] = (float)sin(a);
        p += 2;
    }
    p[0] = p[-2];
    p[1] = p[-1];
    return 1;
}

int func_0014F350()
{
    float lo = 0.0f;
    float hi = 5.9604645e-08f;
    float **tp;
    float *p;
    float *q;
    float scale;
    int i;

    tp = &D_002DF748;
    do {
        if (*tp) {
            func_001E8390(*tp);
        }
        p = (float *)func_001E8AA5(D_002A7708 * 4);
        *tp = p;
        if (!p) {
            return 0;
        }
        ((float *)tp)[-2] = lo;
        scale = (float)(D_002A7708 - 2) / (hi - lo);
        ((float *)tp)[-1] = scale;
        q = p;
        for (i = 0; i < D_002A7708 - 1; i++) {
            *q = (float)acos(D_00275460 - ((float)i / scale + lo));
            q++;
        }
        *q = q[-1];
        lo = hi;
        hi = hi + hi;
        tp += 3;
    } while ((int)tp <= (int)&D_002DF868);
    return 1;
}

float func_0014F450(int x) {
    float f = (func_00016D60(x) + D_002756D0) * D_002DF870;

    AsmFloatToInt(f, &x);
    return (f - (float)x) * D_002CF6B4[x].a * D_002DF874 + D_002CF6B4[x].b;
}

float func_0014F4B0(int x) {
    float f = (func_00016D60(x) + D_002756D0) * D_002DF870;

    AsmFloatToInt(f, &x);
    return D_002CF6B4[x].a - (f - (float)x) * D_002CF6B4[x].b * D_002DF874;
}

float func_0014F510(float x) {
    float t = x * x;

    return (((((D_002A7720 * t + D_002A771C) * t + D_002A7718) * t + D_002A7714) * t + D_002A7710) * t) + D_00275460;
}

float func_0014F550(float x) {
    float t = x * x;

    return ((((D_002A773C * t + D_002A7738) * t + D_002A7734) * t + D_002A7730) * t + D_00275460) * x;
}

float func_0014F590(int x) {
    float f = (func_00016D60(x) + D_002756D0) * D_002DF870;
    AsmFloatToInt(f, &x);
    float t = (f - (float)x) * D_002DF874;
    return (t * D_002CF6B4[x].a + D_002CF6B4[x].b) / (D_002CF6B4[x].a - t * D_002CF6B4[x].b);
}

