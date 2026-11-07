/* 7 functions from 0x00027860 to 0x00028130, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"
extern float D_00275544;

struct S_V4_27860 {
    float x;
    float y;
    float z;
    float w;
};

struct S_V4Id_27860 {
    float x;
    float y;
    float z;
    float w;
    S_V4Id_27860() { x = y = z = 0.0f; w = 1.0f; }
};

struct S_Phys_27860 {
    char pad0[0x130];
    float f130[3];
    char pad13C[0xD4];
    float f210;
};

struct S_Obj_27860 {
    char pad0[0x50];
    int f50;
    int f54;
    char pad58[0x10];
    int f68;
    char pad6C[0x14];
    float f80;
    char pad84[0x11C];
    float f1A0[4];
};

struct C_00027860 {
    char pad0[0x10C];
    float f10C[4];
    char pad11C[0x1E0 - 0x11C];
    S_Phys_27860 *f1E0;
    char pad1E4[4];
    S_Obj_27860 *f1E8;
    char pad1EC[0x59C - 0x1EC];
    float f59C;
    char pad5A0[0x5CC - 0x5A0];
    float f5CC;
    float f5D0;
    float f5D4;
    float f5D8;
    float f5DC;
    float f5E0;
    float f5E4;
    char pad5E8[0x744 - 0x5E8];
    float f744;
    float f748[4];
    void func_00027860(float dt);
};

extern float D_002756DC;
extern float D_002A1150;
extern float D_00275BF8;
extern float D_00275544;
void func_000265C0(float *out, float *a, float *b, float *c, int d, int e);
S_V4_27860 func_00026880(float *v, float *m);
S_V4_27860 func_000267F0(float *v, float *m);
void func_0014FD80(float *p);

static __forceinline float Max_27860(float a, float b) { float r; __m128 x = _mm_load_ss(&a); __m128 y = _mm_load_ss(&b); _mm_store_ss(&r, _mm_max_ss(x, y)); return r; }
static __forceinline float Min_27860(float a, float b) { float r; __m128 x = _mm_load_ss(&a); __m128 y = _mm_load_ss(&b); _mm_store_ss(&r, _mm_min_ss(x, y)); return r; }
inline void Cross_27860(float *out, float *a, float *b)
{
    _mm_storeu_ps(out, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))), 0xc9));
}

struct C_00027C30 {
    char pad0[0x4F4];
    int unk4F4;
    int unk4F8;
    char pad4FC[0x3C];
    int unk538;
    char pad53C[0x15C];
    int unk698;
    void func_00027C30(void);
};

struct C_00027D40 {
    char pad0[0x56C];
    int unk56C;
    char pad570[0x10];
    int unk580;
    char pad584[0x4];
    int unk588;
    void func_00027D40(void);
};


struct C_00197B40 {
    void func_00197B40(float *a, float *b);
};

struct V4_00027C50 {
    float x;
    float y;
    float z;
    float w;
};

extern float D_00275544;
extern float D_00275F58;

struct C_00027C50 {
    char pad0[0x230];
    C_00197B40 *unk230;
    char pad234[0x338];
    int unk56C;
    char pad570[0x10];
    float unk580;
    int unk584;
    int unk588;
    void func_00027C50(float scale);
};

float *func_0001E9E0(float *out, float *in);

struct S_28070_Sound {
    char pad0[0x7C];
    void (*unk7C)(int, S_28070_Sound *, int, int);
    int unk80;
};

struct S_28070_Source {
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
    virtual S_28070_Sound *v27();
};

struct S_28070_Owner {
    char pad0[0x2C];
    int unk2C;
};

struct S_28070_Voice {
    char pad0[0x30];
    int unk30;
    int unk34;
};

extern float D_00275544;

struct AmbientDebris {
    void func_00026130(void);
};

struct C_000262B0 : AmbientDebris {
    void func_000262B0(void);
};

struct S_28070_Manager {
    char pad0[0x64];
    int unk64;
};

struct C_00028070 {
    char pad0[0x1E8];
    S_28070_Manager *unk1E8;
    char pad1EC[0x8];
    S_28070_Owner *unk1F4;
    char pad1F8[0x18];
    S_28070_Voice *unk210;
    S_28070_Source *unk214;
    S_28070_Source *unk218;
    char pad21C[0x238];
    int unk454;
    char pad458[0x4];
    float unk45C;
    char pad460[0x8];
    int unk468;
    char pad46C[0x4];
    int unk470;
    char pad474[0xC];
    int unk480;
    int unk484;
    int unk488;
    char pad48C[0x6C];
    int unk4F8;
    char pad4FC[0xEC];
    int unk5E8;
    C_000262B0 *unk5EC;
    C_000262B0 *unk5F0;
    C_000262B0 *unk5F4;
    char pad5F8[0xA0];
    int unk698;
    char pad69C[0x84];
    S_28070_Sound *unk720;
    int unk724;
    char pad728[0x14];
    int unk73C;
    int unk740;
    void func_00027D60(void);
    void func_00028070(void);
};


static __forceinline float Max_E(float a,float b) { float r; _mm_store_ss(&r,_mm_max_ss(*(__m128 *)&a,*(__m128 *)&b)); return r; }
static __forceinline float Min_E(float a,float b) { float r; _mm_store_ss(&r,_mm_min_ss(*(__m128 *)&a,*(__m128 *)&b)); return r; }
static __forceinline float MaxE_27E40(float a, float b) { return a > b ? a : b; }
static __forceinline float MinE_27E40(float a, float b) { return a < b ? a : b; }
static __forceinline float MaxL_27E40(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float MinL_27E40(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
struct E_Vec { char p0[0x14]; char *name; char p18[0x28]; float x, y, z; };
struct E_Mid { char p0[0x14]; char *name; char p18[0x18]; E_Vec *vec; void func_00012140(); };
struct E_Phys { char p0[0x238]; float x, y, z; };
struct E_Lim { char p0[0x3C]; float lim; };
struct E_Name { char p0[0x14]; char *name; };
struct E_Rec { void func_000261F0(float f); };
struct C_00027E40 {
    char p0[0x1E0]; E_Phys *phys; char p1e4[0x8]; E_Lim *lim; char p1f0[0x20]; E_Mid *mid;
    char p214[0x230]; int u444; char p448[0x20]; int u468; char p46c[4]; int u470; char p474[4]; int u478;
    char p47c[0x10]; int u48c; char p490[0x158]; int u5e8; E_Rec *u5ec; char p5f0[8]; float u5f8; float u5fc;
    char p600[0x118]; int u718; int u71c; char p720[4]; E_Name *u724;
    void func_00027E40(void);
};

void C_00027860::func_00027860(float dt)
{
    S_V4_27860 t;
    __declspec(align(16)) float m[12];

    t.z = 0.0f;
    if (this->f1E8->f68 != 0) {
        S_V4_27860 v;
        S_V4Id_27860 v1;
        S_V4Id_27860 v2;
        float s;
        float neg;
        float tmp;

        AsmVec3Cross(&v1.x, this->f10C, this->f1E8->f1A0);
        AsmVec3Cross(&v2.x, this->f1E8->f1A0, &v1.x);
        v.x = 0.0f;
        v.y = 0.0f;
        v.z = 0.0f;
        v.w = 0.0f;
        func_000265C0(m, &v.x, &v2.x, this->f1E8->f1A0, 0, 1);
        t = func_00026880(this->f748, m);
        s = AsmMinF(AsmMaxF(t.z * D_002756DC, -1.0f), 1.0f);
        neg = -(AsmMaxF(this->f5CC, 0.0f) * this->f5D4);
        tmp = AsmMinF(this->f59C - this->f744, 0.0f);
        v.w = 1.0f;
        v.x = 0.0f;
        v.y = 0.0f;
        v.z = (tmp * D_002A1150 + neg - this->f5D0) * this->f1E0->f210 * s * D_00275BF8 * this->f1E8->f80;
        S_V4_27860 r = func_000267F0(&v.x, m);
        float *p = this->f1E0->f130;
        p[0] += r.x;
        p[1] += r.y;
        p[2] += r.z;
    }
    if (this->f1E8->f50 != 0) {
        this->f5D8 = t.z * this->f1E8->f80;
    } else if (this->f5CC > D_00275544) {
        this->f5D8 = 0.0f;
    }
    if (this->f1E8->f54 != 0) {
        this->f5DC = t.z * this->f1E8->f80;
    } else if (this->f5CC > D_00275544) {
        this->f5DC = 0.0f;
    }
    this->f5E0 = dt * this->f5D8 + this->f5E0;
    this->f5E4 = dt * this->f5DC + this->f5E4;
    func_0014FD80(&this->f5E0);
    func_0014FD80(&this->f5E4);
}

void C_00027C30::func_00027C30(void) {
    unk4F4 = 0;
    unk4F8 = 0;
    unk538 = 0;
    unk698 = 0;
}

void C_00027C50::func_00027C50(float scale) {
    float d;
    V4_00027C50 a;
    V4_00027C50 b;
    V4_00027C50 c;

    a.z = 0.0f;
    a.y = 0.0f;
    a.x = 0.0f;
    a.w = 1.0f;
    b.z = 0.0f;
    b.y = 0.0f;
    b.x = 0.0f;
    b.w = 1.0f;
    unk230->func_00197B40(&a.x, &b.x);
    a = *(V4_00027C50 *)func_0001E9E0(&c.x, &a.x);
    d = a.y * -1.0f;
    d = d + a.x * 0.0f;
    d = d + a.z * 0.0f;
    unk580 = d * scale;
    if (unk580 < 0.0f) {
        unk580 = 0.0f;
    }
    unk56C = 1;
    unk588 = unk584;
}

void C_00027D40::func_00027D40(void) {
    unk56C = 0;
    unk588 = 0;
    unk580 = 0;
}

void C_00028070::func_00027D60(void) {
 int state;
 if (unk468 != 0) { unk5E8 = (unk470 != 0) ? 5 : 1; }
 else {
 state = unk5E8;
 if (state == 1 && unk4F8 != 0) unk5E8 = 2;
 else if (unk454 != 0) unk5E8 = 3;
 else if (state == 3 && unk698 != 0) unk5E8 = 4;
 else if (unk1E8->unk64 != 0 && unk45C == D_00275544) unk5E8 = 0;
 }
 if (unk5E8 == 0) {
 unk5EC->func_00026130();
 unk5F0->func_00026130();
 unk5F4->func_00026130();
 unk724 = 0;
 }
}

void C_00027E40::func_00027E40() {
 C_00027E40 *self=this;
 self->u468=1; self->u444=0; self->u48c=0;
 if(self->u470==0) {
  self->u478=0;
  self->mid->func_00012140();
  E_Phys *p=self->phys; E_Vec *v=self->mid->vec;
  float dot=p->x*v->x+p->y*v->y+p->z*v->z;
  S_V4_27860 t; t.x=dot*v->x;t.y=dot*v->y;t.z=dot*v->z;
  p->x-=t.x;p->y-=t.y;p->z-=t.z;
  float f=Min_E(Max_E(dot,-self->lim->lim),self->lim->lim);
  v=self->mid->vec;
  t.x=f*v->x;t.y=f*v->y;t.z=f*v->z;
  p=self->phys;p->x+=t.x;p->y+=t.y;p->z+=t.z;
 }
 if(self->u5e8==2 && self->u724 && strcmp(self->u724->name,self->mid->vec->name)==0) {
  if(self->u718==self->u71c) self->u5ec->func_000261F0(self->u5f8*2);
  else self->u5ec->func_000261F0(self->u5f8);
 } else self->u5ec->func_000261F0(-self->u5fc);
}

extern "C" void func_000262B0(void);
void C_00028070::func_00028070(void) {
    S_28070_Sound *sound;

    if (unk470 != 0 && unk740 != 0) {
        if (unk480 == 0) {
            sound = unk218->v27();
        } else {
            sound = unk214->v27();
        }
    } else {
        sound = unk720;
        if (sound == 0 || unk73C == 0) {
            goto done;
        }
    }
    if (sound->unk7C != 0) {
        sound->unk7C(unk1F4->unk2C, sound, sound->unk80, 0);
    }
done:
    unk720 = 0;
    unk468 = 0;
    unk470 = 0;
    if (unk5EC != 0) {
        unk5EC->func_000262B0();
    }
    unk484 = 0;
    unk488 = 0;
    if (unk210 != 0) {
        unk210->unk30 = 0;
        unk210->unk34 = 0;
    }
}

