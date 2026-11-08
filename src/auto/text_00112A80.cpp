/* 2 functions from 0x00112A80 to 0x001138E0, found by Ghidra. */
#include "common.h"
#include <math.h>

#define AT(T, p, o) (*(T *)((char *)(p) + (o)))

extern float D_00275544;
extern float D_002756DC;
extern float D_00275F64;
extern char *D_002A8490;
float func_00161F80(int a);
float func_0001C870(float a, int b, int c, float d, float e, int f);
int __stdcall func_000839F0(char *a, float b, int c);

struct Obj_A8520 {
    int func_000A8520(char *name);
};
struct Obj_5C5B0 {
    void func_0005C5B0(int a, int b);
};
struct Obj_VF {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38();
    virtual void v3C(int a, float b, int c);
};

struct Obj {
    char pad0[0x11dc];
    int f11dc;
    int f11e0;
    void func_00112A80(float dt);
    void func_00113290(float dt);
    void func_001059E0(void);
    float func_00108CE0(int a);
    float func_00108CB0(int a, float b);
    void func_0010DD90(float a, float b, char *c, int d, int e, int f);
};

extern char *D_gSelfSink;
extern float D_00275460;
extern float D_00275F58;
extern float D_002A3AA4;
extern float D_002755E8;
extern float D_002A3AA0;
extern float D_00283D08;
extern float D_00283D04;
extern float D_00283D00;
extern float D_00283CFC;
extern float D_00283CF8;
extern float D_00283CF4;
extern float D_002B9200;
extern int D_002A3A3C;
extern int D_002A3A40;
extern int D_002A3A44;
extern int D_002A3A48;

static __forceinline float Abs_00112A80(float x)
{
    int i = *(int *)&x & 0x7fffffff;
    return *(float *)&i;
}

static __forceinline float AbsBits_00112A80(int x)
{
    int i = x & 0x7fffffff;
    return *(float *)&i;
}

struct Vec4_00108370 { float x, y, z, w; };
struct V3_00104A00 { float x, y, z; };
struct V4_00104A00 { float x, y, z, w; };
struct S_0001C610_V4 { float x, y, z, w; };
struct C_00109180 { Vec4_00108370 *func_00109180(Vec4_00108370 *out); };
struct C_00108F50 { void func_00108F50(void); };
struct C_0010E260 { void func_0010E260(void); };
struct BmxVehicle_10DA70 { void func_0010E2A0(void); };
struct C_000831E0 {
    void func_00083750(int a);
    void func_00083880(void);
    void func_000838B0(int a0);
};
struct C_00109520 { void func_00109550(int p); };
struct C_0001EF40 { int func_0001EF40(void); };
struct C_0010DD90 { void func_0010DD90(float a, int b, int c, int d, int e, int f); };
void func_00104A00(V4_00104A00 *out, V3_00104A00 *src);
float *func_0001E9E0(float *out, float *v);
void func_0001EAB0(float *out, float *a, float *b);
S_0001C610_V4 func_0001C610(float *a, float *b);

void Obj::func_00112A80(float dt)
{
    struct Home { Obj *self; char pad[0x1c]; Vec4_00108370 v; } h;
    h.self = this;
    Obj *&self = h.self;
    float fv;
    int el;
    if (AT(int, self, 0x5c8) == 0) {
        if (AT(int, self, 0x1fbc) == 0) {
            AT(int, self, 0x1fbc) = 1;
            AT(int, self, 0x2010) = 0;
        }
    }
    AT(int, self, 0x11fc) = 1;
    if (AT(int, self, 0x5c8) == 1) {
        if (AT(int, self, 0x1fbc) != 0) {
            AT(int, self, 0x1fbc) = 0;
            AT(int, self, 0x2010) = 1;
        }
    }
    if (AT(int, self, 0x1178) == 0 && AT(int, self, 0x117c) != 0)
        AT(int, self, 0x11fc) = 1;
    AT(int, self, 0x11f8) = AT(int, self, 0x11f4);
    int st = AT(int, self, 0x11f4);
    if (st == 3)
        goto do_calls;
    if (st != 2)
        goto no_calls;
    AT(int, self, 0x1068) = 0;
    AT(int, self, 0x1214) = 0;
    AT(int, self, 0x1210) = 0;
    AT(int, self, 0x120c) = 0;
    AT(int, self, 0x1128) = 0;
    AT(int, self, 0x11f4) = 0;
do_calls:
    ((C_0010E260 *)self)->func_0010E260();
    ((C_00108F50 *)self)->func_00108F50();
no_calls:
    if (AT(int, self, 0x11fc) == 0 && AT(int, self, 0x11dc) != 0) {
        AT(int, self, 0x11fc) = 0;
        AT(int, self, 0x1fac) = D_002A3A3C;
        AT(int, self, 0x1fb0) = D_002A3A40;
        AT(int, self, 0x1fb4) = D_002A3A44;
        AT(int, self, 0x1fb8) = D_002A3A48;
        AT(int, self, 0x1200) = 0;
    }
    D_002B9200 = 0.0f;
    if (AT(int, self, 0x1178) != 0) {
        if (AT(float, self, 0x760) >= D_00275F58 &&
            AT(int, AT(void *, self, 0x20c), 0x30) == 0)
            AT(int, self, 0x20ac) = 1;
        else
            AT(int, self, 0x20ac) = 0;
    }
    {
        int edx = 1;
        if (AT(int, self, 0x454) == 0 && AT(int, self, 0x458) != 0 &&
            AT(int, self, 0x11dc) == 0 && AT(int, self, 0x5c8) != 0 &&
            AT(int, self, 0x1178) != 0 && AT(int, self, 0x1184) != 0) {
            int *tbl = (int *)AT(void *, self, 0x1084);
            int idx = AT(int, tbl, 0x2c);
            if (idx != -1 && AT(int, tbl, 0) == 0) {
                float th = AT(float, AT(void *, AT(void *, self, 0x24), 0x52c), idx * 4 + 0x1ebc);
                if (D_00275460 - AT(float, self, 0x15f4) >= th)
                    AT(int, self, 0x112c) = 1;
            }
            edx = 0;
        }
        if (AT(int, self, 0x11dc) == 0 && AT(int, self, 0x11e0) != 0)
            edx = 0;
        if (AT(int, self, 0x11e8) != 0)
            edx = 0;
        if (edx != 0) {
            ((BmxVehicle_10DA70 *)self)->func_0010E2A0();
            return;
        }
    }
    if (AT(float, self, 0x106c) > D_00275544)
        AT(float, self, 0x106c) = AT(float, self, 0x106c) - dt;
    if (AT(float, self, 0x106c) <= D_00275544)
        AT(int, self, 0x106c) = 0;
    if (AT(float, self, 0x1070) > D_00275544)
        AT(float, self, 0x1070) = AT(float, self, 0x1070) - dt;
    if (AT(float, self, 0x1070) <= D_00275544)
        AT(int, self, 0x1070) = 0;
    if (AT(int, self, 0x2010) != 0 || AT(int, self, 0xa38) == 0 ||
        AT(int, self, 0x1178) != 0 || AT(int, self, 0x5c8) != 0)
        goto final_check;
    {
        ((C_00109180 *)self)->func_00109180(&h.v);
        float *p = (float *)((char *)self + 0x1fac);
        float t0 = h.v.x * dt;
        float t1 = h.v.y * dt;
        float t2 = h.v.z * dt;
        p[0] += t0;
        p[1] += t1;
        p[2] += t2;
        V4_00104A00 q;
        func_00104A00(&q, (V3_00104A00 *)p);
        if (AT(int, self, 0x680) != 0) {
            S_0001C610_V4 dir = func_0001C610((float *)&h.v.z, (float *)((char *)self + 0x748));
            float rbuf[4];
            float *r = func_0001E9E0(rbuf, (float *)&dir);
            float s = 1.0f;
            if (r[1] <= D_00275544)
                s = -1.0f;
            float g = Abs_00112A80(h.v.y) * s * dt + D_002B9200;
            D_002B9200 = g;
            if (g > D_00275544)
                q.y = q.y - AT(float, AT(void *, self, 0x208), 0x134);
            else
                q.y = q.y + AT(float, AT(void *, self, 0x208), 0x134);
            float ax = Abs_00112A80(q.x);
            float ay = Abs_00112A80(q.y);
            fv = (float)(int)(ay / D_002A3AA4 + D_002755E8) * D_002A3AA4 + D_002A3AA0;
            float az = Abs_00112A80(q.z);
            if (fv <= D_00283D08 && AT(int, self, 0x1200) < 0x384) {
                AT(int, self, 0x1200) = 0x384;
                el = AT(int, AT(void *, D_002A8490, 0x2a4), AT(int, self, 0xa2c) * 4 + 0x170);
                if (el != 0)
                    ((C_000831E0 *)el)->func_00083750(0x384);
                ((C_00109520 *)AT(void *, self, 0xa64))->func_00109550(5);
                AT(int, self, 0x1204) = 0;
                goto cf4_check;
            }
            if (fv <= D_00283D04 && AT(int, self, 0x1200) < 0x2d0) {
                AT(int, self, 0x1200) = 0x2d0;
                el = AT(int, AT(void *, D_002A8490, 0x2a4), AT(int, self, 0xa2c) * 4 + 0x170);
                if (el != 0)
                    ((C_000831E0 *)el)->func_00083750(0x2d0);
                ((C_00109520 *)AT(void *, self, 0xa64))->func_00109550(4);
                AT(int, self, 0x1204) = 0;
                goto cf4_check;
            }
            if (fv <= D_00283D00 && AT(int, self, 0x1200) < 0x21c) {
                AT(int, self, 0x1200) = 0x21c;
                el = AT(int, AT(void *, D_002A8490, 0x2a4), AT(int, self, 0xa2c) * 4 + 0x170);
                if (el != 0)
                    ((C_000831E0 *)el)->func_00083750(0x21c);
                ((C_00109520 *)AT(void *, self, 0xa64))->func_00109550(3);
                AT(int, self, 0x1204) = 0;
                goto cf4_check;
            }
            if (fv <= D_00283CFC && AT(int, self, 0x1200) < 0x168) {
                AT(int, self, 0x1200) = 0x168;
                el = AT(int, AT(void *, D_002A8490, 0x2a4), AT(int, self, 0xa2c) * 4 + 0x170);
                if (el != 0) {
                    if (AT(int, self, 0x20ac) == 0)
                        ((C_000831E0 *)el)->func_000838B0(0);
                    else
                        ((C_000831E0 *)el)->func_00083750(0x168);
                }
                ((C_00109520 *)AT(void *, self, 0xa64))->func_00109550(2);
                AT(int, self, 0x1204) = 0;
                goto cf4_check;
            }
            if (fv >= D_00283CF8 && AT(int, self, 0x1200) < 0xb4 &&
                ((C_0001EF40 *)AT(void *, self, 0x208))->func_0001EF40() == 0) {
                AT(int, self, 0x1200) = 0xb4;
                el = AT(int, AT(void *, D_002A8490, 0x2a4), AT(int, self, 0xa2c) * 4 + 0x170);
                if (el != 0) {
                    if (AT(int, self, 0x20ac) != 0)
                        ((C_000831E0 *)el)->func_000838B0(1);
                    else
                        ((C_000831E0 *)el)->func_00083750(0xb4);
                }
                ((C_00109520 *)AT(void *, self, 0xa64))->func_00109550(1);
                AT(int, self, 0x1204) = 0;
                if (AT(int, self, 0x97c) != 0 && AT(int, self, 0x11f4) == 0) {
                    AT(int, self, 0x11f4) = 1;
                    int f52c = AT(int, AT(void *, self, 0x24), 0x52c);
                    ((C_0010DD90 *)self)->func_0010DD90((float)AT(int, f52c, 0x64e8), 0x3f800000,
                                                        (int)((char *)f52c + 0x64b6), -1, 0xb, 0);
                }
                if (AT(int, self, 0x680) != 0 && AT(int, AT(void *, self, 0x208), 0xe8) != 0) {
                    float m[4];
                    m[0] = 0.0f; m[1] = 0.0f; m[2] = 0.0f; m[3] = 1.0f;
                    func_0001EAB0(m, (float *)((char *)AT(void *, self, 0x1e0) + 0x258),
                                  (float *)((char *)self + 0x748));
                    if (m[0] > D_00275544) {
                        AT(int, self, 0x11f4) = 1;
                        el = AT(int, AT(void *, D_002A8490, 0x2a4), AT(int, self, 0xa2c) * 4 + 0x170);
                        if (el != 0)
                            ((C_000831E0 *)el)->func_00083880();
                        ((C_00109520 *)AT(void *, self, 0xa64))->func_00109550(6);
                        AT(int, self, 0x1204) = 1;
                    }
                    goto cf4_check;
                }
                goto final_check;
            }
        }
    }
cf4_check:
    if (fv <= D_00283CF4 && AT(int, self, 0x1200) < 0x5a)
        AT(int, self, 0x1200) = 0x5a;
final_check:
    if (AT(int, self, 0x9dc) != 0) {
        if (AT(float, self, 0x538) <= D_00275544) {
            AT(int, self, 0x11f4) = 3;
            AT(int, self, 0x9dc) = 0;
        }
    }
    AT(int, self, 0x11ec) = 1;
}

void Obj::func_00113290(float dt)
{
    Obj *self = this;
    D_gSelfSink = (char *)&self;
    self->f11e0 = self->f11dc;
    if (self->f11e0 != 0) {
        if (AT(int, self, 0x468) != 0) {
            char *s = AT(char *, AT(char *, AT(char *, self, 0x210), 0x30), 0x14);
            char *d = (char *)self + 0x1090;
            char c;
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
            AT(int, self, 0x1108) = AT(int, self, 0x484);
            if (AT(int, self, 0x470) == 0) {
                if (AT(float, self, 0x20b0) > D_00275544) {
                    AT(float, self, 0x20b0) -= dt;
                    if (AT(float, self, 0x20b0) <= D_00275544) {
                        AT(float, self, 0x20b0) = 0.25f;
                        float a = AbsBits_00112A80(AT(int, self, 0x744));
                        float t = func_00161F80(AT(int, self, 0x113c)) * D_002756DC;
                        Obj_VF *o = AT(Obj_VF *, AT(char *, D_002A8490, 0x8), 0x14 + AT(int, self, 0x970) * 4);
                        o->v3C(1, func_0001C870(a, 0, 0, 30.0f, 0.26f, 200) + t, 200);
                    }
                }
            } else if (AT(int, self, 0x480) == 0) {
                AT(int, self, 0x1070) = AT(int, AT(char *, AT(char *, self, 0x24), 0x52c), 0xc);
            }
        } else {
            AT(int, self, 0x113c) = 0;
            AT(char, self, 0x1090) = 0;
            AT(int, self, 0x1108) = 0;
            self->f11dc = 0;
            struct V { int a, b, c, d; };
            AT(V, self, 0x2028) = AT(V, self, 0x834);
            AT(int, self, 0x2024) = 1;
        }
    } else {
        if (AT(int, self, 0x468) != 0
            && (AT(int, AT(char *, self, 0x210), 0x24) == 0 || AT(int, self, 0x470) != 0))
            self->f11dc = 1;
        if (self->f11dc != 0) {
            self->func_001059E0();
            AT(int, self, 0x1060) = 1;
        }
    }
    if (self->f11dc != 0) {
        AT(int, self, 0x1068) = 0;
        if (self->f11e0 == 0) {
            AT(int, self, 0x1078) = 0;
            AT(int, self, 0x107c) = 0;
            return;
        }
        if (AT(int, self, 0x2010) == 0 && AT(int, self, 0xa38) != 0 && AT(int, self, 0x1078) != 0
            && AT(int, AT(char *, D_002A8490, 0x2a4), 0x170 + AT(int, self, 0xa2c) * 4) != 0) {
            char *tbl = AT(char *, AT(char *, self, 0x24), 0x52c);
            float m;
            if (AT(int, self, 0x470) != 0) {
                if (AT(int, self, 0x480) == 0)
                    m = AT(float, tbl, 0x7928 + AT(int, self, 0x718) * 4);
                else
                    m = AT(float, tbl, 0x77c8 + AT(int, self, 0x718) * 4);
            } else {
                m = AT(float, tbl, 0x6a08 + AT(int, self, 0x718) * 4);
            }
            self->func_0010DD90(dt * m, 0, 0, -1, -1, 0);
        }
        if (AT(float, self, 0x484) <= D_00275F64 && AT(int, self, 0x470) == 0)
            return;
        if (AT(int, self, 0x1078) == 0) {
            if (AT(int, AT(char *, D_002A8490, 0x2a4), 0x170 + AT(int, self, 0xa2c) * 4) != 0) {
                int n, i;
                char *tbl;
                Obj *p;
                if (AT(int, self, 0x470) != 0) {
                    if (AT(int, self, 0x480) == 0) {
                        AT(int, self, 0x1030 + AT(int, self, 0x718) * 4)++;
                        p = self;
                        i = AT(int, p, 0x718);
                        AT(int, p, 0x1010 + i * 4)++;
                        n = AT(int, p, 0x1030 + i * 4);
                        p = self;
                        i = AT(int, p, 0x718);
                        tbl = AT(char *, AT(char *, p, 0x24), 0x52c);
                        p->func_0010DD90(p->func_00108CB0(n, (float)AT(int, tbl, 0x7908 + i * 4)),
                            p->func_00108CE0(AT(int, p, 0x1010 + i * 4)), tbl + i * 0x32 + 0x7168, i, 8, 0);
                    } else {
                        AT(int, self, 0xff0 + AT(int, self, 0x718) * 4)++;
                        p = self;
                        i = AT(int, p, 0x718);
                        AT(int, p, 0xfd0 + i * 4)++;
                        n = AT(int, p, 0xff0 + i * 4);
                        p = self;
                        i = AT(int, p, 0x718);
                        tbl = AT(char *, AT(char *, p, 0x24), 0x52c);
                        p->func_0010DD90(p->func_00108CB0(n, (float)AT(int, tbl, 0x77a8 + i * 4)),
                            p->func_00108CE0(AT(int, p, 0xfd0 + i * 4)), tbl + i * 0x32 + 0x6b28, i, 9, 0);
                    }
                } else {
                    AT(int, self, 0xfb0 + AT(int, self, 0x718) * 4)++;
                    p = self;
                    i = AT(int, p, 0x718);
                    AT(int, p, 0xf90 + i * 4)++;
                    n = AT(int, p, 0xfb0 + i * 4);
                    p = self;
                    i = AT(int, p, 0x718);
                    tbl = AT(char *, AT(char *, p, 0x24), 0x52c);
                    p->func_0010DD90(p->func_00108CB0(n, (float)AT(int, tbl, 0x69e8 + i * 4)),
                        p->func_00108CE0(AT(int, p, 0xf90 + i * 4)), tbl + i * 0x32 + 0x66c8, i, 10, 0);
                }
            }
            AT(int, self, 0x1078) = 1;
        }
        if (AT(int, self, 0x107c) != 0)
            return;
        int idx = AT(Obj_A8520 *, AT(char *, self, 0x24), 0x534)->func_000A8520(
            AT(char *, AT(char *, AT(char *, self, 0x210), 0x30), 0x14));
        if (idx == -1)
            return;
        Obj *q = self;
        char *e = AT(char **, AT(char *, AT(char *, q, 0x24), 0x534), 0x28)[idx];
        int ge0 = 0;
        if (!(AT(float, q, 0x484) < AT(float, e, 0x400)))
            ge0 = 1;
        int ge1 = 0;
        if (!(AT(float, q, 0x488) < AT(float, e, 0x404)))
            ge1 = 1;
        if (ge0 == 0 || ge1 == 0)
            return;
        int c2 = AT(int, AT(char *, D_002A8490, 0x2a4), 0x170 + AT(int, q, 0xa2c) * 4);
        if (c2 != 0 && e[0x24] != 0) {
            if (func_000839F0(e + 0x24, (float)AT(int, e, 0x3f8), idx)) {
                char *g = AT(char *, D_002A8490, 0x2a4);
                if (AT(int, g, 0x1f8) != 0)
                    AT(Obj_5C5B0 *, g, 0x68)->func_0005C5B0(AT(int, AT(char *, D_002A8490, 0x2e0), 0x2d8), idx);
            }
        }
        q = self;
        q->func_0010DD90((float)AT(int, AT(char **, AT(char *, AT(char *, q, 0x24), 0x534), 0x28)[idx], 0x3f8),
            0, 0, -1, -1, 0);
        AT(int, self, 0x107c) = 1;
        return;
    }
    if (self->f11e0 != 0 && AT(int, self, 0x1078) == 0) {
        char *t = AT(char *, AT(char *, self, 0x24), 0x52c);
        self->func_0010DD90((float)AT(int, t, 0x66c4), 1.0f, t + 0x63ee, -1, 13, 0);
        AT(int, self, 0x1078) = 1;
    }
}

