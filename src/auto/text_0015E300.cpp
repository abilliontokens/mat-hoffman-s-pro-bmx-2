/* 14 functions from 0x0015E300 to 0x0015F120, found by Ghidra. */
#include "common.h"
#include <math.h>
#include "asm_helpers.h"

struct S_0015E300_V3 {
    int x, y, z;
};

struct S_0015E300_V4 {
    int x, y, z, w;
};

struct S_0015E300_Elem {
    char pad0[4];
    unsigned int f4;
    char pad8[0xC0];
};

struct C_0015E300 {
    char pad0[0x24];
    S_0015E300_Elem *f24;
    int f28;
    char pad2C[0xC];
    int *f38;
    S_0015E300_V4 *f3C;
    S_0015E300_V4 f40;
    S_0015E300_V4 *f50;
    S_0015E300_V4 f54;
    S_0015E300_V4 *f64;
    char pad68[0x10];
    int f78;
    void func_0015E300(int idx, S_0015E300_V3 *pos, int *val);
    void func_0015E360(S_0015E300_V4 *v);
    void func_0015E3C0(void);
    int func_0015E5B0(void);
};

extern float D_00275544;
extern float D_002E293C;
extern int D_002878B4;
void func_001E891B(void *p);
void func_0015CD90(float *dst, float *src);
extern "C" void *memset(void *dst, int c, unsigned int n);

struct C_00157660 {
    void func_00157660();
};

struct C_00193500 {
    void func_00193500();
};

struct LightEmitter;

struct C_0015DA60 {
    void func_0015DCC0(LightEmitter *item);
};

struct LightEmitter_Sub {
    char pad0[0x30];
    float f30;
    float f34;
    float f38;
    char pad3C[0x30];
    float f6C;
    float f70;
    float f74;
};

struct S_0015E4B0_V4 {
    float x, y, z, w;
};

extern float D_002755E8;
extern float D_002A80A4;
extern float D_00275460;
float func_0014F510(float a);

struct S_0015EB90_Blink {
    unsigned int f00;
    unsigned int f04;
    float f08, f0c, f10;
};

/* LightEmitter */
struct LightEmitter {
    void *vtbl;
    char pad4[0x24];
    int f28;
    char pad2C[0x8];
    LightEmitter_Sub *f34;
    char pad38[0x8];
    float f40;
    float f44;
    float f48;
    char pad4C[0x1C];
    int f68;
    float f6C;
    float f70;
    float f74;
    float f78;
    char pad7C[0x10];
    float f8C;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fA0;
    float fA4;
    float fA8;
    float fAC;
    char padB0[0x14];
    C_00193500 *fC4;
    char padC8[0x4];
    void *fCC;
    void func_0015E420(float *dir, float *mat, int unk);
    void func_0015E600();
    void func_0015E800(float v);
    void func_0015E920(float *p);
    void func_0015EB90(float dt);
    float func_0015E4B0(float a1, S_0015E4B0_V4 v, LightEmitter *e);
};

extern int D_002E2940;
extern float D_002756C0;
extern float D_002755E4;
extern S_0015E4B0_V4 D_002A802C, D_002A803C, D_002A804C;
struct S_0015EB90_Ref { char pad[0x170]; float f170, f174, f178; };
struct S_0015EB90_Ref2 { char pad[4]; S_0015EB90_Ref *f4; };
extern S_0015EB90_Ref2 *D_002EFDB8;
int func_001E8858(float f);
int func_0015CF60();
float func_0014F600(float f);
int func_000262C0(void *a, void *b);

extern LightEmitter *D_002E2930;

struct LM_Obj {
    virtual void v0(int flag);
};

struct LightManager {
    void *vtbl;
    char pad4[0x34];
    void *f38;
    void *f3C;
    char pad40[0x10];
    void *f50;
    char pad54[0x10];
    void *f64;
    char pad68[0x1C];
    void *f84;
    char pad88[4];
    LM_Obj *f8C;
    void func_0015F080();
};

struct LS_Vec4 {
    float x, y, z, w;
    void func_0015FF60(unsigned int *color);
};
extern float D_0027A060, D_00284758, D_00287928, D_00287924, D_00287920;

struct LS_Sub193950 {
    void func_00193950(void *a, void *b, void *c, int d);
};

struct LS_Sub15CD70 {
    void func_0015CD70(void *p);
    void func_0015CD50(unsigned int color);
};

struct LightSource {
    char pad0[0x24];
    char f24[0xC];
    LS_Vec4 f30;
    LS_Vec4 f40;
    LS_Vec4 f50;
    int f60;
    int f64;
    int f68;
    char pad6C[0xC];
    int f78;
    char pad7C[0x18];
    LS_Vec4 f94;
    int fA4_[0x4];
    LS_Sub15CD70 *fB4;
    LS_Vec4 *fB8;
    char padBC[4];
    int fC0_;
    LS_Sub193950 *fC4;
    void func_0015E850(LS_Vec4 *v);
    void func_0015E650(LS_Vec4 v);
    void func_00157A00(float dt);
};

extern char D_002A801C[];
extern int D_00287934;
void func_001E8390(void *p);
struct C_0015D250 {
    void func_0015D250();
};

extern float D_00275600, D_00276DD4;
struct V4_0015E990 { float x, y, z, w; };
struct C_0015E990 {
    char pad0[0x28];
    int f28;
    int f2C;
    char pad30[0x50];
    float f80;
    float f84;
    float f88;
    char pad8C[0x30];
    int fBC;
    void func_001D3F50();
    void func_0015E650(V4_0015E990 v);
    void func_0015E850(void *p);
    void func_0015E920(void *p);
    void func_0015E800(float v);
    C_0015E990 *func_0015E990(int a1, float x, float y, float z, float w, void *p6, void *p7, float *p8, float a9, int a10, int a11, int a12, int a13);
};

void C_0015E300::func_0015E300(int idx, S_0015E300_V3 *pos, int *val)
{
    if (idx >= 0 && idx < f78) {
        if (f3C != 0 && pos != 0) {
            f3C[idx].x = pos->x;
            f3C[idx].y = pos->y;
            f3C[idx].z = pos->z;
        }
        if (f38 != 0 && val != 0) {
            f38[idx] = *val;
        }
    }
}

void C_0015E300::func_0015E360(S_0015E300_V4 *v)
{
    int i;

    f40 = *v;
    for (i = 0; i < f78; i++) {
        f50[i] = *v;
    }
}

void C_0015E300::func_0015E3C0(void)
{
    int i;

    f40 = f54;
    for (i = 0; i < f78; i++) {
        f50[i] = f64[i];
    }
}

void LightEmitter::func_0015E420(float *dir, float *mat, int unk)
{
    memset(dir, 0, 0x40);
    memset(mat, 0, 0x40);
    if (f34 != 0) {
        dir[0] = -f34->f6C;
        dir[1] = -f34->f70;
        dir[2] = -f34->f74;
        mat[0] = f34->f30;
        float y = f34->f34;
        mat[4] = y;
        float z = f34->f38;
        mat[8] = z;
    }
    mat[3] = f40;
    mat[7] = f44;
    mat[11] = f48;
    mat[15] = 1.0f;
    mat[12] = f40;
    mat[13] = f44;
    mat[14] = f48;
}

float LightEmitter::func_0015E4B0(float a1, S_0015E4B0_V4 v, LightEmitter *e)
{
    S_0015E4B0_V4 n;
    n.x = -e->f6C;
    n.y = -e->f70;
    n.z = -e->f74;
    float *q = &v.x;
    func_0015CD90(&v.x, q);
    float dot = v.x * n.x;
    dot += v.y * n.y;
    dot += v.z * n.z;
    float t1 = func_0014F510(e->f90 * 0.5f);
    if (dot < t1) return D_002A80A4 * a1;
    float t2 = func_0014F510(e->f8C * 0.5f);
    if (dot > t2) return D_00275460 * a1;
    float ratio = (t2 - dot) / (t2 - t1);
    float result = ratio;
    result *= D_002A80A4;
    result += D_00275460 - ratio;
    return result * a1;
}

int C_0015E300::func_0015E5B0(void)
{
    unsigned int min = f24[0].f4;
    int best = 0;
    int i;

    if (min == 0) {
        return 0;
    }
    for (i = 1; i < f28; i++) {
        unsigned int v = f24[i].f4;
        if (v == 0) {
            return i;
        }
        if (v < min) {
            best = i;
            min = v;
        }
    }
    return best;
}

void LightEmitter::func_0015E600()
{
    C_00193500 *sub;

    vtbl = &D_002878B4;
    if (D_002E2930 != 0) {
        ((C_0015DA60 *)D_002E2930)->func_0015DCC0(this);
    }
    sub = fC4;
    if (sub != 0) {
        sub->func_00193500();
        func_001E891B(sub);
    }
    if (fCC != 0) {
        func_001E891B(fCC);
    }
    ((C_00157660 *)this)->func_00157660();
}

void LightSource::func_0015E650(LS_Vec4 v)
{
    LS_Vec4 *a = &f30;
    if (*(int *)(f24 + 4) == 4) {
        f50 = v;
        *(int *)&f30.x = 0; *(int *)&f30.y = 0; *(int *)&f30.z = 0; *(int *)&f30.w = 0;
        *(int *)&f40.x = 0; *(int *)&f40.y = 0; *(int *)&f40.z = 0; *(int *)&f40.w = 0;
    } else {
        *a = v;
        f40 = v;
        *(int *)&f50.x = 0; *(int *)&f50.y = 0; *(int *)&f50.z = 0; *(int *)&f50.w = 0;
    }
    if (fB4) {
        unsigned int c = (int)(v.x * 255.0f);
        c = (c | 0xffffff00) << 8;
        c = (c | ((int)(v.y * 255.0f) & 255)) << 8;
        c |= (int)(v.z * 255.0f) & 255;
        fB4->func_0015CD50(c);
    }
    if (fB8) {
        unsigned int c = (int)((float)(v.x * 0.00392156886f) * 255.0f) & 255;
        c |= (int)((float)(v.w * 0.00392156886f) * 255.0f) << 8;
        c <<= 8;
        c = (c | ((int)((float)(v.y * 0.00392156886f) * 255.0f) & 255)) << 8;
        c |= (int)((float)(v.z * 0.00392156886f) * 255.0f) & 255;
        *(unsigned int *)&v.x = c;
        fB8->func_0015FF60((unsigned int *)&v.x);
    }
    if (D_002E2930) {
        D_002E2930->f68++;
    }
    *(float *)&fC0_ = f30.z * 0.114f + f30.y * 0.587000012f + f30.x * 0.298999995f;
}

void LightEmitter::func_0015E800(float v)
{
    if (v == D_00275544 || v > D_002E293C) {
        v = D_002E293C;
    }
    if (v != f78) {
        f78 = v;
        if (D_002E2930 != 0) {
            D_002E2930->f68++;
        }
    }
}

void LightSource::func_0015E850(LS_Vec4 *v)
{
    LS_Vec4 *cur = &f94;
    if (v->x == cur->x && v->y == cur->y && v->z == cur->z) {
        return;
    }
    *cur = *v;
    if (fC4 != 0) {
        fC4->func_00193950(f24, cur, D_002A801C, f78);
    }
    f60 = *(int *)&cur->x;
    f64 = *(int *)&f94.y;
    f68 = *(int *)&f94.z;
    if (fB4 != 0) {
        fB4->func_0015CD70(cur);
    }
    if (fB8 != 0) {
        *(LS_Vec4 *)((char *)fB8 + 0x28) = *v;
    }
    if (D_002E2930 != 0) {
        D_002E2930->f68++;
    }
}

void LightEmitter::func_0015E920(float *p)
{
    float *cur = &fA4;

    if (p[0] != fA4 || p[1] != cur[1] || p[2] != cur[2]) {
        func_0015CD90(cur, p);
        f6C = cur[0];
        f70 = fA8;
        f74 = fAC;
        if (D_002E2930 != 0) {
            D_002E2930->f68++;
        }
    }
}

C_0015E990 *C_0015E990::func_0015E990(int a1, float x, float y, float z, float w, void *p6, void *p7, float *p8, float a9, int a10, int a11, int a12, int a13)
{
 
 func_001D3F50();
 this->f28=a1; this->fBC=a13;
 V4_0015E990 &v = *(V4_0015E990 *)&x;
 v.x = v.x * 0.00392156886f;
 v.y = v.y * 0.00392156886f;
 v.z = v.z * 0.00392156886f;
 v.w = v.w * 0.00392156886f;
 this->func_0015E650(v);
 if(p6) this->func_0015E850(p6);
 if(p7) this->func_0015E920(p7);
 if(p8) {
 this->f80=p8[0]; this->f84=p8[1]; this->f88=p8[2];
 C_0015E990 *s=this;
 if(s->f88!=D_00275544) {
 float d=s->f84*s->f84-(s->f80-D_00275600)*s->f88*D_00276DD4;
 float q=AsmSqrtF(d);
 this->func_0015E800((q-this->f84)/(this->f88+this->f88));
 } else s->func_0015E800((D_00275600-s->f80)/s->f84);
 } else {
 this->func_0015E800(a9); this->f80=1.0f; this->f84=0.0f; this->f88=0.0f;
 }
 switch(a1) {case 0: case 3: case 4: return this; case 2:this->f2C=3;break;case 1:this->f2C=1;break;}
 return this;
}

void LightEmitter::func_0015EB90(float dt)
{
    if (fCC == 0)
        return;
    if (*(int *)fCC == -1)
        return;
    ((S_0015EB90_Blink *)fCC)->f0c += dt;
    while (((S_0015EB90_Blink *)fCC)->f0c > ((S_0015EB90_Blink *)fCC)->f08)
        ((S_0015EB90_Blink *)fCC)->f0c -= ((S_0015EB90_Blink *)fCC)->f08;

    unsigned int a = (unsigned int)func_0015CF60();
    int idx = (int)(((S_0015EB90_Blink *)fCC)->f0c / ((S_0015EB90_Blink *)fCC)->f08 * D_002756C0);
    unsigned int b = ((((S_0015EB90_Blink *)fCC)->f00 >> idx) & 1) ? ((S_0015EB90_Blink *)fCC)->f04 : 0;
    float t = ((S_0015EB90_Blink *)fCC)->f10;
    float it = D_00275460 - t;
    LS_Vec4 col;
    col.x = (float)((a >> 16) & 0xff) * t + (float)((b >> 16) & 0xff) * it;
    col.y = (float)((a >> 8) & 0xff) * t + (float)((b >> 8) & 0xff) * it;
    col.z = (float)(a & 0xff) * t + (float)(b & 0xff) * it;
    col.w = (float)(a >> 24) * t + (float)(b >> 24) * it;
    ((LightSource *)this)->func_0015E650(col);

    if (D_002E2940 != 0) {
        float dx = D_002EFDB8->f4->f170 - f94;
        float dy = D_002EFDB8->f4->f174 - f98;
        float dz = D_002EFDB8->f4->f178 - f9c;
        float dist = sqrtf(dx * dx + dy * dy + dz * dz);
        if (f28 == 3) {
            float v = func_0014F600(f90 * D_002755E8);
            LS_Vec4 dir;
            dir.x = f6C;
            dir.y = f70;
            dir.z = f74;
            dir.w = D_00275460;
            func_0015CD90(&dir.y, &dir.x);
            LS_Vec4 m;
            m.x = dir.x * f78;
            m.y = dir.y * f78;
            m.z = dir.z * f78;
            m.w = D_00275460;
            LS_Vec4 pos;
            pos.x = m.x + f94;
            pos.y = m.y + f98;
            pos.z = m.z + f9c;
            pos.w = v * f78;
            LS_Vec4 q;
            AsmVec3Cross(&q.x, &m.x, &D_002A802C.x);
            q.w = 0.0f;
            if (func_000262C0(&q, D_002A801C)) {
                AsmVec3Cross(&q.x, &m.x, &D_002A803C.x);
                func_0015CD90(&q.x, &q.x);
                LS_Vec4 d;
                d.x = pos.x - q.x;
                d.y = pos.y - q.y;
                d.z = pos.z - q.z;
                AsmVec3Cross(&q.x, &m.x, &D_002A804C.x);
                if (func_000262C0(&q, D_002A801C)) {
                    AsmVec3Cross(&q.x, &m.x, &D_002A803C.x);
                    func_0015CD90(&q.y, &q.x);
                }
            }
        }
    }
}

void LightManager::func_0015F080()
{
    vtbl = &D_00287934;
    if (f84 != 0) {
        func_001E8390(f84);
        f84 = 0;
    }
    if (f50 != 0) {
        func_001E891B(f50);
        f50 = 0;
    }
    if (f64 != 0) {
        func_001E891B(f64);
        f64 = 0;
    }
    if (f3C != 0) {
        func_001E891B(f3C);
        f3C = 0;
    }
    if (f8C != 0) {
        f8C->v0(1);
        f8C = 0;
    }
    if (f38 != 0) {
        func_001E891B(f38);
        f38 = 0;
    }
    ((C_0015D250 *)this)->func_0015D250();
    D_002E2930 = 0;
    ((C_00157660 *)this)->func_00157660();
}

