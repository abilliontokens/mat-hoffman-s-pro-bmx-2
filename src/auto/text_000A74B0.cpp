/* 15 functions from 0x000A74B0 to 0x000A84A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_0027B1A4;
extern int D_0027C1E4;
void *func_001E8A44(int size);
void func_001E891B(void *p);

struct Path_000A8450 {
    void func_001B6590(void *p);
};

struct Node_000A8450 {
    virtual void vf0();
    virtual void vf1(void *p, int flag);
    int f4;
    char pad8[0x17c];
    char f184[0x104];
    Path_000A8450 *f288;
};

struct SlotsR_000A74B0 {
    int a0[10];
    int a28[10];
    int a50[10];
    int a78[10];
    int aA0[10];
    int aC8[10];
    int aF0[10];
    union {
        int a118[10];
        float f118[10];
    };
    int count;
    int f144;
    SlotsR_000A74B0 *func_000A74B0(void);
    int func_000A7570(int state, int arg, int keep);
    void func_000A7650(float t);
};

extern char D_0027C1D8[], D_0027C1CC[], D_0027C1BC[], D_0027C1B0[], D_0027C1A4[], D_0027C194[],
    D_0027C18C[], D_0027C184[], D_0027C178[], D_0027C170[], D_0027C16C[], D_0027C160[],
    D_0027C154[], D_0027C148[], D_0027C140[], D_0027B190[], D_0027C134[];
extern "C" int func_001EA426(const char *a, const char *b);

struct Parse_000A7C30 {
    int func_001B6710(const char *s);
    int func_000A7C30(const char *s);
};

struct Range_000A7650 {
    float lo;
    float hi;
};

struct S_A7FE0_Item;
struct Global_000A7650 {
    char pad0[0x52C];
    Range_000A7650 *f52C;
    char pad530[0x578 - 0x530];
    int f578;
    S_A7FE0_Item **f57c;
};

extern Global_000A7650 *D_002B9120;
extern float D_00276284;

struct Model_000A77C0 {
    void *vtbl;
    int f4;
    void SetType(int t) { f4 = t; }
};

struct Model60_000A77C0 : Model_000A77C0 {
    Model60_000A77C0 *func_001B5790(void);
};

struct Model1B0_000A77C0 : Model_000A77C0 {
    void func_001B5110(void);
};

struct Models_000A77C0 {
    char pad0[0x28];
    Model_000A77C0 **f28;
    void func_000A77C0(int type, int idx);
};

struct GrindElem_000A8360 {
    char b;
    char pad1[0x77];
};

struct GrindTrigger_000A8360 {
    void *vtbl;
    int f4;
    Node_000A8450 **f8;
    void *fC;
    void *f10;
    void *f14;
    int f18;
    int f1C;
    int f20;
    char f24;
    char pad25[0x128 - 0x25];
    GrindElem_000A8360 e[6];
    int f3F8;
    int f3FC;
    int f400;
    int f404;
    GrindTrigger_000A8360 *func_000A8360(void);
    void func_000A83C0(void);
    void func_000A8450(void *param);
};

struct Sub_000A82C0 {
    char pad0[0x1C8];
    int f1C8;
    void func_00032410(int a, int b);
};

struct Game_000A82C0 {
    char pad0[0x2A4];
    Sub_000A82C0 *f2A4;
};

extern Game_000A82C0 *D_002A8490;
void __stdcall func_00052630(int p);

struct Arg_000A7860 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93(); virtual void v94();
};
struct Obj_000A7860 {
    char pad0[0x108];
    int f108;
};
struct Mdl_000A7860 {
    virtual void v0();
    virtual void v1();
    virtual void v2(Arg_000A7860 *a);
    int f4;
    char pad8[0x54];
    Obj_000A7860 *f5c;
    char pad60[0x148];
    Obj_000A7860 *f1a8;
};
extern char D_002A45E0[], D_002A5348[], D_00275678[], D_002A46E8[], D_002A5EA0[], D_002A5FA8[], D_002A60B0[], D_002A4C10[], D_002A5870[];
void __cdecl func_001ADCC0(char *a, int b, char *c, char *d, ...);
static __forceinline void Handle_000A7860(Obj_000A7860 *o, Arg_000A7860 *arg)
{
    if (o->f108) {
        func_001ADCC0(D_002A46E8, 0x104, D_00275678, D_002A5348, D_002A45E0);
        func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A45E0);
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
        func_001ADCC0(D_002A4C10, 0x104, D_00275678, D_002A5348, D_002A45E0);
        arg->v93();
    } else {
        func_001ADCC0(D_002A46E8, 0x104, D_00275678, D_002A5870, D_002A45E0);
        func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
        func_001ADCC0(D_002A4C10, 0x104, D_00275678, D_002A5870, D_002A45E0);
        arg->v94();
    }
}
struct Models_000A7860 {
    char pad0[0x24];
    int count;
    Mdl_000A7860 **models;
    int func_000A7860(Arg_000A7860 *arg);
};

struct C_000A7530 {
    void func_000A7530(void);
};

struct C_000A7500 {
    void func_000A7500(void);
};

struct C_000A7560 {
    char pad0[0xF0];
    int unkF0;
    void func_000A7560(void);
};


struct Obj_000A79E0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(float *a);
    char pad4[0x64];
    int f68;
    char pad6c;
    char f6d;
    char pad6e[0x32];
    void (*fA0)();
    void func_00133140(int a, int b);
};
struct Data_000A79E0 {
    int f0;
    char name[0x104];
    int f108[4];
    int f118[4];
    int f128[4];
    char pad138[0x10];
    int f148;
    unsigned char f14c;
};
struct Game_000A79E0 {
    char pad0[0x348];
    int f348;
    char pad34c[0x64];
    int *f3b0;
    char pad3b4[0xf8];
    int *f4ac;
};
struct S_A7FE0_Rec {
    char *name;
};
struct S_A7FE0_Sub {
    char pad0[0x58];
    int f58;
    char pad5c[0xa0 - 0x5c];
    char name[0x10c];
    S_A7FE0_Rec **f1ac;
};
struct S_A7FE0_Ent {
    char pad0[0x28];
    S_A7FE0_Sub *f28;
    char pad2c[0x5c - 0x2c];
    float x;
    float y;
    float z;
    int func_000219E0(int idx);
};
struct S_A7FE0_Cam {
    void func_00198390(void);
    void func_001983A0(void);
};
struct S_A7FE0_Mid {
    char pad0[4];
    S_A7FE0_Cam *f4;
};
struct S_A7FE0_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x38];
    S_A7FE0_Mid *f3c;
    char pad40[0xc4 - 0x40];
    int fc4;
    char padc8[0x42c - 0xc8];
    char name[1];
    int func_001C6E30(char *name);
    void func_001C6DA0(int a, int b);
};
struct S_A7FE0_Obj {
    char pad0[0x24];
    float x;
    float y;
    float z;
    char pad30[0x2e0 - 0x30];
    float radius;
};
struct S_A7FE0_Req {
    char pad0[8];
    char name[0x104];
    int type;
    char name2[1];
};
struct Hook_000A79E0 {
    char pad0[0x30];
    int f30;
    char pad34[0x2c];
    S_A7FE0_Ent **f60;
    void func_000216F0(char *a, int b, Obj_000A79E0 *c);
};
extern "C" int func_001EA426(const char *a, const char *b);
struct S_A7FE0_Vec3 {
    float x, y, z;
};
static __forceinline float distance_A7FE0(const S_A7FE0_Vec3 &a, const S_A7FE0_Vec3 &b)
{
    float x = a.x - b.x, y = a.y - b.y, z = a.z - b.z;
    return sqrtf(z * z + y * y + x * x);
}
struct Pt_000A79E0 {
    void func_001577A0(Obj_000A79E0 *o, int f);
    void func_00133140(Obj_000A79E0 *o, int f);
};
extern char D_002764F0[], D_00276688[], D_0027ADEC[], D_0027ADE4[], D_0027ADDC[], D_0027ADD4[], D_0027B1B0[];
extern int D_002B9118, D_002B9108, D_002B910C, D_002B911C, D_002B9114, D_002B9110, D_002BA160;
extern Hook_000A79E0 *D_002B7E18;
void __cdecl func_001EA1EE(char *s);
Obj_000A79E0 *__cdecl func_00133750(int a, char *s, int n);
char *__cdecl func_001E8AF0(char *a, char *b);
void __cdecl func_00024360();
void __cdecl func_000265C0(float *out, int *a, int *b, int *c, int d, int e);
struct Coll_000A79E0 {
    void *vtbl;
    int f4;
    Obj_000A79E0 *f8;
    Data_000A79E0 *fC;
    int func_000A79E0(Game_000A79E0 *g);
};

SlotsR_000A74B0 *SlotsR_000A74B0::func_000A74B0(void)
{
    int i;

    for (i = 0; i < 10; i++) {
        a0[i] = -2;
        a28[i] = -2;
        a50[i] = 1;
        a118[i] = 0;
        a78[i] = 0;
        aA0[i] = 1;
        aC8[i] = 0;
        aF0[i] = 1;
    }
    count = 0;
    return this;
}

void C_000A7500::func_000A7500(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 1;
  if (1 < *(int *)(in_ECX + 0x140)) {
    puVar2 = (undefined4 *)(in_ECX + 0x7c);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x140));
  }
  return;
}

void C_000A7530::func_000A7530(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x140)) {
    puVar2 = (undefined4 *)(in_ECX + 200);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x140));
  }
  return;
}

void C_000A7560::func_000A7560(void) {
    unkF0 = 0;
}

int SlotsR_000A74B0::func_000A7570(int state, int arg, int keep)
{
    int i;

    if (a0[0] == state) {
        a118[0] = arg;
        return 0;
    }
    if (count < 10) {
        count++;
    }
    for (i = count - 1; i > 0; i--) {
        a0[i] = a0[i - 1];
        a78[i] = (a78[i - 1] != 0 && aA0[i - 1] != 0) ? 1 : 0;
        aC8[i] = aC8[i - 1];
        aF0[i] = aF0[i - 1];
        a118[i] = a118[i - 1];
    }
    a118[0] = arg;
    a0[0] = state;
    a78[0] = 1;
    aA0[0] = 1;
    aC8[0] = 1;
    aF0[0] = 1;
    if (keep == 0 && (state == 5 || state == 7 || state == 0 || state == 3 || state == 1 || state == 2)) {
        aC8[0] = 0;
    }
    return 1;
}

void SlotsR_000A74B0::func_000A7650(float t)
{
    int i;
    int done;
    int prev;
    float cur;

    for (i = 0; i < 10; i++) {
        a28[i] = -2;
        a50[i] = 1;
    }
    cur = t;
    done = 0;
    prev = -2;
    for (i = 0; i < count - 1; i++) {
        int state;
        if (done) {
            break;
        }
        state = a0[i];
        if (state == -1 || state == -2) {
            a28[i] = state;
            a50[i] = aF0[i];
        } else {
            int ok = 1;
            float diff = cur - f118[i];
            if (diff > D_002B9120->f52C->hi) {
                ok = 0;
            }
            if (diff < D_002B9120->f52C->lo && i != 0) {
                ok = 0;
            }
            if (a78[i] == 0) {
                ok = 0;
            }
            if (prev == state && aC8[i] == 0) {
                ok = 0;
            }
            f144 = 0;
            if (i < 8 && (a0[i + 1] == 0 || a0[i + 1] == 1 || a0[i + 1] == 2 || a0[i + 1] == 3)) {
                float nextTime = f118[i + 1];
                if (f118[i] - nextTime <= D_00276284) {
                    a28[i] = a0[i + 1];
                    a50[i] = aF0[i + 1];
                    f144 = 1;
                    ok = 0;
                }
            }
            if (ok) {
                a28[i] = a0[i];
                a50[i] = aF0[i];
                prev = a0[i];
                cur = f118[i];
            } else {
                done = 1;
            }
        }
    }
}

void Models_000A77C0::func_000A77C0(int type, int idx)
{
    if (type == 2) {
        Model60_000A77C0 *p = (Model60_000A77C0 *)func_001E8A44(0x60);

        if (p != 0) {
            p = p->func_001B5790();
        } else {
            p = 0;
        }
        *(Model_000A77C0 **)((char *)f28 + idx * 4) = p;
    } else {
        Model1B0_000A77C0 *p = (Model1B0_000A77C0 *)func_001E8A44(0x1b0);

        if (p != 0) {
            p->func_001B5110();
            p->vtbl = (void *)&D_0027B1A4;
        } else {
            p = 0;
        }
        *(Model_000A77C0 **)((char *)f28 + idx * 4) = p;
        type = 1;
    }
    (*(Model_000A77C0 **)((char *)f28 + idx * 4))->f4 = type;
}

int Models_000A7860::func_000A7860(Arg_000A7860 *arg)
{
    int i;
    for (i = 0; i < count; i++) {
        Mdl_000A7860 *m = models[i];
        if (m->f4 == 2)
            Handle_000A7860(m->f5c, arg);
        else if (m->f4 == 1)
            Handle_000A7860(m->f1a8, arg);
        models[i]->v2(arg);
    }
    return 1;
}

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern "C" int strcmp(const char *a, const char *b);
int Coll_000A79E0::func_000A79E0(Game_000A79E0 *g)
{
    char buf[0x104];
    char *name = fC->name;
    char *src;
    char c;

    if (strcmp(name, "none") == 0) {
        return 0;
    }
    src = name;
    do {
        c = *src;
        buf[src - name] = c;
        src++;
    } while (c);
    func_001EA1EE(buf);
    f8 = func_00133750(0, buf, 13);
    if (f8 != 0) {
        if (func_001E8AF0(buf, D_00276688)) {
            f8->f68 = D_002B9118;
        } else if (func_001E8AF0(buf, D_0027ADEC)) {
            f8->f68 = D_002B9108;
        } else if (func_001E8AF0(buf, D_0027ADE4)) {
            f8->f68 = D_002B910C;
        } else if (func_001E8AF0(buf, D_0027ADDC)) {
            f8->f68 = D_002B911C;
        } else if (func_001E8AF0(buf, D_0027ADD4)) {
            f8->f68 = D_002B9114;
        } else if (func_001E8AF0(buf, D_0027B1B0) == buf) {
            f8->f68 = D_002B9110;
        } else {
            f8->f68 = D_002BA160;
        }
        if (fC->f148 > 0) {
            f8->f6d = (char)fC->f148;
        }
        if (fC->f14c > 0) {
            D_002B7E18->func_000216F0(buf, fC->f14c, f8);
            f8->fA0 = func_00024360;
        }
        {
            __declspec(align(16)) float m[16];
            Pt_000A79E0 *p = (Pt_000A79E0 *)g->f3b0[g->f348];
            p->func_001577A0(f8, 0x402);
            func_000265C0(m, fC->f108, fC->f118, fC->f128, 0, 1);
            f8->v31(m);
            f8->v31(m);
            f8->func_00133140(g->f4ac[g->f348], 1);
        }
    }
    func_001E891B(fC);
    fC = 0;
    return 1;
}

int Parse_000A7C30::func_000A7C30(const char *s)
{
  if (!func_001EA426(s, D_0027C1D8)) return 0xc;
  if (!func_001EA426(s, D_0027C1CC)) return 0xf;
  if (!func_001EA426(s, D_0027C1BC)) return 0x1b;
  if (!func_001EA426(s, D_0027C1B0)) return 0x10;
  if (!func_001EA426(s, D_0027C1A4)) return 0x11;
  if (!func_001EA426(s, D_0027C194)) return 0x12;
  if (!func_001EA426(s, D_0027C18C)) return 0xd;
  if (!func_001EA426(s, D_0027C184)) return 0xe;
  if (!func_001EA426(s, D_0027C178)) return 0x15;
  if (!func_001EA426(s, D_0027C170)) return 0x18;
  if (!func_001EA426(s, D_0027C16C)) return 0x13;
  if (!func_001EA426(s, D_0027C160)) return 0x14;
  if (!func_001EA426(s, D_0027C154)) return 0x16;
  if (!func_001EA426(s, D_0027C148)) return 0x17;
  if (!func_001EA426(s, D_0027C140)) return 0x19;
  if (!func_001EA426(s, D_0027B190)) return 0x1a;
  if (!func_001EA426(s, D_0027C134)) return 0x1c;
  return func_001B6710(s);
}

void func_000A7FE0(int a0, S_A7FE0_Obj *obj, S_A7FE0_Req *req, int enabled)
{
    int i;
    int j;

    if (enabled) {
        switch (req->type) {
        case 1:
            for (i = 0; i < D_002B7E18->f30; i++) {
                if (func_001EA426(req->name, D_002B7E18->f60[i]->f28->name) == 0) {
                    for (j = 0; j < D_002B7E18->f60[i]->f28->f58; j++) {
                        if (func_001EA426(req->name2, D_002B7E18->f60[i]->f28->f1ac[j]->name) == 0) {
                            S_A7FE0_Ent *e = D_002B7E18->f60[i];
                            float dx = e->x - obj->x;
                            float dy = e->y - obj->y;
                            float dz = e->z - obj->z;
                            float dist = AsmSqrtF(dz * dz + dy * dy + dx * dx);
                            if (dist <= obj->radius) {
                                D_002B7E18->f60[i]->func_000219E0(j);
                            }
                            return;
                        }
                    }
                }
            }
            break;
        case 2:
            for (i = 0; i < D_002B9120->f578; i++) {
                if (func_001EA426(req->name, D_002B9120->f57c[i]->name) == 0) {
                    int r = D_002B9120->f57c[i]->func_001C6E30(req->name2);
                    if (D_002B9120->f57c[i]->fc4 != r) {
                        D_002B9120->f57c[i]->func_001C6DA0(r, 1);
                    }
                    return;
                }
            }
            break;
        case 3:
            for (i = 0; i < D_002B9120->f578; i++) {
                if (func_001EA426(req->name, D_002B9120->f57c[i]->name) == 0) {
                    D_002B9120->f57c[i]->f3c->f4->func_00198390();
                    D_002B9120->f57c[i]->v4();
                    return;
                }
            }
            break;
        case 4:
            for (i = 0; i < D_002B9120->f578; i++) {
                if (func_001EA426(req->name, D_002B9120->f57c[i]->name) == 0) {
                    D_002B9120->f57c[i]->f3c->f4->func_001983A0();
                    D_002B9120->f57c[i]->v6();
                    return;
                }
            }
            break;
        }
    }
}

void func_000A82C0(int a, int b, int c, int d)
{
    if (d != 0 && D_002A8490->f2A4->f1C8 == 0) {
        func_00052630(c + 0x10C);
    }
}

GrindTrigger_000A8360 *GrindTrigger_000A8360::func_000A8360(void)
{
    int i;

    vtbl = (void *)&D_0027C1E4;
    f4 = 0;
    f8 = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
    f1C = 0;
    fC = 0;
    f24 = 0;
    for (i = 0; i < 6; i++) {
        e[i].b = 0;
    }
    f3F8 = 0;
    f3FC = 0;
    f400 = 0;
    f404 = 0;
    f20 = 0;
    return this;
}

void GrindTrigger_000A8360::func_000A83C0(void)
{
    int i;

    vtbl = (void *)&D_0027C1E4;
    if (f8 != 0) {
        for (i = 0; i < f4; i++) {
            if (f8[i] != 0) {
                func_001E891B(f8[i]);
                f8[i] = 0;
            }
        }
        func_001E891B(f8);
    }
    if (fC != 0) {
        func_001E891B(fC);
    }
    if (f10 != 0) {
        func_001E891B(f10);
    }
    if (f14 != 0) {
        func_001E891B(f14);
    }
}

void GrindTrigger_000A8360::func_000A8450(void *param)
{
    int i;

    for (i = 0; i < f4; i++) {
        f8[i]->vf1(param, 0);
        if (f8[i]->f4 == 6) {
            f8[i]->f288->func_001B6590(f8[i]->f184);
        }
    }
}

