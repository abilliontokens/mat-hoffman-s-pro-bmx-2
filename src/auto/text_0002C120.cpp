/* 3 functions from 0x0002C120 to 0x0002CBC0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern float D_00275544;
static __forceinline float Min_0002C120(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_0002C120(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

/* four floats built in a temporary like the callers do */
struct V4_0002C120 {
    union {
        struct { float x, y, z, w; };
        int i[4];
    };
    V4_0002C120() {}
    V4_0002C120(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_0002C120_Body {
    char pad0[0x28];
    float f28;
    char pad2c[0x20c];
    V4_0002C120 f238;
};

struct S_0002C120_Owner {
    char pad0[0x68];
    int f68;
};

struct S_0002C120_Ground {
    char pad0[0x38];
    float f38;
    float f3c;
};

struct S_0002C120_Normal {
    char pad0[0xd0];
    float vx, vy, vz;
};

struct S_0002C120_Timer {
    float f0;
    char pad4[8];
    int fC;
    float f10;
    void func_0002B180(void);
};

struct C_0002C120 {
    char pad0[0x110];
    float f110;
    char pad114[0xc];
    float f120;
    char pad124[0x1e0 - 0x124];
    S_0002C120_Body *f1e0;
    char pad1e4[4];
    S_0002C120_Owner *f1e8;
    S_0002C120_Ground *f1ec;
    char pad1f0[0x210 - 0x1f0];
    S_0002C120_Normal *f210;
    char pad214[0x444 - 0x214];
    int f444;
    char pad448[0x468 - 0x448];
    int f468;
    int f46c;
    char pad470[0x49c - 0x470];
    float f49c;
    float f4a0;
    float f4a4;
    char pad4a8[0x4f4 - 0x4a8];
    int f4f4;
    char pad4f8[4];
    int f4fc;
    u16 f500;
    char pad502[2];
    float f504;
    float f508;
    float f50c;
    float f510;
    float f514;
    float f518;
    char pad51c[4];
    float f520;
    float f524;
    float f528;
    float f52c;
    float f530;
    char pad534[4];
    float f538;
    V4_0002C120 f53c;
    V4_0002C120 f54c;
    V4_0002C120 f55c;
    char pad56c[0x698 - 0x56c];
    int f698;
    int f69c;
    int f6a0;
    char pad6a4[0x6ac - 0x6a4];
    float f6ac;
    char pad6b0[0x728 - 0x6b0];
    float f728;
    char pad72c[0x778 - 0x72c];
    S_0002C120_Timer f778;
    void func_00028070(void);
    void func_0002C120(int param_1, float param_2);
};

extern float D_002A1184;
extern float D_002A1180;
extern float D_002A117C;
extern float D_00276080;
extern float D_00275460;
extern float D_00275F58;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B911C;
extern V4_0002C120 D_002A10F0;
extern int D_002A10F4;
extern int D_002A10F8;
extern int D_002A10FC;
extern V4_0002C120 D_002A1100;
extern float D_002A1104;
extern float D_002A1108;
extern V4_0002C120 D_002A1110;
extern float D_002A1114;
extern float D_002A1118;

float func_0014F870(float x);
V4_0002C120 *func_0001C5E0(V4_0002C120 *out, float s, V4_0002C120 *v);
void func_00026340(V4_0002C120 *in, V4_0002C120 *out);
int func_00026300(float *a, V4_0002C120 *b);

/* a 4-float vector handed by value; built in a temporary like the callers do */
struct S_0002CB00_Vec4 {
    float x, y, z, w;
    S_0002CB00_Vec4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_0002CB00_Target {
    char pad0[0x130];
    float f130;
    float f134;
    float f138;
    void func_0001EB50(S_0002CB00_Vec4 v);
};

struct C_0002CB00 {
    char pad0[0x1e0];
    S_0002CB00_Target *f1e0;
    char pad1e4[0x4f4 - 0x1e4];
    int f4f4;
    int f4f8;
    char pad4fc[0x534 - 0x4fc];
    float f534;
    float f538;
    S_0002CB00_Vec4 f53c;
    S_0002CB00_Vec4 f54c;
    char pad55c[0x56c - 0x55c];
    int f56c;
    float f570;
    float f574;
    float f578;
    char pad57c[4];
    float f580;
    char pad584[4];
    float f588;
    char pad58c[0x698 - 0x58c];
    int f698;
    char pad69c[0x6a8 - 0x69c];
    int f6a8;
    char pad6ac[0x784 - 0x6ac];
    int f784;
    float f788;
    void func_0002C9A0(float dt);
    void func_0002CB00(float dt);
};

void C_0002C120::func_0002C120(int param_1, float param_2)
{
    float v;
    float lc;
    V4_0002C120 zero;
    V4_0002C120 tmp;
    float s;
    int *fp;
    float t1;
    float t2;

    lc = 0;
    t1 = 0;
    t2 = 0;
    s = 0;
    v = 0;
    if (!(this->f504 < this->f508 || this->f468 != 0 || this->f69c != 0)) {
        return;
    }
    if (this->f4f4 != 0) {
        return;
    }
    if (this->f444 != 0) {
        return;
    }
    this->f698 = 0;
    v = func_0014F870(this->f110);
    fp = (int *)&this->f54c;
    fp[0] = ((int *)&D_002A10F0)[0];
    fp[1] = D_002A10F4;
    fp[2] = D_002A10F8;
    fp[3] = D_002A10FC;
    zero.z = 0;
    zero.y = 0;
    zero.x = 0;
    zero.w = 1.0f;
    func_00026340(&zero, &this->f55c);
    if (this->f1e0->f28 < D_002A1184) {
        lc = 0;
    } else {
        if (this->f1ec->f3c - D_002A1180 > this->f1e0->f28) {
            lc = this->f1ec->f38;
        } else if (this->f1e8->f68 == 0) {
            lc = D_002A117C * this->f1ec->f3c;
        } else {
            lc = this->f1ec->f3c;
        }
    }
    if (this->f468 == 0 && this->f46c == 0) {
        if (this->f69c == 0 && this->f6a0 == 0) {
            unsigned int u = this->f500;
            float m;
            if (u == D_002B9108 || u == D_002B911C) {
                if (this->f110 > D_00276080) {
                    this->f698 = 4;
                    this->f53c = *func_0001C5E0(&tmp, (float)this->f778.fC * this->f778.f0 + this->f528, &D_002A1110);
                    this->f778.func_0002B180();
                    goto end;
                }
                if (!(this->f120 > D_00276080)) {
                    goto end;
                }
                this->f698 = 1;
                if (lc > this->f1ec->f38) {
                    s = D_00275460;
                } else {
                    s = this->f514;
                }
                this->f53c = *func_0001C5E0(&tmp, s * this->f520, &D_002A1110);
                if (param_1 != 0) {
                    this->f698 = 2;
                    this->f53c = *func_0001C5E0(&tmp, this->f530, &D_002A1110);
                }
                m = this->f4a0;
            } else {
                if (u == D_002B910C) {
                    this->f698 = 4;
                    fp = (int *)&this->f53c;
                    fp[0] = ((int *)&D_002A10F0)[0];
                    fp[1] = D_002A10F4;
                    fp[2] = D_002A10F8;
                    fp[3] = D_002A10FC;
                    goto end;
                }
                if (v <= this->f510 && v > this->f50c) {
                    this->f698 = 3;
                    if (lc > this->f1ec->f38) {
                        s = D_00275460;
                    } else {
                        s = this->f518;
                    }
                    this->f53c = *func_0001C5E0(&tmp, s * this->f524, &D_002A1110);
                    m = this->f49c;
                } else {
                    this->f698 = 1;
                    if (param_1 != 0) {
                        this->f698 = 2;
                        this->f53c = *func_0001C5E0(&tmp, this->f530, &D_002A1110);
                    } else {
                        if (lc > this->f1ec->f38) {
                            s = D_00275460;
                        } else {
                            s = this->f514;
                        }
                        this->f53c = *func_0001C5E0(&tmp, s * this->f520, &D_002A1110);
                    }
                    this->f1e0->f238 = *func_0001C5E0(&tmp, lc * this->f4a0, &zero);
                    goto end;
                }
            }
            this->f1e0->f238 = *func_0001C5E0(&tmp, lc * m, &zero);
        } else {
            this->f698 = 1;
            this->f53c = *func_0001C5E0(&tmp, this->f6ac * this->f520, &D_002A1110);
            if (param_1 != 0) {
                this->f698 = 2;
                this->f53c = *func_0001C5E0(&tmp, this->f530, &D_002A1110);
            }
            this->f54c = *func_0001C5E0(&tmp, param_2 * this->f52c, &D_002A1100);
        }
    } else {
        float fl;
        float ps;
        S_0002C120_Normal *n;
        if (param_1 != 0) {
            this->f698 = 2;
            fl = this->f530;
        } else {
            this->f698 = 1;
            fl = this->f728 * this->f520;
        }
        this->f53c = V4_0002C120(D_002A1110.x * fl, D_002A1114 * fl, D_002A1118 * fl, 1.0f);
        ps = param_2 * this->f52c;
        this->f54c = V4_0002C120(D_002A1100.x * ps, D_002A1104 * ps, D_002A1108 * ps, 1.0f);
        n = this->f210;
        if (func_00026300(&n->vx, &D_002A10F0)) {
            S_0002C120_Body *b = this->f1e0;
            float d = n->vy * b->f238.y + b->f238.x * n->vx + n->vz * b->f238.z;
            float dx = d * n->vx;
            float dy = d * n->vy;
            float dz = d * n->vz;
            b->f238.x = b->f238.x - dx;
            b->f238.y = b->f238.y - dy;
            b->f238.z = b->f238.z - dz;
            if (d < D_00275544) {
                s = D_00275F58;
            } else {
                s = D_00275460;
            }
            t1 = s * this->f4a4 + d;
            t2 = -this->f1ec->f3c;
            v = AsmMaxF(t1, t2);
            t1 = this->f1ec->f3c;
            v = AsmMinF(v, t1);
            b->f238.x = v * n->vx + b->f238.x;
            b->f238.y = v * n->vy + b->f238.y;
            b->f238.z = v * n->vz + b->f238.z;
        }
    }
end:
    if (this->f698 != 0) {
        this->f538 = 0.1f;
        this->f504 = this->f508;
        this->func_00028070();
        this->f4f4 = 0;
        this->f69c = 0;
        this->f4fc = 0;
    }
}

void C_0002CB00::func_0002C9A0(float dt)
{
    if (f788 > D_00275544) {
        f788 = f788 - dt;
        if (f788 <= D_00275544) {
            f784 = 0;
        }
    }
    if (f698 != 0) {
        if (f4f4 == 0) {
            S_0002CB00_Vec4 v = f53c;
            f538 = f538 - dt;
            f4f8 = 1;
            float *p = &f1e0->f130;
            p[0] += v.x;
            p[1] += v.y;
            p[2] += v.z;
            f1e0->func_0001EB50(f54c);
            f6a8 = 1;
            if (f538 <= D_00275544) {
                f4f4 = 1;
                f538 = 0;
            }
        } else {
            f538 = dt + f538;
            if (f538 > f534) {
                f4f4 = 0;
                f4f8 = 0;
                f698 = 0;
                f538 = 0;
            }
        }
    }
}

void C_0002CB00::func_0002CB00(float dt)
{
    if (f56c != 0) {
        float s = f580;

        f1e0->func_0001EB50(S_0002CB00_Vec4(s * f570, s * f574, s * f578, 1.0f));
        f588 = f588 - dt;
        if (f588 <= D_00275544) {
            f56c = 0;
            f588 = 0;
            f580 = 0;
        }
    }
}
