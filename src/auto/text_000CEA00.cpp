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
int __stdcall func_001BF050(int a);
extern char D_0027D9D8[], D_0027EB24[], D_0027EB44[], D_0027EB38[], D_0027EB18[], D_0027D9A4[], D_0027EB0C[], D_0027EB00[];
extern char D_0027EAF4[], D_0027EAE8[], D_0027EADC[], D_0027EAD0[], D_0027EAC4[], D_0027EAB8[], D_0027EAAC[], D_0027EAA0[], D_0027EA94[];
extern char D_0027EA88[], D_0027EA7C[], D_0027EA70[], D_0027EA64[], D_0027EA58[], D_0027EA4C[], D_0027EA3C[], D_0027EA30[], D_0027EA20[];
extern char D_0027EA10[], D_0027EA00[], D_0027E9F0[], D_0027E9E0[], D_0027E9D4[], D_0027E9C8[], D_0027E9BC[], D_0027E9B0[], D_0027E9A0[];
extern char D_0027E994[], D_0027E984[], D_0027E974[], D_0027E968[], D_0027E958[], D_0027E94C[], D_0027D9CC[], D_0027E940[], D_0027E934[];
extern char D_0027E928[], D_0027E91C[];

void Ctl::func_000CEA00(int arg)
{
    Sink* sink = this->sink;
    this->flag = 0;
    switch (func_001BF050(1)) {
    case 1:
        func_001BEE50(1, 1, arg);
        if (state == 2) sink->func_000BB3B0(D_0027D9D8, D_0027EB44);
        else if (state == 0xf) sink->func_000BB3B0(D_0027EB24, D_0027EB38);
        else if (state == 3) sink->func_000BB3B0(D_0027EB24, D_0027EB18);
        else if (state == 0x10) sink->func_000BB3B0(D_0027D9D8, D_0027D9A4);
        state = 1;
        break;
    case 2:
        func_001BEE50(1, 2, arg);
        if (state == 1) {
            sink->func_000BB3B0(D_0027D9D8, D_0027EB0C);
            state = 2;
            return;
        }
        if (state == 3) {
            sink->func_000BB3B0(D_0027D9D8, D_0027EB00);
            state = 2;
        }
        break;
    case 3:
        func_001BEE50(1, 3, arg);
        if (state == 2) sink->func_000BB3B0(D_0027D9D8, D_0027EAF4);
        else if (state == 4) sink->func_000BB3B0(D_0027D9D8, D_0027EAE8);
        else if (state == 1) sink->func_000BB3B0(D_0027EB24, D_0027EADC);
        else if (state == 5) sink->func_000BB3B0(D_0027EB24, D_0027EAD0);
        state = 3;
        break;
    case 4:
        func_001BEE50(1, 4, arg);
        if (state == 3) sink->func_000BB3B0(D_0027D9D8, D_0027EAC4);
        else if (state == 5) sink->func_000BB3B0(D_0027D9D8, D_0027EAB8);
        state = 4;
        break;
    case 5:
        func_001BEE50(1, 5, arg);
        if (state == 4) sink->func_000BB3B0(D_0027D9D8, D_0027EAAC);
        else if (state == 6) sink->func_000BB3B0(D_0027D9D8, D_0027EAA0);
        else if (state == 3) sink->func_000BB3B0(D_0027EB24, D_0027EA94);
        state = 5;
        break;
    case 6:
        func_001BEE50(1, 6, arg);
        if (state == 5) sink->func_000BB3B0(D_0027D9D8, D_0027EA88);
        else if (state == 8) sink->func_000BB3B0(D_0027EB24, D_0027EA7C);
        else if (state == 7) sink->func_000BB3B0(D_0027D9D8, D_0027EA70);
        state = 6;
        break;
    case 7:
        func_001BEE50(1, 7, arg);
        if (state == 6) sink->func_000BB3B0(D_0027D9D8, D_0027EA64);
        else if (state == 8) sink->func_000BB3B0(D_0027D9D8, D_0027EA58);
        state = 7;
        break;
    case 8:
        func_001BEE50(1, 8, arg);
        if (state == 6) sink->func_000BB3B0(D_0027EB24, D_0027EA4C);
        else if (state == 0xa) sink->func_000BB3B0(D_0027EB24, D_0027EA3C);
        else if (state == 7) sink->func_000BB3B0(D_0027D9D8, D_0027EA30);
        else if (state == 9) sink->func_000BB3B0(D_0027D9D8, D_0027EA20);
        state = 8;
        break;
    case 9:
        func_001BEE50(1, 9, arg);
        if (state == 8) sink->func_000BB3B0(D_0027D9D8, D_0027EA10);
        else if (state == 0xa) sink->func_000BB3B0(D_0027D9D8, D_0027EA00);
        state = 9;
        break;
    case 10:
        func_001BEE50(1, 10, arg);
        if (state == 9) sink->func_000BB3B0(D_0027D9D8, D_0027E9F0);
        else if (state == 8) sink->func_000BB3B0(D_0027EB24, D_0027E9E0);
        else if (state == 0xb) sink->func_000BB3B0(D_0027D9D8, D_0027E9D4);
        state = 10;
        break;
    case 11:
        func_001BEE50(1, 11, arg);
        if (state == 0xc) sink->func_000BB3B0(D_0027D9D8, D_0027E9C8);
        else if (state == 0xa) sink->func_000BB3B0(D_0027D9D8, D_0027E9BC);
        state = 11;
        break;
    case 12:
        func_001BEE50(1, 12, arg);
        if (state == 0xb) sink->func_000BB3B0(D_0027D9D8, D_0027E9B0);
        else if (state == 0xd) sink->func_000BB3B0(D_0027D9D8, D_0027E9A0);
        else if (state == 0xe) sink->func_000BB3B0(D_0027EB24, D_0027E994);
        state = 12;
        break;
    case 13:
        func_001BEE50(1, 13, arg);
        if (state == 0xc) sink->func_000BB3B0(D_0027D9D8, D_0027E984);
        else if (state == 0xe) sink->func_000BB3B0(D_0027D9D8, D_0027E974);
        state = 13;
        break;
    case 14:
        func_001BEE50(1, 14, arg);
        if (state == 0xf) sink->func_000BB3B0(D_0027D9D8, D_0027E968);
        else if (state == 0xd) sink->func_000BB3B0(D_0027D9D8, D_0027E958);
        else if (state == 0xc) sink->func_000BB3B0(D_0027EB24, D_0027E94C);
        state = 14;
        break;
    case 15:
        func_001BEE50(1, 15, arg);
        if (state == 0xe) sink->func_000BB3B0(D_0027D9D8, D_0027D9CC);
        else if (state == 1) sink->func_000BB3B0(D_0027EB24, D_0027E940);
        else if (state == 0x10) sink->func_000BB3B0(D_0027D9D8, D_0027E934);
        state = 15;
        break;
    case 16:
        func_001BEE50(1, 16, arg);
        if (state == 0xf) sink->func_000BB3B0(D_0027D9D8, D_0027E928);
        else if (state == 1) sink->func_000BB3B0(D_0027D9D8, D_0027E91C);
        state = 16;
        break;
    }
}
