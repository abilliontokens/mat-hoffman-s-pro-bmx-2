/* 2 functions from 0x00151130 to 0x00151F80, found by Ghidra. */
#include "common.h"
#include <string.h>
extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
#pragma intrinsic(cos, sin)

struct V4_151130 {
    float x, y, z, w;
    V4_151130() { x = y = z = 0.0f; w = 1.0f; }
    V4_151130(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    V4_151130(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    __forceinline void Copy(const V4_151130 &v) {
        ((int *)this)[0] = ((const volatile int *)&v)[0];
        ((int *)this)[1] = ((const volatile int *)&v)[1];
        ((int *)this)[2] = ((const volatile int *)&v)[2];
        ((int *)this)[3] = ((const volatile int *)&v)[3];
    }
};
struct VBase_151130 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual int Load(const char *, int, int);
};
struct Obj3C_151130 {
    Obj3C_151130 *func_001362A0(float, float, float, int, int, float);
};
struct Ent_151130 {
    void func_0015B060(Obj3C_151130 *, float, float);
};
struct Reg_151130 {
    char pad0[0x14];
    Ent_151130 *ents[1];
    int func_00135E80(void);
};
struct FB4_151130;
struct F2E0_151130;
struct G8490_151130 {
    char pad0[4];
    FB4_151130 *f4;
    Reg_151130 *f8;
    char padC[4];
    int f10;
    char pad14[0x2e0 - 0x14];
    F2E0_151130 *f2e0;
};
struct Node_151130 : VBase_151130 {
    Node_151130 *func_00143580(int);
    void func_00199600(V4_151130 v);
    void func_00198F50(V4_151130 *, V4_151130 *, int, int, int);
    void func_0019ABA0(int, int);
    void func_00198390(void);
};
struct Obj218_151130 : VBase_151130 {
    Obj218_151130 *func_0016CE80(int);
    void func_0016CF10(void *, const char *, int, int);
};
struct Obj250_151130 : VBase_151130 {
    Obj250_151130 *func_0016ABE0(int);
    void func_0016AD20(void *, const char *, int, int);
};
struct Obj230_151130 : VBase_151130 {
    Obj230_151130 *func_0016D620(int);
    void func_0016D6A0(void *, const char *, int, int);
};
struct Slot_151130 {
    Node_151130 *f0;
    char pad4[0x50];
    Obj218_151130 *f54;
    Obj218_151130 *f58;
    Obj250_151130 *f5C;
};
struct ObjFC_151130 {
    char pad0[0x60];
    void *f60;
    char pad64[0x9c - 0x64];
    void *f9C;
    char padA0[7];
    unsigned char fA7;
    ObjFC_151130 *func_0017F050(int);
    void func_0017F0A0(int);
    void func_00180E00(int, V4_151130 *, int, void *);
    void func_001334E0(int);
    void func_00133ED0(void);
    void func_00133140(void *, int);
};
struct ObjF8_151130 {
    char pad0[0x60];
    void *f60;
    char pad64[0x9c - 0x64];
    void *f9C;
    char padA0[7];
    unsigned char fA7;
    ObjF8_151130 *func_0014AB30(int);
    void func_00129920(int);
    void func_001334E0(int);
    void func_0014C1C0(int, int, int);
    void func_0014AC30(V4_151130 *, int);
    void func_00133ED0(void);
};
struct Mid_151130 {
    char pad0[4];
    void *f4;
};
struct Cam_151130 {
    char pad0[0x1a4];
    Mid_151130 *f1a4;
};
struct Obj20C_151130 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(const char *, int, int, int, int);
    Obj20C_151130 *func_001CF740(void *, void *, int);
};
struct FB4_151130 {
    char pad0[0xb4];
    void *fB4;
};
struct F2E0_151130 {
    int f0;
};
struct G9120_151130 {
    char pad0[0x4a8];
    int *f4A8;
    int *f4AC;
    char pad4B0[0x4c0 - 0x4b0];
    void *f4C0;
};
static __forceinline void Scale_151130(V4_151130 *v, float s)
{
    v->x *= s;
    v->y *= s;
    v->z *= s;
}
struct Obj829C_151130 {
    void func_00161680(void);
};
struct ObjA6C0_151130 {
    void func_001B2640(void);
};
extern G8490_151130 *D_002A8490;
extern G9120_151130 *D_002B9120;
extern Obj829C_151130 *D_002A829C;
extern ObjA6C0_151130 *D_002AA6C0;
extern V4_151130 D_002A789C, D_002A78BC, D_002A78CC;
extern float D_002A78A0, D_002A78A4, D_002A78A8;
extern float D_00283E00, D_002756BC;
extern char D_002A5EA0[];
extern char D_00286C90[];
extern char D_00286C80[], D_00286C70[], D_00286C60[], D_00286C4C[], D_0027592C[];
extern char D_00150BA0;
extern char D_00286C3C[], D_00286C2C[], D_00286C20[], D_002758E4[], D_00286C14[];
extern char D_00286C08[], D_00286BFC[], D_00286BEC[], D_00286BDC[], D_002758F0[];
extern char D_00275678[], D_002A5870[], D_002A5348[], D_002A47F0[], D_002A48F8[];
void func_00150970(void);
void func_00150A80(void);
void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00151130 {
    char pad0[0x24];
    int f24;
    int f28;
    Cam_151130 *f2C;
    int f30;
    char pad34[4];
    Obj3C_151130 *f38;
    Obj3C_151130 *f3C;
    Obj3C_151130 *f40;
    Obj3C_151130 *f44;
    char pad48[0x60 - 0x48];
    ObjFC_151130 *f60;
    char pad64[0x78 - 0x64];
    ObjF8_151130 *f78;
    ObjFC_151130 *f7C;
    ObjF8_151130 *f80;
    char pad84[0xe0 - 0x84];
    Obj230_151130 *fe0;
    char pade4[0x150 - 0xe4];
    Slot_151130 slots[11];
    char pad570[0x598 - 0x570];
    Obj20C_151130 *f598;
    Obj20C_151130 *f59C;
    Obj20C_151130 *f5A0;
    Obj20C_151130 *f5A4;
    Obj20C_151130 *f5A8[4];
    Obj20C_151130 *f5B8[2];
    Obj20C_151130 *f5C0;
    void func_001577A0(void *, int);
    void func_00151130(int a, Cam_151130 *b, void *c);
};
struct C_00151F40 {
    int func_00151F40(void);
};
struct C_00198390 {
    void func_00198390(void);
};
struct C_001983A0 {
    void func_001983A0(void);
};

void C_00151130::func_00151130(int a, Cam_151130 *b, void *c)
{
    char saved[0x104];
    char buf[0x104];
    int i;
    void *mem;

    f30 = a;
    f2C = b;
    mem = func_001E8A44(0x3c);
    f38 = mem ? ((Obj3C_151130 *)mem)->func_001362A0(-1.0f, 1.0f, 0.0f, D_002A8490->f8->func_00135E80(), 2, 0.2f) : 0;
    mem = func_001E8A44(0x3c);
    f3C = mem ? ((Obj3C_151130 *)mem)->func_001362A0(-1.0f, 1.0f, 0.0f, D_002A8490->f8->func_00135E80(), 5, 0.3f) : 0;
    if (D_002A8490->f8->ents[f28] != 0) {
        D_002A8490->f8->ents[f28]->func_0015B060(f38, 0.01f, 0.01f);
        D_002A8490->f8->ents[f28]->func_0015B060(f3C, 0.01f, 0.01f);
    }
    mem = func_001E8A44(0x3c);
    f40 = mem ? ((Obj3C_151130 *)mem)->func_001362A0(-1.0f, 1.0f, 0.0f, D_002A8490->f8->func_00135E80(), 1, 0.15f) : 0;
    mem = func_001E8A44(0x3c);
    f44 = mem ? ((Obj3C_151130 *)mem)->func_001362A0(-1.0f, 1.0f, 0.0f, D_002A8490->f8->func_00135E80(), 0, 0.15f) : 0;
    if (D_002A8490->f8->ents[f28] != 0) {
        D_002A8490->f8->ents[f28]->func_0015B060(f40, 0.01f, 0.01f);
        D_002A8490->f8->ents[f28]->func_0015B060(f44, 0.01f, 0.01f);
    }
    V4_151130 pts[36];
    for (i = 0; i < 16; i++) {
        pts[i * 2] = D_002A789C;
        pts[i * 2 + 1].x = (float)cos(i * D_00283E00);
        pts[i * 2 + 1].z = (float)sin(i * D_00283E00);
        Scale_151130(&pts[i * 2 + 1], 2.0f);
    }
    Scale_151130(&pts[1], D_002756BC);
    pts[32].Copy(V4_151130());
    pts[33].Copy(V4_151130(0.0f, 4.0f, 2.0f));
    pts[34].Copy(V4_151130());
    pts[35].Copy(V4_151130(0.0f, 4.0f, -2.0f));
    mem = func_001E8A44(0x110);
    f60 = mem ? ((ObjFC_151130 *)mem)->func_0017F050(1) : 0;
    f60->func_0017F0A0(2);
    f60->func_00180E00(0x12, pts, 0, b->f1a4->f4);
    f60->f60 = this;
    f60->f9C = (void *)&func_00150970;
    func_001577A0(f60, -1);
    {
        int k = 0;
        char ch;
        do {
            ch = D_002A5EA0[k];
            saved[k] = ch;
            k++;
        } while (ch != 0);
    }
    memcpy(D_002A5EA0, D_00286C90, 23);
    for (i = 0; i < 11; i++) {
        mem = func_001E8A44(0x1e0);
        slots[i].f0 = mem ? ((Node_151130 *)mem)->func_00143580(1) : 0;
        slots[i].f0->Load(D_00286C80, 1, 0);
        slots[i].f0->func_00199600(D_002A789C);
        slots[i].f0->func_00198F50(&D_002A78CC, &D_002A78BC, 0, 1, 0);
        slots[i].f0->func_0019ABA0(*D_002B9120->f4A8, 2);
        func_001577A0(slots[i].f0, -1);
        slots[i].f0->func_00198390();
        mem = func_001E8A44(0x218);
        slots[i].f54 = mem ? ((Obj218_151130 *)mem)->func_0016CE80(1) : 0;
        slots[i].f54->func_0016CF10(c, D_0027592C, 0, 0);
        func_001577A0(slots[i].f54, 2);
        slots[i].f54->v31();
        slots[i].f54->v4();
        mem = func_001E8A44(0x218);
        slots[i].f58 = mem ? ((Obj218_151130 *)mem)->func_0016CE80(1) : 0;
        slots[i].f58->func_0016CF10(c, D_00286C70, 0, 0);
        func_001577A0(slots[i].f58, 2);
        slots[i].f58->v31();
        slots[i].f58->v4();
        mem = func_001E8A44(0x250);
        slots[i].f5C = mem ? ((Obj250_151130 *)mem)->func_0016ABE0(1) : 0;
        slots[i].f5C->func_0016AD20(c, D_00286C60, 0, 0);
        func_001577A0(slots[i].f5C, 2);
        slots[i].f5C->v31();
        slots[i].f5C->v4();
    }
    {
        int k = 0;
        char ch;
        do {
            ch = saved[k];
            D_002A5EA0[k] = ch;
            k++;
        } while (ch != 0);
    }
    mem = func_001E8A44(0x230);
    fe0 = mem ? ((Obj230_151130 *)mem)->func_0016D620(1) : 0;
    fe0->func_0016D6A0(c, D_00286C4C, 0, 0);
    func_001577A0(fe0, 2);
    fe0->v31();
    fe0->v4();
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
    mem = func_001E8A44(0xf4);
    f78 = mem ? ((ObjF8_151130 *)mem)->func_0014AB30(1) : 0;
    f78->func_00129920(2);
    f78->f60 = this;
    f78->f9C = (void *)&D_00150BA0;
    f78->func_001334E0(1);
    f78->fA7 |= 1;
    f78->func_0014C1C0(1, 0, 0);
    pts[1] = D_002A789C;
    pts[0] = D_002A789C;
    f78->func_0014AC30(pts, 0);
    f78->func_00133ED0();
    func_001577A0(f78, -1);
    mem = func_001E8A44(0x110);
    f7C = mem ? ((ObjFC_151130 *)mem)->func_0017F050(1) : 0;
    f7C->func_0017F0A0(2);
    f7C->f60 = this;
    f7C->f9C = (void *)&func_00150A80;
    f7C->func_001334E0(1);
    f7C->fA7 |= 1;
    pts[0] = D_002A789C;
    pts[1].Copy(V4_151130(0.0f, 0.0f, 20.0f));
    f7C->func_00180E00(1, pts, 0, 0);
    f7C->func_00133ED0();
    f7C->func_00133140((void *)*D_002B9120->f4AC, 2);
    func_001577A0(f7C, -1);
    mem = func_001E8A44(0xf4);
    f80 = mem ? ((ObjF8_151130 *)mem)->func_0014AB30(1) : 0;
    f80->func_00129920(2);
    f80->f60 = this;
    f80->f9C = (void *)&func_00150970;
    f80->func_001334E0(1);
    f80->fA7 |= 1;
    f80->func_0014C1C0(1, 0, 0);
    pts[1] = D_002A789C;
    pts[0] = D_002A789C;
    f80->func_0014AC30(pts, 0);
    f80->func_00133ED0();
    func_001577A0(f80, -1);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x20c);
    f598 = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f598->v4(D_00286C3C, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    f59C = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f59C->v4(D_00286C2C, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    f5A0 = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f5A0->v4(D_00286C20, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    f5A4 = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f5A4->v4(D_002758E4, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    f5C0 = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f5C0->v4(D_00286C14, 1, 1, 0, 0);
    if (D_002A8490->f2e0->f0 == 1) {
        for (i = 0; i < 4; i++) {
            func_001ADCC0(buf, 0x104, D_00286C08, i + 1);
            mem = func_001E8A44(0x20c);
            f5A8[i] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
            f5A8[i]->v4(buf, 1, 1, 0, 0);
        }
        for (i = 0; i < 2; i++) {
            func_001ADCC0(buf, 0x104, D_00286BFC, i + 1);
            mem = func_001E8A44(0x20c);
            f5B8[i] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
            f5B8[i]->v4(buf, 1, 1, 0, 0);
        }
    } else {
        mem = func_001E8A44(0x20c);
        f5A8[0] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f5A8[0]->v4(D_00286BEC, 1, 1, 0, 0);
        mem = func_001E8A44(0x20c);
        f5A8[1] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f5A8[1]->v4(D_00286BDC, 1, 1, 0, 0);
        mem = func_001E8A44(0x20c);
        f5A8[2] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f5A8[2]->v4(D_00286BEC, 1, 1, 0, 0);
        mem = func_001E8A44(0x20c);
        f5A8[3] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f5A8[3]->v4(D_00286BDC, 1, 1, 0, 0);
        mem = func_001E8A44(0x20c);
        f5B8[0] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f5B8[0]->v4(D_002758F0, 1, 1, 0, 0);
        mem = func_001E8A44(0x20c);
        f5B8[1] = mem ? ((Obj20C_151130 *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f5B8[1]->v4(D_002758F0, 1, 1, 0, 0);
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
}

int C_00151F40::func_00151F40(void)
{
    if (*(int *)((char *)D_002A8490 + 0x10) != *(int *)((char *)this + 0x24)) {
        char *obj = *(char **)(*(char **)((char *)this + 0x2c) + 0x1a4);
        ((C_00198390 *)*(char **)(obj + 4))->func_00198390();
        return 1;
    }
    {
        char *obj = *(char **)(*(char **)((char *)this + 0x2c) + 0x1a4);
        ((C_001983A0 *)*(char **)(obj + 4))->func_001983A0();
    }
    return 1;
}
