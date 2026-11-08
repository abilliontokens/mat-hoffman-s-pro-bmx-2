/* 5 functions from 0x0002AAA0 to 0x0002B1C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern char D_002766F0[];
extern char D_002766E0[];
extern char D_002766D0[];

struct C_00168B90 {
    int func_00168B90(const char *name, float *out);
    int func_00168A10(const char *name, int *out);
};

struct C_0002B140 {
    float unk0;
    int unk4;
    float unk8;
    void func_0002B140(C_00168B90 *param_1);
};

struct C_0002B1A0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int func_0002B1A0(void);
};

struct C_0002B180 {
    void func_0002B180(void);
};

extern float D_002A1178;

struct Vec4_0002AF90 {
    float x, y, z, w;
    __forceinline void Set(const Vec4_0002AF90 *o) { *this = *o; }
    __forceinline void Set4(const float &a, const float &b, const float &c, const float &d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
    __forceinline Vec4_0002AF90 Sub(const Vec4_0002AF90 *o) const
    {
        Vec4_0002AF90 r;
        r.x = x - o->x;
        r.y = y - o->y;
        r.z = z - o->z;
        r.w = 1.0f;
        return r;
    }
    __forceinline Vec4_0002AF90 Mul(const float &t) const
    {
        Vec4_0002AF90 r;
        r.x = t * x;
        r.y = y * t;
        r.z = z * t;
        r.w = 1.0f;
        return r;
    }
    __forceinline Vec4_0002AF90 Add(const Vec4_0002AF90 *o) const
    {
        Vec4_0002AF90 r;
        r.x = x + o->x;
        r.y = y + o->y;
        r.z = z + o->z;
        r.w = 1.0f;
        return r;
    }
    __forceinline void Lerp(const Vec4_0002AF90 *o, const float &t)
    {
        *this = Sub(o).Mul(t).Add(o);
    }
    __forceinline Vec4_0002AF90 Mul(void) const
    {
        Vec4_0002AF90 r;
        r.x = D_002A1178 * x;
        r.y = y * D_002A1178;
        r.z = z * D_002A1178;
        r.w = 1.0f;
        return r;
    }
    __forceinline void Lerp(const Vec4_0002AF90 *o)
    {
        *this = Sub(o).Mul().Add(o);
    }
};

struct S_0002AF90_Node {
    Vec4_0002AF90 func_00197EC0(Vec4_0002AF90 *v);
    void func_00199A70(int a, Vec4_0002AF90 *out);
};

struct S_0002AF90_Obj {
    void func_0014AC30(Vec4_0002AF90 *v, int a);
    void func_00133ED0(void);
    float func_00133F10(int a);
};

extern int D_002B7E5C;
extern Vec4_0002AF90 D_002B7E4C;
extern float D_002B7E50;
extern float D_002B7E54;
extern float D_002B7E58;
extern float D_002A10F0, D_002A10F4, D_002A10F8, D_002A10FC, D_002A1178;

struct C_0002AF90 {
    char pad0[0x13c];
    Vec4_0002AF90 f13c;
    Vec4_0002AF90 f14c;
    char pad15c[0x1f8 - 0x15c];
    S_0002AF90_Obj *f1f8;
    char pad1fc[0x230 - 0x1fc];
    S_0002AF90_Node *f230;
    void func_0002AF90(void);
};


/* physics step of the object at 0x1e0..0x1f4 */
struct S_0002AAA0_V {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(float t); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(float t); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
};

struct S_0002AAA0_Body : S_0002AAA0_V {
    char pad04[0x68];
    float f6c, f70, f74;
    char pad78[0x130 - 0x78];
    float f130, f134, f138;
    char pad13c[0x170 - 0x13c];
    float f170, f174, f178;
    char pad17c[0x210 - 0x17c];
    float f210;
    void func_00174550(int a, int b, int c);
};

struct S_0002AAA0_Cam : S_0002AAA0_V {
    void func_001941F0(float t);
};

struct S_0002AAA0_State {
    char pad0[0x64];
    int f64;
};

struct S_0002AAA0_Link : S_0002AAA0_V {
    char pad04[0x58];
    int f5c;
};

struct S_0002AAA0_Dev {
    void func_00133EF0(void *p);
    void func_00134530(int a, int *b, int *c, int d, int e, int f);
};

struct C_0002AAA0 {
    char pad0[0x28];
    float f28;
    char pad2c[0x8c - 0x2c];
    Vec4_0002AF90 f8c;
    Vec4_0002AF90 f9c;
    char padac[0x1e0 - 0xac];
    S_0002AAA0_Body *f1e0;
    S_0002AAA0_Cam *f1e4;
    S_0002AAA0_State *f1e8;
    char pad1ec[4];
    S_0002AAA0_V *f1f0;
    S_0002AAA0_Link *f1f4;
    char pad1f8[0x204 - 0x1f8];
    S_0002AAA0_Dev *f204;
    char pad208[0x230 - 0x208];
    char *f230;
    int f234;
    int f238;
    char pad23c[0x440 - 0x23c];
    int f440;
    int f444;
    char pad448[0x680 - 0x448];
    int f680;
    int f684;
    void func_00027860(float t);
    void func_0002AAA0(float dt);
};

extern float D_002A10FC, D_002A1174, D_00275544, D_002A1110, D_002A1114, D_002A1118;

static __forceinline float Min_0002AAA0(float a, float b)
{
    return AsmMinF(a, b);
}

static __forceinline float Abs_0002AAA0(volatile float x)
{
    unsigned u = *(volatile unsigned *)&x & 0x7fffffff;
    return *(float *)&u;
}

void C_0002AAA0::func_0002AAA0(float dt)
{
    C_0002AAA0 * volatile self = this;
    C_0002AAA0 *p;
    S_0002AAA0_Body *b;
    float t;
    float step;
    float v;
    struct {
        volatile unsigned xb1;
        volatile unsigned xa1;
        volatile unsigned xa4;
        volatile unsigned rb4;
        volatile unsigned rb1;
        volatile unsigned xa5;
        volatile unsigned xb2;
        volatile unsigned xb5;
        volatile unsigned rb2;
        volatile unsigned ra5;
        volatile unsigned xb3;
        volatile unsigned rb5;
        volatile unsigned rb3;
        volatile unsigned xa6;
        volatile unsigned xb4;
        volatile unsigned xb6;
        volatile unsigned xa2;
        volatile unsigned ra6;
        volatile unsigned xa3;
        volatile unsigned rb6;
        volatile unsigned ra1;
        volatile float rem;
        volatile unsigned ra2;
        volatile unsigned d1174;
        volatile unsigned ra4;
        volatile unsigned mres;
        volatile unsigned ra3;
        volatile float dy;
        volatile float dz;
    } s;

    f1e0->func_00174550(1, 1, 1);
    self->f1e0->v35();
    p = self;
    p->f204->func_00133EF0(p->f230 + 0xf0);
    p = self;
    p->f204->func_00134530(0x40, &p->f234, &p->f238, 3, 0, 0);
    p = self;
    if (p->f234 > 0) {
        p->f1f4->f5c = 1;
    } else {
        p->f1f4->f5c = 0;
    }
    self->f1e4->v29(32.2f);
    self->f1f4->v13(dt);
    self->f8c = *(Vec4_0002AF90 *)&D_002A10F0;
    self->f9c = *(Vec4_0002AF90 *)&D_002A10F0;
    t = 0;
    step = Min_0002AAA0(dt, D_002A1174);
    if (D_00275544 < dt) {
        do {
            self->f1e4->func_001941F0(step);
            p = self;
            if (p->f1e8->f64 == 0) {
                b = p->f1e0;
                v = -(b->f210 * p->f28);
                s.dy = D_002A1114 * v;
                s.dz = D_002A1118 * v;
                b->f130 += D_002A1110 * v;
                b->f134 += s.dy;
                b->f138 += s.dz;
            }
            self->func_00027860(step);
            self->f1f0->v13(step);
            s.xa1 = *(unsigned *)&self->f1e0->f170;
            s.ra1 = s.xa1 & 0x7fffffff;
            s.xb1 = *(unsigned *)&self->f9c.x;
            s.rb1 = s.xb1 & 0x7fffffff;
            if (*(volatile float *)&s.ra1 > *(volatile float *)&s.rb1) {
                p = self;
                p->f9c.x = p->f1e0->f170;
            }
            s.xa2 = *(unsigned *)&self->f1e0->f174;
            s.ra2 = s.xa2 & 0x7fffffff;
            s.xb2 = *(unsigned *)&self->f9c.y;
            s.rb2 = s.xb2 & 0x7fffffff;
            if (*(volatile float *)&s.ra2 > *(volatile float *)&s.rb2) {
                p = self;
                p->f9c.y = p->f1e0->f174;
            }
            s.xa3 = *(unsigned *)&self->f1e0->f178;
            s.ra3 = s.xa3 & 0x7fffffff;
            s.xb3 = *(unsigned *)&self->f9c.z;
            s.rb3 = s.xb3 & 0x7fffffff;
            if (*(volatile float *)&s.ra3 > *(volatile float *)&s.rb3) {
                p = self;
                p->f9c.z = p->f1e0->f178;
            }
            self->f1e0->v13(step);
            s.xa4 = *(unsigned *)&self->f1e0->f6c;
            s.ra4 = s.xa4 & 0x7fffffff;
            s.xb4 = *(unsigned *)&self->f8c.x;
            s.rb4 = s.xb4 & 0x7fffffff;
            if (*(volatile float *)&s.ra4 > *(volatile float *)&s.rb4) {
                p = self;
                p->f8c.x = p->f1e0->f6c;
            }
            s.xa5 = *(unsigned *)&self->f1e0->f70;
            s.ra5 = s.xa5 & 0x7fffffff;
            s.xb5 = *(unsigned *)&self->f8c.y;
            s.rb5 = s.xb5 & 0x7fffffff;
            if (*(volatile float *)&s.ra5 > *(volatile float *)&s.rb5) {
                p = self;
                p->f8c.y = p->f1e0->f70;
            }
            s.xa6 = *(unsigned *)&self->f1e0->f74;
            s.ra6 = s.xa6 & 0x7fffffff;
            s.xb6 = *(unsigned *)&self->f8c.z;
            s.rb6 = s.xb6 & 0x7fffffff;
            if (*(volatile float *)&s.ra6 > *(volatile float *)&s.rb6) {
                p = self;
                p->f8c.z = p->f1e0->f74;
            }
            t = step + t;
            s.d1174 = *(unsigned *)&D_002A1174;
            s.rem = dt - t;
            s.mres = *(volatile float *)&s.d1174 < s.rem ? s.d1174 : *(volatile unsigned *)&s.rem;
            step = *(volatile float *)&s.mres;
        } while (t < dt);
    }
    self->f444 = 0;
    self->f680 = 0;
    self->f684 = 0;
    self->f440 = 0;
}

void C_0002AF90::func_0002AF90(void)
{
 Vec4_0002AF90 v; Vec4_0002AF90 *cur; Vec4_0002AF90 *tgt;
 if((D_002B7E5C&1)==0){
 D_002B7E5C|=1;D_002B7E4C.x=0;D_002B7E50=2.0f;D_002B7E54=0;D_002B7E58=1.0f;
 }
 v=f230->func_00197EC0(&D_002B7E4C);tgt=&f14c;f230->func_00199A70(0,tgt);
 cur=&f13c;tgt->x+=v.x;tgt->y+=v.y;tgt->z+=v.z;
 if(cur->x==D_002A10F0&&cur->y==D_002A10F4&&cur->z==D_002A10F8){f13c=f14c;}
 Vec4_0002AF90 delta=cur->Sub(tgt);
 Vec4_0002AF90 scaled;
 scaled.x=D_002A1178*delta.x;
 scaled.y=delta.y*D_002A1178;
 scaled.z=delta.z*D_002A1178;
 scaled.w=1.0f;
 *cur=scaled.Add(tgt);
 f1f8->func_0014AC30(cur,0);f1f8->func_00133ED0();f1f8->func_00133F10(0);
 f13c=f14c;
}

void C_0002B140::func_0002B140(C_00168B90 *param_1) {
    param_1->func_00168B90(D_002766F0, &unk0);
    param_1->func_00168A10(D_002766E0, &unk4);
    param_1->func_00168B90(D_002766D0, &unk8);
}

void C_0002B180::func_0002B180(void)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 8);
  if (*(int *)(in_ECX + 0xc) < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    return;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 4);
  return;
}

int C_0002B1A0::func_0002B1A0(void) {
    return unkC >= unk4;
}

