/* 4 functions from 0x00106810 to 0x00107380, found by Ghidra. */
#include "common.h"
int func_001E8833(void);
extern float D_00278C58;

struct S_106E30_Fx {
    void func_001B3E70(void *a, void *b, float c, float d, float e);
    void func_001B4970(void);
};
struct S_106E30_Cfg {
    char pad0[0x1ac];
    int f1ac;
    char pad1b0[4];
    int f1b4;
    int f1b8;
    int f1bc;
    char v1c0[0x10];
    char v1d0[0x10];
    char v1e0[0x10];
    char v1f0[0x10];
    char v200[0x10];
    char v210[0x10];
};
struct S_106810_Player {
    char pad0[0x1c8];
    int f1c8;
};
struct S_106810_Global {
    char pad0[0x2a4];
    S_106810_Player *f2a4;
};
extern S_106810_Global *D_002A8490;
extern char D_00282A5C[];
struct S_106810_Vec {
    float x, y, z, w;
};
struct S_106810_Node {
    S_106810_Vec *func_00197F70(S_106810_Vec *out, S_106810_Vec *in);
    void func_00197E70(S_106810_Vec *v);
};
struct S_106810_Mgr {
    S_106810_Node *func_00198330(void *name);
};
struct S_106810_Arg {
    int f0;
    S_106810_Mgr *f4;
};
struct S_106810_Owner {
    char pad0[0x22c];
    S_106810_Node *f22c;
};
struct S_106810_Pos {
    char pad0[0x38];
    S_106810_Vec v38;
    S_106810_Vec v48;
};
struct S_106810_Btn {
    void func_0011CA60(S_106810_Vec v);
    void func_0009EDB0(char on);
};
struct C_00106810 {
    char pad0[0x1e0];
    S_106810_Owner *f1e0;
    char pad1e4[0x2c];
    S_106810_Pos *f210;
    char pad214[0x254];
    int f468;
    char pad46c[4];
    int f470;
    char pad474[0x368];
    S_106810_Btn *f7dc;
    S_106810_Btn *f7e0;
    char pad7e4[0xac4];
    unsigned char f12a8;
    void func_00106810(S_106810_Arg *arg, int mode);
};
extern float D_00275544;
struct S_107070_Vec { float x, y, z, w; };
struct S_107070_Obj { void func_001994C0(int a, S_107070_Vec *b, S_107070_Vec *c); };
struct S_107070_Ptr { int pad0; S_107070_Obj *f4; };
extern float D_00276288, D_002756DC, D_002755E8, D_00275460, D_00282A70;
extern const float D_00276DD4;
static __forceinline int Store_107070(int *dst, int v) { *dst = v; return v; }
int func_00011260(int a, int b);
struct C_00107070 {
    char pad0[0x744];
    float f744, f748, f74c, f750;
    char pad754[0x99c - 0x754];
    float f99c;
    char pad9a0[0xa04 - 0x9a0];
    S_107070_Ptr *fa04;
    char pada08[0x1178 - 0xa08];
    int f1178;
    char pad117c[0x163c - 0x117c];
    float f163c, f1640, f1644;
    int f1648;
    char pad164c[0x1654 - 0x164c];
    float f1654;
    char pad1658[0x1fa0 - 0x1658];
    float f1fa0;
    void func_00107070(float dt);
};
static inline float abs_106B20(float v) { volatile int bits = *(int *)&v & 0x7fffffff; return *(volatile float *)&bits; }
static inline float absp_106B20(float *v) { int bits = *(int *)v & 0x7fffffff; return *(float *)&bits; }
static inline float absf_106B20(float v) { int bits = *(int *)&v & 0x7fffffff; return *(float *)&bits; }
struct Vec_106B20 { int x,y,z,w; };
struct Obj_106B20 {
 char pad0[0x1cc]; unsigned char flags;
 void func_0011CA60(Vec_106B20);
 void func_0009DF90(float);
};
struct C_00106B20 {
 char pad0[0x1e8]; char *f1e8; char *f1ec;
 char pad1f0[0x1c]; char *f20c;
 char pad210[0x534]; float f744;
 char pad748[0x90]; Obj_106B20 *f7d8;
 char pad7dc[0x1c4]; float f9a0;
 char pad9a4[0x84]; int fa28;
 char pada2c[0x804]; S_106E30_Fx *f1230; S_106E30_Fx *f1234;
 char pad1238[0x70]; unsigned char flags;
 char pad12a9[0x2ef]; Obj_106B20 *f1598;
 void func_00106B20();
};
struct C_00106E30 {
    char pad0[0x950];
    S_106E30_Cfg *f950;
    char pad954[0x1238 - 0x954];
    S_106E30_Fx *f1238;
    S_106E30_Fx *f123c;
    S_106E30_Fx *f1240;
    void func_00106E30(void);
};

void C_00106810::func_00106810(S_106810_Arg *arg, int mode)
{
    int b1;
    int b2;
    int b3;
    S_106810_Vec v;
    S_106810_Vec v2;
    S_106810_Node *node;

    if (D_002A8490->f2a4->f1c8 == 0) {
        f12a8 &= 0x8f;
    }
    if ((f468 != 0 || D_002A8490->f2a4->f1c8 != 0) && f470 == 0) {
        b1 = 0;
        if (mode == 1 || mode == 4) {
            b1 = 1;
        }
        if (D_002A8490->f2a4->f1c8 != 0) {
            if (f12a8 & 0x10) {
                b1 = 1;
            } else {
                b1 = 0;
            }
        }
        if (b1) {
            f1e0->f22c->func_00197F70(&v, &f210->v38);
            f7dc->func_0011CA60(v);
            f7dc->func_0009EDB0(1);
            if (D_002A8490->f2a4->f1c8 == 0) {
                f12a8 |= 0x10;
            }
        }
        b2 = 0;
        if (mode == 2 || mode == 4) {
            b2 = 1;
        }
        if (D_002A8490->f2a4->f1c8 != 0) {
            if (f12a8 & 0x20) {
                b2 = 1;
            } else {
                b2 = 0;
            }
        }
        if (b2) {
            f1e0->f22c->func_00197F70(&v, &f210->v48);
            f7e0->func_0011CA60(v);
            f7e0->func_0009EDB0(1);
            if (D_002A8490->f2a4->f1c8 == 0) {
                f12a8 |= 0x20;
            }
        }
        b3 = 0;
        if (mode == 8) {
            b3 = 1;
        }
        if (D_002A8490->f2a4->f1c8 != 0) {
            if (f12a8 & 0x40) {
                b3 = 1;
            } else {
                b3 = 0;
            }
        }
        if (b3) {
            v.x = v.y = v.z = 0.0f;
            v.w = 1.0f;
            node = arg->f4->func_00198330(D_00282A5C);
            node->func_00197E70(&v);
            f7dc->func_0011CA60(*node->func_00197F70(&v2, &v));
            f7dc->func_0009EDB0(1);
            f7e0->func_0009EDB0(0);
            if (D_002A8490->f2a4->f1c8 == 0) {
                f12a8 |= 0x40;
            }
        }
        if (D_002A8490->f2a4->f1c8 == 0 || b3 || b2 || b1) {
            return;
        }
    }
    f7dc->func_0009EDB0(0);
    f7e0->func_0009EDB0(0);
}

void __fastcall func_00106B20(C_00106B20 * volatile self) {
    C_00106B20 *q;
    int active;
    float amount;
    float ratio;
    int bits;
    float strength;
    float rate;
    if (D_002A8490->f2a4->f1c8 == 0) {
        q = self;
        q->flags &= ~2;
        q = self;
        q->flags &= ~4;
        q = self;
        q->flags &= ~8;
    }
    q = self;
    q->f1234->func_001B4970();
    q = self;
    active = 0;
    amount = 0;
    if (q->f9a0 > D_00275544 || (*(int *)(q->f20c + 0x30) == 1 && *(char **)(q->f1e8 + 0x1d8) && (*(unsigned char *)(*(char **)(q->f1e8 + 0x1d8) + 0xa7) & 8))) {
        active = 1;
        amount = q->f9a0;
    }
    if (D_002A8490->f2a4->f1c8) {
        if (q->flags & 4) {
            amount = 1;
            active = 1;
        } else {
            active = 0;
        }
    }
    q->f7d8->func_0011CA60(*(Vec_106B20 *)(q->f1e8 + 0x130));
    q = self;
    if (*(int *)(q->f1e8 + 0x54) == 1 && active) {
        ratio = q->f744 / *(float *)(q->f1ec + 0x3c);
        bits = *(int *)&ratio & 0x7fffffff;
        strength = *(float *)&bits * amount;
        rate = .1f;
        q = self;
        if (q->f1598 || *(int *)(*(char **)((char *)D_002A8490 + 0x2e0) + 0x190 + q->fa28 * 4) == 12) {
            rate = .3f;
        }
        q->f1230->func_001B3E70(q->f1e8 + 0x130, q->f1e8 + 0x190, rate, 1.0f, strength);
        if (D_002A8490->f2a4->f1c8 == 0) {
            q = self;
            q->flags |= 4;
        }
        int valid = 0;
        q = self;
        if (q->f7d8 && *(int *)(q->f20c + 0x30) == 1) {
            valid = 1;
        }
        if (D_002A8490->f2a4->f1c8) {
            if (!(q->flags & 8)) {
                return;
            }
        } else if (!valid) {
            return;
        }
        q->f7d8->func_0009DF90(strength);
        q = self;
        if (q->f1598) {
            q->f1598->func_0011CA60(*(Vec_106B20 *)(q->f1e8 + 0x130));
            q = self;
            q->f1598->flags |= 2;
        }
        q = self;
        if (D_002A8490->f2a4->f1c8 == 0) {
            q->flags |= 8;
        }
    } else {
        q->f1230->func_001B4970();
        q = self;
        if (q->f7d8) {
            q->f7d8->flags &= ~2;
        }
        q = self;
        if (q->f1598) {
            q->f1598->func_0011CA60(*(Vec_106B20 *)(q->f1e8 + 0x130));
            q = self;
            q->f1598->flags &= ~2;
        }
    }
}

void C_00106E30::func_00106E30(void)
{
    float x, y, z;

    if (f950->f1ac != 0) {
        if (f950->f1b4 != 0) {
            x = (float)func_001E8833() / 32768.0f;
            y = (float)func_001E8833() / 32768.0f;
            z = (float)func_001E8833() / 32768.0f * D_00278C58;
            f1238->func_001B3E70(f950->v1c0, f950->v1f0, z + 0.1f, y + 0.5f, x * x);
        } else {
            f1238->func_001B4970();
        }
        if (f950->f1b8 != 0) {
            x = (float)func_001E8833() / 32768.0f;
            y = (float)func_001E8833() / 32768.0f;
            z = (float)func_001E8833() / 32768.0f * D_00278C58;
            f123c->func_001B3E70(f950->v1d0, f950->v200, z + 0.1f, y + 0.5f, x * x);
        } else {
            f123c->func_001B4970();
        }
        if (f950->f1bc != 0) {
            x = (float)func_001E8833() / 32768.0f;
            y = (float)func_001E8833() / 32768.0f;
            z = (float)func_001E8833() / 32768.0f * D_00278C58;
            f1240->func_001B3E70(f950->v1e0, f950->v210, z + 0.1f, y + 0.5f, x * x);
        } else {
            f1240->func_001B4970();
        }
    } else {
        f1238->func_001B4970();
        f123c->func_001B4970();
        f1240->func_001B4970();
    }
}

void C_00107070::func_00107070(float dt)
{
    struct { S_107070_Vec b; S_107070_Vec a; } l;
    int r;
    int on;
    int on2;
    float t;
    int w;

    l.b.z = 0.0f; l.b.y = 0.0f; l.b.x = 0.0f; l.b.w = 1.0f;
    l.a.z = 0.0f; l.a.y = 0.0f; l.a.x = 0.0f; l.a.w = 1.0f;
    fa04->f4->func_001994C0(0, &l.b, &l.a);
    on = 0;
    on2 = 0;
    if (f1178) {
        if (f99c > D_00275544) {
            on = 1;
        } else {
            if (f1640 > D_00275544) {
                if (f1640 < D_00276288) {
                    on = 1;
                    on2 = on;
                }
                f1640 -= dt;
            } else {
                r = func_00011260(0x1e, 0x46);
                f1640 = (float)r * D_002756DC;
            }
        }
    }
    if (!(l.b.y > D_002755E8) && on) {
        if (f1fa0 < D_00275460) f1fa0 += dt;
        if (f1fa0 > D_00275460) f1fa0 = 1.0f;
        if (*(float *)&f1648 == D_00275544 && !on2) f1648 = 0x3f666666;
    } else {
        if (f1fa0 > D_00275544) {
            if (f1178) f1fa0 -= dt;
            else f1fa0 -= 2.0f * dt;
            if (f1fa0 < D_00275544) f1fa0 = 0.0f;
        }
        if (f1648 == 0x3f666666) f1648 = 0;
    }
    if (f1fa0 > D_00275544) {
        if (*(volatile float *)&l.b.y * f74c + l.b.x * f748 + l.b.z * f750 > D_00275544) {
            t = *(volatile float *)&f744 * f1654 * dt;
            if (t > D_00282A70) t = D_00282A70;
            f163c += t * f1fa0;
            if (f163c > D_00275460) f163c -= D_00275460;
        }
    }
    if (f1644 > *(float *)&f1648) {
        f1644 -= dt;
        if (f1644 < *(float *)&f1648) f1644 = *(float *)&f1648;
    } else {
        if (f1648 == 0x3f666666) f1644 += dt * 4.0f;
        else f1644 += dt * 0.5f;
        if (f1644 > *(float *)&f1648) {
            w = *(volatile int *)&f1648;
            *(int *)&f1644 = w;
            if (w == 0x3f666666) f1648 = 0;
        }
    }
}

