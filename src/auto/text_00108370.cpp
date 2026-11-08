/* 24 functions from 0x00108370 to 0x00109370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct C_00108D10 {
    char pad0[0xA68];
    int fA68[4];
    int fA78[4];
    int fA88;
    char padA8C[0xAB0-0xA8C];
    int fAB0[140];
    int fCE0[1];
    void func_00108D10(int a, int b);
};

struct C_00108E30 {
    char pad0[0xA8C];
    int fA8C[4];
    int fA9C[4];
    int fAAC;
    char padAB0[0xBC8-0xAB0];
    int fBC8[150];
    int fE20[1];
    void func_00108E30(int a, int b);
};

struct C_001084E0 {
    void func_001084E0(void);
};

struct C_00108610 {
    char pad0[0x20B4];
    int unk20B4;
    int unk20B8;
    void func_00108610(int a0, int a1);
};

struct C_001092D0 {
    char pad0[0x20C0];
    int unk20C0;
    void func_001092D0(int a0);
};

struct C_00108680 {
    char pad0[0xA2C];
    int unkA2C;
    void func_00108680(int a0);
    void func_00108630(int arg);
};

struct C_00108670 {
    char pad0[0x20A0];
    int unk20A0;
    int func_00108670(void);
};

struct C_00108660 {
    char pad0[0x20A4];
    int unk20A4;
    int func_00108660(void);
};

struct V4_08690 { float x, y, z, w; };
struct M4_08690 { float m[16]; };
struct C_Cam_08690 {
    V4_08690 func_00197F70(V4_08690 *in);
    void func_00197B90(V4_08690 *v);
    void func_00199300(V4_08690 *v);
    void func_00197B40(V4_08690 *a, V4_08690 *b);
    void func_00199650(V4_08690 *v);
};
struct C_Obj_08690 { char pad[0x38]; float f38; };
struct C_Gen_08690 {
    V4_08690 func_00165E20(C_Obj_08690 *o, float f, char *d, int i);
    V4_08690 func_00165EF0(C_Obj_08690 *o, float f, char *d, int i);
};
struct C_08690_NodeA {
    void func_00199C20(int a, M4_08690 *m);
};
struct C_08690_NodeB {
    void func_0019AD60(int a, M4_08690 *m);
};
struct C_08690_MatRef {
    char pad0[4];
    C_08690_NodeB *f4;
};
struct C_08690_Entity {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40();
    char pad4[0x22C - 4];
    C_08690_NodeA *f22C;
    char pad230[0x238 - 0x230];
    V4_08690 f238;
    char pad248[0x268 - 0x248];
    V4_08690 f268;
};
extern char D_00276690[];
extern float D_00282AC0;
extern double D_00282AB8;
extern float D_002A3A3C, D_002A3A40, D_002A3A44, D_002A3A48;
struct C_00108690 {
    char pad0[0x1E0];
    C_08690_Entity *f1E0;
    char pad1E4[0x230 - 0x1E4];
    C_Cam_08690 *f230;
    char pad234[0x790 - 0x234];
    C_Obj_08690 *f790;
    int f794;
    char pad798[0xA00 - 0x798];
    C_08690_MatRef *fA00;
    C_Gen_08690 *fA04;
    void func_00108690(float dt);
};

extern float D_00275544;
extern float D_002755E8;
extern float D_00275460;

struct C_000AD5C0 {
    int func_000AD5C0(int a, int *out, int b);
};

struct S_00108510_Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct S_00108510_Device {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46();
};

struct S_00108510_Button {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual int v7();
};

struct S_00108510_ButtonSet {
    S_00108510_Button *func_001A2EF0(int index);
    void func_001A2DD0(int index);
};

struct C_00108510 {
    char pad0[0xA2C];
    int fA2C;
    char padA30[0x11F4 - 0xA30];
    int f11F4;
    char pad11F8[0x1244 - 0x11F8];
    S_00108510_Device *f1244;
    char pad1248[0x1584 - 0x1248];
    int f1584;
    char pad1588[0x15A4 - 0x1588];
    S_00108510_ButtonSet *f15A4;
    char pad15A8[0x1FC0 - 0x15A8];
    int f1FC0;
    char f1FC4[0x2000 - 0x1FC4];
    S_00108510_Vec4 f2000;
    void func_00108510(const char *name, S_00108510_Vec4 v);
};

struct C_00109090 {
    char pad0[0x718];
    int f718;
    char pad71C[0x954 - 0x71C];
    C_000AD5C0 *f954;
    int func_00109090(void);
};

struct C_00083B20 {
    void func_00083B20(int arg);
    void func_000848F0(void);
    void func_000843E0(int a);
};

struct C_00108630_Arr {
    char pad0[0x170];
    C_00083B20 *items[1];
};

struct C_00108630_Mgr {
    char pad0[0x2A4];
    C_00108630_Arr *f2A4;
    char pad2A8[0x2E0 - 0x2A8];
    struct C_001083E0_St *f2E0;
};

struct C_001083E0_St {
    char pad0[0x190];
    int f190[(0x45C - 0x190) / 4];
    int f45C;
};

struct C_001083E0_24 {
    char pad0[0x4A8];
    int *f4A8;
    int *f4AC;
};

extern C_00108630_Mgr *D_002A8490;

struct C_00198390_Obj {
    void func_00198390();
    void func_00198E60();
    void func_001983A0();
    void func_0019ABA0(int a0, int a1);
};

struct C_001332A0_Obj {
    void func_001332A0();
    void func_00133140(int a0, int a1);
};

struct C_00108370_A00 {
    char pad0[4];
    C_00198390_Obj *f4;
};

struct C_00108370 {
    char pad0[0x24];
    C_001083E0_24 *f24;
    char pad28[0x230 - 0x28];
    C_00198390_Obj *f230;
    char pad234[0xA00 - 0x234];
    C_00108370_A00 *fA00;
    char padA04[0xA28 - 0xA04];
    int fA28;
    char padA2C[0x11AC - 0xA2C];
    C_001332A0_Obj *f11AC;
    C_001332A0_Obj *f11B0;
    C_001332A0_Obj *f11B4;
    C_001332A0_Obj *f11B8;
    C_001332A0_Obj *f11BC;
    void func_00108370();
    void func_001083E0();
};

struct C_00108CB0_T {
    char pad0[0x7A64];
    float f7A64[1];
};

struct C_00108CB0_C {
    char pad0[0x52C];
    C_00108CB0_T *f52C;
};

struct C_00108CB0 {
    char pad0[0x24];
    C_00108CB0_C *f24;
    float func_00108CB0(int idx, float v);
};

struct C_001092E0 {
    int f0;
    int f4[5];
    int f18[5];
    void func_001092E0(int start);
    int func_00109340(int p1, int p2);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct Vec4_00108370 {
    float x;
    float y;
    float z;
    float w;
};

struct C_0001EF10 {
    Vec4_00108370 *func_0001EF10(Vec4_00108370 *out);
};

struct S_00109180_Base {
    char pad0[0x268];
    float f268;
    float f26c;
    float f270;
};

struct C_00109180 {
    char pad0[0x1e0];
    S_00109180_Base *f1e0;
    char pad1e4[0x24];
    C_0001EF10 *f208;
    Vec4_00108370 *func_00109180(Vec4_00108370 *out);
};

struct S_00108F50_Pair {
    int a;
    int b;
};

struct C_00108F50 {
    char pad0[0xa68];
    int fa68[4];
    int fa78[4];
    int fa88;
    int fa8c[4];
    int fa9c[4];
    int faac;
    int fab0[0x46];
    int fbc8[0x46];
    int fce0[5][16];
    int fe20[5][16];
    S_00108F50_Pair ff60[6];
    int ff90[3][16];
    void func_00108F50(void);
    void func_00108FF0(void);
};


struct S_001091D0_V {
    float x, y, z, w;
    S_001091D0_V() {}
    S_001091D0_V(const S_001091D0_V &o) { x = o.x; y = o.y; z = o.z; w = o.w; }
    S_001091D0_V &operator=(const S_001091D0_V &o) { x = o.x; y = o.y; z = o.z; w = o.w; return *this; }
};
struct S_001091D0_Ref {
    char pad0[0x68];
    int f68;
};
struct S_001091D0_Obj {
    char pad0[0x1a0];
    S_001091D0_V f1a0;
    char pad1b0[0x28];
    S_001091D0_Ref *f1d8;
};
struct C_001091D0 {
    char pad0[0x1e8];
    S_001091D0_Obj *f1e8;
    char pad1ec[0x874 - 0x1ec];
    S_001091D0_V f874;
    int func_001091D0(void);
};
extern int D_002B9108;
extern float D_00282AC4;
extern float D_00282AC8;
float *func_0001E9E0(float *out, float *in);
S_001091D0_V *func_0001E9E0(S_001091D0_V *out, const S_001091D0_V &in);
S_001091D0_V func_0001E9E0(S_001091D0_V *in);

struct S_001089C0_Cam {
    Vec4_00108370 func_00165E20(void *a1, int a2, char *a3, void *a4);
};

struct S_001089C0_Node {
    Vec4_00108370 func_00197F70(Vec4_00108370 *v);
    void func_00199A70(int a, Vec4_00108370 *out);
};

extern char D_00276690[];

struct S_00108B00_Cam {
    Vec4_00108370 func_00165E20(int a1, float a2, char *a3, void *a4);
};

struct S_00108B00_Node {
    char pad0[0x174];
    S_00108B00_Node *f174;
    Vec4_00108370 func_00197F70(Vec4_00108370 *v);
    void func_00199A70(int a, Vec4_00108370 *out);
};

struct S_00108B00_52C { char pad0[0x77e8]; float f77e8[1]; char pad77ec[0x7948 - 0x77ec]; float f7948[1]; };
struct S_00108B00_Mgr { char pad0[0x52c]; S_00108B00_52C *f52c; };

extern float D_002756DC;
extern float D_00276E9C;

struct C_00108B00 {
    char pad0[0x24];
    char *f24;
    char pad28[0x230 - 0x28];
    S_00108B00_Node *f230;
    char pad234[0x47c - 0x234];
    int f47c;
    int f480;
    char pad484[0x718 - 0x484];
    int f718;
    char pad71c[0xa04 - 0x71c];
    S_00108B00_Cam *fa04;
    char pada08[0x15d8 - 0xa08];
    int f15d8;
    char pad15dc[0x15f4 - 0x15dc];
    float f15f4;
    char pad15f8[0x1910 - 0x15f8];
    int f1910[16];
    int f1950[1];
    void func_00108B00(Vec4_00108370 *out);
    void *func_00029290(void);
};

struct C_001089C0 {
    char pad0[0x230];
    S_001089C0_Node *f230;
    char pad234[0x704 - 0x234];
    int f704;
    char pad708[4];
    int f70C;
    char pad710[0x798 - 0x710];
    int f798;
    char pad79C[0xA04 - 0x79C];
    S_001089C0_Cam *fA04;
    char padA08[0x1874 - 0xA08];
    void *f1874;
    void *f1878;
    void func_001089C0(Vec4_00108370 *out);
    __forceinline void calc(void *target, Vec4_00108370 *v, Vec4_00108370 *out)
    {
        *v = fA04->func_00165E20(target, f798, D_00276690, 0);
        *out = f230->func_00197F70(v);
    }
};

void C_00108370::func_00108370()
{
    f230->func_00198390();
    f230->func_00198E60();
    fA00->f4->func_00198390();
    fA00->f4->func_00198E60();
    f11AC->func_001332A0();
    f11B0->func_001332A0();
    f11B4->func_001332A0();
    f11B8->func_001332A0();
    f11BC->func_001332A0();
}

void C_00108370::func_001083E0()
{
    C_001083E0_St *s = D_002A8490->f2E0;
    if (s->f190[fA28] != 3 && s->f45C == 0) {
        f230->func_001983A0();
        f230->func_0019ABA0(*f24->f4A8, 2);
    }
    fA00->f4->func_001983A0();
    fA00->f4->func_0019ABA0(*f24->f4A8, 2);
    f11AC->func_00133140(*f24->f4AC, 2);
    f11B0->func_00133140(*f24->f4AC, 2);
    f11B4->func_00133140(*f24->f4AC, 2);
    f11B8->func_00133140(*f24->f4AC, 2);
    f11BC->func_00133140(*f24->f4AC, 2);
}

void C_001084E0::func_001084E0(void)
{
  int func_00027D40(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x20a8) == 0) {
    *(undefined4 *)(in_ECX + 0x209c) = 1;
    *(undefined4 *)(in_ECX + 0x20a8) = 1;
    func_00027D40();
    return;
  }
  return;
}

void C_00108510::func_00108510(const char *name, S_00108510_Vec4 v)
{
    if (f15A4->func_001A2EF0(3)->v7()) {
        f15A4->func_001A2DD0(3);
    }
    if (f15A4->func_001A2EF0(2)->v7()) {
        f15A4->func_001A2DD0(2);
    }
    f1244->v46();
    f1584 = 0;
    if (name != 0) {
        strcpy(f1FC4, name);
    }
    f2000 = v;
    if (D_002A8490->f2A4 != 0) {
        if (D_002A8490->f2A4->items[fA2C] != 0) {
            D_002A8490->f2A4->items[fA2C]->func_000848F0();
            D_002A8490->f2A4->items[fA2C]->func_000843E0(0);
        }
    }
    if (f11F4 == 1) {
        f1FC0 = 1;
    }
}

void C_00108610::func_00108610(int a0, int a1) {
    unk20B4 = a1;
    unk20B8 = a0;
}

void C_00108680::func_00108630(int arg)
{
    C_00083B20 *p = D_002A8490->f2A4->items[unkA2C];

    if (p != 0) {
        p->func_00083B20(arg);
    }
}

int C_00108660::func_00108660(void) {
    return unk20A4;
}

int C_00108670::func_00108670(void) {
    return unk20A0;
}

void C_00108680::func_00108680(int a0) {
    unkA2C = a0;
}

V4_08690 func_00104B00(V4_08690 *a, V4_08690 *b);
void C_00108690::func_00108690(float dt)
{
    if (f790 != 0) {
        V4_08690 m1 = fA04->func_00165E20(f790, 1.0f, D_00276690, f794);
        V4_08690 dir;
        V4_08690 m2 = fA04->func_00165E20(f790, 0.98f, D_00276690, f794);
        V4_08690 q;
        V4_08690 delta;
        V4_08690 v1;
        V4_08690 v2;
        V4_08690 m3 = fA04->func_00165EF0(f790, 1.0f, D_00276690, f794);
        V4_08690 m4 = fA04->func_00165EF0(f790, 0.98f, D_00276690, f794);
        m2 = f230->func_00197F70(&m2);
        m1 = f230->func_00197F70(&m1);
        delta.x = m1.x - m2.x;
        delta.y = m1.y - m2.y;
        delta.z = m1.z - m2.z;
        float scale = 1.0f / (f790->f38 * 0.02f);
        dir.x = delta.x * scale;
        dir.y = delta.y * scale;
        dir.z = delta.z * scale;
        dir.w = 1.0f;
        f230->func_00197B90(&q);
        q = func_00104B00(&q, &m3);
        f230->func_00199300(&q);
        v1.z = 0; v1.y = 0; v1.x = 0; v1.w = 1.0f;
        v2.z = 0; v2.y = 0; v2.x = 0; v2.w = 1.0f;
        f230->func_00197B40(&v1, &v2);
        if (v1.y < D_00282AB8) {
            dir.x = 0.0f;
            dir.z = 0.0f;
            m1.x += *(volatile float *)&dir.x * dt;
            m1.y += *(volatile float *)&dir.y * dt;
            m1.z += *(volatile float *)&dir.z * dt;
            f230->func_00199650(&m1);
        }
        __declspec(align(16)) M4_08690 mat;
        f1E0->f22C->func_00199C20(0, &mat);
        fA00->f4->func_0019AD60(0, &mat);
        f1E0->v40();
        f1E0->f238 = dir;
        V4_08690 *p = &f1E0->f268;
        p->x = D_002A3A3C;
        p->y = D_002A3A40;
        p->z = D_002A3A44;
        p->w = D_002A3A48;
    }
}

void C_001089C0::func_001089C0(Vec4_00108370 *out)
{
    Vec4_00108370 v;

    v.z = 0;
    v.y = 0;
    v.x = 0;
    v.w = 1.0f;
    if (f704 != 0) {
        calc(f1874, &v, out);
        return;
    }
    if (f70C != 0) {
        calc(f1878, &v, out);
        return;
    }
    f230->func_00199A70(0, out);
}

void C_00108B00::func_00108B00(Vec4_00108370 *out)
{
    if (f47c == 1) {
        Vec4_00108370 v;
        int sel;
        float s, t;
        v.z = 0; v.y = 0; v.x = 0; v.w = 1.0f;
        if (f480 == 0) sel = f1950[f718]; else sel = f1910[f718];
        v = fa04->func_00165E20(sel, 0.5f, D_00276690, func_00029290());
        if (f15d8 == 10) s = f15f4; else s = D_00275544;
        int mode = f480;
        int index = f718;
        t = mode == 0 ? ((S_00108B00_Mgr *)f24)->f52c->f7948[index] : ((S_00108B00_Mgr *)f24)->f52c->f77e8[index];
        if (t < D_002756DC) t = 0.1f;
        else if (t > D_00276E9C) t = 0.9f;
        if (s < D_00275544) s = D_00275544;
        if (s > t) s = t;
        s = s / t;
        v.x *= s; v.y *= s; v.z = *(volatile float *)&v.z * s;
        *out = f230->func_00197F70(&v);
        return;
    }
    f230->f174->func_00199A70(0, out);
}

float C_00108CB0::func_00108CB0(int idx, float v)
{
    if (idx > 5) {
        idx = 5;
    }
    return v * f24->f52C->f7A64[idx];
}

float __stdcall func_00108CE0(int idx)
{
    if (idx > 2) {
        return D_00275544;
    }
    if (idx > 1) {
        return D_002755E8;
    }
    return D_00275460;
}

void C_00108D10::func_00108D10(int a, int b) {
 if (fA88 >= 4) {
 int old=fA68[0], other=fA78[0];
 int found=0;
 for(int i=1;i<4;i++) {
 if(old == -1) break;
 if(old==fA68[i] && other==fA78[i]) found=1;
 }
 if(!found && old!=-1) {
 if(b==-1) fAB0[old]=0;
 else fCE0[b*16+old]=0;
 }
 for(int j=0;j<3;j++) { fA68[j]=fA68[j+1]; fA78[j]=fA78[j+1]; }
 fA68[3]=a; fA78[3]=b;
 } else { fA68[fA88]=a; fA78[fA88]=b; ++fA88; }
}

void C_00108E30::func_00108E30(int a, int b) {
 if (fAAC >= 4) {
 int old=fA8C[0], other=fA9C[0];
 int found=0;
 for(int i=1;i<4;i++) {
 if(old == -1) break;
 if(old==fA8C[i] && other==fA9C[i]) found=1;
 }
 if(!found && old!=-1) {
 if(b==-1) fBC8[old]=0;
 else fE20[b*16+old]=0;
 }
 for(int j=0;j<3;j++) { fA8C[j]=fA8C[j+1]; fA9C[j]=fA9C[j+1]; }
 fA8C[3]=a; fA9C[3]=b;
 } else { fA8C[fAAC]=a; fA9C[fAAC]=b; ++fAAC; }
}

void C_00108F50::func_00108F50(void)
{
  int in_ECX = (int)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(in_ECX + 0xa78);
  iVar3 = 4;
  do {
    puVar2[-4] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0xa88) = 0;
  puVar2 = (undefined4 *)(in_ECX + 0xab0);
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(in_ECX + 0xce0);
  iVar3 = 0x10;
  do {
    iVar4 = 5;
    puVar1 = puVar2;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)(in_ECX + 0xfd0);
  iVar3 = 8;
  do {
    puVar2[-0x10] = 0;
    *puVar2 = 0;
    puVar2[0x10] = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0xf60) = 0;
  *(undefined4 *)(in_ECX + 0xf68) = 0;
  *(undefined4 *)(in_ECX + 0xf70) = 0;
  *(undefined4 *)(in_ECX + 0xf78) = 0;
  *(undefined4 *)(in_ECX + 0xf80) = 0;
  *(undefined4 *)(in_ECX + 0xf88) = 0;
  return;
}

void C_00108F50::func_00108FF0(void)
{
  int in_ECX = (int)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(in_ECX + 0xa9c);
  iVar3 = 4;
  do {
    puVar2[-4] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0xaac) = 0;
  puVar2 = (undefined4 *)(in_ECX + 0xbc8);
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(in_ECX + 0xe20);
  iVar3 = 0x10;
  do {
    iVar4 = 5;
    puVar1 = puVar2;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)(in_ECX + 0xff0);
  iVar3 = 8;
  do {
    puVar2[-0x10] = 0;
    *puVar2 = 0;
    puVar2[0x10] = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0xf64) = 0;
  *(undefined4 *)(in_ECX + 0xf6c) = 0;
  *(undefined4 *)(in_ECX + 0xf74) = 0;
  *(undefined4 *)(in_ECX + 0xf7c) = 0;
  *(undefined4 *)(in_ECX + 0xf84) = 0;
  *(undefined4 *)(in_ECX + 0xf8c) = 0;
  return;
}

int C_00109090::func_00109090(void)
{
    int sel;

    if (f954->func_000AD5C0(2, &sel, 0) == 8) {
        switch (sel) {
        case 1:
            f718 = 7;
            break;
        case 2:
            f718 = 3;
            break;
        case 3:
            f718 = 6;
            break;
        case 4:
            f718 = 0;
            break;
        case 5:
            f718 = 4;
            break;
        case 6:
            f718 = 2;
            break;
        case 7:
            f718 = 5;
            break;
        default:
            f718 = 1;
            break;
        }
        return 1;
    }
    return 0;
}

Vec4_00108370 *C_00109180::func_00109180(Vec4_00108370 *out)
{
    Vec4_00108370 tmp;
    float *a = (float *)f208->func_0001EF10(&tmp);
    float *b = &f1e0->f268;

    vec3_set((float *)out, b[0] + a[0], b[1] + a[1], b[2] + a[2]);
    return out;
}

int C_001091D0::func_001091D0(void)
{
    S_001091D0_V b;
    S_001091D0_V o;
    S_001091D0_V a = *func_0001E9E0(&b, S_001091D0_V(f1e8->f1a0));
    b = f874;
    func_0001E9E0(&o, b);
    if (f1e8->f1d8 != 0 && f1e8->f1d8->f68 == D_002B9108) {
        if (f874.y > D_00282AC8 && a.y > D_00282AC8) {
            return 1;
        }
    } else {
        if (f874.y > D_00282AC4 && a.y > D_00282AC4) {
            return 1;
        }
    }
    return 0;
}

void C_001092D0::func_001092D0(int a0) {
    unk20C0 = a0;
}

void C_001092E0::func_001092E0(int start)
{
    int i;

    f0 = 0;
    for (i = start; i < 5; i++) {
        f4[i] = -1;
        f18[i] = 0;
    }
    if (f4[0] != -1) {
        f0++;
    }
    if (f4[1] != -1) {
        f0++;
    }
    if (f4[2] != -1) {
        f0++;
    }
    if (f4[3] != -1) {
        f0++;
    }
    if (f4[4] != -1) {
        f0++;
    }
}

int C_001092E0::func_00109340(int p1, int p2)
{
    if (f0 >= 5) {
        return 0;
    }
    f4[f0] = p1;
    f18[f0] = p2;
    f0++;
    return 1;
}

