/* 2 functions from 0x00151130 to 0x00151F80, found by Ghidra. */
#include "common.h"
#include <string.h>
extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
#pragma intrinsic(cos, sin)

struct V4_151130 {
    float x, y, z, w;
    V4_151130() { x = y = z = 0.0f; w = 1.0f; }
    V4_151130(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    __forceinline void Copy(const V4_151130 &v) {
        ((int *)this)[0] = ((const volatile int *)&v)[0];
        ((int *)this)[1] = ((const volatile int *)&v)[1];
        ((int *)this)[2] = ((const volatile int *)&v)[2];
        ((int *)this)[3] = ((const volatile int *)&v)[3];
    }
};
struct VBase_151130 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual int Load(const char *, int, int);
};
struct Obj3C_151130 {
    Obj3C_151130 *func_001362A0(float, float, float, int, int, float);
};
struct Ent_151130 {
    void func_0015B060(Obj3C_151130 *, float, float);
};
struct Reg_151130 {
    char pad0[0x14];
    Ent_151130 *ents[1];
    int func_00135E80(void);
};
struct G8490_151130 {
    char pad0[8];
    Reg_151130 *f8;
    char padC[4];
    int f10;
};
struct Node_151130 : VBase_151130 {
    Node_151130 *func_00143580(int);
    void func_00199600(V4_151130 v);
    void func_00198F50(V4_151130 *, V4_151130 *, int, int, int);
    void func_0019ABA0(int, int);
    void func_00198390(void);
};
struct Obj218_151130 : VBase_151130 {
    Obj218_151130 *func_0016CE80(int);
    void func_0016CF10(void *, const char *, int, int);
};
struct Obj250_151130 : VBase_151130 {
    Obj250_151130 *func_0016ABE0(int);
    void func_0016AD20(void *, const char *, int, int);
};
struct Obj230_151130 : VBase_151130 {
    Obj230_151130 *func_0016D620(int);
    void func_0016D6A0(void *, const char *, int, int);
};
struct Slot_151130 {
    Node_151130 *f0;
    char pad4[0x50];
    Obj218_151130 *f54;
    Obj218_151130 *f58;
    Obj250_151130 *f5C;
};
struct ObjFC_151130 {
    char pad0[0x60];
    void *f60;
    char pad64[0x9c - 0x64];
    void *f9C;
    char padA0[7];
    unsigned char fA7;
    ObjFC_151130 *func_0017F050(int);
    void func_0017F0A0(int);
    void func_00180E00(int, V4_151130 *, int, void *);
    void func_001334E0(int);
    void func_0014C1C0(int, int, int);
};
struct ObjF8_151130 {
    char pad0[0x60];
    void *f60;
    char pad64[0x9c - 0x64];
    void *f9C;
    char padA0[7];
    unsigned char fA7;
    ObjF8_151130 *func_0014AB30(int);
    void func_00129920(int);
    void func_001334E0(int);
    void func_0014C1C0(int, int, int);
};
struct Mid_151130 {
    char pad0[4];
    void *f4;
};
struct Cam_151130 {
    char pad0[0x1a4];
    Mid_151130 *f1a4;
};
struct G9120_151130 {
    char pad0[0x4a8];
    int *f4A8;
};
struct Obj829C_151130 {
    void func_00161680(void);
};
struct ObjA6C0_151130 {
    void func_001B2640(void);
};
extern G8490_151130 *D_002A8490;
extern G9120_151130 *D_002B9120;
extern Obj829C_151130 *D_002A829C;
extern ObjA6C0_151130 *D_002AA6C0;
extern V4_151130 D_002A789C, D_002A78BC, D_002A78CC;
extern float D_00283E00, D_002756BC;
extern char D_002A5EA0[];
extern char D_00286C90[];
extern char D_00286C80[], D_00286C70[], D_00286C60[], D_00286C4C[], D_0027592C[];
extern char D_00150BA0;
void func_00150970(void);
void *func_001E8A44(unsigned int size);

struct C_00151130 {
    char pad0[0x24];
    int f24;
    int f28;
    Cam_151130 *f2C;
    int f30;
    char pad34[4];
    Obj3C_151130 *f38;
    Obj3C_151130 *f3C;
    Obj3C_151130 *f40;
    Obj3C_151130 *f44;
    char pad48[0x60 - 0x48];
    ObjFC_151130 *f60;
    char pad64[0x78 - 0x64];
    ObjF8_151130 *f78;
    char pad7C[0xe0 - 0x7c];
    Obj230_151130 *fe0;
    char pade4[0x150 - 0xe4];
    Slot_151130 slots[11];
    void func_001577A0(void *, int);
    void func_00151130(int a, Cam_151130 *b, void *c);
};
struct C_00151F40 {
    int func_00151F40(void);
};
struct C_00198390 {
    void func_00198390(void);
};
struct C_001983A0 {
    void func_001983A0(void);
};

int C_00151F40::func_00151F40(void)
{
    if (*(int *)((char *)D_002A8490 + 0x10) != *(int *)((char *)this + 0x24)) {
        char *obj = *(char **)(*(char **)((char *)this + 0x2c) + 0x1a4);
        ((C_00198390 *)*(char **)(obj + 4))->func_00198390();
        return 1;
    }
    {
        char *obj = *(char **)(*(char **)((char *)this + 0x2c) + 0x1a4);
        ((C_001983A0 *)*(char **)(obj + 4))->func_001983A0();
    }
    return 1;
}
