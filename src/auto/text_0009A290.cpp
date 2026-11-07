/* 1 function from 0x0009A290 to 0x0009C770, found by Ghidra. */
#include "common.h"

struct C_0009A290_Obj {
    int func_0013B1A0(char *a);
};

struct C_0009A290 {
    union {
        int w[0x400 / 4];
        struct {
            int f0, f4, f8, fC, f10, f14;
            char pad18[0x194 - 0x18];
            int f194;
            void *f198;
        };
    };
    int func_0009A290(int a1, char *a2, int *a3);
};

struct C_00168280 {
    char pad0[0x4cc];
    C_00168280 *func_00168280();
    int func_00169490(const char *, int);
    void func_00169710(const char *);
    void func_00168A10(const char *, int *);
    void func_00168BE0(const char *, const char *, char *, int);
    void func_00168550(const char *, char *, int);
    void func_00168C20(const char *, int, int *);
};
extern char D_002769F8[], D_0027A9BC[], D_0027A9A8[], D_0027A994[];
extern char D_0027A980[], D_0027A968[], D_00275630[];
extern char D_0027A958[], D_0027A944[], D_0027A934[];
int func_001ADCC0(char *, int, const char *, ...);
int func_001EA426(const char *, const char *);
int func_001E8A44(int);
extern char D_002A5870[];
extern char D_0027A9D0[];
extern C_0009A290_Obj *D_002BEAAC;
extern "C" char *__cdecl strcpy(char *, const char *);
extern "C" char *__cdecl strcat(char *, const char *);
#pragma intrinsic(strcpy)
#pragma intrinsic(strcat)
int C_0009A290::func_0009A290(int a1, char *a2, int *a3)
{
    char buf[0x400];

    f198 = (void *)a1;
    f194 = 0;
    f0 = 0;
    f4 = 0;
    f8 = 0;
    fC = 0;
    f10 = 0;
    f14 = 0;
    strcpy(buf, D_002A5870);
    strcat(buf, a2);
    strcat(buf, D_0027A9D0);
    if (D_002BEAAC->func_0013B1A0(buf) == 0) {
        f194 = 1;
        return (int)this;
    }
    return (int)this;
}
