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
    char padC[0x24 - 0xC]; float f24; float f28; float f2C;
    char pad30[0x3C - 0x30]; float f3C; float f40; float f44; float f48; float f4C; float f50;
    int f54; unsigned char f58;
    void SetF24() { if (f24 != 0.65f) { if (f54 == 0) { f24 = 0.65f; } else { f24 = 0.325f; f58 |= 1; } } }
    void Scale();
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
extern char D_00278638[];
extern char D_00278608[];
extern char D_00279008[];
extern char D_00278FF0[];
extern char D_00279C28[];
extern char D_0027DF38[];
extern char D_00278C0C[];
extern char D_00278BFC[];
extern char D_0027DF24[];
extern char D_0027DF10[];
extern char D_0027DEFC[];
extern char D_0027DEE8[];
extern char D_002A63C8[];
extern int D_0028F5EC;
void *func_001E8A44(unsigned int);
void func_001ADCC0(char *, int, char *, char *, char *);
extern char D_002A60B0[];
extern char D_00275678[];
extern char D_002A5348[];
extern char D_002A5FA8[];
inline void ElemA_BEE::Scale()
{
    f58 |= 4;
    f3C = f4C * D_00278654;
    f40 = f4C * D_00275544;
    f44 = f50 * D_0027653C;
    f48 = f50 * D_00275544;
}
struct LookupBEE {
    void func_0018C780(int, int *, int);
    int *func_0018C160(char *);
};
struct C_BEE30 {
    char pad0[0x24];
    ElemA_BEE *f24; ElemA_BEE *f28; ElemA_BEE *f2C; ElemA_BEE *f30;
    ElemB_BEE *f34; ElemB_BEE *a38[6];
    ElemA_BEE *a50[6]; ElemA_BEE *a68[6];
    ElemB_BEE *b80; ElemB_BEE *b84;
    ElemA_BEE *a88[2]; ElemA_BEE *a90[2];
    void func_000BEE30(void);
};
struct C_000BFB70 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    C_000BFB70 *func_000BFB70(void *param);
};

void C_BEE30::func_000BEE30(void)
{
    void *mem;
    int ids[3];
    int v0, v1, v2;
    int i;
    ids[0] = (int)&D_00278678;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_002786A0;
    ((LookupBEE *)D_002A8490->p2EC)->func_0018C780(3, ids, 0);
    {
        int *r = ((LookupBEE *)D_002A8490->p2EC)->func_0018C160(&D_00278678);
        v0 = r ? *r : 0;
    }
    {
        int *r = ((LookupBEE *)D_002A8490->p2EC)->func_0018C160(&D_00278690);
        v1 = r ? *r : 0;
    }
    {
        int *r = ((LookupBEE *)D_002A8490->p2EC)->func_0018C160(&D_002786A0);
        v2 = r ? *r : 0;
    }
    mem = func_001E8A44(0x64);
    f24 = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    f24->func_001D5810(D_00278658, 0.0f, 0.0f, 0.0f);
    f24->f3C = f24->f4C * D_00278654;
    f24->f58 |= 4;
    f24->f40 = f24->f4C * D_00275544;
    f24->f44 = f24->f50 * D_0027653C;
    f24->f48 = f24->f50 * D_00275544;
    f24->SetF28(640.0f);
    f24->SetF2C(50.0f);
    mem = func_001E8A44(0x64);
    f28 = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    f28->func_001D5810(D_00278658, 0.0f, 199.0f, 0.0f);
    f28->f3C = f28->f4C * D_00278654;
    f28->f58 |= 4;
    f28->f40 = f28->f4C * D_00275544;
    f28->f44 = f28->f50 * D_0027653C;
    f28->f48 = f28->f50 * D_00275544;
    f28->SetF28(640.0f);
    f28->SetF2C(50.0f);
    mem = func_001E8A44(0x64);
    f2C = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    f2C->func_001D5810(D_00278658, 0.0f, 50.0f, 0.0f);
    f2C->SetF28(640.0f);
    f2C->f58 |= 4;
    f2C->f3C = 0.0f;
    f2C->f40 = 5.0f;
    f2C->f44 = 0.0f;
    f2C->f48 = 1.0f;
    mem = func_001E8A44(0x64);
    f30 = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    f30->func_001D5810(D_00278658, 0.0f, 366.0f, 0.0f);
    f30->SetF28(640.0f);
    f30->f58 |= 4;
    f30->f3C = 0.0f;
    f30->f40 = 5.0f;
    f30->f44 = 0.99000001f;
    f30->f48 = 0.0f;
    mem = func_001E8A44(0x60);
    f34 = mem ? ((ElemB_BEE *)mem)->func_001D5E90() : 0;
    f34->func_001D5FA0((void *)v2, &D_00278678, 0x1e, 0);
    f34->SetXY4E(320.0f, 40.0f);
    if (f34->f48 != 0xaaaaaaaa) {
        f34->f48 = (f34->f48 & 0xffaaaaaa) | 0x00aaaaaa;
        f34->f4E |= 8;
    }
    if (f34->f44 != D_0028F5E0) {
        f34->f44 = D_0028F5E0;
        f34->f4E |= 6;
    }
    for (i = 0; i < 6; i++) {
        mem = func_001E8A44(0x60);
        a38[i] = mem ? ((ElemB_BEE *)mem)->func_001D5E90() : 0;
        a38[i]->func_001D5FA0((void *)v1, &D_00278690, 0x1e, 0);
        a38[i]->SetXY4E(530.0f, 393.0f);
        if (a38[i]->f48 != 0xffcccccc) {
            a38[i]->f48 = (a38[i]->f48 & 0xffcccccc) | 0x00cccccc;
            a38[i]->f4E |= 8;
        }
        if (a38[i]->f44 != D_0028F5DC) {
            a38[i]->f44 = D_0028F5DC;
            a38[i]->f4E |= 6;
        }
    }
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    mem = func_001E8A44(0x64);
    a50[0] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a50[0]->func_001D5810(D_00278648, 0.0f, 0.0f, 0.0f);
    a50[0]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a68[0] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a68[0]->func_001D5810(D_00278624, 0.0f, 0.0f, 0.0f);
    a68[0]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a50[1] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a50[1]->func_001D5810(D_00278638, 0.0f, 0.0f, 0.0f);
    a50[1]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a68[1] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a68[1]->func_001D5810(D_00278608, 0.0f, 0.0f, 0.0f);
    a68[1]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a50[2] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a50[2]->func_001D5810(D_00279008, 0.0f, 0.0f, 0.0f);
    a50[2]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a68[2] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a68[2]->func_001D5810(D_00278FF0, 0.0f, 0.0f, 0.0f);
    a68[2]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a50[3] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a50[3]->func_001D5810(D_00279C28, 0.0f, 0.0f, 0.0f);
    a50[3]->SetXY58(491.0f, 388.0f);
    mem = func_001E8A44(0x64);
    a68[3] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a68[3]->func_001D5810(D_0027DF38, 0.0f, 0.0f, 0.0f);
    a68[3]->SetXY58(491.0f, 388.0f);
    {
        int k = 0;
        do { D_002A60B0[k] = D_002A63C8[k]; } while (D_002A63C8[k++] != 0);
    }
    mem = func_001E8A44(0x64);
    a50[4] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a50[4]->func_001D5810(D_00278C0C, 0.0f, 0.0f, 0.0f);
    a50[4]->SetXY58(491.0f, 388.0f);
    a50[4]->SetF24();
    mem = func_001E8A44(0x64);
    a68[4] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a68[4]->func_001D5810(D_00278C0C, 0.0f, 0.0f, 0.0f);
    a68[4]->SetXY58(491.0f, 388.0f);
    a68[4]->SetF24();
    mem = func_001E8A44(0x64);
    a50[5] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a50[5]->func_001D5810(D_00278BFC, 0.0f, 0.0f, 0.0f);
    a50[5]->SetXY58(491.0f, 388.0f);
    a50[5]->SetF24();
    mem = func_001E8A44(0x64);
    a68[5] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a68[5]->func_001D5810(D_00278BFC, 0.0f, 0.0f, 0.0f);
    a68[5]->SetXY58(491.0f, 388.0f);
    a68[5]->SetF24();
    mem = func_001E8A44(0x60);
    b80 = mem ? ((ElemB_BEE *)mem)->func_001D5E90() : 0;
    b80->func_001D5FA0((void *)v0, &D_002786A0, 0x1e, 0);
    b80->SetXY4E(62.0f, 36.0f);
    if (b80->f48 != 0xff7d692a) {
        b80->f48 = (b80->f48 & 0xff7d692a) | 0x007d692a;
        b80->f4E |= 8;
    }
    if (b80->f44 != D_0028F5DC) {
        b80->f44 = D_0028F5DC;
        b80->f4E |= 6;
    }
    mem = func_001E8A44(0x60);
    b84 = mem ? ((ElemB_BEE *)mem)->func_001D5E90() : 0;
    b84->func_001D5FA0((void *)v0, &D_002786A0, 0x1e, 0);
    b84->SetXY4E(579.0f, 36.0f);
    if (b84->f48 != 0xff7d692a) {
        b84->f48 = (b84->f48 & 0xff7d692a) | 0x007d692a;
        b84->f4E |= 8;
    }
    if (b84->f44 != D_0028F5EC) {
        b84->f44 = D_0028F5EC;
        b84->f4E |= 6;
    }
    mem = func_001E8A44(0x64);
    a88[0] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a88[0]->func_001D5810(D_0027DF24, 30.0f, 28.0f, 0.0f);
    mem = func_001E8A44(0x64);
    a88[1] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a88[1]->func_001D5810(D_0027DF10, 577.0f, 28.0f, 0.0f);
    mem = func_001E8A44(0x64);
    a90[0] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a90[0]->func_001D5810(D_0027DEFC, 30.0f, 28.0f, 0.0f);
    mem = func_001E8A44(0x64);
    a90[1] = mem ? ((ElemA_BEE *)mem)->func_001D5760() : 0;
    a90[1]->func_001D5810(D_0027DEE8, 577.0f, 28.0f, 0.0f);
}

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
