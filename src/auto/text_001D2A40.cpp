/* 9 functions from 0x001D2A40 to 0x001D3860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern float D_002755E0;
extern int D_0028F274;
extern int D_0028F474;

void func_001E891B(void *p);
void __stdcall func_0025ADD0(void *p);
void __stdcall func_002598A0(void *p, int a1, int a2);

struct C_001C3D40 {
    void func_001C3D40(int a);
    void func_001C3D80();
};
extern C_001C3D40 *D_002F07B8;

struct C_001625A0 {
    void func_001625A0(int a);
};

struct C_001D27F0 {
    void func_001D27F0();
};

struct S_001D2A40_Dev {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int a, void *b, void *c);
};
extern S_001D2A40_Dev *D_002EFDB8;

struct C_001D2A40 {
    char pad0[8]; int f8; char padc[4]; char *f10; char *f14; char pad18[0x18];
    char f30[0x20]; void *f50;
    void func_001D2A40();
};

struct S_001D3300_Arg {
    C_001D2A40 *obj;
    int h;
    void (*cb)(int);
    int cbArg;
    int pad10[7];
    int lock;
};

int __stdcall func_001DDDD6(int h, int t);
void __stdcall func_001DE70D(int a);
void __stdcall func_001DE733(int a);
void __stdcall func_002025D0(int a);
void __stdcall func_001DE7C2(int a);

struct C_00160BF0 {
    void func_00160BF0();
};

void __stdcall func_00259060(void *p);
void __stdcall func_001FCEA0(void *p, int a1, int *out, int a3, int a4);
void __stdcall func_0025AA30(void *p, int a1, int a2, int a3, int a4, int a5, int a6);

struct S_001D3690_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0xb4];
    void *fb8;
};

struct S_001D3690_Handle {
    int f0;
    int f4;
};

/* 16-byte slot of the object table in XboxLoadingIcon */
struct S_001D35E0_Slot {
    S_001D3690_Obj *obj;
    int pad4[3];
};

/* 0x54-byte element of the array at XboxLoadingIcon+0x10 */
struct S_001D35E0_Elem {
    void *ptr;
    char pad4[0x50];
};

struct C_001D35E0 {
    void *vtbl;
    int f4;
    char pad8[8];
    S_001D35E0_Elem *f10;
    S_001D35E0_Slot *f14;
    int f18;
    void func_001D35E0();
};

struct C_001D3690 {
    void *vtbl;
    char pad4[0x38];
    u32 f3c;
    u32 f40;
    S_001D3690_Handle *f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    S_001D3690_Obj *f70;
    int f74;
    int f78;
    int f7c;
    C_001D3690 *func_001D3690(int a);
    int func_001D3730(int a);
    void func_001D37C0();
    void func_001D3800();
};

extern float D_0028F26C;
extern float D_002779FC;
extern char D_0028F45C;
void *__cdecl func_001E8A44(unsigned int);
void *__stdcall func_001FFE40(int);
void __stdcall func_002011F0(void *, void *);
void *__stdcall func_001FCF20(int,int,int,int,int,int,int);
void *__stdcall func_001FCE50(void *,int);
void __stdcall func_001FFF40(void *,void *,int,void *,void *);
void __stdcall func_00201100(void *);
int __stdcall func_001DDBC7(int,int,int,void *);
int __stdcall func_001DE8C7(int,int,void *,void *,int,int);
void __stdcall func_001D3300(int,int);
extern "C" __declspec(dllimport) void __stdcall RtlInitializeCriticalSection(void *);
struct C_001D6AD0 {
 char pad0[8]; int f8; int fc; char pad10[0x94]; int fa4; int fa8; char padac[0xc]; void *fb8;
 C_001D6AD0 *func_001D6AD0(int);
};
struct C_001D3480 {
 char pad0[0xc]; char fc; char padd[0xb]; int f18; int f1c; void *f20; int f24; char pad28[0x24]; int f4c; C_001D6AD0 *f50;
 void func_001D3480();
};
struct C_001D3700 {
    void func_001D3700(int param_1, int param_2);
};


void C_001D35E0::func_001D35E0()
{
    vtbl = (void *)&D_0028F274;
    if (f18 != 0) {
        ((C_001D27F0 *)this)->func_001D27F0();
    }
    if (f14 != 0) {
        int i;
        for (i = 0; i < f4; i++) {
            if (f14[i].obj != 0) {
                f14[i].obj->v2();
                f14[i].obj = 0;
            }
        }
        func_001E891B(f14);
    }
    if (f10 != 0) {
        int i = ((int *)f10)[-1];
        char *base = (char *)f10 - 4;
        S_001D35E0_Elem *p = f10 + i;
        while (--i >= 0) {
            p--;
            if (p->ptr != 0) {
                func_001E891B(p->ptr);
            }
        }
        func_001E891B(base);
    }
    ((C_00160BF0 *)this)->func_00160BF0();
}

C_001D3690 *C_001D3690::func_001D3690(int a)
{
    ((C_001625A0 *)this)->func_001625A0(a);
    f44 = 0;
    f48 = 0;
    f70 = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0;
    f7c = 0;
    f74 = 0;
    f78 = 0;
    f4c = 0;
    vtbl = (void *)&D_0028F474;
    u32 *p = &f3c;
    p[1] = 0x3f800000;
    p[0] = 0x3f800000;
    f5c = 0x280;
    f60 = 0x1c0;
    f64 = 1;
    f68 = 0x302;
    f6c = 0x303;
    return this;
}

void C_001D3700::func_001D3700(int param_1, int param_2)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  *(int *)(in_ECX + 0x54) = param_1;
  *(int *)(in_ECX + 0x58) = param_2;
  if (piVar1 != (int *)0x0) {
    *(int *)(in_ECX + 0x5c) = *piVar1 + param_1;
    *(int *)(in_ECX + 0x60) = piVar1[1] + param_2;
  }
  return;
}

int C_001D3690::func_001D3730(int a)
{
    if (f44 != 0 && f48 == 0) {
        int v;
        int *p = &v;
        f48 = 1;
        D_002F07B8->func_001C3D40(0);
        float t = (float)(a << 15) * D_002755E0;
        *p = _mm_cvtss_si32(*(__m128 *)&t);
        func_002598A0(f44, 0, v);
        return f48;
    }
    f48 = 0;
    return f48;
}

void C_001D3690::func_001D37C0()
{
    f48 = 0;
    D_002F07B8->func_001C3D80();
    if (f44 != 0) {
        func_0025ADD0(f44);
        f44 = 0;
        if (f70 != 0) {
            f70->v2();
            f70 = 0;
        }
    }
}

void C_001D3690::func_001D3800()
{
    if (f44 != 0) {
        func_00259060(f44);
        void *p = f70->fb8;
        if (p != 0) {
            int pos[2];
            func_001FCEA0(p, 0, pos, 0, 0);
            func_0025AA30(f44, pos[1], pos[0], f44->f4, 0, 0, 3);
        }
    }
}

