/* 1 function from 0x000EE450 to 0x000F029C, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct Lookup_EE { void *func_0018C160(int id); };
struct Root_EE { char pad0[0x2EC]; Lookup_EE *f2EC; };
struct Img_EE {
    char pad0[0x14];
    int x, y;
    char pad1C[0xC];
    int width, height;
    int rot;
    char pad34[4];
    unsigned int color;
    float a, b, c, d;
    char pad4C[0xC];
    unsigned char flags;
    Img_EE *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};
struct Text_EE {
    Text_EE *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B19C0(int a, int b, int c);
    void func_001B2270(unsigned int color);
    void func_001B1C10(int a);
};
struct C_000EDF00 {
    void *vtbl;
    char pad4[0x420 - 4];
    int f420[36];
    int f4B0[36];
    int f540[36];
    char pad5D0[0x614 - 0x5D0];
    float f614[9];
    Text_EE *f638[9];
    int f65C[9];
    Img_EE *f680[4];
    Img_EE *f690[2];
    Img_EE *f698[9];
    Img_EE *f6BC[9];
    C_000EDF00 *func_000EE450(int a0, int a1, int a2);
    void func_001BE4F0(int a0, int a1, int a2);
    void func_001577A0(void *obj, int flags);
};
extern Root_EE *D_002A8490;
extern char D_00278690[], D_002786A0[], D_00278678[], D_002786B0[], D_0027E328[], D_0027E31C[], D_00281DC0[], D_00281DB4[], D_0027F6F4[];
extern float D_002757F0, D_0027F978;
extern int D_0028F5DC;
extern "C" void *func_001E8A44(unsigned int size);

static __forceinline void width_EE(Img_EE *p, int v) { if (p->width != v) { p->width = v; p->flags |= 1; } }
static __forceinline void color_EE(Img_EE *p) { p->color = (p->color & 0xffbfa35a) | 0xbfa35a; p->flags |= 2; }
static __forceinline void pos_EE(Img_EE *p, int x, int y) { if (p->x != x || p->y != y) { p->x = x; p->y = y; p->flags |= 1; } }
static __forceinline void rot_EE(Img_EE *p, int r) { if (p->rot != r) { p->rot = r; p->flags |= 1; } }
static __forceinline void uv_EE(Img_EE *p) { p->flags |= 4; p->a = 1.0f; p->b = 0; p->c = 0; p->d = 1.0f; }
static __forceinline void Round_EE(int *out, float f) { *out = _mm_cvtss_si32(_mm_load_ss(&f)); }
