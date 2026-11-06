/* 1 function from 0x0008DB70 to 0x0008FB80, found by Ghidra. */
#include "common.h"
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define F4(p, o) (*(float *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
#define B1(p, o) (*(unsigned char *)((char *)(p) + (o)))
extern int D_002A8490;
extern char D_00278664;
extern char D_002A60B0;
extern char D_0027A054;
extern char D_002786B0;
void *func_001E8A44(int size);
struct W_0008DB70 {
    char pad0[0x28];
    float f28; float f2c; char pad30[0x34 - 0x30]; float f34;
    int f38; char pad3c[0x40 - 0x3c]; int f40; int f44; float f48;
    char pad4c[0x58 - 0x4c]; unsigned char f58;
    W_0008DB70 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};
struct S_0008DB70 {
    char pad0[0x40];
    int f40; int f44; char *f48;
    char pad4c[0x164 - 0x4c];
    void *f164; void *f168; void *f16c; void *f170; void *f174;
    char pad178[0xd4c - 0x178];
    int fd4c; int fd50; char padd54[0xd64 - 0xd54]; int fd64;
    char padd68[0xd84 - 0xd68]; void *fd84; void *fd88;
    char padd90[0xd98 - 0xd90]; int fd98;
    S_0008DB70 *func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4);
};

S_0008DB70 *S_0008DB70::func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4)
{
    char *self = (char *)this;
    void *p;
    f44 = a1;
    f48 = a2;
    f40 = a3;
    fd4c = a4;
    fd98 = a0;
    if (a4 != 0) {
        char *g = P4((char *)D_002A8490, 0x2e0);
        if (I4(g, 0x2d0) != 0) {
            *(float *)((char *)this + 0xd50) = 1.0f;
            fd64 = I4(P4(a2, 0x52c), 0x6350);
            I4(&D_002A60B0, 0) = I4(&D_00278664, 0);
            I4(&D_002A60B0, 4) = I4(&D_00278664, 4);
            I4(&D_002A60B0, 8) = I4(&D_00278664, 8);
            I4(&D_002A60B0, 0xc) = I4(&D_00278664, 0xc);
            B1(&D_002A60B0, 0x10) = B1(&D_00278664, 0x10);
        }
    }
    p = func_001E8A44(100);
    f164 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    p = func_001E8A44(100);
    f168 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    if (a0 == 0) {
        W_0008DB70 *w = (W_0008DB70 *)f164;
        w->func_001D5810(&D_0027A054, 20.0f, 381.0f, 0);
        if (I4(w, 0x28) != 0x43710000) {
            I4(w, 0x28) = 0x43710000;
            B1(w, 0x58) = B1(w, 0x58) | 1;
        }
        w = (W_0008DB70 *)f168;
        w->func_001D5810(&D_0027A054, 321.0f, 381.0f, 0);
        if (I4(w, 0x28) != 0x43710000) {
            I4(w, 0x28) = 0x43710000;
            B1(w, 0x58) = B1(w, 0x58) | 1;
        }
    }
    return this;
}
