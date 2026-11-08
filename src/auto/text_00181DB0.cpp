/* 21 functions from 0x00181DB0 to 0x00182CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
extern char D_002869B8[];
struct S_0027C494 {
    char c[6];
};
extern S_0027C494 D_0027C494;
struct S_00182980 {
    float v[4];
};
char *func_001E95A4(char *s, const char *delim);
int func_001E91F4(const char *s);
struct C_00182810 {
    void func_00182810(void);
};

extern int D_0028933C;
void func_001E891B(void *p);
struct RenderTarget {
    void *vtbl;
    void *func_00182870(unsigned int flags);
};

struct C_001827B0 {
    void *vtbl;
    int f4;
    char pad8[8];
    int f10;
    int f14;
    int f18;
    char pad1C[8];
    int f24;
    char pad28[8];
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    C_001827B0(void);
};

struct C_001824E0_Vec {
    int x;
    int y;
    int z;
    int w;
};

struct C_001824E0 {
    char pad0[0x1C0];
    C_001824E0_Vec f1C0;
    C_001824E0_Vec func_001824E0(int x, int y, int z);
};

struct C_00182750_Global {
    char pad0[0x284];
    int f284;
};

extern C_00182750_Global *D_002A8490;

struct V4_00181E10 {
    float x, y, z, w;
    V4_00181E10() {}
    V4_00181E10(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    V4_00181E10 operator-(const V4_00181E10 &o) const { V4_00181E10 r; r.x = x - o.x; r.w = 1.0f; r.y = y - o.y; r.z = z - o.z; return r; }
};

struct S_00181E10_Cam {
    char pad0[0x170];
    V4_00181E10 f170;
    char pad180[0x58];
    float f1d8;
};

struct S_00181E10_Global {
    char pad0[4];
    S_00181E10_Cam *f4;
};

struct S_00181E10_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2(void *a, float b, float c, int d);
    char pad4[0x10];
};

struct S_00181E10_Ent {
    int count;
    float f4;
    S_00181E10_Obj *f8;
};

struct S_00181E10_Tbl {
    char pad0[8];
    int f8;
    float fC;
    S_00181E10_Ent *f10;
};

struct S_00181E10_Blk {
    char d[0x100];
};

extern S_00181E10_Global *D_002EFDB8;
extern float D_00275460;
extern float D_002A8F40;
extern float D_002A8F3C;

extern "C" float __cdecl sqrtf(float);
static __forceinline float Sqrt_00181E10(const float &x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline void Copy4_00181E10(int *o, const int *i) { o[3]=i[3]; o[0]=i[0]; o[1]=i[1]; o[2]=i[2]; }
static __forceinline float Max_00181E10(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct C_00182750 {
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
    virtual unsigned char v39();
    virtual void v40();
    char pad4[0x23];
    unsigned char f27;
    char pad28[0x94];
    float fBC;
    char padC0[0xC];
    float fCC;
    char padD0[0xC];
    float fDC;
    char padE0[0x50];
    V4_00181E10 f130;
    char pad140[0x10];
    V4_00181E10 f150;
    char pad160[0x21];
    unsigned char f181_0 : 1;
    char pad182[2];
    float f184;
    float f188;
    char pad18C[4];
    int f190;
    char pad194[0xC];
    unsigned char f1A0;
    char pad1A1[3];
    S_00181E10_Tbl *f1A4;
    S_00181E10_Blk *f1A8;
    char pad1AC[4];
    float f1B0;
    char pad1B4[4];
    int *f1B8;
    int func_00182750(void);
    void func_00181E10(void);
};

struct C_00182110_Elem {
    void func_00198440(V4_00181E10 *a, float *b, int c);
    void func_001985D0(int *a, V4_00181E10 *b, V4_00181E10 *c, void *d, int e);
};
V4_00181E10 * __stdcall func_00197F70(V4_00181E10 *out, V4_00181E10 *in);
V4_00181E10 * __stdcall func_00198120(V4_00181E10 *out, V4_00181E10 *in);
void func_00197AA0(void);
extern float D_002755E8;
extern float D_00275544;
struct C_00182110 {
    char pad0[0xF0];
    char fF0[0x40];
    V4_00181E10 f130;
    V4_00181E10 f140;
    V4_00181E10 f150;
    V4_00181E10 f160;
    char pad170[0x10];
    unsigned char f180;
    char pad181[3];
    float f184;
    float f188;
    char pad18C[4];
    int f190;
    char pad194[0x18];
    C_00182110_Elem **f1AC;
    void func_00182110(void);
};

struct C_00182830_Target {
    char pad0[0x204];
    int f204;
    int f208;
    void func_0012B390(int a, int b, int c);
};

struct C_00182830 {
    int pad0;
    C_00182830_Target *f4;
    int f8;
    int fC;
    void func_00182830(C_00182830_Target *p);
};

struct C_00182550 {
    undefined4 func_00182550(byte param_1);
};

struct C_00182530 {
    longdouble func_00182530(undefined4 param_1);
};

struct C_001827E0 {
    char pad0[0x4C];
    int unk4C;
    int unk50;
    void func_001827E0(int a0, int a1);
};

struct C_00182800 {
    int unk0;
    void func_00182800(void);
};

struct C_00182730 {
    undefined4 func_00182730(byte param_1);
};

void *func_001E8A44(int size);
void *func_001E8AA5(int size);

struct C_00182570_Loader {
    void func_0013C8A0(int key, void *out, int size, int flag);
};

extern C_00182570_Loader *D_002BEAAC;
extern int D_002AA46C;

struct C_00182570_Elem {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    C_00182570_Elem *func_00144640();
    void func_00144660();
    C_00182570_Elem() { func_00144640(); }
    ~C_00182570_Elem() { func_00144660(); }
    void func_00144960(int a0, int a1, int a2, int a3);
};

struct C_00182570_Entry {
    int count;
    int f4;
    C_00182570_Elem *elems;
};

struct C_00182570 {
    void *vtbl;
    int f4;
    int count;
    int fC;
    C_00182570_Entry *entries;
    void func_00182570(int key, int a1);
};

struct C_00182C60Scene {
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
    virtual int v27(void *a);
    char pad4[0x20];
    int f24;
    C_00182C60Scene *func_001B5830(int a);
};

struct C_00182A80Path {
    void func_001B6590(void *p);
};

struct C_00182A80Node {
    char pad0[4];
    int f4;
    char pad8[0x17c];
    char f184[0x104];
    C_00182A80Path *f288;
};

struct C_00182A80Group {
    char pad0[8];
    int f8;
    char padC[0x100];
    C_00182A80Node **f10c;
};

struct C_00182A80List {
    char pad0[0x24];
    int f24;
    C_00182A80Group **f28;
};

struct C_00182C60 {
    char pad0[0x28];
    void *f28;
    char pad2c[0x380];
    C_00182C60Scene *f3ac;
    char pad3b0[4];
    C_00182A80List *f3b4;
    void func_00182C60(void);
    void func_00182A80(void);
};

struct C_00182B00 {
    char pad0[0x28];
    int f28;
    int f2C;
    unsigned char f30;
    char pad31[0x103];
    unsigned char f134;
    char pad135[0x103];
    unsigned char f238;
    char pad239[0x103];
    int f33C, f340, f344, f348, f34C, f350;
    char pad354[0x2c];
    unsigned char f380;
    char pad381[3];
    int f384, f388, f38C, f390, f394, f398, f39C, f3A0, f3A4, f3A8, f3AC;
    char pad3B0[4];
    int f3B4;
    char pad3B8[4];
    int f3BC, f3C0, f3C4;
    char pad3C8[4];
    int f3CC, f3D0, f3D4, f3D8, f3DC, f3E0, f3E4, f3E8, f3EC, f3F0;
    char pad3F4[0x90];
    int f484, f488, f48C, f490;
    char pad494[4];
    int f498, f49C, f4A0, f4A4, f4A8, f4AC, f4B0, f4B4, f4B8, f4BC;
    char pad4C0[4];
    int f4C4, f4C8, f4CC, f4D0, f4D4;
    unsigned char f4D8;
    void func_00182B00(void);
};

struct C_00181DB0_Mgr {
    void func_001B0520(void *a0);
    void func_001B05A0(int a0, int a1, void *a2);
};

struct C_00181DB0_Entry {
    int f0;
    C_00181DB0_Mgr *f4;
    char pad8[8];
};

struct C_00181DB0_Global {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a0, int a1);
    char pad4[0x10];
    C_00181DB0_Entry *f14;
    char pad18[8];
    char f20;
    int func_00161850(int a0);
    void func_001B26C0(int a0);
};

extern C_00181DB0_Global *D_002A829C;

struct C_00181DB0 {
    char pad0[0x1A1];
    char f1A1;
    char pad1A2[0x12];
    int f1B4;
    int *f1B8;
    int f1BC;
    void func_00181DB0(int a0);
    int func_00182020(int a0, int a1);
    void func_001820B0(int a0, int a1, int a2);
};


void C_00181DB0::func_00181DB0(int a0)
{
  int i = 0;

  if (f1B4 > 0) {
    do {
      int v = f1B8[i];
      if (a0 == -1 || a0 == v) {
        D_002A829C->f14[v].f4->func_001B0520(this);
      }
      i++;
    } while (i < f1B4);
  }
}

void C_00182750::func_00181E10(void)
{
 float threshold, sq, len, diff, mn, inv, t1, val2;
 int lvl, i, n;
 V4_00181E10 temp, d;
 const V4_00181E10 *p;
 S_00181E10_Tbl *tbl;
 S_00181E10_Ent *ent,*e;
 *(int *)&threshold = f190 == 1 ? *(int *)&f184 : *(int *)&f188;
 p = f190 == 1 ? &f130 : &f150;
 temp = *p - D_002EFDB8->f4->f170;
 Copy4_00181E10((int *)&d, (const int *)&temp);
 sq=(d.z+fDC)*(d.z+fDC)+(d.y+fCC)*(d.y+fCC)+(d.x+fBC)*(d.x+fBC);
 len=AsmSqrtF(sq);
 f1B0=len;
 mn=0.1f;
 diff=f1B0-threshold;
 inv=D_00275460/AsmMaxF(mn,diff);
 t1=inv*D_002EFDB8->f4->f1d8;
 tbl=f1A4;
 lvl=0; i=0; n=tbl->f8-1;
 val2=inv*D_002EFDB8->f4->f1d8*D_002A8F40*threshold;
 val2=val2+val2;
 if(n>0) { e=tbl->f10; do {
 if(e->f4*tbl->fC*D_002A8F3C*t1<D_00275460) lvl=i+1;
 i++; e++;
 }while(i<n); }
 f1A0=lvl;
 ent=&f1A4->f10[f1A0];
 i=0; if(ent->count>0) do { ent->f8[i].v2(&f1A8[i],val2,t1,f1B8[i]); ++i; } while(i<ent->count);
}

int C_00181DB0::func_00182020(int a0, int a1)
{
  int i;
  int result;

  f1A1 = D_002A829C->f20 - 1;
  f1BC = 0;
  result = a0;
  if (f1B4 > 0) {
    for (i = 0; i < f1B4; i++) {
      if (f1B8[i] == a0) {
        int r = D_002A829C->func_00161850(a0);
        D_002A829C->v6(a1, r);
        D_002A829C->func_001B26C0(f1B8[i]);
        f1B8[i] = a1;
        result = a1;
      }
    }
  }
  return result;
}

void C_00181DB0::func_001820B0(int a0, int a1, int a2)
{
  int i = 0;

  if (f1B4 > 0) {
    do {
      int v = f1B8[i];
      if (a2 == -1 || a2 == v) {
        D_002A829C->f14[v].f4->func_001B05A0(a0, a1, this);
      }
      i++;
    } while (i < f1B4);
  }
}

extern "C" float __cdecl sqrtf(float);
void C_00182110::func_00182110(void)
{
    V4_00181E10 tmp;
    int i;

    if (this->f180 & 0x10) {
        func_00197AA0();
        V4_00181E10 pos(0, 0, 0);
        float s = 0;

        if (this->f180 & 4) {
            pos = *func_00197F70(&tmp, &this->f130);
            s = this->f184;
        }
        for (i = 0; i < this->f190; i++) {
            C_00182110_Elem *e = this->f1AC[i];
            e->func_00198440(&pos, &s, 0);
        }
        this->f150 = *func_00198120(&tmp, &pos);
        this->f160.x = s;
        this->f160.y = s;
        this->f160.z = s;
        this->f188 = s;
    } else {
        func_00197AA0();
        V4_00181E10 mx(0, 0, 0);
        V4_00181E10 mn(0, 0, 0);
        int flag = 0;

        if (this->f180 & 4) {
            flag = 1;
            mn = this->f130 - this->f140;
            mx = V4_00181E10(this->f140.x + this->f130.x, this->f140.y + this->f130.y, this->f140.z + this->f130.z);
        }
        for (i = 0; i < this->f190; i++) {
            C_00182110_Elem *e = this->f1AC[i];
            e->func_001985D0(&flag, &mn, &mx, this->fF0, 0);
        }
        {
            float dx = mx.x + mn.x, dy = mx.y + mn.y, dz = mx.z + mn.z;
            this->f150 = V4_00181E10(dx * D_002755E8, dy * D_002755E8, dz * D_002755E8);
        }
        {
            float ex = mx.x - mn.x, ey = mx.y - mn.y, ez = mx.z - mn.z;
            this->f160 = V4_00181E10(ex * D_002755E8, ey * D_002755E8, ez * D_002755E8);
        }
        this->f188 = AsmSqrtF(this->f160.x * this->f160.x + this->f160.y * this->f160.y + this->f160.z * this->f160.z);
    }
    if (this->f188 > D_00275544)
        this->f180 |= 0x40;
}

C_001824E0_Vec C_001824E0::func_001824E0(int x, int y, int z)
{
    C_001824E0_Vec old = f1C0;
    f1C0.x = x;
    f1C0.y = y;
    f1C0.z = z;
    return old;
}

longdouble C_00182530::func_00182530(undefined4 param_1)
{
  int in_ECX = (int)this;
  float fVar1;
  
  fVar1 = *(float *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1cc) = param_1;
  return (longdouble)fVar1;
}

undefined4 C_00182550::func_00182550(byte param_1)
{
  int func_00181440(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00181440();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00182570::func_00182570(int key, int a1)
{
    int i;
    int j;
    int n;

    D_002BEAAC->func_0013C8A0(key, &count, 4, 1);
    entries = (C_00182570_Entry *)func_001E8AA5(count * sizeof(C_00182570_Entry));
    memset(entries, 0, count * sizeof(C_00182570_Entry));
    for (i = 0; i < count; i++) {
        D_002BEAAC->func_0013C8A0(key, &entries[i].f4, 4, 1);
        D_002BEAAC->func_0013C8A0(key, &n, 4, 1);
        entries[i].count = n;
        entries[i].elems = new C_00182570_Elem[n];
        for (j = 0; j < n; j++) {
            entries[i].elems[j].func_00144960(key, a1, j, D_002AA46C);
        }
    }
}

undefined4 C_00182730::func_00182730(byte param_1)
{
  int func_00181540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_00181540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_00182750::func_00182750(void)
{
    if (f27 & 4) {
        f181_0 = 0;
        return 1;
    }
    f181_0 = v39();
    if (f181_0) {
        func_00181E10();
    }
    D_002A8490->f284++;
    return 1;
}

C_001827B0::C_001827B0(void)
{
    vtbl = &D_0028933C;
    f4 = 0;
    f30 = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
    f24 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
}

void C_001827E0::func_001827E0(int a0, int a1) {
    unk50 = a1;
    unk4C = a0;
}

void C_00182800::func_00182800(void) {
    extern int D_0028933C;
    unk0 = (int)&D_0028933C;
}

void C_00182810::func_00182810(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x14) + 1;
  *(int *)(in_ECX + 0x14) = iVar1;
  if (iVar1 == *(int *)(in_ECX + 0x10)) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  return;
}

void C_00182830::func_00182830(C_00182830_Target *p)
{
    f4 = p;
    if (p != 0) {
        if (f8 != p->f204 || fC != p->f208) {
            p->func_0012B390(0x3f9f49f5, 0x280, 0x1c0);
        }
    }
}

void *RenderTarget::func_00182870(unsigned int flags)
{
    vtbl = &D_0028933C;
    if (flags & 1) func_001E891B(this);
    return this;
}

#pragma intrinsic(strcmp)
extern "C" int __cdecl strcmp(const char *, const char *);
S_00182980 func_00182980(char *str) {
    S_00182980 c;
    char *t = func_001E95A4(str, D_002869B8);
    if (t && strcmp(str, "undef") != 0) {
        c.v[0] = (float)func_001E91F4(t);
        t = func_001E95A4(0, D_002869B8);
        if (!t) goto default1;
        {
            c.v[1] = (float)func_001E91F4(t);
            t = func_001E95A4(0, D_002869B8);
            if (!t) goto default2;
            {
                c.v[2] = (float)func_001E91F4(t);
                t = func_001E95A4(0, D_002869B8);
                if (!t) goto default3;
                {
                    c.v[3] = (float)func_001E91F4(t);
                    goto done;
                }
            }
        }
    }
    c.v[0] = 255.0f;
default1:
    c.v[1] = 255.0f;
default2:
    c.v[2] = 255.0f;
default3:
    c.v[3] = 255.0f;
done:
    return c;
}

void C_00182C60::func_00182A80(void)
{
    int i;
    int j;

    if (f3b4 != 0) {
        for (i = 0; i < f3b4->f24; i++) {
            for (j = 0; j < f3b4->f28[i]->f8; j++) {
                C_00182A80Node *node = f3b4->f28[i]->f10c[j];
                if (node->f4 == 6) {
                    node->f288->func_001B6590(node->f184);
                }
            }
        }
    }
}

void C_00182B00::func_00182B00(void)
{
    f28 = 0;
    f2C = 0;
    f30 = 0;
    f134 = 0;
    f238 = 0;
    f33C = 0;
    f340 = 0;
    f344 = 0;
    f348 = 0;
    f34C = 0;
    f350 = 0;
    f380 &= 0xfe;
    f384 = 0;
    f388 = 0;
    f38C = 0;
    f390 = 0;
    f394 = 0;
    f3A8 = 0;
    f3AC = 0;
    f3C0 = 0;
    f3CC = 0;
    f3D0 = 0;
    f3BC = 0;
    f3DC = 0;
    f3E0 = 0;
    f3E4 = 0;
    f3E8 = 0;
    f3EC = 0;
    f3F0 = 0;
    f488 = 0;
    f484 = 0;
    f3B4 = 0;
    f3D4 = 0;
    f3D8 = 0;
    f48C = 0;
    f490 = 0;
    f498 = 0;
    f49C = 0;
    f4A0 = 0;
    f4A4 = 0;
    f4A8 = 0;
    f4AC = 0;
    f4B0 = 0;
    f4B4 = 0;
    f4B8 = 0;
    f4BC = 0;
    f4C4 = 0;
    f4C8 = 0;
    f4CC = 0;
    f4D0 = 0;
    f4D4 = 0;
    f4D8 &= 0xfe;
    f398 = 0;
    f39C = 0;
    f3A0 = 0;
    f3A4 = 0;
    f3C4 = 0;
}

void C_00182C60::func_00182C60(void)
{
    if (f3ac == 0) {
        void *mem = func_001E8A44(0x2c);
        f3ac = mem != 0 ? ((C_00182C60Scene *)mem)->func_001B5830(1) : 0;
    }
    if (f3ac->v27(f28) != 0) {
        return;
    }
    if (f3ac->f24 != 0) {
        return;
    }
    f3ac->v2();
    f3ac = 0;
}
