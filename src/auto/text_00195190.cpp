/* 9 functions from 0x00195190 to 0x001960F0, found by Ghidra. */
#include "common.h"

struct SimpleVCR {
    void *vtbl;
    char pad4[0x20];
    int f24, f28, f2c, f30, f34, f38;
    float f3c, f40, f44;
    int f48;
    unsigned int f4c;
    unsigned char *f50, *f54, *f58;
    int f5c, f60, f64, f68;
    unsigned int f6c, f70, f74;
    int *f78, *f7c, *f80, *f84, *f88;
    char pad8C[4];
    float *f90, *f94;
    int *f98, *f9c, *fA0;
    float *fA4, *fA8;
    int *fAC, *fB0, *fB4;
    unsigned char *fB8;
    char padBC[4];
    unsigned char fC0;
    char padC1[3];
    int fC4, fC8, fCC;
    void func_00157600(int a);
    SimpleVCR *func_00195D90(void);
    void func_00195E70(void);
    void func_00157660(void);
};

extern int D_0028AFA4;
extern float D_00275544;
extern float D_00275460;

struct C_00196000 {
    char pad0[0x6c];
    u32 f6c;
    int f70;
    u32 f74;
    int *f78;
    int *f7c;
    int *f80;
    int *f84;
    int *f88;
    char pad8c[4];
    float *f90;
    float *f94;
    char pad98[0xa4 - 0x98];
    float *fa4;
    float *fa8;
    char padac[0xc0 - 0xac];
    u8 fc0;
    int func_00196000(float param_1, int param_2, int param_3, int param_4, float param_5, float param_6, int param_7);
};

struct Vec4_195D40 {
    int x, y, z, w;
};


struct Item_001955F0 {
    Vec4_195D40 a;
    Vec4_195D40 b;
    Vec4_195D40 c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    int f44;
};

struct C_001955F0 {
    char pad0[0x40];
    Item_001955F0 *f40;
    int f44;
    int f48;
    int func_001955F0(Vec4_195D40 *a, float b, float c, float d, float e, int f, Vec4_195D40 *g, Vec4_195D40 *h, float i);
};

struct C_001955D0 {
    char pad0[0x70];
    int unk70;
    char pad74[0x4];
    int unk78;
    int func_001955D0(int a0, int a1);
};

struct V4f_001956F0 {
    float x, y, z, w;
    V4f_001956F0() { x = y = z = 0; w = 1.0f; }
    V4f_001956F0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    V4f_001956F0 operator+(const V4f_001956F0 &o) const { return V4f_001956F0(x + o.x, y + o.y, z + o.z, 1.0f); }
    V4f_001956F0 operator-(const V4f_001956F0 &o) const { return V4f_001956F0(x - o.x, y - o.y, z - o.z, 1.0f); }
    V4f_001956F0 operator*(float s) const { return V4f_001956F0(x * s, y * s, z * s, w); }
};
struct Target_195190 { void func_00199A70(int, V4f_001956F0 *); };
struct SimpleTVCamera {
    virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
    virtual V4f_001956F0 position(V4f_001956F0);
    virtual V4f_001956F0 direction(float, V4f_001956F0, V4f_001956F0);
    virtual float value(V4f_001956F0);
    float f4; int f8, fc;
    V4f_001956F0 pos;
    char *target; Target_195190 *fallback;
    V4f_001956F0 previous;
    int index, f3c; Item_001955F0 *items; int f44, f48;
    V4f_001956F0 current, velocity;
    int f6c;
    void func_00195190(float, int *, V4f_001956F0 *, V4f_001956F0 *, float *, V4f_001956F0 *, V4f_001956F0 *, int);
};

struct Ini_001956F0 {
    char data[0x4cc];
    void func_00168280();
    void func_001691E0();
    int func_00169490(const char *path, int a);
    void func_00169710(const char *section);
    void func_00168C20(const char *key, int def, int *out);
    void func_00168C50(const char *key, float def, float *out);
    void func_00168CB0(const char *key, V4f_001956F0 *def, V4f_001956F0 *out);
};
int func_001ADCC0(char *buf, int n, const char *fmt, ...);
void *func_001E8AA5(unsigned int n);
extern char D_0028AF84[], D_0028AF74[], D_002769E8[], D_002769DC[], D_00275AD4[], D_00277F20[];
extern char D_0028AEB4[], D_0028AEBC[], D_0028AF64[], D_0028AF54[], D_00289510[], D_0027CB30[], D_0027CB2C[], D_0028AF48[];
extern float D_00275F58;
extern V4f_001956F0 D_002A9B44;
extern float D_002A9B48, D_002A9B4C;
struct C_001956F0 {
    char pad0[0x40];
    Item_001955F0 *f40;
    int f44;
    int func_001956F0(const char *name);
};

struct STV_1959E0 {
    char pad0[0x38];
    int cur;
    int prev;
    Item_001955F0 *items;
    int count;
    char pad48[0x24];
    int f6c;
    int f70;
    float f74;
    float f78;
    int func_001959E0(float dt, float *pos, Vec4_195D40 *out);
};
int func_00134DE0(V4f_001956F0 *seg, V4f_001956F0 *hitPos, V4f_001956F0 *hitNormal, int a, int b, int c, int d, int e, int f);
int func_001E8833();

#include <xmmintrin.h>
#include "asm_helpers.h"
extern float D_0028AF10, D_0028AF00, D_0028AEF0, D_002754B0, D_00275994;

static __forceinline float Rand01_001959E0(void)
{
    return (float)func_001E8833() * D_002754B0;
}

static __forceinline void Sqrt_001959E0(float *d, float square)
{
    _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square));
}

static __forceinline void Normalize_001959E0(float *volatile outArg, const float *volatile inArg)
{
    const float *in = inArg;
    float *out = outArg;
    __m128 v = _mm_loadu_ps(in), sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_0028AF10);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_0028AEF0)), _mm_sub_ss(_mm_load_ss(&D_0028AF00), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

void SimpleTVCamera::func_00195190(float dt, int *ok, V4f_001956F0 *out, V4f_001956F0 *pout, float *fv, V4f_001956F0 *a, V4f_001956F0 *b, int unused)
{
 V4f_001956F0 p;
 if(target) { (*(Target_195190 **)(target+0x22c))->func_00199A70(0,&current); velocity=*(V4f_001956F0 *)(target+0x238); }
 else {
  fallback->func_00199A70(0,&current);
  if(previous.x==D_002A9B44.x && previous.y==D_002A9B48 && previous.z==D_002A9B4C) {
   velocity.x=0.0f; velocity.y=0.0f; velocity.z=0.0f; velocity.w=1.0f;
  } else {
   float dx=current.x-previous.x;
   float dy=current.y-previous.y;
   float dz=current.z-previous.z;
   float scale;
   *(volatile float *)&scale=D_00275460/dt;
   velocity=V4f_001956F0(dx*scale,dy*scale,dz*scale,1.0f);
  }
  previous=current;
 }
 p=position(current);
 pos=direction(dt,current,velocity);
 f4=value(p);
 if(out) *out=pos;
 if(fv) *fv=f4;
 if(f6c) { if(a) *a=*(V4f_001956F0 *)&items[index].b; if(b) *b=*(V4f_001956F0 *)&items[index].c; *ok=0; }
 else { if(pout) *pout=p; *ok=1; }
}

int C_001955D0::func_001955D0(int a0, int a1) {
    unk70 = a0;
    unk78 = a1;
    return 1;
}

int C_001955F0::func_001955F0(Vec4_195D40 *a, float b, float c, float d, float e, int f, Vec4_195D40 *g, Vec4_195D40 *h, float i)
{
    if (f48 >= f44) {
        return 0;
    }
    f40[f48].a = *a;
    f40[f48].f34 = b;
    f40[f48].f38 = c;
    f40[f48].f3c = d;
    f40[f48].f40 = e;
    f40[f48].f44 = f;
    f40[f48].b = *g;
    f40[f48].c = *h;
    f40[f48].f30 = i;
    f48++;
    return 1;
}

int C_001956F0::func_001956F0(const char *name)
{
    Ini_001956F0 ini;
    char path[0x104];
    ini.func_00168280();
    func_001ADCC0(path, 0x104, D_0028AF84, name);
    if (ini.func_00169490(path, 0) == 0) {
        ini.func_001691E0();
        return 0;
    }
    ini.func_00169710(D_0028AF74);
    ini.func_00168C20(D_002769E8, 0, &f44);
    if (f44 < 1) {
        ini.func_001691E0();
        return 0;
    }
    f40 = (Item_001955F0 *)func_001E8AA5(f44 * sizeof(Item_001955F0));
    for (int i = 0; i < f44; i++) {
        char sect[0x10];
        float a, b, c, d, f;
        int e;
        V4f_001956F0 pos;
        func_001ADCC0(sect, 0x10, D_002769DC, i + 1);
        ini.func_00169710(sect);
        ini.func_00168CB0(D_00275AD4, &V4f_001956F0(0.0f, 0.0f, 0.0f, 1.0f), &pos);
        ini.func_00168C50(D_00277F20, -1.0f, &a);
        if (a == D_00275F58) {
            ini.func_00168C50(D_0028AEB4, 50.0f, &a);
            ini.func_00168C50(D_0028AEBC, 7.0f, &b);
        } else {
            b = a;
        }
        ini.func_00168C50(D_0028AF64, 250.0f, &c);
        ini.func_00168C50(D_0028AF54, 5.0f, &d);
        ini.func_00168C20(D_00289510, -1, &e);
        V4f_001956F0 v1, v2;
        ini.func_00168CB0(D_0027CB30, &D_002A9B44, &v1);
        ini.func_00168CB0(D_0027CB2C, &D_002A9B44, &v2);
        ini.func_00168C50(D_0028AF48, 0.0f, &f);
        ((C_001955F0 *)this)->func_001955F0((Vec4_195D40 *)&pos, a, b, c, d, e, (Vec4_195D40 *)&v1, (Vec4_195D40 *)&v2, f);
    }
    ini.func_001691E0();
    return 1;
}

int STV_1959E0::func_001959E0(float dt, float *pos, Vec4_195D40 *out)
{
    V4f_001956F0 seg[2];
    V4f_001956F0 d;
    V4f_001956F0 n;
    V4f_001956F0 hitPos;
    V4f_001956F0 hitNormal;
    float best;
    int bestIdx;
    float len;
    int i;
    int hit;

    bestIdx = cur;
    best = 3.4028235e38f;
    for (i = 0; i < count; i++) {
        hit = 0;
        if (f70) {
            d = *(V4f_001956F0 *)pos - *(V4f_001956F0 *)&items[i];
            AsmVec3Normalize(&n.x, &d.x);
            len = AsmSqrtF(d.x * d.x + d.z * d.z + d.y * d.y);
            n.x = n.x * len;
            n.y = n.y * len;
            n.z = n.z * len;
            seg[0] = *(V4f_001956F0 *)&items[i];
            seg[1] = seg[0] + n;
            if (func_00134DE0(seg, &hitPos, &hitNormal, 1, 0, 0, -1, 0, 1)) {
                hit = 1;
            }
        }
        float dx = pos[0] - ((float *)&items[i])[0];
        float dy = pos[1] - ((float *)&items[i])[1];
        float dz = pos[2] - ((float *)&items[i])[2];
        float dd = dx * dx + dy * dy + dz * dz;
        if (best > dd && !hit) {
            best = dd;
            bestIdx = i;
        }
    }
    if (bestIdx != cur) {
        if (f74 >= f78 || cur == -1) {
            cur = bestIdx;
            f74 = 0;
        } else {
            f74 = dt + f74;
        }
    }
    *(V4f_001956F0 *)out = *(V4f_001956F0 *)&items[cur];
    if (cur != prev) {
        prev = cur;
        if (Rand01_001959E0() * D_00275994 < items[cur].f30) {
            f6c = 1;
        } else {
            f6c = 0;
        }
        return 1;
    }
    return 0;
}

Vec4_195D40 *func_00195D40(Vec4_195D40 *out, int x, int y, int z, int w)
{
    volatile int t[4];
    t[0] = x;
    t[1] = y;
    t[2] = z;
    t[3] = w;
    *out = *(Vec4_195D40 *)t;
    return out;
}

SimpleVCR *SimpleVCR::func_00195D90(void)
{
    func_00157600(1);
    f74 = 0;
    f6c = 0;
    f70 = 0;
    f68 = 0;
    fC8 = 0;
    f50 = 0;
    fCC = 0;
    f78 = 0;
    f7c = 0;
    f80 = 0;
    f54 = 0;
    f58 = 0;
    fC4 = 0;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f48 = 0;
    f5c = 0;
    f60 = 0;
    f64 = 0;
    f84 = 0;
    f88 = 0;
    f90 = 0;
    f94 = 0;
    f98 = 0;
    fA0 = 0;
    f9c = 0;
    fAC = 0;
    fB0 = 0;
    fB4 = 0;
    fA4 = 0;
    fA8 = 0;
    fC0 = fC0 & 0x41;
    vtbl = &D_0028AFA4;
    f44 = 1.0f;
    f4c = 0x80000000;
    f3c = 1.0f;
    f40 = 0.06666667f;
    fB8 = 0;
    return this;
}

void func_001E891B(void *p);
void SimpleVCR::func_00195E70(void)
{
    void **p = (void **)this;
    vtbl = &D_0028AFA4;
    if (p[0x50 / 4]) func_001E891B(p[0x50 / 4]);
    if (p[0x78 / 4]) func_001E891B(p[0x78 / 4]);
    if (p[0xcc / 4]) func_001E891B(p[0xcc / 4]);
    if (p[0x7c / 4]) func_001E891B(p[0x7c / 4]);
    if (p[0x80 / 4]) func_001E891B(p[0x80 / 4]);
    if (p[0x84 / 4]) func_001E891B(p[0x84 / 4]);
    if (p[0x88 / 4]) func_001E891B(p[0x88 / 4]);
    if (p[0x8c / 4]) func_001E891B(p[0x8c / 4]);
    if (p[0x90 / 4]) func_001E891B(p[0x90 / 4]);
    if (p[0x94 / 4]) func_001E891B(p[0x94 / 4]);
    if (p[0x98 / 4]) func_001E891B(p[0x98 / 4]);
    if (p[0xa0 / 4]) func_001E891B(p[0xa0 / 4]);
    if (p[0x9c / 4]) func_001E891B(p[0x9c / 4]);
    if (p[0xac / 4]) func_001E891B(p[0xac / 4]);
    if (p[0xb0 / 4]) func_001E891B(p[0xb0 / 4]);
    if (p[0xb4 / 4]) func_001E891B(p[0xb4 / 4]);
    if (p[0xa4 / 4]) func_001E891B(p[0xa4 / 4]);
    if (p[0xa8 / 4]) func_001E891B(p[0xa8 / 4]);
    if (p[0xb8 / 4]) func_001E891B(p[0xb8 / 4]);
    if (p[0xbc / 4]) func_001E891B(p[0xbc / 4]);
    func_00157660();
}

int C_00196000::func_00196000(float param_1, int param_2, int param_3, int param_4, float param_5, float param_6, int param_7)
{
    f70++;
    if (param_1 > 0.0f && f74 < f6c && (fc0 & 0x10) == 0) {
        f78[f74] = param_2;
        if (param_3 != 0) {
            f7c[f74] = param_3;
        } else {
            f7c[f74] = param_2;
        }
        f80[f74] = 0;
        f84[f74] = param_7;
        f88[f74] = param_4;
        f90[f74] = param_1;
        f94[f74] = D_00275460 / param_1;
        fa4[f74] = param_5;
        fa8[f74] = param_6;
        return ++f74 - 1;
    }
    return -1;
}

