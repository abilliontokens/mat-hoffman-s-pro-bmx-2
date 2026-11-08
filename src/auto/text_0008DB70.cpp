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
    void setWidth(float width) {
        if (f28 != width) { f28 = width; f58 |= 1; }
    }
    void setDepth(float depth) {
        if (f34 != depth) { f34 = depth; f58 |= 1; }
    }
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

extern char _D_002786A0[];
extern char _D_00278690[];
extern char _D_0027958C[];
extern char _D_002795B4[];
extern int _D_0028F5EC;
extern int _D_0028F5DC;
struct C2EC_0008DB70 {
    void func_0018C780(void *a, int b);
    int func_0018C160(void *a);
};
struct T2_0008DB70 {
    char padT0[4];
    int f4;
    float f8;
    char padTC[0x30];
    float f3c;
    char padT40[4];
    int f44;
    int f48;
    unsigned char f4e;
    T2_0008DB70 *func_001D5E90();
    void func_001D5FA0(int a, void *b, int c, int d);
    void func_0005E840(int s);
    void func_0005E960(int x, int y);
    void func_0005E9F0(int s);
};
S_0008DB70 *S_0008DB70::func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4, int a6)
{
    void *p;
    W_0008DB70 *w;
    f44 = a1;
    f48 = a2;
    f40 = a3;
    fd4c = a4;
    fd98 = a0;
    if (a4 != 0) {
        if (I4(P4((void *)D_002A8490, 0x2e0), 0x2d0) != 0) {
            *(float *)((char *)this + 0xd50) = 1.0f;
            fd64 = I4(P4(a2, 0x52c), 0x6350);
        }
    }
            I4(&D_002A60B0, 0) = I4(&D_00278664, 0);
            I4(&D_002A60B4, 0) = I4(&D_00278668, 0);
            I4(&D_002A60B8, 0) = I4(&D_0027866C, 0);
            I4(&D_002A60BC, 0) = I4(&D_00278670, 0);
            D_002A60C0 = D_00278674;
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
        if (f40 == 0) {
            w->func_001D5810(&D_0027A054, 80.0f, 167.0f, 0);
        w = (W_0008DB70 *)f168;
            if (w->f28 != 241.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 241.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 321.0f, 167.0f, 0);
        w = (W_0008DB70 *)f168;
        } else {
            w->func_001D5810(&D_0027A054, 80.0f, 391.0f, 0);
        w = (W_0008DB70 *)f164;
            if (w->f28 != 241.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 241.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 321.0f, 391.0f, 0);
        w = (W_0008DB70 *)f168;
        }
        if (w->f28 != 241.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 241.0f;
            w->f58 = c;
        }
    } else if (a0 == 2) {
        w = (W_0008DB70 *)f164;
        if (f40 == 0) {
            w->func_001D5810(&D_0027A054, 20.0f, 379.0f, 0);
        w = (W_0008DB70 *)f168;
            if (w->f28 != 145.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 145.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 165.0f, 379.0f, 0);
        w = (W_0008DB70 *)f168;
        } else {
            w->func_001D5810(&D_0027A054, 340.0f, 379.0f, 0);
        w = (W_0008DB70 *)f164;
            if (w->f28 != 145.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 145.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f168;
            w->func_001D5810(&D_0027A054, 485.0f, 379.0f, 0);
        w = (W_0008DB70 *)f168;
        }
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
        w->f38 = m;
        w->f58 = c;
        w->f38 |= 0xbfa35a;
    }
    w = (W_0008DB70 *)f168;
    {
        int m = w->f38 | 0xbfa35a;
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
        if (I4(P4((void *)D_002A8490, 0x2e0), 4) == 4) {
            w->func_001D5810(&D_002786B0, 430.0f, 73.0f, 0);
        w = (W_0008DB70 *)f170;
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 526.0f, 73.0f, 0);
        w = (W_0008DB70 *)f174;
        } else {
            w->func_001D5810(&D_002786B0, 20.0f, 102.0f, 0);
        w = (W_0008DB70 *)f174;
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 102.0f, 0);
        w = (W_0008DB70 *)f174;
        }
        w = (W_0008DB70 *)f170;
        if (w->f28 != 96.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 96.0f;
            w->f58 = c;
        }
    } else if (a0 == 1) {
        w = (W_0008DB70 *)f170;
        if (f40 == 0) {
            w->func_001D5810(&D_002786B0, 20.0f, 102.0f, 0);
        w = (W_0008DB70 *)f174;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 102.0f, 0);
        w = (W_0008DB70 *)f174;
        } else {
            w->func_001D5810(&D_002786B0, 20.0f, 326.0f, 0);
        w = (W_0008DB70 *)f170;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 326.0f, 0);
        w = (W_0008DB70 *)f174;
        }
        if (w->f28 != 96.0f) {
            unsigned char c = w->f58 | 1;
            w->f28 = 96.0f;
            w->f58 = c;
        }
    } else if (a0 == 2) {
        w = (W_0008DB70 *)f170;
        if (f40 == 0) {
            w->func_001D5810(&D_002786B0, 20.0f, 149.0f, 0);
        w = (W_0008DB70 *)f174;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 116.0f, 149.0f, 0);
        w = (W_0008DB70 *)f174;
        } else {
            w->func_001D5810(&D_002786B0, 429.0f, 149.0f, 0);
        w = (W_0008DB70 *)f170;
            if (w->f28 != 96.0f) {
                unsigned char c = w->f58 | 1;
                w->f28 = 96.0f;
                w->f58 = c;
            }
            w = (W_0008DB70 *)f174;
            w->func_001D5810(&D_002786B0, 524.0f, 149.0f, 0);
        w = (W_0008DB70 *)f174;
        }
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
    w->f38 |= 0xcccccc;
    w = (W_0008DB70 *)f174;
    {
        int m = w->f38 | 0xcccccc;
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
        I4(&D_002A60B0,0)=I4(&D_00278664,0);
        I4(&D_002A60B4,0)=I4(&D_00278668,0);
        I4(&D_002A60B8,0)=I4(&D_0027866C,0);
        I4(&D_002A60BC,0)=I4(&D_00278670,0);
        D_002A60C0=D_00278674;
        p=func_001E8A44(100);
        fd84=p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
        p=func_001E8A44(100);
        fd88=p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
        char *state=P4((void *)D_002A8490,0x2e0);
        if (I4(state,0)>1 && a6==0) {
            if (I4(state,8)==2) {
                if (f40==1) {
                    ((W_0008DB70 *)fd84)->func_001D5810(&D_002786B0,429.0f,47.0f,0);
                    ((W_0008DB70 *)fd84)->func_00051140(96.0f);
                    ((W_0008DB70 *)fd88)->func_001D5810(&D_002786B0,524.0f,47.0f,0);
                    ((W_0008DB70 *)fd88)->func_00051140(96.0f);
                } else {
                    ((W_0008DB70 *)fd84)->func_001D5810(&D_002786B0,20.0f,47.0f,0);
                    ((W_0008DB70 *)fd84)->func_00051140(96.0f);
                    ((W_0008DB70 *)fd88)->func_001D5810(&D_002786B0,116.0f,47.0f,0);
                    ((W_0008DB70 *)fd88)->func_00051140(96.0f);
                }
            } else if (I4(state,8)==1) {
                float y=f40==0 ? 45.0f : 269.0f;
                ((W_0008DB70 *)fd84)->func_001D5810(&D_002786B0,20.0f,y,0);
                ((W_0008DB70 *)fd84)->func_00051140(96.0f);
                ((W_0008DB70 *)fd88)->func_001D5810(&D_002786B0,116.0f,y,0);
                ((W_0008DB70 *)fd88)->func_00051140(96.0f);
            }
        } else {
            ((W_0008DB70 *)fd84)->func_001D5810(&D_002786B0,20.0f,47.0f,0);
            w=(W_0008DB70 *)fd84;
            if(w->f28!=96.0f){unsigned char c=w->f58|1;w->f28=96.0f;w->f58=c;}
            ((W_0008DB70 *)fd88)->func_001D5810(&D_002786B0,116.0f,47.0f,0);
            w=(W_0008DB70 *)fd88;
            if(w->f28!=96.0f){unsigned char c=w->f58|1;w->f28=96.0f;w->f58=c;}
        }
        w=(W_0008DB70 *)fd88;
        I4(w,0x3c)=0x3f800000;
        I4(w,0x48)=0x3f800000;
        w->f58|=4;
        w->f40=0;w->f44=0;
        w=(W_0008DB70 *)fd84;
        if(w->f34!=6.0f){unsigned char c=w->f58|1;w->f34=6.0f;w->f58=c;}
        w=(W_0008DB70 *)fd88;
        if(w->f34!=6.0f){w->f34=6.0f;w->f58|=1;}
    }
    return this;
}
