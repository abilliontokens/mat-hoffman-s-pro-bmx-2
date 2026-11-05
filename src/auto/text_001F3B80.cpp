/* 26 functions from 0x001F3B80 to 0x001F4B08, found by Ghidra. */
#include "common.h"

extern int D_002AEDA4;
extern void **D_002FB368;
extern int D_002FB36C;
void func_001EB390(int n);
void func_001EB302(int n);
int func_001E9760(void *f);
void func_001E8390(void *p);
int func_001F5059(void *ld, char **end, const char *s, int a, int b, int c, int d);

void func_001F46F0(int a, int b, int c);
short func_001F59DC(int a, void *b);

struct F3Obj {
    char pad_00[0x8];
    int field_8;
    unsigned char field_c;
    char pad_0d[0x3];
};

int func_001F3B80(unsigned char *a, unsigned char *b) {
    unsigned char c1, c2;
    do {
        c1 = *a++;
        c2 = *b++;
        if (c1 != c2) {
            c1 = (unsigned char)(c1 - 'A' + ((c1 - 'A' < 26) ? ('a' - 'A') : 0) + 'A' - 'A');
            c2 = (unsigned char)(c2 - 'A' + ((c2 - 'A' < 26) ? ('a' - 'A') : 0));
            if (c1 != c2) return (c1 > c2) - (c1 < c2);
        }
    } while (c1 != 0);
    return 0;
}

#pragma optimize("y", on)
static void func_001F3BCE(F3Obj *o, int arg, int *cnt);
void func_001F3BF3(int *cnt, int arg, int count, F3Obj *o);
void func_001F3BCE(F3Obj *o, int arg, int *cnt) {
    if ((o->field_c & 0x40) == 0 || o->field_8 != 0) {
        if (func_001F59DC(arg, o) == -1) { *cnt |= -1; return; }
    }
    *cnt += 1;
}
void func_001F3BF3(int *cnt, int arg, int count, F3Obj *o) {
    while (count > 0) {
        count--;
        func_001F3BCE(o, arg, cnt);
        if (*cnt == -1) break;
    }
}
#pragma optimize("", on)
void func_001F44D6(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

int func_001F46F0(...);
#pragma optimize("y", on)
void func_001F4848(int a0, int a1) { func_001F46F0(a0, a1, (int)&D_002AEDA4); }

void func_001F4874(int d, const char *s)
{
    char ld[12];
    char *end;
    func_001F5059(ld, &end, s, 0, 0, 0, 0);
    func_001F4848((int)ld, d);
}

#pragma optimize("", on)
void func_001F4A6D(void) {
    int func_001EB9F3(...);
    func_001EB9F3(2);
}

