/* 4 functions from 0x0016F110 to 0x0016FEE0, found by Ghidra. */
#include "common.h"
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
struct C_0016F800 {
    char pad0[0x108]; unsigned frame; void *buckets; int minb, maxb, count, used; int pad124[2]; void **nodes;
    char pad130[0x14]; unsigned f144; char pad148[0x28]; O_0016F800 *obj170;
    int func_0016F800(void);
};
extern "C" void __fastcall func_001D7D00(void);

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

