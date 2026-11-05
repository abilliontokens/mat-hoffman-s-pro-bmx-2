/* 5 functions from 0x0002AAA0 to 0x0002B1C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern char D_002766F0[];
extern char D_002766E0[];
extern char D_002766D0[];

struct C_00168B90 {
    int func_00168B90(const char *name, float *out);
    int func_00168A10(const char *name, int *out);
};

struct C_0002B140 {
    float unk0;
    int unk4;
    float unk8;
    void func_0002B140(C_00168B90 *param_1);
};

struct C_0002B1A0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int func_0002B1A0(void);
};

struct C_0002B180 {
    void func_0002B180(void);
};

struct Vec4_0002AF90 {
    float x, y, z, w;
    __forceinline void Set(const Vec4_0002AF90 *o) { *this = *o; }
    __forceinline Vec4_0002AF90 Sub(const Vec4_0002AF90 *o) const
    {
        Vec4_0002AF90 r;
        r.x = x - o->x;
        r.y = y - o->y;
        r.z = z - o->z;
        r.w = 1.0f;
        return r;
    }
    __forceinline Vec4_0002AF90 Mul(const float &t) const
    {
        Vec4_0002AF90 r;
        r.x = t * x;
        r.y = t * y;
        r.z = t * z;
        r.w = 1.0f;
        return r;
    }
    __forceinline Vec4_0002AF90 Add(const Vec4_0002AF90 *o) const
    {
        Vec4_0002AF90 r;
        r.x = x + o->x;
        r.y = y + o->y;
        r.z = z + o->z;
        r.w = 1.0f;
        return r;
    }
    __forceinline void Lerp(const Vec4_0002AF90 *o, const float &t)
    {
        *this = Sub(o).Mul(t).Add(o);
    }
};

struct S_0002AF90_Node {
    Vec4_0002AF90 func_00197EC0(Vec4_0002AF90 *v);
    void func_00199A70(int a, Vec4_0002AF90 *out);
};

struct S_0002AF90_Obj {
    void func_0014AC30(Vec4_0002AF90 *v, int a);
    void func_00133ED0(void);
    float func_00133F10(int a);
};

extern int D_002B7E5C;
extern Vec4_0002AF90 D_002B7E4C;
extern float D_002A10F0, D_002A10F4, D_002A10F8, D_002A1178;

struct C_0002AF90 {
    char pad0[0x13c];
    Vec4_0002AF90 f13c;
    Vec4_0002AF90 f14c;
    char pad15c[0x1f8 - 0x15c];
    S_0002AF90_Obj *f1f8;
    char pad1fc[0x230 - 0x1fc];
    S_0002AF90_Node *f230;
    void func_0002AF90(void);
};


void C_0002AF90::func_0002AF90(void)
{
    Vec4_0002AF90 v;
    Vec4_0002AF90 *cur;
    Vec4_0002AF90 *tgt;

    if ((D_002B7E5C & 1) == 0) {
        D_002B7E5C |= 1;
        D_002B7E4C.x = 0;
        D_002B7E4C.y = 2.0f;
        D_002B7E4C.z = 0;
        D_002B7E4C.w = 1.0f;
    }
    v = f230->func_00197EC0(&D_002B7E4C);
    tgt = &f14c;
    f230->func_00199A70(0, tgt);
    cur = &f13c;
    tgt->x += v.x;
    tgt->y += v.y;
    tgt->z += v.z;
    if (cur->x == D_002A10F0 && cur->y == D_002A10F4 && cur->z == D_002A10F8) {
        cur->Set(tgt);
    }
    cur->Lerp(tgt, D_002A1178);
    f1f8->func_0014AC30(cur, 0);
    f1f8->func_00133ED0();
    f1f8->func_00133F10(0);
    f13c = f14c;
}

void C_0002B140::func_0002B140(C_00168B90 *param_1) {
    param_1->func_00168B90(D_002766F0, &unk0);
    param_1->func_00168A10(D_002766E0, &unk4);
    param_1->func_00168B90(D_002766D0, &unk8);
}

void C_0002B180::func_0002B180(void)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 8);
  if (*(int *)(in_ECX + 0xc) < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    return;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 4);
  return;
}

int C_0002B1A0::func_0002B1A0(void) {
    return unkC >= unk4;
}

