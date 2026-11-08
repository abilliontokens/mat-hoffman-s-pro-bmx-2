/* 13 functions from 0x00025240 to 0x000261F0, found by Ghidra. */
#include "common.h"

/* func_00025240: ambient object spawn over the manager's tracks and entries */
struct S_25240_Pt { float x, y, z, pad[3]; };
struct S_25240_V3 { float x, y, z; };
struct S_25240_V4 {
    float x, y, z, w;
    S_25240_V4() {}
    S_25240_V4(const S_25240_Pt *p) { x = p->x; y = p->y; z = p->z; w = 1.0f; }
    S_25240_V4(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    S_25240_V4(const S_25240_Pt &p) { *(S_25240_V3 *)this = *(const S_25240_V3 *)&p; w = 1.0f; }
};
static __forceinline void SetV4_25240(S_25240_V4 *d, const S_25240_Pt *p)
{
    *(S_25240_V3 *)d = *(const S_25240_V3 *)p;
    d->w = 1.0f;
}
static __forceinline S_25240_V4 MakeV4_25240(const S_25240_Pt *p)
{
    S_25240_V4 r;
    r.x = p->x;
    r.y = p->y;
    r.z = p->z;
    r.w = 1.0f;
    return r;
}
struct S_25240_Track { char pad0[4]; int f4; char pad8[0x10]; S_25240_Pt *f18; };
struct S_25240_Entry { int f0; int f4; };
struct S_25240_Obj { void func_00199600(S_25240_V4 v); };
struct S_25240_Hold {
    char pad0[4];
    S_25240_Obj *f4;
    char pad8[8];
    int f10;
    void func_00164820(int a);
};
struct S_25240_Y { char pad0[8]; void *f8; };
struct S_25240_Own {
    char pad0[0x1a4];
    S_25240_Hold *f1a4;
    char pad1a8[4];
    S_25240_Y *f1ac;
};
struct S_25240_Item {
    char pad0[0x28];
    S_25240_Own *f28;
    S_25240_Track *f2c;
    int f30, f34, f38, f3c, f40;
    char pad44[8];
    S_25240_V4 f4c;
    S_25240_V4 f5c;
    float f6c, f70, f74;
    char pad78[2];
    u8 f7a;
    char pad7b;
    void func_00022E30(void);
};
struct C_00025240 {
    char pad0[0x30];
    int f30;
    int f34;
    char pad38[4];
    int f3c;
    char pad40[0x20];
    S_25240_Item **f60;
    S_25240_Track **f64;
    char pad68[4];
    S_25240_Entry *f6c;
    int func_00022730(void *name, int idx);
    int func_00025240(void);
};
extern f32 D_00275460, D_0027651C, D_00275F58, D_002A0F78, D_002A0F7C;
extern char D_002A0F74[];
int func_00011260(int a0, int a1);
void func_001E891B(void *p);
void __stdcall func_00166C80(void *p, int a);
struct C_00025E10 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    C_00025E10* func_00025E10(void);
};

struct C_00026120 {
    char pad0[0x20];
    int unk20;
    void func_00026120(int a0);
};

struct C_00026110 {
    char pad0[0x28];
    float unk28;
    float func_00026110(void);
};

struct C_00026100 {
    char pad0[0x14];
    float unk14;
    float func_00026100(void);
};

struct C_000260F0 {
    char pad0[0xC];
    float unkC;
    float func_000260F0(void);
};

struct Vec4_257E0 { float x, y, z, w; };
struct C_00199B00 { void func_00199B00(Vec4_257E0 *out, int a1); };
struct C_257E0_1A4 { char pad0[4]; C_00199B00 *unk4; };
struct C_257E0_28 { char pad0[0x1A4]; C_257E0_1A4 *unk1A4; };
struct C_0001B440 { void func_0001B440(void *a0, int a1); };
struct S_00025980_G4E0 { char pad0[0x1a8]; struct S_00025980_E1A8 *f1a8[1]; };
struct C_002B9120 {
    char pad0[0x24];
    int unk24;
    char pad28[0x484 - 0x28];
    C_0001B440 *unk484;
    char pad488[0x4e0 - 0x488];
    S_00025980_G4E0 *unk4e0;
};
struct C_002B7E18 { char pad0[0x2C]; int unk2C; };
struct C_0001CE80 { void func_0001CE80(void *a, void *b, void *c, float d, float e); };
struct S_00025980_A2A4 { char pad0[0x120]; int f120; };
struct S_00025980_A2E0 { char pad0[0x10]; float f10; };
struct C_002A8490 {
    char pad0[4];
    C_0001CE80 *unk4;
    char pad8[0x124 - 8];
    int unk124;
    char pad128[0x238 - 0x128];
    int unk238;
    char pad23c[0x2a4 - 0x23c];
    S_00025980_A2A4 *unk2a4;
    char pad2a8[0x2e0 - 0x2a8];
    S_00025980_A2E0 *unk2e0;
};
extern C_002A8490 *D_002A8490;
extern C_002B7E18 *D_002B7E18;
extern C_002B9120 *D_002B9120;
extern f32 D_00275600;
int func_00011260(int a0, int a1);

struct AmbientBird {
    void *vtbl;
    char pad4[0x24];
    C_257E0_28 *unk28;
    char pad2C[0x20];
    float unk4C;
    float unk50;
    float unk54;
    float unk58;
    Vec4_257E0 unk5C;
    u32 unk6C;
    char pad70[8];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    void func_00157A00(int a0);
    void func_00023340(void);
    void func_000235C0(void);
    void func_000239F0(int a0);
    int func_000257E0(int a0);
};

extern int D_00276294;
extern f32 D_002754B0;
extern f32 D_00275460;
extern f32 D_002756DC;
extern char D_002765C4[];
extern char D_002765B8[];
extern char D_002765AC[];
extern char D_0027659C[];
extern char D_00276580[];
extern char D_0027656C[];
extern char D_0027655C[];

int func_001E8833(void);
void func_001E891B(void *p);

struct C_00168B90 {
    int func_00168B90(const char *name, void *out);
};

extern float D_00275544;
extern const float D_00276520;
extern char D_002A0F74[];
int func_001E8858(float f);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

struct S_000255D0_Part {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct S_000255D0_Id {
    int id;
    S_000255D0_Part *f4;
};

/* one bird-like instance held in the manager's list at +0x60 */
struct S_000255D0_Item {
    char pad0[4];
    S_000255D0_Part *f4;
    char pad8[0x2c];
    int f34;
    char pad38[0xc];
    int f44;
    char pad48[0x14];
    float f5c, f60, f64;
    char pad68[0x10];
    char f78;
    char f79;
    void func_00023340();
    void func_000235C0();
};

struct C_000255D0 {
    char pad0[0x24];
    float f24;
    char pad28[8];
    int f30;
    char pad34[0xc];
    int f40;
    char pad44[0x14];
    int f58;
    S_000255D0_Id **f5c;
    S_000255D0_Item **f60;
    char pad64[0x10];
    Vec4_257E0 f74;
    void func_000255D0(Vec4_257E0 *pos, float radius, float t, int chance);
};

#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline float Max_00025E50(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Min_00025E50(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
/* func_00025E50's clamps: the original has no __m128 anywhere (its frame is a bare
   `sub esp,0x10`, not the `and esp,-16` an intrinsic forces), so these are plain
   float compares that the build if-converts to maxss/minss. */
static __forceinline float MaxF_00025E50(float a, float b) { return a > b ? a : b; }
static __forceinline float MinF_00025E50(float a, float b) { return a < b ? a : b; }
static __forceinline float MaxR_00025E50(const float &a, const float &b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float MinR_00025E50(const float &a, const float &b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
extern int D_002A1030;
extern f32 D_00276558, D_00276554, D_00276550, D_00275AF4, D_0027654C, D_00276548;
extern f32 D_00275800, D_00276544, D_00276540, D_0027653C, D_002756B4, D_00276538;
extern f32 D_002755E0, D_002A1050;

struct C_00025E50 {
    void *vtbl;
    float unk4;
    float unk8;
    float unkC;
    float unk10;
    float unk14;
    float unk18;
    float unk1C;
    int unk20;
    float unk24;
    float unk28;
    float unk2C;
    float unk30;
    float unk34;
    float unk38;
    int unk3C;
    void func_00025E50(float dt);
};

struct AmbientDebris {
    void *vtbl;
    float unk4;
    float unk8;
    float unkC;
    float unk10;
    float unk14;
    float unk18;
    float unk1C;
    float unk20;
    float unk24;
    float unk28;
    float unk2C;
    void *unk30;
    void *unk34;
    float unk38;
    void func_00157660(void);
    void func_00026130(void);
    void *func_00025920(unsigned int flags);
    void func_00026170(C_00168B90 *cfg);
};


/* AmbientObjectManager: per-frame update (func_00025980) */
struct S_00025980_E1E0 { char pad0[0x22c]; C_00199B00 *f22c; };
struct S_00025980_E1A8 { char pad0[0x1e0]; S_00025980_E1E0 *f1e0; };
struct S_00025980_Pt { float x, y, z, pad[3]; };
struct S_00025980_Track {
    char pad0[4];
    int f4;
    char pad8[0x10];
    S_00025980_Pt *f18;
    char pad1c[0x10];
    char f2c;
    char pad2d;
    char f2e;
};
struct S_00025980_Item {
    char pad0[0x24];
    int f24;
    void func_000223B0(Vec4_257E0 pos, float dy);
};
struct S_00025980_Group {
    char pad0[0x14];
    int f14;
    S_00025980_Item **f18;
};

struct C_00025980 {
    void *vtbl;
    char pad4[0x20];
    float f24;
    float f28;
    int f2c;
    char pad30[4];
    int f34;
    char pad38[0xc];
    int f44;
    int f48;
    int f4c;
    char pad50[4];
    u32 f54;
    u32 f58;
    char pad5c[8];
    S_00025980_Track **f64;
    char pad68[8];
    S_00025980_Group **f70;
    Vec4_257E0 f74;
    Vec4_257E0 f84;
    void func_000255D0(Vec4_257E0 *pos, float radius, float t, int chance);
    void func_00157A00(float dt);
    int func_00025980(float dt);
};

extern double D_00276088;
extern float D_002755E8, D_00276278, D_002755EC, D_00276524, D_00276098, D_002756C8, D_002756B8;
extern float D_00275994, D_0027599C, D_002760D0, D_002760C0, D_002760B0, D_002B7E1C;
extern Vec4_257E0 D_002A0F94;
extern "C" void func_00158390(float f, Vec4_257E0 a, Vec4_257E0 b, Vec4_257E0 *out);
extern "C" float func_00161F80(float x);
static __forceinline float Sqrt_000255D0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }

static __forceinline float Rand01_00025980(void)
{
    return (float)func_001E8833() * D_002754B0;
}

static __forceinline void Normalize_00025980(float *volatile outArg, const float *volatile inArg)
{
    const float *in = inArg;
    float *out = outArg;
    __m128 v = _mm_loadu_ps(in), sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_002760D0);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_002760B0)), _mm_sub_ss(_mm_load_ss(&D_002760C0), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

int C_00025240::func_00025240(void)
{
    int n2, n1, lim, m, cnt, i, j;
    int acc, k;
    S_25240_Pt *pt;

    if (f30 <= 0)
        return 0;
    for (i = 0; i < f34; i++)
        func_00022730((char *)f64[i] + 0x30, i);
    for (i = 0; i < f30; i++)
        f60[i]->func_00022E30();
    for (i = 0; i < f3c; i++) {
        n1 = (int)((float)f64[f6c[i].f0]->f4 / ((float)f6c[i].f4 * D_0027651C));
        n2 = (int)((float)f6c[i].f4 * D_0027651C + D_00275460);
        j = 0;
        for (m = 0, acc = 0; m < n2; m++, acc += n1) {
            if (j >= f6c[i].f4)
                break;
            cnt = 0;
            k = 0;
            lim = func_00011260(3, 4);
            if (f30 > 0 && cnt < lim && j < f6c[i].f4) {
                for (; k < f30; k++) {
                    if (f60[k]->f7a == 1) {
                        f60[k]->f30 = f6c[i].f0;
                        f60[k]->f3c = f60[k]->f30;
                        f60[k]->f2c = f64[f60[k]->f30];
                        f60[k]->f34 = acc;
                        f60[k]->f40 = f60[k]->f34;
                        f60[k]->f38 = f60[k]->f34 + 1;
                        pt = &f60[k]->f2c->f18[f60[k]->f38];
                        SetV4_25240(&f60[k]->f4c, pt);
                        pt = &f60[k]->f2c->f18[f60[k]->f34];
                        f60[k]->f28->f1a4->f4->func_00199600(S_25240_V4(*pt));
                        if (f60[k]->f28->f1a4->f10 == 0)
                            func_00166C80(f60[k]->f28->f1ac->f8, 1);
                        else
                            f60[k]->f28->f1a4->func_00164820((int)f60[k]->f28->f1ac->f8);
                    }
                    f60[k]->f7a = 0;
                    cnt++;
                    j++;
                }
            }
        }
    }
    *(S_25240_V3 *)&f60[0]->f6c = *(S_25240_V3 *)D_002A0F74;
    {
        int cx = 0;
        int cz = 1;
        for (i = 0; i < f30 - 1; i++) {
            int q = i % 8;
            int g = (q >= 2);
            int m2 = i % 2;
            int a = g ? m2 : 0;
            float v1 = (float)(g * cx);
            if (a == 1)
                v1 *= D_00275F58;
            int b = (q < 2 || q >= 4);
            float v2 = (float)(b * cz);
            if (q == 1)
                v2 *= D_00275F58;
            f60[i + 1]->f6c = v1;
            f60[i + 1]->f70 = v2;
            f60[i + 1]->f74 = 0;
            if (q == 0)
                cx++;
            if (q == 7)
                cz++;
        }
    }
    if (f6c != 0) {
        func_001E891B(f6c);
        f6c = 0;
    }
    return 1;
}

void C_000255D0::func_000255D0(Vec4_257E0 * volatile pos, float radius, float t, int chance)
{
 int hits,id,i,n,k,idx[6];
 if(t != D_00275544) {
 f58=D_002A8490->unk238-(int)(*(volatile float *)&t*D_00276520);
 f74=*pos; f24=radius; return;
 }
 hits=0; id=-1;
 for(i=0;i<this->f30;i++) {
 if(this->f60[i]->f79==0) {
 Vec4_257E0 *q=pos;
 float dx=this->f60[i]->f5c-q->x;
 float dy=this->f60[i]->f60-q->y;
 float dz=this->f60[i]->f64-q->z;
 float d2=dx*dx+dy*dy+dz*dz;
 float d=AsmSqrtF(d2);
 if(d<radius) {
 this->f60[i]->func_000235C0();
 this->f60[i]->f34--;
 this->f60[i]->func_00023340();
 this->f60[i]->f79=1;
 this->f60[i]->f78=0;
 id=this->f60[i]->f44; hits++;
 }
 }
 }
 if(hits!=0 && id!=-1) {
 n=0;
 for(i=0;i<this->f40;i++) {
 if(this->f5c[i]->id==id) {
 idx[n++]=i; if(n>=6) break;
 }
 }
 if(chance!=0 && func_00011260(1,100)>50) return;
 switch(n) {
 case 0: return;
 case 1: goto single;
 default: goto multiple;
 }
 multiple:
 k=func_00011260(0,n-1);
 if(k<0) return;
 selected:
 k=idx[k];
 D_002A8490->unk4->func_0001CE80(this->f5c[k]->f4,pos,D_002A0F74,4.0f,100.0f);
 this->f5c[k]->f4->v5(4);
 }
 return;
 single: k=0; goto selected;
}

#pragma intrinsic(sqrt)
int AmbientBird::func_000257E0(volatile int a0)
{
 C_002A8490 *g = D_002A8490;
 if(g->unk124==0) {
 func_00157A00(a0);
 if(unk79==1) {
 struct { float sum; float root; } t;
 Vec4_257E0 v;
 unk28->unk1A4->unk4->func_00199B00(&v,0);
 unk5C=v;
 float dx=unk4C-unk5C.x;
 float dy=unk50-unk5C.y;
 float dz=unk54-unk5C.z;
 t.sum=dx*dx+dy*dy+dz*dz;
 t.root=AsmSqrtF(t.sum);
 if(t.root<D_00275600) {
 if(unk78!=2) func_00023340();
 func_000235C0();
 }
 }
 if(unk79==1) func_000239F0(a0);
 if(unk7B==1) {
 D_002B7E18->unk2C++;
 D_002B9120->unk484->func_0001B440(unk28,func_00011260(0,100));
 unk7B=0;
 }
 }
 return 1;
}
void *AmbientDebris::func_00025920(unsigned int flags)
{
    vtbl = &D_00276294;
    if (unk30 != 0) {
        func_001E891B(unk30);
    }
    unk30 = 0;
    if (unk34 != 0) {
        func_001E891B(unk34);
    }
    unk34 = 0;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

extern float D_002A0F80;
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int C_00025980::func_00025980(float dt)
{
    Vec4_257E0 n;
    Vec4_257E0 v;
    Vec4_257E0 w;
    Vec4_257E0 pos;
    int i;
    int j;
    int idx;
    int count;
    float a;
    float b;

    if (D_002A8490->unk124 == 0) {
        if (f58 != 0 && f58 < D_002A8490->unk238) {
            func_000255D0(&f74, f24, 0.0f, 1);
            f58 = 0;
        }
        f2c = (int)(f2c * D_002755E8);
        if (f54 < D_002A8490->unk238) {
            count = f34;
            idx = f48;
            for (i = 0; i < count; i++) {
                if (f64[idx]->f2c == 0 && f64[idx]->f2e == 0) {
                    S_00025980_Pt *pt = &f64[idx]->f18[f64[idx]->f4 - 1];
                    pos.x = pt->x;
                    pos.y = pt->y;
                    pos.z = pt->z;
                    pos.w = 1.0f;
                    func_000255D0(&pos, 32.0f, 0.0f, 1);
                    _ReadWriteBarrier();
                    idx++;
                    if (idx >= f34) {
                        idx -= f34;
                    }
                    f48 = idx;
                    f54 = (int)(D_002A8490->unk2e0->f10 * D_00276278 / f34) + D_002A8490->unk238;
                    break;
                }
                idx++;
                if (idx >= count) {
                    idx -= count;
                }
            }
        }
        for (i = 0; i < f44; i++) {
            for (j = 0; j < f70[i]->f14; j++) {
                if (f70[i]->f18[j]->f24 == 0) {
                    if (Rand01_00025980() < D_00276088) {
                        float ang;
                        D_002B9120->unk4e0->f1a8[D_002A8490->unk2a4->f120]->f1e0->f22c->func_00199B00(&v, 0);
                        w = *(Vec4_257E0 *)D_002A0F74;
                        if (D_002B9120->unk24 != 0) {
                            w.x = Rand01_00025980() * D_00275994;
                        } else {
                            w.x = Rand01_00025980() * D_0027599C + D_00275994;
                        }
                        ang = Rand01_00025980() * D_002756B8;
                        func_00158390(ang, D_002A0F94, w, &w);
                        v.x = v.x + w.x;
                        v.y = w.y + v.y;
                        v.z = w.z + v.z;
                        f70[i]->f18[j]->func_000223B0(v, 0.0f);
                    }
                }
            }
        }
        f4c++;
        if (f28 > D_00275544) {
            f28 -= dt;
            if (f28 < D_00275544) {
                f28 = 0;
            }
        }
        D_002B7E1C += dt;
        a = func_00161F80(D_002B7E1C) * D_002756C8;
        b = func_00161F80(D_002B7E1C + D_002755EC) * D_00276098;
        n.x = func_00161F80(D_002B7E1C + D_00276524) * D_00276098;
        n.y = 0;
        n.z = b;
        n.w = 1.0f;
        AsmVec3Normalize(&n.x, &n.x);
        v.x = n.x * a;
        v.y = n.y * a;
        v.z = n.z * a;
        v.w = 1.0f;
        f84 = v;
        func_00157A00(dt);
    }
    return 1;
}
C_00025E10* C_00025E10::func_00025E10(void) {
    extern int D_00276534;
    unk0 = (int)&D_00276534;
    unk20 = 0;
    unkC = 0;
    unk14 = 0;
    unk10 = 0;
    unk18 = 0;
    unk4 = 0;
    unk8 = 0;
    unk24 = 0;
    unk28 = 0;
    unk2C = 0;
    unk1C = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    return this;
}

void C_00025E50::func_00025E50(float dt)
{
    if (D_002A1030 != 0 && unk20 == 0 && unk18 <= D_00275544) {
        float t;
        unk4 += dt * unk8;
        unk4 = AsmMinF(AsmMaxF(unk4, unk24), unk28);
        t = AsmMaxF(AsmMinF(unk2C, unk2C), unk38);
        unk14 += unk10 * unk4 * t * dt;
        unk14 = AsmMinF(AsmMaxF(unk14, -1.0f), 1.0f);
        float f;
        if (unk30 > D_00276558) {
            f = (unk30 - D_00276558) * D_00276554 + D_00276550;
        } else if (unk30 > D_00275AF4) {
            f = (unk30 - D_00275AF4) * D_0027654C + D_00276548;
        } else if (unk30 > D_00275800) {
            f = (unk30 - D_00275800) * D_00276544 + D_00276540;
        } else if (unk30 > D_0027653C) {
            f = (unk30 - D_0027653C) * D_002756B4 + D_00276538;
        } else {
            f = unk30 * 0.01f;
        }
        if (unk3C != 0) {
            f *= D_002A1050;
        }
        unkC += (f + unk4) * (unkC - unk14) * dt;
        unkC = AsmMinF(AsmMaxF(unkC, -1.0f), 1.0f);
    } else if (unk18 > D_00275544) {
        unk18 -= dt;
    }
}

float C_000260F0::func_000260F0(void) {
    return unkC;
}

float C_00026100::func_00026100(void) {
    return unk14;
}

float C_00026110::func_00026110(void) {
    return unk28;
}

void C_00026120::func_00026120(int a0) {
    unk20 = a0;
}

void AmbientDebris::func_00026130(void)
{
    unk18 = unk1C;
    unk4 = unk24;
    unk14 = 0;
    f32 v = (f32)func_001E8833() * D_002754B0;
    unkC = (v + v - D_00275460) * D_002756DC;
}

void AmbientDebris::func_00026170(C_00168B90 *cfg)
{
    cfg->func_00168B90(D_002765C4, &unk8);
    cfg->func_00168B90(D_002765B8, &unk24);
    cfg->func_00168B90(D_002765AC, &unk28);
    cfg->func_00168B90(D_0027659C, &unk2C);
    cfg->func_00168B90(D_00276580, &unk34);
    cfg->func_00168B90(D_0027656C, &unk38);
    cfg->func_00168B90(D_0027655C, &unk1C);
}


