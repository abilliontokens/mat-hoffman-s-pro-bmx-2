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
extern char D_0027DC18[];
void func_001E891B(void*);
struct Progress_BCBB0 { int func_0005C1D0(int); void func_0005C1E0(int); char *func_0005C020(int); void func_0005C170(int,int); void func_0005C1B0(int,int); };
struct Game_BCBB0 { char pad[0x2c0]; Progress_BCBB0 *f2c0; char pad2c4[0x14]; int f2d8; char pad2dc[0x48]; int f324; };
struct Global_BCBB0 { char pad[0x2e0]; Game_BCBB0 *f2e0; };
extern Global_BCBB0 *D_002A8490;
struct Parser_BCBB0 {
void func_001691E0();
Parser_BCBB0 *func_00168280();
void func_00169490(const char*,int);
void func_00169710(const char*);
void func_00168A10(const char*,int*);
void func_00168B90(const char*,float*);
void func_00168550(const char*,char*,int);
void func_00168C50(const char*,int,void*);
};
struct Entry_BCBB0 { char name[0x104]; char pad104[8]; int f10c,f110; char **f114; int *f118; int f11c; int *f120; int f124,f128; int *f12c; float f130[3][5]; float f16c[3][5]; };
static inline Entry_BCBB0 *allocate_entries_BCBB0(int n) {
int *raw=(int*)func_001E8A44(n*0x1a8+4);
if(!raw) return 0;
*raw=n;
Entry_BCBB0 *entries=(Entry_BCBB0*)(raw+1);
Entry_BCBB0 *entry=entries;
for(int i=n-1;i>=0;i--,entry++) { entry->f114=0; entry->f118=0; entry->f120=0; entry->f12c=0; }
return entries;
}
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
