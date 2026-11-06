/* 18 functions from 0x0018B010 to 0x0018C000, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018B3B0 {
    undefined4 func_0018B3B0(byte param_1);
};

struct C_0018BF60 {
    undefined4 func_0018BF60(byte param_1);
};

struct C_0018B0D0 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    char pad2c[0x4];
    void *f30;
    undefined4 *func_0018B0D0(byte param_1);
};

struct C_0018B140 {
    void *vtbl;
    char pad4[0x8];
    void *f0c;
    undefined4 *func_0018B140(byte param_1);
};

struct S_0018B540_Elem {
    void *vtbl;
    char pad4[0x8];
    void *f0c;
};

struct C_0018B540 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    S_0018B540_Elem **f28;
    void func_0018B540(void);
};

extern int D_00289F60;
extern int D_00289F70;
extern int D_00289F80;
extern int D_00289D8C;
extern int D_0028A034;
extern int D_00289B5C;
extern int D_00289BFC;
extern int D_00289C9C;

struct C_00157660 {
    void func_00157660(void);
};

struct C_0018B120 {
    void *vtbl;
    undefined4 func_0018B120(byte param_1);
};

struct C_0018B010 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    undefined4 func_0018B010(byte param_1);
};

struct C_0018B050 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    undefined4 func_0018B050(byte param_1);
};

extern int D_0028983C;
extern int D_00289F8C;
extern int D_00289ED8;

struct C_0018AEF0 {
    void func_0018AEF0(int a0);
};

struct Lights {
    void *vtbl;
    char pad4[0x28];
    C_0018AEF0 *unk2C;
    void *unk30;
    void *unk34;
    void func_0018BEB0();
    void *func_0018BFA0(int flags);
    void func_00157660();
};

extern "C" void func_001E891B(void *p);
struct C_001691E0 { void func_001691E0(); };
struct C_00188FD0 { void func_00188FD0(int a); };
struct C_00185D00 { void func_00185D00(); };
struct C_00188CB0 { void func_00188CB0(); };
struct C_0015B4C0 { void func_0015B4C0(); };
struct C_0015D250 { void func_0015D250(); };
struct C_00193500 { void func_00193500(); };
struct C_0001D370 { void func_0001D370(); };
struct S_0018B5C0_VObj { virtual void v0(); virtual void v4(); virtual void v8(); };
struct S_0018B5C0_VDel { virtual ~S_0018B5C0_VDel(); };
struct S_0018B5C0_Glob { int pad0; C_0001D370 *f4; };
extern C_0015B4C0 *D_002E28F4;
extern int D_002EFE4C;
extern C_0015D250 *D_002E2930;
extern C_00193500 *D_002EFE78;
extern S_0018B5C0_Glob *D_002A8490;
extern int D_002EFDC8;
extern void *D_0028A154;

struct C_0018B5C0 {
    void *vtbl;
    char pad4[0x24];
    C_001691E0 *f28;
    char pad2c[0x33C - 0x2C];
    void *f33c;
    int f340;
    C_00188FD0 *f344;
    char pad348[0x384 - 0x348];
    void *f384;
    C_00185D00 *f388;
    char pad38c[4];
    void *f390;
    void *f394;
    char pad398[0x3A8 - 0x398];
    void *f3a8;
    char pad3ac[4];
    void *f3b0;
    char pad3b4[4];
    C_00188CB0 *f3b8;
    S_0018B5C0_VDel *f3bc;
    char pad3c0[0x3D8 - 0x3C0];
    void *f3d8;
    char pad3dc[4];
    void *f3e0;
    char pad3e4[0x48C - 0x3E4];
    void *f48c;
    char pad490[0x49C - 0x490];
    void *f49c;
    char pad4a0[8];
    void *f4a8;
    void *f4ac;
    S_0018B5C0_VObj **f4b0;
    S_0018B5C0_VObj **f4b4;
    S_0018B5C0_VObj **f4b8;
    S_0018B5C0_VObj **f4bc;
    char pad4c0[4];
    void *f4c4;
    void *f4c8;
    void *f4cc;
    void *f4d0;
    void *f4d4;
    void func_0018B5C0();
};

/* 16-byte block copied by value (a Vec4) */
struct S_0018B180_Vec4 {
    int x, y, z, w;
};

/* the object at body+0xC4 */
struct S_0018B180_BodyA {
    char pad0[0x190];
    S_0018B180_Vec4 f190;
};

/* the object at body+0xD0 */
struct S_0018B180_BodyB {
    char pad0[0xB4];
    int fB4;
    char padB8[0xC8 - 0xB8];
    int fC8;
    char padCC[4];
    int fD0;
    int fD4;
};

/* the rigid body made by func_001732E0 and set up by func_00173F70 */
struct S_0018B180_Body {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68();
    virtual void v6C(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7,
                     int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15);
    virtual void v70();
    virtual void v74();
    char pad4[0xC0];
    S_0018B180_BodyA *fC4;
    char padC8[8];
    S_0018B180_BodyB *fD0;
    S_0018B180_Body *func_001732E0(int a);
    S_0018B180_Body *func_00173F70(S_0018B180_Vec4 a, S_0018B180_Vec4 b, S_0018B180_Vec4 c,
                                   int a12, int a13, int a14, int a15, int a16);
};

/* PhysicsObjectTempData */
struct S_0018B180_Temp {
    void *vtbl;
    char pad4[0x104];
    S_0018B180_Vec4 f108;
    S_0018B180_Vec4 f118;
    S_0018B180_Vec4 f128;
    char pad138[0x144 - 0x138];
    char f144[0x104];
    int f248, f24C, f250, f254, f258, f25C, f260, f264, f268, f26C;
    S_0018B180_Vec4 f270;
};

struct S_0018B180_Item {
    void func_001577A0(void *p, int n);
};

struct S_0018B180_Reg {
    int func_00188E20(int idx, void *obj);
};

struct S_0018B180_Mgr {
    char pad0[0x348];
    int f348;
    char pad34C[0x3A8 - 0x34C];
    S_0018B180_Item **f3A8;
    char pad3AC[0x3B8 - 0x3AC];
    S_0018B180_Reg *f3B8;
    char pad3BC[0x4A8 - 0x3BC];
    int *f4A8;
    int *f4AC;
};

extern char D_0027C588[];

struct PhysicsObjectStaticModel {
    void *vtbl;
    char pad4[0x4];
    S_0018B180_Body *unk8;
    S_0018B180_Temp *unkC;
    void *func_0018BF10(int flags);
    int func_0018B180(S_0018B180_Mgr *a0);
};

struct C_0018BFC0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    short unk14;
    short unk16;
    short unk18;
    short unk1A;
    int unk1C;
    C_0018BFC0 *func_0018BFC0(int a0, int a1, int a2, int a3, int a4);
};

struct C_0018B090 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    undefined4 func_0018B090(byte param_1);
};

extern char D_0027B1FC[];
extern char D_0028A748[];
extern char D_0028A73C[];
extern char D_0028A730[];
extern char D_0028A71C[];
extern int D_002898FC;
extern char D_002897EC[];
extern char D_0028A6FC[];
extern char D_0028A6E0[];
extern char D_0028A6C0[];
extern char D_0028A6A4[];
extern char D_0028A688[];
extern char D_0027C494[];
extern float D_002755E8;

struct S_0018B990_Parser {
    int func_00169710(char *name);
    void func_00168550(const char *key, void *dst, int n);
    int func_00168C20(const char *key, int def, int *dst);
    int func_00168C50(const char *key, int def, void *dst);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
};

struct S_0018B990_Vec4 { float x, y, z, w; };
S_0018B990_Vec4 func_00182980(char *s);

struct S_0018B990_A {
    virtual int v0(S_0018B990_Parser *p, int n);
    S_0018B990_A();
    ~S_0018B990_A();
    char pad[0x550];
};

struct S_0018B990_B {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    void func_00157600(int a);
    S_0018B990_B *init() { func_00157600(1); vtbl = &D_0028983C; f24 = 0; f2c = 0; f30 = 0; f34 = 0; return this; }
};
struct S_0018B990_Z4 { float a, b, c, d; void set(float v) { a = v; b = v; c = v; d = v; } };
struct S_0018B990_BV {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68();
    virtual void v6C(int n);
    virtual int v70(S_0018B990_Parser *p);
};

struct S_0018B990_C {
    void *vtbl;
    S_0018B990_Z4 f4;
    float f14, f18;
    S_0018B990_C() { vtbl = &D_002898FC; f4.set(0); f14 = 1.0f; f18 = 0.5f; }
};
struct S_0018B990_CV { virtual int v0(S_0018B990_Parser *p); };

struct S_0018B990_D {
    S_0018B990_D();
    virtual ~S_0018B990_D();
    char pad[0x15C];
};
struct S_0018B990_DV { virtual int v0(void *scene, S_0018B990_Parser *p, int i); };

struct S_0018B990_E {
    S_0018B990_E();
    char pad[0x4C];
};
struct S_0018B990_EV { virtual int v0(S_0018B990_Parser *p, int i); };

struct S_0018B990_F {
    int a, b, c, d;
    void func_00188D20(int n);
};

struct S_0018B990_G {
    float a, b, c, d, e;
};

struct BmxScene_0018B990 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8C();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9C();
    virtual void vA0(); virtual void vA4(); virtual void vA8(); virtual void vAC();
    virtual void vB0(); virtual void vB4(); virtual void vB8(); virtual void vBC();
    virtual void vC0(); virtual void vC4(); virtual void vC8(); virtual void vCC();
    virtual void vD0(); virtual void vD4(); virtual void vD8(); virtual void vDC();
    virtual void vE0(); virtual void vE4(); virtual void vE8(); virtual void vEC();
    virtual void vF0(); virtual void vF4(); virtual void vF8(); virtual void vFC();
    char pad4[0x24];
    S_0018B990_Parser *f28;
    char pad2c[0x238 - 0x2C];
    char f238[0x340 - 0x238];
    int f340;
    S_0018B990_D *f344;
    char pad348[4];
    int f34c;
    int f350;
    int f354;
    int f358;
    int f35c;
    int f360;
    int f364;
    int f368;
    int f36c;
    float f370, f374, f378, f37c;
    unsigned char f380;
    char pad381[3];
    S_0018B990_E *f384;
    S_0018B990_A *f388;
    S_0018B990_B *f38c;
    S_0018B990_C *f390;
    char pad394[0x3B8 - 0x394];
    S_0018B990_F *f3b8;
    char pad3bc[0x4C4 - 0x3BC];
    S_0018B990_G *f4c4, *f4c8, *f4cc, *f4d0, *f4d4;
    unsigned char f4d8;
    int func_0018B990();
};

struct C_0018BF80 {
    undefined4 func_0018BF80(byte param_1);
};


extern char D_002893B4[];
extern char D_0028A0B4[];
extern char D_0028A024[];
extern char D_0028A0A8[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

struct C_00188DB0 {
    void func_00188DB0(void *p, int n);
};

struct S_0018B3D0_Parser {
    int func_00169710(char *name);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
};

struct S_0018B3D0_Info {
    char pad0[4];
    void *f4;
    char f8[0x10C - 8];
    int f10c;
    char pad110[0x14C - 0x110];
    unsigned char f14c;
};

struct S_0018B3D0_Reader {
    virtual void v0(int *out, void *slot);
    virtual int v1(char *buf);
};

struct S_0018B3D0_Obj {
    virtual void v0();
    virtual void v1(S_0018B3D0_Parser *parser);
};

struct C_0018B3D0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    S_0018B3D0_Obj **f28;
    int func_0018B3D0(C_00188DB0 *a1, S_0018B3D0_Parser *a2, S_0018B3D0_Info *a3, S_0018B3D0_Reader *a4);
};

undefined4 C_0018B010::func_0018B010(byte param_1)
{
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  vtbl = (void *)&D_00289B5C;
  if (f28 != 0) {
    func_001E891B(f28);
  }
  ((C_00157660 *)this)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0018B050::func_0018B050(byte param_1)
{
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  vtbl = (void *)&D_00289BFC;
  if (f28 != 0) {
    func_001E891B(f28);
  }
  ((C_00157660 *)this)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0018B090::func_0018B090(byte param_1)
{
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  vtbl = (void *)&D_00289C9C;
  if (f28 != 0) {
    func_001E891B(f28);
  }
  ((C_00157660 *)this)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 *C_0018B0D0::func_0018B0D0(byte param_1)
{
  int func_001E891B(...);

  vtbl = (void *)&D_00289D8C;
  if (f28 != 0) {
    func_001E891B(f28);
  }
  if (f30 != 0) {
    func_001E891B(f30);
  }
  ((C_00157660 *)this)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(this);
  }
  return (undefined4 *)this;
}

undefined4 C_0018B120::func_0018B120(byte param_1)
{
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  vtbl = (void *)&D_00289F60;
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 *C_0018B140::func_0018B140(byte param_1)
{
  int func_001E891B(...);

  vtbl = (void *)&D_00289F70;
  if (f0c != 0) {
    func_001E891B(f0c);
    f0c = 0;
  }
  vtbl = (void *)&D_00289F60;
  if ((param_1 & 1) != 0) {
    func_001E891B(this);
  }
  return (undefined4 *)this;
}

int PhysicsObjectStaticModel::func_0018B180(S_0018B180_Mgr *a0)
{
    int func_001E891B(...);
    char buf[0x104];
    void *m;
    S_0018B180_Temp *t;

    func_001ADCC0(buf, 0x104, D_0027C588, unkC->f144);
    m = func_001E8A44(0x154);
    unk8 = m ? ((S_0018B180_Body *)m)->func_001732E0(1) : 0;
    if (!unk8->func_00173F70(unkC->f108, unkC->f118, unkC->f128, 0, 0, (int)buf,
                             a0->f4A8[a0->f348], a0->f4AC[a0->f348])) {
        unk8->v08();
        t = unkC;
        unk8 = 0;
        if (t) {
            t->vtbl = (void *)&D_00289ED8;
            func_001E891B(t);
        }
        unkC = 0;
        return 0;
    }
    unk8->v6C(unkC->f248, unkC->f24C, 0, 0, 0, 0, 0, unkC->f254, unkC->f250, 0, 0, 0, 0, 0, 0, 0);
    unk8->fC4->f190 = unkC->f270;
    unk8->fD0->fB4 = unkC->f260;
    unk8->fD0->fC8 = unkC->f264;
    unk8->fD0->fD0 = unkC->f268;
    unk8->fD0->fD4 = unkC->f26C;
    unk8->v74();
    a0->f3A8[a0->f348]->func_001577A0(unk8, 2);
    a0->f3B8->func_00188E20(a0->f348, unk8);
    return 1;
}

undefined4 C_0018B3B0::func_0018B3B0(byte param_1)
{
  int func_00188920(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00188920();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_0018B3D0::func_0018B3D0(C_00188DB0 *a1, S_0018B3D0_Parser *a2, S_0018B3D0_Info *a3, S_0018B3D0_Reader *a4)
{
    char buf[0x104];
    char buf2[0x104];
    int ret;
    int count;
    int i;

    count = 0;
    f24 = a3->f10c;
    if (a3->f10c == 0) {
        return 0;
    }
    f28 = (S_0018B3D0_Obj **)func_001E8A44(f24 * 4);
    if (f24 > 0) {
        for (i = 0; i < f24; i++) {
            if (a3->f14c & 4) {
                func_001ADCC0(buf, 0x104, D_002893B4, i + 1);
            } else {
                func_001ADCC0(buf, 0x104, D_0028A0B4, a3->f8, i + 1);
            }
            if (a2->func_00169710(buf) != 0) {
                a2->func_00168BE0(D_0028A0A8, D_0028A024, buf2, -1);
                ret = a4->v1(buf2);
                a4->v0(&ret, &f28[i]);
                f28[i]->v1(a2);
                if (ret == 2) {
                    count++;
                }
            }
        }
        if (count > 0) {
            a1->func_00188DB0(a3->f4, count);
        }
    }
    return 1;
}

void C_0018B540::func_0018B540(void)
{
  int func_001E891B(...);
  int i;

  vtbl = (void *)&D_0028A034;
  if (f28 != 0) {
    for (i = 0; i < f24; i++) {
      S_0018B540_Elem *e = f28[i];
      if (e != 0) {
        e->vtbl = (void *)&D_00289F80;
        if (e->f0c != 0) {
          func_001E891B(e->f0c);
          e->f0c = 0;
        }
        func_001E891B(e);
        f28[i] = 0;
      }
    }
    func_001E891B(f28);
    f28 = 0;
  }
  ((C_00157660 *)this)->func_00157660();
}

void C_0018B5C0::func_0018B5C0()
{
    int i;
    C_001691E0 *p28 = f28;
    vtbl = &D_0028A154;
    if (p28 != 0) {
        p28->func_001691E0();
        func_001E891B(p28);
        f28 = 0;
    }
    if (f33c != 0) { func_001E891B(f33c); f33c = 0; }
    if (f344 != 0) { f344->func_00188FD0(3); f344 = 0; }
    if (f384 != 0) { func_001E891B(f384); f384 = 0; }
    C_00185D00 *p388 = f388;
    if (p388 != 0) { p388->func_00185D00(); func_001E891B(p388); f388 = 0; }
    if (f390 != 0) { func_001E891B(f390); f390 = 0; }
    if (f394 != 0) { func_001E891B(f394); f394 = 0; }
    if (f3a8 != 0) { func_001E891B(f3a8); f3a8 = 0; }
    if (f49c != 0) { func_001E891B(f49c); f49c = 0; }
    C_00188CB0 *p3b8 = f3b8;
    if (p3b8 != 0) { p3b8->func_00188CB0(); func_001E891B(p3b8); f3b8 = 0; }
    if (D_002E28F4 != 0) { void *v = D_002E28F4; D_002E28F4->func_0015B4C0(); func_001E891B(v); D_002E28F4 = 0; }
    if (f4a8 != 0) { func_001E891B(f4a8); f4a8 = 0; }
    if (f4ac != 0) { func_001E891B(f4ac); f4ac = 0; }
    if (f3b0 != 0) { func_001E891B(f3b0); f3b0 = 0; }
    D_002EFE4C = 0;
    if (f3e0 != 0) { func_001E891B(f3e0); }
    if (f4b0 != 0) {
        for (i = 0; i < f340; i++) {
            if (f4b0[i] != 0) f4b0[i]->v8();
        }
        func_001E891B(f4b0);
        f4b0 = 0;
    }
    if (f4b8 != 0) {
        for (i = 0; i < f340; i++) {
            if (f4b8[i] != 0) f4b8[i]->v8();
        }
        func_001E891B(f4b8);
        f4b8 = 0;
    }
    if (f4b4 != 0) {
        for (i = 0; i < f340; i++) {
            if (f4b4[i] != 0) f4b4[i]->v8();
        }
        func_001E891B(f4b4);
        f4b4 = 0;
    }
    if (f4bc != 0) {
        for (i = 0; i < f340; i++) {
            if (f4bc[i] != 0) f4bc[i]->v8();
        }
        func_001E891B(f4bc);
        f4bc = 0;
    }
    if (f3bc != 0) { delete f3bc; f3bc = 0; }
    if (f3d8 != 0) { func_001E891B(f3d8); f3d8 = 0; }
    if (f48c != 0) { func_001E891B(f48c); f48c = 0; }
    D_002E2930->func_0015D250();
    if (D_002EFE78 != 0) { void *v = D_002EFE78; D_002EFE78->func_00193500(); func_001E891B(v); D_002EFE78 = 0; }
    if (D_002A8490->f4 != 0) D_002A8490->f4->func_0001D370();
    if (f4c4 != 0) func_001E891B(f4c4);
    if (f4c8 != 0) func_001E891B(f4c8);
    if (f4cc != 0) func_001E891B(f4cc);
    if (f4d0 != 0) func_001E891B(f4d0);
    if (f4d4 != 0) func_001E891B(f4d4);
    D_002EFDC8 = 0;
    ((C_00157660 *)this)->func_00157660();
}

void Lights::func_0018BEB0()
{
    int func_001E891B(...);
    vtbl = (void *)&D_0028983C;
    if (unk2C) {
        unk2C->func_0018AEF0(3);
        unk2C = 0;
    }
    if (unk30) {
        func_001E891B(unk30);
        unk30 = 0;
    }
    if (unk34) {
        func_001E891B(unk34);
        unk34 = 0;
    }
    func_00157660();
}

void *PhysicsObjectStaticModel::func_0018BF10(int flags)
{
    int func_001E891B(...);
    void *p = unkC;
    vtbl = (void *)&D_00289F8C;
    if (p != 0) {
        *(void **)p = (void *)&D_00289ED8;
        func_001E891B(p);
        unkC = 0;
    }
    vtbl = (void *)&D_00289F60;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_0018BF60::func_0018BF60(byte param_1)
{
  int func_0018B540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_0018B540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0018BF80::func_0018BF80(byte param_1)
{
  int func_0018B5C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_0018B5C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *Lights::func_0018BFA0(int flags)
{
    int func_001E891B(...);
    func_0018BEB0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0018BFC0 *C_0018BFC0::func_0018BFC0(int a0, int a1, int a2, int a3, int a4)
{
    unk14 = 0;
    unk16 = 0;
    unk18 = 0;
    unk1A = 0;
    unk1C = 0;
    unk0 = a0;
    unk4 = a1;
    unk8 = a3;
    unkC = a2;
    unk10 = a4;
    return this;
}

