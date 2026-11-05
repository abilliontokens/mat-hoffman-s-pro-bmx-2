/* 17 functions from 0x00196C00 to 0x00197B90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028B02C;
extern f32 D_00275544;

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

struct C_00138330 {
    void func_00138330(int a0);
};

struct C_00197680 {
    void *vtbl;
    C_00197680 *func_00197680(int a0);
};

struct C_00197260 {
    char pad0[0x74];
    unsigned count;
    char pad78[8];
    int *table;
    char pad84[0x34];
    char *buf;
    void func_00197260(int index, char *out);
};

struct C_001975A0 {
    char pad0[0x24];
    f32 f24;
    char pad28[0xC];
    f32 f34;
    f32 f38;
    char pad3C[4];
    f32 f40;
    char pad44[0x7C];
    u8 fC0;
    char padC1[3];
    u32 fC4;
    void func_001963D0();
    void func_00196560();
    void func_001975A0(f32 dt);
    void func_00196C00(f32 dt);
    void func_00157A00(f32 dt);
    int func_00197610(f32 dt);
};
struct C_00197290 {
    undefined4 func_00197290(byte param_1);
};

struct C_00197590 {
    void func_00197590(void);
};

struct C_00197250 {
    char pad0[0x2C];
    float unk2C;
    float func_00197250(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00275678[];
extern char D_002A5C90[];

struct S_00197700_Vec4 {
    float x, y, z, w;
    S_00197700_Vec4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct C_0012B3D0 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    void func_0012B3D0();
};

struct V_002EFDB8 {
    void *vtbl;
    C_0012B3D0 *f4;
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001367F0 {
    void func_001367F0(void *v, int a, int b);
};

/* SkyCube */
struct C_00197700 {
    void *vtbl;
    char pad4[0x24];
    C_001367F0 *f28;
    char pad2C[0x798];
    int f7C4;
    char pad7C8[0x14];
    float f7DC;
    void func_00137E50(int a0);
    void func_00137F90();
    int func_00138480(char *name);
    void func_00197700(int a0);
    void func_00197780();
    C_00197700 *func_001976A0(char *name, float f);
};

struct C_00197AA0_Mat {
    void func_000264C0(void *m);
};

struct C_00197AA0 {
    char pad0[0xB0];
    char fB0[0x40];
    char fF0[0x40];
    char pad130[0x40];
    C_00197AA0 *f170;
    C_00197AA0 *f174;
    C_00197AA0 *f178;
    char pad17C[4];
    u8 f180;
    void func_00197AA0();
    void func_00197B10();
};

struct C_00197B40 {
    char pad0[0xB4];
    float fB4;
    float fB8;
    char padBC[8];
    float fC4;
    float fC8;
    char padCC[8];
    float fD4;
    float fD8;
    void func_00197B40(float *a, float *b);
};

void func_0011ACC0(void *out, void *a, void *b);


float C_00197250::func_00197250(void) {
    return unk2C;
}

void C_00197260::func_00197260(int index, char *out)
{
    if (index < 0 || index >= count || table[index] != 2)
        return;
    *out = buf[index];
}

undefined4 C_00197290::func_00197290(byte param_1)
{
  int func_00195E70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00195E70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00197590::func_00197590(void)
{
  int func_00196290(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) & 0x51;
  func_00196290();
  return;
}

void C_001975A0::func_001975A0(f32 dt)
{
    f24 = f24 + dt;
    if (f34 == D_00275544) {
        func_001963D0();
        f38 = f40;
    } else if (f38 <= D_00275544 || fC4 != 0) {
        func_00196560();
        f38 = f40;
    }
    f34 = f34 - dt;
    f38 = f38 - dt;
}

int C_001975A0::func_00197610(f32 dt)
{
    if (D_002A8490->f124 != 0)
        return 1;
    fC0 = fC0 | 0x10;
    if (fC0 & 2)
        func_001975A0(dt);
    if (fC0 & 4)
        func_00196C00(dt);
    fC4 = 0;
    func_00157A00(dt);
    return 1;
}

C_00197680 *C_00197680::func_00197680(int a0)
{
    ((C_00138330 *)this)->func_00138330(a0);
    vtbl = &D_0028B02C;
    return this;
}

C_00197700 *C_00197700::func_001976A0(char *name, float f)
{
    char buf[0x104];

    func_001ADCC0(buf, 0x104, D_00275678, D_002A5C90, name);
    if (func_00138480(buf)) {
        f7DC = f;
        return this;
    }
    return 0;
}

void C_00197700::func_00197700(int a0)
{
    S_00197700_Vec4 v;

    v.x = D_002EFDB8->f4->f170;
    v.y = f7DC + D_002EFDB8->f4->f174;
    v.z = D_002EFDB8->f4->f178;
    f28->func_001367F0(&v, 0, 0);
    func_00137E50(a0);
}

void C_00197700::func_00197780()
{
    if (f7C4 != 0) {
        D_002EFDB8->f4->func_0012B3D0();
    }
    func_00137F90();
}

void C_00197AA0::func_00197AA0()
{
    if (!(f180 & 1)) {
        if (f170 != 0) {
            f170->func_00197AA0();
            func_0011ACC0(fF0, fB0, f170->fF0);
            f180 |= 1;
        } else {
            ((C_00197AA0_Mat *)fF0)->func_000264C0(fB0);
            f180 |= 1;
        }
    }
}

