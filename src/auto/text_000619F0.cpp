/* 6 functions from 0x00061300 to 0x00062070, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern "C" void *memset(void *dst, int c, unsigned int n);
extern int D_0027850C;
extern int D_002786CC;

extern "C" void func_001E891B(void *);
struct C_61590_Plain {
 ~C_61590_Plain() { func_001D6410(); }
 void func_001D6410();
};
struct C_61590_Obj {
 virtual void destroying(int);
 void func_001D6410();
};
static inline void free_61590(C_61590_Obj *p) {
 if(p) { ((C_61590_Obj *)p)->func_001D6410(); func_001E891B((void *)p); }
}
struct C_00061300 {
    int w[0xBC];
    void func_00157600(int a0);
    void func_00157660();
    ~C_00061300();
    C_00061300 *func_00061300(int a0);
};

extern const char D_0027877C[];

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

struct C_00061B20_74 {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    void func_00030160();
};

struct C_00061B20_44 {
    char pad0[0x74];
    C_00061B20_74 *unk74;
};

extern const char D_0027876C[];
extern const char D_00278758[];
extern const char D_00278744[];
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
char *func_001E8920(char *dst, const char *src, int n);

static inline const int &min_00061300(const int &a, const int &b)
{
    return b < a ? b : a;
}

struct C_00061B20_1C0 {
    int func_000976A0();
};

struct C_00061B20_1D0 {
    char pad0[0x44];
    C_00061B20_44 *unk44;
    char pad48[0x1C0 - 0x48];
    C_00061B20_1C0 *unk1C0;
    void func_00032A40();
};

struct C_000619B0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x168];
    C_00061B20_1D0 *unk1D0;
    char pad1D4[0x44];
    int unk218;
    void func_000619B0(int mode);
    void func_00061B20();
    void func_000619F0(const char *name);
};

extern float D_00278784;
extern float D_002A1D88, D_002A1D8C, D_002A1D90, D_002A1D98, D_002A1D9C, D_002A1DA0;
extern float D_002A1DA8, D_002A1DAC, D_002A1DB0, D_002A1DB8, D_002A1DBC, D_002A1DC0;
extern float D_002A1DD8, D_002A1DDC, D_002A1DE0, D_002A1DE8, D_002A1DEC, D_002A1DF0;
extern float D_002A1DF8, D_002A1DFC, D_002A1E00, D_002A1E08, D_002A1E0C, D_002A1E10;

struct C_00061B80_Obj {
    char pad0[4];
    float f4;
    float f8;
    char pad0c[0x28 - 0xc];
    float f28;
    float f2c;
    char pad30[4];
    int f34;
    char pad38[0x58 - 0x38];
    unsigned char flags;
};

static __forceinline void set_00061B80(C_00061B80_Obj *o, float a, float b, float c, int k)
{
    c *= D_00278784;
    if (o->f4 != a || o->f8 != b) {
        o->f4 = a;
        o->f8 = b;
        o->flags |= 1;
    }
    if (o->f2c != c) {
        o->f2c = c;
        o->flags |= 1;
    }
    if (o->f28 != c) {
        o->f28 = c;
        o->flags |= 1;
    }
    if (o->f34 != k) {
        o->f34 = k;
        o->flags |= 1;
    }
}

#define SET_00061B80(p, a, b, c, k) { \
    float cc = (c) * D_00278784; \
    float bb = (b); \
    C_00061B80_Obj *q = (p); \
    if (q->f4 != (a) || q->f8 != (b)) { \
        q->f4 = (a); \
        q->f8 = bb; \
        q->flags |= 1; \
    } \
    q = (p); \
    if (q->f2c != cc) { \
        q->f2c = cc; \
        q->flags |= 1; \
    } \
    q = (p); \
    if (q->f28 != cc) { \
        q->f28 = cc; \
        q->flags |= 1; \
    } \
    q = (p); \
    if (q->f34 != (k)) { \
        q->f34 = (k); \
        q->flags |= 1; \
    } \
}

struct C_00061B80 {
    char pad0[0x12c];
    C_00061B80_Obj *o12c;
    C_00061B80_Obj *o130;
    C_00061B80_Obj *o134;
    C_00061B80_Obj *o138;
    char pad13c[0x1a4 - 0x13c];
    C_00061B80_Obj *o1a4;
    C_00061B80_Obj *o1a8;
    C_00061B80_Obj *o1ac;
    C_00061B80_Obj *o1b0;
    void func_00061B80();
};

void C_000619B0::func_000619F0(const char *name)
{
    unk1D0->func_00032A40();
    int a0, a1;
    char buf[0x104];
    switch (unk1D0->unk1C0->func_000976A0()) {
    case 0: a1 = 0x103; a0 = AsmMinI((unsigned short)a1, 0x11);
            func_001E8920(buf, (const char *)D_00278744, a0); buf[a0] = 0; break;
    case 1: a1 = 0x103; a0 = AsmMinI(a1, 0x11);
            func_001E8920(buf, (const char *)D_00278758, a0); buf[a0] = 0; break;
    case 2: a0 = 0x103; a1 = AsmMinI(a0, 0xd);
            func_001E8920(buf, (const char *)D_0027876C, a1); buf[a1] = 0; break;
    }
    if (unk1D0->unk44->unk74->func_00030020(buf) != 0)
        if (unk1D0->unk44->unk74->func_000300C0(name) != 0)
            unk1D0->unk44->unk74->func_00030160();
}

