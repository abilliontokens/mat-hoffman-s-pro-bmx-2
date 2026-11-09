/* 5 functions from 0x00151F80 to 0x00152E30, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"
struct Vec1521 { float x, y, z, w; Vec1521() { x = y = z = 0; w = 1; } };
struct C1521 { char pad[0x34]; float height; void func_001521D0(Vec1521*, Vec1521*); };
extern int D_002B9110, D_002B911C;
extern "C" void func_00134DE0(Vec1521*, Vec1521*, Vec1521*, int, int, int, int, int, int);

struct S_151F80_Vec {
    float x, y, z, w;
    S_151F80_Vec() { x = y = z = 0.0f; w = 1.0f; }
    S_151F80_Vec(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    void Set(float a, float b, float c) { x = a; y = b; z = c; }
    void SetRef(const float &a, const float &b, const float &c) { x = a; y = b; z = c; }
    S_151F80_Vec operator+(const S_151F80_Vec &o) const { return S_151F80_Vec(x + o.x, y + o.y, z + o.z); }
    S_151F80_Vec operator-(const S_151F80_Vec &o) const { return S_151F80_Vec(x - o.x, y - o.y, z - o.z); }
    S_151F80_Vec operator*(float s) const { return S_151F80_Vec(x * s, y * s, z * s); }
    S_151F80_Vec &operator+=(const S_151F80_Vec &o) { *this = *this + o; return *this; }
};
struct S_152BA0_Hnd { void func_00017FA0(S_151F80_Vec *a, S_151F80_Vec *b); };
struct S_152BA0_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(float *m);
    char pad4[0xa3];
    unsigned char fa7;
    float func_00133F10(int a);
    void func_0011CA60(S_151F80_Vec v);
};
struct S_152BA0_Ctl {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(int a);
};
struct S_152BA0_Slot { int f0; int f4; int f8; int fC; char pad10[0x50]; };
struct S_151F80_Root { char pad0[0x528]; S_152BA0_Hnd *f528; };
struct S_1528D0_Vec { float x, y, z, w; };
struct __declspec(align(16)) S_151F80_Mat { float m[16]; };
struct S_151F80_Xf {
    S_151F80_Vec func_00197F70(float *vin);
    S_1528D0_Vec *func_00199B00(S_1528D0_Vec *out, int a);
    void func_00199600(S_1528D0_Vec v);
};
struct S_151F80_Mid {
    char pad0[4];
    S_151F80_Xf *f4;
    char pad8[0x2c];
    float f34;
    void func_00166C50(const void *p);
    void func_00132D20(void);
};
struct S_151F80_Cam { char pad0[0x1a4]; S_151F80_Mid *f1a4; };
struct S_151F80_Tgt { char pad0[0x50]; int f50; char pad54[0x14]; int f68; };
struct S_151F80_Line {
    void func_0014AC30(S_151F80_Vec *line, int a);
    void func_00133ED0(void);
    float func_00133F10(int a);
};
extern S_151F80_Root *D_002B9120;
extern S_151F80_Vec D_002A789C;
extern float D_002A78A0;
extern float D_002A78A4;
extern float D_002A78A8;
extern float D_00286CA8;
extern float D_00286CAC;
extern float D_00275544;
extern float D_00275F60;
extern float D_002A7870;
extern float D_002A786C;
extern "C" void func_00150890(S_151F80_Vec *out, S_151F80_Vec *in);
extern float D_002756DC, D_00276288;
float func_00011170(S_151F80_Vec *v);
void func_00021330(S_151F80_Vec *out, void *src, S_151F80_Vec *tmp);
extern int D_002BA148;
extern char D_00286CB0;
extern "C" int func_001DC974(void);
struct C_00151F80 {
    char pad0[0x2c];
    S_151F80_Cam *f2c;
    char pad30[4];
    float f34;
    char pad38[0x1c];
    float f54;
    char pad58[8];
    S_152BA0_Obj *f60;
    S_151F80_Tgt *f64;
    S_151F80_Vec f68;
    S_151F80_Line *f78;
    char pad7c[8];
    S_151F80_Vec f84;
    S_151F80_Vec f94;
    char pada4[0x20];
    int fc4;
    S_151F80_Vec fc8;
    char padd8[8];
    S_152BA0_Obj *fe0;
    int fe4;
    S_151F80_Vec fe8;
    float ff8;
    float ffc;
    float f100;
    char pad104[0x1c];
    S_151F80_Vec f120;
    char pad130[0x64];
    S_152BA0_Slot slots[10];
    char pad554[0x1c];
    int f570;
    int f574;
    int f578;
    int f57c;
    float f580;
    char pad584[0x14];
    S_152BA0_Ctl *f598;
    char pad59c[0x138];
    int f6d4;
    S_151F80_Vec func_00016E40(void);
    void func_00150900(S_151F80_Vec *a, S_151F80_Vec *b);
    void func_00151F80(int a0);
    void func_00152BA0(void);
    void func_001528D0(float dt);
    void func_00152300(float dt);
};

void C_00151F80::func_00151F80(int a0)
{
    if (D_002B9120->f528 != 0) {
        S_151F80_Vec t;
        t.Set(0.0f, 0.0f, 1.0f);
        S_151F80_Vec a = t;
        a = f2c->f1a4->f4->func_00197F70(&a.x) - func_00016E40();
        fc4 = 0;
        f94 = D_002A789C;
        f84 = D_002A789C;
        S_151F80_Vec line[2];
        line[0] = func_00016E40();
        line[1] = line[0] + a * 10000.0f;
        fc8 = line[0];
        f78->func_0014AC30(line, 0);
        f78->func_00133ED0();
        f78->func_00133F10(0);
        if (fc4 != 0 && f64->f50 == 1 && f64->f68 == D_002BA148 && D_002B9120->f528 != 0) {
            f570 = 1;
        } else {
            f570 = 0;
        }
    }
}

void C1521::func_001521D0(Vec1521* pos, Vec1521* out)
{
 float h = 0;
 Vec1521 result;
 Vec1521 hit;
 Vec1521 line[2];
 line[0] = *pos;
 line[0].y += height;
 line[1] = *pos;
 hit.x = hit.y = hit.z = 0; hit.w = 1;
 result.x = result.y = result.z = 0; result.w = 1;
 line[1].y = 0;
 func_00134DE0(line, &hit, &result, 0, 0, 0, -1, 0, 1);
 h = (D_002B911C | D_002B9110) ? hit.y : h;
 if (out) *out = result;
 pos->y = h;
}

extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int n);
void C_00151F80::func_00152300(float dt)
{
    S_1528D0_Vec v;

    if (f2c == 0) {
        v.x = D_002A789C.x; v.y = D_002A78A0; v.z = D_002A78A4; v.w = D_002A78A8;
    } else {
        f2c->f1a4->f4->func_00199B00(&v, 0);
    }
    if (f78 != 0) {
        float gx = D_002A789C.x;
        S_151F80_Vec *p84;
        {
            S_151F80_Vec *p = &f94;
            p->x = gx; p->y = D_002A78A0; p->z = D_002A78A4; p->w = D_002A78A8;
        }
        p84 = &f84;
        p84->x = D_002A789C.x; p84->y = D_002A78A0; p84->z = D_002A78A4; p84->w = D_002A78A8;
        fc4 = 0;
        p84->x = D_002A789C.x; p84->y = D_002A78A0; p84->z = D_002A78A4; p84->w = D_002A78A8;
        {
            S_151F80_Vec *p = &f94;
            p->x = D_002A789C.x; p->y = D_002A78A0; p->z = D_002A78A4; p->w = D_002A78A8;
        }
        {
            S_151F80_Vec line[2];
            line[0] = f120;
            line[1] = func_00016E40();
            fc8 = line[0];
            f78->func_0014AC30(line, 0);
            f78->func_00133ED0();
            f78->func_00133F10(0);
        }
        if (fc4 != 0) {
            S_151F80_Mat mat2;
            v = *(S_1528D0_Vec *)&f84;
            if (f60 != 0) {
                S_151F80_Mat mat;
                v.y = (D_00276288 - f34) + v.y;
                AsmIdentityMatrix(mat.m);
                mat2 = mat;
                mat2.m[3] = v.x;
                mat2.m[7] = v.y;
                mat2.m[11] = v.z;
                {
                    S_151F80_Vec *p = &f68;
                    p->x = D_002A789C.x; p->y = D_002A78A0; p->z = D_002A78A4; p->w = D_002A78A8;
                }
                f60->v31(mat2.m);
                f60->func_00133F10(0);
            }
            {
                S_151F80_Vec t, out;
                if (f60->fa7 & 0x20) {
                    S_151F80_Vec dst;
                    t = f68;
                    if (AsmSqrtF(fe8.x * fe8.x + fe8.y * fe8.y + fe8.z * fe8.z) > D_002756DC
                        && func_00011170(&t) > D_002756DC) {
                        S_151F80_Vec *fe8p;
                        func_00150890(&out, &t);
                        fe8p = &fe8;
                        func_00021330(&dst, fe8p, &out);
                        *fe8p = dst;
                        v.x -= t.x;
                        v.y -= t.y;
                        v.z -= t.z;
                        mat2.m[3] = v.x;
                        mat2.m[7] = v.y;
                        mat2.m[11] = v.z;
                        {
                            S_151F80_Vec *p = &f68;
                            p->x = D_002A789C.x; p->y = D_002A78A0; p->z = D_002A78A4; p->w = D_002A78A8;
                        }
                        f60->v31(mat2.m);
                        f60->func_00133F10(0);
                    }
                    if (f60->fa7 & 0x20) {
                        t = f68;
                        if (func_00011170(&fe8) > D_002756DC && func_00011170(&t) > D_002756DC) {
                            S_151F80_Vec *fe8p;
                            func_00150890(&out, &t);
                            fe8p = &fe8;
                            func_00021330(&dst, fe8p, &out);
                            *fe8p = dst;
                            v.x -= t.x;
                            v.y -= t.y;
                            v.z -= t.z;
                            v.y = v.y - (D_00276288 - f34);
                            f2c->f1a4->f4->func_00199600(v);
                            f2c->f1a4->func_00132D20();
                        }
                    }
                }
            }
        }
    }
}

void C_00151F80::func_001528D0(float dt)
{
    ffc -= D_00286CAC;
    if (ff8 == D_00275544 && f100 == D_00275544) {
        ff8 = fe8.x * -10.0f;
        f100 = fe8.z * -10.0f;
    }
    S_151F80_Vec *pos = &fe8;
    *pos = S_151F80_Vec(dt * ff8, dt * ffc, dt * f100) + *pos;
    S_151F80_Vec v = fe8;
    v.y = 0.0f;
    float sq = v.x * v.x + v.z * v.z;
    float len = AsmSqrtF(sq);
    if (len > D_002A7870) {
        func_00150890(&v, &v);
        v = v * D_002A7870;
        fe8.x = v.x;
        fe8.z = v.z;
    }
    if (fe8.y > D_002A786C) {
        fe8.y = D_002A786C;
    }
    S_1528D0_Vec q;
    if (f2c == 0) {
        q.x = D_002A789C.x;
        q.y = D_002A78A0;
        q.z = D_002A78A4;
        q.w = D_002A78A8;
    } else {
        f2c->f1a4->f4->func_00199B00(&q, 0);
    }
    S_151F80_Vec d = fe8 * dt;
    S_1528D0_Vec p = q;
    p.x += d.x;
    p.y += d.y;
    p.z += d.z;
    f2c->f1a4->f4->func_00199600(p);
    f2c->f1a4->func_00132D20();
}

void C_00151F80::func_00152BA0(void)
{
    int i;

    if (f574 != 10) {
        if (f54 < 1.0f) {
            return;
        }
    }
    if (f574 == 10) {
        if (f54 < 1.5f) {
            return;
        }
    }
    f54 = 0.0f;
    if (f574 <= 0 && f578 <= 0) {
        f574 = 0;
        f578 = 0;
        return;
    }
    for (i = 0; i < 10; i++) {
        if (slots[i].f0 == 0) {
            break;
        }
    }
    if (slots[i].f0 == 0) {
        f57c = 1;
        if (f574 > 5) {
            f2c->f1a4->func_00166C50(&D_00286CB0);
            f580 = 0.5f;
        } else {
            f2c->f1a4->func_00166C50(&D_00286CB0);
            f2c->f1a4->f34 = f580;
            f580 += 0.5f;
        }
        f574--;
        f6d4++;
        slots[i].fC = 0;
        slots[i].f0 = 1;
        slots[i].f4 = 1;
        S_151F80_Vec v1, v2, v3;
        func_00150900(&v2, &v3);
        v1 = S_151F80_Vec(1.5f, -2.0f, 6.0f);
        v1 = f2c->f1a4->f4->func_00197F70(&v1.x);
        fe0->v6();
        fe0->v30();
        fe0->func_0011CA60(v1);
        fe4 = func_001DC974();
        if (D_002B9120->f528 != 0) {
            D_002B9120->f528->func_00017FA0(&v1, &v2);
        }
    }
    f598->v5(0);
}

