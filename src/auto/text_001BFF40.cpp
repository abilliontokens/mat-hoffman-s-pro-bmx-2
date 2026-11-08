/* 23 functions from 0x001BFF40 to 0x001C0F20, found by Ghidra. */
#include "common.h"


struct S_001BFF40_Inner { void func_00198E60(void); };
struct S_001BFF40_Obj { char pad0[4]; S_001BFF40_Inner *unk4; };
struct C_001BFF40 { char pad0[0x68]; S_001BFF40_Obj *unk68; void func_001BFF40(void); };

struct S_001C0820_Vec4 {
    float x, y, z, w;
    S_001C0820_Vec4()
    {
        z = 0;
        y = 0;
        x = 0;
        w = 1.0f;
    }
    S_001C0820_Vec4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_001C0CB0_Stream {
    void func_00168C20(int *name, int value, int *out);
    void func_00168C50(int *name, float value, float *out);
    int func_00168CB0(int *name, const S_001C0820_Vec4 &def, S_001C0820_Vec4 *out);
};
extern int D_0028DDA0;
extern int D_0028DD94;
extern int D_0028DD88;
extern int D_0028DD80;
extern int D_0028DD74;
extern int D_0028DD6C;
extern int D_0028DD64;
extern int D_0028DD5C;
extern int D_0028DD54;
extern int D_0028DD48;
extern int D_0028DD3C;
extern int D_0028DD34;
extern int D_0028DD2C;

extern int D_0028DBA4;

extern int D_0028DC84;
extern int D_0028DC7C;
extern int D_0028DC74;
extern int D_0028DC6C;
extern int D_0028DC60;
extern int D_0028DC54;
extern int D_0028DC48;
extern int D_0028DC3C;
extern int D_00275AD4;
extern int D_00275AC8;
extern int D_0027CEE4;

void *func_001E8A44(int size);

/* the 0x1e0-byte scene node a UIWidgetStaticUserRotate rotates */
struct S_001C0820_Node {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual void *v35(int a, int b, int c);
    S_001C0820_Node *func_00143580(int a);
    void func_00197E70(S_001C0820_Vec4 *v);
    void func_00199650(S_001C0820_Vec4 *v);
    void func_00198F50(S_001C0820_Vec4 *a, S_001C0820_Vec4 *b, int c, int d, int e);
};

/* UIWidgetStaticUserRotate constructor */
struct C_001C0730 {
    void *vtbl;
    char pad4[0x20];
    int f24, f28, f2C, f30, f34, f38, f3C, f40;
    int f44[8];
    int f64;
    S_001C0820_Node *f68;
    S_001C0820_Vec4 f6C;
    S_001C0820_Vec4 f7C;
    float f8C, f90, f94;
    int f98, f9C, fA0;
    int fA4;
    float fA8, fAC, fB0;
    float fB4;
    C_001C0730 *func_001C0730(int a1, int a2);
    C_001C0730 *func_001C0820(int a, int b, S_001C0CB0_Stream *stream);
    int func_001577A0(void *child, int n);
};

extern "C" unsigned int strlen(const char *s);
#pragma intrinsic(strlen)

extern int D_0028DB04;
extern int D_0028D804;
extern char D_00275630[];

void func_001E8390(void *p);
char *func_001E9260(char *str, int ch);

struct C_00157600 {
    void func_00157600(int a);
};

struct C_00157660 {
    void func_00157660(void);
};

/* UIWidgetOverlayText */
struct C_001C0110 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    void *unk68;
    int unk6C;
    char pad70[0x170 - 0x70];
    int unk170;
    char pad174[0x180 - 0x174];
    int unk180;
    int unk184;
    char pad188[0x190 - 0x188];
    int unk190;
    int unk194;
    int unk198;
    int unk19C;
    int unk1A0;
    int unk1A4;
    int unk1A8;
    int unk1AC;
    C_001C0110 *func_001C0110(int a1, int a2);
    void func_001C01B0(void);
};

/* same object seen through its virtual slots 28 and 29 */
struct C_001C0670 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    char pad4[0x28];
    int unk2C;
    char pad30[0x10];
    int unk40;
    void func_001C0670(void);
};

/* element of UIWidgetOverlayText's child array */
struct S_001C01E0_Font { float func_0018C210(); };
struct S_001C05F0_Item {
    virtual void v0(); virtual void v1(); virtual void v2();
    char pad4[0x24];
    S_001C01E0_Font *unk28;
    void func_00157810();
    S_001C05F0_Item *func_001B12C0(int);
    void func_001B13A0(void *, void *, int, int);
    void func_001B1AB0(int, int);
    void func_001B1BF0(int);
    void func_001B19A0(int);
    void func_001B19C0(int, int, int);
    void func_001B2270(int a);
    void func_001B1980(void);
    void func_001B17D0(char *s);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, int a11, int a12, int a13);
};

/* UIWidgetOverlayText seen through virtual slots 5 and 7 */
struct C_001C05F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    char pad4[0x28];
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    char pad44[0x68 - 0x44];
    S_001C05F0_Item **unk68;
    char pad6C[0x170 - 0x6C];
    int unk170;
    int unk174;
    int unk178;
    float unk17C;
    int unk180;
    int unk184;
    int unk188;
    int unk18C;
    int unk190;
    int unk194;
    char pad198[4];
    int unk19C;
    int unk1A0;
    int unk1A4;
    int unk1A8;
    void func_001C01E0(char *text);
    void func_001577A0(S_001C05F0_Item *, int);
    void func_001C0520(void);
    void func_001C05F0(void);
    void func_001C0690(void);
    void func_001C06F0(void);
};

/* UIWidgetMovementControl seen through virtual slots 5 and 7 */
struct C_001C0E80 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    char pad4[0x28];
    int unk2C;
    int unk30;
    int unk34;
    void func_001C0E80(void);
};

struct S_001C0B00_Vec4 {
    float x, y, z, w;
    S_001C0B00_Vec4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_001C0B00_Node {
    void func_00199CF0(S_001C0B00_Vec4 v, float angle);
};

/* UIWidgetStaticUserRotate: slots 28/29 start/stop the rotation */
struct C_001C0A60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    char pad40[0x28];
    S_001C0B00_Node *f68;
    char pad6C[0x20];
    float f8C;
    float f90;
    char pad94[0x10];
    int fA4;
    char padA8[0xC];
    float fB4;
    void func_001C0A60(void);
    void func_001C0AB0(void);
    void func_001C0B00(float dt);
    void func_001C0B70(float dt);
};

struct S_001C04D0_Entry {
    int unk0;
    int unk4;
};

struct S_001C04D0_Table {
    int unk0;
    S_001C04D0_Entry *unk4;
};

struct S_001C04D0_Global {
    char pad0[0x2e8];
    S_001C04D0_Table *unk2E8;
};

extern S_001C04D0_Global *D_002A8490;

extern int D_0028DC94;
extern int D_0028DDB4;

/* UIWidgetMovementGroup */
struct C_001C0EC0 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    int unk68[16];
    C_001C0EC0 *func_001C0EC0(int a1, int a2);
};

/* UIControl: the object a movement widget drives */
struct S_001C0DD0_Ctl {
    void func_001BDE90(int a);
    void func_001BDF00(int a);
    void func_001BDF60(int a);
    void func_001BDFB0(int a);
    void func_001BE0B0(int a);
    void func_001BE1B0(int a);
    void func_001BE220(int a);
};

struct S_001C0DD0_Ent {
    int unk0;
    S_001C0DD0_Ctl *unk4;
};

struct S_001C0DD0_Tab {
    char pad0[0x144];
    S_001C0DD0_Ent **unk144;
};

struct S_001C0DD0_Owner {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(int a, int b, int c, int d);
    char pad4[0x114];
    S_001C0DD0_Tab *unk118;
};

/* UIWidgetMovementControl */
struct C_001C0C50 {
    void *vtbl;
    char pad4[0x20];
    S_001C0DD0_Owner *unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    int unk68;
    int unk6C[16];
    C_001C0C50 *func_001C0C50(int a1, int a2);
    C_001C0C50 *func_001C0CB0(int a, S_001C0CB0_Stream *stream, S_001C0DD0_Owner *owner);
    void func_001C0DD0(int a, int b, int c);
};

struct C_001C0BE0 {
    char pad0[0x68];
    S_001C0B00_Node *unk68;
    char pad6C[0x94 - 0x6C];
    float unk94;
    char pad98[0xb4 - 0x98];
    float unkB4;
    void func_001C0BE0(float dt);
};

struct C_001C04D0 {
    char pad0[0x68];
    S_001C05F0_Item **unk68;
    char pad6C[0x170 - 0x6C];
    int unk170;
    char pad174[0x180 - 0x174];
    int unk180;
    void func_001C01E0(int a);
    void func_001C03F0(char *text);
    void func_001C04D0(int idx);
};

void C_001BFF40::func_001BFF40(void)
{
    unk68->unk4->func_00198E60();
}

C_001C0110 *C_001C0110::func_001C0110(int a1, int a2)
{
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    unk24 = a1;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk40 = 0;
    for (i = 0; i < 8; i++) {
        unk44[i] = 0;
    }
    unk64 = 0;
    vtbl = &D_0028DB04;
    unk68 = 0;
    unk6C = 0;
    unk170 = 0;
    unk184 = 0;
    unk19C = 0;
    unk1A0 = 0;
    unk1A4 = 0;
    unk1A8 = 0;
    unk190 = 0;
    unk194 = 0xff;
    unk198 = 0;
    unk180 = 0;
    unk1AC = 0;
    return this;
}

void C_001C0110::func_001C01B0(void)
{
    vtbl = &D_0028DB04;
    if (unk68 != 0) {
        func_001E8390(unk68);
    }
    vtbl = &D_0028D804;
    ((C_00157660 *)this)->func_00157660();
}

void *func_001E83E8(void *, unsigned int);
void *func_001E8A44(unsigned int);
void C_001C05F0::func_001C01E0(char *text)
{
    if (unk68) {
        for (int i = 0; i < unk170; i++) {
            unk68[i]->func_00157810();
            unk68[i]->v2();
        }
        func_001E8390(unk68);
        unk68 = 0;
    }
    unk170 = 0;
    int index = -1;
    char *end = text + strlen(text);
    if (end) {
        char *next;
        do {
            next = func_001E9260(text, 0x40);
            if (!next) next = end;
            unk170++;
            index++;
            unk68 = (S_001C05F0_Item **)func_001E83E8(unk68, unk170 * 4);
            S_001C05F0_Item *item = (S_001C05F0_Item *)func_001E8A44(0x184);
            if (item) item = item->func_001B12C0(1);
            else item = 0;
            unk68[index] = item;
            unk68[index]->func_001B13A0((char *)this + 0x70, (char *)this + 0xF0, 0, next-text);
            func_001577A0(unk68[index], -1);
            unk68[index]->func_001B17D0(text);
            unk68[index]->func_001B1AB0(unk194, 0);
            unk68[index]->func_001B1BF0(*(int *)((char *)this+0x198));
            unk68[index]->func_001B19A0(unk178);
            unk68[index]->func_001B2270(unk184);
            if (unk190) unk68[index]->func_001B19C0(unk188, unk18C + unk190 * index, 0);
            else unk68[index]->func_001B19C0(unk188, unk18C + (int)(unk68[index]->unk28->func_0018C210() * unk17C * index), 0);
            unk68[index]->func_001B1860(0, -1.0f, 255, 1.0f, 0, 0, -1.0f, 255, 1.0f, 0, 0, 0, 0);
            text = next + 1;
        } while (next != end);
    }
}

void C_001C04D0::func_001C03F0(char *text)
{
    char *end = text + strlen(text);
    int i = -1;
    int j;
    char *nl;
    char saved;

    if (end != 0) {
        do {
            nl = func_001E9260(text, 0x40);
            if (nl == 0) {
                nl = end;
            }
            saved = *nl;
            *nl = 0;
            i++;
            unk68[i]->func_001B17D0(text);
            unk68[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            *nl = saved;
            text = nl + 1;
        } while (nl != end);
    }
    for (j = i + 1; j < unk170; j++) {
        unk68[j]->func_001B17D0((char *)D_00275630);
    }
}

void C_001C04D0::func_001C04D0(int idx)
{
    if (unk180 != 0) {
        func_001C03F0((char *)D_002A8490->unk2E8->unk4[idx].unk0);
    } else {
        func_001C01E0(D_002A8490->unk2E8->unk4[idx].unk0);
    }
}

void C_001C05F0::func_001C0520(void)
{
    int i;

    unk2C = 1;
    if (unk30 == 0 || unk34 == 0) {
        if (unk30 != 0) {
            v7();
        }
        if (unk34 != 0) {
            v5();
        }
    }
    if (unk19C != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk1A0);
        }
    }
    for (i = 0; i < unk170; i++) {
        unk68[i]->func_001B1860(0, -1.0f, unk194, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    }
}

void C_001C05F0::func_001C05F0(void)
{
    int i;

    unk2C = 0;
    if (unk38 == 0 || unk3C == 0) {
        if (unk38 != 0) {
            v7();
        }
        if (unk3C != 0) {
            v5();
        }
    }
    if (unk19C != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk184);
        }
    } else {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B1980();
        }
    }
}

void C_001C0670::func_001C0670(void)
{
    unk40 = 0;
    if (unk2C != 0) {
        v28();
    } else {
        v29();
    }
}

void C_001C05F0::func_001C0690(void)
{
    int i;

    unk40 = 1;
    if (unk1A4 != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk1A8);
        }
    } else {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B1980();
        }
    }
}

void C_001C05F0::func_001C06F0(void)
{
    int i;

    unk2C = 0;
    if (unk19C != 0) {
        for (i = 0; i < unk170; i++) {
            unk68[i]->func_001B2270(unk184);
        }
    }
}

C_001C0730 *C_001C0730::func_001C0820(int a, int b, S_001C0CB0_Stream *stream)
{
    S_001C0820_Vec4 axis;
    S_001C0820_Vec4 angle;
    int unused;
    void *m;

    stream->func_00168C20(&D_0028DC84, 0, &unused);
    stream->func_00168C20(&D_0028DC7C, 0, &f98);
    stream->func_00168C20(&D_0028DC74, 0, &f9C);
    stream->func_00168C20(&D_0028DC6C, 0, &fA0);
    stream->func_00168C20(&D_0028DC60, 1, &fA4);
    stream->func_00168C50(&D_0028DC54, 0, &f8C);
    stream->func_00168C50(&D_0028DC48, 0, &f90);
    stream->func_00168C50(&D_0028DC3C, 0, &f94);
    f28 = a;
    m = func_001E8A44(0x1e0);
    f68 = m ? ((S_001C0820_Node *)m)->func_00143580(1) : 0;
    if (func_001577A0(f68->v35(b, 0, 0), 0)) {
        if (stream->func_00168CB0(&D_00275AD4, S_001C0820_Vec4(1.0f, 1.0f, 1.0f, 1.0f), &f6C)) {
            f68->func_00199650(&f6C);
        } else {
            f68->func_00197E70(&f6C);
        }
        f7C = f6C;
        if (stream->func_00168CB0(&D_00275AC8, S_001C0820_Vec4(0.0f, 0.0f, 1.0f, 1.0f), &axis)) {
            if (stream->func_00168CB0(&D_0027CEE4, S_001C0820_Vec4(0.0f, 0.0f, 1.0f, 1.0f), &angle)) {
                f68->func_00198F50(&axis, &angle, 1, 0, 0);
            }
        }
    }
    return this;
}

void C_001C0A60::func_001C0A60(void)
{
    f2C = 1;
    if (f30 == 0 || f34 == 0) {
        if (f30 != 0) {
            v7();
        }
        if (f34 != 0) {
            v5();
        }
    }
    fA4 = 0;
    v7();
}

void C_001C0A60::func_001C0AB0(void)
{
    f2C = 0;
    if (f38 == 0 || f3C == 0) {
        if (f38 != 0) {
            v7();
        }
        if (f3C != 0) {
            v5();
        }
    }
    fA4 = 1;
    v5();
}

void C_001C0A60::func_001C0B00(float dt)
{
    if (f68 != 0) {
        f68->func_00199CF0(S_001C0B00_Vec4(1.0f, 0.0f, 0.0f, 1.0f), fB4 * f8C * dt);
    }
}

void C_001C0A60::func_001C0B70(float dt)
{
    if (f68 != 0) {
        f68->func_00199CF0(S_001C0B00_Vec4(0.0f, 1.0f, 0.0f, 1.0f), fB4 * f90 * dt);
    }
}

void C_001C0BE0::func_001C0BE0(float dt)
{
    if (unk68 != 0) {
        unk68->func_00199CF0(S_001C0B00_Vec4(0.0f, 0.0f, 1.0f, 1.0f), unkB4 * unk94 * dt);
    }
}

C_001C0C50 *C_001C0C50::func_001C0C50(int a1, int a2)
{
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    unk24 = (S_001C0DD0_Owner *)a1;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk40 = 0;
    for (i = 0; i < 8; i++) {
        unk44[i] = 0;
    }
    unk64 = 0;
    vtbl = &D_0028DC94;
    unk68 = 0;
    for (i = 0; i < 16; i++) {
        unk6C[i] = 0;
    }
    return this;
}

C_001C0C50 *C_001C0C50::func_001C0CB0(int a, S_001C0CB0_Stream *stream, S_001C0DD0_Owner *owner)
{
    unk28 = a;
    unk24 = owner;
    stream->func_00168C20(&D_0028DDA0, 0, &unk68);
    stream->func_00168C20(&D_0028DD94, 0, &unk6C[0]);
    stream->func_00168C20(&D_0028DD88, 0, &unk6C[1]);
    stream->func_00168C20(&D_0028DD80, 0, &unk6C[2]);
    stream->func_00168C20(&D_0028DD74, 0, &unk6C[3]);
    stream->func_00168C20(&D_0028DD6C, 0, &unk6C[4]);
    stream->func_00168C20(&D_0028DD64, 0, &unk6C[5]);
    stream->func_00168C20(&D_0028DD5C, 0, &unk6C[6]);
    stream->func_00168C20(&D_0028DD54, 0, &unk6C[7]);
    stream->func_00168C20(&D_0028DD48, 0, &unk6C[8]);
    stream->func_00168C20(&D_0028DD3C, 0, &unk6C[9]);
    stream->func_00168C20(&D_0028DD34, 0, &unk6C[10]);
    stream->func_00168C20(&D_0028DD2C, 0, &unk6C[11]);
    return this;
}

void C_001C0C50::func_001C0DD0(int a, int b, int c)
{
    S_001C0DD0_Ctl *ctl = unk24->unk118->unk144[b]->unk4;

    if (ctl != 0) {
        int v = unk6C[a];

        switch (v) {
        case -1:
            ctl->func_001BDE90(0);
            break;
        case -2:
            ctl->func_001BDF00(0);
            break;
        case -3:
            ctl->func_001BDFB0(unk68);
            break;
        case -4:
            ctl->func_001BE0B0(unk68);
            break;
        case -5:
            ctl->func_001BE1B0(unk68);
            break;
        case -6:
            ctl->func_001BE220(unk68);
            break;
        default:
            if (v > 0) {
                ctl->func_001BDF60(v);
            }
            break;
        }
        if (v != 0) {
            unk24->v31(v, 1, 0, 0);
        }
    }
}

void C_001C0E80::func_001C0E80(void)
{
    unk2C = 1;
    if (unk30 == 0 || unk34 == 0) {
        if (unk30 != 0) {
            v7();
        }
        if (unk34 != 0) {
            v5();
        }
    }
    v7();
}

C_001C0EC0 *C_001C0EC0::func_001C0EC0(int a1, int a2)
{
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    unk24 = a1;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk40 = 0;
    for (i = 0; i < 8; i++) {
        unk44[i] = 0;
    }
    unk64 = 0;
    vtbl = &D_0028DDB4;
    for (i = 0; i < 16; i++) {
        unk68[i] = 0;
    }
    return this;
}
C_001C0730 *C_001C0730::func_001C0730(int a1, int a2)
{
    float *p;
    int i;

    ((C_00157600 *)this)->func_00157600(a2);
    f24 = a1;
    f2C = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    for (i = 0; i < 8; i++)
        f44[i] = 0;
    f64 = 0;
    vtbl = &D_0028DBA4;
    p = (float *)&f6C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = (float *)&f7C;
    p[3] = 1.0f;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    S_001C0820_Vec4 v(0.0f, 0.0f, 0.0f, 1.0f);
    f68 = 0;
    fA8 = 0;
    fAC = 0;
    fB0 = 0;
    f98 = 0;
    f9C = 0;
    fA0 = 0;
    f8C = 0;
    f90 = 0;
    f94 = 0;
    f6C = v;
    fA4 = 1;
    fB4 = 6.2831853f;
    return this;
}
