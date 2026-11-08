/* 16 functions from 0x0004E680 to 0x0004F5E0, found by Ghidra. */
#include "common.h"
#include <string.h>
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct H_Player {
 char p0[0xa40]; int score; char pa44[8]; float fa4c; int fa50; float fa54;
 char pa58[0x600]; float f1058; char p105c[0x154]; int f11b0;
 int func_00108660(); void func_001084E0();
};
struct H_Players { char p0[0x24]; int count; char p28[0x180]; H_Player *items[1]; };
struct H_Item { char p0[0x2e8]; int id; unsigned char flags; };
struct H_Part { int pad; H_Item *item; };
struct H_Scene { char p0[0x28]; H_Part **parts; };
struct H_World { char p0[0x3b4]; H_Scene *scene; char p3b8[0x128]; H_Players *players; };
struct H_Rules { int func_0005B960(int, float); };
struct H_Result { char p0[0x168]; int done; void func_00067D60(int,int); void func_000684B0(); };
struct H_Overlay { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(int); };
struct H_State { char p0[0x10]; float time; char p14[0xc]; int mode; };
struct H_Global { char p0[0x2e0]; H_State *state; };
struct C_0004EF30 {
 char p0[0x64]; H_World *world; H_Rules *rules;
 char p6c[0x24]; int count;
 char p94[0x90]; float f124; float f128; int f12c;
 char p130[0x60]; H_Result *result;
 char p194[0x60]; int f1f4;
 char p1f8[0x94]; int index;
 char p290[0xac0]; H_Overlay *overlay; int ready;
 void func_00157A00(int); void func_0004EA20(H_Item *); void func_0004E7B0(); void func_00032A20(); void func_00031260(int);
 void func_0004EF30(int);
};
extern float D_00275544;

struct M_Base { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); };
struct M_A : M_Base { M_A *func_0005ECA0(int); void func_0005EDC0(void *); };
struct M_C : M_Base { M_C *func_000715B0(int); void func_00071880(void *); };
struct M_D : M_Base { M_D *func_00066C90(int); void func_00066FA0(void *); };
struct M_E : M_Base { M_E *func_00082450(int); void func_0008DB70(void *, void *, int, int, int, int, int); };
struct M_F { M_F *func_000876B0(int); M_F *func_00087760(int, void *, int); };
struct M_H { M_H *func_00088530(int); M_H *func_00088570(int); };
struct M_I { M_I *func_00086470(int); M_I *func_00086530(void *, int); };
struct M_J : M_Base { M_J *func_0006C380(int); void func_0006C570(void *); };
struct M_Items { char pad[0x1a8]; void *items[1]; };
struct M_Level { char pad[0x4e0]; M_Items *f4e0; };
struct M_State { int count; int pad4; int unk8; };
struct M_Global { char pad[0x2e0]; M_State *f2e0; };
struct C_0004F2A0 {
 char pad0[0x64]; M_Level *f64;
 char pad68[0x7c]; M_H *fe4;
 char pade8[0x74]; M_A *f15c;
 char pad160[0x10]; M_E *f170[8];
 M_D *f190; int f194; M_F *f198; int f19c; M_C *f1a0;
 char pad1a4[0xe0]; int f284;
 char pad288[0x20]; M_I *f2a8;
 char pad2ac[0x2c]; M_J *f2d8;
 void func_00031630(); void func_0004F2A0();
};

struct C_0004ED80 {
    int unk0;
    void func_00033220(void);
    void *func_0004ED80(int flags);
};

void func_001E891B(void *ptr);

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);
extern char D_002A5870[];
extern char D_00277744[];
extern char D_00277734[];
extern char D_0027771C[];
extern char D_0027770C[];
extern char D_002776F8[];

struct C_00168280 {
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168A10(const char *key, int *out);
    void func_00168550(const char *key, void *dst, int size);
    void func_00168CB0(const char *key, void *def, void *dst);
};

struct C_0013B210 {
    int func_0013B1A0(const char *key);
};
extern C_0013B210 *D_002BEAAC;

struct C_0004EC40Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void func_0004EC40(void);
};

struct C_0004F5B0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct C_0004F5B0 {
    char pad0[0x2A8];
    C_0004F5B0_Obj *f2A8;
    void func_000314A0(void);
    void func_0004F5B0(void);
};

struct C_0004F590Obj {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void func4(void);
};

struct C_0004F590 {
    char pad0[0x2a8];
    C_0004F590Obj *f2a8;
    void func_00031450(void);
    void func_0004F590(void);
};

struct C_0004F550 {
    char pad0[0x2a8];
    void *f2a8;
    char pad2ac[0x2c];
    void *f2d8;
    void func_00031640(void);
    void func_001577A0(void *p, int n);
    void func_0004F550(void);
};

struct C_0004F220 {
    void *vtbl;
    char pad4[0x280];
    int f284;
    int f288[8];
    void *f2a8;
    int f2ac;
    int f2b0;
    int f2b4;
    int f2b8[8];
    void *f2d8;
    int f2dc;
    int f2e0;
    void func_00030F90(int a0);
    C_0004F220 *func_0004F220(int a0);
};

struct C_0004ECC0Vec {
    u32 x, y, z, w;
};

struct C_0004ECC0 {
    void *vtbl;
    char pad4[0x60];
    void *f64;
    char pad68[0x21c];
    int f284;
    int f288;
    int f28c;
    u32 f290[80];
    char f3d0[0x960];
    void *fD30[8];
    int fD50;
    int fD54;
    void *fD58[8];
    void func_00030F90(int a0);
    void func_0004E680(void);
    C_0004ECC0 *func_0004ECC0(int a0);
};

int func_00011260(int lo, int hi);
typedef enum { BAD_NO_0004EA20, BAD_YES_0004EA20 } EBad_0004EA20;
extern char D_00277750[];

struct S_0004EA20_Vec {
    u32 x, y, z, w;
};

struct C_00097DA0 {
    int func_00097DA0(const char *name);
};

struct C_0001B3C0 {
    int func_0001B3C0(const char *name);
};

struct C_0004EA20_Comp {
    void func_00199600(S_0004EA20_Vec v);
    void func_0019AC50(void);
};

struct C_0004EA20_Part {
    char pad0[4];
    C_0004EA20_Comp *f4;
};

struct C_0004EA20_Obj {
    char pad0[0x1a4];
    C_0004EA20_Part *f1a4;
};

struct C_0004EA20_Scene {
    char pad0[0x28];
    C_0004EA20_Obj **f28;
};

struct C_0004EA20_World {
    char pad0[0x3ac];
    C_0004EA20_Scene *f3ac;
    char pad3b0[0xd4];
    C_0001B3C0 *f484;
};

struct C_0004EA20_Item {
    char pad0[0x34];
    char f34[0x1c];
    u32 f50, f54;
    char pad58[8];
    u32 f60, f64;
    char pad68[8];
    u32 f70, f74;
    char pad78[0x268];
    u32 f2e0;
    char pad2e4[8];
    u8 f2ec;
    void func_001BB950(S_0004EA20_Vec *a, void *b, u32 *c, u32 *d, u32 e);
};

struct C_0004EBA0 {
    char pad0[0x64];
    C_0004EA20_World *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x12c];
    C_00097DA0 *f1c0;
    char pad1c4[0xc0];
    int f284;
    int f288;
    int f28c;
    S_0004EA20_Vec f290[20];
    char f3d0[0x960];
    void *fD30[9];
    int fD54;
    void *fD58[1];
    void func_00031640(void);
    void func_00034090(void);
    void func_00031450(void);
    void func_0004EA20(int a);
    void func_001577A0(void *p, int n);
    int func_0004EBA0(void);
    void func_0004EBE0(void);
    void func_0004EC40(void);
};

struct C_0004EDB0Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(const char *s, int a, int b, int c, int d);
    virtual void v5();
    virtual void v6();
    C_0004EDB0Obj *func_001CF740(void *a, int b, int c);
};

struct C_0004EDB0Sub {
    void func_00099D40(int a);
};

struct C_0004EDB0 {
    char pad0[0x64];
    char *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x12c];
    C_0004EDB0Sub *f1C0;
    char pad1c4[0x40];
    int f204;
    char pad208[0x84];
    int f28c;
    char pad290[0xac0];
    C_0004EDB0Obj *fD50;
    void func_000342C0(void);
    void func_0004EA20(int a);
    C_0004EDB0 *func_0004EDB0(void);
};

struct S_0004E7B0_Vec {
    float x, y, z, w;
    S_0004E7B0_Vec() { z = 0; y = 0; x = 0; w = 1.0f; }
    S_0004E7B0_Vec(float nx, float ny, float nz) { x = nx; y = ny; z = nz; w = 1.0f; }
};

/* the viewer's direction filter: hands back a vector through its hidden return slot */
struct S_0004E7B0_Filter {
    S_0004E7B0_Vec func_00198040(S_0004E7B0_Vec *in);
};

struct S_0004E7B0_Cam {
    char pad0[0x230];
    S_0004E7B0_Filter *f230;
    char pad234[0x600];
    S_0004E7B0_Vec f834;
};

struct S_0004E7B0_Cams {
    char pad0[0x1a8];
    S_0004E7B0_Cam *f1a8[2];
};

struct S_0004E7B0_Scene {
    char pad0[0x4e0];
    S_0004E7B0_Cams *f4e0;
};

/* the arrow overlay of one player (DirectionArrowOverlay) */
struct S_0004E7B0_Overlay {
    void func_00088A40(int a, S_0004E7B0_Vec *v);
};

struct C_0004E7B0 {
    char pad0[0x64];
    S_0004E7B0_Scene *f64;
    char pad68[0x220];
    int f288;
    char pad28c[4];
    S_0004E7B0_Vec f290[1];
    char pad2a0[0xa90];
    S_0004E7B0_Overlay *fD30[2];
    void func_0004E7B0(void);
};

extern float D_00277240;
void func_0004E410(S_0004E7B0_Vec *out, S_0004E7B0_Vec *in);
float func_0014FBA0(float x, float z);

static inline void Sub2_0004E7B0(S_0004E7B0_Vec *out, const S_0004E7B0_Vec &a, const S_0004E7B0_Vec &b)
{
 *out = S_0004E7B0_Vec(a.x - b.x, a.y - b.y, a.z - b.z);
}
static inline S_0004E7B0_Vec Sub_0004E7B0(const S_0004E7B0_Vec &a, const S_0004E7B0_Vec &b)
{
    S_0004E7B0_Vec r(a.x - b.x, a.y - b.y, a.z - b.z);
    return r;
}

void C_0004ECC0::func_0004E680(void)
{
    extern C_0004ECC0Vec D_002A174C;
    char buf[0x104];
    char name[0x104];
    C_00168280 *obj;
    void *mem;
    int i;

    func_001ADCC0(buf, 0x104, D_00277744, D_002A5870, (char *)f64 + 0x134);
    if (D_002BEAAC->func_0013B1A0(buf) != 0) {
        mem = func_001E8A44(0x4cc);
        obj = mem != 0 ? ((C_00168280 *)mem)->func_00168280() : 0;
        obj->func_00169490(buf, 0);
        obj->func_00169710(D_00277734);
        obj->func_00168A10(D_0027771C, &f284);
        for (i = 0; i < f284; i++) {
            func_001ADCC0(name, 0x104, D_0027770C, i + 1);
            obj->func_00168CB0(name, &D_002A174C, &f290[i * 4]);
            func_001ADCC0(name, 0x104, D_002776F8, i + 1);
            obj->func_00168550(name, &f3d0[i * 0x78], 0x77);
        }
    }
}

void C_0004E7B0::func_0004E7B0(void)
{
    S_0004E7B0_Vec a;
    S_0004E7B0_Vec b;
    float angle;

    a = Sub_0004E7B0(f290[f288], f64->f4e0->f1a8[0]->f834);
    func_0004E410(&a, &a);
    a = f64->f4e0->f1a8[0]->f230->func_00198040(&a);
    angle = func_0014FBA0(a.x, a.z) * D_00277240;
    b = f290[f288];
    fD30[0]->func_00088A40((int)angle, &b);
    a = Sub_0004E7B0(f290[f288], f64->f4e0->f1a8[1]->f834);
    func_0004E410(&a, &a);
    a = f64->f4e0->f1a8[1]->f230->func_00198040(&a);
    angle = func_0014FBA0(a.x, a.z) * D_00277240;
    b = f290[f288];
    fD30[1]->func_00088A40((int)angle, &b);
}

void C_0004EBA0::func_0004EA20(int a)
{
    S_0004EA20_Vec v;
    float xs[4];
    float ys[4];
    C_0004EA20_Item *item;
    C_0004EA20_Obj *obj;
    char *c;
    int i;
    bool bad;

    v.z = 0;
    v.y = 0;
    v.x = 0;
    v.w = 0x3f800000;
    do {
        i = func_00011260(0, f284 - 1);
        v = f290[i];
        c = &f3d0[i * 0x78];
        bad = false;
        if (*c != 0 && f1c0 != 0 && f1c0->func_00097DA0(c) == 0) {
            bad = true;
        }
    } while (f288 == i || bad);
    item = (C_0004EA20_Item *)a;
    f288 = i;
    xs[0] = *(float *)&item->f50;
    xs[1] = *(float *)&item->f60;
    xs[2] = *(float *)&item->f70;
    xs[3] = 1.0f;
    ys[0] = *(float *)&item->f54;
    ys[1] = *(float *)&item->f64;
    ys[2] = *(float *)&item->f74;
    ys[3] = 1.0f;
    item->f2ec &= 0xef;
    item->func_001BB950(&v, item->f34, (u32 *)xs, (u32 *)ys, item->f2e0);
    obj = f64->f3ac->f28[f64->f484->func_0001B3C0(D_00277750)];
    obj->f1a4->f4->func_00199600(v);
    obj->f1a4->f4->func_0019AC50();
}

int C_0004EBA0::func_0004EBA0(void)
{
    fD54 = 0;
    func_0004EA20(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x64) + 0x3b4) + 0x28) + f28c * 4) + 4));
    func_00034090();
    return 1;
}

void C_0004EBA0::func_0004EBE0(void)
{
    int i;

    func_00031640();
    for (i = 0; i < f90; i++) {
        if (fD30[i] != 0) {
            func_001577A0(fD30[i], -1);
        }
        if (fD58[i] != 0) {
            func_001577A0(fD58[i], -1);
        }
    }
}

void C_0004EBA0::func_0004EC40(void)
{
    int i;

    for (i = 0; i < f90; i++) {
        if (fD58[i] != 0) {
            ((C_0004EC40Item *)fD58[i])->func_0004EC40();
        }
    }
    func_00031450();
}

C_0004ECC0 *C_0004ECC0::func_0004ECC0(int a0)
{
    extern int D_00277644;
    extern C_0004ECC0Vec D_002A174C;
    C_0004ECC0Vec *q;
    u32 *p;
    char *c;
    int n;
    int i;

    func_00030F90(a0);
    vtbl = (void *)&D_00277644;
    p = (u32 *)f290;
    n = 20;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    f288 = -1;
    f28c = -1;
    f284 = 0;
    c = f3d0;
    q = (C_0004ECC0Vec *)f290;
    n = 20;
    do {
        *c = 0;
        *q = D_002A174C;
        q++;
        c += 0x78;
    } while (--n != 0);
    fD54 = 0;
    for (i = 0; i < 8; i++) {
        fD30[i] = 0;
        fD58[i] = 0;
    }
    fD50 = 0;
    return this;
}

void *C_0004ED80::func_0004ED80(int flags) {
    extern int D_00277644;
    unk0 = (int)&D_00277644;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

extern char D_002A47F0[];
extern char D_00275678[];
extern char D_002A48F8[];
extern char D_00276C48[];
extern char D_002A5348[];
extern char *D_002A8490;
C_0004EDB0 *C_0004EDB0::func_0004EDB0(void)
{
    char *g;
    int i;

    f204 = 1;
    func_000342C0();
    for (i = 0; i < f90; i++) {
        *(int *)(*(char **)(*(char **)(f64 + 0x4e0) + 0x1a8 + i * 4) + 0xa38) = 0;
    }
    g = f64;
    for (i = 0; i < *(int *)(*(char **)(f64 + 0x3b4) + 0x24); i++) {
        if (strcmp((*(char ***)(*(char **)(g + 0x3b4) + 0x28))[i] + 0x18, "huntTrigger1") == 0) {
            f28c = i;
        }
    }
    func_0004EA20(*(int *)((*(char ***)(*(char **)(g + 0x3b4) + 0x28))[f28c] + 4));
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    void *mem = func_001E8A44(0x20c);
    fD50 = mem ? ((C_0004EDB0Obj *)mem)->func_001CF740(*(void **)(*(char **)(D_002A8490 + 4) + 0xb4), *(int *)(f64 + 0x4c0), 1) : 0;
    fD50->v4(D_00276C48, 1, 1, 0, 0);
    (*(C_0004EDB0Obj **)(*(char **)(D_002A8490 + 4) + 0xb4))->v6();
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    if (f1C0) {
        f1C0->func_00099D40(-1);
    }
    return this;
}

void C_0004EF30::func_0004EF30(int arg) {
 extern char *D_002A8490;
 int i, all, found;
 if(f1f4) { func_00157A00(arg); return; }
 if(world->scene) {
 H_Item *item=world->scene->parts[index]->item;
 if(item->flags & 0x10) {
 overlay->v5(1); func_0004EA20(item);
 for(i=0;i<count;i++) {
 H_Player *player=world->players->items[i];
 if(item->id==player->f11b0) player->score+=100;
 }
 }
 }
 func_0004E7B0();
 if(result) {
 if(!ready) {
 H_State *state=((H_Global*)D_002A8490)->state;
 if(!state->mode) { if(f128 <= D_00275544) ready=1; }
 else { if(f124 > state->time) ready=1; }
 }
 all=1;
 for(i=0;i<count;i++) if(!world->players->items[i]->func_00108660()) all=0;
 if(ready) {
 for(i=0;i<count;i++) world->players->items[i]->func_001084E0();
 }
 if(ready && all && !result->done) {
 for(i=0;i<count;i++) result->func_00067D60(i,world->players->items[i]->score);
 func_00032A20();
 found=0; i=0;
 do {
 if(rules->func_0005B960(3,(float)f12c) ||
 rules->func_0005B960(1,world->players->items[i]->fa4c) ||
 rules->func_0005B960(4,(float)world->players->items[i]->score) ||
 rules->func_0005B960(2,world->players->items[i]->f1058) ||
 rules->func_0005B960(0,world->players->items[i]->fa54)) found=1;
 ++i;
 } while(i<world->players->count && !found);
 result->func_000684B0();
 }
 }
 func_00031260(arg);
}

C_0004F220 *C_0004F220::func_0004F220(int a0)
{
    extern int D_0027777C;
    int i;

    func_00030F90(a0);
    vtbl = (void *)&D_0027777C;
    f2ac = 0;
    for (i = 0; i < 8; i++) {
        f2b8[i] = 1;
        f288[i] = 0;
    }
    f284 = 8;
    f2dc = -1;
    f2a8 = 0;
    f2d8 = 0;
    f2e0 = 0;
    f2b4 = 0;
    f2b0 = 1;
    return this;
}

void C_0004F2A0::func_0004F2A0() {
 extern char *D_002A8490;
 int i; void *p;
 func_00031630();
 p=func_001E8A44(0xf4);
 fe4=p?((M_H*)p)->func_00088530(1):0;
 fe4=fe4->func_00088570(((M_Global*)D_002A8490)->f2e0->unk8);
 p=func_001E8A44(0x134);
 f15c=p?((M_A*)p)->func_0005ECA0(1):0;
 f15c->func_0005EDC0(this); f15c->v4();
 p=func_001E8A44(0x140);
 f1a0=p?((M_C*)p)->func_000715B0(1):0;
 f1a0->func_00071880(this); f1a0->v4();
 p=func_001E8A44(0x16c);
 f190=p?((M_D*)p)->func_00066C90(1):0;
 f190->func_00066FA0(this); f190->v4();
 if(f284==8) {
 for(i=0;i<((M_Global*)D_002A8490)->f2e0->count;i++) {
 p=func_001E8A44(0xda4);
 f170[i]=p?((M_E*)p)->func_00082450(1):0;
 f170[i]->func_0008DB70(f64,f64->f4e0->items[i],((M_Global*)D_002A8490)->f2e0->unk8,i,1,1,0);
 f170[i]->v6();
 }
 } else {
 p=func_001E8A44(0x90);
 f2a8=(p?((M_I*)p)->func_00086470(1):0)->func_00086530(f64->f4e0,0);
 p=func_001E8A44(0xf0);
 f2d8=p?((M_J*)p)->func_0006C380(1):0;
 f2d8->func_0006C570(this); f2d8->v4();
 p=func_001E8A44(0xda4);
 f170[0]=p?((M_E*)p)->func_00082450(1):0;
 f170[0]->func_0008DB70(f64,f64->f4e0->items[0],((M_Global*)D_002A8490)->f2e0->unk8,0,1,1,f284==9);
 f170[0]->v6();
 }
 p=func_001E8A44(0xc8);
 f198=(p?((M_F*)p)->func_000876B0(1):0)->func_00087760(((M_Global*)D_002A8490)->f2e0->unk8,this,0);
}

void C_0004F550::func_0004F550(void)
{
    func_00031640();
    if (f2a8 != 0) {
        func_001577A0(f2a8, -1);
    }
    if (f2d8 != 0) {
        func_001577A0(f2d8, -1);
    }
}

void C_0004F590::func_0004F590(void)
{
    func_00031450();
    if (f2a8 != 0) {
        f2a8->func4();
    }
}

void C_0004F5B0::func_0004F5B0(void)
{
    func_000314A0();
    if (f2A8 != 0) {
        f2A8->v6();
    }
}

int func_0004F5D0(void) {
    int func_00031F30(...);
    func_00031F30();
    return 1;
}

