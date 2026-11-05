/* 8 functions from 0x000D1AE0 to 0x000D28D0, found by Ghidra. */
#include "common.h"
#include <string.h>

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

/* BmxUIPageLevelSelection */
struct C_000D2080 {
    char pad0[0x124];
    S_000D2080_Mgr *f124;
    char pad128[0x474 - 0x128];
    char names[10][0x104];
    char padE9C[0x2048 - 0xE9C];
    S_000D2080_Item *ptrs[10];
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

void C_000D2080::func_000D2080(void)
{
    char buf[0x104];
    S_000D2080_Mgr *mgr = f124;
    int i;
    int j;
    volatile int t[2];
    volatile int len;

    *(S_000D2080_Str23 *)names[0] = D_0027EEDC;
    *(S_000D2080_Str21 *)names[1] = D_0027EEC4;
    *(S_000D2080_Str21 *)names[2] = D_0027EEAC;
    *(S_000D2080_Str23 *)names[3] = D_0027EE94;
    *(S_000D2080_Str21 *)names[4] = D_0027EE7C;
    *(S_000D2080_Str20 *)names[5] = D_0027EE68;
    *(S_000D2080_Str23 *)names[6] = D_0027EE50;
    *(S_000D2080_Str22 *)names[7] = D_0027EE38;
    *(S_000D2080_Str21 *)names[8] = D_0027EE20;
    *(S_000D2080_Str18 *)names[9] = D_0027EE0C;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < (*mgr->f150->f3A8)->count; (*(volatile int *)&j)++) {
            S_000D2080_Entry *e = (*mgr->f150->f3A8)->items[j];
            if (e != 0 && e->f4 == 1 && e->f8 != 0) {
                len = strlen(e->f8->name);
                t[0] = 0x103;
                int a = t[0];
                int b = len;
                if (a > b) {
                    a = b;
                }
                t[1] = a;
                int n = t[1];
                func_001E8920(buf, (*(S_000D2080_Item * volatile *)&e->f8)->name, n);
                buf[n] = 0;
                char *dot = func_001E8AC0(buf, '.');
                if (dot != 0) {
                    memset(dot, 0, strlen(dot));
                }
                if (func_001EA426(buf, names[i]) == 0) {
                    ptrs[i] = e->f8;
                }
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

void C_000D2860::func_000D2860(void)
{
    C_Obj_D1 *obj = f124;

    obj->f270->func_000BC590();
    obj->f270->func_000BC4C0(32.0f, D_0027ED00 + D_0027DE70);
    obj->f270->func_000BC4A0(1.07f, 0.95f);
    obj->f270->f38 = 1;
    obj->f270->f34 = 0;
}

