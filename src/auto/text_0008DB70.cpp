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
extern char _D_0027A048[];
extern char _D_0027A03C[];
extern char _D_0027A030[];
extern char _D_0027A01C[];
extern char _D_00279FF8[];
extern char _D_00279FE0[];
extern char _D_00279FD0[];
extern char _D_00279FB4[];
extern char _D_00279FA8[];
extern char _D_00279F98[];
extern char _D_002A5FA8[];
extern char _D_002A5870[];
extern char _D_002A47F0[];
extern char _D_002A5348[];
extern char _D_00275678[];
extern char _D_00279FC0[];
extern char _D_00279920[];
extern char _D_002A48F8[];
void func_001ADCC0(int a, ...);
void func_001CF740(int a, int b, int c);
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
struct T_0008DB70 {
    T_0008DB70 *func_001B12C0(int a);
    void func_001B13A0(void *a, void *b, int c, int d);
    void func_001B1A30(int a, int b, int c);
    void func_001B2270(int c);
    void func_001B19A0(int f);
    void func_001B1BF0(float s);
          void func_001B1AB0(int a, int b);
  };
  struct O_0008DB70 {
      O_0008DB70 *func_001CF740(int a, int b, int c);
  };
  struct S_0008DB70 {
    char pad0[0x40];
    int f40; int f44; char *f48;
    char pad4c[0x164 - 0x4c];
    void *f164; void *f168; void *f16c; void *f170; void *f174;
    char pad178[0xd3c - 0x178];
          void *fd3c; void *fd40; void *fd44; void *fd48;
      int fd4c; int fd50; char padd54[0xd64 - 0xd54]; int fd64;
    char padd68[0xd84 - 0xd68]; void *fd84; void *fd88;
    char padd90[0xd98 - 0xd8c]; int fd98;
    S_0008DB70 *func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4);
          S_0008DB70 *func_0008DB70(char *a2, int a1, int a0, int a3, int a5, int a4, int a6);
      void func_001577A0(void *w, int i);
      void func_000843E0(int a);
  };

extern char _D_002786A0[];
extern char _D_00278690[];
extern char _D_0027958C[];
extern char _D_002795B4[];
extern int _D_0028F5EC;
extern int _D_0028F5DC;
extern int _D_0028F5E0;
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
        w = (W_0008DB70 *)f174;
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
                if (f40==0) {
                    ((W_0008DB70 *)fd84)->func_001D5810(&D_002786B0,20.0f,45.0f,0);
                    ((W_0008DB70 *)fd84)->func_00051140(96.0f);
                    ((W_0008DB70 *)fd88)->func_001D5810(&D_002786B0,116.0f,45.0f,0);
                    ((W_0008DB70 *)fd88)->func_00051140(96.0f);
                } else {
                    ((W_0008DB70 *)fd84)->func_001D5810(&D_002786B0,20.0f,269.0f,0);
                    ((W_0008DB70 *)fd84)->func_00051140(96.0f);
                    ((W_0008DB70 *)fd88)->func_001D5810(&D_002786B0,116.0f,269.0f,0);
                    ((W_0008DB70 *)fd88)->func_00051140(96.0f);
                }
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
        {
            char *stt = P4((void *)D_002A8490, 0x2e0);
            C2EC_0008DB70 *mgr = (C2EC_0008DB70 *)P4((void *)D_002A8490, 0x2ec);
            int sel;
            int locbuf[2];
            if (I4(stt, 8) != 0) {
                locbuf[1] = (int)_D_002786A0;
                mgr->func_0018C780(locbuf, 1);
                int c0 = mgr->func_0018C160(_D_002786A0);
                sel = c0 ? *(int *)c0 : 0;
                p = func_001E8A44(0x60);
                T2_0008DB70 *t1 = (T2_0008DB70 *)(p ? ((T2_0008DB70 *)p)->func_001D5E90() : 0);
                I4(this, 0xd7c) = (int)t1;
                t1->func_001D5FA0(sel, _D_002786A0, 5, 0);
                t1->func_0005E840(I4(I4(P4((void *)D_002A8490, 0x2e8), 4), 0x1010));
                if (t1->f48 != 0xffcccccc) { t1->f4e |= 8; t1->f48 = (t1->f48 & 0xffcccccc) | 0xcccccc; }
            }
            locbuf[1] = (int)_D_00278690;
            mgr->func_0018C780(locbuf, 2);
            int c1 = mgr->func_0018C160(_D_00278690);
            sel = c1 ? *(int *)c1 : 0;
            p = func_001E8A44(0x60);
            T2_0008DB70 *t2 = (T2_0008DB70 *)(p ? ((T2_0008DB70 *)p)->func_001D5E90() : 0);
            I4(this, 0xd7c) = (int)t2;
            t2->func_001D5FA0(sel, _D_00278690, 5, 0);
            t2->func_0005E840(I4(I4(P4((void *)D_002A8490, 0x2e8), 4), 0x1010));
            if (t2->f48 != 0xffcccccc) { t2->f4e |= 8; t2->f48 = (t2->f48 & 0xffcccccc) | 0xcccccc; }
            int c2 = mgr->func_0018C160(_D_0027958C);
            sel = c2 ? *(int *)c2 : 0;
            p = func_001E8A44(0x60);
            T2_0008DB70 *t3 = (T2_0008DB70 *)(p ? ((T2_0008DB70 *)p)->func_001D5E90() : 0);
            I4(this, 0xd80) = (int)t3;
            t3->func_001D5FA0(sel, _D_0027958C, 0xf, 0);
            t3->func_0005E840((int)_D_002795B4);
            if (t3->f48 != 0xffbfa35a) { t3->f4e |= 8; t3->f48 = (t3->f48 & 0xffbfa35a) | 0xbfa35a; }
            if (I4(stt, 0) > 1 && a6 == 0) {
                T2_0008DB70 *t7 = (T2_0008DB70 *)I4(this, 0xd7c);
                T2_0008DB70 *t8 = (T2_0008DB70 *)I4(this, 0xd80);
                if (I4(stt, 8) == 2) {
                    t7->func_0005E960(0x257, 0x1a);
                    t7->func_0005E9F0(_D_0028F5EC);
                    t8->func_0005E960(0x257, 0x34);
                    t8->func_0005E9F0(_D_0028F5EC);
                } else if (I4(stt, 8) != 1) {
                    t7->func_0005E960(0x28, 0x1a);
                    t7->func_0005E9F0(_D_0028F5DC);
                    t8->func_0005E960(0x34, 0x28);
                    t8->func_0005E9F0(_D_0028F5DC);
                } else if (f40 == 0) {
                    t7->func_0005E960(0x28, 0x1a);
                    t7->func_0005E9F0(_D_0028F5DC);
                    t8->func_0005E960(0x31, 0x28);
                    t8->func_0005E9F0(_D_0028F5DC);
                } else {
                    t7->func_0005E960(0x28, 0xfa);
                    t7->func_0005E9F0(_D_0028F5DC);
                    t8->func_0005E960(0x28, 0x111);
                    t8->func_0005E9F0(_D_0028F5DC);
                }
            }
            {
                T2_0008DB70 *t7 = (T2_0008DB70 *)I4(this, 0xd7c);
                T2_0008DB70 *t8 = (T2_0008DB70 *)I4(this, 0xd80);
                if (t7->f4 != 0 || t7->f8 != 26.0f) { t7->f8 = 26.0f; t7->f4e |= 6; t7->f4 = 0; }
                if (t7->f44 != _D_0028F5DC) { t7->f44 = _D_0028F5DC; t7->f4e |= 6; }
                if (t8->f4 != 0 || t8->f8 != 50.0f) { t8->f4e |= 6; t8->f4 = 0; t8->f8 = 50.0f; }
                if (t8->f44 != _D_0028F5DC) { t8->f44 = _D_0028F5DC; t8->f4e |= 6; }
                if (t7->f3c != 5.0f) { t7->f4e |= 4; t7->f3c = 5.0f; }
            }
        }
    }
    {
        char *stt = P4((void *)D_002A8490, 0x2e0);
        if (I4(stt, 0) > 1 && a6 == 0) {
            if (I4(stt, 8) == 2) {
                p = func_001E8A44(100);
                fd3c = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd3c)->func_001D5810(_D_0027A048, 28.0f, 90.0f, 0);
                p = func_001E8A44(100);
                fd40 = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd40)->func_001D5810(_D_0027A03C, 92.0f, 90.0f, 0);
                p = func_001E8A44(100);
                fd44 = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd44)->func_001D5810(_D_0027A030, 156.0f, 90.0f, 0);
            } else if (I4(stt, 8) == 1) {
                p = func_001E8A44(100);
                fd3c = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd3c)->func_001D5810(_D_0027A048, 475.0f, 90.0f, 0);
                p = func_001E8A44(100);
                fd40 = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd40)->func_001D5810(_D_0027A03C, 475.0f, 310.0f, 0);
                p = func_001E8A44(100);
                fd44 = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd44)->func_001D5810(_D_0027A030, 900.0f, 310.0f, 0);
            } else {
                p = func_001E8A44(100);
                fd3c = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
                ((W_0008DB70 *)fd3c)->func_001D5810(_D_0027A048, 475.0f, 120.0f, 0);
            }
        }
    }
    {
        char *stt = P4((void *)D_002A8490, 0x2e0);
        if (I4(stt, 0) > 1 && a6 == 0) {
            p = func_001E8A44(100);
            fd48 = p ? ((W_0008DB70 *)p)->func_001D5760() : 0;
            ((W_0008DB70 *)fd48)->func_001D5810(_D_0027A01C, 492.0f, 91.0f, 0);
        }
    }
    {
        C2EC_0008DB70 *mgr = (C2EC_0008DB70 *)P4((void *)D_002A8490, 0x2ec);
        int c3 = mgr->func_0018C160(_D_0027958C);
        int sel3 = c3 ? *(int *)c3 : 0;
        p = func_001E8A44(0x60);
        T2_0008DB70 *t4 = (T2_0008DB70 *)(p ? ((T2_0008DB70 *)p)->func_001D5E90() : 0);
        I4(this, 0x18c) = (int)t4;
        t4->func_001D5FA0(sel3, _D_0027958C, 0, 4);
        t4->func_0005E840((int)_D_002795B4);
        if (t4->f48 != 0xff326a86) { t4->f4e |= 8; t4->f48 = (t4->f48 & 0xff326a86) | 0x326a86; }
        if (t4->f4 != 0 || t4->f8 != 388.0f) { t4->f8 = 388.0f; t4->f4e |= 6; t4->f4 = 0; }
        if (t4->f44 != _D_0028F5DC) { t4->f44 = _D_0028F5DC; t4->f4e |= 6; }
        if (t4->f3c != 80.0f) { t4->f4e |= 4; t4->f3c = 80.0f; }
    }
    {
        p = func_001E8A44(0x184);
        T_0008DB70 *tt = (T_0008DB70 *)(p ? ((T_0008DB70 *)p)->func_001B12C0(1) : 0);
        I4(this, 0x178) = (int)tt;
        tt->func_001B13A0(_D_00279FF8, _D_00279FE0, 0, 0x3c);
        tt->func_001B1A30(0x441b0000, 0x429a0000, 0);
        tt->func_001B2270(0xff308930);
        tt->func_001B19A0(_D_0028F5E0);
        tt->func_001B1BF0(5.0f);
        tt->func_001B1AB0(0, 0);
        func_001577A0(tt, -1);
    }
    if (a0 == 1) {
        I4(this, 0xd18) = 0x30;
        I4(this, 0xd1c) = 0x56;
        I4(this, 0xd2c) = 0;
        I4(this, 0xd28) = (f40 ? 0xe0 : 0) + 0x8a;
    } else if (a0 == 2) {
        I4(this, 0xd18) = 0x40;
        I4(this, 0xd1c) = 0x90;
        I4(this, 0xd28) = 0x140;
        if (f40 == 0) {
            I4(this, 0xd20) = 0x140;
            I4(this, 0xd2c) = 0;
        } else {
            I4(this, 0xd2c) = 0x140;
            I4(this, 0xd20) = 0x280;
        }
    } else {
        I4(this, 0xd18) = 0x40;
        I4(this, 0xd1c) = 0x90;
        I4(this, 0xd28) = 0x140;
        I4(this, 0xd2c) = 0;
    }
    {
        p = func_001E8A44(100);
        W_0008DB70 *w10 = (W_0008DB70 *)(p ? ((W_0008DB70 *)p)->func_001D5760() : 0);
        I4(this, 0xd10) = (int)w10;
        w10->func_001D5810(_D_00279FD0, 480.0f, 224.0f, 0);
        float fw = (float)I4(this, 0xd18);
        if (w10->f28 != fw) { w10->f28 = fw; w10->f58 |= 1; }
        fw = (float)I4(this, 0xd1c);
        if (w10->f2c != fw) { w10->f2c = fw; w10->f58 |= 1; }
        {
            int m = w10->f38 | 0xffffff;
            unsigned char c = w10->f58 | 2;
            w10->f38 = m;
            w10->f58 = c;
        }
        if (w10->f34 != 4.0f) { w10->f34 = 4.0f; w10->f58 |= 1; }
    }
    I4(this, 0xd30) = 0;
    {
        p = func_001E8A44(100);
        W_0008DB70 *w14 = (W_0008DB70 *)(p ? ((W_0008DB70 *)p)->func_001D5760() : 0);
        I4(this, 0xd14) = (int)w14;
        w14->func_001D5810(_D_00279FE0, 477.0f, 311.0f, 0);
        float fw = (float)I4(this, 0xd18);
        if (w14->f28 != fw) { w14->f28 = fw; w14->f58 |= 1; }
        fw = (float)I4(this, 0xd1c);
        if (w14->f2c != fw) { w14->f2c = fw; w14->f58 |= 1; }
        {
            int m = w14->f38 | 0xffffff;
            unsigned char c = w14->f58 | 2;
            w14->f38 = m;
            w14->f58 = c;
        }
        B1(w14, 0x3b) = 0;
        if (w14->f34 != 7.0f) { w14->f34 = 7.0f; w14->f58 |= 1; }
    }
    {
        p = func_001E8A44(100);
        W_0008DB70 *w19 = (W_0008DB70 *)(p ? ((W_0008DB70 *)p)->func_001D5760() : 0);
        I4(this, 0x194) = (int)w19;
        w19->func_001D5810(_D_00279FE0, 477.0f, 311.0f, 0);
        if (w19->f28 != 544.0f) { w19->f28 = 544.0f; w19->f58 |= 1; }
        if (w19->f2c != 480.0f) { w19->f2c = 480.0f; w19->f58 |= 1; }
        {
            int m = w19->f38 | 0xffffff;
            unsigned char c = w19->f58 | 2;
            w19->f38 = m;
            w19->f58 = c;
        }
        B1(w19, 0x3b) = 0x80;
    }
    I4(this, 0xc5c) = 0;
    B1(this, 0xc64) = 0;
    I4(this, 0xca0) = 0;
    func_001ADCC0((int)&D_002A60B0, 0x104, (int)_D_00275678, (int)_D_002A5870, (int)_D_002A5FA8);
    {
        int fv = f40 ? 0x43f48000 : 0x43290000;
        I4(this, 0x140) = fv;
        I4(this, 0x148) = fv;
    }
    {
        p = func_001E8A44(0x184);
        T_0008DB70 *tt8 = (T_0008DB70 *)(p ? ((T_0008DB70 *)p)->func_001B12C0(1) : 0);
        I4(this, 0xd08) = (int)tt8;
        void *tn = a0 ? (void *)_D_002786A0 : (void *)_D_0027958C;
        tt8->func_001B13A0(tn, tn, 0, 0x3c);
        tt8->func_001B1A30(I4(this, 0x140), I4(this, 0x144), 0);
        tt8->func_001B2270(0xffbfa35a);
        tt8->func_001B19A0(_D_0028F5E0);
        tt8->func_001B1BF0(5.0f);
        tt8->func_001B1AB0(0, 0);
        func_001577A0(tt8, -1);
    }
    {
        p = func_001E8A44(0x184);
        T_0008DB70 *ttc = (T_0008DB70 *)(p ? ((T_0008DB70 *)p)->func_001B12C0(1) : 0);
        I4(this, 0xd0c) = (int)ttc;
        void *tn = a0 ? (void *)_D_002786A0 : (void *)_D_0027958C;
        ttc->func_001B13A0(tn, tn, 0, 0x3c);
        ttc->func_001B1A30(I4(this, 0x14c), I4(this, 0x148), 0);
        ttc->func_001B2270(0xffbfa35a);
        ttc->func_001B19A0(_D_0028F5E0);
        ttc->func_001B1BF0(5.0f);
        ttc->func_001B1AB0(0, 0);
        func_001577A0(ttc, -1);
    }
    func_000843E0(1);
    func_001ADCC0((int)&D_002A60B0, 0x104, (int)_D_00275678, (int)_D_002A5348, (int)_D_002A47F0, (int)_D_002A48F8);
    {
        p = func_001E8A44(0x20c);
        I4(this, 0xd34) = (int)p;
    }
    {
        T2_0008DB70 *o50 = (T2_0008DB70 *)I4(this, 0xc50);
        if (o50->f4 != 0x4415c000 || o50->f8 != 360.0f) { o50->f4 = 0x4415c000; o50->f8 = 360.0f; o50->f4e |= 6; }
        if (o50->f44 != _D_0028F5EC) { o50->f44 = _D_0028F5EC; o50->f4e |= 6; }
    }
    return this;
}
