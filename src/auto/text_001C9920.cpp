/* 10 functions from 0x001C9920 to 0x001CA480, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct S_002A8490 {
    char pad0[0x124];
    int unk124;
};
extern S_002A8490 *D_002A8490;
extern int D_002AB7F0;
extern float D_002F0BCC;
extern float D_00275544;
extern float D_00275460;

struct V4_001CA360 {
    float x, y, z, w;
};

static __forceinline void v3_scale(V4_001CA360 *out, const V4_001CA360 &in, float s)
{
    out->x = in.x * s;
    out->y = in.y * s;
    out->z = in.z * s;
}


extern int D_0028E864;
extern char D_002A5A80[];
extern char D_00275678[];
extern char D_002A5870[];
extern char D_002A5978[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int func_001B2910(int a0);

/* Water */
struct C_001C99A0 {
    int func_00157A00(int a0);
    int func_001C99A0(int a0);
};

struct C_001C9920_28 {
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
    virtual int v16(int a0, int *a1, int a2);
    virtual void v17(int a0);
    char pad4[0xA0];
    int unkA4;
};

struct S_001C9920_arg {
    char pad0[0x28];
    C_001C9920_28 *unk28;
};

struct C_001C9920 {
    void *vtbl;
    char pad4[0x23];
    char unk27;
    char pad28[4];
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    char pad40[4];
    int unk44;
    char pad48[0xC];
    int unk54;
    int unk58[2];
    int unk60[2];
    int unk68;
    int unk6C[6];
    int unk84[6];
    char pad9C[0x1C];
    int unkB8;
    char padBC[8];
    float unkC4;
    char padC8[4];
    S_001C9920_arg *unkCC;
    int unkD0;
    unsigned int unkD4[4];
    unsigned int unkE4[4];
    unsigned int unkF4[4];
    char pad104[4];
    int unk108;
    char pad10C[0x108];
    float unk214;
    float unk218;
    int unk21C;
    int unk220;
    void func_001C9920(S_001C9920_arg *arg);
    void func_001C9920(int a);
    void func_00192370(int a0);
    C_001C9920 *func_001C99E0(int a0);
    C_001C9920 *func_001C9B10(int a, int b, int c, int d, int e, int f, int g);
};

struct C_001C9B10 {
    void *vtbl;
    char pad4[0x34];
    int unk38;
    char pad3C[0x1D8];
    int unk214;
    int unk218;
    C_001C9B10 *func_001C9B10(int a, int b, int c, int d, int e, int f, int g);
};

struct C_001C9AF0 {
    undefined4 func_001C9AF0(byte param_1);
};

struct C_001CA1D0 {
    char pad0[0x24];
    int unk24;
    char pad28[0x28];
    int unk50;
    C_001CA1D0* func_001CA1D0(int a0, int a1, int a2, int a3, int a4, int a5);
};

#include <math.h>
struct S_002F08BC { char pad[0x9c]; float unk9C; };
extern S_002F08BC *D_002F08BC;
extern double D_002766B8;
struct C_001CA1F0_elem { void func_00194520(float a0, int *a1); };
struct C_001CA1F0 {
    char pad0[0x38];
    float unk38;
    float unk3C;
    float unk40;
    C_001CA1F0_elem **unk44;
    int func_00157A00(float a0);
    int func_001CA1F0(float a0);
};

struct C_001CA1C0 {
    int unk0;
    void func_001CA1C0(void);
};

struct V16_001C9B10 { int a, b, c, d; };
struct C_001C9B10_Tex {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16(int a0, int *a1, int a2);
    virtual void v17(int a0);
    C_001C9B10_Tex *func_001D6AD0(int a0);
};
struct C_001C9B10_Mgr {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual void v6(int a0, int a1);
    virtual int v7(char *name, C_001C9B10_Tex *t);
    void func_001B2640(void);
};
struct C_001C9B10_Cam {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual int v6(float *a0, float *a1, int a2);
    virtual void v7(char *a0, int a1, float *a2, float *a3);
    char pad4[0x3c];
    float unk40;
    float unk44;
};
struct C_001C9B10_Snd { void func_00161680(void); };
struct C_001C9B10_VT {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(char *entry, V16_001C9B10 v, int a);
    void func_001D3F50(void);
    int func_001C8960(int a0);
};
extern C_001C9B10_Mgr *D_002AA6C0;
extern C_001C9B10_Cam *D_002F07E8;
extern C_001C9B10_Snd *D_002A829C;
extern float D_002755E8;
extern float D_0028EBFC;
extern char D_0028EC00[];
extern char D_0028EBE8[];
extern char D_0028EBD0[];
extern char D_0028EBB8[];
extern char D_0028E910[];
extern char D_002A60B0[];
extern V16_001C9B10 D_002AB80C;
void *func_001E8A44(unsigned int size);
void *func_001E8AA5(unsigned int size);
void func_0014FF00(int a0, int a1, char *a2, int a3, int a4);


void C_001C9920::func_001C9920(S_001C9920_arg *arg)
{
    int size;
    int rate;
    int v;
    unkCC = arg;
    if (arg->unk28 == 0) {
        return;
    }
    unk44 = arg->unk28->v16(0, &size, 0x80);
    rate = func_001B2910(arg->unk28->unkA4);
    v = (size << 3) / rate;
    unk21C = rate;
    unkB8 = v;
    unkC4 = (float)v / D_002F0BCC;
    arg->unk28->v17(0);
}

int C_001C99A0::func_001C99A0(int a0)
{
    if (D_002A8490->unk124 == 0 && D_002AB7F0 == 0) {
        return func_00157A00(a0);
    }
    return 1;
}

void func_001C99D0(void) {
    int func_00157BF0(...);
    func_00157BF0();
}

C_001C9920 *C_001C9920::func_001C99E0(int a0)
{
    int i;
    unsigned int *p;

    func_00192370(a0);
    vtbl = (void *)&D_0028E864;
    p = unkD4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = unkE4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = unkF4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    unk27 |= 3;
    unk2C = 0;
    unk30 = 0;
    unk34 = 0;
    unk44 = 0;
    unk3C = 0;
    unkD0 = 0;
    unk220 = 0;
    unk108 = 0;
    unk38 = 0;
    unk54 = 0;
    for (i = 0; i < 2; i++) {
        unk58[i] = -1;
        unk60[i] = -1;
    }
    for (i = 0; i < 6; i++) {
        unk6C[i] = 0;
        unk84[i] = 0;
    }
    unk68 = 0;
    unk21C = 0;
    unk214 = 1.0f;
    unk218 = 1.0f;
    func_001ADCC0(D_002A5A80, 0x104, D_00275678, D_002A5870, D_002A5978);
    return this;
}

undefined4 C_001C9AF0::func_001C9AF0(byte param_1)
{
  int func_001C8740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001C8740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001CA1C0::func_001CA1C0(void) {
    extern int D_0028EC24;
    int func_00157660(...);
    unk0 = (int)&D_0028EC24;
    func_00157660();
}

C_001CA1D0* C_001CA1D0::func_001CA1D0(int a0, int a1, int a2, int a3, int a4, int a5) {
    unk24 = a0;
    unk50 = a2;
    return this;
}

int C_001CA1F0::func_001CA1F0(float a0)
{
    float f;
    int n[6];
    C_001CA1F0_elem *e;
    int i;
    if (D_002A8490->unk124 != 0) {
        return 1;
    }
    unk38 += a0;
    f = unk38 * D_002F08BC->unk9C;
    n[0] = (int)f;
    unk3C = (float)fmod(f, D_002766B8);
    unk40 = D_00275460 - unk3C;
    e = unk44[0];
    i = 0;
    while (e != 0) {
        i++;
        e->func_00194520(a0, n);
        e = unk44[i];
    }
    return func_00157A00(a0);
}

int func_001CA360(float *n, float *p, float *a, float *b, V4_001CA360 *out)
{
    V4_001CA360 d;
    V4_001CA360 s;
    float denom;
    float t;
    float e[3];

    d.x = b[0] - a[0];
    d.y = b[1] - a[1];
    d.z = b[2] - a[2];
    denom = d.x * n[0];
    denom += d.y * n[1];
    denom += d.z * n[2];
    if (denom != D_00275544) {
        e[0] = p[0] - a[0];
        e[1] = p[1] - a[1];
        e[2] = p[2] - a[2];
        t = e[0] * n[0];
        t += e[1] * n[1];
        t += e[2] * n[2];
        t = t / denom;
        if (t >= D_00275544 && t <= D_00275460) {
            v3_scale(&s, d, t);
            d.x = s.x + a[0];
            d.y = s.y + a[1];
            d.z = s.z + a[2];
            d.w = 1.0f;
            *out = d;
            return 1;
        }
    }
    return 0;
}

