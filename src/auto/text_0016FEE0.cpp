/* 10 functions from 0x0016FEE0 to 0x00170DB0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern int D_002A8A80, D_002A8A84, D_002A8A88, D_002A8A8C;
__declspec(align(16)) struct S_00170B60_Mat { int m[16]; };
struct C_000264C0 { void func_000264C0(void *src); };
struct C_00170B60 { void func_00170B60(); };
struct V_00170B60 { int m[4]; __forceinline void reset() { m[0]=D_002A8A80; m[1]=D_002A8A84; m[2]=D_002A8A88; m[3]=D_002A8A8C; } };
static inline void Copy_00170B60(int *p) {
 p[0]=D_002A8A80; p[1]=D_002A8A84; p[2]=D_002A8A88; p[3]=D_002A8A8C;
}
static __forceinline void Identity_00170B60(S_00170B60_Mat *p) {
    __m128 z = _mm_setzero_ps();
    ((__m128 *)p->m)[0]=z; ((__m128 *)p->m)[1]=z;
    ((__m128 *)p->m)[2]=z; ((__m128 *)p->m)[3]=z;
    p->m[0]=0x3f800000; p->m[5]=0x3f800000;
    p->m[10]=0x3f800000; p->m[15]=0x3f800000;
}
#include "ghidra.h"
#include "ghidra.h"
struct C_00170B30 {
    undefined4 * func_00170B30(undefined4 param_1);
};

struct C_00170B10 {
    undefined4 func_00170B10(byte param_1);
};

struct C_00170B50 {
    int unk0;
    void func_00170B50(void);
};

extern int D_00284E94;
extern int D_00288A94;
void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct S_Obj {
    virtual void v0(int flags);
    virtual void v4(char *name, int a);
    virtual void v8();
    void *f4;
    int f8;
    unsigned char fC;
    void *f10;
    S_Obj *func_00144640(void);
    S_Obj *func_001425B0(void);
};

struct S_Obj154 {
    void func_0014A540(void);
    void func_0014A650(S_Obj154 *src);
    S_Obj154 *func_0014A520(void *a);
    void func_0014A560(void *a, int b);
};

struct V4_0016FEE0 {
    float x, y, z, w;
    V4_0016FEE0() { x = y = z = 0; w = 1.0f; }
    V4_0016FEE0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct S_Light_0016FEE0 {
    union { u32 d; u8 b[4]; } col;
    char pad4[0xc];
    u32 dirx, diry, dirz;
    char pad1c[4];
};

extern int D_00040344, D_00040348;
extern float D_002A88C0;
#include <string.h>
#include "asm_helpers.h"
extern int D_002A88B8, D_002AA46C, D_00288A84;
extern char D_002A60B0[], D_002A5558[], D_002EFB80[], D_00288B04[];
extern float D_002755E8, D_002889B0, D_002889A0, D_00288990;
void *func_001E8A44(int size);
int func_001E8858(void);
char *func_001E8AC0(char *s, int c);
void func_0014A7B0(void *a, void *b);
void *__stdcall func_001FF3C0(int size);

/* 100-byte particle slot: two default-initialised vectors, rest untouched. */
struct S_Slot_001704B0 {
    V4_0016FEE0 a;
    V4_0016FEE0 b;
    char pad20[0x44];
};

static __forceinline void Normalize_001704B0(float * volatile out, float * volatile in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_002889B0);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00288990)), _mm_sub_ss(_mm_load_ss(&D_002889A0), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}
void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200A90(int a, int b, int c);

struct C_001703B0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24, f28, f2c, f30, f34, f38, f3c, f40;
    u32 vectors[4][4];
    u32 f84, f88, f8c, f90;
    S_Light_0016FEE0 lights[3];
    char padF4[0x10];
    void *f104;
    u32 f108;
    int f10c;
    void *f110;
    char pad114[8];
    u32 f11c, f120;
    int f124;
    S_Obj *f128;
    void *f12c;
    void *f130;
    void *f134;
    u32 f138, f13c, f140, f144;
    S_Obj *f148;
    u32 f14c, f150;
    S_Obj154 *f154;
    S_Obj *f158;
    void *f15c;
    void *f160;
    int f164, f168;
    int f16c;
    S_Obj *f170;
    void func_0016FEE0(void);
    void func_001D3F50(void);
    void func_0016F110(char *path);
    C_001703B0 *func_001704B0(char *path, int count);
    void func_00157660(void);
    void func_00157600(int a);
    C_001703B0 *func_001702B0(int a);
    void func_001703B0(void);
};

struct C_00170AD0 {
    void *vtbl;
    int unk4;
    void *func_00170AD0(unsigned int flags);
};

struct S_001701F0_Node {
    char pad0[0xd4];
    int fD4;
    void func_001B07A0(void);
};

struct S_001701F0_Entry {
    int f0;
    S_001701F0_Node *f4;
    int f8;
    int fC;
};

struct S_001701F0_Mgr {
    char pad0[0x14];
    S_001701F0_Entry *f14;
};

struct C_00149310 {
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct S_001701F0_Tbl {
    char pad0[0x10];
    C_00149310 *f10[1];
};

struct S_001701F0_Inner {
    char pad0[0x170];
    char f170[1];
    char pad171[0x1d8 - 0x171];
    float f1d8;
    char pad1dc[0x250 - 0x1dc];
    char f250[1];
};

struct S_001701F0_Global {
    char pad0[4];
    S_001701F0_Inner *f4;
    char pad8[0x6c - 8];
    S_Obj154 *f6c;
    char pad70[4];
    char f74[1];
};

extern S_001701F0_Global *D_002EFDB8;
extern S_001701F0_Mgr *D_002A829C;
extern S_001701F0_Tbl *D_002F0630;

struct S_001701F0_170 {
    char pad0[0xa0];
    float fA0;
    char padA4[4];
    int fA8;
    void func_00142AF0(void);
};

struct S_001701F0_148 {
    int f0;
    int f4;
    char pad8[8];
    int f10;
};

struct C_001701F0 {
    char pad0[0x11c];
    int f11c;
    int f120;
    char pad124[0x144 - 0x124];
    C_00149310 *f144;
    S_001701F0_148 *f148;
    char pad14c[0x158 - 0x14c];
    int f158;
    char pad15c[0x170 - 0x15c];
    S_001701F0_170 *f170;
    void func_0016FBC0(void);
    int func_001701F0(void);
};


void C_001703B0::func_0016FEE0(void)
{
    V4_0016FEE0 quad[4];
    quad[0] = V4_0016FEE0(-1.0f, -1.0f, 0.0f, 0.0f);
    quad[1] = V4_0016FEE0(-1.0f, 1.0f, 0.0f, 0.0f);
    quad[2] = V4_0016FEE0(1.0f, 1.0f, 0.0f, 0.0f);
    quad[3] = V4_0016FEE0(1.0f, -1.0f, 0.0f, 0.0f);
    D_002EFDB8->f6c->func_0014A650(f154);
    S_001701F0_Inner *g = D_002EFDB8->f4;
    V4_0016FEE0 v(0.0f, 0.0f, 0.0f, 1.0f);
    func_001FEBD0(0, &v);
    func_001FEBD0(2, g->f170);
    func_001FEBD0(3, D_002EFDB8->f74);
    func_001FEC30(0x18, g->f250);
    func_001FEC30(0x22, quad);
    for (int i = 0; i < 4; i++) {
        V4_0016FEE0 c;
        int idx = i;
        if (i == 2 || i == 3)
            idx = 2;
        c.x = lights[idx].col.b[2] * D_002A88C0 * (1.0f / 255.0f);
        c.y = lights[idx].col.b[1] * D_002A88C0 * (1.0f / 255.0f);
        c.z = (lights[idx].col.d & 0xff) * D_002A88C0 * (1.0f / 255.0f);
        c.w = 1.0f;
        func_001FEBD0(i + 0x26, &c);
    }
    if (f164 > 0) {
        func_001FD020(&D_00040344, 0x302);
        func_001FD020(&D_00040348, 1);
        func_001FEE00(0, f160, 0x20);
        func_00200A90(8, 0, f164 << 2);
    }
    if (f168 > 0) {
        func_001FD020(&D_00040344, 0x302);
        func_001FD020(&D_00040348, 0x303);
        func_001FEE00(0, f15c, 0x20);
        func_00200A90(8, 0, f168 << 2);
    }
}

int C_001701F0::func_001701F0(void)
{
    if (f170 != 0 && f170->fA8 != 0) {
        float v = D_002EFDB8->f4->f1d8;
        f170->fA0 = v;
        f170->func_00142AF0();
    }
    if (f11c > 0 && f120 > 0) {
        func_0016FBC0();
        S_001701F0_Node *node = D_002A829C->f14[f148->f4].f4;
        node->func_001B07A0();
        f144 = D_002F0630->f10[node->fD4];
        f148->f10 = f158;
        f144->func_00149310((int)f148, 0, 0, 0);
    }
    return 1;
}

C_001703B0 *C_001703B0::func_001702B0(int a) {
 func_00157600(a);
 vtbl = &D_00288A94;
 u32 *p = &f24; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
 p = &f34; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
 p = vectors[0]; int count=4; do { p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000; p+=4; } while (--count);
 f11c=0; f120=0; f124=0;
 f34=0; f38=0xc2800000; f3c=0;
 f104=0; f14c=0; f150=0; f128=0; f12c=0; f134=0; f138=0; f13c=1;
 f148=0; f144=0; f108=0; f10c=0; f110=0; f158=0; f160=0; f15c=0; f164=0; f168=0; f170=0; f130=0; f140=0x437f0000;
 return this;
}

void C_001703B0::func_001703B0(void)
{
    vtbl = (void *)&D_00288A94;
    if (f128) f128->v8();
    if (f12c) func_001E891B(f12c);
    if (f130) func_001E891B(f130);
    if (f104) func_001E891B(f104);
    if (f134) func_001E891B(f134);
    if (f148) f148->v0(1);
    if (f110) func_001E891B(f110);
    if (f170) f170->v8();
    S_Obj154 *p = f154;
    if (p) {
        p->func_0014A540();
        func_001E891B(p);
        f154 = 0;
    }
    if (f158) f158->v0(1);
    if (f15c) func_00201100(f15c);
    if (f160) func_00201100(f160);
    func_00157660();
}

C_001703B0 *C_001703B0::func_001704B0(char *path, int count)
{
    char saved[128];
    char buf[128];
    u32 tbl[5];
    int n;

    func_001D3F50();
    f124 = count;
    {
        void *p = func_001E8A44(0xf0);
        f170 = p ? ((S_Obj *)p)->func_001425B0() : 0;
    }
    f10c = count / 2;
    if (f10c > 0)
        f110 = func_001E8A44(f10c * 8);
    D_002A88B8 = f10c;
    for (int i = 0; i < f10c; i++) {
        ((u32 *)f110)[i * 2] = 0;
        ((u32 *)f110)[i * 2 + 1] = 0;
    }
    if (f124 > 0) {
        f12c = func_001E8A44(f124 * 4);
        n = f124;
        {
            S_Slot_001704B0 *blk = (S_Slot_001704B0 *)func_001E8A44(n * 100);
            if (blk) {
                S_Slot_001704B0 *s = blk;
                for (int k = n - 1; k >= 0; k--, s++) {
                    s->a.x = 0;
                    s->a.y = 0;
                    s->a.z = 0;
                    s->a.w = 1.0f;
                    s->b.x = 0;
                    s->b.y = 0;
                    s->b.z = 0;
                    s->b.w = 1.0f;
                }
            }
            f130 = blk;
        }
        for (int i = 0, off = 0; i < f124; i++, off += 100)
            ((u32 *)f12c)[i] = (u32)f130 + off;
    }
    func_0016F110(path);
    {
        int i = 0;
        char c;
        do {
            c = D_002A60B0[i];
            saved[i] = c;
            i++;
        } while (c != 0);
    }
    {
        int i = 0;
        char c;
        do {
            c = D_002A5558[i];
            D_002A60B0[i] = c;
            i++;
        } while (c != 0);
    }
    {
        char *s = path;
        char *d = buf;
        char c;
        do {
            c = *s;
            *d = c;
            s++;
            d++;
        } while (c != 0);
    }
    {
        char *ext = func_001E8AC0(buf, '.');
        if (ext)
            memset(ext, 0, strlen(ext));
    }
    {
        void *p = func_001E8A44(0x14);
        f148 = p ? ((S_Obj *)p)->func_00144640() : 0;
    }
    f148->v4(buf, D_002AA46C);
    {
        int i = 0;
        char c;
        do {
            c = saved[i];
            D_002A60B0[i] = c;
            i++;
        } while (c != 0);
    }
    f13c = 1;
    tbl[0] = 0x20000000;
    tbl[1] = 0x40320000;
    tbl[2] = 0x40220001;
    tbl[3] = 0x40320002;
    tbl[4] = 0xffffffff;
    func_0014A7B0(D_002EFB80, tbl);
    {
        void *p = func_001E8A44(0xc);
        f154 = p ? ((S_Obj154 *)p)->func_0014A520(D_002EFB80) : 0;
    }
    f154->func_0014A560(D_00288B04, 0);
    {
        void *p = func_001E8A44(8);
        if (p) {
            ((u32 *)p)[0] = (u32)&D_00288A84;
            ((u32 *)p)[1] = 0;
        } else {
            p = 0;
        }
        f158 = (S_Obj *)p;
    }
    f158->f4 = (void *)this;
    f148->f10 = f158;
    f148->fC &= 0xfe;
    if (f124 > 0) {
        void **slot = &f15c;
        *slot = func_001FF3C0(f124 << 7);
    }
    f16c = (int)(f124 * D_002755E8);
    if (f16c > 0) {
        void **slot = &f160;
        *slot = func_001FF3C0(f16c << 7);
    }
    f84 = 0xbf800000;
    f88 = 0x3f800000;
    f8c = 0;
    lights[0].dirx = 0xbf800000;
    lights[0].diry = 0xbf800000;
    lights[0].dirz = 0;
    lights[1].dirx = 0x3f800000;
    lights[1].diry = 0x3f800000;
    lights[1].dirz = 0;
    lights[2].dirx = 0x3f800000;
    lights[2].diry = 0xbf800000;
    lights[2].dirz = 0;
    {
        V4_0016FEE0 q(-1.0f, 1.0f, 0.25f, 1.0f);
        AsmVec3Normalize((float *)vectors[0], &q.x);
    }
    {
        V4_0016FEE0 q(-1.0f, -1.0f, 0.25f, 1.0f);
        AsmVec3Normalize((float *)vectors[1], &q.x);
    }
    {
        V4_0016FEE0 q(1.0f, 1.0f, 0.25f, 1.0f);
        AsmVec3Normalize((float *)vectors[2], &q.x);
    }
    {
        V4_0016FEE0 q(1.0f, -1.0f, 0.25f, 1.0f);
        AsmVec3Normalize((float *)vectors[3], &q.x);
    }
    return this;
}

void *C_00170AD0::func_00170AD0(unsigned int flags)
{
    unk4 = 0;
    vtbl = (void *)&D_00284E94;
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_00170B10::func_00170B10(byte param_1)
{
  int func_001703B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001703B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 * C_00170B30::func_00170B30(undefined4 param_1)
{
  int func_001DC974(...);
  undefined4* in_ECX = (undefined4*)this;
  undefined4 uVar1;
  
  in_ECX[1] = 0;
  uVar1 = func_001DC974();
  *in_ECX = uVar1;
  in_ECX[2] = param_1;
  return in_ECX;
}

void C_00170B50::func_00170B50(void) {
    extern int D_00288B4C;
    int func_00171980(...);
    unk0 = (int)&D_00288B4C;
    func_00171980();
}

void C_00170B60::func_00170B60() {
 C_00170B60 * volatile self = this;
 S_00170B60_Mat * volatile qv;
 int *p;
 p=(int *)((char *)this+304); Copy_00170B60(p);
 p=(int *)((char *)self+320); Copy_00170B60(p);
 p=(int *)((char *)self+108); Copy_00170B60(p);
 p=(int *)((char *)self+124); Copy_00170B60(p);
 p=(int *)((char *)self+568); Copy_00170B60(p);
 p=(int *)((char *)self+584); Copy_00170B60(p);
 p=(int *)((char *)self+92); Copy_00170B60(p);
 p=(int *)((char *)self+616); Copy_00170B60(p);
 p=(int *)((char *)self+600); Copy_00170B60(p);
 __declspec(align(16)) S_00170B60_Mat a,b;
 S_00170B60_Mat *q;
 qv = &a;
 q = qv;
 ((__m128 *)q->m)[0]=_mm_setzero_ps(); ((__m128 *)q->m)[1]=_mm_setzero_ps();
 ((__m128 *)q->m)[2]=_mm_setzero_ps(); ((__m128 *)q->m)[3]=_mm_setzero_ps();
 q->m[0]=0x3f800000; q->m[5]=0x3f800000; q->m[10]=0x3f800000; q->m[15]=0x3f800000;
 b=a;
 ((C_000264C0 *)((char *)self+0x280))->func_000264C0(&b);
 qv = &b;
 q = qv;
 ((__m128 *)q->m)[0]=_mm_setzero_ps(); ((__m128 *)q->m)[1]=_mm_setzero_ps();
 ((__m128 *)q->m)[2]=_mm_setzero_ps(); ((__m128 *)q->m)[3]=_mm_setzero_ps();
 q->m[0]=0x3f800000; q->m[5]=0x3f800000; q->m[10]=0x3f800000; q->m[15]=0x3f800000;
 a=b;
 ((C_000264C0 *)((char *)self+0x2c0))->func_000264C0(&a);
 ((int *)self)[10]=0;
}

