/* 4 functions from 0x000D0E00 to 0x000D1AE0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0027EB8C;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000D0 {
    virtual void Destroy(int a0);
};

/* min taking references (so its operands live in stack temporaries), returning the value */
template <class T>
inline T min_ref(const T &a, const T &b)
{
    return b < a ? b : a;
}

/* a record whose name string sits at +0x28 */
struct S_000D1980_Item {
    char pad0[0x28];
    char name[1];
};

struct S_000D1980_Entry {
    int f0;
    int f4;
    S_000D1980_Item *f8;
};

struct S_000D1980_List {
    char pad0[0x24];
    int count;
    S_000D1980_Entry **items;
};

struct S_000D1980_Group {
    char pad0[0x3A8];
    S_000D1980_List **f3A8;
};

/* the camera/view object at +0x270 of the page's owner */
struct S_000D1050_View {
    char pad0[0x34];
    int f34;
    int f38;
    void func_000BC4C0(float a, float b);
    void func_000BC4A0(float a, float b);
    void func_00093280(float a);
};

struct S_000D1980_Mgr {
    char pad0[0x150];
    S_000D1980_Group *f150;
    char pad154[0x270 - 0x154];
    S_000D1050_View *f270;
};

/* per-profile save record: two arrays of 8 flags */
struct S_000D1050_Save {
    int f0;
    int f4;
    char pad8[0x5EC - 0x8];
    int f5EC[8];
    int f60C[8];
};

struct S_000D1050_Progress {
    S_000D1050_Save *func_0005C020(int a);
    int func_0005C120(int a);
};

struct S_000D1050_Music {
    int func_00094EE0();
    void func_00094C60();
    void func_00094E40(int a, int b, int c);
};

struct S_000D1050_Game {
    int f0;
    int f4;
    char pad8[0x2C0 - 0x8];
    S_000D1050_Progress *f2C0;
    char pad2C4[0x2D8 - 0x2C4];
    int f2D8;
    int f2DC;
    int f2E0, f2E4, f2E8, f2EC, f2F0, f2F4, f2F8;
    S_000D1050_Music *f2FC;
};

struct S_000D1050_Strings {
    char pad0[0x7C8];
    int f7C8;
    char pad7CC[0x838 - 0x7CC];
    int f838;
    char pad83C[0x958 - 0x83C];
    int f958;
    int f95C;
    int f960;
};

struct S_000D1050_StringsHolder {
    int f0;
    S_000D1050_Strings *f4;
};

struct S_000D1050_Root {
    char pad0[0x2E0];
    S_000D1050_Game *f2E0;
    int f2E4;
    S_000D1050_StringsHolder *f2E8;
};

struct S_000D1050_Text {
    void func_0005E840(int a);
};

struct S_000D1050_Hud {
    char pad0[0x34];
    S_000D1050_Text *f34;
    S_000D1050_Text *f38;
    S_000D1050_Text *f3C;
    S_000D1050_Text *f40;
    S_000D1050_Text *f44;
    S_000D1050_Text *f48;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000D1050_Root *D_002A8490;
extern S_000D1050_Hud *D_002B91AC;
extern float D_0027DE70;
extern float D_0027ED00;
extern char D_002A64D0[];
extern char D_00275678[];
extern char D_0027ECF0[], D_0027ECE4[], D_0027ECD8[], D_0027ECCC[], D_0027ECBC[], D_0027ECB0[], D_0027ECA0[], D_0027EC94[];
extern char D_0027EC84[], D_0027EC78[], D_0027EC68[], D_0027EC5C[], D_0027EC50[], D_0027EC44[], D_0027EC38[], D_0027EC2C[];
int func_001ADCC0(char *dst, int size, const char *fmt, ...);

/* the 10 bytes of "marquee08" */
struct S_000D1980_Str10 {
    char c[10];
};

extern S_000D1980_Str10 D_0027ED04;
extern int D_0027ED08;
extern short D_0027ED0C;
char *func_001E8920(char *dst, const char *src, int n);
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

/* BmxUIPageLevelSelection */
struct C_000D0FD0 {
    void *vtbl;
    char pad4[0x120];
    S_000D1980_Mgr *f124;
    char pad128[0x280 - 0x128];
    int f280;
    DelObjC_000D0 *arr284[2];
    int f28C, f290, f294, f298, f29C, f2A0;
    float f2A4;
    int f2A8, f2AC, f2B0, f2B4, f2B8, f2BC, f2C0;
    u8 f2C4;
    char pad2C5[0x3C8 - 0x2C5];
    float f3C8;
    int f3CC;
    int f3D0, f3D4, f3D8, f3DC, f3E0, f3E4;
    int f3E8[8];
    C_001D6410 *unk408;
    int f40C, f410, f414, f418, f41C, f420;
    int f424[10];
    int f44C;
    int f450[8];
    int f470;
    char f474[8];
    char pad47C[0xE9C - 0x47C];
    char fE9C[8];
    char padEA4[0x16BC - 0xEA4];
    char f16BC[8];
    char pad16C4[0x1EDC - 0x16C4];
    S_000D1980_Str10 f1EDC;
    char pad1EE6[0x1FE0 - 0x1EE6];
    int f1FE0, f1FE4, f1FE8, f1FEC;
    int f1FF0[8];
    int f2010, f2014, f2018, f201C, f2020, f2024, f2028, f202C, f2030, f2034, f2038, f203C, f2040;
    DelObjC_000D0 *unk2044;
    char pad2048[0x20B0 - 0x2048];
    S_000D1980_Item *f20B0;
    int f20B4;
    C_000D0FD0 *func_000D0E00(int a);
    void func_001BE360(int a);
    void func_001BE3F0();
    void func_000D0FD0();
    void func_000D1050();
    void func_000D1980();
};

C_000D0FD0 *C_000D0FD0::func_000D0E00(int a)
{
    int i;
    func_001BE360(a);
    vtbl = &D_0027EB8C;
    f2A8 = 0;
    f2B8 = 1;
    f418 = 0;
    f2C0 = 1;
    f28C = 0;
    f290 = 0;
    *(int *)&f2A4 = 0;
    f2BC = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2C4 = 0;
    *(int *)&f3C8 = 0;
    f3D0 = 0;
    f3D4 = 0;
    f3D8 = 0;
    f3DC = 0;
    f3E4 = 0;
    f3E0 = 0;
    for (i = 0; i < 8; i++) {
        f3E8[i] = 0;
        f1FF0[i] = 0;
    }
    unk408 = 0;
    f294 = 0;
    for (i = 0; i < 8; i++)
        f450[i] = 0;
    f470 = 0;
    for (i = 0; i < 10; i++)
        f424[i] = 0;
    f44C = 0;
    for (i = 0; i < 8; i++) {
        f474[i] = 0;
        fE9C[i] = 0;
        f16BC[i] = 0;
    }
    f1EDC.c[0] = 0;
    f410 = 1;
    f2AC = 0;
    f414 = 0;
    f1FE0 = 0;
    f1FE4 = 0;
    f1FE8 = 0;
    f1FEC = 0;
    f2B0 = 0;
    f2B4 = 0;
    for (i = 0; i < 2; i++)
        arr284[i] = 0;
    f2010 = 0;
    f203C = 0;
    f2018 = 0;
    f201C = 0;
    f2020 = 0;
    f2024 = 0;
    f2028 = 0;
    f202C = 0;
    f2030 = 0;
    f2034 = 0;
    f2038 = 0;
    f2014 = 0;
    f41C = 0;
    f420 = 0;
    f2040 = 0;
    f20B4 = 0;
    unk2044 = 0;
    f280 = 0;
    return this;
}

void C_000D0FD0::func_000D0FD0()
{
    C_001D6410 *p = unk408;
    vtbl = &D_0027EB8C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
        unk408 = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr284[i] != 0) {
            arr284[i]->Destroy(1);
            arr284[i] = 0;
        }
    }
    if (unk2044 != 0) {
        unk2044->Destroy(1);
        unk2044 = 0;
    }
    func_001BE3F0();
}

void C_000D0FD0::func_000D1980()
{
    char buf[0x104];
    S_000D1980_Mgr *mgr = f124;
    int i;
    volatile int t[2];
    volatile int len;

    f1EDC = D_0027ED04;
    for (i = 0; i < (*mgr->f150->f3A8)->count; (*(volatile int *)&i)++) {
        S_000D1980_Entry *e = (*mgr->f150->f3A8)->items[i];
        if (e != 0 && e->f4 == 1 && e->f8 != 0) {
            len = strlen(e->f8->name);
            t[0] = 0x103;
            int a = t[0];
            int b = len;
            if (a > b) {
                a = b;
            }
            t[1] = a;
            int n = t[1];
            func_001E8920(buf, (*(S_000D1980_Item * volatile *)&e->f8)->name, n);
            buf[n] = 0;
            char *dot = func_001E8AC0(buf, '.');
            if (dot != 0) {
                memset(dot, 0, strlen(dot));
            }
            if (func_001EA426(buf, f1EDC.c) == 0) {
                f20B0 = e->f8;
            }
        }
    }
}

