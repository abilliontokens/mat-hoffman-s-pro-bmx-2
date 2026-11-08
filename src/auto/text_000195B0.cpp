/* 7 functions from 0x000195B0 to 0x0001A5A6, found by Ghidra. */
#include "common.h"
#include <math.h>
#include "ghidra.h"
#include <xmmintrin.h>
extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)
struct S_1A400_Vec4 { float x, y, z, w; };
struct S_1A400_Pos {
    char pad[0x24];
    float x, y, z;
    float w;
    void func_0011CA60(S_1A400_Vec4 v);
};
struct S_1A400_Arg { S_1A400_Pos *p; char pad[4]; float f8; int fC; int f10, f14; float f18, f1C, f20; };
struct C_1A400 { void func_0001A400(S_1A400_Arg *a, float t); void func_00017D20(int); void func_0001A060(float*,int); };
struct S_1A400_Cam { void func_00199B00(S_1A400_Vec4*,int); };
struct S_1A400_Link { char pad[4]; S_1A400_Cam *p; };
struct S_1A400_Entity { char pad[0x1a4]; S_1A400_Link *p; };
struct S_1A400_Player { char pad[0x2c]; S_1A400_Entity *p; char pad30[0x6d0-0x30]; int score; void func_00153D30(int); };
struct S_1A400_Game { char pad[0x4e4]; S_1A400_Player *p; };
extern S_1A400_Game *D_002B9120;
extern float D_002756C4, D_0027599C, D_00275AEC;
struct C_0001A3E0 {
    undefined4 func_0001A3E0(byte param_1);
};

extern int D_00275854;
extern int D_002754B8;

void func_001E891B(void *ptr);
void func_001E8390(void *ptr);
int func_00011260(int lo, int hi);

/* global game state */
struct S_1A060_Fx;
struct S_1A060_Mgr { void func_0001CE80(S_1A060_Fx *fx, float *pos, void *d, float a, float b); };
struct S_002A8490 {
    char pad0[4];
    S_1A060_Mgr *f4;
    char pad8[0x230];
    int f238;
};
extern S_002A8490 *D_002A8490;

/* the object the Tiki AI states work on */
struct S_00019790_Owner {
    char pad0[0x4d4];
    int f4d4;
    char pad4d8[0x274];
    int f74c;
    int f750;
    void func_00017D20(int a);
    void func_00019070(void);
    void func_001C6DA0(int a, int b);
};

struct C_00019790 {
    char pad0[8];
    S_00019790_Owner *f8;
    int fC;
    void func_00019790(void);
};

struct C_002754B8 {
    void *vtbl;
    ~C_002754B8() { vtbl = (void *)&D_002754B8; }
    static void operator delete(void *ptr) { func_001E891B(ptr); }
};

struct S_00019830_Sub {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
};

struct C_00019830 {
    void *vtbl;
    char pad4[0x380];
    S_00019830_Sub *unk384;
    void *unk388;
    void *unk38C;
    void *unk390;
    void *unk394;
    char pad398[0x49c - 0x398];
    void *unk49C;
    char pad4A0[4];
    void *unk4A4;
    void func_00019830(void);
    void func_001C75A0(void);
};

struct S_195B0_Vec { float x, y, z; };
struct S_195B0_Range { float f0; char pad[0x10]; };
struct S_195B0_F398 { S_195B0_Vec func_00016E40(void); S_195B0_Vec *func_00016E40(S_195B0_Vec *out); };
struct S_195B0_F4 { float func_00182530(float v); };
struct S_195B0_F3C { char pad0[4]; S_195B0_F4 *f4; };
struct S_195B0_Owner {
    char pad0[0x3c];
    S_195B0_F3C *f3c;
    char pad40[0x398 - 0x40];
    S_195B0_F398 *f398;
    char pad39c[0x49c - 0x39c];
    S_195B0_Range *f49c;
    char pad4a0[0x4d4 - 0x4a0];
    int f4d4;
    char pad4d8[4];
    int f4dc;
    char pad4e0[0x4f4 - 0x4e0];
    int f4f4;
    char pad4f8[0x508 - 0x4f8];
    float f508, f50c, f510;
    void func_00017700(void);
    void func_00017D00(void);
    void func_00017910(void);
    void func_00017760(void);
    int func_000192D0(int a, int b);
};
struct TikiEvadeState {
    void *vtbl;
    char pad4[4];
    S_195B0_Owner *f8;
    unsigned int fC;
    float f10;
    float f14;
    int func_000195B0(float dt);
};
extern float D_00275804;
static __forceinline int Body_195B0(TikiEvadeState *&self, float dt)
{
    if (self->f10 != self->f14) {
        if (self->f10 < self->f14) {
            self->f10 += dt;
            if (self->f10 > self->f14) {
                self->f10 = self->f14;
                self->f8->func_00017700();
                if (self->f8->f4d4 <= 0)
                    self->f8->func_00017D00();
            }
        } else if (self->f10 > self->f14) {
            self->f10 -= dt;
            if (self->f10 < self->f14)
                self->f10 = self->f14;
        }
        self->f8->f3c->f4->func_00182530(self->f10);
    }
    if ((unsigned int)D_002A8490->f238 > self->fC) {
        self->fC = D_002A8490->f238 + 2000;
        self->f8->func_00017910();
        S_195B0_Owner *o = self->f8;
        S_195B0_Vec v = o->f398->func_00016E40();
        float dx = v.x - o->f508;
        float dy = v.y - o->f50c;
        float dz = v.z - o->f510;
        float square = dz * dz + dy * dy + dx * dx;
        float dist;
        _mm_store_ss(&dist, _mm_sqrt_ss(_mm_load_ss(&square)));
        if ((dist < D_00275804 || dist > self->f8->f49c[self->f8->f4dc].f0) && self->f8->f4d4 > 0) {
            self->f8->f4dc = self->f8->func_000192D0(1, 1);
            self->f8->func_00017910();
            self->fC = D_002A8490->f238;
        } else {
            self->f8->func_00017760();
        }
        self->f14 = 1.0f;
        self->f8->f4f4 = 0;
    }
    return 1;
}

struct S_1A060_Vec { float x, y, z, w; };
struct S_1A060_Fx {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void func_14(int a); virtual void v6(); virtual int func_1C(void);
};
struct S_1A060_Node { char pad0[0x13c]; float f13c; char pad140[0xc]; float f14c; char pad150[0xc]; float f15c; char pad160[0x60]; char *f1c0; };
struct S_1A060_List { char pad0[0x190]; int f190; int *f194; char pad198[8]; S_1A060_Node **f1a0; };
struct S_1A060_Cam { void func_00197B40(S_1A060_Vec *a, S_1A060_Vec *b); };
struct S_1A060_F3C { char pad0[4]; S_1A060_Cam *f4; };
struct S_1A060_Owner {
    char pad0[0x3c];
    S_1A060_F3C *f3c;
    char pad40[0xc4 - 0x40];
    int fc4;
    char padc8[0x4a0 - 0xc8];
    S_1A060_List *f4a0;
    char pad4a4[4];
    S_1A060_Fx *f4a8[2];
    char pad4b0[0x4c4 - 0x4b0];
    float f4c4;
    char pad4c8[0x4d4 - 0x4c8];
    int f4d4;
    char pad4d8[0x4f0 - 0x4d8];
    int f4f0;
    int f4f4;
    char pad4f8[0x508 - 0x4f8];
    float f508, f50c, f510;
    char pad514[0x734 - 0x514];
    int f734, f738, f73c;
    char pad740[0x754 - 0x740];
    int f754[3];
    int f760[3];
    void func_0001A060(float *pos, int damage);
    void func_00019480(void);
    void func_001C6DA0(int a, int b);
};
float __stdcall func_00017600(char *p);
float func_00011170(S_1A060_Vec *v);
void func_00016DD0(S_1A060_Vec *out, S_1A060_Vec *in);
extern float D_00275544;
extern float D_00275AE8;
extern char D_002A0718;
static __forceinline float Sqrt_1A060(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline void Round_1A060(int * volatile out, float f) { *out = _mm_cvtss_si32(_mm_load_ss(&f)); }
static __forceinline void Cross_1A060(S_1A060_Vec * volatile out, S_1A060_Vec * volatile a, S_1A060_Vec * volatile b)
{
    S_1A060_Vec *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(&pa->x);
    __m128 vb = _mm_loadu_ps(&pb->x);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(&out->x, va);
}
static __forceinline void Dist_1A060(float * volatile d, const float *a, const float *b) {
    float x = a[0]-b[0], y = a[1]-b[1], z = a[2]-b[2];
    float square = z*z+y*y+x*x;
    _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square));
}

/* ---- func_000198E0: Tiki state set-up (config stream, sub-objects, animation slots) ---- */
#include <string.h>
#include "asm_helpers.h"
void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);

extern char D_00275630[], D_00275AE4[], D_00275AE0[], D_00275AD4[], D_00275AC8[], D_00275AC0[];
extern char D_00275AB4[], D_00275AA8[], D_00275A9C[], D_00275A8C[], D_00275A80[], D_00275A6C[];
extern char D_00275A54[], D_00275A3C[], D_00275A24[], D_00275A18[], D_00275A04[], D_002759F0[];
extern char D_002759D4[], D_002759BC[], D_002759A0[];
extern char D_00275678[], D_002A5870[], D_002A45E0[], D_002A5FA8[];
extern char D_002A5EA0[], D_002A4C10[], D_002A60B0[];
extern char D_002A0748, D_002A0738;
extern int D_00275840, D_0027580C, D_00275820, D_00275830, D_002BA148;

struct S_198E0_V4 { float x, y, z, w; };
struct S_198E0_Vec4 : S_198E0_V4 {
    S_198E0_Vec4() { x = y = z = 0; w = 1; }
};
extern S_198E0_V4 D_002A0728;

struct S_198E0_Stream {
    void func_00168BE0(const char *key, const char *def, char *dst, int size);
    void func_00168CB0(const char *key, void *def, void *dst);
};
struct S_198E0_Cam {
    void func_00199110(int a, void *pos, void *dir, int b, int c, int d);
};
struct S_198E0_F3C { char pad0[4]; S_198E0_Cam *f4; };
struct S_198E0_Anim { char pad0[0x54]; volatile int f54; };
struct S_198E0_Obj {
    char pad0[0x60];
    void * volatile f60;
    void * volatile f64;
    volatile int f68;
    S_198E0_Obj *func_0019DA80(int a);
    void func_00129920(int a);
    void func_0019F9B0(S_198E0_Cam *cam, char *path);
};
struct S_198E0_Machine {
    char pad0[0x6c];
    S_198E0_Machine *func_001AC080(void);
    void func_001AC0A0(void *state, const char *name);
};
struct S_198E0_State {
    void *vtbl;
    int kind;
    void *owner;
    int pad0C;
    float f10;
    int f14;
};
static __forceinline S_198E0_State *InitA_198E0(void *p)
{
    S_198E0_State *s = (S_198E0_State *)p;
    s->vtbl = &D_00275840;
    s->kind = 0;
    s->owner = 0;
    return s;
}
static __forceinline S_198E0_State *InitB_198E0(void *p)
{
    S_198E0_State *s = (S_198E0_State *)p;
    s->vtbl = &D_0027580C;
    s->kind = 1;
    s->owner = 0;
    return s;
}
static __forceinline S_198E0_State *InitC_198E0(void *p)
{
    S_198E0_State *s = (S_198E0_State *)p;
    s->vtbl = &D_00275820;
    s->kind = 2;
    s->owner = 0;
    s->f14 = 0;
    s->f10 = 1.0f;
    return s;
}
static __forceinline S_198E0_State *InitD_198E0(void *p)
{
    S_198E0_State *s = (S_198E0_State *)p;
    s->vtbl = &D_00275830;
    s->kind = 3;
    s->owner = 0;
    return s;
}

/* the original saves the three path buffers with a length-clamped copy, keeping the
   clamp's operands and result in three stack slots (len/limit/result) */
template <class T> inline T min_198E0(T a, T b)
{
    return a > b ? b : a;
}
#define CopyPathW_198E0(dst, src) \
    { \
        volatile int len, lim; \
        int n, r; \
        len = strlen(src); \
        lim = 0x103; \
        r = min_198E0((int)lim, (int)len); \
        n = r; \
        func_001E8920(dst, src, n); \
        (dst)[n] = 0; \
    }
#define CopyPathV_198E0(dst, src, len, lim, res) \
    { \
        int ma, mb, n; \
        len = strlen(src); \
        lim = 0x103; \
        ma = lim; \
        mb = len; \
        res = ma > mb ? mb : ma; \
        n = res; \
        func_001E8920(dst, src, n); \
        (dst)[n] = 0; \
    }

struct C_198E0 {
    char pad0[0x3c];
    S_198E0_F3C *f3C;
    char pad40[0xc0 - 0x40];
    S_198E0_Anim *fC0;
    char padC4[0x384 - 0xc4];
    S_198E0_Machine * volatile f384;
    S_198E0_State * volatile f388;
    S_198E0_State * volatile f38C;
    S_198E0_State * volatile f390;
    S_198E0_State * volatile f394;
    S_198E0_Cam * volatile f398;
    char pad39C[0x4a0 - 0x39c];
    S_198E0_Obj * volatile f4A0;
    char pad4A4[0x4f8 - 0x4a4];
    S_198E0_V4 f4F8;
    char pad508[0x730 - 0x508];
    volatile int f730, f734, f738, f73C, f740, f744, f748, f74C, f750, f754, f758, f75C, f760, f764, f768;
    void func_00018D40(S_198E0_Stream *stream);
    void func_001C76B0(char *buf, int a, S_198E0_V4 *pos, int b, int c, S_198E0_V4 v1, S_198E0_V4 v2);
    int func_001C6E30(const char *name);
    C_198E0 *func_000198E0(S_198E0_Stream * volatile stream, S_198E0_Cam *cam);
};

static __forceinline void Touch_198E0(void *) {}

int TikiEvadeState::func_000195B0(float dt)
{
    TikiEvadeState *volatile self = this;
    TikiEvadeState *p = self;
    S_195B0_Owner *o;
    if (p->f10 != p->f14) {
        if (p->f10 < p->f14) {
            p->f10 += dt;
            p = self;
            if (p->f10 > p->f14) {
                p->f10 = p->f14;
                self->f8->func_00017700();
                p = self;
                o = p->f8;
                if (o->f4d4 <= 0) o->func_00017D00();
            }
        } else if (p->f10 > p->f14) {
            p->f10 -= dt;
            p = self;
            if (p->f10 < p->f14) p->f10 = p->f14;
        }
        p = self;
        p->f8->f3c->f4->func_00182530(p->f10);
    }
    p = self;
    if ((unsigned int)D_002A8490->f238 > p->fC) {
        p->fC = D_002A8490->f238 + 2000;
        p = self;
        p->f8->func_00017910();
        p = self;
        o = p->f8;
        S_195B0_Vec buf;
        S_195B0_Vec *v = o->f398->func_00016E40(&buf);
        float dx = v->x - o->f508;
        float dy = v->y - o->f50c;
        float dz = v->z - o->f510;
        float square = dz*dz + dy*dy + dx*dx;
        float dist = AsmSqrtF(square);
        p = self;
        if ((dist < D_00275804 || dist <= p->f8->f49c[p->f8->f4dc].f0) && p->f8->f4d4 > 0) {
            int r = p->f8->func_000192D0(1,1);
            p = self;
            p->f8->f4dc = r;
            p = self;
            p->f8->func_00017910();
            p = self;
            p->fC = D_002A8490->f238;
        } else p->f8->func_00017760();
        p = self;
        p->f14 = 1.0f;
        p = self;
        p->f8->f4f4 = 0;
    }
    return 1;
}

void C_00019790::func_00019790(void)
{
    int chance;

    if (f8->f4d4 > 500) {
        fC = D_002A8490->f238 + 3500;
        chance = 50;
    } else {
        fC = D_002A8490->f238 + 2000;
        chance = 25;
    }
    if (func_00011260(0, 100) > chance) {
        f8->func_00019070();
        f8->func_00017D20(75);
        f8->func_001C6DA0(f8->f74c, 1);
    } else {
        f8->func_001C6DA0(f8->f750, 1);
        f8->func_00017D20(100);
    }
}

void C_00019830::func_00019830(void)
{
    vtbl = (void *)&D_00275854;
    if (unk384 != 0) {
        unk384->dummy2();
    }
    if (unk388 != 0) {
        delete (C_002754B8 *)unk388;
    }
    if (unk38C != 0) {
        delete (C_002754B8 *)unk38C;
    }
    if (unk390 != 0) {
        delete (C_002754B8 *)unk390;
    }
    if (unk394 != 0) {
        delete (C_002754B8 *)unk394;
    }
    if (unk49C != 0) {
        func_001E891B(unk49C);
    }
    if (unk4A4 != 0) {
        func_001E8390(unk4A4);
    }
    func_001C75A0();
}

C_198E0 *C_198E0::func_000198E0(S_198E0_Stream * volatile stream, S_198E0_Cam *cam)
{
    int len, lim, res;
    struct { char save3[0x104]; char save1[0x104]; char save2[0x104]; char bufA[0x104]; char bufB[0x104]; } L;
    S_198E0_Vec4 v;
    void *mem;

    stream->func_00168BE0(D_00275AE4, D_00275630, L.bufA, 0x104);
    stream->func_00168BE0(D_00275AE0, D_00275630, L.bufB, 0x104);
    stream->func_00168CB0(D_00275AD4, &D_002A0718, &this->f4F8);
    stream->func_00168CB0(D_00275AC8, &D_002A0748, &v);
    this->func_00018D40(stream);
    this->f398 = cam;
    {
        len = strlen(D_002A5EA0);
        lim = 0x103;
        res = AsmMinI(lim, len);
        func_001E8920(L.save1, D_002A5EA0, res);
        L.save1[res] = 0;
    }
    {
        int len = strlen(D_002A4C10);
        int lim = 0x103;
        int n = AsmMinI(lim, len);
        func_001E8920(L.save2, D_002A4C10, n);
        L.save2[n] = 0;
    }
    {
        int len = strlen(D_002A60B0);
        int lim = 0x103;
        int n = AsmMinI(lim, len);
        func_001E8920(L.save3, D_002A60B0, n);
        L.save3[n] = 0;
    }
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A4C10, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    this->func_001C76B0(L.bufA, 0, &this->f4F8, 0, 0, D_002A0728, D_002A0728);
    this->f3C->f4->func_00199110(0, &v, &D_002A0738, 0, 1, 0);
    mem = func_001E8A44(0x1b0);
    this->f4A0 = mem ? ((S_198E0_Obj *)mem)->func_0019DA80(1) : 0;
    this->f4A0->func_00129920(5);
    this->f4A0->f68 = D_002BA148;
    this->f4A0->func_0019F9B0(this->f3C->f4, L.bufB);
    this->f4A0->f60 = this;
    this->f4A0->f64 = this;
    mem = func_001E8A44(0x6c);
    this->f384 = mem ? ((S_198E0_Machine *)mem)->func_001AC080() : 0;
    mem = func_001E8A44(0x10);
    this->f388 = mem ? InitA_198E0(mem) : 0;
    this->f388->owner = this;
    mem = func_001E8A44(0x1c);
    this->f38C = mem ? InitB_198E0(mem) : 0;
    this->f38C->owner = this;
    mem = func_001E8A44(0x18);
    this->f390 = mem ? InitC_198E0(mem) : 0;
    this->f390->owner = this;
    mem = func_001E8A44(0x10);
    this->f394 = mem ? InitD_198E0(mem) : 0;
    this->f394->owner = this;
    this->f384->func_001AC0A0(this->f388, D_00275AC0);
    this->f730 = this->func_001C6E30(D_00275AB4);
    this->fC0[0].f54 = 0;
    this->f74C = this->func_001C6E30(D_00275AA8);
    this->fC0[7].f54 = 0;
    this->f750 = this->func_001C6E30(D_00275A9C);
    this->fC0[8].f54 = 0;
    this->f73C = this->func_001C6E30(D_00275A8C);
    this->fC0[3].f54 = 0;
    this->f744 = this->func_001C6E30(D_00275A80);
    this->fC0[5].f54 = 0;
    this->f734 = this->func_001C6E30(D_00275A6C);
    this->fC0[1].f54 = 0;
    this->f754 = this->func_001C6E30(D_00275A54);
    this->fC0[9].f54 = 0;
    this->f758 = this->func_001C6E30(D_00275A3C);
    this->fC0[10].f54 = 0;
    this->f75C = this->func_001C6E30(D_00275A24);
    this->fC0[11].f54 = 0;
    this->f748 = this->func_001C6E30(D_00275A18);
    this->fC0[6].f54 = 1;
    this->f740 = this->func_001C6E30(D_00275A04);
    this->fC0[4].f54 = 1;
    this->f738 = this->func_001C6E30(D_002759F0);
    this->fC0[2].f54 = 1;
    this->f760 = this->func_001C6E30(D_002759D4);
    this->fC0[12].f54 = 1;
    this->f764 = this->func_001C6E30(D_002759BC);
    this->fC0[13].f54 = 1;
    this->f768 = this->func_001C6E30(D_002759A0);
    this->fC0[14].f54 = 1;
    {
        int len = strlen(L.save1);
        int lim = 0x103;
        int n = AsmMinI(lim, len);
        func_001E8920(D_002A5EA0, L.save1, n);
        D_002A5EA0[n] = 0;
    }
    {
        int len = strlen(L.save2);
        int lim = 0x103;
        int n = AsmMinI(lim, len);
        func_001E8920(D_002A4C10, L.save2, n);
        D_002A4C10[n] = 0;
    }
    {
        int len = strlen(L.save3);
        int lim = 0x103;
        int n = AsmMinI(lim, len);
        func_001E8920(D_002A60B0, L.save3, n);
        D_002A60B0[n] = 0;
    }
    return this;
}

void S_1A060_Owner::func_0001A060(float *pos, int damage)
{
    if (f4f4 == 1 || fc4 == f73c) {
        return;
    }
    S_1A060_List *list = f4a0;
    int best = -1;
    float bestDist = 10000.0f;
    for (int i = 0; i < list->f190; i++) {
        if (list->f194[i] != 0) {
            S_1A060_Node *n = list->f1a0[i];
            float dx = pos[0] - n->f13c;
            float dy = pos[1] - n->f14c;
            float dz = pos[2] - n->f15c;
            float sq = dz * dz + dy * dy + dx * dx;
            float d = AsmSqrtF(sq);
            if (d < bestDist) {
                bestDist = d;
                best = i;
            }
        }
        list = f4a0;
    }
    if (best != -1) {
        AsmFloatToIntRound(func_00017600(list->f1a0[best]->f1c0 + 0x28) * damage, &damage);
    }
    f4d4 -= damage;
    if (f4d4 <= 0) {
        func_00019480();
        return;
    }
    if (fc4 != f73c && fc4 != f734 && fc4 != f738) {
        S_1A060_Vec dir;
        S_1A060_Vec fwd = { 0.0f, 0.0f, 0.0f, 1.0f };
        S_1A060_Vec up = { 0.0f, 0.0f, 0.0f, 1.0f };
        S_1A060_Vec side = { 0.0f, 0.0f, 0.0f, 1.0f };
        dir.z = pos[2] - f510;
        dir.y = pos[1] - f50c;
        dir.x = pos[0] - f508;
        dir.w = 1.0f;
        func_00011170(&dir);
        f3c->f4->func_00197B40(&up, &fwd);
        func_00016DD0(&dir, &dir);
        AsmVec3Cross((float *)&side, (const float *)&fwd, (const float *)&up);
        int which = (dir.y * side.y + dir.x * side.x + dir.z * side.z > D_00275544) ? 2 : 1;
        if (f4f0 == 1) {
            func_001C6DA0(f760[which], 1);
        } else {
            func_001C6DA0(f754[which], 1);
        }
    }
    f4c4 = (float)(1000 / f4d4) * D_00275AE8;
    int k = func_00011260(0, 1);
    if (f4a8[k]->func_1C() == 0) {
        D_002A8490->f4->func_0001CE80(f4a8[k], &f508, &D_002A0718, 10.0f, 450.0f);
    }
    f4a8[k]->func_14(4);
}

undefined4 C_0001A3E0::func_0001A3E0(byte param_1)
{
  int func_00019830(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00019830();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

extern float D_002A071C, D_002A0720, D_002A0724;
void C_1A400::func_0001A400(S_1A400_Arg *a, float t)
{
 S_1A400_Arg *volatile *pa = (S_1A400_Arg *volatile *)&a;
 S_1A400_Arg *q = *pa;
 C_1A400 *volatile self = this;
 float d[3];
 d[0] = t * q->f18; d[1] = t * q->f1C; d[2] = t * q->f20;
 float *pos = &q->p->x;
 pos[0] += d[0]; pos[1] += d[1]; pos[2] += d[2];
 q = *pa;
 pos = &q->p->x;
 S_1A400_Vec4 cur = *(S_1A400_Vec4 *)pos;
 q->p->func_0011CA60(cur);
 int hit = 0;
 q = *pa;
 if (q->p->y <= q->f8) hit = 1;
 S_1A400_Vec4 p;
 S_1A400_Entity *e = D_002B9120->p->p;
 if (!e) { p.x=*(float*)&D_002A0718; p.y=D_002A071C; p.z=D_002A0720; p.w=D_002A0724; }
 else e->p->p->func_00199B00(&p, 0);
 q = *pa;
 pos = &q->p->x;
 float dx = pos[0] - p.x, dy = pos[1] - p.y, dz = pos[2] - p.z;
 float square = dz*dz + dy*dy + dx*dx;
 float range = AsmSqrtF(square);
 if (range < D_002756C4) {
  range = D_0027599C - range;
  D_002B9120->p->func_00153D30((int)(range*D_00275AEC));
  D_002B9120->p->score += (int)(range*D_00275AEC);
  self->func_00017D20(50);
  hit = 1;
 }
 if (hit) (*pa)->f8 = 0;
}

