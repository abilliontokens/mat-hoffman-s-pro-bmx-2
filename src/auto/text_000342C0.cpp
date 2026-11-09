/* 6 functions from 0x000342C0 to 0x00034EF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;
extern float D_00275600;

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
    Vec4() {}
    Vec4(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

static __forceinline Vec4 Vec3Sub(Vec4 a, Vec4 b)
{
    Vec4 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}

static __forceinline Vec4 Vec3Scale(Vec4 a, float s)
{
    Vec4 r;
    r.x = a.x * s;
    r.y = a.y * s;
    r.z = a.z * s;
    return r;
}

static __forceinline Vec4 Vec3Add(Vec4 a, Vec4 b)
{
    Vec4 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

struct S_342C0_1D4 {
    virtual void v0(int a, const char *s) = 0;
    virtual void v1() = 0;
    virtual void v2(int a, int b, const char *s) = 0;
    virtual void v3(int a, int b, const char *s) = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    void func_001D35E0();
    S_342C0_1D4 *func_001D1BB0();
};
struct S_342C0_2E0 {
    int f0;
    int f4;
    char pad8[0x2B8];
    void *f2c0;
    char pad2C4[0x38];
    void *f2fc;
};
struct S_342C0_Mgr {
    char pad0[4];
    void *f4;
    char pad8[0x228];
    u8 f230;
    char pad231[3];
    int f234;
    char pad238[0xA8];
    S_342C0_2E0 *f2e0;
};
extern S_342C0_Mgr *D_002A8490;
extern char D_00276C90[];
extern char D_00276C84[];
extern char D_00276C74[];
extern char D_00276C64[];
extern char D_00276C58[];
extern char D_00276C48[];
extern char D_00276C08[];
extern void *D_002EFE08;
extern void *D_002F07B8;
extern void *D_002F0670;
extern void *D_002BEAAC;
extern void *D_002A829C;
struct S_342C0_FE08 {
    S_342C0_FE08 *func_0018C960(int a);
    void func_0018F980(int a, const char *s);
};
struct C_000342C0 {
    void **vtbl;
    char pad4[0x60];
    void *f64;
    void *f68;
    char pad6C[0x24];
    int f90;
    char pad94[0xc4];
    void *f158;
    char pad15C[0x5C];
    void *f1b8;
    char pad1BC[0x8];
    void *f1c4;
    char pad1C8[0xC];
    void *f1d4;
    void func_001577A0(void *p, int n);
    void func_00012140(void);
    void func_001D3F50(void);
    void func_00033680(void);
    void func_000342C0();
};

/* element of the table reached through arg4->f5a4, 0x48 bytes */
struct S_00034A40_Elem {
    char pad0[0x38];
    int f38, f3c, f40;
    char pad44[4];
};

struct S_00034A40_Tab {
    char pad0[0x5a4];
    S_00034A40_Elem *f5a4;
};

/* object held in C_00034A40::f28 */
struct S_00034A40_28 {
    char pad0[0x1a4];
    void *f1a4;
    void *f1ac;
};

  struct S_34A40_Cam {
      void func_00198390();
      void func_001983A0();
      void func_0019A8C0(void *a, void *b);
      void func_00164820(void *a);
  };
struct S_34A40_VBase {
    virtual void vb0() = 0;
    virtual void vb1() = 0;
    virtual void vb2() = 0;
    virtual void vb3() = 0;
      virtual void vb4() = 0;
      virtual void vb5() = 0;
      virtual void vb6() = 0;
  };
struct S_34A40_VObj : virtual S_34A40_VBase {
    S_34A40_Cam *f4;
};
struct S_34A40_Gfx {
    int f0;
    int f4;
    void func_00194E60(Vec4 v);
    void func_00194EB0(Vec4 v);
    void func_00194F60(Vec4 v);
    void func_00194F90(float f);
};
struct S_34A40_Owner { char pad0[0x5c]; S_34A40_Gfx *f5c; };
static __forceinline void Cross_34A40(Vec4 *out, const Vec4 *a, const Vec4 *b)
{
    AsmVec3Cross(&out->x, &a->x, &b->x);
}

struct C_00034A40 {
    char pad0[0x24];
    void *f24;
    S_00034A40_28 *f28;
    void *f2c;
    char pad30[4];
    S_34A40_Owner *f34;
    float f38;
    void func_00034A40(void *a1, void *a2, void *a3, S_00034A40_Tab *a4, float a5, int a6, int a7, int a8, int a9);
};

/* object behind D_002EFDB8 (its vtable slots 7 and 8 are called by func_00034A40) */
struct S_00034A40_G {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int);
    virtual void v8();
};

extern int *D_002EFDB8;
extern char D_00276D54[];
extern float D_00275AEC;
extern float D_0027653C;
extern double D_002766C8;
extern float D_00276220;
extern float D_00276D50;
extern float D_002A14E4[4];
/* the thiscall callees used by func_00034A40 (all take their object in ecx) */
struct S_00034A40_Obj {
    void func_00198390();
    void func_001983A0();
    void func_0019A8C0(void *a, void *b);
    void func_00164820(void *a);
};
void func_00198390(void *p);
void func_001983A0(void *p);
void func_0019A8C0(void *a, void *b);
int func_001E8AF0(void *a, void *b);
void func_00164820(void *a, void *b);
void func_00034820(void *a, void *b);
void func_00194E60(Vec4 v);
void func_00194F90(float f);
void func_00194EB0(Vec4 v);
void func_00194F60(Vec4 v);
void *func_001E8A44(int size);

struct C_00034890 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    C_00034890* func_00034890(void);
};


/* types for the full func_000342C0 transcription */
struct S_342C0_1D4B {
    virtual void v0(const char *s, int a) = 0;
    virtual void v1() = 0;
    virtual void v2(const char *s, int a, int b) = 0;
    virtual void v3(const char *s, int a, int b) = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    void func_001D35E0();
    S_342C0_1D4B *func_001D1BB0();
};
struct S_342C0_Self {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37();
};
struct S_342C0_F1B8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(const char *s, int a, int b, int c, int d);
    void *func_001CF740(void *a, void *b, int c);
};
struct S_342C0_F158 {
    S_342C0_F158 *func_001C3E50(int a);
    void func_001C3EA0(int a);
    void func_001C4A70();
    void func_001C4C30();
    void func_001C4D50(int a);
};
struct S_342C0_F2FC {
    void func_000951B0(int a);
    void func_00095200(int a);
};
struct S_342C0_F1C4 {
    void func_001046B0();
};
struct S_342C0_Item {
    char pad0[0x958];
    float f958;
};
struct S_342C0_F4E0 {
    char pad0[0x1a8];
    S_342C0_Item *arr[1];
};
struct S_342C0_F64 {
    char pad0[0x4c0];
    void *f4c0;
    char pad4C4[0x1c];
    S_342C0_F4E0 *f4e0;
};
struct S_342C0_Game {
    void func_0013C1D0(int a);
    int func_0013D780(void *p, int a, int b, int c, int d, int e, int f, int g);
    void func_0013B260(int a);
    void func_0013B280(int a);
    void func_0013DFF0(void *p, int a);
};
struct S_342C0_A829C {
    void func_001616F0();
};
struct S_342C0_FDB8 {
    char pad0[0x30];
    int f30;
};
struct S_342C0_F07B8 {
    char pad0[8];
    int f8;
};
extern char D_002A60B0[];
extern char D_002A5870[];
extern char D_002A5348[];
extern char D_002A47F0[];
extern char D_002A48F8[];
extern char D_002A5FA8[];
extern char D_00275678[];
void func_00012140(void);
void func_001E8920(char *dst, const char *src, int n);
int func_001DC974(void);
void func_001E891B(void *p);
void func_001ADCC0(char *buf, int size, const char *fmt, ...);

extern int D_00020000;
void C_000342C0::func_000342C0()
{
    struct F4 { char pad0[0xb4]; S_342C0_1D4B *fB4; };
    C_000342C0 *volatile self;
    int len, n;
    char buf[0x104];
    void *p;

    self = this;
    D_002A8490->f234 = 1;
    p = func_001E8A44(0x54);
    self->f1d4 = p ? ((S_342C0_1D4B *)p)->func_001D1BB0() : 0;
    ((S_342C0_1D4B *)self->f1d4)->v0(D_00276C90, 0);
    ((S_342C0_1D4B *)self->f1d4)->v5();
    p = func_001E8A44(0x188);
    D_002EFE08 = p ? ((S_342C0_FE08 *)p)->func_0018C960(1) : 0;
    ((S_342C0_FE08 *)D_002EFE08)->func_0018F980(0, D_00276C84);
    self->func_001577A0(D_002EFE08, -1);
    self->f68 = D_002A8490->f2e0->f2c0;
    ::func_00012140();
    self->f90 = D_002A8490->f2e0->f0;
    self->func_001D3F50();
    ((S_342C0_Self *)self)->v29();
    self->func_00033680();
    if (D_002A8490->f2e0->f4 != 0xa)
        func_001ADCC0(buf, 0x104, D_00276C74, D_002A5870);
    else
        func_001ADCC0(buf, 0x104, D_00276C64, D_002A5870, self->f90);
    ((S_342C0_Game *)D_002BEAAC)->func_0013C1D0((int)&D_00020000);
    if (((S_342C0_Game *)D_002BEAAC)->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0))
        ((S_342C0_Game *)D_002BEAAC)->func_0013B260(0);
    ((S_342C0_Self *)self)->v31();
    len = 0x103;
    n = AsmMinI(len, 9);
    func_001E8920(D_002A60B0, D_00276C58, n);
    D_002A60B0[n] = 0;
    p = func_001E8A44(0x70);
    self->f158 = p ? ((S_342C0_F158 *)p)->func_001C3E50(1) : 0;
    ((S_342C0_F158 *)self->f158)->func_001C3EA0(self->f90);
    ((S_342C0_F158 *)self->f158)->func_001C4A70();
    ((S_342C0_F158 *)self->f158)->func_001C4C30();
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    ((S_342C0_Self *)self)->v36();
    ((S_342C0_Self *)self)->v37();
    if (self->f1d4)
        ((S_342C0_1D4B *)self->f1d4)->v3(D_00276C08, 0x19c, 0x10);
    if (self->f1d4)
        ((S_342C0_1D4B *)self->f1d4)->v2(D_00276C08, 0x140, 0x187);
    ((S_342C0_Game *)D_002BEAAC)->func_0013DFF0(buf, 1);
    if (D_002A8490->f2e0->f4)
        ((S_342C0_Game *)D_002BEAAC)->func_0013B280(1);
    ((S_342C0_Game *)D_002BEAAC)->func_0013B260(0);
    ((S_342C0_FDB8 *)D_002EFDB8)->f30 = 1;
    ((S_342C0_F07B8 *)D_002F07B8)->f8 = 1;
    ::func_00012140();
    ((S_342C0_Self *)self)->v33();
    if (D_002A8490->f230 & 0x20)
        ((S_342C0_Self *)D_002F0670)->v32();
    ((S_342C0_1D4B *)((F4 *)D_002A8490->f4)->fB4)->v6();
    ((S_342C0_F158 *)self->f158)->func_001C4D50(0x3e8);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    if (D_002A8490->f2e0->f4 == 0xa)
        ((S_342C0_F2FC *)D_002A8490->f2e0->f2fc)->func_000951B0(0x13);
    else
        ((S_342C0_F2FC *)D_002A8490->f2e0->f2fc)->func_00095200(0x13);
    ((S_342C0_A829C *)D_002A829C)->func_001616F0();
    if (self->f1d4) {
        int t0 = func_001DC974();
        int t1 = func_001DC974();
        if (t1 - t0 > 0x20)
            ((S_342C0_1D4B *)self->f1d4)->v6();
        if (self->f1d4) {
            ((S_342C0_1D4B *)self->f1d4)->func_001D35E0();
            func_001E891B(self->f1d4);
        }
        self->f1d4 = 0;
        ((S_342C0_Self *)self)->v27();
    }
    if (self->f1c4)
        ((S_342C0_F1C4 *)self->f1c4)->func_001046B0();
    if (((S_342C0_F64 *)self->f64)->f4e0) {
        for (int i = 0; i < self->f90; i++)
            ((S_342C0_F64 *)self->f64)->f4e0->arr[i]->f958 = 0.2f;
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    p = func_001E8A44(0x20c);
    self->f1b8 = p ? ((S_342C0_F1B8 *)p)->func_001CF740(((F4 *)D_002A8490->f4)->fB4, ((S_342C0_F64 *)self->f64)->f4c0, 1) : 0;
    ((S_342C0_F1B8 *)self->f1b8)->v4(D_00276C48, 1, 1, 0, 0);
    ((S_342C0_1D4B *)((F4 *)D_002A8490->f4)->fB4)->v6();
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
}

void func_000347F0(char *param_1)
{
  int func_001E8D25(...);
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    cVar2 = func_001E8D25((int)*param_1);
    *param_1 = cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

void func_00034820(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_00034890* C_00034890::func_00034890(void) {
    unk0 = -1;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    return this;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void func_000348B0(Vec4 *out, float t, Vec4 p0, Vec4 p1, Vec4 p2, Vec4 p3)
{
    float t2 = t * t;
    float t3 = t * t2;
    float t6 = t3 + t3;
    float k = t2 * 3.0f;
    float a = (t6 - k) + D_00275460;
    float b = k - t6;
    float c = (t3 - D_00275600 * t2) + t;
    float d = t3 - t2;
    Vec4 m0 = Vec3Scale(Vec3Sub(p2, p0), D_002755E8);
    Vec4 m1 = Vec3Scale(Vec3Sub(p3, p1), D_002755E8);
    Vec4 n1 = Vec3Scale(m1, d);
    Vec4 n0 = Vec3Scale(m0, c);
    Vec4 q2 = Vec3Scale(p2, b);
    _ReadWriteBarrier();
    out->w = 1.0f;
    _ReadWriteBarrier();
    Vec4 q1 = Vec3Scale(p1, a);
    Vec4 s = Vec3Add(q1, q2);
    Vec4 u = Vec3Add(s, n0);
    out->x = u.x + n1.x;
    out->y = u.y + n1.y;
    out->z = u.z + n1.z;
}
void C_00034A40::func_00034A40(void *a1, void *a2, void *a3, S_00034A40_Tab *a4, float a5, int a6, int a7, int a8, int a9)
{
    Vec4 v54, v24, v64, v34, tmp, v74;
    S_00034A40_Elem *e;
    int e3[3];
    int ex, ey, ez;
    int m;
    float t;

    v54.x = v54.y = v54.z = 0.0f; v54.w = 1.0f;
    v24.x = v24.y = v24.z = 0.0f; v24.w = 1.0f;
    v64.x = v64.y = v64.z = 0.0f; v64.w = 1.0f;
    v34.x = v34.y = v34.z = 0.0f; v34.w = 1.0f;
    v74.x = v74.y = v74.z = 0.0f; v74.w = 1.0f;

    if (a1 == 0 && a3 == 0)
        return;

    ((S_00034A40_G *)D_002EFDB8)->v7(1);
    ((S_00034A40_G *)D_002EFDB8)->v8();

    e = &a4->f5a4[a6];
    e3[0] = e->f38;
    e3[1] = e->f3c;
    e3[2] = e->f40;
    ex = e3[0];
    ey = e3[1];
    ez = e3[2];

    if (f24 != 0) {
        ((S_00034A40_Obj *)f24)->func_00198390();
        if (f2c != 0)
            ((S_00034A40_Obj *)f2c)->func_00198390();
        f24 = 0;
    } else if (f28 != 0) {
        ((S_34A40_VObj *)f28->f1a4)->f4->func_00198390();
        ((S_34A40_VObj *)f28->f1a4)->vb4();
        f28 = 0;
    }
    if (a1 != 0) {
        f24 = a1;
        ((S_00034A40_Obj *)f24)->func_001983A0();
        ((S_00034A40_Obj *)f24)->func_0019A8C0(&v34, &v74);
        if (func_001E8AF0((char *)f24 + 0x28, D_00276D54))
            v34.z -= D_00275AEC;
        *(int *)((char *)f24 + 0x68) = 0;
        f28 = (S_00034A40_28 *)a3;
        ((S_00034A40_Obj *)*(void **)((char *)f28->f1a4 + 4))->func_001983A0();
        ((S_00034A40_Obj *)*(void **)((char *)f28->f1a4 + 4))->func_0019A8C0(&v34, &v74);
        ((S_00034A40_Obj *)f28->f1a4)->func_00164820(*(void **)((char *)f28->f1ac + 4));
    } else {
        f28 = (S_00034A40_28 *)a3;
        ((S_00034A40_Obj *)f28->f1a4)->func_001983A0();
    }
    if (a2 != 0) {
        f2c = a2;
        ((S_00034A40_Obj *)f2c)->func_001983A0();
    } else {
        f2c = 0;
    }
    m = a7;
    if (m > a8) {
        if (m > a9) m = a7; else m = a9;
    } else {
        if (a8 > a9) m = a8; else m = a9;
    }
    {
        int best;
        if (ey > ez)
            best = (ey > ex) ? ey : ex;
        else
            best = (ez > ex) ? ez : ex;
        t = (float)((m > best) ? m : best);
    }
    t = t * D_0027653C;
    t = t * D_002766C8;
    v34.y = a5;
    v54.x = v34.x;
    v54.y = D_00276220 * t + a5;
    v54.z = v34.z - D_00276D50 * t;
    tmp.x = 0.0f;
    tmp.y = a5 - v54.y;
    tmp.z = v34.z - v54.z;
    tmp.w = 1.0f;
    v24 = tmp;
    float d = AsmSqrtF(v24.x * v24.x + v24.y * v24.y + v24.z * v24.z);
    this->f38 = d;
    func_00034820(&v24.x, &v24.x);
    Cross_34A40(&v64, &v24, (const Vec4 *)D_002A14E4);
    this->f34->f5c->func_00194E60(v54);
    this->f34->f5c->f4 = 0;
    this->f34->f5c->func_00194F90(60.0f);
    this->f34->f5c->func_00194EB0(v24);
    this->f34->f5c->func_00194F60(v64);
}

