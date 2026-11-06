/* 3 functions from 0x0003B0A0 to 0x0003BC90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0003BB60 {
 void func_0003BB60();
 void func_0002F450(int);
 void func_000A4500(int, int);
 void func_000321C0();
 void func_0003AD50();
   void func_001983A0();
  void func_00198390();
   void func_000361F0(int);
  void func_0003B0A0();
};
struct V_0003BB60 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); };
struct Copy_0003BB60 { int a,b,c,d; };
extern char D_00276F00[];
extern int func_001E8AF0(const void*, const void*);
struct C_0003BC70 {
    undefined4 func_0003BC70(byte param_1);
};


extern char D_00276F08[];
extern char D_00276D54[];

#include "asm_helpers.h"

struct Vec4_3B0A0 {
    float x, y, z, w;
    Vec4_3B0A0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    Vec4_3B0A0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};
struct S_3B0A0_Gfx {
    int f0;
    int f4;
    void func_00194E60(Vec4_3B0A0 v);
    void func_00194EB0(Vec4_3B0A0 v);
    void func_00194F60(Vec4_3B0A0 v);
    void func_00194F90(float f);
};
struct S_3B0A0_Owner { char pad0[0x5c]; S_3B0A0_Gfx *f5c; };
struct S_3B0A0_28 { char pad0[0x1a4]; void *f1a4; void *f1ac; };
struct S_3B0A0_Elem { char pad0[0x38]; int f38, f3c, f40, f44; };
struct S_3B0A0_Obj {
    char pad0[0x24];
    void *f24;
    S_3B0A0_28 *f28;
    void *f2c;
    char pad30[4];
    S_3B0A0_Owner *f34;
    float f38;
    void func_00198390();
    void func_001983A0();
    void func_0019A8C0(void *a, void *b);
    void func_00034A40(void *a1, void *a2, void *a3, void *a4, float a5, int a6, int a7, int a8, int a9);
};
struct S_3B0A0_Cam { void func_00198390(); };
struct S_3B0A0_VBase {
    virtual void vb0() = 0;
    virtual void vb1() = 0;
    virtual void vb2() = 0;
    virtual void vb3() = 0;
    virtual void vb4() = 0;
};
struct S_3B0A0_VObj : virtual S_3B0A0_VBase { S_3B0A0_Cam *f4; };
struct S_3B0A0_G {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int);
    virtual void v8();
};
extern S_3B0A0_G *D_002EFDB8;
extern float D_00275AEC;
extern float D_0027653C;
extern double D_002766C8;
extern float D_00276220;
extern float D_00276D50;
extern float D_002A14E4[4];
void func_00034820(void *a, void *b);
static __forceinline char *Get_3B0A0(int *p, int i)
{
    int n = p[0];
    int *items = (int *)p[1];
    if (n > 0 && items != 0 && i < n)
        return (char *)items[i];
    return 0;
}
void C_0003BB60::func_0003B0A0()
{
    if (func_001E8AF0(*(char **)(*(char **)((char *)this + 0x64) + 0x5a4) + *(int *)((char *)this + 0x47c) * 72, D_00276F08)) {
        char *mgr = *(char **)((char *)this + 0x64);
        int idx = *(int *)((char *)this + 0x47c);
        char *arr = *(char **)(mgr + 0x5a4);
        int sel = *(int *)(arr + idx * 72 + 0x44) + *(int *)((char *)this + 0x480);
        char *e1 = Get_3B0A0((int *)(mgr + 0x5a8), sel);
        char *e2 = Get_3B0A0((int *)(mgr + 0x5a8), sel);
        char *e3 = Get_3B0A0((int *)(mgr + 0x5a8), sel);
        char *g1 = Get_3B0A0((int *)((char *)this + 0x5c8), sel + 1);
        char *g2 = Get_3B0A0((int *)((char *)this + 0x5c8), sel);
        int a9 = *(int *)(e1 + 0x35c);
        int a8 = *(int *)(e2 + 0x358);
        int a7 = *(int *)(e3 + 0x360);
        float a5 = *(float *)((char *)this + 0x440);
        S_3B0A0_Obj *o = (S_3B0A0_Obj *)*(void **)((char *)this + 0x540);
        Vec4_3B0A0 v54, v24, v64, v34, v74;

        if (g2 == 0)
            return;
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
        int ex = *(int *)(arr + idx * 72 + 0x38);
        int ey = *(int *)(arr + idx * 72 + 0x3c);
        int ez = *(int *)(arr + idx * 72 + 0x40);
        if (o->f24 != 0) {
            ((S_3B0A0_Obj *)o->f24)->func_00198390();
            if (o->f2c != 0)
                ((S_3B0A0_Obj *)o->f2c)->func_00198390();
            o->f24 = 0;
        } else if (o->f28 != 0) {
            ((S_3B0A0_VObj *)o->f28->f1a4)->f4->func_00198390();
            ((S_3B0A0_VObj *)o->f28->f1a4)->vb4();
            o->f28 = 0;
        }
        o->f24 = g2;
        ((S_3B0A0_Obj *)g2)->func_001983A0();
        ((S_3B0A0_Obj *)g2)->func_0019A8C0(&v34, &v74);
        if (func_001E8AF0((char *)g2 + 0x28, D_00276D54))
            v34.z -= D_00275AEC;
        if (g1 != 0) {
            o->f2c = g1;
            ((S_3B0A0_Obj *)g1)->func_001983A0();
        } else {
            o->f2c = 0;
        }
        int m = a7;
        if (m > a8) {
            if (m > a9) m = a7; else m = a9;
        } else {
            if (a8 > a9) m = a8; else m = a9;
        }
        int best;
        if (ey > ez)
            best = (ey > ex) ? ey : ex;
        else
            best = (ez > ex) ? ez : ex;
        float t = (float)((m > best) ? m : best);
        t = t * D_0027653C;
        t = t * D_002766C8;
        v34.y = a5;
        v54.x = v34.x;
        v54.y = D_00276220 * t + a5;
        v54.z = v34.z - D_00276D50 * t;
        v24 = Vec4_3B0A0(0.0f, a5 - v54.y, v34.z - v54.z, 1.0f);
        float d = AsmSqrtF(v24.x * v24.x + v24.y * v24.y + v24.z * v24.z);
        o->f38 = d;
        func_00034820(&v24.x, &v24.x);
        AsmVec3Cross(&v64.x, &v24.x, D_002A14E4);
        o->f34->f5c->func_00194E60(v54);
        o->f34->f5c->f4 = 0;
        o->f34->f5c->func_00194F90(60.0f);
        o->f34->f5c->func_00194EB0(v24);
        o->f34->f5c->func_00194F60(v64);
    } else if (func_001E8AF0(*(char **)(*(char **)((char *)this + 0x64) + 0x5a4) + *(int *)((char *)this + 0x47c) * 72, D_00276F00)) {
        char *mgr = *(char **)((char *)this + 0x64);
        int idx = *(int *)((char *)this + 0x47c);
        void *a3 = *(int *)((char *)this + 0x480) ? *(void **)((char *)this + 0x594) : *(void **)((char *)this + 0x590);
        char *arr = *(char **)(mgr + 0x5a4);
        int sel = *(int *)(arr + idx * 72 + 0x44) + *(int *)((char *)this + 0x480);
        char *g1 = Get_3B0A0((int *)(mgr + 0x5a8), sel);
        char *g2 = Get_3B0A0((int *)(mgr + 0x5a8), sel);
        char *g3 = Get_3B0A0((int *)(mgr + 0x5a8), sel);
        S_3B0A0_Obj *o = (S_3B0A0_Obj *)*(void **)((char *)this + 0x540);

        o->func_00034A40(0, 0, a3, mgr, *(float *)((char *)this + 0x440), idx,
                         *(int *)(g3 + 0x360), *(int *)(g2 + 0x358), *(int *)(g1 + 0x35c));
    } else {
        return;
    }
}

void C_0003BB60::func_0003BB60() {
 char* p=(char*)this;
 *(Copy_0003BB60*)(*(char**)(p+0x24)+0x170)=*(Copy_0003BB60*)(p+0x4ac);
 (*(C_0003BB60**)(p+0x44))->func_0002F450(6);
 ((V_0003BB60*)this)->v40();
 (*(C_0003BB60**)(*(char**)(p+0x64)+0x4e0))->func_000A4500(0,0);
 func_000321C0(); func_0003AD50();
 (*(V_0003BB60**)(p+0x550))->v4();
 *(int*)(p+0x490)=0; *(int*)(p+0x494)=0;
 (*(V_0003BB60**)(p+0x560))->v4();
 *(int*)(p+0x284)=0;
 (*(V_0003BB60**)(p+0x58c))->v6();
 if(func_001E8AF0(*(char**)(*(char**)(p+0x64)+0x5a4)+*(int*)(p+0x47c)*72,D_00276F00)) {
 if(*(int*)(p+0x480)==0)
 (*(C_0003BB60**)(*(char**)(*(char**)(p+0x590)+0x1a4)+4))->func_001983A0();
 else
 (*(C_0003BB60**)(*(char**)(*(char**)(p+0x594)+0x1a4)+4))->func_001983A0();
 }
 func_000361F0(1);
}

undefined4 C_0003BC70::func_0003BC70(byte param_1)
{
  int func_000380B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000380B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
