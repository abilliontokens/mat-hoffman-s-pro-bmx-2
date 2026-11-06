/* 2 functions from 0x0005C720 to 0x0005D6A0, found by Ghidra. */
#include "common.h"

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
static inline void CopyName_5CBD0(char *dst, const char *src) { int n = MinRef_5CBD0(15, (int)strlen(src)); func_001E8920(dst, src, n); dst[n] = 0; }
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
    volatile int a[8];
    volatile int b[8];
    volatile int c[8];
    volatile int d[8];
    volatile int e[8];
    volatile int f[8];
    char buf[0x104];
    func_001ADCC0(buf, 0x104, D_00275678, D_002A5348, D_00278328);
    if (D_002BEAAC->func_0013B1A0(buf)) {
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
        int *p = this->a;
        int i = 0;
        do {
            int s = e[i] + b[i] + d[i];
            total += s;
            p[-8] = s;
            p[0] = a[i];
            p[8] = c[i];
            p++;
        } while (++i < 8);
    }
}

void func_0005CBD0(void) {}

