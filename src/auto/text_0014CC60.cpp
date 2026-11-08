/* 3 functions from 0x0014CC60 to 0x0014D720, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline void FloatToInt(int *out, float f)
{
    int * volatile p = out;
    *p = _mm_cvttss_si32(*(__m128 *)&f);
}
static __forceinline void Pin_0014D360(void *p) { }
struct C_0013C8A0 {
    void func_0013C8A0(int key, void *out, int size, int flag);
    int func_0013C9F0(const char *name, const char *mode);
};
extern C_0013C8A0 *D_002BEAAC;
extern char D_00275FB4[];
struct S_0014D360_Vector { float x,y,z,w; };
struct C_000BA430 {
    void func_000BA430(S_0014D360_Vector *, int, int, int);
};
struct C_001C4F40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(S_0014D360_Vector *, S_0014D360_Vector *, int);
    virtual void v7(void *, int, S_0014D360_Vector *, S_0014D360_Vector *);
};
extern C_001C4F40 *D_002F07E8;
extern float D_0027A094, D_002755E8;
struct C_0014CC60;
extern C_0014CC60 *D_002BF250;
struct S_0014D360_Pos { unsigned short x, y, z; };
struct S_0014D360_Rec {
    char pad0[8];
    S_0014D360_Pos pos;
    unsigned char type;
    char padF;
    signed char a;
    signed char b;
    union {
        unsigned char flags;
        struct { unsigned char flag0 : 1; };
    };
    char pad13[9];
};
struct S_0014D360_Info {
    char pad0[0x180];
    float f180, f184;
    char pad188[4];
    float f18C;
    char pad190[4];
    float f194;
};


void *__cdecl func_001E83E8(void *p, int size);
int __cdecl func_0013F650(void);

struct S_Entry { int a; char pad[0x28]; };
struct S_Slot {
    char name[0x80];
    char name2[0x80];
    char name3[0x80];
    int f180, f184, f188, f18C, f190, f194, f198, f19C, f1A0, f1A4, f1A8, f1AC, f1B0, f1B4;
    int f1B8, f1BC, f1C0, f1C4, f1C8;
    char pad1CC[0x10];
    int f1DC, f1E0, f1E4, f1E8, f1EC;
    S_Entry *f1F0;
    char pad1F4[0x18];
    S_Slot *func_0014C720();
};
void *__cdecl func_001E8A44(int size);
void *__cdecl func_001E8AA5(int size);
int __stdcall func_0013C9F0(const char *name, const char *mode);

/* two lists that grow 20 entries at a time: f48 holds one entry per item,
   f21D8 twenty per item */
struct C_0014CC60 {
    char pad0[0x38];
    int f38;
    int f3C;
    S_0014D360_Rec *f40;
    int f44;
    int *f48;
    int f4C;
    C_000BA430 *f50;
    S_0014D360_Info *f54[320];
    int f554;
    int f558;
    char pad55C[0x14];
    int f570;
    int f574;
    float f578;
    float f57C;
    int f580;
    int f584;
    char pad588[0xC];
    int f594;
    unsigned char *f598;
    char pad59C[0x1C38];
    int f21D4;
    int *f21D8;
    int func_0014CC60(const char *name, int *out);
    int func_0014D360(int handle, int flag);
    void func_0014D670(int v);
};

#pragma optimize("", on)
int C_0014CC60::func_0014CC60(const char *name, int *out)
{
    int h;
    int i;
    int j;
    unsigned char flag;
    unsigned char b;
    S_Slot **slots = (S_Slot **)f54;

    h = D_002BEAAC->func_0013C9F0(name, D_00275FB4);
    *out = h;
    if (h == -1) {
        return 0;
    }
    D_002BEAAC->func_0013C8A0(h, &f38, 4, 1);
    f598 = (unsigned char *)func_001E8AA5(0x100);
    f594 = 0;
    for (i = 0; i < 0x100; i++) {
        f598[i] = (unsigned char)i;
    }
    for (i = 0; i < 0x100; i++) {
        S_Slot *s;
        D_002BEAAC->func_0013C8A0(h, &flag, 1, 1);
        if (!flag) {
            break;
        }
        D_002BEAAC->func_0013C8A0(h, &b, 1, 1);
        f598[i] = (unsigned char)f594;
        s = (S_Slot *)func_001E8A44(0x20C);
        slots[f594] = s ? s->func_0014C720() : 0;
        D_002BEAAC->func_0013C8A0(h, slots[f594], b, 1);
        D_002BEAAC->func_0013C8A0(h, &b, 1, 1);
        D_002BEAAC->func_0013C8A0(h, slots[f594]->name2, b, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f180, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f184, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f188, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f18C, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f190, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f194, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1B8, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1BC, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1C4, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1C0, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1C8, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1E0, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1E4, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1DC, 4, 1);
        if (f38 == 2) {
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1E8, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f198, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f19C, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1A0, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1A4, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1A8, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1AC, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1B0, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1B4, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &flag, 1, 1);
            if (flag) {
                D_002BEAAC->func_0013C8A0(h, &b, 1, 1);
                D_002BEAAC->func_0013C8A0(h, slots[f594]->name3, b, 1);
            }
        }
        D_002BEAAC->func_0013C8A0(h, &slots[f594]->f1EC, 4, 1);
        slots[f594]->f1F0 = (S_Entry *)func_001E8AA5(slots[f594]->f1EC * 0x2c);
        for (j = 0; j < slots[f594]->f1EC; j++) {
            S_Entry *e = slots[f594]->f1F0;
            D_002BEAAC->func_0013C8A0(h, (char *)e + j * 0x2c + 0x20, 4, 1);
            D_002BEAAC->func_0013C8A0(h, (char *)slots[f594]->f1F0 + j * 0x2c, 0xc, 1);
            *(float *)((char *)slots[f594]->f1F0 + j * 0x2c + 0xc) = 1.0f;
            D_002BEAAC->func_0013C8A0(h, (char *)slots[f594]->f1F0 + j * 0x2c + 0x10, 0xc, 1);
            *(float *)((char *)slots[f594]->f1F0 + j * 0x2c + 0x1c) = 1.0f;
            D_002BEAAC->func_0013C8A0(h, (char *)slots[f594]->f1F0 + j * 0x2c + 0x24, 4, 1);
            D_002BEAAC->func_0013C8A0(h, (char *)slots[f594]->f1F0 + j * 0x2c + 0x28, 4, 1);
        }
        f594++;
    }
    D_002BEAAC->func_0013C8A0(h, &flag, 1, 1);
    if (flag) {
        D_002BEAAC->func_0013C8A0(h, &b, 1, 1);
        D_002BEAAC->func_0013C8A0(h, (char *)this + 0x458, b, 1);
        if (f38 == 2) {
            D_002BEAAC->func_0013C8A0(h, (char *)this + 0x454, 4, 1);
            D_002BEAAC->func_0013C8A0(h, &flag, 1, 1);
            if (flag) {
                D_002BEAAC->func_0013C8A0(h, &b, 1, 1);
                D_002BEAAC->func_0013C8A0(h, (char *)this + 0x4D8, b, 1);
                D_002BEAAC->func_0013C8A0(h, &f558, 4, 1);
                f3C = f558;
            }
        }
    }
    return 1;
}

int C_0014CC60::func_0014D360(int handle, int flag)
{
    int i;
    int *pi = &i;
    for (*pi = 0; *pi < this->f558; (*pi)++) {
        unsigned char index;
        signed char a, b;
        S_0014D360_Pos pos;
        int special = 0;
        int scratch;
        int type;
        S_0014D360_Rec *rec;
        S_0014D360_Vector transformed, position, bounds;
        D_002BEAAC->func_0013C8A0(handle, &index, 1, 1);
        if ((signed char)index < 0) {
            index &= 0x7f;
            special = 1;
        }
        if (this->f598) {
            type = this->f598[index];
        } else {
            type = index;
        }
        D_002BEAAC->func_0013C8A0(handle, &pos, 6, 1);
        D_002BEAAC->func_0013C8A0(handle, &a, 1, 1);
        D_002BEAAC->func_0013C8A0(handle, &b, 1, 1);
        if (flag || special) {
            transformed.x = transformed.y = transformed.z = 0;
            transformed.w = 1;
            transformed.x = pos.x * this->f578;
            transformed.y = pos.y * this->f578;
            transformed.z = pos.z * this->f578;
            this->f50->func_000BA430(&transformed, 0, 0, 0);
            AsmFloatToInt(transformed.y * this->f57C, &scratch);
            pos.y = (unsigned short)scratch;
        }
        rec = &this->f40[*pi];
        rec->type = type;
        rec->pos = pos;
        rec->b = b;
        rec->a = a;
        rec->flags |= 1;
        position.x = position.y = position.z = 0;
        position.w = 1;
        bounds.x = bounds.y = bounds.z = 0;
        bounds.w = 1;
        bounds.z = bounds.x = (this->f54[type]->f194 - this->f54[type]->f18C) * b * D_0027A094 + this->f54[type]->f18C;
        bounds.y = ((this->f54[type]->f180 - this->f54[type]->f184) * a * D_0027A094 + this->f54[type]->f180) * D_002755E8;
        position.x = this->f40[*pi].pos.x * D_002BF250->f578;
        position.y = this->f40[*pi].pos.y * D_002BF250->f578 + bounds.y;
        position.z = this->f40[*pi].pos.z * D_002BF250->f578;
        D_002F07E8->v7(&this->f40[*pi], D_002F07E8->v6(&position, &bounds, 0), &position, &bounds);
    }
    return 1;
}

void C_0014CC60::func_0014D670(int v)
{
    int i;

    if (f570 == f584) {
        f48 = (int *)func_001E83E8(f48, f584 * 4 + 0x50);
        if (f48 == 0) {
            return;
        }
        f584 += 0x14;
    }
    f48[f570] = v;
    f570++;
    if (f570 - 1 == f21D4) {
        f21D8 = (int *)func_001E83E8(f21D8, f21D4 * 4 + 0x50);
        if (f21D8 != 0) {
            f21D4 += 0x14;
            for (i = 0; i < 0x14; i++) {
                f21D8[f570 + i - 1] = func_0013F650();
            }
        }
    }
}
