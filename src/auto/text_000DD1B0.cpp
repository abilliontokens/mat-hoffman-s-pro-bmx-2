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
