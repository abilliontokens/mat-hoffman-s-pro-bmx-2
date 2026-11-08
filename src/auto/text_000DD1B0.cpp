/* 1 function from 0x000DD1B0 to 0x000DE300, found by Ghidra. */
#include "common.h"

void *func_001E8A44(unsigned int size);

extern char D_00278690[], D_002786A0[], D_00278678[], D_00278C18[], D_002786B0[];
extern int D_0028F5DC;
extern float D_00275AEC;

/* the text label object (0x184 bytes) */
struct S_DD1B0_Out { float x, y, z, w; };
struct S_DD1B0_Text {
    S_DD1B0_Text *func_001B12C0(int a);
    void func_001B13A0(const char *a, const char *b, int c, int len);
    void func_001B17D0(const char *s);
    void func_001B1A30(float x, float y, float z);
    void func_001B2270(int colour);
    void func_001B19A0(int a);
    void func_001B15F0(void);
    int func_001B1800(void);
    void func_001B1810(S_DD1B0_Out *out);
    char *func_001B17F0(void);
    void func_001B1C10(int a);
};

/* the text sprite object (0x64 bytes) */
struct S_DD1B0_Sprite {
    char pad0[0x28];
    int f28;
    char pad2C[0x0c];
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    char pad4C[0x0c];
    unsigned char f58;
    S_DD1B0_Sprite *func_001D5760(void);
    void func_001D5810(const char *s, float x, float y, int z);
};
/* the text sprite object with a font (0x60 bytes) */
struct S_DD1B0_Font {
    S_DD1B0_Font *func_001D5E90(void);
    void func_001D5FA0(int font, const char *s, int a, int b);
};

struct S_DD1B0_Mgr {
    int *func_0018C160(const char *name);
};
struct S_DD1B0_Sub { char pad0[0x138]; char *f138; };
struct S_DD1B0_Pair { char pad0[4]; S_DD1B0_Sub *f4; };
struct S_DD1B0_Root {
    char pad0[0x2e0];
    char *f2e0;
    char pad2e4[4];
    S_DD1B0_Pair *f2e8;
    S_DD1B0_Mgr *f2ec;
};
extern S_DD1B0_Root *D_002A8490;

struct S_DD1B0_Str { char s[0x25]; };
extern S_DD1B0_Str D_00278BD4;

struct C_DD1B0 {
    char pad0[0x294];
    S_DD1B0_Str f294;
    char pad2b9[3];
    int f2bc;
    char f2c0[0x2c];
    S_DD1B0_Sprite *f2ec;
    float f2f0;
    char pad2f4[0x328 - 0x2f4];
    S_DD1B0_Text *f328;
    S_DD1B0_Text *f32c;
    S_DD1B0_Font *f330;
    char pad334[0x340 - 0x334];
    S_DD1B0_Sprite *f340[2];
    void func_001BE4F0(char *name, char *file, void *input);
    void func_001577A0(void *obj, int a);
    C_DD1B0 *func_000DD1B0(char *name, char *file, void *input);
};

C_DD1B0 *C_DD1B0::func_000DD1B0(char *name, char *file, void *input)
{
    int font;
    int *r;
    void *mem;
    int n;
    S_DD1B0_Out out;
    int i;
    char *src;
    char *dst;
    char c;
    S_DD1B0_Sprite *o;
    unsigned char t;

    func_001BE4F0(name, file, input);
    D_002A8490->f2ec->func_0018C160(D_00278690);
    r = D_002A8490->f2ec->func_0018C160(D_002786A0);
    font = r ? *r : 0;
    D_002A8490->f2ec->func_0018C160(D_00278678);
    mem = func_001E8A44(0x184);
    f328 = mem ? ((S_DD1B0_Text *)mem)->func_001B12C0(1) : 0;
    f328->func_001B13A0(D_002786A0, D_002786A0, 0, 0x10);
    f328->func_001B17D0(D_002A8490->f2e8->f4->f138);
    f328->func_001B1A30(240.0f, 157.0f, 0.0f);
    f328->func_001B2270(0xffbfa35a);
    f328->func_001B19A0(D_0028F5DC);
    f328->func_001B15F0();
    func_001577A0(f328, -1);
    mem = func_001E8A44(0x184);
    f32c = mem ? ((S_DD1B0_Text *)mem)->func_001B12C0(1) : 0;
    f32c->func_001B13A0(D_002786A0, D_002786A0, 0, 2);
    f32c->func_001B1A30(330.0f, 157.0f, 0.0f);
    f32c->func_001B2270(0xffbfa35a);
    f32c->func_001B19A0(D_0028F5DC);
    f32c->func_001B15F0();
    func_001577A0(f32c, -1);
    mem = func_001E8A44(0x64);
    f2ec = mem ? ((S_DD1B0_Sprite *)mem)->func_001D5760() : 0;
    n = f328->func_001B1800();
    f328->func_001B1810(&out);
    f2f0 = (float)n + out.x - D_00275AEC;
    f32c->func_001B1C10(D_0028F5DC);
    f32c->func_001B1A30((float)n + out.x, out.y, 0.0f);
    f2ec->func_001D5810(D_00278C18, f2f0, 175.0f, 0);
    o = f2ec;
    o->f38 = (o->f38 & 0xffbfa35a) | 0xbfa35a;
    o->f58 |= 2;
    mem = func_001E8A44(0x60);
    f330 = mem ? ((S_DD1B0_Font *)mem)->func_001D5E90() : 0;
    f330->func_001D5FA0(font, D_002786A0, 0x10, 0);
    for (i = 0; i < 2; i++) {
        mem = func_001E8A44(0x64);
        f340[i] = mem ? ((S_DD1B0_Sprite *)mem)->func_001D5760() : 0;
        if (i % 2 == 0) {
            f340[i]->func_001D5810(D_002786B0, 100.0f, 150.0f, 0);
        } else {
            f340[i]->func_001D5810(D_002786B0, 321.0f, 150.0f, 0);
            o = f340[i];
            o->f40 = 0;
            o->f44 = 0;
            t = o->f58 | 4;
            o->f3C = 0x3f800000;
            o->f48 = 0x3f800000;
            o->f58 = t;
        }
        o = f340[i];
        if (o->f28 != 0x435d0000) {
            o->f28 = 0x435d0000;
            o->f58 |= 1;
        }
    }
    f294 = D_00278BD4;
    f328->func_001B17D0(D_002A8490->f2e0 + 0x254);
    src = D_002A8490->f2e0 + 0x254;
    dst = f2c0;
    do {
        c = *src++;
        *dst++ = c;
    } while (c != 0);
    src = f328->func_001B17F0();
    {
        char *e = src + 1;
        do {
            c = *src++;
        } while (c != 0);
        f2bc = src - e;
    }
    f32c->func_001B17D0((char *)this + 0x2bf + f2bc);
    src = f328->func_001B17F0();
    dst = f2c0;
    do {
        c = *src++;
        *dst++ = c;
    } while (c != 0);
    ((char *)this)[0x2bf + f2bc] = 0;
    f328->func_001B17D0(f2c0);
    return this;
}
