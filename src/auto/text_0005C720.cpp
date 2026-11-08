/* 2 functions from 0x0005C720 to 0x0005D6A0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern char D_00278424[], D_0027841C[], D_00278414[], D_0027840C[], D_00278404[];
extern char D_00278400[], D_002783F8[], D_002783F0[], D_002783E8[], D_002783E0[];
extern char D_002783D8[], D_002783D0[], D_002783C8[], D_002783C0[], D_002783B8[];
extern char D_002783B0[], D_002783A4[], D_002783A0[], D_00278398[], D_00278390[];
extern char D_00278388[], D_00278380[], D_00278378[], D_00278370[], D_00278368[];
extern char D_00278360[], D_00278358[], D_00278352[], D_0027834A[], D_00278344[];
extern char D_0001E6E0[], D_00013B3C[], D_0003D860[], D_00024B80[], D_0001A838[], D_00013A1A[];

struct IniFile_5C720 {
    IniFile_5C720 *func_00168280(void);
    void func_001691E0(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168A10(const char *key, int *out);
};
extern char D_00278328[];
extern char D_002A5348[];
extern char D_00275678[];
extern char D_00278244[];
extern char D_00278234[];
extern char D_00278228[];
extern char D_0027821C[];
extern char D_00278210[];
extern char D_00278204[];
extern char D_002781FC[];
extern char D_002781F4[];
extern char D_00278310[];
extern char D_002782F8[];
extern char D_002782E0[];
extern char D_002782C8[];
extern char D_002782BC[];
extern char D_002782B4[];

template <class T> inline const T &MinRef_5CBD0(const T &a, const T &b) { return b < a ? b : a; }
extern "C" unsigned int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);
static inline void CopyName_5CBD0(char *dst, const char *src, int len, int n = 15) { int k = AsmMinI(n, len); func_001E8920(dst, src, k); dst[k] = 0; }
struct S_5CBD0_GroupF { float s[5]; char n[5][16]; };
struct S_5CBD0_GroupI { int s[5]; char n[5][16]; };
struct C_0005CBD0 {
    S_5CBD0_GroupF g0; S_5CBD0_GroupF g1; S_5CBD0_GroupF g2;
    S_5CBD0_GroupI g3; S_5CBD0_GroupI g4; S_5CBD0_GroupI g5;
    int f258; int f25C; int f260; int f264; int f268; int f26C;
    char pad270[0xCD0 - 0x270];
    short fCD0;
    char padCD2[0x30 - 2];
    int fD00[0x40];
    void func_0005CBD0();
    void func_0005C3A0(int a);
};
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);

struct C_0005C720_Ini {
    C_0005C720_Ini *func_00168280(void);
    void func_001691E0(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168A10(const char *key, volatile int *out);
};

struct C_0005C720_Files {
    int func_0013B1A0(const char *key);
};
extern C_0005C720_Files *D_002BEAAC;

struct C_0005C720 {
    char pad0[0x328];
    int total;
    int sums[8];
    int a[8];
    int c[8];
    void func_0005C720(void);
};

void C_0005C720::func_0005C720(void)
{
    int a[8];
    int b[8];
    int c[8];
    int d[8];
    int e[8];
    int f[8];
    char buf[0x104];
    func_001ADCC0(buf, 0x104, D_00275678, D_002A5348, D_00278328);
    if (D_002BEAAC->func_0013B1A0(buf)) {
        int i;
        void *mem = func_001E8A44(0x4cc);
        C_0005C720_Ini *ini = mem ? ((C_0005C720_Ini *)mem)->func_00168280() : 0;
        ini->func_00169490(buf, 0);
        ini->func_00169710(D_00278244);
        ini->func_00168A10(D_00278310, &d[0]);
        ini->func_00168A10(D_002782F8, &e[0]);
        ini->func_00168A10(D_002782E0, &b[0]);
        ini->func_00168A10(D_002782C8, &f[0]);
        ini->func_00168A10(D_002782BC, &c[0]);
        ini->func_00168A10(D_002782B4, &a[0]);
        ini->func_00169710(D_00278234);
        ini->func_00168A10(D_00278310, &d[1]);
        ini->func_00168A10(D_002782F8, &e[1]);
        ini->func_00168A10(D_002782E0, &b[1]);
        ini->func_00168A10(D_002782C8, &f[1]);
        ini->func_00168A10(D_002782BC, &c[1]);
        ini->func_00168A10(D_002782B4, &a[1]);
        ini->func_00169710(D_00278228);
        ini->func_00168A10(D_00278310, &d[2]);
        ini->func_00168A10(D_002782F8, &e[2]);
        ini->func_00168A10(D_002782E0, &b[2]);
        ini->func_00168A10(D_002782C8, &f[2]);
        ini->func_00168A10(D_002782BC, &c[2]);
        ini->func_00168A10(D_002782B4, &a[2]);
        ini->func_00169710(D_0027821C);
        ini->func_00168A10(D_00278310, &d[3]);
        ini->func_00168A10(D_002782F8, &e[3]);
        ini->func_00168A10(D_002782E0, &b[3]);
        ini->func_00168A10(D_002782C8, &f[3]);
        ini->func_00168A10(D_002782BC, &c[3]);
        ini->func_00168A10(D_002782B4, &a[3]);
        ini->func_00169710(D_00278210);
        ini->func_00168A10(D_00278310, &d[4]);
        ini->func_00168A10(D_002782F8, &e[4]);
        ini->func_00168A10(D_002782E0, &b[4]);
        ini->func_00168A10(D_002782C8, &f[4]);
        ini->func_00168A10(D_002782BC, &c[4]);
        ini->func_00168A10(D_002782B4, &a[4]);
        ini->func_00169710(D_00278204);
        ini->func_00168A10(D_00278310, &d[5]);
        ini->func_00168A10(D_002782F8, &e[5]);
        ini->func_00168A10(D_002782E0, &b[5]);
        ini->func_00168A10(D_002782C8, &f[5]);
        ini->func_00168A10(D_002782BC, &c[5]);
        ini->func_00168A10(D_002782B4, &a[5]);
        ini->func_00169710(D_002781FC);
        ini->func_00168A10(D_00278310, &d[6]);
        ini->func_00168A10(D_002782F8, &e[6]);
        ini->func_00168A10(D_002782E0, &b[6]);
        ini->func_00168A10(D_002782C8, &f[6]);
        ini->func_00168A10(D_002782BC, &c[6]);
        ini->func_00168A10(D_002782B4, &a[6]);
        ini->func_00169710(D_002781F4);
        ini->func_00168A10(D_00278310, &d[7]);
        ini->func_00168A10(D_002782F8, &e[7]);
        ini->func_00168A10(D_002782E0, &b[7]);
        ini->func_00168A10(D_002782C8, &f[7]);
        ini->func_00168A10(D_002782BC, &c[7]);
        ini->func_00168A10(D_002782B4, &a[7]);
        if (ini) {
            ini->func_001691E0();
            func_001E891B(ini);
        }
        total = 0;
        i = 0;
        do {
            total += e[i] + b[i] + d[i];
            sums[i] = e[i] + b[i] + d[i];
            this->a[i] = a[i];
            this->c[i] = c[i];
        } while (++i < 8);
    }
}

void C_0005CBD0::func_0005CBD0()
{
    *(int *)&g0.s[0] = 0x4283999a;
    {
        int lim = 15;
        int n = AsmMinI(lim, 5);
        func_001E8920(g0.n[0], D_00278424, n); g0.n[0][n] = 0;
    }
    *(int *)&g0.s[1] = 0x425ccccd;
    {
        int lim = 15;
        int n = AsmMinI(lim, 4);
        func_001E8920(g0.n[1], D_0027841C, n); g0.n[1][n] = 0;
    }
    *(int *)&g0.s[2] = 0x42493333;
    {
        int lim = 15;
        int n = AsmMinI(lim, 4);
        func_001E8920(g0.n[2], D_00278414, n); g0.n[2][n] = 0;
    }
    *(int *)&g0.s[3] = 0x4237999a;
    {
        int lim = 15;
        int n = AsmMinI(lim, 5);
        func_001E8920(g0.n[3], D_0027840C, n); g0.n[3][n] = 0;
    }
    *(int *)&g0.s[4] = 0x42226666;
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(g0.n[4], D_00278404, n); g0.n[4][n] = 0;
    }
    *(int *)&g1.s[0] = 0x426f3333;
    {
        int lim = 15;
        int n = AsmMinI(lim, 3);
        func_001E8920(g1.n[0], D_00278400, n); g1.n[0][n] = 0;
    }
    *(int *)&g1.s[1] = 0x4243999a;
    {
        int lim = 15;
        int n = AsmMinI(lim, 4);
        func_001E8920(g1.n[1], D_002783F8, n); g1.n[1][n] = 0;
    }
    *(int *)&g1.s[2] = 0x422a6666;
    {
        int lim = 15;
        int n = AsmMinI(lim, 5);
        func_001E8920(g1.n[2], D_002783F0, n); g1.n[2][n] = 0;
    }
    *(int *)&g1.s[3] = 0x421b3333;
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(g1.n[3], D_002783E8, n); g1.n[3][n] = 0;
    }
    *(int *)&g1.s[4] = 0x42013333;
    {
        int lim = 15;
        int n = AsmMinI(lim, 4);
        func_001E8920(g1.n[4], D_002783E0, n); g1.n[4][n] = 0;
    }
    *(int *)&g2.s[0] = 0x43fa0000;
    {
        int lim = 15;
        int n = AsmMinI(lim, 5);
        func_001E8920(g2.n[0], D_002783D8, n); g2.n[0][n] = 0;
    }
    *(int *)&g2.s[1] = 0x43e14000;
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(g2.n[1], D_002783D0, n); g2.n[1][n] = 0;
    }
    *(int *)&g2.s[2] = 0x43c8199a;
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(g2.n[2], D_002783C8, n); g2.n[2][n] = 0;
    }
    *(int *)&g2.s[3] = 0x43af7333;
    {
        int lim = 15;
        int n = AsmMinI(lim, 4);
        func_001E8920(g2.n[3], D_002783C0, n); g2.n[3][n] = 0;
    }
    *(int *)&g2.s[4] = 0x43964ccd;
    {
        int lim = 15;
        int n = AsmMinI(lim, 7);
        func_001E8920(g2.n[4], D_002783B8, n); g2.n[4][n] = 0;
    }
    g4.s[0] = (int)D_0001E6E0;
    {
        int lim = 15;
        int n = AsmMinI(lim, 5);
        func_001E8920(g4.n[0], D_002783B0, n); g4.n[0][n] = 0;
    }
    g4.s[1] = (int)D_00013B3C;
    {
        int lim = 15;
        int n = AsmMinI(lim, 8);
        func_001E8920(g4.n[1], D_002783A4, n); g4.n[1][n] = 0;
    }
    g4.s[2] = 0xb3b0;
    {
        int lim = 15;
        int n = AsmMinI(lim, 3);
        func_001E8920(g4.n[2], D_002783A0, n); g4.n[2][n] = 0;
    }
    g4.s[3] = 0x5014;
    {
        int lim = 15;
        int n = AsmMinI(lim, 7);
        func_001E8920(g4.n[3], D_00278398, n); g4.n[3][n] = 0;
    }
    g4.s[4] = 0x2a94;
    {
        int lim = 15;
        int n = AsmMinI(lim, 4);
        func_001E8920(g4.n[4], D_00278390, n); g4.n[4][n] = 0;
    }
    {
        int c67a = 0xc67a;
        g3.s[0] = (int)D_0003D860;
        {
            int lim = 15;
            int n = AsmMinI(lim, 6);
            func_001E8920(g3.n[0], D_00278388, n); g3.n[0][n] = 0;
        }
        g3.s[1] = (int)D_00024B80;
        {
            int lim = 15;
            int n = AsmMinI(lim, 4);
            func_001E8920(g3.n[1], D_00278380, n); g3.n[1][n] = 0;
        }
        g3.s[2] = (int)D_0001A838;
        {
            int lim = 15;
            int n = AsmMinI(lim, 4);
            func_001E8920(g3.n[2], D_00278378, n); g3.n[2][n] = 0;
        }
        g3.s[3] = (int)D_00013A1A;
        {
            int lim = 15;
            int n = AsmMinI(lim, 6);
            func_001E8920(g3.n[3], D_00278370, n); g3.n[3][n] = 0;
        }
        g3.s[4] = c67a;
        {
            int lim = 15;
            int n = AsmMinI(lim, 7);
            func_001E8920(g3.n[4], D_00278368, n); g3.n[4][n] = 0;
        }
        g5.s[0] = (int)D_0003D860;
        {
            int lim = 15;
            int n = AsmMinI(lim, 7);
            func_001E8920(g5.n[0], D_00278360, n); g5.n[0][n] = 0;
        }
        g5.s[1] = (int)D_00024B80;
        {
            int lim = 15;
            int n = AsmMinI(lim, 5);
            func_001E8920(g5.n[1], D_00278358, n); g5.n[1][n] = 0;
        }
        g5.s[2] = (int)D_0001A838;
        {
            int lim = 15;
            int n = AsmMinI(lim, 3);
            func_001E8920(g5.n[2], D_00278352, n); g5.n[2][n] = 0;
        }
        g5.s[3] = (int)D_00013A1A;
        {
            int lim = 15;
            int n = AsmMinI(lim, 4);
            func_001E8920(g5.n[3], D_0027834A, n); g5.n[3][n] = 0;
        }
        g5.s[4] = c67a;
        {
            int lim = 15;
            int n = AsmMinI(lim, 5);
            func_001E8920(g5.n[4], D_00278344, n); g5.n[4][n] = 0;
        }
    }
    f258 = 50; f25C = 100; f260 = 2; f264 = 1; f268 = 1; f26C = 0;
    fCD0 = 0x20;
    int i, j;
    for (i = 0; i < 0x90; i += 8) {
        *(int *)((char *)this + 0xCF0 + i) = 1;
        *(int *)((char *)this + 0xCF4 + i) = (i >= 0x60) ? 1 : 0;
    }
    for (i = 0x270; i < 0x810; i += 4)
        *(int *)((char *)this + i) = 0;
    for (i = 0; i < 16; i++) {
        *(int *)((char *)this + 0xA10 + i * 12) = 1;
        *(int *)((char *)this + 0xA14 + i * 12) = 0;
        *(int *)((char *)this + 0xA18 + i * 12) = 0;
    }
    for (i = 0xAD0; i < 0xB10; i += 4)
        *(int *)((char *)this + i) = 0;
    for (i = 0xB58; i < 0xCC0; i += 4)
        *(int *)((char *)this + i) = 0;
    *(int *)((char *)this + 0xCC0) = 1;
    *(int *)((char *)this + 0xCC4) = 0;
    *(int *)((char *)this + 0xCC8) = 0;
    *(int *)((char *)this + 0xCCC) = 1;
    for (i = 0xB10; i < 0xB30; i += 4)
        *(int *)((char *)this + i) = 0;
    *(int *)((char *)this + 0xB30) = 0;
    *(int *)((char *)this + 0xB34) = 0;
    for (i = 0; i < 16; i++) {
        *(int *)((char *)this + 0x810 + i * 32) = 1;
        for (j = 1; j < 8; j++)
            *(int *)((char *)this + 0x810 + i * 32 + j * 4) = 0;
    }
    *(int *)((char *)this + 0xB38) = 1;
    for (i = 1; i < 8; i++)
        *(int *)((char *)this + 0xB38 + i * 4) = 0;
    *(int *)((char *)this + 0xCE0) = 0;
    *(int *)((char *)this + 0xCE4) = 0;
    *(int *)((char *)this + 0xCEC) = 0;
    func_0005C3A0(-1);
}

