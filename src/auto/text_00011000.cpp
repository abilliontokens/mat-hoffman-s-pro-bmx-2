/* 25 functions from 0x00011000 to 0x00011FF0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_00011060 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_00011060* func_00011060(void);
};


static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct C_00011080 {
    float x;
    float y;
    float z;
    C_00011080* func_00011080(float *p);
};

struct C_00011410 {
    int unk0;
    int unk4;
    int func_00011410(void);
};

struct S_SystemTime {
    unsigned short year;
    unsigned short month;
    unsigned short dayOfWeek;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned short milliseconds;
};

struct C_00017680_Target {
    void func_00197B40(float *a, float *b);
    void func_00199110(int a0, float *a1, float *a2, int a3, int a4, int a5);
};

struct C_00017680_Mid {
    int pad0;
    C_00017680_Target *f4;
};

struct C_00017680_Vec {
    float x;
    float y;
    float z;
    float w;
};

struct C_00011440 {
    char pad0[0x3C];
    C_00017680_Mid *f3C;
    void func_00011440(C_00017680_Vec pos);
};

struct S_00011D30_Cfg {
    char pad0[0x1b0];
    float f1B0;
};

struct S_00011D30_Mid {
    int f0;
    S_00011D30_Cfg *f4;
};

struct S_00011D30_Game {
    char pad0[0x1c8];
    int f1C8;
};

struct S_00011D30_Root {
    char pad0[0x238];
    int f238;
    char pad23c[0x2a4 - 0x23c];
    S_00011D30_Game *f2A4;
};

/* Walker base constructor */
struct C_001C7310 {
    void func_001C7310(int a);
};

extern int D_002754CC;

/* AIPedestrian */
struct C_000112E0 {
    void *vtbl;
    char pad4[0x380];
    int f384, f388, f38C, f390, f394, f398, f39C, f3A0, f3A4, f3A8, f3AC, f3B0, f3B4;
    char pad3B8[4];
    int f3BC;
    int f3C0, f3C4, f3C8;
    float f3CC, f3D0, f3D4;
    int f3D8;
    u8 f3DC, f3DD, f3DE, f3DF, f3E0, f3E1, f3E2, f3E3;
    u32 v3E4[4];
    u32 v3F4[4];
    u32 v404[4];
    C_000112E0 *func_000112E0(int a);
    void func_000114D0(int n);
};

/* audio channel player the pedestrian's sound slots are handed to */
struct C_0008AB90 {
    void func_0008AB90(void *a);
};

struct S_00011D30_Global {
    int f0;
    char *f4;
};

struct C_001C5C50 {
    int func_001C5C50(void *a, void *b, void *c, void *d, void *e);
};

struct C_00011D30 {
    char pad0[0x3C];
    S_00011D30_Mid *f3C;
    char pad40[0x39E];
    u8 f3DE;
    char pad3DF[5];
    C_00017680_Vec f3E4;
    void func_001578D0(void);
    int func_00011D30(void);
};

extern S_00011D30_Root *D_002A8490;
extern S_00011D30_Global *D_002EFDB8;
extern C_001C5C50 *D_002AB66C;
extern float D_0027554C;
extern float D_00275548;

extern int D_002AF45C;
extern float D_002754B0;

void __stdcall func_001DC910(S_SystemTime *out);
void func_001E8826(int seed);
int func_001E8833(void);

extern float D_00275480;
extern float D_00275490;
extern float D_002754A0;

struct S_115F0_Path { int count; float *pts; };
struct S_11BE0_Target { C_00017680_Vec *func_00199B00(C_00017680_Vec *, int); void func_00199600(C_00017680_Vec v); };
struct S_11BE0_Mid { int f0; S_11BE0_Target *f4; };
struct S_11BE0_State { char pad[0xbc]; int fBC; };
struct S_11BE0_Actor { char pad[0x834]; C_00017680_Vec pos; char pad844[0x950-0x844]; S_11BE0_State *state; char pad954[0xa00-0x954]; S_11BE0_Mid *mid; };
struct S_11BE0_List { char pad[0x24]; int count; char pad28[0x1a8-0x28]; S_11BE0_Actor *actors[1]; };
static __forceinline S_11BE0_List *load_list_11BE0(S_11BE0_List * volatile *p) { return *p; }
struct S_11E30_Cnt { char pad[0x124]; int count; };
struct S_115F0_Mgr { char pad[0x4dc]; S_11E30_Cnt *cnt; S_11BE0_List *list; char pad4e4[0x588-0x4e4]; S_115F0_Path **paths; };
static __forceinline float distance_11BE0(const C_00017680_Vec &a, const C_00017680_Vec &b) {
    float x = a.x-b.x, y = a.y-b.y, z = a.z-b.z;
    float square = z*z+y*y+x*x;
    return sqrtf(square);
}
struct C_00011BE0 { char pad[0x3e4]; C_00017680_Vec pos; void func_00011BE0(int *, float *); };
extern S_115F0_Mgr *D_002B9120;
extern char *D_gSelfSink11730;
struct C_00011E30 {
    char pad0[0x3c];
    S_11BE0_Mid *f3C;
    char pad40[0x370];
    int f3B0, f3B4, f3B8;
    char pad3BC[0x404 - 0x3bc];
    C_00017680_Vec v404;
    C_00017680_Vec func_00011E30(void);
};
static __forceinline float sqrt_119D0(const float &x) {
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x)));
    return r;
}
static __forceinline void distance_119D0(float *d, const float *a, const float *b) {
    float x = a[0]-b[0], y = a[1]-b[1], z = a[2]-b[2];
    float square = z*z+y*y+x*x;
    _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square));
}
static __forceinline float dist_119D0(const float *a, const float *b) {
    float x = a[0]-b[0], y = a[1]-b[1], z = a[2]-b[2];
    return AsmSqrtF(z*z+y*y+x*x);
}
static __forceinline float dist2_119D0(const float *a, const float *b) {
    float x = a[0]-b[0], y = a[1]-b[1], z = a[2]-b[2];
    float square = z*z+y*y+x*x;
    return sqrt_119D0(square);
}
static __forceinline void dist3_119D0(float *d, const float *a, const float *b) {
    float x = a[0]-b[0], y = a[1]-b[1], z = a[2]-b[2];
    _mm_store_ss(d, _mm_sqrt_ss(_mm_set_ss(z*z+y*y+x*x)));
}
struct C_000119D0 {
    char pad[0x3b0];
    int f3B0;
    int pathIdx;
    int func_000119D0(C_00017680_Vec *pos);
};
struct C_000115F0 {
    char pad[0x3b4];
    int pathIdx;
    int func_000115F0(float *pos, float radius, int start, int dir);
};

struct C_00011730 {
    char pad[0x3b4];
    int pathIdx;
    float func_00011730(float *pos, int i);
};
extern float D_00275544;

extern "C" float __cdecl sqrtf(float);
extern "C" float sqrtf(float);
#pragma intrinsic(sqrtf)
float func_00011000(float x)
{
    return AsmSqrtF(x);
}
float func_00011020(float a, float b)
{
    const __m128 &x = *(const __m128 *)&a;
    const __m128 &y = *(const __m128 *)&b;
    return _mm_min_ss(x, y).m128_f32[0];
}

float func_00011040(float a, float b)
{
    __m128 r = _mm_max_ss(*(__m128 *)&a, *(__m128 *)&b);
    return *(float *)&r;
}

C_00011060* C_00011060::func_00011060(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unkC = 1065353216;
    return this;
}

C_00011080* C_00011080::func_00011080(float *p) {
    x = x + p[0];
    y = y + p[1];
    z = z + p[2];
    return this;
}

void func_000110B0(float *out, float *in) {
    vec3_set(out, -in[0], -in[1], -in[2]);
}

void func_000110E0(float *out, float *a, float *b) {
    vec3_set(out, a[0] + b[0], a[1] + b[1], a[2] + b[2]);
}

void func_00011110(float *out, float *a, float *b) {
    vec3_set(out, a[0] - b[0], a[1] - b[1], a[2] - b[2]);
}

void func_00011140(float *out, float *in, float s) {
    vec3_set(out, s * in[0], s * in[1], s * in[2]);
}

float func_00011170(float *v) {
    float s = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    return AsmSqrtF(s);
}

void func_000111B0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

float func_00011220(float *a, float *b)
{
    float s = a[1] * b[1] + a[0] * b[0];
    return s + a[2] * b[2];
}

int func_001E8833(void);
extern float D_002754B0;
float func_00011240(void) {
    return func_001E8833() * D_002754B0;
}

int func_00011260(int lo, int hi)
{
    if (D_002AF45C == 0) {
        S_SystemTime t;
        func_001DC910(&t);
        D_002AF45C = (((t.day * 240 + t.hour) * 6 + t.minute) * 60) + t.second;
        func_001E8826(D_002AF45C);
    }
    float v = (float)func_001E8833() * D_002754B0;
    return lo + (int)((double)v * (double)(hi - lo + 1));
}

C_000112E0 *C_000112E0::func_000112E0(int a)
{
    u32 *p;

    ((C_001C7310 *)this)->func_001C7310(a);
    vtbl = (void *)&D_002754CC;
    p = v3E4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = v3F4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = v404;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f384 = 0;
    f388 = 0;
    f38C = 0;
    f390 = 0;
    f394 = 0;
    f398 = 0;
    f39C = 0;
    f3A0 = 0;
    f3A4 = 0;
    f3A8 = 0;
    f3AC = 0;
    f3B0 = 0;
    f3C4 = 0;
    f3C8 = 0;
    f3D8 = 0;
    f3CC = 100.0f;
    f3B4 = -1;
    f3D0 = 4.0f;
    f3D4 = 8.0f;
    f3C0 = D_002A8490->f238;
    f3DC = 0;
    f3DD = 0;
    f3DE = 1;
    f3DF = 0;
    f3E0 = 0;
    f3E1 = 0;
    f3E2 = 0;
    f3E3 = 1;
    return this;
}

int C_00011410::func_00011410(void)
{
    return unk4;
}

void __stdcall func_00011430(int a0, int a1) {
}

void C_00011440::func_00011440(C_00017680_Vec pos)
{
    float vecB[4];
    float vecA[4];

    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    f3C->f4->func_00197B40(vecA, vecB);
    pos.y = vecA[1];
    f3C->f4->func_00199110(0, (float *)&pos, vecB, 0, 1, 0);
}

void C_000112E0::func_000114D0(int n)
{
    if (D_002A8490->f2A4 != 0 && D_002A8490->f2A4->f1C8 == 0) {
        f3BC = n;
    }
    switch (n) {
    case 0: ((C_0008AB90 *)f384)->func_0008AB90((void *)f388); return;
    case 5: ((C_0008AB90 *)f384)->func_0008AB90((void *)f38C); return;
    case 6: ((C_0008AB90 *)f384)->func_0008AB90((void *)f390); return;
    case 1: ((C_0008AB90 *)f384)->func_0008AB90((void *)f394); return;
    case 2: ((C_0008AB90 *)f384)->func_0008AB90((void *)f398); return;
    case 3: ((C_0008AB90 *)f384)->func_0008AB90((void *)f39C); return;
    case 4: ((C_0008AB90 *)f384)->func_0008AB90((void *)f3A0); return;
    case 7: ((C_0008AB90 *)f384)->func_0008AB90((void *)f3A4); return;
    case 8: ((C_0008AB90 *)f384)->func_0008AB90((void *)f3A8); return;
    }
}

int C_000115F0::func_000115F0(float *pos, float radius, int start, int dir)
{
    S_115F0_Path *path = D_002B9120->paths[pathIdx];
    if (dir == 1) {
        for (int i = start; i < start + path->count; i++) {
            int idx = i;
            if (i >= path->count) idx = i - path->count;
            float *p = path->pts + idx * 4;
            float dx = p[0] - pos[0], dy = p[1] - pos[1], dz = p[2] - pos[2];
            float d = func_00011000(dx * dx + dy * dy + dz * dz);
            if (d > radius) return idx;
        }
    } else {
        for (int i = start; i >= start - path->count; i--) {
            int idx = i;
            if (i < 0) idx = i + path->count;
            float *p = path->pts + idx * 4;
            float dx = p[0] - pos[0], dy = p[1] - pos[1], dz = p[2] - pos[2];
            float d = func_00011000(dx * dx + dy * dy + dz * dz);
            if (d > radius) return idx;
        }
    }
    return start;
}

float C_00011730::func_00011730(float *pos, int i)
{
    S_115F0_Path *path = D_002B9120->paths[pathIdx];
    float p[4];
    C_00017680_Vec b;
    float e[4];
    C_00017680_Vec a;
    float dir[4];
    float seg[3];
    float s[4], d[4];

    a = ((C_00017680_Vec *)path->pts)[i];
    a.y = pos[1];
    int next = i + 1;
    if (next >= path->count) {
        next = 0;
    }
    b = ((C_00017680_Vec *)path->pts)[next];
    dir[0] = seg[0] = b.x - a.x;
    dir[1] = seg[1] = D_00275544;
    dir[3] = 1.0f;
    dir[2] = seg[2] = b.z - a.z;
    func_000111B0(dir, dir);
    float ez = pos[2] - a.z;
    float ey = pos[1] - a.y;
    float ex = pos[0] - a.x;
    e[3] = 1.0f;
    e[0] = ex;
    e[1] = ey;
    e[2] = ez;
    func_000111B0(e, e);
    if (e[1] * dir[1] + e[0] * dir[0] + e[2] * dir[2] < D_00275544) {
        float x = pos[0] - a.x, y = pos[1] - a.y, z = pos[2] - a.z;
        return AsmSqrtF(z*z+y*y+x*x);
    }
    float da;
    {
        float x = pos[0] - a.x, y = pos[1] - a.y, z = pos[2] - a.z;
        da = AsmSqrtF(z*z+y*y+x*x);
    }
    float segLen;
    {
        float x = seg[0], y = seg[1], z = seg[2];
        segLen = AsmSqrtF(z*z+y*y+x*x);
    }
    if (da > segLen) {
        b.y = a.y;
        float x = pos[0] - b.x, y = pos[1] - b.y, z = pos[2] - b.z;
        return AsmSqrtF(z*z+y*y+x*x);
    }
    s[0] = da * dir[0];
    s[1] = dir[1] * da;
    s[2] = dir[2] * da;
    p[0] = s[0] + a.x;
    p[1] = s[1] + a.y;
    p[2] = s[2] + a.z;
    d[0] = pos[0] - p[0];
    d[1] = pos[1] - p[1];
    d[2] = pos[2] - p[2];
    float x = d[0], y = d[1], z = d[2];
    return AsmSqrtF(z*z+y*y+x*x);
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_00011BE0::func_00011BE0(int * volatile index, float * volatile distance) {
    C_00011BE0 *volatile self;
    volatile float t[2];
    *index = -1;
    self = this;
    *distance = 1000000.0f;
    S_11BE0_List **list;
    for (int i = 0; list = &D_002B9120->list, i < (*list)->count; ++i) {
        C_00017680_Vec v, temp;
        int active = (*list)->actors[i]->state->fBC;
        if (active) v = *(*(S_11BE0_List * volatile *)list)->actors[i]->mid->f4->func_00199B00(&temp, 0);
        else v = (*list)->actors[i]->pos;
        C_00011BE0 *p = self;
        float x = p->pos.x-v.x, y = p->pos.y-v.y, z = p->pos.z-v.z;
        t[1] = z*z+y*y+x*x;
        t[0] = sqrtf(t[1]);
        int *ix = index;
        float *dp;
        if (*ix == -1 || (dp = distance, _ReadWriteBarrier(), *dp > t[0])) { *distance = (*ix = i, t[0]); }
    }
}
int C_00011D30::func_00011D30(void)
{
    C_00017680_Vec b;
    C_00017680_Vec a;
    int out;

    func_001578D0();
    if (D_002A8490->f2A4->f1C8 == 1 || f3C->f4->f1B0 < D_0027554C) {
        a = f3E4;
        a.y = a.y + 5.0f;
        b.z = 0.0f;
        b.y = 0.0f;
        b.x = 0.0f;
        b.w = 1.0f;
        if (D_002AB66C->func_001C5C50(D_002EFDB8->f4, D_002EFDB8->f4 + 0xf0, &f3E4, &b, &out) == 1
            || D_002AB66C->func_001C5C50(D_002EFDB8->f4, D_002EFDB8->f4 + 0xf0, &a, &b, &out) == 1) {
            f3DE = 1;
        }
    }
    return 1;
}

C_00017680_Vec C_00011E30::func_00011E30(void)
{
 C_00017680_Vec pos, tmp, a, ret;
 struct { volatile int cur; int idx; float distance; } L;
 f3C->f4->func_00199B00(&pos,0);
 if ((float)D_002B9120->cnt->count >= pos.y) {
 ret=v404; L.cur=f3B8;
 ((C_00011BE0*)this)->func_00011BE0(&L.idx,&L.distance);
 if(L.idx!=-1) {
 *(volatile float*)&a.z=0; *(volatile float*)&a.y=0; *(volatile float*)&a.x=0; *(volatile float*)&a.w=1;
 S_11BE0_Actor *actor=load_list_11BE0(&D_002B9120->list)->actors[L.idx];
 if(actor->state->fBC) a=*D_002B9120->list->actors[L.idx]->mid->f4->func_00199B00(&tmp,0);
 else a=actor->pos;
 int c=((C_000115F0*)this)->func_000115F0((float*)&a,33.0f,f3B8,1);
 ret=((C_00017680_Vec*)D_002B9120->paths[f3B4]->pts)[c];
 L.cur=c;
 f3C->f4->func_00199600(ret); f3B0=L.cur;
 }
 } else ret=pos;
 return ret;
}

