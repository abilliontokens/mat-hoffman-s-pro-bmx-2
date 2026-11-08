/* 1 function from 0x0012FE50 to 0x00130C90, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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

static __forceinline V4_0012FE50 operator*(const V4_0012FE50 &a, float s)
{
    V4_0012FE50 r;
    r.x = a.x * s;
    r.y = a.y * s;
    r.z = a.z * s;
    return r;
}
static __forceinline V4_0012FE50 operator+(const V4_0012FE50 &a, const V4_0012FE50 &b)
{
    V4_0012FE50 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}
static __forceinline V4_0012FE50 operator-(const V4_0012FE50 &a, const V4_0012FE50 &b)
{
    V4_0012FE50 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}
static __forceinline float Dot_0012FE50(const V4_0012FE50 &a, const V4_0012FE50 &b)
{
    return a.y * b.y + a.x * b.x + a.z * b.z;
}

extern V4_0012FE50 D_002A4110;
extern float D_002A4114, D_002A4118, D_002A411C;
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

void __stdcall func_00011FF0(void *arr, int size, int count, void *ctor);
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
    virtual void v50(); virtual float v51(float a, float b); virtual V4_0012FE50 *sample2(V4_0012FE50 *out,float t);
    V4_0012FE50 v52(float t) { float data[4]; return *sample2((V4_0012FE50*)data,t); }
    V4_0012FE50 *sample(V4_0012FE50 *out,float t) { typedef V4_0012FE50 *(__fastcall *Fn)(void*,int,V4_0012FE50*,float); return ((Fn)(*(void***)this)[52])(this,(int)out,out,t); }
    char pad4[0x4c - 4];
    V4_0012FE50 f4c;
    char pad5c[0x190 - 0x5c];
    V4_0012FE50 f190;
    char pad1a0[0x400 - 0x1a0];
    Node_0012FE50 *f400;
    int f404;
    Cam_0012FE50 *f408;
    Obj_0012FE50 *f40c;
    Obj_0012FE50 *f410;
    char pad414[0x428 - 0x414];
    V4_0012FE50 f428;
    V4_0012FE50 f438;
    V4_0012FE50 f448;
    V4_0012FE50 f458;
    V4_0012FE50 f468;
    char pad478[0x498 - 0x478];
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
    float f4f4;
    float f4f8;
    Attach_0012FE50 *f4fc;
    Node_0012FE50 **f500;
    char pad504[0x510 - 0x504];
    float f510;
    float f514;
    Spline_0012FE50 *f518;
    int func_00171230(float dt);
    V4_0012FE50 func_0012F0F0(float t);
    V4_0012FE50 *func_0012F0F0(V4_0012FE50 *out,float t);
    int func_0012FE50(float dt, int b);
};

#pragma optimize("y", on)
int C_0012FE50::func_0012FE50(float dt, int b)
{
    int ret = func_00171230(dt);
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
    V4_0012FE50 a;
    V4_0012FE50 c;
    if (f4a4 == 0) {
        float vv[8];
        V4_0012FE50 *p = (V4_0012FE50 *)vv;
        unsigned int i;

        func_00011FF0(vv, 0x10, 2, (void *)func_00011060);
        p[0] = D_002A4110;
        p[1] = D_002A4110;
        p[0].y = D_002A4110.y + f4d8;
        p[1].y = D_002A4110.y - f4d8;
        f408->func_00180E00(1, p, 0, 0);
        V4_0012FE50 tmp;
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
    float sampleData[4];
    V4_0012FE50 *sample=(V4_0012FE50*)sampleData;
    f438 = *this->sample(sample,t);
    float ddata[4];
    V4_0012FE50 &d=*(V4_0012FE50*)ddata;
    d.w=1.0f;
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
        float o1data[4];
        V4_0012FE50 &o1=*(V4_0012FE50*)o1data;
        o1.z=0.0f;
        func_00030A30(&o1, d, (char *)f400 + 0xf0);
        f4dc += (f518->f10 + f514) * f4d4 * o1.z * dt;
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
        f458 = f458 * f4f0 + buf * (D_00275460 - f4f0);
    }
    if (f4a0 != 0 && f4b4 > 0) {
        const V4_0012FE50 *position=&f438;
        float t2 = v51(t, -f4e4);
        const V4_0012FE50 &rr = *sample2(sample,t2);
        float o2data[4];
        V4_0012FE50 &o2=*(V4_0012FE50*)o2data;
        o2.x=o2.z=0.0f;
        V4_0012FE50 &d2=d;
        d2.w=1.0f;
        d2.x = rr.x - position->x;
        d2.y = rr.y - position->y;
        d2.z = rr.z - position->z;
        func_00030A30(&o2, d2, (char *)f400 + 0xf0);
        f4e0 = func_0014FBA0(o2.x, o2.z);
        f4e0 = AsmMinF(AsmMaxF(f4e0, -0.5235988f), 0.5235988f);
    }
    V4_0012FE50 o;
    f400->func_00199A70(0, &o);
    V4_0012FE50 e = o;
    V4_0012FE50 f;
    if (f49c == 0 && (f498 == 0 || f404 != 0)) {
        if (f4fc != 0) {
            f4fc->func_000BA430(&e, &f, 0, 0);
        } else {
            e.y = f438.y;
            f = func_0012F0F0(t);
        }
        if (f4b0 != 0) {
            __declspec(align(16)) float m[16];
            func_000265C0(m, &o, &D_002A4140, &D_002A4130, 1, 1);
            f408->v31(m);
            f408->func_00133F10(0);
            if (f408->fA4 & 0x20000000) {
                CamData_0012FE50 *cd = f408->f54;
                float s = (D_00275460 - cd->f94) * f4d8;
                s = s + s - f4d8;
                V4_0012FE50 r = D_002A4130 * s + o;
                if (r.y > e.y) {
                    e = r;
                    f = cd->f20;
                }
            }
        }
        if (f404 != 0) {
            f518->fC = e.y;
            if (f518->fC == f4f8) {
                if (f498 != 0) {
                    f49c = 1;
                }
            } else {
                f4f8 = f518->fC;
            }
        }
    } else {
        e.y = f518->fC;
        f = D_002A4130;
    }
    if (f498 != 0) {
        f400->func_00198F50(&f458, &f, 0, 1, 0);
    } else {
        if (f4ac != 0) {
            f468 = f;
        } else if (Dot_0012FE50(f, f468) > D_00276080) {
            f468 = f468 * f4f4 + f * (D_00275460 - f4f4);
        }
        a = f458 - f468 * Dot_0012FE50(f468, f458);
        f400->func_00198F50(&a, &f468, 0, 1, 0);
    }
    V4_0012FE50 g;
    g.x = f448.x + f438.x;
    g.y = e.y;
    g.z = f448.z + f438.z;
    V4_0012FE50 h;
    if (f190.x == D_002A4110.x && f190.y == D_002A4110.y && f190.z == D_002A4110.z) {
        f400->func_00199790(0, &g);
    } else {
        func_0001C680(&f4c, f190, (char *)f400 + 0xf0);
        h = g - f4c;
        f400->func_00199790(0, &h);
    }
    for (int i = 0; i < f4b4; i++) {
        if (f4a0 != 0 && i < 2) {
            func_00167FE0(&a, &c, f4e0, -f4dc, 0);
        } else {
            a.x = 0.0f;
            func_0014F670(-f4dc, &a.y, &a.z);
            c.x = 0.0f;
            c.y = a.z;
            c.z = -a.y;
        }
        f500[i]->func_00198F50(&a, &c, 0, 1, 0);
    }
    f40c->func_00133ED0();
    if (f410 != 0) {
        f410->func_00133ED0();
        f410->func_00133F10(0);
    }
    f400->func_0019AC50();
    return ret;
}
#pragma optimize("", on)
