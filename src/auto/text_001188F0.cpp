/* 2 functions from 0x001188F0 to 0x00119810, found by Ghidra. */
#include "common.h"

struct Vec4 { float x, y, z, w; };
struct Res { int func_00026500(char* name, int a); };
struct Sub { void func_00199E30(Vec4 v, float f); };
struct Obj {
    char pad0[0x5e0]; float f5e0, f5e4;
    char pad1[0x718 - 0x5e8]; int mode;
    char pad2[0x950 - 0x71c]; char* p950;
    char pad3[0xa04 - 0x954]; int ia04;
    char pad4[0x12a8 - 0xa08]; char c12a8;
    char pad5[0x159c - 0x12a9]; Sub* s159c; Sub* s15a0;
    void func_001188F0(int a);
    void func_00106810(int a, int b);
    void func_00119680(int a);
};
extern Res* D_002A7CB8;
extern char D_00283D34[];
extern float D_002756D0, D_002756B8, D_002756E8;
extern Vec4 D_002A3A4C;
extern int D_002B921C;
#include <xmmintrin.h>

struct M4 {
    __m128 r0, r1, r2, r3;
};

extern const float D_00283D30, D_00275544, D_00275460, D_002755E8, D_00279B54;
extern char *D_002A8490;
void __stdcall func_00199C20(int a, void *b);
void __stdcall func_0019AD60(int a, void *b);
int __fastcall func_00197EC0(int a, void *b);
void __stdcall func_00198040(void *a, void *b);
void __stdcall func_001138E0(int a);
void func_00107380(void);
void func_0002D270(void);
void func_001048E0(void);
void func_001048C0(void);
void func_0010DCB0(void);
void __stdcall func_00108690_4(int a);
void func_00028070(int a);
int func_00029BD0(void);
void __stdcall func_00113F00(int a);

static inline float Wrap(float v) {
    if (v > D_002756D0) return v - D_002756B8;
    if (v < D_002756E8) return v + D_002756B8;
    return v;
}

