/* 4 functions from 0x000B03A0 to 0x000B1350, found by Ghidra. */
#include "common.h"

extern int D_0027CE64;

void *func_001E8A44(int size);
void func_001ADCC0(char *buf, int size, char *fmt, ...);
int func_001E8AF0(char *a, char *b);
int func_001E8920(char *dst, const char *src, unsigned int n);
void __stdcall func_001577A0(void *obj, int a);
void func_001CDE90(int a);
void func_0001CB80(char *buf);
void func_000A3780(int a, char *b, void *c);
void func_0019AC50();
void func_000B0060(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void func_0019A0A0(int a, int b, int c);
void func_00199600(int a, int b, int c, int d);
void func_00198F50(int a, int b, int c, int d, int e);
void func_0019ABA0(int a, int b);
void *func_00143580(int a);
void *func_001BB680(int a);

extern char D_0027CE10[];
extern char D_0027CE04[];
extern char D_002A5870[];
extern char D_00276BB4[];
extern char D_00276F58[];
extern char D_00276F0C[];
extern char D_002A5EA0[];
extern char D_002A60B0[];
extern char D_002A4C10[];
extern float D_00275460;
extern float D_00275548;
extern float D_00275F64;

struct S_2E0_B03A0 {
    char pad0[0x4];
    int f4;
    char pad8[0x2c4 - 0x8];
    void *f2c4;
};

struct S_002A8490_B03A0 {
    char pad0[0x2e0];
    S_2E0_B03A0 *f2e0;
};

struct S_Rec_B03A0 {
    u8 pad0[0x2];
    u8 type;            /* +0x02 */
    s16 idx;            /* +0x04 */
    u8 pad6[0x30 - 0x6];
    float v0[4];        /* +0x30 */
    float v1[4];        /* +0x40 */
    float f50;          /* +0x50 */
    float f54;          /* +0x54 */
    float f58;          /* +0x58 */
    u8 pad5C[0x70 - 0x5C];
};

struct S_Obj_B03A0 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
};

struct Vec_B03A0 { float x,y,z,w; };
struct S_1E0_B03A0 {
    void *vtbl;
    char pad4[0x24];
    char name[0x104];   /* +0x28 */
    char pad12C[0x1a3 - 0x12C];
    u8 f1a3;
    S_1E0_B03A0 *func_00143580(int);
    void func_00199600(Vec_B03A0);
    void func_00198F50(float*,float*,int,int,int);
    void func_0019ABA0(int,int);
    void func_0019AC50();
    void func_0019A0A0(float,float,float);
    S_1E0_B03A0 *func_001BB680(int);
    S_1E0_B03A0 *func_001BB470(int);
    int func_001BC040(Vec_B03A0,Vec_B03A0,Vec_B03A0,Vec_B03A0,int,int,int,int);
    void func_001BBAE0(int);
    void func_001BB620(int,int,void*,int);
};

struct C_000B03A0 {
    char pad0[0x3a8];
    void *f3a8;
    char pad3AC[0x4a8 - 0x3AC];
    void *f4a8;
    char pad4AC[0x4dc - 0x4AC];
    void *f4dc;
    char pad4E0[0x544 - 0x4E0];
    void *f544;
    char pad548[0x550 - 0x548];
    void *f550;
    char pad554[0x55c - 0x554];
    int f55c;
    char pad560[0x5a8 - 0x560];
    int f5a8;
    void **f5ac;
    void func_000A3B00(void*);
    void func_000A3780(void*,char*,void*);
    void func_000B0060(void*,int,void*,float*,float*,float*,int,int,int);
    int func_000B03A0(int a1, int a2, int a3);
};

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

void __stdcall func_00157A00(float);

struct C_000B1320 {
    int func_000B1320(float dt);
    void func_00157A00(float dt);
};

struct C_000B1200_Entry {
    int unk0;
    int unk4;
    void *unk8;
    void *unkC;
};

extern "C" void func_001E891B(void *p);

struct C_000B11C0 {
    void *vtbl;
    char pad04[0x30];
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    void *unk44;
    void *unk48;
    C_000B1200_Entry **unk4C;
    void **unk50;
    void func_00157600(int a0);
    void func_00157660(void);
    void func_000B1200(void);
    C_000B11C0 *func_000B11C0(int param_1);
};

int C_000B03A0::func_000B03A0(int a1, int a2, int a3)
{
    S_Rec_B03A0 *r;
    S_Obj_B03A0 *obj;
    int count;
    int n;

    r = (S_Rec_B03A0 *)((S_002A8490_B03A0 *)D_002A8490)->f2e0->f2c4;
    if (r == 0) {
        return 0;
    }
    n = 0;
    for (count = 0; count < 0x96; count++, r = (S_Rec_B03A0 *)((char *)r + 0x70)) {
        if ((s8)r->type <= 0) break;
        obj = (S_Obj_B03A0 *)func_001E8A44(0x1c);
        if (obj != 0) {
            obj->f0 = -1;
            obj->f4 = 0;
            obj->f8 = 0;
            obj->fC = 0;
            obj->f10 = 0;
            obj->f14 = 0;
            obj->f18 = 0;
        }
        switch (r->type - 1) {
        case 0:
            n++;
            break;
        default:
            break;
        }
    }
    return 0;
}

C_000B11C0 *C_000B11C0::func_000B11C0(int param_1) {
    func_00157600(param_1);
    unk44 = 0;
    unk48 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk4C = 0;
    unk50 = 0;
    unk40 = 0;
    vtbl = &D_0027CE64;
    return this;
}

void C_000B11C0::func_000B1200(void)
{
    int i;

    vtbl = &D_0027CE64;
    if (unk50 != 0) {
        for (i = 0; i < unk40; i++) {
            func_001E891B(unk50[i]);
        }
        if (unk50 != 0) {
            func_001E891B(unk50);
            unk50 = 0;
            unk40 = 0;
        }
    }
    if (unk4C != 0) {
        for (i = 0; i < unk3C; i++) {
            if (unk4C[i]->unk8 != 0) {
                func_001E891B(unk4C[i]->unk8);
                unk4C[i]->unk8 = 0;
                unk4C[i]->unk0 = 0;
            }
            if (unk4C[i]->unkC != 0) {
                func_001E891B(unk4C[i]->unkC);
                unk4C[i]->unkC = 0;
                unk4C[i]->unk4 = 0;
            }
            func_001E891B(unk4C[i]);
        }
        if (unk4C != 0) {
            func_001E891B(unk4C);
            unk4C = 0;
            unk3C = 0;
        }
    }
    if (unk44 != 0) {
        func_001E891B(unk44);
        unk44 = 0;
        unk34 = 0;
    }
    if (unk48 != 0) {
        func_001E891B(unk48);
        unk48 = 0;
        unk38 = 0;
    }
    func_00157660();
}

int C_000B1320::func_000B1320(float dt) {
    if (D_002A8490->f124 == 0) {
        func_00157A00(dt);
    }
    return 1;
}
