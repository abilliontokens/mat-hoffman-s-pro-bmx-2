/* 1 function from 0x000CEA00 to 0x000CEFC0, found by Ghidra. */
#include "common.h"

struct Sink { void func_000BB3B0(const char* a, const char* b); };
struct Ctl {
    char pad0[0x124]; Sink* sink;
    char pad1[0x48c - 0x128]; int state;
    char pad2[0x5b0 - 0x490]; int flag;
    void func_001BEE50(int a, int b, int c);
    void func_000CEA00(int arg);
};
int func_001BF050(int a);
extern char D_0027D9D8[], D_0027EB24[], D_0027EB44[], D_0027EB38[], D_0027EB18[], D_0027D9A4[], D_0027EB0C[], D_0027EB00[];
extern char D_0027EAF4[], D_0027EAE8[], D_0027EADC[], D_0027EAD0[], D_0027EAC4[], D_0027EAB8[], D_0027EAAC[], D_0027EAA0[], D_0027EA94[];
extern char D_0027EA88[], D_0027EA7C[], D_0027EA70[], D_0027EA64[], D_0027EA58[], D_0027EA4C[], D_0027EA3C[], D_0027EA30[], D_0027EA20[];
extern char D_0027EA10[], D_0027EA00[], D_0027E9F0[], D_0027E9E0[], D_0027E9D4[], D_0027E9C8[], D_0027E9BC[], D_0027E9B0[], D_0027E9A0[];
extern char D_0027E994[], D_0027E984[], D_0027E974[], D_0027E968[], D_0027E958[], D_0027E94C[], D_0027D9CC[], D_0027E940[], D_0027E934[];
extern char D_0027E928[], D_0027E91C[];
