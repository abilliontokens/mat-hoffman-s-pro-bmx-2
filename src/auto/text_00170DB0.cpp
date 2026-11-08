/* 11 functions from 0x00170DB0 to 0x00171D00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00288B4C;
extern int D_00288C44;
void func_001E891B(void *);
void __stdcall func_00171340(int a);

struct C_000264C0 {
    void func_000264C0(void *param_1);
};

struct C_001712A0 {
    int unk0;
    void func_00171980(void);
    void *func_001712A0(int flags);
};

struct C_00171230 {
    char pad0[0x22C];
    int unk22C;
    void func_00157A00(int a);
    void func_00171230(int a);
};

struct C_00171270 {
    int unk0;
    char pad4[0x1AC];
    int unk1B0;
    void func_00170B60(void);
    void *func_00171270(int a);
};

struct C_00171980 {
    int unk0;
    char pad4[0x22C];
    int unk230;
    void func_00157660(void);
    void func_00171980(void);
};

struct V4_00171340 { float x, y, z, w; };
__declspec(align(16)) struct Mat_00171340 { float m[16]; };

struct C_00171340 {
    void *vtbl;
    char pad4[0x20];
    int u24;
    int f28;
    V4_00171340 f2c, f3c, f4c, f5c, f6c, f7c, f8c, f9c;
    char padAC[4];
    Mat_00171340 fB0;
    Mat_00171340 fF0;
    V4_00171340 f130, f140, f150, f160, f170, f180, f190, f1a0;
    int pad1B0;
    int f1b4, f1b8, f1bc;
    char pad1C0[0x20];
    int f1e0;
    char pad1E4[0x20];
    int f204, f208, f20c, f210, f214;
    int f218, f21c, f220, f224;
    int f228, f22c, f230;
    void *f234;
    V4_00171340 f238, f248, f258, f268;
    void func_00157600(int a);
    void *func_00171340(int a);
};

extern V4_00171340 D_002A8AC8;
extern V4_00171340 D_002EF740;
extern float D_002A8ACC, D_002A8AD0, D_002A8AD4;
extern float D_002EF744, D_002EF748, D_002EF74C;
void __cdecl func_00161C70(void);

static __forceinline void InitA_00171340(V4_00171340 *p) { p->z = 0; p->y = 0; p->x = 0; p->w = 1.0f; }
static __forceinline void InitC_00171340(V4_00171340 *p) { p->w = 1.0f; p->z = 0; p->y = 0; p->x = 0; }

struct C_001719B0 {
    void func_001719B0(int param_1);
};

extern float D_00275544;
extern float D_00275460;

struct C_001719D0 {
    char pad0[0x210];
    float f210;
    float f214;
    void func_001719D0(float param);
};

void func_00162210(void *a, void *b);

struct C_00171A00 {
    char pad0[0xB0];
    C_000264C0 fB0;
    char padB1[0xF0 - 0xB1];
    char fF0;
    void func_00171A00(void *param_1);
};

#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline void Zero_00171340(Mat_00171340 * volatile &p)
{
    Mat_00171340 *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
}

void func_001712D0(float *out, void *in);

static __forceinline float Sqrt_00171BA0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline float Max_00171BA0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline void SqrtR_00171BA0(float *r, const float &x) { _mm_store_ss(r, _mm_sqrt_ss(_mm_load_ss(&x))); }
static __forceinline void MaxR_00171BA0(float *r, const float &a, const float &b) { _mm_store_ss(r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); }

struct V3_00171BA0 {
    float x, y, z, w;
    V3_00171BA0() {}
    V3_00171BA0(float a, float b, float c) : x(a), y(b), z(c) {}
    V3_00171BA0 operator*(const float &s) const { return V3_00171BA0(x * s, y * s, z * s); }
    V3_00171BA0 operator+(const V3_00171BA0 &o) const { return V3_00171BA0(x + o.x, y + o.y, z + o.z); }
    V3_00171BA0 operator-(const V3_00171BA0 &o) const { return V3_00171BA0(x - o.x, y - o.y, z - o.z); }
    void operator+=(const V3_00171BA0 &o) { x += o.x; y += o.y; z += o.z; }
};

struct C_00171BA0 {
    char pad0[0x150];
    float f150;
    float f154;
    float f158;
    void func_00171BA0(float x, float y, float z, float w);
};


struct V4_170DB0 { float x,y,z,w; };
struct Model_170DB0 { V4_170DB0 func_00198040(V4_170DB0 *); };
struct PhysicsAnimatedBody {
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
    virtual V4_170DB0 getLocal();
    char pad4[0x228];
    Model_170DB0 *model;
    char pad230[8];
    V4_170DB0 local, world;
    V4_170DB0 func_00170DB0();
};

V4_170DB0 PhysicsAnimatedBody::func_00170DB0()
{
    local = getLocal();
    V4_170DB0 input = local;
    world = model->func_00198040(&input);
    return world;
}

void C_00171230::func_00171230(int a) {
    ((C_000264C0 *)((char *)this + 0x2c0))->func_000264C0((char *)this + 0x280);
    ((C_000264C0 *)((char *)this + 0x280))->func_000264C0((void *)(unk22C + 0xf0));
    func_00157A00(a);
}

void *C_00171270::func_00171270(int a) {
    func_00171340(a);
    unk0 = (int)&D_00288B4C;
    unk1B0 = 2;
    func_00170B60();
    return this;
}

void *C_001712A0::func_001712A0(int flags) {
    unk0 = (int)&D_00288B4C;
    func_00171980();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_001712D0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void *C_00171340::func_00171340(int a)
{
    func_00157600(a);
    this->vtbl = (void *)&D_00288C44;
    InitA_00171340(&this->f2c);
    InitA_00171340(&this->f3c);
    InitA_00171340(&this->f4c);
    InitA_00171340(&this->f5c);
    InitA_00171340(&this->f6c);
    InitA_00171340(&this->f7c);
    InitA_00171340(&this->f8c);
    InitA_00171340(&this->f9c);
    InitA_00171340(&this->f130);
    InitA_00171340(&this->f140);
    InitA_00171340(&this->f150);
    InitA_00171340(&this->f160);
    InitC_00171340(&this->f170);
    InitC_00171340(&this->f180);
    InitC_00171340(&this->f190);
    InitC_00171340(&this->f238);
    InitC_00171340(&this->f248);
    InitC_00171340(&this->f258);
    InitC_00171340(&this->f268);
    this->f1b4 = 1;
    this->f1b8 = 0;
    this->u24 = 0;
    this->f2c = D_002A8AC8;
    this->f3c = D_002A8AC8;
    this->f4c = D_002A8AC8;
    this->f238 = D_002A8AC8;
    this->f248 = D_002A8AC8;
    this->f258 = D_002A8AC8;
    this->f268 = D_002A8AC8;
    this->f6c = D_002A8AC8;
    this->f7c = D_002A8AC8;
    this->f150 = D_002A8AC8;
    this->f160 = D_002A8AC8;
    this->f170 = D_002A8AC8;
    this->f180 = D_002A8AC8;
    this->f1a0 = D_002EF740;
    this->f8c = D_002A8AC8;
    this->f218 = 0x4963d241;
    this->f21c = 0x48742400;
    this->f220 = 0x468e6200;
    this->f224 = 0x441c4000;
    this->f210 = 0;
    this->f214 = 0;
    this->f28 = 0;
    this->f228 = 0;
    AsmZeroMatrix((void *)&this->fB0);
    AsmZeroMatrix((void *)&this->fF0);
    this->f9c = D_002A8AC8;
    this->f234 = (void *)func_00161C70;
    this->f190 = D_002A8AC8;
    this->f208 = 0;
    this->f20c = 0;
    this->f230 = 0;
    this->f22c = 0;
    this->f1bc = 0;
    this->f1e0 = 0;
    this->f204 = 0;
    return this;
}

void C_00171980::func_00171980(void) {
    void *p = (void *)unk230;
    unk0 = (int)&D_00288C44;
    if (p != 0) {
        func_001E891B(p);
    }
    func_00157660();
}

void C_001719B0::func_001719B0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(int *)(in_ECX + 0x22c) = param_1;
  }
  return;
}

void C_001719D0::func_001719D0(float param)
{
    if (param > D_00275544) {
        float inv = D_00275460 / param;
        f210 = param;
        f214 = inv;
    }
}

void C_00171A00::func_00171A00(void *param_1)
{
    fB0.func_000264C0(param_1);
    func_00162210(&fF0, &fB0);
}

void C_00171BA0::func_00171BA0(float x,float y,float z,float w)
{
 float v[4];
 v[2]=0.0f; v[1]=0.0f; v[0]=0.0f; v[3]=1.0f;
 func_001712D0(v,(char *)this+0x150);
 V3_00171BA0 &up=*(V3_00171BA0 *)v;
 float d=y*v[1]+x*v[0]+z*v[2];
 V3_00171BA0 r=V3_00171BA0(x,y,z)-up*d;
 float *f=(float *)((char *)this+0x150);
 float len2=f[0]*f[0]+f[1]*f[1]+f[2]*f[2];
 float len=AsmSqrtF(len2);
 float zero=0.0f;
 float t=AsmMaxF(d-len, zero);
 *(V3_00171BA0 *)f+=up*t+r;
}

