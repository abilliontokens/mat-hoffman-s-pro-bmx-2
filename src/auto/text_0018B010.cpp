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

