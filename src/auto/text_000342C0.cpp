/* 6 functions from 0x000342C0 to 0x00034EF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;
extern float D_00275600;

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
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

struct C_000342C0 {
    void **vtbl;
    char pad4[0x64];
    void *f68;
    char pad6C[0x24];
    int f90;
    char pad94[0xc4];
    void *f158;
    char pad15C[0x78];
    void *f1d4;
    void func_000342C0();
};

/* element of the table reached through arg4->f5a4, 0x48 bytes */
struct S_00034A40_Elem {
    char pad0[0x38];
    float f38, f3c, f40;
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

struct C_00034A40 {
    char pad0[0x24];
    void *f24;
    S_00034A40_28 *f28;
    void *f2c;
    char pad30[4];
    void *f34;
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

void func_000348B0(Vec4 *out, float t, Vec4 p0, Vec4 p1, Vec4 p2, Vec4 p3)
{
    float t2 = t * t;
    float t3 = t * t2;
    float a = ((t3 + t3) - t2 * D_002755EC) + D_00275460;
    float b = t2 * D_002755EC - (t3 + t3);
    float c = (t3 - D_00275600 * t2) + t;
    float d = t3 - t2;
    Vec4 m0 = Vec3Scale(Vec3Sub(p2, p0), D_002755E8);
    Vec4 m1 = Vec3Scale(Vec3Sub(p3, p1), D_002755E8);
    Vec4 n1 = Vec3Scale(m1, d);
    Vec4 n0 = Vec3Scale(m0, c);
    Vec4 q2 = Vec3Scale(p2, b);
    Vec4 q1 = Vec3Scale(p1, a);
    Vec4 s = Vec3Add(q1, q2);
    Vec4 u = Vec3Add(s, n0);
    out->x = u.x + n1.x;
    out->y = u.y + n1.y;
    out->z = u.z + n1.z;
    out->w = 1.0f;
}

void C_00034A40::func_00034A40(void *a1, void *a2, void *a3, S_00034A40_Tab *a4, float a5, int a6, int a7, int a8, int a9)
{
    Vec4 v54, v24, v64, v34, v74;
    S_00034A40_Elem *e;
    float ex, ey, ez;

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
    ex = e->f38;
    ey = e->f3c;
    ez = e->f40;

    if (f24 != 0) {
        func_00198390(f24);
        if (f2c != 0)
            func_00198390(f2c);
        f24 = 0;
    } else if (f28 != 0) {
        func_00198390(*(void **)((char *)f28->f1a4 + 4));
        f28 = 0;
    }
    (void)ex; (void)ey; (void)ez;
}

