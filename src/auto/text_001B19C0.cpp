/* 33 functions from 0x001B19C0 to 0x001B2910, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_001B2270 {
    void func_001B2270(undefined4 param_1);
};

struct C_001B1BF0 {
    void func_001B1BF0(float param_1);
};

struct C_001B2350 {
    undefined4 func_001B2350(void);
};

struct C_001B1C10 {
    void func_001B1C10(int param_1);
};

struct C_001B22E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001B22E0* func_001B22E0(void);
};

struct C_001B1B20 {
    int func_001B1B20(void);
};

struct C_001B2340 {
    char pad0[0x4];
    int unk4;
    int unk8;
    void func_001B2340(void);
};

struct C_001B2330 {
    int unk0;
    char pad4[0x4];
    int unk8;
    void func_001B2330(void);
};

struct C_001D6410 {
    void func_001D6410(void);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B22A0 {
    undefined4 *func_001B22A0(byte param_1);
};

struct C_001B1B30_Obj {
    char pad0[0x34];
    float f34;
    float getF34() { return f34; }
};

struct C_001B1B30 {
    char pad0[0x24];
    C_001B1B30_Obj *f24;
    char pad28[0x70];
    float f98;
    float f9C;
    int fA0;
    int fA4;
    char padA8[0x18];
    int fC0;
    void setTarget(float v, int t)
    {
        fA4 = t;
        f9C = v;
        fA0 = 0;
    }
    void func_001B1B30(float param_1, undefined4 param_2);
};

struct C_001B1B80 {
    void func_001B1B80(undefined4 param_1, float param_2, float param_3,
                       undefined4 param_4, undefined4 param_5, undefined4 param_6);
};

struct C_001B22F0_Node {
    char pad0[0x98];
    C_001B22F0_Node *next;
    int f9c;
};

struct C_001B22F0 {
    int f0;
    char pad4[4];
    C_001B22F0_Node *f8;
    void func_001B22F0(void);
};


struct C_001B2370_Node {
    char pad0[0x98];
    C_001B2370_Node *next;
    C_001B2370_Node *prev;
};

struct C_001B2370 {
    C_001B2370_Node *head;
    C_001B2370_Node *tail;
    char pad8[0x4];
    int count;
    void func_001B2370(C_001B2370_Node *node);
};

struct C_001B2690_Entry {
    char pad0[0x8];
    int data;
    int refCount;
};

struct C_001B2690 {
    char pad0[0x14];
    C_001B2690_Entry *f14;
    void func_001AC750(int index, int data);
    void func_001B2690(int index, int data);
};

struct C_001B2700 {
    void *vtbl;
    void func_001AC830();
    void *func_001B2700(unsigned int flags);
};

struct C_001B19C0_Vec {
    float x;
    float y;
    float z;
    float w;
};

void func_001E8390(void *p);
void *func_001E8A44(int size);
void *func_001E8AA5(unsigned int size);
extern int D_0028C87C;

struct C_00157600 {
    void func_00157600(int a);
};

struct C_001D3F50 {
    void func_001D3F50(void);
};

struct C_00161580 {
    C_00161580 *func_00161580(void);
};

void func_001E891B(void *p);
int func_00135C70(int a, int b, int *c, int d);

struct C_001B2580_Iter {
    int f0;
    int f4;
    int f8;
    int func_001B2330(void);
    int func_001B2350(void);
};

struct C_001B23D0_Obj {
    char pad4[4];
    C_001B2580_Iter iter;
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S_001B26C0_Entry {
    int f0;
    C_001B23D0_Obj *f4;
    int f8;
    int fC;
};

/* TextureMapManager */
struct C_001B23D0 {
    void *vtbl;
    char pad4[0x4];
    int f8;
    char padC[0x8];
    S_001B26C0_Entry *f14;
    char pad18[0xc];
    C_001B23D0_Obj *f24;
    void *f28;
    void *f2c;
    unsigned int f30;
    unsigned int f34;
    C_001B23D0 *func_001B23D0(void);
    void func_001B2400(void);
    void func_001B2450(void);
    void *func_001B2480(unsigned int size);
    void *func_001B24D0(unsigned int size);
    void *func_001B2520(unsigned int flags);
    void func_001B2580(int *a, int b);
    void func_001B25E0(void);
    void func_001B2640(void);
    void func_001B26C0(int idx);
    void func_001AC790(int idx);
    void func_00157BF0(int *a, int b);
};

struct C_001B19C0 {
    char pad0[0x2C];
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    char pad44[0x8];
    C_001B19C0_Vec f4C;
    int f5C;
    float f60;
    char pad64[0x5C];
    int fC0;
    void func_001B19C0(float a1, float a2, float a3);
    void func_001B1A30(float a1, float a2, float a3);
};

struct C_001B1AB0 {
    char pad0[0x24];
    char *f24;
    char pad28[0x5C];
    int f84;
    int f88;
    int f8C;
    int f90;
    int f94;
    char pad98[0x28];
    int fC0;
    void func_001B1AB0(int a1, int a2);
};

struct C_001B1C30_View {
    void func_0012B210(int *out);
};

struct C_001B1C30_Obj {
    char pad0[0x34];
    float f34;
    float f38;
    char pad3C[0x10];
    short s4C;
    float getF34() { return f34; }
    float getF38() { return f38; }
    void func_0005E840(char *s);
};

/* TextOverlay */
struct C_001B1C30 {
    char pad0[0x24];
    C_001B1C30_Obj *f24;
    char pad28[0x4];
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    char pad44[0x8];
    int f4C;
    int f50;
    int f54;
    int f58;
    float f5C;
    float f60;
    int f64;
    char pad68[0x4];
    float f6C;
    float f70;
    int f74;
    float f78;
    int f7C;
    C_001B1C30_View *f80;
    int f84;
    int f88;
    int f8C;
    float f90;
    float f94;
    float f98;
    float f9C;
    float fA0;
    float fA4;
    float fA8;
    float fAC;
    float fB0;
    float fB4;
    float fB8;
    float fBC;
    int fC0;
    float fC4;
    int fC8;
    float fCC;
    float fD0;
    int fD4;
    int fD8;
    int fDC;
    float fE0;
    char fE4[0x40];
    char f124[0x40];
    char pad164[0x4];
    float f168;
    float f16C;
    float f170;
    int f174;
    int f178;
    int f17C;
    int f180;
    int func_001B1C30(float dt);
};

extern float D_00275544;
extern float D_00277A00;
extern float D_002779FC;
extern char D_0028C860[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

static __forceinline void Round_001B1C30(volatile int * volatile out, const float &f) { *out = _mm_cvtss_si32(*(__m128 *)&f); }
extern "C" int func_001E8858();

void C_001B19C0::func_001B19C0(float a1, float a2, float a3)
{
    if (fC0 != 0) {
        return;
    }
    f60 = a3;
    f4C.x = a1;
    f4C.y = a2;
    f3C = f2C;
    f40 = f30;
    f5C = 0;
    if (a3 == 0.0f) {
        *(C_001B19C0_Vec *)&f2C = f4C;
    }
}

void C_001B19C0::func_001B1A30(float a1, float a2, float a3)
{
    if (fC0 != 0) {
        return;
    }
    f60 = a3;
    f5C = 0;
    *(int *)&f4C.x = (int)a1;
    *(int *)&f4C.y = (int)a2;
    f3C = f2C;
    f40 = f30;
    if (a3 == 0.0f) {
        *(C_001B19C0_Vec *)&f2C = f4C;
    }
}

void C_001B1AB0::func_001B1AB0(int a1, int a2)
{
    if (fC0 != 0) {
        return;
    }
    f94 = a2;
    f90 = 0;
    f88 = a1;
    if (a1 > 0xff) {
        f88 = 0xff;
        f84 = *(short *)(f24 + 0x4c);
        return;
    }
    if (a1 < 0) {
        f88 = 0;
    }
    f84 = *(short *)(f24 + 0x4c);
}

int C_001B1B20::func_001B1B20(void)
{
  int in_ECX = (int)this;
  
  return (int)*(short *)(*(int *)(in_ECX + 0x24) + 0x4c);
}

void C_001B1B30::func_001B1B30(float param_1, undefined4 param_2)
{
    if (fC0 == 0) {
        setTarget(param_1, param_2);
        if (param_1 < 0.0f) {
            f9C = 0;
        }
        f98 = f24->getF34();
    }
}

void C_001B1B80::func_001B1B80(undefined4 param_1, float param_2, float param_3,
                               undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  int in_ECX = (int)this;
  int iVar1;
  float fVar1;

  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0xb4) = param_6;
    *(undefined4 *)(in_ECX + 0xa8) = param_1;
    iVar1 = *(int *)(in_ECX + 0x24);
    *(undefined4 *)(in_ECX + 0xb0) = 0;
    if (*(float *)(iVar1 + 0x24) != param_2 || *(float *)(iVar1 + 0x28) != param_3) {
      *(float *)(iVar1 + 0x24) = param_2;
      *(float *)(iVar1 + 0x28) = param_3;
    }
  }
  fVar1 = *(float *)(*(int *)(in_ECX + 0x24) + 0x38);
  *(float *)(in_ECX + 0xac) = fVar1;
  return;
}

void C_001B1BF0::func_001B1BF0(float param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (*(float *)(iVar1 + 0x3c) != param_1) {
    *(float *)(iVar1 + 0x3c) = param_1;
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 4;
  }
  return;
}

void C_001B1C10::func_001B1C10(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (*(int *)(iVar1 + 0x44) != param_1) {
    *(int *)(iVar1 + 0x44) = param_1;
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 6;
  }
  return;
}

int C_001B1C30::func_001B1C30(float dt)
{
    int rect[4];
    char buf[0x100];
    int x;

    f174 = 0;
    f178 = 0;
    f17C = 0;
    f180 = 0;
    if (f80 != 0) {
        f80->func_0012B210(rect);
    } else {
        rect[0] = 0;
        rect[1] = 0;
        rect[2] = 0x280;
        rect[3] = 0x1c0;
    }
    float sx = D_00277A00 / (float)(rect[2] - rect[0]);
    float sy = D_002779FC / (float)(rect[3] - rect[1]);
    if (sx != fB8) {
        fB8 = sx;
    }
    if (sy != fBC) {
        fBC = sy;
    }
    if (f64 != 0) {
        if (f78 >= D_00275544) {
            f78 -= dt;
            f6C -= dt;
        } else if (f7C == 0) {
            f64 = 0;
            f7C = 0;
            f78 = -1.0f;
            fC0 = 0;
            goto timerDone;
        } else {
            f6C -= dt;
        }
        if (f6C <= D_00275544 && f70 > D_00275544) {
            f74 = (f74 == 0);
            f6C = f70;
        }
    } else {
        fC0 = 0;
    }
timerDone:
    x = f4C;
    if (x != f2C || f50 != f30) {
        f4C = (int)((float)x / fB8);
        f50 = (int)((float)f50 / fBC);
        if (f60 != D_00275544 && !(f5C >= f60)) {
            int dy = f50 - f40;
            float fy = (float)dy;
            int dx = f4C - f3C;
            float r = f5C / f60;
            AsmFloatToIntRound((float)dx * r, &f2C);
            AsmFloatToIntRound(r * fy, &f30);
            f2C += f3C;
            f30 = f30 + f40;
            f5C += dt;
        } else {
            *(C_001B19C0_Vec *)&f2C = *(C_001B19C0_Vec *)&f4C;
        }
    }
    if (f88 != f24->s4C) {
        int v;
        if (f90 >= f94) {
            v = f88;
            f178 = 1;
            f168 = (float)v;
        } else {
            f8C = (int)((float)(f88 - f84) * (f90 / f94)) + f84;
            v = f8C;
            f178 = 1;
            f168 = (float)v;
        }
        f90 += dt;
    }
    if (f24->getF34() != f9C) {
        float v = f9C;
        if (fA0 >= fA4) {
            f17C = 1;
            f16C = v;
        } else {
            float w = (v - f98) * (fA0 / fA4) + f98;
            f17C = 1;
            f16C = w;
        }
        fA0 += dt;
    }
    if (f24->getF38() != fA8) {
        if (fB0 >= fB4) {
            float v = fA8;
            f180 = 1;
            f170 = v;
        } else {
            float v = fA8;
            float w = (fB0 / fB4) * (v - fAC) + fAC;
            f180 = 1;
            f170 = w;
        }
        fB0 += dt;
    }
    if (fD4 != 0 && fD8 < fDC) {
        int step;
        AsmFloatToIntRound(dt * fE0, &step);
        fD8 += step;
        if (fD8 > fDC) {
            fD8 = fDC;
            fD4 = 0;
        }
        func_001ADCC0(buf, 0x100, D_0028C860, fE4, fD8, f124);
        f24->func_0005E840(buf);
    }
    if (fC4 >= D_00275544) {
        fC4 -= dt;
        return 1;
    }
    if (*(int *)&fC4 == (int)0xbf800000) {
        return 1;
    }
    fC4 = -1.0f;
    f88 = fC8;
    if (f88 > 0xff) {
        f88 = 0xff;
    } else if (f88 < 0) {
        f88 = 0;
    }
    f84 = f24->s4C;
    f90 = 0;
    f9C = fCC;
    if (f9C < D_00275544) {
        f9C = 0;
    }
    f98 = f24->getF34();
    fA0 = 0;
    fA8 = fD0;
    fAC = f24->getF38();
    fB0 = 0;
    return 1;
}

void C_001B2270::func_001B2270(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0x174) = 1;
    *(undefined4 *)(in_ECX + 0x164) = param_1;
  }
  return;
}

undefined4 *C_001B22A0::func_001B22A0(byte param_1)
{
  extern int D_0028C7EC;
  void func_001E891B(void *);
  undefined4 *in_ECX = (undefined4 *)this;
  C_001D6410 *p = (C_001D6410 *)in_ECX[9];

  *in_ECX = (undefined4)&D_0028C7EC;
  if (p != 0) {
    p->func_001D6410();
    func_001E891B(p);
  }
  ((C_00157660 *)in_ECX)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001B22E0* C_001B22E0::func_001B22E0(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unkC = 0;
    return this;
}

void C_001B22F0::func_001B22F0(void)
{
  C_001B22F0_Node *next;

  f8 = (C_001B22F0_Node *)f0;
  while (f8 != 0) {
    next = f8->next;
    f8->next = 0;
    f8->f9c = 0;
    f8 = next;
  }
  return;
}

void C_001B2330::func_001B2330(void) {
    unk8 = unk0;
}

void C_001B2340::func_001B2340(void) {
    unk8 = unk4;
}

undefined4 C_001B2350::func_001B2350(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x98);
  }
  return *(undefined4 *)(in_ECX + 8);
}

void C_001B2370::func_001B2370(C_001B2370_Node *node)
{
  if (node->prev != 0) {
    node->prev->next = node->next;
  }
  if (node->next != 0) {
    node->next->prev = node->prev;
  }
  if (head == node) {
    head = node->next;
  }
  if (tail == node) {
    tail = node->prev;
  }
  count--;
  return;
}

C_001B23D0 *C_001B23D0::func_001B23D0(void)
{
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f28 = 0;
    f30 = 0;
    f2c = 0;
    f34 = 0;
    vtbl = &D_0028C87C;
    return this;
}

void C_001B23D0::func_001B2400(void)
{
    vtbl = &D_0028C87C;
    if (f24 != 0) {
        f24->v2();
        f24 = 0;
    }
    if (f28 != 0) {
        func_001E8390(f28);
    }
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    ((C_00157660 *)this)->func_00157660();
}

void C_001B23D0::func_001B2450(void)
{
    C_00161580 *p = (C_00161580 *)func_001E8A44(0x1c);

    f24 = p ? (C_001B23D0_Obj *)p->func_00161580() : 0;
    ((C_001D3F50 *)this)->func_001D3F50();
}

void *C_001B23D0::func_001B2480(unsigned int size)
{
    if (f30 < size) {
        if (f28 != 0) {
            func_001E8390(f28);
            f28 = 0;
        }
        f28 = func_001E8AA5(size);
        if (f28 == 0) {
            return 0;
        }
        f30 = size;
    }
    return f28;
}

void *C_001B23D0::func_001B24D0(unsigned int size)
{
    if (f34 < size) {
        if (f2c != 0) {
            func_001E8390(f2c);
            f2c = 0;
        }
        f2c = func_001E8AA5(size);
        if (f2c == 0) {
            return 0;
        }
        f34 = size;
    }
    return f2c;
}

void *C_001B23D0::func_001B2520(unsigned int flags)
{
    vtbl = &D_0028C87C;
    if (f24 != 0) {
        f24->v2();
        f24 = 0;
    }
    if (f28 != 0) {
        func_001E8390(f28);
    }
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001B23D0::func_001B2580(int *a, int b)
{
    int r;

    if (func_00135C70(9, 0, a, 0x80) != 0) {
        r = f24->iter.func_001B2330();
        while (r != 0) {
            r = f24->iter.func_001B2350();
        }
    }
    func_00157BF0(a, b);
}

void C_001B23D0::func_001B25E0(void)
{
    int i = 0;

    if (i < f8) {
        do {
            C_001B23D0_Obj *p = f14[i].f4;
            if (p != 0) {
                p->v2();
                f14[i].f4 = 0;
            }
            int q = f14[i].f0;
            if (q != 0) {
                func_001E8390((void *)q);
                f14[i].f0 = 0;
            }
            f14[i].fC = 0;
            i++;
        } while (i < f8);
    }
    f8 = 0;
}

void C_001B23D0::func_001B2640(void)
{
    int func_001D6E20(...);
    int i;
    int h;

    for (i = 0; i < f8; i++) {
        if (f14[i].fC > 0 && f14[i].f4 == 0) {
            h = f14[i].f8;
            f14[i].f4 = (C_001B23D0_Obj *)func_001D6E20(f14[i].f0, 0x613, h);
        }
    }
}

void C_001B2690::func_001B2690(int index, int data)
{
    func_001AC750(index, data | f14[index].data);
}

void C_001B23D0::func_001B26C0(int idx)
{
    func_001AC790(idx);
    if (f14[idx].fC == 0) {
        if (f14[idx].f4 != 0) {
            f14[idx].f4->v2();
            f14[idx].f4 = 0;
        }
    }
}

void *C_001B2700::func_001B2700(unsigned int flags)
{
    extern int D_0028C90C;
    void func_001B25E0();
    void func_001E891B(void *);
    vtbl = (void *)&D_0028C90C;
    func_001B25E0();
    func_001AC830();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int func_001B2730(int format)
{
    switch (format) {
    case 0xc:
    case 0xf:
    case 0x1b:
    case 0x1e:
        return 0x20;
    case 1:
    case 9:
    case 0x10:
    case 0x18:
    case 0x1f:
    case 0x20:
        return 0x18;
    case 2:
    case 3:
    case 7:
    case 8:
    case 0xa:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
        return 0x10;
    case 4:
    case 6:
    case 0x13:
    case 0x15:
    case 0x27:
    case 0x28:
        return 8;
    case 0x25:
    case 0x26:
    case 0x29:
    case 0x2a:
        return 4;
    default:
        return 0;
    }
}

int func_001B27B0(int format)
{
    switch (format) {
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xa:
    case 0xb:
    case 0xc:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x29:
    case 0x2a:
        return 1;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x27:
    case 0x28:
        return 0;
    }
    return 0;
}

int func_001B2810(int x)
{
    switch (x) {
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x20:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x28:
    case 0x2a:
        return 1;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 0x1f:
    case 0x21:
    case 0x23:
    case 0x25:
    case 0x27:
    case 0x29:
        return 0;
    default:
        return 0;
    }
}

int func_001B2870(int x)
{
    switch (x) {
    case 0xc:
    case 0xf:
    case 0x1b:
    case 0x1e:
    case 0x23:
    case 0x24:
        return 0x22b8;
    case 1:
    case 9:
    case 0x10:
    case 0x18:
    case 0x1f:
    case 0x20:
        return 0x378;
    case 2:
    case 7:
    case 0x11:
    case 0x16:
        return 0x22b;
    case 3:
    case 8:
    case 0x12:
    case 0x17:
        return 0x235;
    case 10:
    case 0xd:
    case 0x19:
    case 0x1c:
    case 0x21:
    case 0x22:
        return 0x613;
    case 0xb:
    case 0xe:
    case 0x1a:
    case 0x1d:
        return 0x115c;
    case 4:
    case 6:
    case 0x13:
    case 0x15:
    case 0x27:
    case 0x28:
        return 8;
    case 0x25:
    case 0x26:
    case 0x29:
    case 0x2a:
        return 0x20;
    default:
        return 0;
    }
}

