/* 1 function from 0x0012FE50 to 0x00130C90, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern float D_00275544;
extern float D_00275460;
extern float D_002844CC;
extern float D_0027D268;
extern double D_002843A0;
extern float D_002756D0;
extern float D_002756B8;
extern float D_002756E8;

struct V4_0012FE50 {
    float x, y, z, w;
    V4_0012FE50() { x = y = z = 0.0f; w = 1.0f; }
};

typedef V4_0012FE50 V4P_0012FE50;

static inline V4_0012FE50 operator*(const V4_0012FE50 &a, float s)
{
    V4_0012FE50 r;
    r.x = a.x * s;
    r.y = a.y * s;
    r.z = a.z * s;
    return r;
}
static inline V4_0012FE50 operator+(const V4_0012FE50 &a, const V4_0012FE50 &b)
{
    V4_0012FE50 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}
static inline V4_0012FE50 operator-(const V4_0012FE50 &a, const V4_0012FE50 &b)
{
    V4_0012FE50 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}
static inline float Dot_0012FE50(const V4_0012FE50 &a, const V4_0012FE50 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

extern V4_0012FE50 D_002A4110;
extern V4_0012FE50 D_002A4130;
extern V4_0012FE50 D_002A4140;
extern float D_00276080;

struct Key_0012FE50 {
    float time;
    float f4;
    V4_0012FE50 f8;
    V4_0012FE50 pos;
};

struct Spline_0012FE50 {
    unsigned int count;
    int f4;
    Key_0012FE50 *arr;
    float fC;
    float f10;
    int f14;
};

struct Node_0012FE50 {
    void func_00197E70(V4_0012FE50 *out);
    void func_00199A70(int a, V4_0012FE50 *out);
    void func_00198F50(V4_0012FE50 *a, V4_0012FE50 *b, int c, int d, int e);
    void func_00199790(int a, V4_0012FE50 *v);
    void func_0019AC50();
};

struct CamData_0012FE50 {
    char pad0[0x20];
    V4_0012FE50 f20;
    char pad30[0x94 - 0x30];
    float f94;
};

struct Cam_0012FE50 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(float *m);
    char pad4[0x54 - 4];
    CamData_0012FE50 *f54;
    char pad58[0xa4 - 0x58];
    unsigned int fA4;
    void func_00180E00(int a, V4_0012FE50 *v, int b, int c);
    float func_00133F10(int a);
};

struct Obj_0012FE50 {
    void func_00133ED0();
    float func_00133F10(int a);
};

struct Attach_0012FE50 {
    void func_000BA430(V4_0012FE50 *a, V4_0012FE50 *b, int c, int d);
};

void func_00011FF0(void *arr, int size, int count, void *ctor);
void func_00011060();
void func_00030A30(V4_0012FE50 *out, V4_0012FE50 v, void *m);
void func_0001C680(V4_0012FE50 *out, V4_0012FE50 v, void *m);
void func_0012EEC0(V4_0012FE50 *out, V4_0012FE50 *in);
float func_0014FBA0(float a, float b);
void func_000265C0(float *m, V4_0012FE50 *a, V4_0012FE50 *b, V4_0012FE50 *c, int d, int e);
void func_00167FE0(V4_0012FE50 *out, V4_0012FE50 *in, float a, float b, int c);
void func_0014F670(float a, float *s, float *c);
extern "C" double __cdecl fmod(double, double);
#pragma intrinsic(fmod)

static __forceinline float Max_0012FE50(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Min_0012FE50(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct C_0012FE50 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual float v51(float a, float b); virtual V4_0012FE50 v52(float t);
    char pad4[0x400 - 4];
    Node_0012FE50 *f400;
    int f404;
    Cam_0012FE50 *f408;
    char pad40C[0x428 - 0x40C];
    V4_0012FE50 f428;
    V4_0012FE50 f438;
    V4_0012FE50 f448;
    V4_0012FE50 f458;
    char pad468[0x498 - 0x468];
    int f498;
    int f49c;
    int f4a0;
    int f4a4;
    int f4a8;
    int f4ac;
    int f4b0;
    unsigned int f4b4;
    unsigned int f4b8;
    char pad4bc[0x4c4 - 0x4bc];
    float f4c4;
    char pad4c8[0x4d4 - 0x4c8];
    float f4d4;
    float f4d8;
    float f4dc;
    float f4e0;
    float f4e4;
    float f4e8;
    char pad4ec[0x4f0 - 0x4ec];
    float f4f0;
    char pad4f4[0x4fc - 0x4f4];
    Attach_0012FE50 *f4fc;
    Node_0012FE50 **f500;
    char pad504[0x510 - 0x504];
    float f510;
    float f514;
    Spline_0012FE50 *f518;
    int func_00171230(float dt);
    V4_0012FE50 func_0012F0F0(float t);
    int func_0012FE50(float dt, int b);
};

int C_0012FE50::func_0012FE50(float dt, int b)
{
    int ret = func_00171230(dt);
    V4_0012FE50 a;
    V4_0012FE50 c;
    float t;

    if (dt <= D_00275544) {
        return ret;
    }
    if (f518->f14 == 0 && f4b8 >= f518->count - 2) {
        return 0;
    }
    f518->f10 = D_00275460 / dt;
    if (b == 0) {
        Spline_0012FE50 *s = f518;
        f510 = (float)fmod((double)(dt + f510), (double)(s->arr[s->count - 1].time * f4c4));
    }
    if (f4a4 == 0) {
        V4P_0012FE50 vv[2];
        V4_0012FE50 tmp;
        unsigned int i;

        func_00011FF0(vv, 0x10, 2, (void *)func_00011060);
        vv[0] = D_002A4110;
        vv[1] = D_002A4110;
        vv[0].y = D_002A4110.y + f4d8;
        vv[1].y = D_002A4110.y - f4d8;
        f408->func_00180E00(1, (V4_0012FE50 *)vv, 0, 0);
        for (i = 0; i < f4b4; i++) {
            f500[i]->func_00197E70(&tmp);
            if (tmp.z > D_00275544) {
                f4e4 = tmp.z;
            }
        }
        f4a4 = 1;
    }
    if (f4e8 > D_00275544) {
        t = v51(f510, f4e8);
    } else {
        t = f510;
    }
    f438 = v52(t);
    V4_0012FE50 d;
    d.x = f438.x - f428.x;
    d.y = f438.y - f428.y;
    d.z = f438.z - f428.z;
    if (D_002844CC <= d.x && D_002844CC <= d.y && D_002844CC <= d.z &&
        d.x <= D_0027D268 && d.y <= D_0027D268 && d.z <= D_0027D268) {
        f428 = f438;
        return ret;
    }
    f428 = f438;
    d.y = 0.0f;
    if (f4b4 > 0) {
        V4_0012FE50 o;
        func_00030A30(&o, d, (char *)f400 + 0xf0);
        f4dc += (f518->f10 + f514) * f4d4 * o.z * dt;
        f4dc = (float)fmod((double)f4dc, D_002843A0);
        float ang = f4dc;
        if (ang > D_002756D0) {
            ang -= D_002756B8;
        } else if (ang < D_002756E8) {
            ang += D_002756B8;
        }
        f4dc = ang;
    }
    V4_0012FE50 buf = d;
    func_0012EEC0(&buf, &buf);
    if (f4ac != 0) {
        f458 = buf;
    } else {
        float k = D_00275460 - f4f0;
        V4_0012FE50 s1;
        V4_0012FE50 s2;
        s1.x = buf.x * k; s1.y = buf.y * k; s1.z = buf.z * k;
        s2.x = f458.x * f4f0; s2.y = f458.y * f4f0; s2.z = f458.z * f4f0;
        V4_0012FE50 r;
        r.x = s2.x + s1.x; r.y = s2.y + s1.y; r.z = s2.z + s1.z;
        f458 = r;
    }
    if (f4a0 != 0 && f4b4 > 0) {
        float t2 = v51(t, -f4e4);
        V4_0012FE50 rr = v52(t2);
        V4_0012FE50 d2;
        d2.x = rr.x - f438.x;
        d2.y = rr.y - f438.y;
        d2.z = rr.z - f438.z;
        V4_0012FE50 o2;
        func_00030A30(&o2, d2, (char *)f400 + 0xf0);
        f4e0 = func_0014FBA0(o2.x, o2.z);
        f4e0 = Min_0012FE50(Max_0012FE50(f4e0, -0.5235988f), 0.5235988f);
    }
    return ret;
}
