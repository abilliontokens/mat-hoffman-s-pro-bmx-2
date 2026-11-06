/* 11 functions from 0x001596C0 to 0x0015A660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Scene_1596;
struct Node_1596 {
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
 virtual void set(float);
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
 virtual void enable(int,int);
 char pad4[0x228]; void *xf; void func_0012FE50(float,int);
};
struct Skeleton_1596 { void *func_00198330(char *); };
struct Ref_1596 { int pad; Skeleton_1596 *skeleton; };
struct Item_1596 { char pad0[4]; int type; char pad8[0x50]; Node_1596 *node; char pad5c[0x44]; char name[0x104]; Ref_1596 *ref; };
struct Scene_1596 { char pad0[0x24]; int count; Item_1596 **items; };
struct GlobalItem_1596 { char pad0[0x3c]; Node_1596 *node; char pad40[0x163]; char name[1]; };
struct Global_1596 { char pad0[0x38]; int count; char pad3c[12]; GlobalItem_1596 **items; };
extern Global_1596 *D_002B9134;
char *func_001E8AC0(char *,int);
struct C_0015A4F0 {
    char pad0[0x3C];
    int unk3C;
    void func_0015A4F0(int a0, int a1);
    void func_001A4790(int, int, int, int, int, int, int);
};

struct C_0015A640 {
    undefined4 func_0015A640(byte param_1);
};

#include <string.h>
#include <xmmintrin.h>
extern float D_002874A0, D_00287490, D_00287480;
struct GLV { float x, y, z, w; };
struct GLObj { GLObj *func_00193490(); };
void *func_001E83E8(void *p, unsigned n);
void *func_001E8A44(unsigned n);
void func_001E8920(void *d, void *s, unsigned n);
struct GrindLine {
    GrindLine *func_001594F0();
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    char *unk14;
    char *unk18;
    char *unk1C;
    GLV unk20;
    GLV unk30;
    GLV unk40;
    void *unk50;
    int unk54;
    GLV unk58;
    GLV unk68;
    void *unk78;
    int unk7C;
    int unk80;
};

extern int D_002874B4;

struct GL2;

struct GrindLineManager {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    GrindLine **unk34;
    int unk38;
    void *unk3C;
    void func_001596C0(struct Scene_1596 *scene);
    void func_00159C40(GL2 *g);
    int func_0015A520(void);
    void func_0015A180(void *arg);
    void func_0015A490(char *a1, int a2, int a3);
    int func_0015A540(int a1);
    void func_0015A250(GrindLine *a);
    void func_00157660();
    void func_0015A580(void);
    GrindLine *func_00159E90(char *name, GLV *p0, GLV *p1, char *s2, char *s3, int n);
};

struct C_001596C0_Sub {
    int func_001A4840(void);
    void func_001A4A20(void);
};

struct C_00193870 {
    void func_00193870(GrindLine *a);
};

struct C_00193500 {
    void func_00193500(void);
};

struct V4 { float x, y, z, w; };
struct GL2;
struct Xf { V4 *func_00197F70(V4 *out, V4 *in); };
struct Sh {
    void func_00193950(GL2 *a, V4 *b, V4 *c, int d);
    void func_001938C0(GL2 *g, int a, int b, V4 *c, V4 *d, int e);
};
struct GL2 {
    char pad0[0x20];
    V4 p0;
    V4 p1;
    V4 d;
    char pad50[4];
    Xf *xf;
    V4 s0;
    V4 s1;
    Sh *sh;
};
V4 *func_00159480(V4 *out, V4 *in);
static __forceinline float v3abs(volatile float x) { unsigned int bits = *(volatile unsigned int *)&x & 0x7fffffff; return *(float *)&bits; }
static __forceinline V4 v4(float x, float y, float z) { V4 r; r.x = x; r.y = y; r.z = z; r.w = 1.0f; return r; }
static __forceinline V4 v4sub(const V4 &a, const V4 &b) { return v4(a.x - b.x, a.y - b.y, a.z - b.z); }
static __forceinline V4 v4add(const V4 &a, const V4 &b) { return v4(a.x + b.x, a.y + b.y, a.z + b.z); }
static __forceinline V4 v4scale(const V4 &a, float s) { return v4(a.x * s, a.y * s, a.z * s); }
static inline V4 partialAdd1596(const V4 &a,const V4 &b) { V4 r; r.x=a.x+b.x;r.y=a.y+b.y;r.z=a.z+b.z;return r; }
static inline V4 partialSub1596(const V4 &a,const V4 &b) { V4 r; r.x=a.x-b.x;r.y=a.y-b.y;r.z=a.z-b.z;return r; }
static inline V4 partialScale1596(const V4 &a,float s) { V4 r; r.w=1; r.x=a.x*s;r.y=a.y*s;r.z=a.z*s;return r; }
extern float D_002755E8;
void func_001E891B(void *p);
int func_001EA426(char *a, char *b);


void GrindLineManager::func_00159C40(GL2 * volatile g)
{
    GrindLineManager * volatile self = this;
    V4 center;
    V4 ext;
    V4 tmp;

    center.x = 0.0f;
    center.y = 0.0f;
    center.z = 0.0f;
    center.w = 1.0f;
    ext.x = 0.0f;
    ext.y = 0.0f;
    ext.z = 0.0f;
    ext.w = 1.0f;
    if (g->xf != 0) {
        g->p0 = *g->xf->func_00197F70(&tmp, &g->s0);
        g->p1 = *g->xf->func_00197F70(&tmp, &g->s1);
        g->d = v4sub(g->p1, g->p0);
        center = v4scale(v4add(g->p1, g->p0), D_002755E8);
        ext = v4scale(g->d, D_002755E8);
        func_00159480(&g->d, &g->d);
        ext.x = v3abs(ext.x);
        ext.y = v3abs(ext.y);
        ext.z = v3abs(ext.z);
        self->unk2C++;
        g->sh->func_001938C0(g, self->unk38, 1, &center, &ext, 0);
    }
}

void GrindLineManager::func_0015A180(void *arg)
{
    int i;
    int found;

    if (arg == 0) {
        return;
    }
    found = 0;
    for (i = 0; i < unk24; i++) {
        if (found) {
            break;
        }
        if (unk34[i] == arg) {
            ((C_00193870 *)unk34[i]->unk78)->func_00193870(unk34[i]);
            if (unk34[i]->unk78 != 0) {
                void *x = unk34[i]->unk78;
                ((C_00193500 *)x)->func_00193500();
                func_001E891B(x);
            }
            GrindLine *e = unk34[i];
            if (e != 0) {
                if (e->unk14 != 0) {
                    func_001E891B(e->unk14);
                }
                if (e->unk18 != 0) {
                    func_001E891B(e->unk18);
                }
                if (e->unk1C != 0) {
                    func_001E891B(e->unk1C);
                }
                func_001E891B(e);
            }
            unk34[i] = 0;
            found = 1;
        }
    }
    unk28--;
}

void GrindLineManager::func_0015A250(GrindLine *a)
{
    V4 center;
    V4 ext;
    V4 tmp;

    if (a == 0 || a->unk54 == 0)
        return;
    center.x = 0.0f;
    center.y = 0.0f;
    center.z = 0.0f;
    center.w = 1.0f;
    ext.x = 0.0f;
    ext.y = 0.0f;
    ext.z = 0.0f;
    ext.w = 1.0f;
    *(V4 *)&a->unk20 = *((Xf *)a->unk54)->func_00197F70(&tmp, (V4 *)&a->unk58);
    *(V4 *)&a->unk30 = *((Xf *)a->unk54)->func_00197F70(&tmp, (V4 *)&a->unk68);
    *(V4 *)&a->unk40 = v4sub(*(V4 *)&a->unk30, *(V4 *)&a->unk20);
    center = v4scale(v4add(*(V4 *)&a->unk30, *(V4 *)&a->unk20), D_002755E8);
    ext = v4scale(*(V4 *)&a->unk40, D_002755E8);
    func_00159480((V4 *)&a->unk40, (V4 *)&a->unk40);
    ext.x = v3abs(ext.x);
    ext.y = v3abs(ext.y);
    ext.z = v3abs(ext.z);
    ((Sh *)a->unk78)->func_00193950((GL2 *)a, &center, &ext, 0);
}

void GrindLineManager::func_0015A490(char *a1, int a2, int a3)
{
    int i;

    for (i = 0; i < unk28; i++) {
        if (func_001EA426(a1, unk34[i]->unk14) == 0) {
            unk34[i]->unk7C = a3;
            unk34[i]->unk80 = a2;
        }
    }
}

void C_0015A4F0::func_0015A4F0(int a0, int a1) {
    ((C_0015A4F0*)((char*)this + 64))->func_001A4790(unk3C, 1, a0, a1, 0, 0, 0);
}

int GrindLineManager::func_0015A520(void)
{
    C_001596C0_Sub *sub = (C_001596C0_Sub *)((char *)this + 0x40);
    int r;

    r = sub->func_001A4840();
    if (r == 0) {
        sub->func_001A4A20();
        r = 0;
    }
    return r;
}

int GrindLineManager::func_0015A540(int a1)
{
    int i;

    for (i = 0; i < unk28; i++) {
        GrindLine *e = unk34[i];
        if (e != 0 && e->unk50 != 0) {
            func_0015A250(e);
        }
    }
    return 1;
}

void GrindLineManager::func_0015A580(void)
{
    int i;
    void *x;

    x = unk3C;
    vtbl = &D_002874B4;
    if (x != 0) {
        ((C_00193500 *)x)->func_00193500();
        func_001E891B(x);
    }
    for (i = 0; i < unk28; i++) {
        GrindLine *e = unk34[i];
        if (e != 0) {
            x = e->unk78;
            if (x != 0) {
                ((C_00193500 *)x)->func_00193500();
                func_001E891B(x);
            }
            e = unk34[i];
            if (e != 0) {
                if (e->unk14 != 0) {
                    func_001E891B(e->unk14);
                }
                if (e->unk18 != 0) {
                    func_001E891B(e->unk18);
                }
                if (e->unk1C != 0) {
                    func_001E891B(e->unk1C);
                }
                func_001E891B(e);
            }
        }
    }
    func_001E891B(unk34);
    func_00157660();
}

undefined4 C_0015A640::func_0015A640(byte param_1)
{
  int func_0015A580(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015A580();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

