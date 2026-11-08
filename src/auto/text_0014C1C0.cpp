/* 12 functions from 0x0014C1C0 to 0x0014CC60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct V4_0014C1C0 { int x, y, z, w; V4_0014C1C0() { z = 0; y = 0; x = 0; w = 0x3f800000; } };
void *func_001E8A44(int);
inline void *operator new(unsigned int, void *p) { return p; }
static __forceinline V4_0014C1C0 *NewV4_0014C1C0(int n) {
    void *m = func_001E8A44(n * 16);
    if (m) {
        V4_0014C1C0 *p = (V4_0014C1C0 *)m;
        for (int i = n - 1; i >= 0; i--) { p->z = 0; p->y = 0; p->x = 0; p->w = 0x3f800000; p++; }
        return (V4_0014C1C0 *)m;
    }
    return 0;
}
struct C_00134980 { char pad0[0x70]; V4_0014C1C0 *f70, *f74, *f78; int f7C; char pad80[4]; void *f84, *f88, *f8C, *f90; char pad94[8]; C_00134980(); };
struct C_0014C1C0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void Reset();
    char pad4[0x50]; C_00134980 *f54; char pad58[0x50];
    int fA8; int *fAC; V4_0014C1C0 *fB0, *fB4, *fB8; void *fBC; V4_0014C1C0 *fC0, *fC4;
    void func_0014C1C0(int n, V4_0014C1C0 *src, int *ids);
};
extern V4_0014C1C0 D_002A75A8;
extern char D_002A5EA0[], D_002A4F28[], D_002A60B0[], D_002A5138[];
extern float D_002755E8, D_00275460;
struct C_0014C890_Manager {
    char pad0[0x21C8];
    int f21C8, f21CC;
    int func_0013F7D0(char *);
};
extern undefined4 D_002BF250;
void func_0001CB80(char *);
void *func_001E8A44(int);
struct __declspec(align(16)) C_0014CA80_Matrix {
    float m[16];
    void func_000264C0(void *);
};
struct C_0014CA80_Obj {
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
    virtual void setMatrix(void *);
    char pad4[0x4c]; int type;
    char pad54[0x68]; float fBC;
    char padC0[0xc]; float fCC;
    char padD0[0xc]; float fDC;
    char padE0[0xc]; float fEC;
    char padF0[0x18]; float f108, f10C;
    char pad110[8]; float f118, f11C;
    char pad120[0x10]; float matrix[16];
};
struct C_0014CA80 {
    char pad0[8]; u16 x, y, z; u8 bE; char padF; s8 b10, b11;
    void *func_0014CA80(int);
};
struct C_0014CA60 {
    undefined4 func_0014CA60(void);
};

struct C_0014C530 {
    char pad0[0xEC];
    int unkEC;
    void func_0014C530(void);
};

extern int D_00286924;
extern int D_002BF254;
extern f32 D_0027A094;
void func_001E891B(void *p);
void func_001E8390(void *p);
void __stdcall func_00201100(void *p);

struct C_0014C540_Sub {
    char pad0[0x70];
    void *f70, *f74, *f78;
    char pad7C[8];
    void *f84, *f88, *f8C, *f90, *f94;
};
struct C_0014C540_Item {
    char pad0[0xC];
    void *fC;
};
struct C_0014C6F0 {
    void *vtbl;
    char pad4[0x50];
    C_0014C540_Sub *f54;
    char pad58[0x50];
    int fA8;
    void *fAC, *fB0, *fB4, *fB8, *fBC, *fC0, *fC4;
    char padC8[0x28];
    C_0014C540_Item **fF0;
    void func_0014C540();
    void func_00133E60();
    void *func_0014C6F0(int flags);
};

struct C_0014C7D0_Obj {
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
    virtual void v35(void *, int, int);
    char pad4[0x130];
    float f134;
    char pad138[8];
    float f140, f144;
    char pad148[0x5C];
    int *f1A4;
    C_0014C7D0_Obj *func_00143580(int);
};

struct C_0014C720 {
    u8 b0;
    char pad1[0x7F];
    u8 b80;
    char pad81[0x7F];
    u8 b100;
    char pad101[0x7F];
    f32 f180;
    f32 f184;
    f32 f188;
    f32 f18C;
    f32 f190;
    f32 f194;
    f32 f198;
    f32 f19C;
    f32 f1A0;
    f32 f1A4;
    f32 f1A8;
    f32 f1AC;
    f32 f1B0;
    f32 f1B4;
    f32 f1B8;
    f32 f1BC;
    f32 f1C0;
    f32 f1C4;
    f32 f1C8;
    float f1CC, f1D0, f1D4;
    int f1D8;
    char pad1DC[0x10];
    u32 f1EC;
    u32 f1F0;
    u32 f1F4;
    C_0014C7D0_Obj *f1F8;
    int f1FC;
    char pad200[8];
    void *f208;
    int func_0014C890(int);
    C_0014C720 *func_0014C720();
    void func_0014C7D0();
    f32 func_0014C830(char param);
    f32 func_0014C860(char param);
};

struct C_0014CC20 {
    char pad0[0xE];
    u8 bE;
    char padF[2];
    s8 b11;
    f32 func_0014CC20(void);
};


void C_0014C1C0::func_0014C1C0(int n, V4_0014C1C0 *src, int *ids)
{
    int i;
    Reset();
    fA8 = n;
    fAC = (int *)func_001E8A44(n * 8);
    fB0 = NewV4_0014C1C0(fA8 * 2);
    fB4 = NewV4_0014C1C0(fA8);
    fB8 = NewV4_0014C1C0(fA8);
    fBC = func_001E8A44(fA8 * 4);
    fC0 = NewV4_0014C1C0(fA8);
    fC4 = NewV4_0014C1C0(fA8);
    for (i = 0; i < fA8 * 2; i++) {
        if (ids) fAC[i] = ids[i]; else fAC[i] = 0;
        if (src) fB0[i] = src[i]; else fB0[i] = D_002A75A8;
    }
    C_00134980 *o = new (func_001E8A44(0x9c)) C_00134980;
    o->f7C = fA8;
    o->f84 = func_001E8A44(o->f7C * 4);
    o->f88 = func_001E8A44(o->f7C * 4);
    o->f8C = func_001E8A44(o->f7C * 4);
    o->f90 = func_001E8A44(o->f7C * 2);
    o->f70 = NewV4_0014C1C0(o->f7C * 2);
    o->f74 = NewV4_0014C1C0(o->f7C);
    o->f78 = NewV4_0014C1C0(o->f7C);
    f54 = o;
}

void C_0014C530::func_0014C530(void) {
    extern int D_002B9344;
    int func_0014B260(...);
    D_002B9344 = unkEC;
    func_0014B260();
}

void C_0014C6F0::func_0014C540()
{
    if (fAC) func_001E891B(fAC);
    if (fB0) func_001E891B(fB0);
    if (fB4) func_001E891B(fB4);
    if (fB8) func_001E891B(fB8);
    if (fBC) func_001E891B(fBC);
    if (fC0) func_001E891B(fC0);
    if (fC4) func_001E891B(fC4);
    C_0014C540_Sub *p = f54;
    if (p) {
        if (p->f8C) { func_001E891B(p->f8C); p->f94 = 0; }
        if (p->f70) { func_001E891B(p->f70); p->f70 = 0; }
        if (p->f90) { func_001E891B(p->f90); p->f90 = 0; }
        if (p->f74) { func_001E891B(p->f74); p->f74 = 0; }
        if (p->f88) { func_001E891B(p->f88); p->f88 = 0; }
        if (p->f84) { func_001E891B(p->f84); p->f84 = 0; }
        if (p->f78) { func_001E891B(p->f78); p->f78 = 0; }
        func_001E891B(f54);
        f54 = 0;
    }
    if (fF0) {
        for (int i = 0; i < fA8; ++i) {
            C_0014C540_Item *item = fF0[i];
            if (item) {
                if (item->fC) func_001E8390(item->fC);
                func_001E891B(item);
            }
        }
        func_001E8390(fF0);
        fF0 = 0;
    }
}

void *C_0014C6F0::func_0014C6F0(int flags)
{
    vtbl = &D_00286924;
    func_0014C540();
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

C_0014C720 *C_0014C720::func_0014C720()
{
    b0 = 0;
    b80 = 0;
    b100 = 0;
    f180 = 0.0f;
    f184 = 0.0f;
    f188 = 0.0f;
    f18C = 0.0f;
    f190 = 0.0f;
    f194 = 0.0f;
    f198 = 0.0f;
    f19C = 0.0f;
    f1A0 = 0.0f;
    f1A4 = 0.0f;
    f1A8 = 0.0f;
    f1AC = 0.0f;
    f1B0 = 0.0f;
    f1B4 = 0.0f;
    f1B8 = 0.0f;
    f1BC = 1.0f;
    f1C0 = 1.0f;
    f1C4 = 0.0f;
    f1C8 = 0.5f;
    f1EC = 0;
    f1F4 = 0;
    f1F0 = 0;
    f1F8 = 0;
    return this;
}

void C_0014C720::func_0014C7D0()
{
    if (f1F8)
        f1F8->v2();
    if (f1F0)
        func_001E8390((void *)f1F0);
    if (f1F4)
        func_001E8390((void *)f1F4);
    if (f208)
        func_00201100(f208);
    D_002BF254 = 0;
}

f32 C_0014C720::func_0014C830(char param)
{
    return (f180 - f184) * param * D_0027A094 + f180;
}

f32 C_0014C720::func_0014C860(char param)
{
    return (f194 - f18C) * param * D_0027A094 + f18C;
}

int C_0014C720::func_0014C890(int arg)
{
    char name[128];
    char savedA[260];
    char savedB[260];
    int i = 0;
    do { savedA[i] = D_002A5EA0[i]; } while (D_002A5EA0[i++]);
    i = 0;
    do { D_002A5EA0[i] = D_002A4F28[i]; } while (D_002A4F28[i++]);
    i = 0;
    do { savedB[i] = D_002A60B0[i]; } while (D_002A60B0[i++]);
    i = 0;
    do { D_002A60B0[i] = D_002A5138[i]; } while (D_002A5138[i++]);
    if (b80 && !((C_0014C890_Manager *)D_002BF250)->f21C8) {
        char *src = (char *)&b80;
        char *dst = name;
        while ((*dst++ = *src++) != 0) {}
        func_0001CB80(name);
        ((C_0014C890_Manager *)D_002BF250)->f21C8 = ((C_0014C890_Manager *)D_002BF250)->func_0013F7D0(name);
        ((C_0014C890_Manager *)D_002BF250)->f21CC = ((C_0014C890_Manager *)D_002BF250)->func_0013F7D0(name);
    }
    if (b0) {
        C_0014C7D0_Obj *p = (C_0014C7D0_Obj *)func_001E8A44(0x1E0);
        if (p) p = p->func_00143580(0);
        else p = 0;
        f1F8 = p;
        p->v35(this, 0, 0);
        float half = D_002755E8;
        f1FC = f1F8->f1A4[4];
        f1CC = half / f1F8->f144;
        f1D0 = D_00275460 / f1F8->f140;
        f1D4 = (f1F8->f134 - f1F8->f144) * f1CC;
        f1D8 = 1;
    }
    i = 0;
    do { D_002A5EA0[i] = savedA[i]; } while (savedA[i++]);
    i = 0;
    do { D_002A60B0[i] = savedB[i]; } while (savedB[i++]);
    return 1;
}

undefined4 C_0014CA60::func_0014CA60(void)
{
  extern undefined4 D_002BF250;
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(D_002BF250 + 0x54 + (uint)*(byte *)(in_ECX + 0xe) * 4) + 0x1ec);
}

void *C_0014CA80::func_0014CA80(int index) {
    extern undefined4 D_002BF250;
    C_0014C720 *obj = *(C_0014C720 **)(D_002BF250 + 0x54 + bE * 4);
    C_0014CA80_Obj *p = ((C_0014CA80_Obj **)obj->f1F4)[index];
    if (!p) return 0;
    float px = x * *(float *)(D_002BF250 + 0x578);
    float py = y * *(float *)(D_002BF250 + 0x578);
    float pz = z * *(float *)(D_002BF250 + 0x578);
    float sy = ((obj->f194 - obj->f18C) * (int)b11 * D_0027A094 + obj->f18C) / obj->f18C;
    float sx = ((obj->f180 - obj->f184) * (int)b10 * D_0027A094 + obj->f180) / obj->f180;
    if (p->type == 5) {
        p->f108=sy;
        p->fCC=px;
        p->f10C=sx;
        p->fDC=py;
        p->fEC=pz;
    } else if (p->type == 4) {
        p->f118=sy;
        p->fBC=px;
        p->f11C=sx;
        p->fCC=py;
        p->fDC=pz;
    } else if (p->type == 0) {
        C_0014CA80_Matrix matrix;
        matrix.func_000264C0(p->matrix);
        matrix.m[3]=px; matrix.m[7]=py; matrix.m[11]=pz;
        p->matrix[3]=px; p->matrix[7]=py; p->matrix[11]=pz;
        ((C_0014CA80_Obj *)p)->setMatrix(&matrix);
    }
    return p;
}

f32 C_0014CC20::func_0014CC20(void)
{
    extern undefined4 D_002BF250;
    C_0014C720 *obj = *(C_0014C720 **)(D_002BF250 + 0x54 + (uint)bE * 4);
    return (obj->f194 - obj->f18C) * (int)b11 * D_0027A094 + obj->f18C;
}

