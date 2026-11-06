/* 4 functions from 0x000BEE30 to 0x000BFBA0, found by Ghidra. */
#include "common.h"

extern int D_0027DF54;

struct S_000BF860_elem {
    char pad0[4];
    float x;
    float y;
    char pad0C[0x42];
    unsigned char f4E;
    char pad4F[9];
    unsigned char f58;
    void SetXY58(float nx, float ny)
    {
        if (nx != x || y != ny) {
            x = nx;
            y = ny;
            f58 |= 1;
        }
    }
    void SetXY4E(float nx, float ny)
    {
        if (nx != x || y != ny) {
            x = nx;
            y = ny;
            f4E |= 6;
        }
    }
};

struct C_000BF860 {
    char pad0[0x38];
    S_000BF860_elem *a38[6];
    S_000BF860_elem *a50[6];
    S_000BF860_elem *a68[6];
    void func_000BF860(int idx, int x, int y, int w);
};

struct C_001BE360 {
    void func_001BE360(void *param);
};

struct ClampObj_000BF930 {
    char pad0[0x10];
    float f10;
    float f14;
    void Clamp();
};

extern float D_00275AEC;

inline void ClampObj_000BF930::Clamp()
{
    if (D_00275AEC > f10) *(int *)&f10 = 0x41200000;
    if (D_00275AEC < f14 || f14 > f10) *(int *)&f14 = 0x41200000;
}

struct Elem_000BF930 {
    ClampObj_000BF930 *func_001D5AA0();
};

struct Mid_000BF930 {
    ClampObj_000BF930 *func_0018C070();
};

struct Lookup_000BF930 {
    Mid_000BF930 **func_0018C160(int id);
};

struct Root_000BF930 {
    char pad0[0x2EC];
    Lookup_000BF930 *p2EC;
};

extern Root_000BF930 *D_002A8490;
extern float D_00275AEC;
extern char D_002786A0, D_00278678, D_00278690;

struct BmxUIPageGlobal {
    char pad0[0x2C];
    Elem_000BF930 *f2C;
    Elem_000BF930 *f30;
    char pad34[0x1C];
    Elem_000BF930 *a50[6];
    Elem_000BF930 *a68[6];
    char pad80[8];
    Elem_000BF930 *a88[2];
    Elem_000BF930 *a90[2];
    void func_000BF930(void);
    void func_000BEE30(void);
    void func_001578D0(void);
};

struct ElemA_BEE {
    char pad0[4]; float x; float y;
    char padC[0x28 - 0xC]; float f28; float f2C;
    char pad30[0x3C - 0x30]; float f3C; float f40; float f44; float f48; float f4C; float f50;
    char pad54[4]; unsigned char f58;
    ElemA_BEE *func_001D5760();
    void func_001D5810(char *name, float a, float b, float c);
    void SetXY58(float nx, float ny) { if (nx != x || y != ny) { x = nx; y = ny; f58 |= 1; } }
    void SetF28(float v) { if (f28 != v) { f28 = v; f58 |= 1; } }
    void SetF2C(float v) { if (f2C != v) { f2C = v; f58 |= 1; } }
};
struct ElemB_BEE {
    char pad0[4]; float x; float y;
    char padC[0x44 - 0xC]; int f44; int f48;
    char pad4C[2]; unsigned char f4E;
    ElemB_BEE *func_001D5E90();
    void func_001D5FA0(void *a, char *name, int n, int b);
    void SetXY4E(float nx, float ny) { if (nx != x || y != ny) { x = nx; y = ny; f4E |= 6; } }
};
extern float D_00278654;
extern float D_0027653C;
extern float D_00275544;
extern int D_0028F5E0;
extern int D_0028F5DC;
extern char D_00278658[];
extern char D_00278648[];
extern char D_00278624[];
void *func_001E8A44(unsigned int);
void func_001ADCC0(char *, int, char *, char *, char *);
extern char D_002A60B0[];
extern char D_00275678[];
extern char D_002A5348[];
extern char D_002A5FA8[];
struct LookupBEE {
    void func_0018C780(int, int *, int);
    int *func_0018C160(char *);
};
struct C_BEE30 {
    char pad0[0x24];
    ElemA_BEE *f24; ElemA_BEE *f28; ElemA_BEE *f2C; ElemA_BEE *f30;
    ElemB_BEE *f34; ElemB_BEE *a38[6];
    ElemA_BEE *a50[6]; ElemA_BEE *a68[6];
    void func_000BEE30(void);
};
struct C_000BFB70 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    C_000BFB70 *func_000BFB70(void *param);
};

void C_000BF860::func_000BF860(int idx, int x, int y, int w)
{
    S_000BF860_elem *e = a50[idx];
    int s;

    e->SetXY58((float)x, (float)y);
    e = a68[idx];
    e->SetXY58((float)x, (float)y);
    s = w + x;
    e = a38[idx];
    e->SetXY4E((float)(s + 0x27), (float)(y + 5));
}

void BmxUIPageGlobal::func_000BF930(void)
{
    int ids[3];
    int i;
    Mid_000BF930 **r;
    Elem_000BF930 **e;
    Lookup_000BF930 *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278678;
    ids[2] = (int)&D_00278690;
    f2C->func_001D5AA0()->Clamp();
    f30->func_001D5AA0()->Clamp();
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0)
            (*r)->func_0018C070()->Clamp();
    }
    e = a68;
    i = 6;
    do {
        e[-6]->func_001D5AA0()->Clamp();
        (*e)->func_001D5AA0()->Clamp();
        e++;
        i--;
    } while (i != 0);
    e = a90;
    i = 2;
    do {
        e[-2]->func_001D5AA0()->Clamp();
        (*e)->func_001D5AA0()->Clamp();
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

C_000BFB70 *C_000BFB70::func_000BFB70(void *param)
{
    ((C_001BE360 *)this)->func_001BE360(param);
    f280 = 0;
    f284 = 0;
    vtbl = (void *)&D_0027DF54;
    return this;
}
