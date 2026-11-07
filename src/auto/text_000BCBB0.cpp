/* 1 function from 0x000BCBB0 to 0x000BDF30, found by Ghidra. */
#include "common.h"
extern char D_002A64D0[];
extern char D_0027DDC4[];
extern char D_0027DDAC[];
extern char D_0027DDA4[];
extern char D_0027DD94[];
extern char D_0027DD8C[];
extern char D_00276980[];
extern char D_0027DD80[];
extern char D_0027DD7C[];
extern char D_0027DD74[];
extern char D_0027DD6C[];
extern char D_0027DD5C[];
extern char D_0027DD4C[];
extern char D_0027DD44[];
extern char D_0027DD34[];
extern char D_0027DD2C[];
extern char D_0027DD20[];
extern char D_0027DD10[];
extern char D_0027DD04[];
extern char D_0027DCF4[];
extern char D_0027DCE8[];
extern char D_0027DCD8[];
extern char D_0027DCCC[];
extern char D_0027DCBC[];
extern char D_0027DCAC[];
extern char D_0027DC9C[];
extern char D_0027DC8C[];
extern char D_0027DC78[];
extern char D_0027DC60[];
extern char D_0027DC48[];
extern char D_0027DC30[];
void *func_001E8A44(unsigned);
int func_001ADCC0(char*, unsigned, const char*, ...);
int func_001EA426(const char*,const char*);
struct Parser_BCBB0 {
Parser_BCBB0 *func_00168280();
void func_00169490(const char*,int);
void func_00169710(const char*);
void func_00168A10(const char*,int*);
void func_00168B90(const char*,float*);
void func_00168550(const char*,char*,int);
void func_00168C50(const char*,int,void*);
};
struct Entry_BCBB0 { char name[0x104]; char pad104[8]; int f10c,f110; char **f114; int *f118; int f11c; int *f120; int f124,f128; int *f12c; char pad130[0x78]; };
struct Item_BCBB0 { char name[0x104]; char pad104[8]; float f10c,f110,f114,f118,f11c; };
struct Loader_BCBB0 {
char pad0[0x27c]; Entry_BCBB0 *f27c; Item_BCBB0 *f280; int f284,f288,f28c,f290,f294; char pad298[12]; int f2a4;
void func_000BCBB0();
};


extern "C" void *_func_001E8A44(int);
extern "C" int _func_001ADCC0(char *, int, const char *, ...);
extern "C" void* _func_001E8A44(int);
extern "C" int _func_001ADCC0(char*, int, const char*, ...);
void _func_000BCBB0(void) {
    char buf[260];
    _func_001ADCC0(buf, 0x104, "%d", 1);
}
