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

/* std::min-like: takes and returns references, so its operands live in stack temporaries */
template <class T>
inline const T &min_ref(const T &a, const T &b)
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
char *func_001E8920(char *dst, const char *src, int n);
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

/* BmxUIPageLevelSelection */
struct C_000D0FD0 {
    void *vtbl;
    char pad4[0x120];
    S_000D1980_Mgr *f124;
    char pad128[0x284 - 0x128];
    DelObjC_000D0 *arr284[2];
    char pad28C[0x17C];
    C_001D6410 *unk408;
    char pad40C[0x1EDC - 0x40C];
    S_000D1980_Str10 f1EDC;
    char pad1EE6[0x2044 - 0x1EE6];
    DelObjC_000D0 *unk2044;
    char pad2048[0x20B0 - 0x2048];
    S_000D1980_Item *f20B0;
    void func_001BE3F0();
    void func_000D0FD0();
    void func_000D1980();
};

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

    f1EDC = D_0027ED04;
    for (i = 0; i < (*mgr->f150->f3A8)->count; i++) {
        S_000D1980_Entry *e = (*mgr->f150->f3A8)->items[i];
        if (e != 0 && e->f4 == 1 && e->f8 != 0) {
            int len = strlen(e->f8->name);
            int n = len < 0x103 ? len : 0x103;
            func_001E8920(buf, e->f8->name, n);
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

