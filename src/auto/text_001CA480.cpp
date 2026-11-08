/* 15 functions from 0x001CA480 to 0x001CB440, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Sqrt_001CA480(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }

struct S_Vec4Int_1CB320 {
    int x, y, z, w;
};

struct Listener {
    void *vtbl;
    int f4;
    S_Vec4Int_1CB320 f8, f18, f28, f38;
    void func_0001DFE0(void);
    Listener *func_001CB320(void);
};

extern int D_0028ED78;
extern int D_002ABA44, D_002ABA48, D_002ABA4C, D_002ABA50;
extern int D_002ABA64, D_002ABA68, D_002ABA6C, D_002ABA70;
extern int D_002ABA74, D_002ABA78, D_002ABA7C, D_002ABA80;

struct C_001CB120 {
    bool func_001CB120(void);
};

extern int D_0028EC24;
extern int D_0028ECAC;
extern int D_0028ED5C;
extern int D_002F08EC;
extern float D_002755E0;
extern float D_0028B320;
extern char D_002A5EA0[];
void func_001E891B(void *);
void func_001E8390(void *);
void func_0001DFF0(void);
void __stdcall func_0021FC46(int);
void *func_001E8A44(int size);

extern char D_0028ED6C[];
extern char D_002A48F8[];
void func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int __stdcall func_001DCC3C(const char *, unsigned long, unsigned long, void *, unsigned long, unsigned long, void *);
extern "C" int func_001DD603(void);
extern "C" unsigned long __stdcall func_001DD3A1(int, long, long *, unsigned long);
extern "C" int __stdcall func_001DD15A(int, void *, unsigned long, unsigned long *, void *);
extern "C" int __stdcall func_001DD13C(int);
extern "C" int __stdcall func_0022097B(int, void *, unsigned long, int, unsigned long *);

struct Loader_1CB170 {
    char pad0[0x30];
    int unk30;
    int func_001CB170(const char *name, int a1);
};

struct SndEntry_1CB2D0 {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct SndBank_1CB290 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    int f4;
    int f8;
    int fC;
    int f10;
    SndEntry_1CB2D0 *f14;
    SndBank_1CB290 *func_001AC3A0(void);
};

struct XboxSndIf_1CB290 {
    char pad0[0x13C];
    SndBank_1CB290 *f13C;
    void func_001CB290(void);
    void func_001CB2D0(void);
};

struct C_001CB130 {
    void *vtbl;
    int unk4;
    int unk8;
    void func_0001DFF0();
    void *func_001CB130(int flags);
};

struct Quat_1CAF20 {
    float x, y, z, w;
    void Identity() {
        x = y = z = 0.0f;
        w = 1.0f;
    }
    void Reset() {
        w = 1.0f;
        x = y = z = 0.0f;
    }
};

struct Plane_001CA480;
typedef int Ret_001CA480;

struct WaterDisplacement {
    void *vtbl;
    char pad4[0x24];
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    char pad3C[0x18];
    Quat_1CAF20 unk54;
    Quat_1CAF20 unk64;
    Quat_1CAF20 unk74[4];
    Quat_1CAF20 unkB4;
    WaterDisplacement *func_001CAF20();
    Ret_001CA480 func_001CA480(Plane_001CA480 *plane, void *arg1);
    void *func_001CAFA0(int flags);
    void func_00157600(int a0);
    void func_00157660();
};

struct Vec3_001CA480 {
    float x, y, z;
    Vec3_001CA480() {}
    Vec3_001CA480(float a, float b, float c) { x = a; y = b; z = c; }
    Vec3_001CA480 operator+(const Vec3_001CA480 &o) const { return Vec3_001CA480(x + o.x, y + o.y, z + o.z); }
    Vec3_001CA480 operator-(const Vec3_001CA480 &o) const { return Vec3_001CA480(x - o.x, y - o.y, z - o.z); }
    Vec3_001CA480 operator*(float f) const { return Vec3_001CA480(x * f, y * f, z * f); }
};

struct Vec4_001CA480 {
    float x, y, z, w;
    Vec4_001CA480() { x = y = z = 0.0f; w = 1.0f; }
    Vec4_001CA480(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    Vec4_001CA480(const Vec3_001CA480 &v, float d) { x = v.x; y = v.y; z = v.z; w = d; }
};

struct CamV_001CA480 {
    char pad0[0x170];
    Vec3_001CA480 pos;
    char pad17C[4];
    Vec3_001CA480 dir;
    char pad18C[0x1D0 - 0x18C];
    float fov;
    char pad1D4[0x1F8 - 0x1D4];
    float aspect;
    float nearD;
    float farD;
};

struct Cam_001CA480 {
    char pad0[0x170];
    float posx, posy, posz;
    char pad17C[4];
    float dirx, diry, dirz;
    char pad18C[0x1D0 - 0x18C];
    float fov;
    char pad1D4[0x1F8 - 0x1D4];
    float aspect;
    float nearD;
    float farD;
};

struct CamRoot_001CA480 {
    char pad0[4];
    Cam_001CA480 *cam;
};

struct Frustum_001CA480 {
    char padD4_[0xD4];
    Vec4_001CA480 vD4;
    Vec4_001CA480 vE4;
    Vec4_001CA480 vF4;
    char pad104[0x304 - 0x104];
    unsigned int f304;
    unsigned int f308;
};

struct Plane_001CA480 {
    float f0;
    float f4;
};

extern CamRoot_001CA480 *D_002EFDB8;
extern Frustum_001CA480 *D_002F08BC;
extern float D_0028AC40;
float func_0014F600(float a);
int func_001CA360(void *a, void *b, Vec4_001CA480 *p0, Vec4_001CA480 *p1, Vec4_001CA480 *out);

struct WaterObject {
    void *vtbl;
    void *func_001CAFD0(int a0);
    WaterObject *func_001CAFF0(int a0, int a1, int a2);
    void func_00143580(int a0);
    void func_00143540(int a0, int a1, int a2);
    void func_001435D0();
    void *func_001CB070(int flags);
};

struct VCall_1CAFF0 {
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
    virtual void v13();
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
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
};


Ret_001CA480 WaterDisplacement::func_001CA480(Plane_001CA480 *plane, void *arg1)
{
    CamV_001CA480 *cam = (CamV_001CA480 *)D_002EFDB8->cam;
    Vec4_001CA480 A[4];
    Vec4_001CA480 B[2];
    Vec4_001CA480 C[2];
    int ret = 0;
    bool flip = false;
    if (cam->pos.y < plane->f4) flip = true;
    float T = func_0014F600(cam->fov * 0.00872664526f);
    Vec3_001CA480 P = cam->dir * cam->nearD + cam->pos;
    float K = cam->aspect;
    float tr = T * cam->nearD;
    Vec3_001CA480 U = *(Vec3_001CA480 *)&unk64 * tr * K;
    Vec3_001CA480 V = *(Vec3_001CA480 *)&unk54 * tr;
    Vec3_001CA480 t;
    float s;
    float l1, l2, l3, l4;

    t = U + P;
    B[0] = Vec4_001CA480(t.x, t.y, t.z, 1.0f);
    t = P - U;
    C[0] = Vec4_001CA480(t.x, t.y, t.z, 1.0f);
    t = cam->dir * cam->nearD + U - V;
    D_002F08BC->vF4 = Vec4_001CA480(t.x, t.y, t.z, 1.0f);
    D_002F08BC->vF4.w = 1.0f;
    s = 1.0f / ((float)D_002F08BC->f304 - 1.0f);
    D_002F08BC->vD4 = Vec4_001CA480((V.x + V.x) * s, (V.y + V.y) * s, (V.z + V.z) * s, 1.0f);
    s = 1.0f / ((float)D_002F08BC->f308 - 1.0f);
    D_002F08BC->vE4 = Vec4_001CA480(U.x * -2.0f * s, U.y * -2.0f * s, U.z * -2.0f * s, 1.0f);

    Vec3_001CA480 Q = cam->dir * cam->farD + cam->pos;
    float tr2 = cam->farD * T;
    Vec3_001CA480 U2 = *(Vec3_001CA480 *)&unk64 * tr2 * K;
    Vec3_001CA480 V2 = *(Vec3_001CA480 *)&unk54 * tr2;
    Vec3_001CA480 B1 = Q + U2;
    Vec3_001CA480 C1 = Q - U2;
    B[1] = Vec4_001CA480(B1.x, B1.y, B1.z, 1.0f);
    C[1] = Vec4_001CA480(C1.x, C1.y, C1.z, 1.0f);

    int r1 = func_001CA360(arg1, plane, &B[0], &C[0], &A[0]);
    int r2 = func_001CA360(arg1, plane, &B[1], &C[1], &A[1]);
    int r3 = func_001CA360(arg1, plane, &B[0], &B[1], &A[2]);
    int r4 = func_001CA360(arg1, plane, &C[0], &C[1], &A[3]);

    if (r1) {
        *(Vec4_001CA480 *)&unk74[1] = Vec4_001CA480(A[0].x - V.x, A[0].y - V.y, A[0].z - V.z, 1.0f);
        *(Vec4_001CA480 *)&unk74[3] = Vec4_001CA480(A[0].x + V.x, A[0].y + V.y, A[0].z + V.z, 1.0f);
        ret = 1;
    }
    if (r2) {
        *(Vec4_001CA480 *)&unk74[0] = Vec4_001CA480(A[1].x - V2.x, A[1].y - V2.y, A[1].z - V2.z, 1.0f);
        *(Vec4_001CA480 *)&unk74[2] = Vec4_001CA480(A[1].x + V2.x, A[1].y + V2.y, A[1].z + V2.z, 1.0f);
        ret = 1;
    }
    if (r3) {
        Vec3_001CA480 e1 = B1 - cam->pos;
        Vec3_001CA480 e2 = *(Vec3_001CA480 *)&A[2] - cam->pos;
        l2 = AsmSqrtF(e2.z * e2.z + e2.y * e2.y + e2.x * e2.x);
        l1 = AsmSqrtF(e1.z * e1.z + e1.y * e1.y + e1.x * e1.x);
        Vec3_001CA480 w = V2 * (l2 / l1);
        *(Vec4_001CA480 *)&unk74[flip != 0] = Vec4_001CA480(A[2].x - w.x, A[2].y - w.y, A[2].z - w.z, 1.0f);
        *(Vec4_001CA480 *)&unk74[(flip != 0) + 2] = Vec4_001CA480(A[2].x + w.x, A[2].y + w.y, A[2].z + w.z, 1.0f);
        ret = 1;
    }
    if (r4) {
        Vec3_001CA480 e1 = C1 - cam->pos;
        Vec3_001CA480 e2 = *(Vec3_001CA480 *)&A[3] - cam->pos;
        l4 = AsmSqrtF(e2.z * e2.z + e2.y * e2.y + e2.x * e2.x);
        l3 = AsmSqrtF(e1.z * e1.z + e1.y * e1.y + e1.x * e1.x);
        Vec3_001CA480 w = V2 * (l4 / l3);
        *(Vec4_001CA480 *)&unk74[!flip] = Vec4_001CA480(A[3].x - w.x, A[3].y - w.y, A[3].z - w.z, 1.0f);
        *(Vec4_001CA480 *)&unk74[3 - (flip != 0)] = Vec4_001CA480(A[3].x + w.x, A[3].y + w.y, A[3].z + w.z, 1.0f);
        ret = 1;
    }
    return ret;
}

WaterDisplacement *WaterDisplacement::func_001CAF20()
{
    Quat_1CAF20 *p;
    int n;
    func_00157600(1);
    vtbl = (void *)&D_0028EC24;
    unk54.Identity();
    unk64.Identity();
    p = unk74;
    n = 4;
    do {
        p->Identity();
        p++;
    } while (--n);
    unkB4.Reset();
    unk28 = unk2C = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    return this;
}

void *WaterDisplacement::func_001CAFA0(int flags)
{
    vtbl = (void *)&D_0028EC24;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *WaterObject::func_001CAFD0(int a0)
{
    func_00143580(a0);
    vtbl = (void *)&D_0028ECAC;
    return this;
}

WaterObject *WaterObject::func_001CAFF0(int a0, int a1, int a2)
{
    char buf[260];
    strcpy(buf, D_002A5EA0);
    D_002A5EA0[0] = 0;
    func_00143540(a0, 0, 0);
    ((VCall_1CAFF0 *)this)->v31();
    strcpy(D_002A5EA0, buf);
    return this;
}

void *WaterObject::func_001CB070(int flags) {
    vtbl = &D_0028ECAC;
    func_001435D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

extern "C" double __cdecl log10(double);
int func_001CB0A0(int x)
{
    if (x == 0)
        return -10000;
    AsmFloatToInt(log10(x * D_002755E0) * D_0028B320, &x);
    if (x <= -2500)
        return -10000;
    else
        return AsmMinI(0, AsmMaxI(-10000, x));
}

bool C_001CB120::func_001CB120(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0xcc) == 2;
}

void *C_001CB130::func_001CB130(int flags) {
    int p = unk8;
    vtbl = (void *)&D_0028ED5C;
    if (p != 0) {
        func_001E8390((void *)p);
    }
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

extern char D_0000FFFF;
int Loader_1CB170::func_001CB170(const char *name, int a1)
{
    char path[0x104];
    unsigned long read;
    unsigned long out;
    void *buf = 0;
    int hr = 0;
    int h;
    unsigned long size;
    int err;

    func_001ADCC0(path, 0x104, D_0028ED6C, D_002A48F8, name);
    h = func_001DCC3C(path, 0x80000000, 1, 0, 3, 1, 0);
    if (h == -1) {
        err = func_001DD603();
        hr = err > 0 ? ((err & (int)&D_0000FFFF) | 0x80070000) : err;
    }
    if (hr >= 0) {
        size = func_001DD3A1(h, 0, 0, 2);
        func_001DD3A1(h, 0, 0, 0);
        buf = func_001E8A44(size);
        if (!func_001DD15A(h, buf, size, &read, 0)) {
            err = func_001DD603();
            hr = err > 0 ? ((err & (int)&D_0000FFFF) | 0x80070000) : err;
        }
        if (hr >= 0) {
            int dev = unk30;
            hr = func_0022097B(dev, buf, size, a1, &out);
        }
    }
    func_001E891B(buf);
    if (h != -1) {
        func_001DD13C(h);
    }
    return hr;
}

void func_001CB270(void)
{
    func_0021FC46(0);
}

void XboxSndIf_1CB290::func_001CB290(void)
{
    SndBank_1CB290 *p;

    if (f13C != 0) {
        f13C->v2();
    }
    p = (SndBank_1CB290 *)func_001E8A44(0x20);
    p = p != 0 ? p->func_001AC3A0() : 0;
    f13C = p;
    p->v4();
    return;
}

void XboxSndIf_1CB290::func_001CB2D0(void)
{
    SndBank_1CB290 *bank = f13C;
    int i;

    if (bank != 0) {
        for (i = 0; i < bank->f8; i++) {
            bank->f14[i].fC = 0;
            f13C->f14[i].f4 = 0;
            bank = f13C;
        }
    }
}

Listener *Listener::func_001CB320(void)
{
    int *p;

    func_0001DFE0();
    vtbl = &D_0028ED78;
    p = &f8.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &f18.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &f28.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &f38.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    f8.x = D_002ABA44;
    f8.y = D_002ABA48;
    f8.z = D_002ABA4C;
    f8.w = D_002ABA50;
    f18.x = D_002ABA74;
    f18.y = D_002ABA78;
    f18.z = D_002ABA7C;
    f18.w = D_002ABA80;
    f28.x = D_002ABA64;
    f28.y = D_002ABA68;
    f28.z = D_002ABA6C;
    f28.w = D_002ABA70;
    f38.x = D_002ABA44;
    f38.y = D_002ABA48;
    f38.z = D_002ABA4C;
    f38.w = D_002ABA50;
    return this;
}

int __stdcall func_001CB400(int a, int b, int c, int d, int e, int f, int g)
{
    return D_002F08EC != 0;
}

