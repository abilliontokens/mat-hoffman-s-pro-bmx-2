/* 4 functions from 0x000D0E00 to 0x000D1AE0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0027EB8C;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000D0 {
    virtual void Destroy(int a0);
};

/* min taking references (so its operands live in stack temporaries), returning the value */
template <class T>
inline T min_ref(const T &a, const T &b)
{
    return b < a ? b : a;
}

/* a record whose name string sits at +0x28 */
struct S_000D1980_Item {
    char pad0[0x28];
    char name[1];
};

struct S_000D1980_Entry {
    int f0;
    int f4;
    S_000D1980_Item *f8;
};

struct S_000D1980_List {
    char pad0[0x24];
    int count;
    S_000D1980_Entry **items;
};

struct S_000D1980_Group {
    char pad0[0x3A8];
    S_000D1980_List **f3A8;
};

struct S_000D1980_Mgr {
    char pad0[0x150];
    S_000D1980_Group *f150;
};

/* the 10 bytes of "marquee08" */
struct S_000D1980_Str10 {
    char c[10];
};

extern S_000D1980_Str10 D_0027ED04;
extern int D_0027ED08;
extern short D_0027ED0C;
char *func_001E8920(char *dst, const char *src, int n);
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

/* BmxUIPageLevelSelection */
struct C_000D0FD0 {
    void *vtbl;
    char pad4[0x120];
    S_000D1980_Mgr *f124;
    char pad128[0x280 - 0x128];
    int f280;
    DelObjC_000D0 *arr284[2];
    int f28C, f290, f294, f298, f29C, f2A0;
    float f2A4;
    int f2A8, f2AC, f2B0, f2B4, f2B8, f2BC, f2C0;
    u8 f2C4;
    char pad2C5[0x3C8 - 0x2C5];
    float f3C8;
    int f3CC;
    int f3D0, f3D4, f3D8, f3DC, f3E0, f3E4;
    int f3E8[8];
    C_001D6410 *unk408;
    int f40C, f410, f414, f418, f41C, f420;
    int f424[10];
    int f44C;
    int f450[8];
    int f470;
    char f474[8];
    char pad47C[0xE9C - 0x47C];
    char fE9C[8];
    char padEA4[0x16BC - 0xEA4];
    char f16BC[8];
    char pad16C4[0x1EDC - 0x16C4];
    S_000D1980_Str10 f1EDC;
    char pad1EE6[0x1FE0 - 0x1EE6];
    int f1FE0, f1FE4, f1FE8, f1FEC;
    int f1FF0[8];
    int f2010, f2014, f2018, f201C, f2020, f2024, f2028, f202C, f2030, f2034, f2038, f203C, f2040;
    DelObjC_000D0 *unk2044;
    char pad2048[0x20B0 - 0x2048];
    S_000D1980_Item *f20B0;
    int f20B4;
    C_000D0FD0 *func_000D0E00(int a);
    void func_001BE360(int a);
    void func_001BE3F0();
    void func_000D0FD0();
    void func_000D1980();
};

C_000D0FD0 *C_000D0FD0::func_000D0E00(int a)
{
    int i;
    func_001BE360(a);
    vtbl = &D_0027EB8C;
    f2A8 = 0;
    f2B8 = 1;
    f418 = 0;
    f2C0 = 1;
    f28C = 0;
    f290 = 0;
    *(int *)&f2A4 = 0;
    f2BC = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2C4 = 0;
    *(int *)&f3C8 = 0;
    f3D0 = 0;
    f3D4 = 0;
    f3D8 = 0;
    f3DC = 0;
    f3E4 = 0;
    f3E0 = 0;
    for (i = 0; i < 8; i++) {
        f3E8[i] = 0;
        f1FF0[i] = 0;
    }
    unk408 = 0;
    f294 = 0;
    for (i = 0; i < 8; i++)
        f450[i] = 0;
    f470 = 0;
    for (i = 0; i < 10; i++)
        f424[i] = 0;
    f44C = 0;
    for (i = 0; i < 8; i++) {
        f474[i] = 0;
        fE9C[i] = 0;
        f16BC[i] = 0;
    }
    f1EDC.c[0] = 0;
    f410 = 1;
    f2AC = 0;
    f414 = 0;
    f1FE0 = 0;
    f1FE4 = 0;
    f1FE8 = 0;
    f1FEC = 0;
    f2B0 = 0;
    f2B4 = 0;
    for (i = 0; i < 2; i++)
        arr284[i] = 0;
    f2010 = 0;
    f203C = 0;
    f2018 = 0;
    f201C = 0;
    f2020 = 0;
    f2024 = 0;
    f2028 = 0;
    f202C = 0;
    f2030 = 0;
    f2034 = 0;
    f2038 = 0;
    f2014 = 0;
    f41C = 0;
    f420 = 0;
    f2040 = 0;
    f20B4 = 0;
    unk2044 = 0;
    f280 = 0;
    return this;
}

void C_000D0FD0::func_000D0FD0()
{
    C_001D6410 *p = unk408;
    vtbl = &D_0027EB8C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
        unk408 = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr284[i] != 0) {
            arr284[i]->Destroy(1);
            arr284[i] = 0;
        }
    }
    if (unk2044 != 0) {
        unk2044->Destroy(1);
        unk2044 = 0;
    }
    func_001BE3F0();
}

void C_000D0FD0::func_000D1980()
{
    char buf[0x104];
    S_000D1980_Mgr *mgr = f124;
    int i;
    volatile int t[2];
    volatile int len;

    f1EDC = D_0027ED04;
    for (i = 0; i < (*mgr->f150->f3A8)->count; (*(volatile int *)&i)++) {
        S_000D1980_Entry *e = (*mgr->f150->f3A8)->items[i];
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
            func_001E8920(buf, (*(S_000D1980_Item * volatile *)&e->f8)->name, n);
            buf[n] = 0;
            char *dot = func_001E8AC0(buf, '.');
            if (dot != 0) {
                memset(dot, 0, strlen(dot));
            }
            if (func_001EA426(buf, f1EDC.c) == 0) {
                f20B0 = e->f8;
            }
        }
    }
}

