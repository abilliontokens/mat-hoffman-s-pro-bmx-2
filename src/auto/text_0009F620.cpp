/* 12 functions from 0x0009F620 to 0x000A0260, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
static __forceinline float Max(float a, float b) {
    return _mm_max_ss(_mm_set_ss(a), _mm_set_ss(b)).m128_f32[0];
}
static __forceinline float Min(float a, float b) {
    return _mm_min_ss(_mm_set_ss(a), _mm_set_ss(b)).m128_f32[0];
}
struct C_0009FD60 {
    char pad0[0x3c];
    float unk3C;
    char pad40[0xc];
    float unk4C;
    char pad50[0x3c];
    int unk8C;
    float unk90;
    void func_0009FD60(int a0, float a1, float a2, float a3);
};
extern const float D_00277D04;

extern int D_0027AD64;
void func_001E891B(void *p);
inline void operator delete(void *p) { func_001E891B(p); }

/* base class: CameraBehavior */
struct C_0012B540 {
    int unk0;
    void func_0012B540(void);
};

struct S_0009F9F0_Part {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

/* BmxPhotoCamera */
struct C_0009F9F0 : C_0012B540 {
    char pad4[0x8];
    S_0009F9F0_Part *unkC;
    S_0009F9F0_Part *unk10;
    S_0009F9F0_Part *unk14;
    char pad18[0x8C];
    S_0009F9F0_Part *unkA4;
    S_0009F9F0_Part *unkA8;
    S_0009F9F0_Part *unkAC;
    S_0009F9F0_Part *unkB0;
    char padB4[0x28];
    char *unkDC;
    char *unkE0;
    void func_0009F9F0(void);
};

struct C_0009FE40 {
    void func_0009FE40(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4);
};

struct C_000A0090 {
    char pad0[0x38];
    int unk38;
    void func_000A0090(int a0, int a1);
};

struct C_0009FE70 {
    char pad0[0x40];
    int unk40;
    void func_0009FE70(int a0);
};

struct C_0009FAC0 {
    char pad0[0x4];
    int unk4;
    void func_0009FAC0(int a0);
};

struct C_0009FAD0 {
    char pad0[8];
    int unk8;
    int unkC;
    char pad10[0x40];
    float unk50;
    int unk54;
    void func_0009FAD0(int a0, int a1, float a2);
};

struct V4_000A00A0 {
    float x, y, z, w;
    V4_000A00A0() { z = 0; y = 0; x = 0; w = 1.0f; }
};
extern V4_000A00A0 D_002A25E0;
extern char D_0009F700;
void func_0009F620(int *, int *);
extern int D_002BA160, D_002B9118, D_002B9108, D_002B9114, D_002B9110;
struct V4_0009F620 { int x, y, z, w; };
struct Obj_000A00A0 {
    char pad0[0x60];
    void *unk60;
    char pad64[0x38];
    void *unk9C;
    char padA0[7];
    unsigned char unkA7;
    Obj_000A00A0 *func_001A4A50(int a0);
    Obj_000A00A0 *func_0014AB30(int a0);
    void func_00129920(int a0);
    void func_001334E0(int a0);
    void func_001A57E0(V4_000A00A0 a0, int a1, int a2);
    void func_0014C1C0(int a0, int a1, int a2);
    void func_0014AC30(V4_000A00A0 *a0, int a1);
    void func_00133ED0(void);
    void func_001332A0(void);
    void func_00133140(int a0, int a1);
};
void *func_001E8A44(unsigned int n);
struct C_000A00A0 {
    char pad0[0x10];
    Obj_000A00A0 *unk10;
    Obj_000A00A0 *unk14;
    char pad18[0x9C];
    int unkB4;
    void func_000A00A0(V4_000A00A0 a0, int a1);
};

void C_0009F9F0::func_0009F9F0(void)
{
    unk0 = (int)&D_0027AD64;
    if (unkDC != 0) {
        delete unkDC;
        unkDC = 0;
    }
    if (unkE0 != 0) {
        delete unkE0;
        unkE0 = 0;
    }
    if (unk10 != 0) {
        unk10->v2();
        unk10 = 0;
    }
    if (unk14 != 0) {
        unk14->v2();
        unk14 = 0;
    }
    if (unkA4 != 0) {
        unkA4->v2();
        unkA4 = 0;
    }
    if (unkA8 != 0) {
        unkA8->v2();
        unkA8 = 0;
    }
    if (unkAC != 0) {
        unkAC->v2();
        unkAC = 0;
    }
    if (unkB0 != 0) {
        unkB0->v2();
        unkB0 = 0;
    }
    if (unkC != 0) {
        unkC->v2();
        unkC = 0;
    }
    func_0012B540();
}

void C_0009FAC0::func_0009FAC0(int a0) {
    unk4 = a0;
}

void C_0009FAD0::func_0009FAD0(int a0, int a1, float a2)
{
    unk8 = a0;
    unkC = 0;
    unk50 = a2 * 1.46666f;
    unk54 = a1;
}

void C_0009FE40::func_0009FE40(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x8c);
  *param_2 = *(undefined4 *)(in_ECX + 0x90);
  *param_3 = *(undefined4 *)(in_ECX + 0x4c);
  *param_4 = *(undefined4 *)(in_ECX + 0x3c);
  return;
}

void C_0009FE70::func_0009FE70(int a0) {
    unk40 = a0;
}

void C_000A0090::func_000A0090(int a0, int a1) {
    unk38 = 1;
}

