/* 11 functions from 0x00053930 to 0x00054680, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern float D_00277B40, D_00277B50, D_00277B60;
static __forceinline void Normalize_53CB0(float *volatile outArg, const float *volatile inArg)
{
    const float *in = inArg;
    float *out = outArg;
    __m128 v = _mm_loadu_ps(in), sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00277B60);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00277B40)), _mm_sub_ss(_mm_load_ss(&D_00277B50), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}
struct G_P2 { char pad0[0xa40]; int fa40; char pada44[8]; int fa4c; char pada50[4]; int fa54; int fa58; int fa5c; char pada60[0x1058 - 0xa60]; int f1058; char pad105c[0x11f4 - 0x105c]; int f11f4;
    int func_00108660(); void func_001084E0(); };
struct G_PL { char pad0[0x1a8]; G_P2 *f1a8[1]; };
struct G_V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); };
struct G_C { char pad0[0x4c0]; G_V *f4c0; char pad4c4[0x1c]; G_PL *f4e0; };
struct G_Rules { int func_0005B960(int, float); int func_0005B960(int, int); int func_0005C330(int); void func_0005C340(int); };
struct G_Sub { void func_000707C0(int); void func_0006E970(int); void func_000684B0(); void func_0001D330(); void func_00083A70(int); };
struct G_Vt { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(int); };
struct G_Mode { int mode0; char pad4[0xc]; float f10; char pad14[0xc]; int f20; char pad24[0x16c]; int f190; };
struct G_Obj3 { char pad0[0x1228]; int f1228; };
struct G_Obj2 { char pad0[4]; G_Obj3 *f4; };
struct G_Glob { char pad0[4]; G_Sub *f4; char pad8[0x11c]; int f124; char pad128[0x1b8]; G_Mode *f2e0; char pad2e4[4]; G_Obj2 *f2e8; };
#define G_GLOB ((G_Glob *)D_002A8490)
struct G_Event {
    char pad0[0x64]; G_C *f64; G_Rules *f68; char pad6c[0x24]; int f90; char pad94[0x90]; float f124; float f128; char pad12c[0x38]; G_Sub *f164; char pad168[8]; G_Sub *f170; char pad174[0x1c]; G_Sub *f190; char pad194[0x24]; G_Vt *f1b8; char pad1bc[0x38]; int f1f4; char pad1f8[0x8c]; int f284; int f288;
          int func_00031260(int); int func_00157A00(int); int func_00053930(int);
};
extern char D_000186A0[];
struct S_00054430_V4 {
    float x, y, z, w;
    S_00054430_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_00054430_V4(float px, float py, float pz, float pw) { x = px; y = py; z = pz; w = pw; }
};
struct S_00054430_Orient {
    S_00054430_V4 func_00198040(S_00054430_V4 *v);
};
struct S_00054430_Item {
    char pad0[0x230]; S_00054430_Orient *f230;
    char pad234[0x834 - 0x234]; S_00054430_V4 f834;
};
struct S_00054430_Items {
    char pad0[0x1a8]; S_00054430_Item *f1a8[2];
};
struct S_00054430_Data {
    char pad0[0x24]; S_00054430_V4 pos;
};
struct S_00054430_Entry {
    int unk0; S_00054430_Data *f4;
};
struct S_00054430_List {
    char pad0[0x28]; S_00054430_Entry **items;
};
struct S_00054430_Ctx {
    char pad0[0x3b4]; S_00054430_List *f3b4;
    char pad3b8[0x4e0 - 0x3b8]; S_00054430_Items *f4e0;
};
struct S_00053F90_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    S_00053F90_Obj *func_00088530(int);
    S_00053F90_Obj *func_00088570(void *);
    S_00053F90_Obj *func_0005ECA0(int);
    void func_0005EDC0(void *);
    S_00053F90_Obj *func_000715B0(int);
    void func_00071880(void *);
    S_00053F90_Obj *func_00066C90(int);
    void func_00066FA0(void *);
    S_00053F90_Obj *func_00082450(int);
    void func_0008DB70(void *, void *, void *, int, int, int, int);
    S_00053F90_Obj *func_000876B0(int);
    S_00053F90_Obj *func_00087760(void *, void *, int);
    S_00053F90_Obj *func_0008B820(int);
    void func_0008B850(int, void *);
    void func_0008BB50(int);
    S_00053F90_Obj *func_000888D0(int);
    void func_00088950(void *, int);
    void func_00088A40(int a, S_00054430_V4 *v);
};
struct S_00053F90_Info { int count; int pad4; void *f8; };
struct S_00053F90_Global { char pad0[0x2e0]; S_00053F90_Info *f2e0; };
extern S_00053F90_Global *D_002A8490;
void *func_001E8A44(unsigned int);
struct C_00054430 {
    char pad0[0x64]; S_00054430_Ctx *f64;
    char pad68[0x28]; int f90;
    char pad94[0x50]; S_00053F90_Obj *fe4;
    char pade8[0x74]; S_00053F90_Obj *f15c;
    char pad160[0x10]; S_00053F90_Obj *f170[8];
    S_00053F90_Obj *f190;
    char pad194[4]; S_00053F90_Obj *f198;
    char pad19c[4]; S_00053F90_Obj *f1a0;
    char pad1a4[0x284 - 0x1a4]; S_00053F90_Obj *f284[8];
    S_00053F90_Obj *f2a4[8];
    int f2c4, f2c8;
    void func_00031630();
    void func_00053F90();
    void func_00054430();
};
void func_00053CB0(S_00054430_V4 *out, S_00054430_V4 *in);
float func_0014FBA0(float a, float b);
extern float D_00277240;
struct TagVector { int x, y, z, w; };
struct TagObject {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    void func_0008BB50(int);
    void func_00199600(TagVector);
    void func_0019AC50();
};
struct TagLookup { int func_0001B3C0(const char *); };
struct C_00054340 {
    char pad0[0x64]; char *f64;
    char pad68[0x28]; int f90;
    char pad94[0x1f0]; TagObject *f284[8]; TagObject *f2a4[8];
    int f2c4, f2c8, f2cc, f2d0, f2d4;
    char pad2d8[0x10]; int f2e8;
    void func_00034090();
    int func_00054340();
};
extern char D_00277C9C;
extern char D_00277C28[];
struct C_00053DB0_Obj { void func_00099D40(int); };
struct C_00053DB0_List { char pad0[0x24]; int count; char **items; };
struct C_00053DB0_Ctx { char pad0[0x3b4]; C_00053DB0_List *f3b4; };
struct C_00053DB0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40();
    char pad4[0x60]; C_00053DB0_Ctx *f64;
    char pad68[0x158]; C_00053DB0_Obj *f1c0;
    char pad1c4[0x104]; int f2c8;
    void func_000342C0();
    C_00053DB0 *func_00053DB0();
};
struct C_00053C60 {
    char pad0[0x284];
    int unk284;
    int unk288;
    int func_00053C60(void);
};

struct C_00053C80 {
    int unk0;
    void func_00033220(void);
    void *func_00053C80(int flags);
};

struct S_00054210_Vec4 {
    float x, y, z, w;
};

struct S_00054210_Target {
    S_00054210_Vec4 func_001824E0(float x, float y, float z);
};

struct S_00054210_Sub {
    int unk0;
    S_00054210_Target *f4;
};

struct S_00054210_Item {
    char pad0[0xa00];
    S_00054210_Sub *fa00;
};

struct S_00054210_List {
    char pad0[0x1a8];
    S_00054210_Item *f1a8[1];
};

struct S_00054210_Ctx {
    char pad0[0x4e0];
    S_00054210_List *f4e0;
};

extern float D_002A1974;
extern float D_002A1978;
extern float D_002A197C;
extern float D_00276288;
extern float D_002755E8;

struct C_00053D20 {
    int unk0;
    char pad4[0x60];
    S_00054210_Ctx *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x168];
    int f1fc;
    char pad200[0x84];
    int f284[8];
    int f2a4[8];
    int f2c4;
    int f2c8;
    int f2cc;
    int f2d0;
    int f2d4;
    float f2d8;
    int f2dc;
    float f2e0;
    float f2e4;
    int f2e8;
    void func_00030F90(void *param);
    C_00053D20 *func_00053D20(void *param);
    void func_00054210(float dt);
};


extern float D_00275544;

C_00053D20 *C_00053D20::func_00053D20(void *param)
{
    extern int D_00277B74;
    int i;

    func_00030F90(param);
    f2c4 = -1;
    f2c8 = -1;
    unk0 = (int)&D_00277B74;
    f2cc = 0;
    f2d0 = 0;
    f2d4 = 0;
    for (i = 0; i < 8; i++) {
        f2a4[i] = 0;
        f284[i] = 0;
    }
    f2dc = 1;
    f1fc = 1;
    f2d8 = 0.5f;
    f2e0 = 7.0f;
    f2e4 = 2.0f;
    f2e8 = 0;
    return this;
}

extern "C" int __cdecl memcmp(const void *, const void *, unsigned int);
extern "C" int __cdecl strcmp(const char *, const char *);
C_00053DB0 *C_00053DB0::func_00053DB0()
{
    int i;
    func_000342C0();
    for (i = 0; i < f64->f3b4->count; i++) {
        if (strcmp(f64->f3b4->items[i] + 0x18, "tagTrigger") == 0)
            f2c8 = i;
    }
    v40();
    if (f1c0)
        f1c0->func_00099D40(-1);
    return this;
}

void C_00054430::func_00053F90()
{
    S_00053F90_Obj *p;
    int i;

    func_00031630();
    p = (S_00053F90_Obj *)func_001E8A44(0xf4);
    fe4 = p ? p->func_00088530(1) : 0;
    fe4 = fe4->func_00088570(D_002A8490->f2e0->f8);
    p = (S_00053F90_Obj *)func_001E8A44(0x134);
    f15c = p ? p->func_0005ECA0(1) : 0;
    f15c->func_0005EDC0(this);
    f15c->v4();
    p = (S_00053F90_Obj *)func_001E8A44(0x140);
    f1a0 = p ? p->func_000715B0(1) : 0;
    f1a0->func_00071880(this);
    f1a0->v4();
    p = (S_00053F90_Obj *)func_001E8A44(0x16c);
    f190 = p ? p->func_00066C90(1) : 0;
    f190->func_00066FA0(this);
    f190->v4();
    for (i = 0; i < D_002A8490->f2e0->count; i++) {
        p = (S_00053F90_Obj *)func_001E8A44(0xda4);
        f170[i] = p ? p->func_00082450(1) : 0;
        f170[i]->func_0008DB70(f64, f64->f4e0->f1a8[i], D_002A8490->f2e0->f8, i, 1, 1, 0);
        f170[i]->v6();
    }
    p = (S_00053F90_Obj *)func_001E8A44(0xc8);
    p = p ? p->func_000876B0(1) : 0;
    f198 = p->func_00087760(D_002A8490->f2e0->f8, this, 0);
    for (i = 0; i < f90; i++) {
        p = (S_00053F90_Obj *)func_001E8A44(0x38);
        f284[i] = p ? p->func_0008B820(1) : 0;
        f284[i]->func_0008B850(i, this);
        f284[i]->v6();
        f284[i]->func_0008BB50(-1);
    }
    if (f90 > 1) for (i = 0; i < f90; i++) {
        p = (S_00053F90_Obj *)func_001E8A44(0x54);
        f2a4[i] = p ? p->func_000888D0(1) : 0;
        f2a4[i]->func_00088950(D_002A8490->f2e0->f8, i);
    }
}

void C_00053D20::func_00054210(float dt) {
    int i;
    int up;
    float step;

    for (i = 0; i < f90; i++) {
        if (i == f2c4) {
            f64->f4e0->f1a8[i]->fa00->f4->func_001824E0(D_002A1974 * f2d8, D_002A1978 * f2d8, D_002A197C * f2d8);
        } else {
            f64->f4e0->f1a8[i]->fa00->f4->func_001824E0(1.0f, 1.0f, 1.0f);
        }
    }
    up = f2dc;
    step = dt + dt;
    if (up != 0) {
        f2d8 = step + f2d8;
        if (f2d8 >= D_00276288) {
            f2dc = 0;
        }
    } else {
        f2d8 = f2d8 - step;
        if (f2d8 <= D_002755E8) {
            f2dc = 1;
        }
    }
}

void func_00054330(void) {
    int func_00031410(...);
    func_00031410();
}

int C_00054340::func_00054340() {
 f2d0=0; f2e8=0; func_00034090(); f2d4=0; f2c4=-1;
 for(int i=0;i<f90;++i) {
 if(f284[i]) { f284[i]->func_0008BB50(-1); f284[i]->v6(); }
 if(f2a4[i]) f2a4[i]->v6();
 }
 char *entry=(*(char ****)(f64+0x3b4))[0x28/4][f2c8];
 char *data=*(char **)(entry+4);
 int index=(*(TagLookup **)(f64+0x484))->func_0001B3C0(&D_00277C9C);
 char *obj=(*(char ****)(f64+0x3ac))[0x28/4][index];
 (*(TagObject ***)(obj+0x1a4))[1]->func_00199600(*(TagVector *)(data+0x24));
 (*(TagObject ***)(obj+0x1a4))[1]->func_0019AC50();
 return 1;
}

void C_00054430::func_00054430()
{
    S_00054430_V4 a;
    S_00054430_V4 b;
    S_00054430_Data *data = f64->f3b4->items[f2c8]->f4;
    S_00054430_V4 *q = &f64->f4e0->f1a8[0]->f834;
    S_00054430_V4 *pos = &data->pos;
    float ang;

    a = S_00054430_V4(data->pos.x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, &a);
    a = f64->f4e0->f1a8[0]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z) * D_00277240;
    b = *pos;
    f2a4[0]->func_00088A40((int)ang, &b);

    q = &f64->f4e0->f1a8[1]->f834;
    a = S_00054430_V4(pos->x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, &a);
    a = f64->f4e0->f1a8[1]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z) * D_00277240;
    b = *pos;
    f2a4[1]->func_00088A40((int)ang, &b);
}
