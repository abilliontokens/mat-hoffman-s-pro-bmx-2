/* 8 functions from 0x000D1AE0 to 0x000D28D0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "asm_helpers.h"

/* a record whose name string sits at +0x28 */
struct S_000D2080_Item {
    char pad0[0x28];
    char name[1];
};

struct S_000D2080_Entry {
    int f0;
    int f4;
    S_000D2080_Item *f8;
};

struct S_000D2080_List {
    char pad0[0x24];
    int count;
    S_000D2080_Entry **items;
};

struct S_000D2080_Group {
    char pad0[0x3A8];
    S_000D2080_List **f3A8;
};

struct S_000D2080_Mgr {
    char pad0[0x150];
    S_000D2080_Group *f150;
};

/* the level name strings copied in by func_000D2080 (the size is the string's, with its NUL) */
struct S_000D2080_Str18 { char c[18]; };
struct S_000D2080_Str20 { char c[20]; };
struct S_000D2080_Str21 { char c[21]; };
struct S_000D2080_Str22 { char c[22]; };
struct S_000D2080_Str23 { char c[23]; };

extern S_000D2080_Str23 D_0027EEDC;
extern S_000D2080_Str21 D_0027EEC4;
extern S_000D2080_Str21 D_0027EEAC;
extern S_000D2080_Str23 D_0027EE94;
extern S_000D2080_Str21 D_0027EE7C;
extern S_000D2080_Str20 D_0027EE68;
extern S_000D2080_Str23 D_0027EE50;
extern S_000D2080_Str22 D_0027EE38;
extern S_000D2080_Str21 D_0027EE20;
extern S_000D2080_Str18 D_0027EE0C;

/* min taking references (so its operands live in stack temporaries), returning the value */
template <class T>
inline T min_ref(const T &a, const T &b)
{
    return b < a ? b : a;
}

char *func_001E8920(char *dst, const char *src, int n);
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

struct S_000D1AE0_Str12 { char c[12]; };
struct S_000D1AE0_Str11 { char c[11]; };
struct S_000D1AE0_Str14 { char c[14]; };
struct S_000D1AE0_Str10 { char c[10]; };
struct S_000D1AE0_Str17 { char c[17]; };
struct S_000D1AE0_Str16 { char c[16]; };
struct S_000D1AE0_Str19 { char c[19]; };
struct S_000D1AE0_Str15 { char c[15]; };
extern S_000D1AE0_Str12 D_0027EE00;
extern S_000D1AE0_Str11 D_0027EDF4;
extern S_000D1AE0_Str14 D_0027EDE4;
extern S_000D1AE0_Str12 D_0027EDD8;
extern S_000D1AE0_Str14 D_0027EDC8;
extern S_000D1AE0_Str12 D_0027EDBC;
extern S_000D1AE0_Str10 D_0027EDB0;
extern S_000D1AE0_Str10 D_0027EDA4;
extern S_000D1AE0_Str17 D_0027ED90;
extern S_000D1AE0_Str16 D_0027ED80;
extern S_000D1AE0_Str19 D_0027ED6C;
extern S_000D1AE0_Str17 D_0027ED58;
extern S_000D1AE0_Str19 D_0027ED44;
extern S_000D1AE0_Str17 D_0027ED30;
extern S_000D1AE0_Str15 D_0027ED20;
extern S_000D1AE0_Str15 D_0027ED10;
/* the rest of each name string: the original copies it a dword/word/byte at a time from
   separately named symbols, not as one object */
extern int D_0027EE04, D_0027EE08;
extern int D_0027EDF8;
extern unsigned short D_0027EDFC;
extern unsigned char D_0027EDFE;
extern int D_0027EDE8, D_0027EDEC;
extern unsigned short D_0027EDF0;
extern int D_0027EDDC, D_0027EDE0;
extern int D_0027EDCC, D_0027EDD0;
extern unsigned short D_0027EDD4;
extern int D_0027EDC0, D_0027EDC4;
extern int D_0027EDB4;
extern unsigned short D_0027EDB8;
extern int D_0027EDA8;
extern unsigned short D_0027EDAC;
extern int D_0027ED94, D_0027ED98, D_0027ED9C;
extern unsigned char D_0027EDA0;
extern int D_0027ED84, D_0027ED88, D_0027ED8C;
extern int D_0027ED70, D_0027ED74, D_0027ED78;
extern unsigned short D_0027ED7C;
extern unsigned char D_0027ED7E;
extern int D_0027ED5C, D_0027ED60, D_0027ED64;
extern unsigned char D_0027ED68;
extern int D_0027ED48, D_0027ED4C, D_0027ED50;
extern unsigned short D_0027ED54;
extern unsigned char D_0027ED56;
extern int D_0027ED34, D_0027ED38, D_0027ED3C;
extern unsigned char D_0027ED40;
extern int D_0027ED24, D_0027ED28;
extern unsigned short D_0027ED2C;
extern unsigned char D_0027ED2E;
extern int D_0027ED14, D_0027ED18;
extern unsigned short D_0027ED1C;
extern unsigned char D_0027ED1E;
/* BmxUIPageLevelSelection */
struct C_000D2080 {
    char pad0[0x124];
    S_000D2080_Mgr *f124;
    char pad128[0x474 - 0x128];
    char names[10][0x104];
    char extraNames[16][0x104];
    char pad1EDC[0x2048 - 0x1EDC];
    S_000D2080_Item *ptrs[10];
    S_000D2080_Item *extraPtrs[16];
    void func_000D1AE0(void);
    void func_000D2080(void);
};

struct C_001B17D0 {
    void func_001B17D0(char *s);
};

struct C_5C020Ret_D1 {
    char pad0[4];
    int f4;
    int f8;
    int fC[8 * 3 * 15];
    int f5AC[8];
};

struct C_0005C020 {
    C_5C020Ret_D1 *func_0005C020(int param);
    int func_0005C2F0(int a, int b);
    void func_0005C310(int a, int b);
    void func_0005C130(int a);
};

struct C_Mgr_D25F0 {
    char pad0[0x48];
    int f48;
    char pad4C[0x190 - 0x4C];
    int f190;
    char pad194[0x2C0 - 0x194];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
    int f2DC[8];
};

struct C_000D25F0 {
    char pad0[0x2B8];
    int f2B8;
    char pad2BC[0x3E8 - 0x2BC];
    int f3E8[12];
    int f418;
    char pad41C[0x424 - 0x41C];
    int f424;
    int f428;
    int f42C;
    int f430;
    int f434;
    int f438;
    int f43C;
    int f440;
    int f444;
    int f448;
    char pad44C[0x1FE0 - 0x44C];
    int f1FE0;
    void func_000D25F0(void);
};

struct C_Mgr_D1 {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
    int f2DC[8];
    char pad2FC[0x32C - 0x2FC];
    int f32C[8];
};

struct C_000D23D0 {
    char pad0[0x418];
    int f418;
    char pad41C[0x2030 - 0x41C];
    C_001B17D0 *f2030;
    void func_000D23D0(void);
};

struct C_000D2300 {
    char pad0[0x3E8];
    int f3E8[12];
    int f418;
    char pad41C[0x470 - 0x41C];
    int f470;
    char pad474[0x202C - 0x474];
    C_001B17D0 *f202C;
    int Value(int i);
    void func_000D2300(void);
};

struct C_Root_D1 {
    char pad0[0x2E0];
    C_Mgr_D1 *f2E0;
};

struct C_000D25A0 {
    char pad0[0x2038];
    C_001B17D0 *f2038;
    void func_000D25A0(void);
};

struct C_Inner_D1 {
    char pad0[0x34];
    int f34;
    int f38;
    void func_000BC590(void);
    void func_000BC4C0(float a, float b);
    void func_000BC4A0(float a, float b);
};

struct C_Obj_D1 {
    char pad0[0x270];
    C_Inner_D1 *f270;
};

struct C_000D2860 {
    char pad0[0x124];
    C_Obj_D1 *f124;
    void func_000D2860(void);
};

struct C_Ret_D24B0 {
    char pad0[0x678];
    int f678[0x100];
    char pad_a[0x1318 - 0x678 - 0x400];
    int f1318[0x100];
};
struct C_Mgr_D24B0 {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
    char pad2DC[0x34C - 0x2DC];
    int f34C[8];
    int f36C[8];
};
struct C_000D24B0 {
    char pad0[0x418];
    int f418;
    char pad41C[0x2034 - 0x41C];
    C_001B17D0 *f2034;
    void func_000D24B0(void);
};
extern char D_0027EEFC[];
extern char D_0027EEF4[];
void func_001ADCC0(char *buf, int size, char *fmt, int a, char *s, int b);
extern C_Root_D1 *D_002A8490;
extern int D_00277038;
extern int D_0027A2A8;
extern float D_0027DE70;
extern float D_0027ED00;
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

inline int C_000D2300::Value(int i)
{
    if (*(volatile int *)&f3E8[i] != 0) {
        return 0;
    }
    return D_002A8490->f2E0->f2DC[i];
}

void C_000D2080::func_000D1AE0(void)
{
    C_000D2080 * volatile self = this;
    char buf[0x104];
    S_000D2080_Mgr *mgr = this->f124;
    int off1;
    int poff1;
    int off2;
    int poff2;
    int j;
    volatile int tmp[3];

    *(S_000D1AE0_Str12 *)this->extraNames[0] = D_0027EE00;
    *(S_000D1AE0_Str11 *)self->extraNames[1] = D_0027EDF4;
    *(S_000D1AE0_Str14 *)self->extraNames[2] = D_0027EDE4;
    *(S_000D1AE0_Str12 *)self->extraNames[3] = D_0027EDD8;
    *(S_000D1AE0_Str14 *)self->extraNames[4] = D_0027EDC8;
    *(S_000D1AE0_Str12 *)self->extraNames[5] = D_0027EDBC;
    *(S_000D1AE0_Str10 *)self->extraNames[6] = D_0027EDB0;
    *(S_000D1AE0_Str10 *)self->extraNames[7] = D_0027EDA4;
    poff1 = 0x2070;
    for (off1 = 0xe9c; off1 < 0x16bc; off1 += 0x104) {
        for (j = 0; j < (*mgr->f150->f3A8)->count; j++) {
            S_000D2080_Entry *e = (*mgr->f150->f3A8)->items[j];
            if (e != 0 && e->f4 == 1 && e->f8 != 0) {
                tmp[0] = strlen(e->f8->name);
                tmp[2] = 0x103;
                int a = tmp[2];
                int b = tmp[0];
                tmp[1] = a > b ? b : a;
                int n = tmp[1];
                func_001E8920(buf, (*(S_000D2080_Item * volatile *)&e->f8)->name, n);
                buf[n] = 0;
                char *dot = func_001E8AC0(buf, '.');
                if (dot != 0) {
                    memset(dot, 0, strlen(dot));
                }
                if (func_001EA426(buf, off1 + (char *)self) == 0) {
                    *(S_000D2080_Item **)(poff1 + (char *)self) = e->f8;
                }
            }
        }
        poff1 += 4;
    }
    *(S_000D1AE0_Str17 *)self->extraNames[8] = D_0027ED90;
    *(S_000D1AE0_Str16 *)self->extraNames[9] = D_0027ED80;
    *(S_000D1AE0_Str19 *)self->extraNames[10] = D_0027ED6C;
    *(S_000D1AE0_Str17 *)self->extraNames[11] = D_0027ED58;
    *(S_000D1AE0_Str19 *)self->extraNames[12] = D_0027ED44;
    *(S_000D1AE0_Str17 *)self->extraNames[13] = D_0027ED30;
    *(S_000D1AE0_Str15 *)self->extraNames[14] = D_0027ED20;
    *(S_000D1AE0_Str15 *)self->extraNames[15] = D_0027ED10;
    poff2 = 0x2090;
    for (off2 = 0x16bc; off2 < 0x1edc; off2 += 0x104) {
        for (j = 0; j < (*mgr->f150->f3A8)->count; j++) {
            S_000D2080_Entry *e = (*mgr->f150->f3A8)->items[j];
            if (e != 0 && e->f4 == 1 && e->f8 != 0) {
                tmp[0] = strlen(e->f8->name);
                tmp[2] = 0x103;
                int a = tmp[2];
                int b = tmp[0];
                tmp[1] = a > b ? b : a;
                int n = tmp[1];
                func_001E8920(buf, (*(S_000D2080_Item * volatile *)&e->f8)->name, n);
                buf[n] = 0;
                char *dot = func_001E8AC0(buf, '.');
                if (dot != 0) {
                    memset(dot, 0, strlen(dot));
                }
                if (func_001EA426(buf, off2 + (char *)self) == 0) {
                    *(S_000D2080_Item **)(poff2 + (char *)self) = e->f8;
                }
            }
        }
        poff2 += 4;
    }
}

extern int D_0027EE10, D_0027EE14, D_0027EE18;
extern unsigned short D_0027EE1C;
void C_000D2080::func_000D2080(void)
{
    char buf[0x104];
    int lim;
    S_000D2080_Mgr *mgr = *(S_000D2080_Mgr * volatile *)&f124;
    int n;
    int len;
    int j;
    int off;
    int poff;
    
    *(S_000D2080_Str23 *)names[0] = D_0027EEDC;
    *(S_000D2080_Str21 *)this->names[1] = D_0027EEC4;
    *(S_000D2080_Str21 *)this->names[2] = D_0027EEAC;
    *(S_000D2080_Str23 *)this->names[3] = D_0027EE94;
    *(S_000D2080_Str21 *)this->names[4] = D_0027EE7C;
    *(S_000D2080_Str20 *)this->names[5] = D_0027EE68;
    *(S_000D2080_Str23 *)this->names[6] = D_0027EE50;
    *(S_000D2080_Str22 *)this->names[7] = D_0027EE38;
    *(S_000D2080_Str21 *)this->names[8] = D_0027EE20;
    {
        int *p = (int *)&this->names[9][0];
        p[0] = *(int *)&D_0027EE0C;
        p[1] = D_0027EE10;
        p[2] = D_0027EE14;
        p[3] = D_0027EE18;
        *(unsigned short *)(p + 4) = D_0027EE1C;
    }
    for (poff = 0x2048, off = 0x474; off < 0xE9C; off += 0x104, poff += 4) {
        for (j = 0; j < (*mgr->f150->f3A8)->count; j++) {
            S_000D2080_Entry *e = (*mgr->f150->f3A8)->items[j];
            if (e != 0 && e->f4 == 1 && e->f8 != 0) {
                len = strlen(e->f8->name);
                lim = 0x103;
                n = AsmMinI(lim, len);
                func_001E8920(buf, (*(S_000D2080_Item * volatile *)&e->f8)->name, n);
                buf[n] = 0;
                char *dot = func_001E8AC0(buf, '.');
                if (dot != 0) memset(dot, 0, strlen(dot));
                if (func_001EA426(buf, (char *)this + off) == 0)
                    *(S_000D2080_Item **)((char *)this + poff) = e->f8;
            }
        }
    }
}

void C_000D2300::func_000D2300(void)
{
    char buf[0x14];
    int idx = f418;

    if (idx == 7 && f3E8[7] == 0) {
        if (f470 == 0) {
            f202C->func_001B17D0((char *)&D_0027A2A8);
            return;
        }
        func_001ADCC0(buf, 0x14, (char *)&D_00277038, Value(7));
        f202C->func_001B17D0(buf);
        return;
    }
    func_001ADCC0(buf, 0x14, (char *)&D_00277038, Value(idx));
    f202C->func_001B17D0(buf);
}

void C_000D23D0::func_000D23D0(void)
{
    char buf[0x40];
    int count = 0;
    int i;
    int j;
    int idx;
    int done;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 15; j++) {
            C_Mgr_D1 *mgr = D_002A8490->f2E0;
            if (mgr->f2C0->func_0005C020(mgr->f2D8)->fC[(f418 * 3 + i) * 15 + j] == 1) {
                count++;
            }
        }
    }
    idx = f418;
    done = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f5AC[idx];
    func_001ADCC0(buf, 0x40, D_0027EEF4, count - done, D_0027EEFC, D_002A8490->f2E0->f32C[idx]);
    f2030->func_001B17D0(buf);
}

void C_000D24B0::func_000D24B0(void)
{
    char buf[0x40];
    int a = 0, b = 0, i = 0, total;

    total = ((C_Mgr_D24B0 *)D_002A8490->f2E0)->f36C[f418];
    total += ((C_Mgr_D24B0 *)D_002A8490->f2E0)->f34C[f418];
    for (; i < 100; i++) {
        C_Mgr_D24B0 *mgr = (C_Mgr_D24B0 *)D_002A8490->f2E0;
        C_Ret_D24B0 *r = (C_Ret_D24B0 *)mgr->f2C0->func_0005C020(mgr->f2D8);
        if (r->f1318[f418 * 100 + i] != 0)
            a++;
    }
    for (i = 0; i < 100; i++) {
        C_Mgr_D24B0 *mgr = (C_Mgr_D24B0 *)D_002A8490->f2E0;
        C_Ret_D24B0 *r = (C_Ret_D24B0 *)mgr->f2C0->func_0005C020(mgr->f2D8);
        if (r->f678[f418 * 100 + i] != 0)
            b++;
    }
    func_001ADCC0(buf, 0x40, D_0027EEF4, b + a, D_0027EEFC, total);
    f2034->func_001B17D0(buf);
}

void C_000D25A0::func_000D25A0(void)
{
    char buf[0x40];
    C_Mgr_D1 *mgr = D_002A8490->f2E0;

    func_001ADCC0(buf, 0x40, (char *)&D_00277038,
                  mgr->f2C0->func_0005C020(mgr->f2D8)->f4);
    f2038->func_001B17D0(buf);
}

void C_000D25F0::func_000D25F0(void)
{
    C_Mgr_D25F0 *mgr = (C_Mgr_D25F0 *)D_002A8490->f2E0;
    int before = mgr->f2C0->func_0005C020(mgr->f2D8)->f4;
    int level;
    int x;
    int cost = ((C_Mgr_D25F0 *)D_002A8490->f2E0)->f2DC[f418];

    switch (((C_Mgr_D25F0 *)D_002A8490->f2E0)->f190) {
    case 0: level = 0; goto check;
    case 2: level = 1; goto check;
    case 4: level = 2; goto check;
    case 5: level = 3; goto check;
    case 7: level = 4; goto check;
    case 9: level = 5; goto check;
    case 10: level = 6; goto check;
    case 11: level = 7; goto check;
    case 13: level = 8; goto check;
    case 14: level = 9;
    check:
        if (((C_Mgr_D25F0 *)D_002A8490->f2E0)->f2C0->func_0005C2F0(level, f418) == 0) {
            f1FE0 = 1;
            ((C_Mgr_D25F0 *)D_002A8490->f2E0)->f2C0->func_0005C310(level, f418);
        } else {
            f1FE0 = 0;
        }
        break;
    }
    mgr = (C_Mgr_D25F0 *)D_002A8490->f2E0;
    mgr->f2C0->func_0005C020(mgr->f2D8)->f4 = before - cost;
    ((C_Mgr_D25F0 *)D_002A8490->f2E0)->f2C0->func_0005C130(f418);
    f3E8[f418] = 1;
    x = ((C_Mgr_D25F0 *)D_002A8490->f2E0)->f48 + 1;
    if (x == 5 && f2B8 == 2) f424 = 1;
    else if (x == 2 && f2B8 == 5) f424 = 1;
    else if (x == 2 && f2B8 == 7) f42C = 1;
    else if (x == 7) f42C = 1;
    else if (x == 2) f430 = 1;
    else if (x == 3) {
        if (f2B8 == 2) f430 = 1;
        else if (f2B8 == 5) f428 = 1;
        else f434 = 1;
    }
    else if (x == 5) f428 = 1;
    else if (x == 0) {
        if (f2B8 == 3) f434 = 1;
        else if (f2B8 == 4) f43C = 1;
        else f438 = 1;
    }
    else if (x == 4) {
        if (f2B8 == 0) f43C = 1;
        if (f2B8 == 1) f440 = 1;
        else f444 = 1;
    }
    else if (x == 1) {
        if (f2B8 == 4) f440 = 1;
        else if (f2B8 == 0) f438 = 1;
        else f448 = 1;
    }
    else if (f2B8 == 4) f444 = 1;
    else f448 = 1;
}

void C_000D2860::func_000D2860(void)
{
    C_Obj_D1 *obj = f124;

    obj->f270->func_000BC590();
    obj->f270->func_000BC4C0(32.0f, D_0027ED00 + D_0027DE70);
    obj->f270->func_000BC4A0(1.07f, 0.95f);
    obj->f270->f38 = 1;
    obj->f270->f34 = 0;
}

