/* 1 function from 0x000EE450 to 0x000F029C, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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
static __forceinline void color_EE(Img_EE *p) { unsigned int c = p->color; unsigned char f = p->flags; c &= 0xffbfa35a; c |= 0xbfa35a; f |= 2; p->color = c; p->flags = f; }
static __forceinline void pos_EE(Img_EE *p, int x, int y) { if (p->x != x || p->y != y) { p->x = x; p->y = y; p->flags |= 1; } }
static __forceinline void rot_EE(Img_EE *p, int r) { if (p->rot != r) { p->rot = r; p->flags |= 1; } }
static __forceinline void uv_EE(Img_EE *p) { p->flags |= 4; p->a = 1.0f; p->b = 0; p->c = 0; p->d = 1.0f; }
static __forceinline void Round_EE(int * volatile out, float f) { *out = _mm_cvtss_si32(*(__m128 *)&f); }

C_000EDF00 *C_000EDF00::func_000EE450(int a0, int a1, int a2)
{
    C_000EDF00 * volatile self = this;
#define AT(T, off) (*(T *)((off) + (int)self))
    int i;
    float y;
    int off;
    int off2;
    func_001BE4F0(a0, a1, a2);
    D_002A8490->f2EC->func_0018C160((int)D_00278690);
    D_002A8490->f2EC->func_0018C160((int)D_002786A0);
    D_002A8490->f2EC->func_0018C160((int)D_00278678);
    for (off = 0x680; off < 0x690; off += 4) {
        Img_EE *o = (Img_EE *)func_001E8A44(0x64);
        AT(Img_EE *, off) = o ? o->func_001D5760() : 0;
    }
    self->f680[0]->func_001D5810(D_002786B0, 100.0f, 90.0f, 0);
    width_EE(self->f680[0], 0x435d0000);
    color_EE(self->f680[0]);
    self->f680[1]->func_001D5810(D_002786B0, 321.0f, 90.0f, 0);
    width_EE(self->f680[1], 0x435d0000);
    color_EE(self->f680[1]);
    uv_EE(self->f680[1]);
    self->f680[2]->func_001D5810(D_002786B0, 321.0f, 360.0f, 0);
    width_EE(self->f680[2], 0x435d0000);
    color_EE(self->f680[2]);
    pos_EE(self->f680[2], 0x43a08000, 0x43b48000);
    rot_EE(self->f680[2], 0x40490fd9);
    uv_EE(self->f680[2]);
    self->f680[3]->func_001D5810(D_002786B0, 542.0f, 360.0f, 0);
    width_EE(self->f680[3], 0x435d0000);
    color_EE(self->f680[3]);
    pos_EE(self->f680[3], 0x44078000, 0x43b48000);
    rot_EE(self->f680[3], 0x40490fd9);
    for (i = 0; i < 2; i++) {
        Img_EE *o = (Img_EE *)func_001E8A44(0x64);
        self->f690[i] = o ? o->func_001D5760() : 0;
        if (i == 0)
            self->f690[0]->func_001D5810(D_0027E328, 309.0f, 82.0f, 0);
        else
            self->f690[i]->func_001D5810(D_0027E31C, 309.0f, 350.0f, 0);
        color_EE(self->f690[i]);
    }
    off2 = 0x4b0;
    for (i = 0, off = 0x614; off2 < 0x540; i++, off += 4, off2 += 0x10) {
        Img_EE *o = (Img_EE *)func_001E8A44(0x64);
        AT(Img_EE *, off + 0x84) = o ? o->func_001D5760() : 0;
        y = i * D_002757F0 + D_0027F978;
        AT(Img_EE *, off + 0x84)->func_001D5810(D_00281DC0, 150.0f, y, 0);
        AT(float, off) = y;
        AsmFloatToIntRound(AT(float, off), &AT(int, off2));
        AsmFloatToIntRound(AT(float, off), &AT(int, off2 + 0x90));
        AT(int, off2 - 0x90) = AT(int, off2);
        o = (Img_EE *)func_001E8A44(0x64);
        AT(Img_EE *, off + 0xa8) = o ? o->func_001D5760() : 0;
        AT(Img_EE *, off + 0xa8)->func_001D5810(D_00281DB4, 150.0f, y, 0);
    }
    off2 = 0x76;
    for (off = 0x638; off < 0x65c; off += 4, off2 += 0x28) {
        Text_EE *t = (Text_EE *)func_001E8A44(0x184);
        AT(Text_EE *, off) = t ? t->func_001B12C0(1) : 0;
        AT(Text_EE *, off)->func_001B13A0(D_002786A0, D_0027F6F4, 0, 0x1e);
        AT(int, off + 0x24) = off2;
        AT(Text_EE *, off)->func_001B19C0(200, AT(int, off + 0x24), 0);
        AT(Text_EE *, off)->func_001B2270(0xffcccccc);
        AT(Text_EE *, off)->func_001B1C10(D_0028F5DC);
        self->func_001577A0(AT(Text_EE *, off), -1);
    }
    return self;
#undef AT
}
