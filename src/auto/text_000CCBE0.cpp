/* 1 function from 0x000CCBE0 to 0x000CDEB0, found by Ghidra. */
#include "common.h"

/* BmxUIPageRider, vtable slot 31: builds the rider page's UI text/sprite objects */
void *func_001E8A44(unsigned int size);

extern char D_00278690[], D_002786A0[], D_00278678[], D_002786B0[], D_0027E52C[];
extern char D_0027E7B8[], D_0027E7A8[], D_0027E798[], D_0027E788[], D_0027E778[];
extern char D_0027E768[], D_0027E758[], D_0027E748[], D_0027E734[], D_0027E724[];
extern char D_0027E714[], D_0027E704[], D_0027E6F0[], D_0027E6DC[], D_0027E6CC[];
extern char D_0027E6BC[];
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
    int f40;
    int f44;
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
}
