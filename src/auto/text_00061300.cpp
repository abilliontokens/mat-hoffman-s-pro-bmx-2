/* 6 functions from 0x00061300 to 0x00062070, found by Ghidra. */
#include "common.h"

extern "C" void *memset(void *dst, int c, unsigned int n);
extern int D_0027850C;
extern int D_002786CC;

extern "C" void func_001E891B(void *);
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

C_00061300 *C_00061300::func_00061300(int a0)
{
    int i;

    func_00157600(0);
    w[0] = (int)&D_0027850C;
    for (i = 0; i < 8; i++) {
        w[9 + i] = 0;
        w[17 + i] = 0;
    }
    w[0] = (int)&D_002786CC;
    w[0x72] = 0;
    w[0x73] = 0;
    w[6] = -1;
    w[0xb1] = 0;
    for (i = 0; i < 6; i++)
        w[0x1b + i] = 0;
    for (i = 0; i < 0xf; i++)
        w[0x21 + i] = 0;
    w[0x71] = 0;
    w[0x74] = 0;
    w[0x19] = 0;
    for (i = 0; i < 2; i++)
        w[0x3f + i] = 0;
    for (i = 0; i < 3; i++) {
        w[0x42 + i] = 0;
        w[0x45 + i] = 0;
        w[0x48 + i] = 0;
    }
    for (i = 0; i < 2; i++) {
        w[0x6d + i] = 0;
        w[0x6f + i] = 0;
    }
    w[0x78] = 0;
    w[0x79] = 0;
    w[0x7a] = 0;
    w[0x75] = 0;
    w[0x76] = 0;
    w[0x77] = 0x3f800000;
    w[0x7b] = 0;
    w[0x80] = 0;
    for (i = 0; i < 4; i++) {
        w[0x4b + i] = 0;
        w[0x69 + i] = 0;
    }
    for (i = 0; i < 0x10; i++)
        w[0x4f + i] = 0;
    w[0xac] = 0;
    w[0x85] = 0;
    w[0x86] = 0;
    w[0x87] = -1;
    w[0x88] = 0;
    w[0x89] = 0;
    w[0x8a] = 0;
    w[0x8b] = 0;
    w[0x8d] = 0;
    w[0x8e] = 0;
    ((unsigned char *)w)[0x23c] = 0xff;
    ((unsigned char *)w)[0x23d] = 0;
    w[0x90] = 0;
    w[0x91] = 0;
    w[0x92] = 0;
    w[0x93] = 0;
    w[0x82] = 0;
    w[0xa5] = 0;
    w[0x94] = 0;
    w[0x95] = 0;
    w[0x96] = 0;
    w[0x97] = 0;
    w[0x98] = 0;
    w[0x99] = 0;
    w[0x9c] = 0;
    w[0x9a] = 0;
    w[0x9b] = 0;
    w[0x9d] = 0;
    w[0x9f] = -1;
    w[0x9e] = 1;
    for (i = 0; i < 5; i++) {
        w[0x5f + i] = 0;
        w[0x64 + i] = 0;
    }
    w[0x7c] = 0;
    w[0xa0] = 0;
    w[0xa1] = 0;
    w[0x8c] = 0;
    w[0xa2] = 0;
    w[0x7d] = 0;
    w[0x7e] = 0;
    w[0x7f] = 0;
    w[0xa3] = 0;
    w[0xa4] = 0;
    w[0x83] = 0;
    w[0x81] = 0;
    w[0x84] = 0;
    w[0xa7] = 0;
    for (i = 0; i < 2; i++)
        w[0xa8 + i] = 0;
    w[0xaa] = 0;
    for (i = 0; i < 5; i++) {
        w[0xb2 + i] = 0;
        w[0xb7 + i] = 0;
    }
    w[0xab] = 0;
    w[0xad] = 0;
    w[0xae] = 0;
    w[0xaf] = 0;
    w[0xb0] = 0;
    return this;
}

void C_000619B0::func_000619B0(int mode)
{
    unk64 = mode;
    if (mode == 2 || mode == 6 || mode == 4 || mode == 5) {
        D_002A8490->f124 = 1;
    } else {
        D_002A8490->f124 = 0;
    }
}

void C_000619B0::func_00061B20()
{
    unk1D0->func_00032A40();
    unk218 = 1;
    if (unk1D0->unk44->unk74->func_00030020(D_0027877C) != 0) {
        if (unk1D0->unk44->unk74->func_000300C0(D_0027877C) != 0) {
            unk1D0->unk44->unk74->func_00030160();
        }
    }
}

