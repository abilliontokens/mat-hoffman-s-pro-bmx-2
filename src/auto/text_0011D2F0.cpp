/* 1 function from 0x0011D2F0 to 0x0011EDF0, found by Ghidra. */
#include "common.h"

struct V4_0011D2F0 {
    float x, y, z, w;
};
struct M4_0011D2F0 {
    float m[16];
};

struct Node_0011D2F0 {
    void func_001996A0(int a, V4_0011D2F0 v);
    void func_00199300(V4_0011D2F0 *v);
    void func_00199CF0(V4_0011D2F0 v, float angle);
    void func_00197EA0(M4_0011D2F0 *m);
    void func_00199C20(int a, M4_0011D2F0 *m);
    void func_00199A70(int a, V4_0011D2F0 *v);
    void func_001994C0(int a, V4_0011D2F0 *b, V4_0011D2F0 *c);
    void func_00199110(int a, V4_0011D2F0 *b, V4_0011D2F0 *c, int d, int e, int f);
    void func_00197E70(V4_0011D2F0 *v);
    void func_00197B90(V4_0011D2F0 *v);
};

struct Body_0011D2F0 {
    char pad0[4];
    Node_0011D2F0 *node;
    char pad8[8];
    int f10;
    char pad14[4];
    int f18;
    char pad1C[0x1e4];
    V4_0011D2F0 *f200;
    V4_0011D2F0 *f204;
    void func_00164820(int a);
    void func_001670C0(float dt, int a, int b);
    void func_00166C80(int a, int b);
};

struct G2_0011D2F0 {
    char pad[0x1c8];
    int f1c8;
};
struct G1_0011D2F0 {
    char pad[0x2a4];
    G2_0011D2F0 *f2a4;
};
extern G1_0011D2F0 *D_002A8490;
extern V4_0011D2F0 D_002A3BBC;
extern float D_00275544, D_00283F14, D_00276538;

void func_00011060(void);
void __stdcall func_00011FF0(V4_0011D2F0 *out, int a, int b, void (*fn)(void));
int func_00134DE0(V4_0011D2F0 *a, V4_0011D2F0 *b, V4_0011D2F0 *c, int d, int e, int f, int g, int h, int i);

M4_0011D2F0 *func_0011ADA0(M4_0011D2F0 *out, M4_0011D2F0 *a, M4_0011D2F0 *b);
V4_0011D2F0 *func_00026910(V4_0011D2F0 *out, M4_0011D2F0 *m, int n);
V4_0011D2F0 *func_0011ADD0(V4_0011D2F0 *out, M4_0011D2F0 *m);
void func_00026960(M4_0011D2F0 *m);
void __stdcall func_0011BBB0(V4_0011D2F0 v);

struct C_0011D2F0 {
    char pad0[0x24];
    V4_0011D2F0 f24;
    V4_0011D2F0 f34;
    int f44;
    char pad48[0x5c - 0x48];
    float f5C, f60, f64;
    char pad68[0x84 - 0x68];
    Body_0011D2F0 *f84;
    Node_0011D2F0 *f88;
    float f8C, f90;
    char pad94[0xb8 - 0x94];
    float fB8;    int fBC;
    int fC0;
    int fC4;
    int *fC8;
    char padCC[0xf0 - 0xcc];
    int fF0;
    int fF4;
    char padF8[0x12c - 0xf8];
    int f12C;
    int f130;
    V4_0011D2F0 f134;
    V4_0011D2F0 f144;
    char pad154[0x168 - 0x154];
    V4_0011D2F0 f168;
    V4_0011D2F0 f178;
    char pad188[0x198 - 0x188];
    V4_0011D2F0 f198;
    char pad1A8[0x1ac - 0x1a8];
    int f1AC;
    void func_00157A00(float dt);
    void func_0011D2F0(float dt);
};

#pragma optimize("y", off)
void C_0011D2F0::func_0011D2F0(float dt)
{
    C_0011D2F0 * volatile self = this;
    __declspec(align(16)) V4_0011D2F0 v0;
    fC0 = fBC;
    if (D_002A8490->f2a4->f1c8 != 0) {
        if (self->fBC == 0) {
            if (self->f12C == 1) {
                self->f84->func_00164820(self->fC4);
                self->f84->node->func_001996A0(0, self->f134);
                self->f84->node->func_00199300(&self->f144);
                self->f84->func_001670C0(dt, 0, 0);
            } else if (self->f12C == 2) {
                M4_0011D2F0 mA, mB, mC, mE;
                V4_0011D2F0 vD, ra, rb;
                self->f84->node->func_001996A0(0, self->f134);
                self->f84->node->func_00199300(&self->f144);
                self->f84->f18 = 0;
                self->f84->func_00166C80(self->fC8[self->f130], 0);
                self->f84->node->func_00197EA0(&mA);
                self->f88->func_00199C20(0, &mB);
                func_0011ADA0(&mC, &mB, &mA);
                ra = *func_00026910(&vD, &mC, 3);
                rb = *func_0011ADD0(&vD, &mC);
                *self->f84->f204 = ra;
                *self->f84->f200 = rb;
            }
        } else if (self->fBC == 1) {
            self->f84->func_001670C0(dt, 0, 0);
            if (self->f12C == 1) {
                self->f84->node->func_001996A0(0, self->f134);
                self->f84->node->func_00199300(&self->f144);
            } else if (self->f12C == 2) {
                M4_0011D2F0 mA, mB, mC, mE;
                V4_0011D2F0 vD, ra, rb;
                self->f84->node->func_001996A0(0, self->f134);
                self->f84->node->func_00199300(&self->f144);
                self->f84->f18 = 0;
                self->f84->func_00166C80(self->fC8[self->f130], 0);
                self->f84->node->func_00197EA0(&mA);
                self->f88->func_00199C20(0, &mB);
                func_0011ADA0(&mC, &mB, &mA);
                ra = *func_00026910(&vD, &mC, 3);
                rb = *func_0011ADD0(&vD, &mC);
                *self->f84->f204 = ra;
                *self->f84->f200 = rb;
            }
        } else if (self->fBC == 2) {
            if (self->f12C == 1) {
                M4_0011D2F0 mA, mD;
                V4_0011D2F0 vZ, vY;
                self->f84->f18 = 0;
                self->f84->func_00166C80(self->fC4, 0);
                self->f88->func_00199A70(0, &self->f24);
                *self->f84->f204 = D_002A3BBC;
                func_00026960(&mA);
                *self->f84->f200 = *(V4_0011D2F0 *)func_0011ADA0(&mD, &mA, 0);
                vZ.x = vZ.y = vZ.z = 0.0f; vZ.w = 1.0f;
                vY.x = vY.y = vY.z = 0.0f; vY.w = 1.0f;
                self->f88->func_001994C0(0, &vZ, &vY);
                self->f84->node->func_00199110(0, &vZ, &vY, 0, 1, 0);
            } else {
                V4_0011D2F0 v;
                self->f84->node->func_001996A0(0, self->f134);
                self->f84->node->func_00199300(&self->f144);
                if (self->f84->f10 == 0) {
                    self->f84->func_001670C0(dt, 0, 0);
                }
                v.x = v.y = v.z = 0.0f; v.w = 1.0f;
                self->f84->node->func_001994C0(0, 0, &v);
                func_0011BBB0(v);
            }
        }
        self->fBC = self->f12C;
        self->func_00157A00(dt);
        return;
    }
    {
        M4_0011D2F0 mTmp;
        V4_0011D2F0 hit, nrm;
        V4_0011D2F0 from, to;
        V4_0011D2F0 blend;
        v0.z = 0.0f;
        v0.y = 0.0f;
        v0.x = 0.0f;
        v0.w = 1.0f;
        if (self->fBC == 1 || self->fBC == 2) {
            if (self->fBC == 2) {
                self->fB8 -= dt;
            }
            if (self->fB8 <= D_00275544) {
                self->fBC = 3;
            }
        }
        self->f12C = self->fBC;
        self->f1AC = 0;
        if (self->fBC == 1) {
            self->f60 -= dt * D_00283F14;
            self->f24.x += dt * self->f5C;
            self->f24.y += dt * self->f60;
            self->f24.z += dt * self->f64;
            self->f130 = 0;
            func_00011FF0(&to, 0x10, 2, func_00011060);
            hit.z = 0.0f;
            hit.y = 0.0f;
            hit.x = 0.0f;
            hit.w = 1.0f;
            nrm.z = 0.0f;
            nrm.y = 0.0f;
            nrm.x = 0.0f;
            nrm.w = 1.0f;
            from = self->f34;
            to = self->f24;
            if (func_00134DE0(&from, &nrm, &hit, 0, self->fF4, self->fF0, -1, 0, 1)) {
                self->f24.x = hit.x + (self->f34.x - hit.x) * D_00276538;
                self->f24.y = hit.y + (self->f34.y - hit.y) * D_00276538;
                self->f24.z = hit.z + (self->f34.z - hit.z) * D_00276538;
                self->f24.w = 1.0f;
                self->f198 = hit;
                self->f44 = 0;
                self->f34 = self->f24;
                self->f168 = D_002A3BBC;
                self->f178 = D_002A3BBC;
                if (self->f178.x <= D_00275544) {
                    blend.x = self->f168.x;
                } else if (self->f168.x >= D_00275544) {
                    blend.x = self->f178.x;
                } else {
                    blend.x = self->f178.x + self->f168.x;
                }
                if (self->f178.y <= D_00275544) {
                    blend.y = self->f168.y;
                } else if (self->f168.y >= D_00275544) {
                    blend.y = self->f178.y;
                } else {
                    blend.y = self->f178.y + self->f168.y;
                }
                if (self->f178.z <= D_00275544) {
                    blend.z = self->f168.z;
                } else if (self->f168.z >= D_00275544) {
                    blend.z = self->f178.z;
                } else {
                    blend.z = self->f178.z + self->f168.z;
                }
            }
        }
        self->f84->node->func_00199C20(0, &mTmp);
        if (self->f84->f10 == 0) {
            self->f84->func_001670C0(dt, 0, 0);
        } else {
            self->f8C += dt;
            if (self->f8C >= self->f90) {
                self->fBC = 3;
            }
        }
        self->f12C = self->fBC;
        self->f1AC = 0;
        func_0011BBB0(hit);
        self->f84->node->func_00197E70(&self->f134);
        self->f84->node->func_00197B90(&self->f144);
        self->func_00157A00(dt);
    }
}
#pragma optimize("", on)
