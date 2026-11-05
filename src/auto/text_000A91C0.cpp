/* 6 functions from 0x000A91C0 to 0x000A9ED0, found by Ghidra. */
#include "common.h"
extern int D_0027C51C;
extern char D_0027C504[], D_0027C4EC[], D_0027C4DC[], D_002764F0[], D_0027C4D0[];
extern char D_0027C4BC[], D_0027C4AC[], D_0027C49C[], D_0027C494[], D_0027C488[];

/* config file reader */
struct S_A91C0_Reader {
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, int *dst);
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
    void func_00168C50(const char *key, float def, float *dst);
};
struct V4_A91C0 { float x, y, z, w; };
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
void *func_001E8A44(int size);
void *func_001E83E8(void *block, unsigned int size);
V4_A91C0 func_00182980(const char *s);

static inline int a91c0_strlen(const char *s)
{
    const char *p = s;
    while (*p++) {
    }
    return p - s - 1;
}

static inline int a91c0_min(const int &a, const int &b)
{
    return (b < a) ? b : a;
}

struct S_A95D0_b { char pad0[4]; char *f4; };
struct S_A95D0_inner { char pad0[4]; int kind; char pad8[0x19C]; S_A95D0_b *f1A4; };
struct S_A95D0_o { char pad0[0x104]; int n; void **arr; };
struct S_A95D0_list { char pad0[0x24]; int num; void **items; };
struct S_A95D0_arg { char pad0[0x3A8]; S_A95D0_list **f3A8; S_A95D0_list *f3AC; };
struct C_A95D0 {
    char pad0[0x24];
    int num;
    S_A95D0_o **objs;
    void func_000A95D0(S_A95D0_arg *a);
};

struct CCElem { void func_001824E0(float *out, float a, float b, float c); };
struct CCObj {
    char pad0[0x104];
    int n;
    CCElem **elems;
    int count;
    int idx;
    float *r;
    float *g;
    float *b;
    float f120;
    float dur;
    float t;
};
struct GlobalCC { char pad[0x124]; int flag; };
extern GlobalCC *D_002A8490;
struct C_000A9820 {
    char pad0[0x24];
    int num;
    CCObj **objs;
    void func_00157A00(float dt);
    void func_000A9820(float dt);
    void func_000A91C0(S_A91C0_Reader *stream);
};

struct C_00157660 {
    void func_00157660(void);
};

struct S_000A99A0_28 {
    char pad0[0x15C];
    int f15C;
};

struct C_000A99A0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_000A99A0_28 **f28;
    void func_000A99A0(void);
};

struct C_000A9A00 {
    char pad0[0x11C];
    int f11C;
    int f120;
    int f124;
    int f128;
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    int f140;
    int f144;
    int f148;
    int f14C;
    int f150;
    int f154;
    int f158;
    C_000A9A00 *func_000A9A00(void);
};

void C_000A99A0::func_000A99A0(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0027C51C;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f15C);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

C_000A9A00 *C_000A9A00::func_000A9A00(void)
{
    int *p;

    p = &f11C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f12C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f13C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f14C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    return this;
}

