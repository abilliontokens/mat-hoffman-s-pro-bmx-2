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
extern char D_00278668, D_0027866C, D_00278670, D_00278674;
extern char D_002A60B4, D_002A60B8, D_002A60BC, D_002A60C0;
void *func_001E8A44(int size);
struct W_0008DB70 {
    char pad0[0x28];
    float f28; float f2c; char pad30[0x34 - 0x30]; float f34;
    int f38; char pad3c[0x40 - 0x3c]; int f40; int f44; float f48;
    char pad4c[0x58 - 0x4c]; unsigned char f58;
    W_0008DB70 *func_001D5760();
    void func_00051140(float width);
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
    char padd90[0xd98 - 0xd8c]; int fd98;
    S_0008DB70 *func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4);
    S_0008DB70 *func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4, int a6);
};

S_0008DB70 *S_0008DB70::func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4)
{
    void *p;
    W_0008DB70 *w;
    f44 = a1;
    f48 = a2;
    f40 = a3;
    fd4c = a4;
    fd98 = a0;
    if (a4 != 0) {
        if (I4(P4((char *)D_002A8490, 0x2e0), 0x2d0) != 0) {
            int t0, t1, t2, t3;
            unsigned char t4;
            *(float *)((char *)this + 0xd50) = 1.0f;
            fd64 = I4(P4(a2, 0x52c), 0x6350);
            t0 = I4(&D_00278664, 0);
            t1 = I4(&D_00278668, 0);
            t2 = I4(&D_0027866C, 0);
            I4(&D_002A60B0, 0) = t0;
            t3 = I4(&D_00278670, 0);
            I4(&D_002A60B4, 0) = t1;
            t4 = B1(&D_00278674, 0);
            I4(&D_002A60B8, 0) = t2;
            I4(&D_002A60BC, 0) = t3;
            B1(&D_002A60C0, 0) = t4;
        }
    }
    p = func_001E8A44(100);
    f164 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    p = func_001E8A44(100);
    f168 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    if (a0 == 0) {
        w = (W_0008DB70 *)f164;
        w->func_001D5810(&D_0027A054, 80.0f, 381.0f, 0);
        w = (W_0008DB70 *)f164;
        if (w->f28 != 241.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 241.0f;
            w->f58 = c;
        }
        w = (W_0008DB70 *)f168;
        w->func_001D5810(&D_0027A054, 321.0f, 381.0f, 0);
        w = (W_0008DB70 *)f168;
        if (w->f28 != 241.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 241.0f;
            w->f58 = c;
        }
    } else if (a0 == 1) {
        w = (W_0008DB70 *)f164;
        if (f40 != 0) {
            w->func_001D5810(&D_0027A054, 80.0f, 391.0f, 0);
            w = (W_0008DB70 *)f164;
            if (w->f28 != 241.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 241.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 321.0f, 391.0f, 0);
        } else {
            w->func_001D5810(&D_0027A054, 80.0f, 167.0f, 0);
            w = (W_0008DB70 *)f164;
            if (w->f28 != 241.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 241.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 321.0f, 167.0f, 0);
        }
        w = (W_0008DB70 *)f168;
        if (w->f28 != 241.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 241.0f;
            w->f58 = c;
        }
    } else if (a0 == 2) {
        w = (W_0008DB70 *)f164;
        if (f40 != 0) {
            w->func_001D5810(&D_0027A054, 340.0f, 379.0f, 0);
            w = (W_0008DB70 *)f164;
            if (w->f28 != 145.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 145.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 485.0f, 379.0f, 0);
        } else {
            w->func_001D5810(&D_0027A054, 20.0f, 379.0f, 0);
            w = (W_0008DB70 *)f164;
            if (w->f28 != 145.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 145.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 165.0f, 379.0f, 0);
        }
        w = (W_0008DB70 *)f168;
        if (w->f28 != 145.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 145.0f;
            w->f58 = c;
        }
    }
    w = (W_0008DB70 *)f168;
    w->f40 = 0;
    w->f44 = 0;
    I4(w, 0x3c) = 0x3f800000;
    I4(w, 0x48) = 0x3f800000;
    w->f58 |= 4;
    w = (W_0008DB70 *)f164;
    {
        int m = w->f38 & 0xffbfa35a;
        unsigned char c = w->f58 | 2;
        w->f58 = c;
        w->f38 = m | 0xbfa35a;
    }
    w = (W_0008DB70 *)f168;
    {
        int m = (w->f38 & 0xffbfa35a) | 0xbfa35a;
        unsigned char c = w->f58 | 2;
        w->f38 = m;
        w->f58 = c;
    }
    w = (W_0008DB70 *)f164;
    if (w->f34 != 6.0f) {
        unsigned char c = w->f58 | 1;
        w->f34 = 6.0f;
        w->f58 = c;
    }
    w = (W_0008DB70 *)f168;
    if (w->f34 != 6.0f) {
        w->f34 = 6.0f;
        w->f58 |= 1;
    }
    p = func_001E8A44(100);
    f170 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    p = func_001E8A44(100);
    f174 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    if (a0 == 0) {
        w = (W_0008DB70 *)f170;
        if (I4(P4((char *)D_002A8490, 0x2e0), 4) != 4) {
            w->func_001D5810(&D_002786B0, 430.0f, 73.0f, 0);
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 526.0f, 73.0f, 0);
        } else {
            w->func_001D5810(&D_002786B0, 20.0f, 102.0f, 0);
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 102.0f, 0);
        }
        w = (W_0008DB70 *)f170;
        if (w->f28 != 96.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 96.0f;
            w->f58 = c;
        }
    } else if (a0 == 1) {
        w = (W_0008DB70 *)f170;
        if (f40 != 0) {
            w->func_001D5810(&D_002786B0, 326.0f, 102.0f, 0);
            w = (W_0008DB70 *)f170;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 326.0f, 0);
        } else {
            w->func_001D5810(&D_002786B0, 20.0f, 102.0f, 0);
            w = (W_0008DB70 *)f170;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 102.0f, 0);
        }
        w = (W_0008DB70 *)f174;
        if (w->f28 != 96.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 96.0f;
            w->f58 = c;
        }
    } else if (a0 == 2) {
        w = (W_0008DB70 *)f170;
        if (f40 != 0) {
            w->func_001D5810(&D_002786B0, 429.0f, 149.0f, 0);
            w = (W_0008DB70 *)f170;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 524.0f, 149.0f, 0);
        } else {
            w->func_001D5810(&D_002786B0, 20.0f, 149.0f, 0);
            w = (W_0008DB70 *)f170;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 149.0f, 0);
        }
        w = (W_0008DB70 *)f174;
        if (w->f28 != 96.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 96.0f;
            w->f58 = c;
        }
    }
    w = (W_0008DB70 *)f174;
    {
        unsigned char c = w->f58 | 4;
        w->f40 = 0;
        w->f44 = 0;
        w->f58 = c;
        I4(w, 0x3c) = 0x3f800000;
        I4(w, 0x48) = 0x3f800000;
    }
    w = (W_0008DB70 *)f170;
    w->f58 |= 2;
    w->f38 = (w->f38 & 0xffcccccc) | 0xcccccc;
    w = (W_0008DB70 *)f174;
    {
        int m = (w->f38 & 0xffcccccc) | 0xcccccc;
        unsigned char c = w->f58 | 2;
        w->f38 = m;
        w->f58 = c;
    }
    w = (W_0008DB70 *)f170;
    if (w->f34 != 6.0f) {
        unsigned char c = w->f58 | 1;
        w->f34 = 6.0f;
        w->f58 = c;
    }
    w = (W_0008DB70 *)f174;
    if (w->f34 != 6.0f) {
        w->f34 = 6.0f;
        w->f58 |= 1;
    }
    if (a5 != 0) {
        int t0, t1, t2, t3;
        unsigned char t4;
        t0 = I4(&D_00278664, 0);
        t1 = I4(&D_00278668, 0);
        t2 = I4(&D_0027866C, 0);
        I4(&D_002A60B0, 0) = t0;
        t3 = I4(&D_00278670, 0);
        I4(&D_002A60B4, 0) = t1;
        t4 = B1(&D_00278674, 0);
        I4(&D_002A60B8, 0) = t2;
        I4(&D_002A60BC, 0) = t3;
        B1(&D_002A60C0, 0) = t4;
        p = func_001E8A44(100);
        fd84 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
        p = func_001E8A44(100);
        fd88 = (p != 0) ? ((W_0008DB70 *)p)->func_001D5760() : 0;
    }
    return this;
}
