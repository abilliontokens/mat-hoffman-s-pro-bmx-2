/* 6 functions from 0x00029BD0 to 0x0002AAA0, found by Ghidra. */
#include "common.h"
#include <math.h>
struct V4_00029BD0 {
 union { struct { float x,y,z,w; }; __int64 q[2]; };
     V4_00029BD0() {}
    V4_00029BD0 &operator=(const V4_00029BD0 &v) { q[0]=v.q[0]; q[1]=v.q[1]; return *this; }
};
struct P4_00029BD0 { float x, y, z, w; };
struct __declspec(align(16)) M4_00029BD0 { float m[16]; };
struct Sub_00029BD0 { char pad[0x1a0]; V4_00029BD0 v; const V4_00029BD0 &GetPos() const { return v; } };
struct Data_00029BD0 { char pad[0x78]; V4_00029BD0 *v; };
struct Obj_00029BD0 {
 char pad[0x54]; Data_00029BD0 *data;
 char pad58[0xa7-0x58]; unsigned char flags;
 void func_00086C20(int);
 void func_00133700();
 void func_00133660(int);
 void func_00133EF0(M4_00029BD0 *);
 float func_00133F10(int);
};
struct World_00029BD0 {
 char pad[0xf0]; M4_00029BD0 mat;
 V4_00029BD0 *func_00198120(V4_00029BD0 *,V4_00029BD0 *);
};
struct Manager_00029BD0 { int func_00132E20(const char *); };
extern float D_002766A4, D_00275544, D_002755E8;
extern V4_00029BD0 D_002A1110;
extern int D_002BA154;
extern Manager_00029BD0 *D_002A4334;
extern char D_00276688[];
V4_00029BD0 *func_0001E9E0(V4_00029BD0 *,V4_00029BD0 *);
V4_00029BD0 *func_0001C610(V4_00029BD0 *,V4_00029BD0 *,V4_00029BD0 *);
struct C_00029BD0 {
 char pad[0x10c]; float x,y,z;
 char pad118[0x1e8-0x118]; Sub_00029BD0 *f1e8;
 char pad1ec[0x10]; Obj_00029BD0 *f1fc;
 char pad200[0x30]; World_00029BD0 *f230;
 char pad234[0x464-0x234]; float f464;
 int func_00029BD0();
};

struct F4_0002A010 { float x, y, z, w; };
struct Sub_0002A010 { char pad[0x68]; int f68; char pad6c[0xf0-0x6c]; F4_0002A010 vf0; };
struct World_0002A010 { void func_00199E50(F4_0002A010 a, F4_0002A010 b, float c); };
extern float D_002A1160;
struct C_0002A010 {
 char pad[0x1e8]; Sub_0002A010 *f1e8;
 char pad1ec[0x230-0x1ec]; World_0002A010 *f230;
 char pad234[0x454-0x234]; int f454;
 char pad458[0x468-0x458]; int f468;
 char pad46c[0x5c8-0x46c]; int f5c8;
 char pad5cc[0x62c-0x5cc]; float f62c;
 char pad630[4]; int f634; float f638; float f63c; int f640;
 char pad644[0x744-0x644]; float f744;
 void func_0002A010(float dt);
};
extern float D_002766C0, D_002766B0, D_002A1160, D_00275548, D_002A115C, D_002A1158;
extern double D_002766B8, D_002766A8;
static __forceinline float Abs_0002A010(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}
extern int D_002B7E40;
extern float D_002B7E3C, D_002B7E38;

struct S_Cb_0002A6B0 {
    char pad0[0x7c];
    void (__cdecl *f7c)(int, void *, int, int);
    int f80;
};

struct S_Vt_0002A6B0 {
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
    virtual void v13(float dt);
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual S_Cb_0002A6B0 *v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual S_Cb_0002A6B0 *v103();
};

struct S_Sub_0002A6B0 {
    void func_000B8AD0(int a, int b);
};

struct S_Sub2_0002A6B0 {
    void func_00025E50(float dt);
};

extern int D_002A10F0, D_002A10F4, D_002A10F8, D_002A10FC;

struct V4i_0002A6B0 {
    int a, b, c, d;
    void Set(int x, int y, int z, int w) { a = x; b = y; c = z; d = w; }
};

struct C_0002A6B0 {
    char pad0[0x13c];
    V4i_0002A6B0 f13c;
    char pad14c[0x1e8 - 0x14c];
    S_Sub_0002A6B0 *f1e8;
    char pad1ec[0x1f4 - 0x1ec];
    char *f1f4;
    char pad1f8[0x214 - 0x1f8];
    S_Vt_0002A6B0 *f214;
    S_Vt_0002A6B0 *f218;
    char pad21c[0x47c - 0x21c];
    int f47c;
    int f480;
    float f484;
    char pad488[0x5f4 - 0x488];
    S_Sub2_0002A6B0 *f5f4;
    char pad5f8[0x734 - 0x5f8];
    float f734;
    float f738;
    int f73c;
    int f740;
    void func_00027D60(void);
    void func_0002A6B0(float dt);
};
#include <xmmintrin.h>
#include "asm_helpers.h"
struct V4_0002A7C0 {
    float x, y, z, w;
    V4_0002A7C0() {}
    V4_0002A7C0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};
inline void Cross_0002A7C0(float *out, float *a, float *b)
{
    _mm_storeu_ps(out, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))), 0xc9));
}
static inline float Sqrt_0002A7C0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }
struct W_0002A7C0 {
    V4_0002A7C0 *func_00197F70(V4_0002A7C0 *, V4_0002A7C0 *);
    V4_0002A7C0 *func_00198040(V4_0002A7C0 *, V4_0002A7C0 *);
};
struct VO_0002A7C0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40();
    virtual V4_0002A7C0 *v41(V4_0002A7C0 *);
    virtual V4_0002A7C0 *v42(V4_0002A7C0 *);
    virtual void v43();
    virtual V4_0002A7C0 *v44(V4_0002A7C0 *);
    char pad4[0x28 - 4]; int f28;
    char pad2c[0x4c - 0x2c]; V4_0002A7C0 f4c;
    char pad5c[0x190 - 0x5c]; V4_0002A7C0 f190;
    char pad1a0[0x22c - 0x1a0]; W_0002A7C0 *f22c;
    char pad230[0x238 - 0x230]; V4_0002A7C0 f238;
};
struct B_0002A7C0 { char pad[0x8c]; VO_0002A7C0 *f8c; };
struct C_0002A7C0 {
    char pad[0x1e0]; VO_0002A7C0 *f1e0;
    char pad1e4[4]; B_0002A7C0 *f1e8;
    char pad1ec[0x744 - 0x1ec]; float f744;
    V4_0002A7C0 f748;
    V4_0002A7C0 f758;
    V4_0002A7C0 f768;
    void func_0002A7C0();
};
struct V4_0002A250 {
    float x, y, z, w;
};
struct Obj1_0002A250 {
    char pad0[0x170];
    V4_0002A250 v170;
    float f180, f184, f188, f18c;
    char pad190[0x268 - 0x190];
    float f268, f26c, f270;
};
struct Obj2_0002A250 {
    char pad0[0x3c];
    float f3c;
};
struct World_0002A250 {
    void func_00199CF0(V4_0002A250 axis, float angle);
};
struct C_0002A250 {
    char pad0[0x10c];
    V4_0002A250 f10c;
    char pad11c[0x1e0 - 0x11c];
    Obj1_0002A250 *f1e0;
    char pad1e4[0x1ec - 0x1e4];
    Obj2_0002A250 *f1ec;
    char pad1f0[0x230 - 0x1f0];
    World_0002A250 *f230;
    char pad234[0x4b4 - 0x234];
    float f4b4;
    char pad4b8[0x644 - 0x4b8];
    float f644;
    char pad648[4];
    float f64c;
    float f650;
    char pad654[0x78c - 0x654];
    int f78c;
    void func_0002A250(float dt);
};
static __forceinline float Length_0002A250(V4_0002A250 *v)
{
    return AsmSqrtF(v->x * v->x + v->y * v->y + v->z * v->z);
}
struct Sub_00029E00 { char pad[0x50]; int f50; char pad54[0x64 - 0x54]; int f64; char pad68[4]; int f6c; char pad70[0x1a0 - 0x70]; V4_00029BD0 v1a0; };
struct Obj1_00029E00 { char pad[0x23c]; float f23c; };
struct Obj2_00029E00 { char pad[0x30]; int f30; };
struct C_00029E00 {
    char pad0[0x10c];
    V4_0002A250 f10c;
    char pad11c[0x120 - 0x11c];
    float f120;
    char pad124[0x1e0 - 0x124];
    Obj1_00029E00 *f1e0;
    char pad1e4[4];
    Sub_00029E00 *f1e8;
    char pad1ec[4];
    Obj2_00029E00 *f1f0;
    char pad1f4[0x230 - 0x1f4];
    World_0002A250 *f230;
    char pad234[0x5c8 - 0x234];
    int f5c8;
    char pad5cc[0x620 - 0x5cc];
    float f620;
    float f624;
    int f628;
    char pad62c[0x684 - 0x62c];
    int f684;
    void func_00029E00(float dt);
};
extern float D_002756D8, D_002A1154;
extern double D_002766C8;
extern float D_002756D4, D_002A1170, D_002A116C, D_002A1168, D_002A1164, D_00275F58, D_00275460, D_002766C4;
void func_00026340(V4_0002A250 *out, V4_0002A250 *in);
float func_0014F7E0(float x);
float func_0001C870(float a, int b, float c, float d, float e);

extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
int C_00029BD0::func_00029BD0()
{
 V4_00029BD0 v=f1e8->v, temp;
 v=*func_0001E9E0(&temp,&v);
 f464=v.y;
 if(v.y<D_002766A4) {
 func_0001E9E0(&v,func_0001C610(&temp,&D_002A1110,&v));
 float dot=v.y*y;
 dot+=v.x*x;
 if(dot+v.z*z<D_00275544) return 1;
 return 0;
 }
 f1fc->func_00086C20(1);
 f1fc->func_00133700();
 f1fc->func_00133660(D_002BA154);
 M4_00029BD0 mat=f230->mat;
 mat.m[7]+=0.5f;
 f1fc->func_00133EF0(&mat);
 f1fc->func_00133F10(0);
 int result;
 if(f1fc->flags&0x20) {
 v=*f1fc->data->v;
 f230->func_00198120(&temp,&v);
 result=!(temp.x<D_00275544 ? 1 : 0);
 } else result=1;
 int id=D_002A4334->func_00132E20(D_00276688);
 f1fc->func_00086C20(0);
 f1fc->func_00133700();
 f1fc->func_00133660(id);
 f1fc->flags|=1;
 f1fc->func_00133EF0(&f230->mat);
 return result;
}
extern V4_0002A250 D_002A1100;
void C_00029E00::func_00029E00(float dt)
{
    float ang;
    V4_00029BD0 a;
    V4_00029BD0 b;
    V4_0002A250 axis;
    float lim;
    V4_0002A250 *n;
    float d;

    if (f1e8->f64 && f628) {
        f628 = 0;
    }
    if (f1e8->f6c && !f628) {
        if (f684 && f1e0->f23c > D_00275460) goto done;
        if (f1f0->f30 && !f5c8) goto done;
        if (f120 < D_002756D8) {
            n = &f10c;
            { V4_00029BD0 t; func_0001E9E0(&a, func_0001C610(&t, (V4_00029BD0 *)n, &f1e8->v1a0)); }
            { V4_00029BD0 t; func_0001E9E0(&a, func_0001C610(&t, &f1e8->v1a0, &a)); }
            d = a.z * n->z;
            ang = func_0014F7E0(a.x * n->x + a.y * n->y + d);
            { V4_00029BD0 t; func_0001E9E0(&b, func_0001C610(&t, (V4_00029BD0 *)n, &a)); }
            ((W_0002A7C0 *)f230)->func_00198040((V4_0002A7C0 *)&axis, (V4_0002A7C0 *)&b);
            lim = D_002A1154 * dt;
            if (ang > lim) ang = lim;
            f230->func_00199CF0(axis, ang);
        } else {
            if (f1e8->f50) f624 -= dt * f620;
            else f624 += dt * f620;
            f230->func_00199CF0(D_002A1100, dt * f624);
            return;
        }
    }
done:
    f624 = 0;
}

void C_0002A010::func_0002A010(float dt)
{
    C_0002A010 *volatile self = this;
    static float rate = (float)((D_002766B8 - D_002766C0 - D_002766B0) * D_002A1160);
    volatile float t[2];
    C_0002A010 *p = this;
    if (this->f634) goto body;
    {
        if (this->f468 || this->f454 || !this->f1e8->f68 || !(this->f744 < D_00275548) || this->f5c8) goto active;
        {
            t[0] = this->f62c;
            *(volatile int *)&t[1] = *(volatile int *)&t[0] & 0x7fffffff;
            if (t[1] > D_002A115C) {
                int dir;
                float scale;
                unsigned int address = (unsigned int)self;
                *(volatile int *)(address + 0x634) = 1;
                p = self;
                dir = p->f62c < D_002766A8 ? -1 : 1;
                scale = D_002A1158;
                D_002B7E40 = dir;
                D_002B7E3C = 0;
                *(volatile int *)&p->f640 = dir >= 0;
                p = self;
                scale *= p->f638;
                *(volatile float *)&p->f63c = 0;
                D_002B7E38 = scale;
            }
        }
    }
    p = self;
active:
    if (p->f634) {
body:
        if (D_002B7E3C < D_002766B8 && p->f63c > D_002766C0) {
            p->f230->func_00199E50(p->f1e8->vf0, *(F4_0002A010 *)&D_002A1110, p->f62c / rate * D_002B7E38 * dt);
            p = self;
            D_002B7E3C += dt / rate;
        }
        *(volatile float *)&p->f63c += dt / D_002A1160;
        p = self;
        if (p->f63c >= D_002766B8) {
            p->f634 = 0;
        }
    }
}

void C_0002A250::func_0002A250(float dt)
{
    float speed;
    V4_0002A250 a;
    V4_0002A250 b;
    int sign;
    float step;
    float s1;
    float s2;

    speed = Length_0002A250(&f1e0->v170);
    if (speed > f1ec->f3c * D_002766C8) {
        f78c = 1;
    }
    if (speed > D_00275544 && f644 == D_00275544) {
        a.x = a.y = a.z = 0;
        a.w = 1.0f;
        func_00026340(&a, &f1e0->v170);
        f644 = D_002756D4 - func_0014F7E0(a.x * f10c.x + a.y * f10c.y + a.z * f10c.z);
        b.x = b.y = b.z = 0;
        b.w = 1.0f;
        AsmVec3Cross(&b.x, &a.x, &f10c.x);
        func_00026340(&b, &b);
        sign = -1;
        if (b.y >= D_00275544) {
            sign = 1;
        }
        f644 = sign * f644 * D_002A1170;
        f64c = Abs_0002A010(f644);
        f650 = func_0001C870(speed, 0, D_002A1164, D_002A1168, D_002A116C);
    }
    s1 = D_00275460;
    if (f4b4 < D_00275544) {
        s1 = D_00275F58;
    }
    s2 = D_00275460;
    if (f644 < D_00275544) {
        s2 = D_00275F58;
    }
    if (s1 != s2 && Abs_0002A010(f4b4) > D_002766C4) {
        f644 = 0;
    }
    if (Abs_0002A010(f644) > D_00275544) {
        s2 = D_00275460;
        step = func_0001C870(Abs_0002A010(f644), 0, D_002A1164, f64c, f650);
        if (f644 < D_00275544) {
            s2 = D_00275F58;
        }
        step = s2 * step * dt;
        if (Abs_0002A010(f644) < Abs_0002A010(step)) {
            step = f644;
        }
        f230->func_00199CF0(*(V4_0002A250 *)&D_002A1110, step);
        f644 -= step;
        f1e0->f268 -= f1e0->f180;
        f1e0->f26c -= f1e0->f184;
        f1e0->f270 -= f1e0->f188;
        ((V4i_0002A6B0 *)&f1e0->f180)->Set(D_002A10F0, D_002A10F4, D_002A10F8, D_002A10FC);
    }
}

void C_0002A6B0::func_0002A6B0(float dt)
{
    S_Cb_0002A6B0 *cb;
    int done;

    func_00027D60();
    f1e8->func_000B8AD0(0, 0);
    f13c = *(V4i_0002A6B0 *)&D_002A10F0;
    if (f480 == 0) {
        f218->v13(dt);
    } else {
        f214->v13(dt);
    }
    if (f47c == 2) {
        f5f4->func_00025E50(dt);
    }
    done = f740;
    if (done == 0) {
        f738 = dt + f738;
    }
    if (f738 >= f734 && done == 0) {
        if (f480 == 0) {
            cb = f218->v27();
        } else {
            cb = f214->v27();
        }
        if (cb->f7c != 0) {
            cb->f7c(*(int *)(f1f4 + 0x2c), cb, cb->f80, 1);
        }
        f740 = 1;
    }
    f484 += dt;
}

extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)
void C_0002A7C0::func_0002A7C0()
{
    if (f1e8->f8c != 0) {
        VO_0002A7C0 *p = f1e8->f8c;
        V4_0002A7C0 pos;
        V4_0002A7C0 a;
        V4_0002A7C0 b;
        V4_0002A7C0 r;
        p->f22c->func_00197F70(&pos, &p->f190);
        V4_0002A7C0 *t = &f1e0->f4c;
        V4_0002A7C0 d(t->x - pos.x, t->y - pos.y, t->z - pos.z, 1.0f);
        p->v44(&a);
        p->v42(&b);
        V4_0002A7C0 c(0.0f, 0.0f, 0.0f, 1.0f);
        AsmVec3Cross(&c.x, &a.x, &d.x);
        f768 = V4_0002A7C0(b.x + c.x, b.y + c.y, b.z + c.z, 1.0f);
        V4_0002A7C0 *q = &f1e0->f238;
        f748 = V4_0002A7C0(q->x - f768.x, q->y - f768.y, q->z - f768.z, 1.0f);
        f758 = *f1e0->f22c->func_00198040(&r, &f748);
        float sq = f748.x * f748.x + f748.y * f748.y + f748.z * f748.z;
        f744 = AsmSqrtF(sq);
    } else {
        *(int *)&f768.x = D_002A10F0;
        *(int *)&f768.y = D_002A10F4;
        *(int *)&f768.z = D_002A10F8;
        *(int *)&f768.w = D_002A10FC;
        V4_0002A7C0 r;
        f748 = *f1e0->v42(&r);
        f758 = *f1e0->v41(&r);
        *(int *)&f744 = f1e0->f28;
    }
}
