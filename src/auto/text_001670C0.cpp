/* 15 functions from 0x001670C0 to 0x00167FE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
struct Vec4_165EF0 { float x,y,z,w; };
/* the engine's file wrapper (D_002BEAAC) */
struct C_0013B210_1673B0 {
    int func_0013D310(char *name, char *key, int *h, void *out, int flag);
    int func_0013AC40(char *name, int a2, int a3, int a4, int *out, int grow);
    void func_0013B1F0(int h, void *obj);
    void func_0013C110(int h);
};
extern C_0013B210_1673B0 *D_002BEAAC;
extern char D_00275FB4[], D_00287E90[], D_00287EA0[], D_00287EA8[];
void func_001E891B(void *p);
void *func_001E8A44(int size);
char *func_001E8920(char *dst, const char *src, int n);
void func_0014FF00(const char *path, int b, int c, char *name, int e);
void func_00030F30(char *name, char *key);
int func_001EA426(const char *a, const char *b);

/* config file reader, 0x4CC bytes */
struct C_00168280 {
    char pad0[0x4CC];
    C_00168280 *func_00168280(void);
    int func_00169490(const char *path, int flags);
    void func_001691E0(void);
    void func_00169710(const char *name);
    void func_00168550(const char *key, char *dst, int n);
};

template <class T> inline T Min(const T &a, const T &b) { return a < b ? a : b; }

/* the interface every object of this family exposes through a virtual base */
struct C_001673B0_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    C_001673B0_Base *func_001D3F50(void);
};

/* an already loaded object of the family (found by name) */
struct C_001673B0_Found : virtual C_001673B0_Base {
    char *f4;
    void func_00166CA0(int arg);
};

struct C_001673B0 : virtual C_001673B0_Base {
    char pad0[4];
    C_00168280 *f8;
    char padC[0x3c];
    char f48[0x50];
    char pad98[0xa0];
    char f138[0x50];
    int f188;
    char pad18C[0x54];
    int f1e0;
    C_001673B0_Base *func_001673B0(const char *name, const char *slt, void *unused, int id, int arg4);
    void func_00166EB0(int arg);
    void func_00166CA0(C_001673B0_Found *found, int arg);
};
struct C_001648E0_Item {
 virtual void v0(); virtual void v1();
 virtual void v2(float, Vec4_165EF0 *);
 virtual void v3(float, Vec4_165EF0 *);
 int f4;
};
struct C_001670C0_Anim {
 char pad0[0x14]; C_001648E0_Item **f14, **f18;
 int f1C, f20, f24; char pad28[0x10]; float f38;
 int func_001628A0(float);
};
struct C_00165D00_Node {
 char pad0[0x170]; int f170;
 void func_00199300(Vec4_165EF0 *);
 void func_00199650(Vec4_165EF0 *);
};
struct C_00165D00_Elem { char pad0[0x34]; C_00165D00_Node *f34; char pad38[8]; };
struct C_001670C0_Slot { void func_001A0C90(Vec4_165EF0); };
struct C_001670C0 {
 int f0; void *f4; int f8; void *fC; int f10,f14;
 C_001670C0_Anim *f18; int f1C; char pad20[0x10];
 int f30; float f34,f38,f3C,f40,f44;
 char pad48[0x1A4]; C_00165D00_Elem *f1EC; int *f1F0;
 char pad1F4[0x14]; int f208,f20C; C_001670C0_Slot **f210; Vec4_165EF0 *f214;
 void func_001670C0(float, int, int *);
 void func_001664C0(float,int *,int);
 void func_00166830(float,int *,int);
};
void func_001641B0(void *, void *);
void func_001640D0(void *, int, void *, void *);
float func_00164220(float,float,float);
struct __declspec(align(16)) S_00167AF0_Vector { float x, y, z, w; };
struct C_00167AF0_Obj {
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
virtual int test();
};
static inline S_00167AF0_Vector add_00167AF0(const S_00167AF0_Vector &a, char *m) {
 S_00167AF0_Vector r=a; r.x+=*(float*)(m+12); r.y+=*(float*)(m+28); r.z+=*(float*)(m+44); return r;
}
extern int D_002EFB1C;
struct S_00167AF0_List { char pad0[0x10]; int count; char **items; char pad18[0xc]; char tag; };
struct C_00167AF0_Context { int func_001C5DE0(void *, void *, void *, int); };
extern C_00167AF0_Context *D_002AB66C;
void func_000263B0(void *, void *, void *);
struct C_00167AC0_Sub;
extern u16 D_002EFE54;
struct C_00167DD0_Context { int func_00192BD0(int value); };
struct C_00167DD0_Item { int func_00179B40(C_00167AC0_Sub *out, int value); };
struct S_00167DD0_Object;
struct S_00167DD0_Node { S_00167DD0_Node *next; S_00167DD0_Object *value; C_00167DD0_Item *item; };
struct S_00167DD0_Object {
 char pad0[0x24]; S_00167DD0_Node *head; void *f28;
 char pad2c[0x10]; int f3c; char pad40[0x52]; u16 stamp;
};
struct C_00167DD0 {
 char pad0[0x24]; char *f24; char pad28[0x328]; int f350;
 int func_00167ED0(void);
 int func_00167AF0(void *p);
 int func_00167DD0(S_00167DD0_Object *, C_00167DD0_Context *, void *);
};
int func_0017C060(void *, void *, void *);
struct C_00167750 {
    undefined4 func_00167750(void);
};

struct C_001677B0 {
    char pad0[0x358];
    int unk358;
    void func_001677B0(int a0);
};

extern int D_00287F64;
extern float D_00275544;
extern float D_00287EC8;
extern float D_00275460;
extern float D_00287EC4;
extern float D_00287EC0;
extern float D_002755EC;

void *func_001E8AA5(unsigned int size);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00167AC0_Sub {
    int pad0[2];
    void func_001D3F50(void);
};

struct S_00167DD0_Temps { C_00167AC0_Sub a[4], b[4]; };
struct C_00167AC0 {
    C_00167AC0_Sub subs[4];
    C_00167AC0 *func_00167AC0(void);
};

struct C_001676D0 {
    int *f0;
    int f4;
    C_001676D0 *func_001676D0(int n);
};

extern int D_00287EE4;
extern int D_00287FE4;
extern int D_002AA46C;
void func_001E891B(void *p);
void *func_001E8A44(int size);

/* object with a deleting-destructor in vtable slot 0 */
struct C_00167760_Obj {
    virtual void destroyObject(int flags);
};

/* stream object created by func_00144640 */
struct C_00167760_Stream {
    virtual void destroyObject(int flags);
    virtual void v1(int arg, int d);
    int f4;
    C_00167760_Stream *func_00144640(void);
};

struct C_0017A860 {
    char pad0[0xf4];
    int fF4;
    char padF8[0x150 - 0xf8];
    int f150;
    void func_0017A860(void *owner);
};

void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);

extern u32 D_002EFB3C;
extern float D_002EFB2C;
extern float D_002EFB30;
extern float D_002EFB34;
extern float D_002EFB38;

struct S_00167860_Owner {
    char pad0[0xc0];
    char fC0[0x3c];
    char *fFC;
};

/* DXObjectShadowTweakItem */
struct C_00167860 {
    void *vtbl;
    char pad4[0xc];
    char f10[0x40];
    S_00167860_Owner *f50;
    int f54;
    int f58;
    int f5c;
    float f60;
    void func_00167860(void);
};

extern char *D_002EFDB8;
extern int D_002A8CDC;
extern int D_002A85D4;

struct C_00149310 {
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct C_00142F30 {
    void func_00142F30(int a);
};

struct S_00167900_Node {
    char pad0[0xd4];
    int fD4;
    void func_001B07A0(void);
};

struct S_00167900_Entry {
    int f0;
    S_00167900_Node *f4;
    int f8;
    int fC;
};

struct S_00167900_Mgr {
    char pad0[0x14];
    S_00167900_Entry *f14;
};

struct S_00167900_Tbl {
    char pad0[0x10];
    C_00149310 *f10[1];
};

extern S_00167900_Mgr *D_002A829C;
extern S_00167900_Tbl *D_002F0630;

struct S_00167900_Elem {
    int count;
    int f4;
    int f8;
};

struct S_00167900_Inner {
    char pad0[0x10];
    S_00167900_Elem *f10;
};

struct S_00167900_Obj {
    char pad0[0x190];
    int f190;
    char pad194[0x1a0 - 0x194];
    u8 f1a0;
    char pad1a1[3];
    S_00167900_Inner *f1a4;
    char pad1a8[0x1d0 - 0x1a8];
    C_00142F30 *f1d0;
};

struct C_00167760 {
    void *vtbl;
    char pad4[0x20];
    C_0017A860 *f24;
    C_00149310 *f28;
    S_00167900_Obj *f2c[0x320 / 4];
    C_00167760_Stream *f34c;
    int f350;
    u32 f354;
    u32 f358;
    u32 f35c;
    C_00167760_Obj *f360;
    C_00167760 *func_00167760(int a0);
    C_00167760 *func_00167A70(int flags);
    int func_00167900(void);
    void func_001677C0(C_00167760_Obj *a);
    C_00167760 *func_00167D10(C_0017A860 *owner, int b);
    void func_00157660(void);
    void func_001D3F50(void);
};

struct __declspec(align(16)) S_001677C0_Block {
    f32 m[16];
};

struct V4_001677C0 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    V4_001677C0(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct S_001677C0_Src {
    char pad0[0x70];
    S_001677C0_Block blk;
};

struct C_001677C0_Dst {
    char pad0[0x10];
    S_001677C0_Block blk;
    void *f50;
    V4_001677C0 v54;
};

struct C_001677C0 {
    char pad0[0x24];
    S_001677C0_Src *f24;
    void func_001677C0(C_001677C0_Dst *dst);
};


void C_001670C0::func_001670C0(float dt, int remap, int *mask)
{
 int finished=0;
 Vec4_165EF0 v;
 if (f10 || !f18) return;
 f34 += dt;
 if (f18->func_001628A0(f34)) {
  if (f18->f24 & 1) f34 -= f18->f38;
  else finished=1;
 }
 if (!f30) {
  int i;
  for(i=0;i<f18->f20;i++) {
   if (mask && mask[f18->f18[i]->f4]) continue;
   f18->f18[i]->v2(f34,&v);
   if(remap) {
    func_001641B0(fC,&v);
    f1EC[f1F0[f18->f18[i]->f4]].f34->func_00199300(&v);
   } else f1EC[f18->f18[i]->f4].f34->func_00199300(&v);
  }
  for(i=0;i<f18->f1C;i++) {
   if(mask && mask[f18->f14[i]->f4]) continue;
   v.x=v.y=v.z=0.0f; v.w=1.0f;
   f18->f14[i]->v3(f34,&v);
   if(remap) {
    func_001640D0(f4,f1EC[f1F0[f18->f14[i]->f4]].f34->f170,fC,&v);
    f1EC[f1F0[f18->f14[i]->f4]].f34->func_00199650(&v);
   } else f1EC[f18->f14[i]->f4].f34->func_00199650(&v);
  }
 } else {
  f38 += dt;
  float blend=func_00164220(0.0f,1.0f,(f38-f40-dt)/f44);
  if(f1C) func_001664C0(blend,mask,remap);
  else func_00166830(blend,mask,remap);
  if(f208) for(int i=0;i<f20C;i++) f210[i]->func_001A0C90(f214[i]);
 }
 if(f38>=f3C) { f30=0; f38=0; }
 if(finished) { f10=1; f34=0; f38=0; }
}

C_001673B0_Base *C_001673B0::func_001673B0(const char *name, const char *slt, void *unused, int id, int arg4)
{
    C_001673B0 * volatile self = this;
    C_001673B0_Found *found = 0;
    int key = -1;
    int key2;
    int n;
    int len;
    char buf[0x100];
    char path[0x104];
    C_00168280 *mem;

    f1e0 = id;
    if (slt) {
        strcpy(buf, name);
        strcat(buf, slt);
    }
    if (D_002BEAAC->func_0013D310(buf, D_00275FB4, &key, &found, 0) == 0 &&
        D_002BEAAC->func_0013D310((char *)name, D_00275FB4, &key, &found, 0) == 0) {
        self->v2();
        return 0;
    }
    if (found == 0) {
        key2 = key;
        if (slt)
            D_002BEAAC->func_0013AC40(buf, 0, 0, 0, &key2, 0);
        D_002BEAAC->func_0013B1F0(key2, self);
        D_002BEAAC->func_0013C110(key);
    }
    mem = (C_00168280 *)func_001E8A44(0x4cc);
    self->f8 = mem ? mem->func_00168280() : 0;
    len = strlen(name);
    n = len < 0x4f ? len : 0x4f;
    func_001E8920((char *)self + 0x48, name, n);
    ((char *)self)[0x48 + n] = 0;
    self->f8->func_00169490(name, 0);
    self->f8->func_00169710(D_00287E90);
    if (slt) {
        strcpy(self->f138, slt);
        self->f188 = 1;
    } else {
        self->f8->func_00168550(D_00287EA8, self->f138, -1);
        self->f188 = 0;
    }
    if (found) {
        func_0014FF00(found->f4 + 0x28, 0, 0, path, 0);
        func_00030F30(path, D_00287EA0);
        if (func_001EA426(path, self->f138) == 0)
            goto useFound;
    }
    found = 0;
    self->func_00166EB0(arg4);
    if (self->f8) {
        self->f8->func_001691E0();
        func_001E891B(self->f8);
    }
    return self->func_001D3F50();

useFound:
    if (found) {
        self->func_00166CA0(found, arg4);
        if (self->f8) {
            self->f8->func_001691E0();
            func_001E891B(self->f8);
        }
        return self;
    }
    return 0;
}

C_001676D0 *C_001676D0::func_001676D0(int n)
{
    float t;
    float tt;
    float b2;
    float s;
    float c1;
    float c2;
    void *mem;
    int i;

    n = n + 1;
    f4 = n;
    mem = func_001E8AA5(n * 4);
    t = D_00275544;
    f0 = (int *)mem;
    for (i = 0; i < f4; i++) {
        tt = t * t;
        b2 = D_00275460 - t * 0.948667f;
        s = tt * 0.2964f + b2;
        c1 = tt * t;
        c2 = c1 * 0.030333f;
        ((float *)f0)[i] = s - c2;
        t = t + D_002755EC / f4;
    }
    return this;
}

undefined4 C_00167750::func_00167750(void)
{
  int func_001D3F50(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3F50();
  return in_ECX;
}

C_00167760 *C_00167760::func_00167760(int a0)
{
    ((C_00157600 *)this)->func_00157600(a0);
    f350 = 0;
    f28 = 0;
    f34c = 0;
    f360 = 0;
    vtbl = &D_00287F64;
    f358 = 0x43fa0000;
    f35c = 0x43c80000;
    return this;
}

void C_001677B0::func_001677B0(int a0) {
    unk358 = a0;
}

void C_001677C0::func_001677C0(C_001677C0_Dst *dst)
{
    void * volatile h[3];

    h[0] = this;
    dst->f50 = f24;
    h[2] = &((C_001677C0 *)h[0])->f24->blk;
    h[1] = &dst->blk;
    __m128 *ps = (__m128 *)h[2];
    __m128 *pd = (__m128 *)h[1];
    pd[0] = ps[0];
    pd[1] = ps[1];
    pd[2] = ps[2];
    pd[3] = ps[3];
    dst->blk.m[3] = 0.5f;
    dst->blk.m[7] = 0.5f;
    dst->v54 = V4_001677C0(1.0f, 1.0f, 1.0f, 0.3f);
    h[0];
}

void C_00167860::func_00167860(void)
{
    if (!(D_002EFB3C & 1)) {
        D_002EFB3C |= 1;
        D_002EFB2C = 0.0f;
        D_002EFB30 = 0.0f;
        D_002EFB34 = 0.0f;
        D_002EFB38 = 0.15f;
    }
    func_001FEC30(0xc, f10);
    func_001FEBD0(0x23, f50->fC0);
    func_001FEBD0(0x24, f50->fFC + 0x180);
    func_001FEBD0(0x25, &f54);
    func_001FEBD0(0x26, &D_002EFB2C);
}

int C_00167760::func_00167900(void)
{
    int i;
    int j;
    S_00167900_Obj *obj;
    S_00167900_Node *node;
    S_00167900_Elem *e;

    if (D_002A8CDC != 0) {
        if (f24->fF4 != 0 && f24->f150 == 0 && D_002A85D4 != 0) {
            node = D_002A829C->f14[f354].f4;
            node->func_001B07A0();
            f28 = D_002F0630->f10[node->fD4];
            func_001677C0(f360);
            for (i = 0; i < f350; i++) {
                if (f28 != 0 && (obj = f2c[i]) != 0 && obj->f190 <= 1) {
                    obj->f1d0->func_00142F30(*(int *)(D_002EFDB8 + 4));
                    e = &obj->f1a4->f10[obj->f1a0];
                    for (j = 0; j < e->count; j++) {
                        f28->func_00149310(e->f8 + j * 0x14, (int)obj->f1d0, (int)f360, 0);
                    }
                }
            }
            f350 = 0;
            return 1;
        }
        f350 = 0;
    }
    return 1;
}

C_00167760 *C_00167760::func_00167A70(int flags)
{
    vtbl = (void *)&D_00287F64;
    if (f360) {
        f360->destroyObject(1);
    }
    if (f34c) {
        f34c->destroyObject(1);
    }
    vtbl = (void *)&D_00287EE4;
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

C_00167AC0 *C_00167AC0::func_00167AC0(void)
{
    C_00167AC0_Sub *p = subs;
    int n = 4;

    do {
        p->func_001D3F50();
        p++;
        n--;
    } while (n != 0);
    return this;
}

int C_00167DD0::func_00167AF0(void *p)
{
    S_00167AF0_List *list = (S_00167AF0_List *)p;
    float radius;
    S_00167AF0_Vector center;
    int i;
    S_00167AF0_Vector pos;
    S_00167AF0_Vector extent;
    S_00167AF0_Vector delta;
    __declspec(align(16)) float matrix[16];
    char *obj;

    pos = *(S_00167AF0_Vector *)(f24 + 0xc0);
    for (i = 0; i < list->count; ++i) {
        if (list->count > 0 && list->items && i < list->count)
            obj = list->items[i];
        else
            obj = 0;
        if (obj[0x20] != list->tag || !(obj[0x1a3] & 8))
            continue;
        radius = *(int *)(obj + 0x190) == 1 ? *(float *)(obj + 0x184) : *(float *)(obj + 0x188);
        if (!(*(float *)(obj + 0x1b0) - radius < *(float *)((char *)this + 0x358)))
            continue;
        if (((C_00167AF0_Obj *)obj)->test())
            continue;
        center = *(S_00167AF0_Vector *)(obj + 0x150);
        delta.x = center.x + *(float *)(obj + 0xfc) - pos.x;
        delta.y = center.y + *(float *)(obj + 0x10c) - pos.y;
        delta.z = center.z + *(float *)(obj + 0x11c) - pos.z;
        if (!(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z - radius * radius < *(float *)((char *)this + 0x35c)))
            continue;
        extent = *(S_00167AF0_Vector *)(obj + 0x160);
        center = *(S_00167AF0_Vector *)(obj + 0x150);
        func_000263B0(matrix, obj + 0xf0, *(char **)(f24 + 0xfc) + 0xf0);
        if (D_002EFB1C || D_002AB66C->func_001C5DE0(matrix, &center, &extent, 0)) {
            ((char **)((char *)this + 0x2c))[f350] = obj;
            if (++f350 >= 200)
                break;
        }
    }
    return 1;
}

C_00167760 *C_00167760::func_00167D10(C_0017A860 *owner, int b)
{
    C_00167760_Stream *s = (C_00167760_Stream *)func_001E8A44(0x14);
    if (s)
        s = s->func_00144640();
    else
        s = 0;
    f34c = s;
    s->v1(b, D_002AA46C);
    f354 = f34c->f4;
    if (owner) {
        func_001D3F50();
        f24 = owner;
        owner->func_0017A860(this);
        C_00167860 *p = (C_00167860 *)func_001E8A44(0x70);
        if (p) {
            p->vtbl = (void *)&D_00287FE4;
            p->f5c = 0;
            p->f58 = 0;
            p->f54 = 0;
            p->f60 = 1.0f;
        } else {
            p = 0;
        }
        f360 = (C_00167760_Obj *)p;
        return this;
    }
    return 0;
}

int C_00167DD0::func_00167DD0(S_00167DD0_Object *contextArg, C_00167DD0_Context *objectArg, void *arg)
{
 S_00167DD0_Object *object = (S_00167DD0_Object *)objectArg;
 C_00167DD0_Context *context = (C_00167DD0_Context *)contextArg;
 S_00167DD0_Node *node = object->head;
 S_00167DD0_Temps temps;
 C_00167AC0_Sub *a = temps.a, *b = temps.b;
 int i;
 for(i=0;i<4;i++) a[i].func_001D3F50();
 for(i=0;i<4;i++) b[i].func_001D3F50();
 if(D_002EFE54 == object->stamp) return 0;
 object->stamp = D_002EFE54;
 if(object->f28 && !context->func_00192BD0(object->f3c)) func_00167AF0(object->f28);
 for(;node;node=node->next) {
  if(node->item->func_00179B40(a, *(int *)(f24+0xfc)) && func_0017C060(arg,a,b))
   func_00167DD0((S_00167DD0_Object *)context,(C_00167DD0_Context *)node->value,b);
 }
 return 1;
}

extern int D_002A85D8;
extern char D_002EFD38[];
int C_00167DD0::func_00167ED0(void)
{
    char *w = *(char **)(D_002EFDB8 + 4);
    char *o = f24;
    f350 = 0;
    if (*(int *)(o + 0xf4) > 0 && *(int *)(o + 0x150) == 0) {
        char *e = *(char **)(w + 0x2c);
        if (e) {
            if (*(void **)(e + 0x28))
                func_00167AF0(*(void **)(e + 0x28));
            if (*(void **)(e + 0x2c))
                func_00167AF0(*(void **)(e + 0x2c));
            if (D_002A85D8) {
                u16 st = D_002EFE54 + 1;
                D_002EFE54 = st;
                *(u16 *)(e + 0x92) = st;
                C_00167AC0 a, b;
                a.func_00167AC0();
                b.func_00167AC0();
                S_00167DD0_Node *n = *(S_00167DD0_Node **)(e + 0x24);
                for (; n; n = n->next) {
                    if (n->item->func_00179B40((C_00167AC0_Sub *)&a, *(int *)(f24 + 0xfc)) &&
                        func_0017C060(D_002EFD38, &a, &b))
                        func_00167DD0((S_00167DD0_Object *)e, (C_00167DD0_Context *)n->value, &b);
                }
            }
        }
    }
    return f350 > 0;
}

