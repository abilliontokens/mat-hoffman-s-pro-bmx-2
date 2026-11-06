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
    Obj *self = this;
    D_gSelfSink = (char *)&self;
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
        Vec4_00108370 v;
        ((C_00109180 *)self)->func_00109180(&v);
        float *p = (float *)((char *)self + 0x1fac);
        float t0 = v.x * dt;
        float t1 = v.y * dt;
        float t2 = v.z * dt;
        p[0] += t0;
        p[1] += t1;
        p[2] += t2;
        V4_00104A00 q;
        func_00104A00(&q, (V3_00104A00 *)p);
        if (AT(int, self, 0x680) != 0) {
            S_0001C610_V4 dir = func_0001C610((float *)&v.z, (float *)((char *)self + 0x748));
            float rbuf[4];
            float *r = func_0001E9E0(rbuf, (float *)&dir);
            float s = (r[1] != D_00275544) ? -1.0f : 1.0f;
            float g = D_002B9200;
            g = fabsf(v.y) * s * dt + g;
            D_002B9200 = g;
            float X = AT(float, AT(void *, self, 0x208), 0x134);
            float val = (g > D_00275544) ? q.y - X : q.y + X;
            fv = (float)(int)(fabsf(val) / D_002A3AA4 + D_002755E8) * D_002A3AA4 + D_002A3AA0;
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
