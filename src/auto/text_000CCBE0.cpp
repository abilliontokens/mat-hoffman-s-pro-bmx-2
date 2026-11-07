/* 1 function from 0x000CCBE0 to 0x000CDEB0, found by Ghidra. */
#include "common.h"

/* BmxUIPageRider, vtable slot 31: builds the rider page's UI text/sprite objects */
void *func_001E8A44(unsigned int size);

extern char D_00278690[], D_002786A0[], D_00278678[], D_002786B0[], D_0027E52C[];
extern char D_0027E7B8[], D_0027E7A8[], D_0027E798[], D_0027E788[], D_0027E778[];
extern char D_0027E768[], D_0027E758[], D_0027E748[], D_0027E734[], D_0027E724[];
extern char D_0027E714[], D_0027E704[], D_0027E6F0[], D_0027E6DC[], D_0027E6CC[];
extern char D_0027E6BC[];
extern char D_0027E6A0[], D_0027E69C[], D_0027E684[], D_0027E66C[], D_0027E654[], D_0027E63C[], D_0027E624[], D_0027E60C[], D_0027E5F4[], D_0027E5DC[], D_0027958C[];
extern int D_0028F5E0;
extern char D_0027E6B8[], D_0027E6B4[], D_0027E6B0[], D_0027E6AC[], D_0027E6A8[], D_0027E6A4[];

/* the text sprite object (0x64 bytes) */
struct S_CCBE0_Sprite {
    char pad0[4];
    int f4;
    int f8;
    char padC[0x24 - 0xc];
    int f24;
    int f28;
    int f2C;
    char pad30[8];
    int f38;
    int f3C;
    float f40;
    float f44;
    int f48;
    char pad4C[8];
    int f54;
    unsigned char f58;
    S_CCBE0_Sprite *func_001D5760(void);
    void func_001D5810(const char *s, float x, float y, int z);
};

/* the text label object (0x184 bytes) */
struct S_CCBE0_Text {
    S_CCBE0_Text *func_001B12C0(int a);
    void func_001B13A0(const char *a, const char *b, int c, int len);
    void func_001B2270(int colour);
    void func_001B1A30(float x, float y, float z);
    void func_001B1B30(float a, int b);
    void func_001B1C10(int);
    void func_001B17D0(int);
    void func_001B1980();
};

struct S_CCBE0_Mgr {
    int *func_0018C160(const char *name);
};
struct S_CCBE0_Root {
    char pad0[0x2ec];
    S_CCBE0_Mgr *f2ec;
};
extern S_CCBE0_Root *D_002A8490;

struct C_000CCBE0 {
    char pad0[0x390];
    S_CCBE0_Sprite *f390[16];
    char pad3d0[0x3f8 - 0x3d0];
    S_CCBE0_Sprite *f3F8[2];
    S_CCBE0_Sprite *f400[16];
    char pad440[0x480 - 0x440];
    S_CCBE0_Text *f480;
    char pad484[0x550 - 0x484];
    S_CCBE0_Sprite *f550;
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(void *obj, int a);
    void func_000CCBE0(int a, int b, int c);
};

void C_000CCBE0::func_000CCBE0(int a, int b, int c)
{
    void *mem;
    int i;
    S_CCBE0_Sprite *o;

    func_001BE4F0(a, b, c);
    D_002A8490->f2ec->func_0018C160(D_00278690);
    D_002A8490->f2ec->func_0018C160(D_002786A0);
    D_002A8490->f2ec->func_0018C160(D_00278678);
    mem = func_001E8A44(0x64);
    f550 = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f550->func_001D5810(D_0027E52C, 0.0f, 70.0f, 0);
    o = f550;
    if (o->f2C != 0x439a0000) {
        o->f2C = 0x439a0000;
        o->f58 |= 1;
    }
    o = f550;
    if (o->f28 != 0x44200000) {
        o->f28 = 0x44200000;
        o->f58 |= 1;
    }
    o = f550;
    *((unsigned char *)&o->f38 + 3) = 0;
    o->f58 |= 2;
    for (i = 0; i < 2; i++) {
        mem = func_001E8A44(0x64);
        f3F8[i] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    }
    f3F8[0]->func_001D5810(D_002786B0, 20.0f, 110.0f, 0);
    o = f3F8[0];
    if (o->f28 != 0x43110000) {
        o->f28 = 0x43110000;
        o->f58 |= 1;
    }
    o = f3F8[0];
    o->f38 = (o->f38 & 0xffcccccc) | 0xcccccc;
    o->f58 |= 2;
    f3F8[1]->func_001D5810(D_002786B0, 165.0f, 110.0f, 0);
    o = f3F8[1];
    if (o->f28 != 0x43110000) {
        o->f28 = 0x43110000;
        o->f58 |= 1;
    }
    o = f3F8[1];
    o->f3C = 0x3f800000;
    o->f48 = 0x3f800000;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f58 |= 4;
    o = f3F8[1];
    o->f38 = (o->f38 & 0xffcccccc) | 0xcccccc;
    o->f58 |= 2;
    for (i = 0; i < 16; i++) {
        mem = func_001E8A44(0x64);
        f400[i] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    }
    f400[0]->func_001D5810(D_0027E7B8, 80.0f, 141.0f, 0);
    f400[1]->func_001D5810(D_0027E7A8, 80.0f, 141.0f, 0);
    o = f400[1];
    o->f38 = (o->f38 & 0xff6e2828) | 0x6e2828;
    o->f58 |= 2;
    f400[2]->func_001D5810(D_0027E798, 80.0f, 141.0f, 0);
    f400[3]->func_001D5810(D_0027E788, 80.0f, 141.0f, 0);
    f400[4]->func_001D5810(D_0027E778, 80.0f, 141.0f, 0);
    f400[5]->func_001D5810(D_0027E768, 80.0f, 141.0f, 0);
    f400[6]->func_001D5810(D_0027E758, 80.0f, 141.0f, 0);
    f400[7]->func_001D5810(D_0027E748, 80.0f, 141.0f, 0);
    f400[8]->func_001D5810(D_0027E734, 80.0f, 141.0f, 0);
    f400[10]->func_001D5810(D_0027E724, 80.0f, 141.0f, 0);
    f400[9]->func_001D5810(D_0027E714, 80.0f, 141.0f, 0);
    f400[11]->func_001D5810(D_0027E704, 80.0f, 141.0f, 0);
    f400[12]->func_001D5810(D_0027E6F0, 80.0f, 141.0f, 0);
    f400[14]->func_001D5810(D_0027E6DC, 80.0f, 141.0f, 0);
    f400[13]->func_001D5810(D_0027E6CC, 80.0f, 141.0f, 0);
    f400[15]->func_001D5810(D_0027E6BC, 80.0f, 141.0f, 0);
    mem = func_001E8A44(0x184);
    f480 = mem ? ((S_CCBE0_Text *)mem)->func_001B12C0(1) : 0;
    f480->func_001B13A0(D_002786A0, D_002786A0, 0, 0x28);
    f480->func_001B2270(0xffcccccc);
    f480->func_001B1A30(30.0f, 115.0f, 0.0f);
    f480->func_001B1B30(1.45f, 0);
    func_001577A0(f480, -1);
    mem = func_001E8A44(0x64);
    f390[0] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f390[0]->func_001D5810(D_0027E6B8, 0.0f, 0.0f, 0);
    o = f390[0];
    if (o->f4 != 0x44048000 || o->f8 != 0x42480000) {
        o->f4 = 0x44048000;
        o->f8 = 0x42480000;
        o->f58 |= 1;
    }
    o = f390[0];
    if (o->f24 != 0x3f2b851f) {
        int t = o->f54;
        o->f24 = 0x3f2b851f;
        if (t != 0) {
            o->f24 = 0x3eab851f;
        }
        o->f58 |= 1;
    }
    mem = func_001E8A44(0x64);
    f390[1] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f390[1]->func_001D5810(D_0027E6B4, 0.0f, 0.0f, 0);
    o = f390[1];
    if (o->f4 != 0x44048000 || o->f8 != 0x42480000) {
        o->f4 = 0x44048000;
        o->f8 = 0x42480000;
        o->f58 |= 1;
    }
    o = f390[1];
    if (o->f24 != 0x3f2b851f) {
        int t = o->f54;
        o->f24 = 0x3f2b851f;
        if (t != 0) {
            o->f24 = 0x3eab851f;
        }
        o->f58 |= 1;
    }
    mem = func_001E8A44(0x64);
    f390[2] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f390[2]->func_001D5810(D_0027E6B0, 0.0f, 0.0f, 0);
    o = f390[2];
    if (o->f4 != 0x44048000 || o->f8 != 0x42480000) {
        o->f4 = 0x44048000;
        o->f8 = 0x42480000;
        o->f58 |= 1;
    }
    o = f390[2];
    if (o->f24 != 0x3f2b851f) {
        int t = o->f54;
        o->f24 = 0x3f2b851f;
        if (t != 0) {
            o->f24 = 0x3eab851f;
        }
        o->f58 |= 1;
    }
    mem = func_001E8A44(0x64);
    f390[3] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f390[3]->func_001D5810(D_0027E6AC, 0.0f, 0.0f, 0);
    o = f390[3];
    if (o->f4 != 0x44048000 || o->f8 != 0x42480000) {
        o->f4 = 0x44048000;
        o->f8 = 0x42480000;
        o->f58 |= 1;
    }
    o = f390[3];
    if (o->f24 != 0x3f2b851f) {
        int t = o->f54;
        o->f24 = 0x3f2b851f;
        if (t != 0) {
            o->f24 = 0x3eab851f;
        }
        o->f58 |= 1;
    }
    mem = func_001E8A44(0x64);
    f390[4] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f390[4]->func_001D5810(D_0027E6A8, 0.0f, 0.0f, 0);
    o = f390[4];
    if (o->f4 != 0x44048000 || o->f8 != 0x42480000) {
        o->f4 = 0x44048000;
        o->f8 = 0x42480000;
        o->f58 |= 1;
    }
    o = f390[4];
    if (o->f24 != 0x3f2b851f) {
        int t = o->f54;
        o->f24 = 0x3f2b851f;
        if (t != 0) {
            o->f24 = 0x3eab851f;
        }
        o->f58 |= 1;
    }
    mem = func_001E8A44(0x64);
    f390[5] = mem ? ((S_CCBE0_Sprite *)mem)->func_001D5760() : 0;
    f390[5]->func_001D5810(D_0027E6A4, 0.0f, 0.0f, 0);
    o = f390[5];
    if (o->f4 != 0x44048000 || o->f8 != 0x42480000) {
        o->f4 = 0x44048000;
        o->f8 = 0x42480000;
        o->f58 |= 1;
    }
    o = f390[5];
    if (o->f24 != 0x3f2b851f) {
        int t = o->f54;
        o->f24 = 0x3f2b851f;
        if (t != 0) {
            o->f24 = 0x3eab851f;
        }
        o->f58 |= 1;
    }
}
