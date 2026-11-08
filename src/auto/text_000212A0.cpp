/* 17 functions from 0x000212A0 to 0x00022060, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"
static __forceinline void Sqrt_00021AB0(float *dst, float square) { _mm_store_ss(dst, _mm_sqrt_ss(*(__m128 *)&square)); }

extern float D_002760D0, D_002760C0, D_002760B0;
extern float D_00275544;
extern float D_00275994, D_0027554C, D_00275818, D_00276210;
extern char **D_002EFDB8;
struct C_001C5C50 { int func_001C5C50(void *, void *, void *, void *, void *); };
extern C_001C5C50 *D_002AB66C;
extern int D_002760E4;
extern u32 D_002A0F74;
extern u32 D_002A0F78;
extern u32 D_002A0F7C;
extern u32 D_002A0F80;
extern char *D_002A8490;
extern float D_002755EC;
extern float D_0027622C, D_00276228, D_00276224, D_00276220, D_0027621C, D_00275800, D_002754B0, D_00275AEC;
extern u32 D_002A0F94, D_002A0F98, D_002A0F9C, D_002A0FA0;

extern u32 D_002761A4;
extern char D_0027618C;
extern char D_00276180;
extern char D_00276174;
extern char D_00276164;
extern char D_00276150;

void func_001E891B(void *p);
struct C_000214B0_A { int f0; int f4; int f8; int fC; int f10; int f14; void *f18; };
struct C_000214B0_B { int f0; int f4; int f8; int fC; void *f10; };
struct C_000214B0 {
    void *vtbl;
    char pad4[0x2c];
    int f30;
    int f34;
    int f38;
    char pad3c[4];
    int f40;
    char pad44[0x18];
    void **f5c;
    void *f60;
    C_000214B0_A **f64;
    C_000214B0_B **f68;
    void func_00157660(void);
    void func_000214B0(void);
};
void *func_001E8A44(int size);
int func_001E8AF0(const char *, const char *);
struct C_00021600_Item { char pad0[0xc]; char *fc; };
struct C_00021600_Group { char pad0[0x24]; int f24; C_00021600_Item **f28; };
struct C_00021600_Global { char pad0[0x340]; int f340; char pad344[0x6c]; C_00021600_Group **f3b0; };
extern C_00021600_Global *D_002B9120;
struct C_00021600 { char pad0[0x44]; int f44; int func_00021600(const char *name, char value); };

struct V4_000212A0 {
    float x, y, z, w;
};

/* the config reader passed to the load functions */
struct S_Stream_000212A0 {
    void func_00168CB0(void *key, void *def, void *dst);
    void func_00168C20(void *key, int def, void *dst);
};

/* 0x20-byte object: four ints and a position vector */
struct C_00021740 {
    int f0;
    int f4;
    int f8;
    int fC;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1C;
    C_00021740 *init(void)
    {
        f18 = 0;
        f14 = 0;
        f10 = 0;
        f1C = 0x3f800000;
        return this;
    }
    void func_00021740(S_Stream_000212A0 *stream, int base);
};

struct S_000217F0_Model {
    virtual void v0();
    virtual void v1(S_Stream_000212A0 *stream);
    int f4;
    S_000217F0_Model *func_001B5110(void);
};

struct C_00021890 {
    char pad0[0x24];
    C_00021740 *f24;
    S_000217F0_Model *f28;
    void func_00021890(S_Stream_000212A0 *stream, int base);
};

struct S_00021A20_List {
    int f0;
    int count;
};

struct C_00021A20 {
    char pad0[0x2c];
    S_00021A20_List *f2c;
    char pad30[4];
    int f34;
    int f38;
    void func_00021A20(void);
};

struct C_000217F0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2c;
    int f30;
    u32 f34;
    u32 f38;
    int f3c;
    u32 f40;
    int f44;
    u32 f48;
    u32 f4c;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    u32 f70;
    u32 f74;
    char pad78[2];
    char f7a;
    char f7b;
    C_000217F0 *func_000217F0(int a);
    void func_001578D0();
    int func_00021910();
};

inline float Dot3_000212A0(V4_000212A0 *p, V4_000212A0 *q)
{
    return p->y * q->y + p->x * q->x + p->z * q->z;
}

void func_000212C0(V4_000212A0 *out, V4_000212A0 *in);

struct W4_000212A0 {
    u32 x, y, z, w;
    W4_000212A0 *func_000212A0(u32 *p);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_000213F0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4c;
    char pad50[4];
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    char pad70[4];
    u32 f74;
    u32 f78;
    u32 f7c;
    u32 f80;
    u32 f84;
    u32 f88;
    u32 f8c;
    u32 f90;
    u32 f94;
    u32 f98;
    u32 f9c;
    u32 fa0;
    C_000213F0 *func_000213F0(int a);
};

struct S_000216F0_Ent {
    int f0;
    int f4;
    int f8;
    int *fc;
};

struct C_000216F0 {
    char pad0[0x70];
    S_000216F0_Ent **f70;
    void func_000216F0(int a0, int idx, int val);
};

struct C_000219E0_Mgr {
    char pad0[0x10];
    int unk10;
    void func_00166C80(int a, int b);
    void func_00164820(int a);
};

struct C_000219E0_Owner {
    char pad0[0x1a4];
    C_000219E0_Mgr *f1a4;
    char pad1a8[4];
    int *f1ac;
};

struct C_000219E0 {
    char pad0[0x28];
    C_000219E0_Owner *f28;
    void func_000219E0(int idx);
};

struct S_00021A50_Ent {
    int f0;
    int f4;
};

struct S_00021A50_Mgr {
    char pad0[0x34];
    int f34;
    char pad38[0x14];
    int f4c;
    int f50;
    char pad54[0x10];
    S_00021A50_Ent **f64;
    char pad68[0x1c];
    float f84, f88, f8c;
};

extern S_00021A50_Mgr *D_002B7E18;

struct S_00021B90_50 {
    char pad0[0x1c];
    float f1c;
    float f20;
    float f24;
};

struct C_00021B90 {
    float f0;
    float f4;
    float f8;
    float fC;
    int f10;
    char pad14[0x1c];
    V4_000212A0 f30;
    float f40;
    char pad44[4];
    int f48;
    char pad4c[4];
    S_00021B90_50 *f50;
    int func_00021B90(float dt, V4_000212A0 v, float a6);
};

struct C_00021A50 {
    char pad0[0x2c];
    S_00021A50_Ent *f2c;
    int f30;
    int f34;
    void func_00021A20();
    int func_00021A50(int idx, int v);
};

struct C_00021720 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00021720* func_00021720(void);
};


static inline void SetClamped_00021740(int *dst, int v)
{
    *dst = v;
    if (*dst < 0) {
        *dst = 0;
    }
}

W4_000212A0 *W4_000212A0::func_000212A0(u32 *p)
{
    x = p[0];
    y = p[1];
    z = p[2];
    w = 0x3f800000;
    return this;
}

void func_000212C0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

float *func_00021330(V4_000212A0 *out, V4_000212A0 *a, V4_000212A0 *b)
{
    float v[4];
    V4_000212A0 r;
    float d;
    float p0, p1, p2;

    p0 = a->x * b->x;
    p1 = b->y * a->y;
    d = p0 + p1;
    p2 = b->z * a->z;
    d = d + p2;
    v[0] = d * b->x;
    v[1] = d * b->y;
    v[2] = d * b->z;
    r.x = a->x - v[0];
    r.y = a->y - v[1];
    r.z = a->z - v[2];
    r.w = 1.0f;
    *out = r;
    if (out->x == D_00275544 && out->y == D_00275544 && out->z == D_00275544) {
        return 0;
    }
    return &out->x;
}

C_000213F0 *C_000213F0::func_000213F0(int a)
{
    u32 *p;

    ((C_00157600 *)this)->func_00157600(a);
    vtbl = &D_002760E4;
    p = &f74;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f84;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f94;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f2c = 0;
    f48 = 0;
    f54 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    f60 = 0;
    f64 = 0;
    f68 = 0;
    f6c = 0;
    f5c = 0;
    f44 = 0;
    f58 = 0;
    f74 = D_002A0F74;
    f78 = D_002A0F78;
    f7c = D_002A0F7C;
    f80 = D_002A0F80;
    f24 = 0;
    f4c = 0;
    f28 = 0;
    return this;
}

void C_000214B0::func_000214B0(void)
{
    int i;

    vtbl = &D_002760E4;
    if (f60 != 0) {
        func_001E891B(f60);
        f60 = 0;
        f30 = 0;
    }
    if (f5c != 0) {
        for (i = 0; i < f40; i++) {
            func_001E891B(f5c[i]);
            f5c[i] = 0;
        }
        if (f5c != 0) {
            func_001E891B(f5c);
            f5c = 0;
            f40 = 0;
        }
    }
    if (f64 != 0) {
        for (i = 0; i < f34; i++) {
            if (f64[i]->f18 != 0) {
                func_001E891B(f64[i]->f18);
                f64[i]->f18 = 0;
                f64[i]->f4 = 0;
            }
            func_001E891B(f64[i]);
            f64[i] = 0;
        }
        if (f64 != 0) {
            func_001E891B(f64);
            f64 = 0;
            f34 = 0;
        }
    }
    if (f68 != 0) {
        for (i = 0; i < f38; i++) {
            if (f68[i]->f10 != 0) {
                func_001E891B(f68[i]->f10);
                f68[i]->f10 = 0;
                f68[i]->f0 = 0;
            }
            func_001E891B(f68[i]);
            f68[i] = 0;
        }
        if (f68 != 0) {
            func_001E891B(f68);
            f68 = 0;
            f38 = 0;
        }
    }
    func_00157660();
}

int C_00021600::func_00021600(const char *name, char value) {
 if (f44<=0) return 0;
 for(int i=0;i<f44;i++) {
  for(int j=0;j<D_002B9120->f340;j++) {
   for(int k=0;k<D_002B9120->f3b0[j]->f24;k++) {
    if(func_001E8AF0(name,D_002B9120->f3b0[j]->f28[k]->fc+4))
     D_002B9120->f3b0[j]->f28[k]->fc[0x14c]=value;
   }
  }
 }
 return 1;
}

void C_000216F0::func_000216F0(int a0, int idx, int val)
{
    f70[idx - 1]->fc[f70[idx - 1]->f4] = val;
    f70[idx - 1]->f4++;
}

C_00021720* C_00021720::func_00021720(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unk14 = 0;
    unk10 = 0;
    unkC = 0;
    return this;
}

void C_00021740::func_00021740(S_Stream_000212A0 *stream, int base)
{
    int a;
    int b;

    stream->func_00168CB0(&D_0027618C, &D_002A0F74, &f10);
    stream->func_00168C20(&D_00276180, 0, &f8);
    stream->func_00168C20(&D_00276174, -1, &a);
    SetClamped_00021740(&fC, a - 1);
    stream->func_00168C20(&D_00276164, 0, &b);
    SetClamped_00021740(&f0, base + b - 1);
    stream->func_00168C20(&D_00276150, 1, &b);
    SetClamped_00021740(&f4, b - 1);
}

C_000217F0 *C_000217F0::func_000217F0(int a)
{
    u32 *p;

    ((C_00157600 *)this)->func_00157600(a);
    vtbl = &D_002761A4;
    p = &f4c;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f5c;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f74 = 0;
    f70 = 0;
    f6c = 0;
    f2c = 0;
    f34 = 0;
    f40 = 0;
    f30 = -1;
    f3c = -1;
    f38 = 1;
    f4c = D_002A0F74;
    f50 = D_002A0F78;
    f54 = D_002A0F7C;
    f58 = D_002A0F80;
    f28 = 0;
    f24 = 0;
    f7a = 0;
    f48 = 0;
    f7b = 1;
    f44 = -1;
    return this;
}

void C_00021890::func_00021890(S_Stream_000212A0 *stream, int base)
{
    void *mem = func_001E8A44(0x1b0);
    S_000217F0_Model *m = mem != 0 ? ((S_000217F0_Model *)mem)->func_001B5110() : 0;

    f28 = m;
    f28->f4 = 1;
    f28->v1(stream);
    mem = func_001E8A44(0x20);
    f24 = mem != 0 ? ((C_00021740 *)mem)->init() : 0;
    f24->func_00021740(stream, base);
}

int C_000217F0::func_00021910()
{
 func_001578D0();
 int n = *(int *)((char *)D_002B7E18 + 0x2c);
 float limit;
 if(n>5) { if(n>10) limit=D_00275994; else limit=D_0027554C; } else limit=D_00275818;
 char *p=*(char **)(*(char **)(f28+0x1a4)+4);
 if(limit > *(float *)(p+0x1b0)) {
  if(*(float *)(p+0x1b0)<D_00276210) {
   f7b=1;
  } else {
   V4_000212A0 v;
   int out;
   v.x=v.y=v.z=0; v.w=1;
   char *obj=D_002EFDB8[1];
   if(D_002AB66C->func_001C5C50(obj,obj+0xf0,&f5c,&v,&out)==1) f7b=1;
  }
 }
 return 1;
}

void C_000219E0::func_000219E0(int idx)
{
    C_000219E0_Mgr *mgr = f28->f1a4;
    if (mgr->unk10 == 0) {
        mgr->func_00166C80(f28->f1ac[idx], 1);
    } else {
        mgr->func_00164820(f28->f1ac[idx]);
    }
}

void C_00021A20::func_00021A20(void)
{
    if (f34 < 0 || f34 >= f2c->count) {
        f34 = 0;
    }
    f38 = f34 + 1;
    if (f38 >= f2c->count) {
        f38 = 0;
    }
}

int C_00021A50::func_00021A50(int idx, int v)
{
    int n;
    if (idx >= 0 && idx < D_002B7E18->f34 && D_002B7E18->f64[idx]->f4 != 0) {
        f2c = D_002B7E18->f64[idx];
        f30 = idx;
        n = v;
        if (n != 0) {
            n = n - 1;
            if (n < 0) {
                n = D_002B7E18->f64[idx]->f4 - 1;
            }
        }
        f34 = n;
        func_00021A20();
        return 1;
    }
    return 0;
}

float func_00021AB0(V4_000212A0 *v, float maxLen)
{
    V4_000212A0 n;
    V4_000212A0 r;
    float len;
    float diff;

    len = AsmSqrtF(v->x * v->x + v->y * v->y + v->z * v->z);
    if (len > maxLen) {
        n.z = 0.0f;
        n.y = 0.0f;
        n.x = 0.0f;
        n.w = 1.0f;
        func_000212C0(&n, v);
        r.x = n.x * maxLen;
        r.y = n.y * maxLen;
        r.z = n.z * maxLen;
        r.w = 1.0f;
        diff = len - maxLen;
        *v = r;
        return diff;
    }
    return D_00275544;
}

extern "C" int __cdecl func_001E8833(void);
void func_00158390(float r, V4_000212A0 a, V4_000212A0 b, V4_000212A0 *out);
V4_000212A0 *func_0001E9E0(V4_000212A0 *a, V4_000212A0 *b);
int C_00021B90::func_00021B90(float dt, V4_000212A0 v, float a6)
{
    V4_000212A0 p;
    V4_000212A0 q;
    V4_000212A0 d;
    V4_000212A0 d1;
    V4_000212A0 d2;
    float len;
    float t;
    int n, m, id, a, b;
    int idx;
    void *o;
    V4_000212A0 *pv;

    f40 += dt;
    p.x = *(float *)&D_002A0F74;
    p.y = *(float *)&D_002A0F78;
    p.z = *(float *)&D_002A0F7C;
    p.w = *(float *)&D_002A0F80;
    if (a6 < D_002755EC) {
        idx = *(int *)((char *)*(void **)((char *)D_002A8490 + 0x2a4) + 0x120);
        o = *(void **)((char *)*(void **)((char *)*(void **)((char *)D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x1e0);
        pv = (V4_000212A0 *)((char *)o + 0x238);
        len = AsmSqrtF(pv->x * pv->x + pv->y * pv->y + pv->z * pv->z);
        if (f50->f1c + f50->f1c < len) {
            func_000212C0(&v, &v);
            d.x = D_00275AEC * v.x;
            d.y = D_00275AEC * v.y;
            d.z = D_00275AEC * v.z;
            p.x += d.x;
            p.y += d.y;
            p.z += d.z;
            len = AsmSqrtF(D_002B7E18->f84 * D_002B7E18->f84 + D_002B7E18->f88 * D_002B7E18->f88 + D_002B7E18->f8c * D_002B7E18->f8c);
            if (len == f50->f20) {
                for (;;) {
                    q.x = 0;
                    q.y = 0;
                    q.z = 0;
                    q.w = 1.0f;
                    t = (float)func_001E8833() * D_002754B0;
                    func_00158390(t * D_0027622C, *(V4_000212A0 *)&D_002A0F94, *(V4_000212A0 *)&D_002B7E18->f84, &q);
                    t = (float)func_001E8833() * D_002754B0;
                    d1.x = q.x * D_00276228 * f40;
                    d1.y = q.y * D_00276228 * f40;
                    d1.z = q.z * D_00276228 * f40;
                    d2.x = q.x * t * D_00275800;
                    d2.y = q.y * t * D_00275800;
                    d2.z = q.z * t * D_00275800;
                    p.x += d1.x - d2.x;
                    p.y += d1.y - d2.y;
                    p.z += d1.z - d2.z;
                    p.y = p.y - f40 * D_00276224;
                    if (f10 != 0) {
                        q.x = 0;
                        q.y = 0;
                        q.z = 0;
                        q.w = 1.0f;
                        func_00021330(&q, (V4_000212A0 *)this, &f30);
                        len = AsmSqrtF(q.y * q.y + q.z * q.z + q.x * q.x);
                        if (D_00276220 / f50->f1c * f40 == len) {
                            p.x -= q.x;
                            p.y -= q.y;
                            p.z -= q.z;
                            break;
                        }
                        n = D_002B7E18->f4c;
                        m = D_002B7E18->f50;
                        id = f48;
                        a = (n * 3) % m;
                        b = (n * 3 + 3) % m;
                        if (b < a)
                            b += m;
                        if (id < a)
                            id += m;
                        if (id < b)
                            continue;
                        return 0;
                    }
                    {
                        V4_000212A0 *e;
                        float u;
                        e = func_0001E9E0((V4_000212A0 *)((char *)&p + 0x40), &q);
                        u = D_00276220 / f50->f1c * f40;
                        p.x -= u * e->x;
                        p.y -= u * e->y;
                        p.z -= u * e->z;
                        q.w = 1.0f;
                        f0 = p.x + q.x;
                        f4 = p.y + q.y;
                        f8 = p.z + q.z;
                        fC = 1.0f;
                        f4 += ((float (__cdecl *)(void *, float, int))func_00021AB0)(this, f50->f24, f48) * D_0027621C;
                        f40 = 0;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

