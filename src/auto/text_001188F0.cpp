/* 2 functions from 0x001188F0 to 0x00119810, found by Ghidra. */
#include "common.h"

struct Vec4 { float x, y, z, w; };
struct Res { int func_00026500(char* name, int a); };
struct Sub { void func_00199E30(Vec4 v, float f); };
struct Obj {
    char pad0[0x5e0]; float f5e0, f5e4;
    char pad1[0x718 - 0x5e8]; int mode;
    char pad2[0x950 - 0x71c]; char* p950;
    char pad3[0xa04 - 0x954]; int ia04;
    char pad4[0x12a8 - 0xa08]; char c12a8;
    char pad5[0x159c - 0x12a9]; Sub* s159c; Sub* s15a0;
    float GetF5E0(void) { return f5e0; }
    float GetF5E4(void) { return f5e4; }
    void func_001188F0(int a);
    void func_00106810(int a, int b);
    void func_00119680(int a);
};
extern Res* D_002A7CB8;
extern char D_00283D34[];
extern float D_002756D0, D_002756B8, D_002756E8;
extern Vec4 D_002A3A4C;
extern int D_002B921C;
#include <xmmintrin.h>

struct M4 {
    __m128 r0, r1, r2, r3;
};

extern const float D_00283D30, D_00275544, D_00275460, D_002755E8, D_00279B54;
extern char *D_002A8490;
void __stdcall func_00199C20(int a, void *b);
void __stdcall func_0019AD60(int a, void *b);
int __fastcall func_00197EC0(int a, void *b);
void __stdcall func_00198040(void *a, void *b);
void __stdcall func_001138E0(int a);
void func_00107380(void);
void func_0002D270(void);
void func_001048E0(void);
void func_001048C0(void);
void func_0010DCB0(void);
void __stdcall func_00108690_4(int a);
void func_00028070(int a);
int func_00029BD0(void);
void __stdcall func_00113F00(int a);

static inline float Wrap(float v) {
    if (v > D_002756D0) return v - D_002756B8;
    if (v < D_002756E8) return v + D_002756B8;
    return v;
}

static inline float Wrap2(float a) {
    if (a > D_002756D0)
        a -= D_002756B8;
    else if (a < D_002756E8)
        a += D_002756B8;
    return a;
}

void Obj::func_001188F0(int arg)
{
    char *t = (char *)this;
    M4 m2;
    Vec4 v = { 0.0f, 4.0f, 0.0f, 1.0f };
    int p18;
    if (*(int *)(*(int *)(t + 0x950) + 0xbc) == 0) {
        func_00199C20(0, &m2);
        func_0019AD60(0, &m2);
        m2 = *(M4 *)(void *)(*(int *)(*(int *)(t + 0x230) + 0x174) + 0xf0);
        {
            float *f = (float *)&m2;
            f[3] = f[3] + v.x;
            f[11] = f[11] + v.y;
            f[15] = f[15] + v.z;
        }
        func_0019AD60(0, &m2);
        func_0019AD60(0, &m2);
        func_0019AD60(0, &m2);
        func_0019AD60(0, &m2);
        if (*(int *)(t + 0x11dc) == 0 && (*(int *)(t + 0x454) == 0 || *(int *)(t + 0xa30) != 0)) {
            void (__stdcall **fp)(void *);
            int *o = *(int **)(t + 0xa08);
            fp = (void (__stdcall **)(void *))(*(int *)o + 0x10);
            (*fp)((void *)o);
            o = *(int **)(t + 0xa0c);
            fp = (void (__stdcall **)(void *))(*(int *)o + 0x10);
            (*fp)((void *)o);
            o = *(int **)(t + 0xa10);
            fp = (void (__stdcall **)(void *))(*(int *)o + 0x10);
            (*fp)((void *)o);
            o = *(int **)(t + 0xa14);
            fp = (void (__stdcall **)(void *))(*(int *)o + 0x10);
            (*fp)((void *)o);
        }
        func_00107380();
    }
    if (*(int *)(t + 0x20a0) == 0) {
        func_001138E0(arg);
    }
    {
        Vec4 out;
        int below;
        func_00198040(&out, (char *)t + 0x9c);
        below = (out.y < D_00283D30) != (out.y == D_00283D30);
        {
            char *b = t;
            int st = *(int *)(b + 0x15d8);
            int sub = *(int *)(b + 0x15dc);
            int edx = 0;
            switch (st) {
            case 0:
                if (sub == 0) {
                    if (*(int *)(b + 0x1178) == 0) {
                        sub = 8;
                    } else if (*(int *)(b + 0x1f88) == 0 || *(float *)(b + 0x9a0) != D_00275544 || *(int *)(b + 0x20a0) != 0) {
                        if (*(float *)(b + 0x744) < *(float *)(*(int *)(b + 0x1ec) + 0x34) * D_00279B54) {
                            sub = 1;
                        }
                    } else if (*(int *)(b + 0x4f8) == 0 || (edx = *(int *)(b + 0x698), edx == 4)) {
                        if (*(int *)(b + 0x20ac) != 0) {
                            sub = 0x12 - (*(int *)(b + 0x9d0) != 0);
                        } else {
                            if (below)
                                sub = 6;
                        }
                    } else {
                        sub = (edx != 2) + 3;
                    }
                }
                break;
            case 1:
                if (sub == 1) {
                    if (*(int *)(b + 0x634) != 0) {
                        sub = 0x10;
                        *(int *)(t + 0x1130) = 0;
                    }
                    if (*(int *)(b + 0x1f88) != 0 && *(int *)(b + 0x20a0) == 0 && *(float *)(b + 0x9a0) == D_00275544) {
                        sub = 2;
                        *(int *)(t + 0x1130) = 0;
                    }
                    if (*(int *)(b + 0x454) != 0) {
                        sub = 0xb;
                    }
                }
                break;
            case 2:
                if (sub == 2 && D_00275460 <= *(float *)(b + 0x15f4)) {
                    sub = 0;
                }
                break;
            case 3:
                if (sub == 3) {
                    if (D_00275460 <= *(float *)(b + 0x15f4)) {
                        sub = (-(*(int *)(b + 0x1178) != 0) & 0xfffffffd) + 8;
                    } else {
                        if (below)
                            sub = 6;
                    }
                } else if (sub == 8) {
                    p18 = *(int *)(b + 0x9f8);
                }
                break;
            case 4:
                if (sub == 4) {
                    if (D_00275460 <= *(float *)(b + 0x15f4) ||
                        (*(int *)(b + 0x1178) != 0 && D_002755E8 <= *(float *)(b + 0x15f4))) {
                        if (*(int *)(b + 0x1178) != 0) {
                            if (*(int *)(*(int *)(b + 0x1084) + 0x2c) == -1) {
                                sub = 5;
                            }
                        } else {
                            sub = 8;
                        }
                    } else {
                        if (below)
                            sub = 6;
                    }
                } else if (sub == 8) {
                    p18 = *(int *)(b + 0x9f8);
                }
                break;
            case 5:
                if (sub == 5) {
                    if (*(int *)(b + 0x1174) != 0) {
                        sub = 7;
                    }
                    if (D_00275460 <= *(float *)(b + 0x15f4)) {
                        sub = (-(*(int *)(b + 0x1178) != 0) & 8);
                    } else if (*(int *)(b + 0x20ac) != 0) {
                        if (*(int *)(b + 0x9d0) != 0) {
                            sub = 0x11;
                        } else if (below) {
                            sub = 6;
                        }
                    } else if (below) {
                        sub = 6;
                    }
                }
                if (*(int *)(b + 0x4f8) != 0 && (edx = *(int *)(b + 0x698), edx != 4)) {
                    sub = (edx != 2) + 3;
                }
                break;
            case 6:
                if (sub == 6 && D_00275460 <= *(float *)(b + 0x15f4)) {
                    sub = (*(int *)(b + 0x1178) != 0) - 1 & 8;
                }
                if (*(int *)(b + 0x4f8) != 0 && (edx = *(int *)(b + 0x698), edx != 4)) {
                    sub = (edx != 2) + 3;
                }
                break;
            case 7:
                if (sub == 7) {
                    if (D_00275460 <= *(float *)(b + 0x15f4)) {
                        sub = (*(int *)(b + 0x1178) != 0) - 1 & 8;
                    } else if (*(int *)(b + 0x20ac) == 0) {
                        if (below)
                            sub = 6;
                    } else if (*(int *)(b + 0x9d0) != 0) {
                        sub = 0x11;
                    }
                }
                if (*(int *)(b + 0x4f8) != 0 && (edx = *(int *)(b + 0x698), edx != 4)) {
                    sub = (edx != 2) + 3;
                }
                break;
            case 8:
                if (sub == 8) {
                    if (*(int *)(b + 0x1178) == 0) {
                        if (below)
                            sub = 6;
                    } else {
                        int c = *(int *)(*(int *)(b + 0x1084) + 0x2c);
                        if (c == -1) {
                            sub = 5;
                        } else {
                            sub = (999 < c) * 2 + 9;
                        }
                    }
                }
                if (*(int *)(b + 0x4f8) != 0 && *(int *)(b + 0x698) != 4) {
                    sub = (*(int *)(b + 0x698) != 2) + 3;
                }
                if (*(int *)(b + 0x11dc) != 0) {
                    sub = 10;
                    *(int *)(t + 0x1608) = 1;
                    *(int *)(t + 0x1610) = 1;
                }
                break;
            case 9:
                if (sub != 9) {
                    *(int *)(b + 0x1110) = 0;
                    break;
                }
                {
                    int *pi = *(int **)(b + 0x1084);
                    if (999 < pi[0xb]) {
                        sub = 0xb;
                        break;
                    }
                    int hit = 0;
                    if (0 < *pi &&
                        D_00275460 - *(float *)(b + 0x15f4) <=
                            *(float *)(*(int *)(*(int *)(b + 0x24) + 0x52c) + 0x1ebc + pi[0xb] * 4)) {
                        hit = 1;
                    }
                    if (D_00275460 <= *(float *)(b + 0x15f4) || hit) {
                        pi[0xb] = -1;
                        if (hit) {
                            *(int *)(t + 0x1608) = 1;
                            *(int *)(t + 0x1610) = 1;
                            *(float *)(t + 0x15f4) = 0.0f;
                        } else {
                            sub = (-(*(int *)(t + 0x1178) != 0) & 0xfffffffd) + 8;
                            *(int *)(t + 0x1110) = 0;
                        }
                        break;
                    }
                    if (*(int *)(b + 0x112c) == 0) {
                        break;
                    }
                    pi[0xb] = -1;
                    sub = 5;
                    *(int *)(t + 0x112c) = 0;
                }
                break;
            case 10:
                if (sub == 10) {
                    if (*(int *)(b + 0x470) == 0) {
                        if (*(int *)(b + 0x468) == 0) {
                            sub = 8;
                            *(int *)(t + 0x1608) = 1;
                            *(int *)(t + 0x1610) = 1;
                            *(int *)(t + 0x1628) = 1;
                        }
                        if (*(int *)(b + 0x4f8) != 0) {
                            sub = (*(int *)(b + 0x698) != 2) + 3;
                            *(int *)(t + 0x1628) = 1;
                        }
                    } else if (*(int *)(b + 0x47c) == 4) {
                        func_00028070(0);
                        *(int *)(t + 0x1610) = 1;
                        *(int *)(t + 0x47c) = 0;
                        if (*(int *)(*(int *)(D_002A8490 + 0x2a4) + 0x1c4) != 0) {
                            func_001048E0();
                        }
                        sub = 0;
                        *(int *)(t + 0x1628) = 1;
                    }
                }
                break;
            case 0xb:
                if (sub == 0xb) {
                    if (*(int *)(b + 0x454) == 0) {
                        sub = 0;
                    }
                    if (*(int *)(b + 0x1178) != 0 && *(int *)(b + 0x117c) != 0 && *(int *)(b + 0x680) != 0) {
                        sub = 8;
                        func_0010DCB0();
                    }
                    if (*(int *)(b + 0x4f8) == 0 || *(int *)(b + 0x698) == 4) {
                        break;
                    }
                    sub = (*(int *)(b + 0x698) != 2) + 3;
                    func_0010DCB0();
                }
                break;
            case 0xc:
                if (sub == 0xc) {
                    if (*(int *)(b + 0x1634) != 0) {
                        sub = 8;
                        if (*(int *)(*(int *)(D_002A8490 + 0x2a4) + 0x1c4) != 0) {
                            func_001048E0();
                        }
                        *(int *)(t + 0x1610) = 1;
                        *(int *)(t + 0x1634) = 0;
                    }
                    if (D_00275460 <= *(float *)(b + 0x15f4)) {
                        *(int *)(b + 0x704) = 0;
                        func_00108690_4(arg);
                        if (*(int *)(*(int *)(D_002A8490 + 0x2a4) + 0x1c4) != 0) {
                            func_001048C0();
                        }
                        *(float *)(t + 0x15f4) = -1.0f;
                        *(int *)(t + 0x160c) = 1;
                        *(int *)(t + 0x1634) = 1;
                    }
                    if (*(int *)(b + 0x4f8) == 0 || (edx = *(int *)(b + 0x698), edx == 4)) {
                        break;
                    }
                    sub = (edx != 2) + 3;
                }
                break;
            case 0xd:
                if (sub == 0xd) {
                    if (*(int *)(b + 0x1638) != 0) {
                        sub = 8;
                        *(int *)(t + 0x1610) = 1;
                        *(int *)(t + 0x1638) = 0;
                    }
                    if (D_00275460 <= *(float *)(b + 0x15f4)) {
                        *(int *)(b + 0x70c) = 0;
                        func_00108690_4(0);
                        *(float *)(t + 0x15f4) = 0.0f;
                        *(int *)(t + 0x160c) = 1;
                        *(int *)(t + 0x1638) = 1;
                    }
                }
                break;
            case 0xe:
                if (sub == 0xe && *(int *)(b + 0x69c) == 0) {
                    sub = 8;
                }
                break;
            case 0xf:
                if (sub == 0xf &&
                    (*(int *)(*(int *)(b + 0x20c) + 0x30) == 0 || *(int *)(b + 0x20a0) != 0)) {
                    sub = 1;
                }
                break;
            case 0x10:
                if (sub == 0x10) {
                    if (D_00275460 <= *(float *)(b + 0x15f4) || *(int *)(b + 0x20a0) != 0 || *(int *)(b + 0x634) == 0) {
                        sub = 1;
                        p18 = 0x3f800000;
                    }
                    if (*(int *)(b + 0x1f88) != 0) {
                        sub = 2;
                    }
                }
                break;
            case 0x11:
                if (sub == 0x11 && D_00275460 <= *(float *)(b + 0x15f4)) {
                    *(int *)(b + 0x9d0) = 0;
                    *(int *)(t + 0x20ac) = 0;
                    func_0002D270();
                    {
                        M4 m3;
                        func_00199C20(0, &m3);
                        func_0019AD60(0, &m3);
                    }
                    sub = (-(*(int *)(t + 0x1178) != 0) & 8);
                }
                break;
            case 0x12:
                if (*(int *)(b + 0x20ac) == 0) {
                    sub = 0;
                } else if (*(int *)(b + 0x9d0) != 0) {
                    sub = 0x11;
                }
                break;
            }
            {
                int newsub = *(int *)(b + 0x15dc);
                int oldst = *(int *)(b + 0x15d8);
                if (newsub != oldst) {
                    if ((newsub != 10 || *(int *)(b + 0x470) == 0) &&
                        (oldst != 10 || *(int *)(b + 0x470) == 0) &&
                        oldst != 0x11 && newsub != 0xc && oldst != 0xc && newsub != 0xd && oldst != 0xd) {
                        *(int *)(b + 0x1608) = 1;
                        *(int *)(t + 0x1610) = 1;
                    }
                    if (*(int *)(b + 0x15dc) == 1) {
                        *(int *)(t + 0x15e0) = func_00029BD0();
                    }
                    if (*(int *)(b + 0x15dc) == 6) {
                        int o = *(int *)*(int *)(*(int *)(D_002A8490 + 8) + 0x14 + *(int *)(b + 0x970) * 4);
                        int (__stdcall **fp)(int, float, int) = (int (__stdcall **)(int, float, int))(*(int *)o + 0x3c);
                        (*fp)(200, 0.3f, 0);
                    }
                    *(unsigned int *)(b + 0x15fc) = (-(*(int *)(b + 0x15d8) != 0x10) & 2);
                    *(int *)(t + 0x15d8) = *(int *)(t + 0x15dc);
                    *(float *)(t + 0x15f4) = 0.0f;
                    *(int *)(t + 0x1600) = 0;
                    *(int *)(t + 0x15e4) = 0;
                    *(int *)(t + 0x15e8) = 0;
                    *(int *)(t + 0x163c) = 0;
                    *(int *)(t + 0x113c) = 0;
                }
            }
            func_00113F00(arg);
        }
    }
}

#pragma optimize("y", on)
void Obj::func_00119680(int a)
{
    static int h = D_002A7CB8->func_00026500(D_00283D34, -1);
    if (*(int *)(p950 + 0xbc) != 0 && (c12a8 & 0x80))
        func_001188F0(a);
    int m = 0;
    switch (mode) {
    case 1:
        m = 4;
        break;
    case 0:
    case 5:
        m = 1;
        break;
    case 2:
    case 4:
    case 7:
        m = 2;
        break;
    case 3:
    case 6:
        m = 8;
        break;
    }
    if (f5e0 > D_002756D0)
        f5e0 -= D_002756B8;
    else if (f5e0 < D_002756E8)
        f5e0 += D_002756B8;
    s159c->func_00199E30(D_002A3A4C, f5e0);
    if (f5e4 > D_002756D0)
        f5e4 -= D_002756B8;
    else if (f5e4 < D_002756E8)
        f5e4 += D_002756B8;
    s15a0->func_00199E30(D_002A3A4C, f5e4);
    func_00106810(ia04, m);
}
#pragma optimize("", on)

