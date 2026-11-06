/* 4 functions from 0x0016F110 to 0x0016FEE0, found by Ghidra. */
#include "common.h"
struct Rdr6F110 {
    char pad0[0x4d4];
    void func_00168280();
    void func_001691E0();
    int func_00169490(char *a, int b);
    void func_00169710(void *a);
    void func_00168BE0(void *a, void *b, void *c, int d);
    void func_00168C20(void *a, int b, void *c);
    void func_00168C50(void *a, float b, void *c);
    void func_00168A10(void *a, void *b);
    void func_00168B90(void *a, void *b);
};
struct C_0016F110 {
    char pad0[0x104];
    void *f104;
    char pad108[0x2c];
    void *f134;
    int f138;
    int f13c;
    float f140;
    int f144;
    int f148;
    int f14c;
    int f150;
    int func_0016F110(char *name);
};
extern char D_002A5558[];
extern char D_00288A74[];
extern int D_00277298;
extern char D_00275630[];
extern char D_00288A68[];
extern char D_00288A5C[];
extern char D_00288A50[];
extern char D_00288A44[];
void func_00030F30(char *a, void *b);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(unsigned int n);

struct S_0016FBC0_Node {
    float x,y,z;
    char padc[0x14];
    S_0016FBC0_Node *next;
    int f24, index;
    float f2c, f30, f34, f38, f3c;
    int f40, flags;
    char *owner;
};
struct S_0016FBC0_Entry { int id; S_0016FBC0_Node *node; };
struct S_0016FBC0_Root { int f0; char *obj; };
extern S_0016FBC0_Root *D_002EFDB8;
extern float D_002A88BC;
extern "C" void *__stdcall func_001FF410(int size, int align);
struct C_0016FBC0 {
    char pad0[0x104];
    int *table;
    int id, f10c;
    S_0016FBC0_Entry *entries;
    int f114, count;
    char pad11c[0x24];
    float f140;
    char pad144[0x18];
    int size1, size2, count1, count2, max;
    void func_0016FBC0();
};

struct O_0016F800 { char pad[0xa8]; int f; };
struct S_16F800_Part { float x, y, z; char padc[0x18]; int f24; char pad28[0x1c]; };
struct S_16F800_Range {
    char pad0[0x180]; float f180, f184; char pad188[8]; float f190;
    char pad194[0x1fc - 0x194]; float f1fc, f200;
    char pad204[0x270 - 0x204]; float f270, f274, f278, f27c;
};
struct C_0016F800 {
    char pad0[0x108];
    int frame;          // 0x108
    int f10c;           // 0x10c
    void *buckets;      // 0x110
    int minb;           // 0x114
    int maxb;           // 0x118
    int count;          // 0x11c
    int used;           // 0x120
    int pad124[2];      // 0x124
    S_16F800_Part **nodes; // 0x12c
    char pad130[0x14];  // 0x130
    int f144;           // 0x144
    void *f148;         // 0x148
    char pad14c[0x24];  // 0x14c
    O_0016F800 *obj170; // 0x170
    int func_0016F800(void);
};
extern "C" void __fastcall func_001D7D00(void);
extern int D_002A88B8;
extern float D_00288A7C, D_00275994, D_00275460;
extern int *D_002F0630;
struct S_16F800_Creator { char pad[0x14]; void *f14; };
extern S_16F800_Creator *D_002A829C;
void func_001B07A0(void);
int func_001E8858(void);
void func_000265C0(void *m, void *a, void *b);
void *func_0015DD80(int a, void *m, void *b, void *c, int d);

struct C_00142560 {
    void func_00142560(void);
};

struct C_0016F7B0 {
    char pad0[0x11c];
    int count;
    char pad120[0xc];
    int *items;
    char pad130[0x40];
    C_00142560 *obj170;
    void func_0016F7B0(void);
};

void C_0016F7B0::func_0016F7B0(void)
{
    int count = this->count;
    int w = 0;
    int i = 0;
    if (count > 0) {
        for (; i < this->count; i++) {
            int e = this->items[i];
            if (*(char *)(e + 0x44) & 0x80) {
                this->items[w] = e;
                w++;
            }
        }
    }
    this->count = w;
    if (this->obj170) {
        this->obj170->func_00142560();
    }
}

int C_0016F800::func_0016F800(void)
{
    this->f144 = 0;
    if (this->obj170->f) func_001D7D00();
    if (this->count > 0) {
        this->used = 0;
        this->minb = 0x7fffffff;
        this->maxb = 0;
        this->frame++;
    }
    return 1;
}

