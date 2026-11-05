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

static __forceinline float fabs_0009FE80(float v)
{
    volatile float t = v;
    volatile int bits = *(volatile int *)&t & 0x7fffffff;
    return *(volatile float *)&bits;
}

extern float D_00278C58;
extern float D_0027AD80;
extern float D_002756D0;
extern float D_002756B8;
extern float D_002756E8;
extern float D_0027AD7C;
extern float D_0027653C;
extern float D_0027AD78;
extern float D_0027AD74;
extern float D_002786B8;
extern float D_00276558;

struct C_0009FE80 {
    char pad0[0x3c];
    float unk3C;
    int unk40;
    char pad44[8];
    float unk4C;
    char pad50[0x3c];
    float unk8C;
    float unk90;
    __forceinline float Abs(float v)
    {
        volatile float t = v;
        int bits = *(volatile int *)&t & 0x7fffffff;
        return *(float *)&bits;
    }
    void func_0009FE80(int a0, int a1, int a2, int a3, int a4, int a5, float a6, float a7, float a8, float a9, float a10);
};

extern int D_0027AD64;
struct V4_0009F7F0 {
    float x, y, z, w;
    V4_0009F7F0() { z = 0; y = 0; x = 0; w = 1.0f; }
};
struct B_0012B510 {
    int vtbl;
    char pad4[4];
    B_0012B510();
};
struct C_0009F7F0 : B_0012B510 {
    int unk8, unkC, unk10, unk14;
    V4_0009F7F0 v18, v28;
    int unk38; float unk3C; int unk40, unk44, unk48; float unk4C;
    int unk50, unk54;
    V4_0009F7F0 v58, v68, v78;
    float unk88; int unk8C, unk90;
    V4_0009F7F0 v94;
    int unkA4, unkA8, unkAC, unkB0; float unkB4; int unkB8;
    V4_0009F7F0 vBC, vCC;
    void func_0012B510(void);
    C_0009F7F0 *func_0009F7F0(void);
};
extern int D_002A2600[4];
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

void C_0009FE80::func_0009FE80(int a0, int a1, int a2, int a3, int a4, int a5, float a6, float a7, float a8, float a9, float a10)
{
    if (unk40 == 0)
        return;
    if (Abs(a6) > D_00278C58) {
        unk8C = a6 * a10 * D_0027AD80 + unk8C;
        if (unk8C > D_002756D0)
            unk8C = unk8C - D_002756B8;
        else if (unk8C < D_002756E8)
            unk8C = unk8C + D_002756B8;
    }
    if (Abs(a7) > D_00278C58) {
        unk90 = a7 * a10 * D_0027AD80 + unk90;
        if (unk90 > D_002756D0)
            unk90 = unk90 - D_002756B8;
        else if (unk90 < D_002756E8)
            unk90 = unk90 + D_002756B8;
    }
    if (Abs(a9) > D_00278C58) {
        unk4C = unk4C - a9 * a10 * D_0027AD7C;
        if (unk4C > D_0027653C)
            unk4C = 15.0f;
        else if (unk4C < D_0027AD78)
            unk4C = 7.0f;
    }
    if (Abs(a8) > D_00278C58) {
        unk3C = a8 * a10 * D_0027AD74 + unk3C;
        if (unk3C > D_002786B8)
            unk3C = 110.0f;
        else if (unk3C < D_00276558)
            unk3C = 60.0f;
    }
}

void C_000A0090::func_000A0090(int a0, int a1) {
    unk38 = 1;
}

void C_000A00A0::func_000A00A0(V4_000A00A0 a0, int a1)
{
    if (unk10 == 0) {
        Obj_000A00A0 *p = (Obj_000A00A0 *)func_001E8A44(0x120);
        if (p != 0)
            p = p->func_001A4A50(1);
        else
            p = 0;
        unk10 = p;
        p->func_00129920(2);
        unk10->unk60 = this;
        unk10->unk9C = (void *)func_0009F620;
        unk10->func_001334E0(1);
        unk10->unkA7 |= 1;
        unk10->func_001A57E0(D_002A25E0, unkB4, 0);
        unk10->func_00133ED0();
        unk10->func_001332A0();
        unk10->func_00133140(a1, 2);
    }
    if (unk14 == 0) {
        Obj_000A00A0 *p = (Obj_000A00A0 *)func_001E8A44(0xf4);
        if (p != 0)
            p = p->func_0014AB30(1);
        else
            p = 0;
        unk14 = p;
        p->func_00129920(2);
        unk14->unk60 = this;
        unk14->unk9C = &D_0009F700;
        unk14->func_001334E0(1);
        unk14->unkA7 |= 1;
        unk14->func_0014C1C0(1, 0, 0);
        V4_000A00A0 v[2];
        v[1] = a0;
        v[0] = a0;
        unk14->func_0014AC30(v, 0);
        unk14->func_00133ED0();
        unk14->func_001332A0();
        unk14->func_00133140(a1, 2);
    }
}

