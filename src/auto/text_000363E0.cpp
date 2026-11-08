/* 1 function from 0x000363E0 to 0x000377E0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline float Max_363E0(float a, float b) { return a > b ? a : b; }
static __forceinline float Min_363E0(float a, float b) { return a < b ? a : b; }
static __forceinline float Abs_363E0(float a) { unsigned int i = *(volatile unsigned int *)&a & 0x7fffffff; return *(float *)&i; }
static __forceinline void Round_363E0(int *volatile out, float a) { *out = _mm_cvtss_si32(*(__m128 *)&a); }
static __forceinline int MinI_363E0(int a, int b) { return a < b ? a : b; }
static __forceinline int MaxI_363E0(int a, int b) { return a > b ? a : b; }

struct S_Vec4 {
    float x, y, z, w;
};

struct S_DefaultVec4 : S_Vec4 {
    S_DefaultVec4() { z = y = x = 0.0f; w = 1.0f; }
};

struct S_Vec4Int {
    int x, y, z, w;
};

/* the 4-int vector holder reached through C_000363E0::f44->f5C */
struct C_00194E60 {
    char pad0[8];
    S_Vec4Int v;
    void func_00194E90(S_Vec4Int *out);
};

struct S_363E0_Get {
    char pad0[0x5C];
    C_00194E60 *f5C;
};

struct C_000363E0 {
    char pad0[0x44];
    S_363E0_Get *f44;
    char pad48[0x428 - 0x48];
    int f428, f42c, f430, f434;
    char pad438[0x43C - 0x438];
    int f43C;
    char pad440[0x44c - 0x440];
    int f44c, f450, f454, f458, f45c, f460;
    float f464;
    char pad468[0x49c - 0x468];
    int *f49c;
    char pad4a0[0x5f0 - 0x4a0];
    S_Vec4 path[50];
    char pad910[4];
    int f914;
    char pad918[0x920 - 0x918];
    int f920;
    void func_000363E0(float x, float y, float z, float w);
    void func_000363E0(S_Vec4 target);
};

extern const float D_00275544;
extern const float D_00275548;
extern const float D_002755E8;
extern const float D_002756DC;
extern const float D_00275AEC;
extern const float D_00275F64;
extern const float D_00276DD4;
extern const float D_002A14D4;
extern const float D_002A14D8;
extern const float D_002A14DC;
extern const float D_002A14E0;
extern const float D_002A14E4;
extern const float D_002A14E8;
extern const float D_002A14EC;
extern const float D_002A14F8;
extern const float D_002A150C;
extern const float D_002A14F0;
extern const float D_002A1504;
extern const float D_002A1508;

extern const float D_002A1504, D_002A1508, D_002A14F4, D_002A14F0;
int func_000262C0(S_Vec4 *, S_Vec4 *);
S_Vec4 *func_000110B0(S_Vec4 *, S_Vec4 *);
void C_000363E0::func_000363E0(S_Vec4 target)
{
    C_000363E0 *volatile self = this;
    float &x = target.x, &y = target.y, &z = target.z, &w = target.w;
    S_Vec4 current;
    current.z = current.y = current.x = 0.0f;
    current.w = 1.0f;
    S_Vec4 direction = *(const S_Vec4 *)&D_002A14D4;
    self->f44->f5C->func_00194E90((S_Vec4Int *)&current);
    x += D_002755E8;
    z += D_002755E8;
    x = AsmMaxF(x, (float)self->f428 - D_00276DD4);
    x = AsmMinF(x, (float)self->f434 + D_00276DD4);
    z = AsmMaxF(z, (float)self->f430 - D_00276DD4);
    z = AsmMinF(z, (float)self->f43C + D_00276DD4);
    volatile S_Vec4 delta;
    delta.x = x - current.x;
    delta.y = y - current.y;
    delta.z = z - current.z;
    if (Abs_363E0(delta.x) < D_00275AEC && Abs_363E0(delta.y) < D_00275AEC && Abs_363E0(delta.z) < D_00275AEC) {
        self->f914 = 0;
        path[self->f914] = current;
        ++self->f914;
        path[self->f914] = target;
        ++self->f914;
        self->f920 = 1;
        return;
    }
    self->f914 = 0;
    if (Abs_363E0(delta.x) >= Abs_363E0(delta.z) && Abs_363E0(delta.x) >= D_00275AEC)
        direction.x = delta.x >= 0.0f ? D_002A14E4 : -D_002A14E4;
    else if (Abs_363E0(delta.z) > Abs_363E0(delta.x) && Abs_363E0(delta.z) >= D_00275AEC)
        direction.z = delta.z >= 0.0f ? D_002A150C : -D_002A150C;
    else
        direction.y = delta.y >= 0.0f ? D_002A14F8 : -D_002A14F8;
    if (direction.x == D_002A14E4 && direction.y == D_002A14E8 && direction.z == D_002A14EC) {
        while (current.x - D_002756DC <= x) {
            delta.x = current.x - (float)self->f428;
            if (self->f914 > 0) current.y = y;
            delta.y = current.y - (float)self->f42c - self->f464;
            delta.z = current.z - (float)self->f430;
            int ix, iy, iz;
            ix = (int)(delta.x * D_002756DC);
            iy = (int)(delta.y * D_00275F64);
            iz = (int)(delta.z * D_002756DC);
            ix += self->f44c;
            iy += self->f450;
            iz += self->f454;
            ix = AsmMinI(ix, self->f458 + self->f44c);
            ix = AsmMaxI(ix, self->f44c);
            iy = AsmMinI(iy, self->f45c + self->f450);
            iy = AsmMaxI(iy, self->f450);
            iz = AsmMinI(iz, self->f460 + self->f454);
            iz = AsmMaxI(iz, self->f454);
            float height = 0.0f;
            while (self->f49c[(ix * self->f45c + iy) * self->f460 + iz]) {
                ++iy;
                if (iy > self->f450 + self->f45c) break;
                height += D_00275548;
            }
            path[self->f914] = current;
            path[self->f914].y += height;
            current.x += 10.0f;
            ++self->f914;
        }
    }
    else if (direction.x == -D_002A14E4 && direction.y == -D_002A14E8 && direction.z == -D_002A14EC) {
        while (current.x + D_002756DC >= x) {
            delta.x = current.x - (float)self->f428;
            if (self->f914 > 0) current.y = y;
            delta.y = current.y - (float)self->f42c - self->f464;
            delta.z = current.z - (float)self->f430;
            int ix, iy, iz;
            ix = (int)(delta.x * D_002756DC);
            iy = (int)(delta.y * D_00275F64);
            iz = (int)(delta.z * D_002756DC);
            ix += self->f44c;
            iy += self->f450;
            iz += self->f454;
            ix = AsmMinI(ix, self->f458 + self->f44c);
            ix = AsmMaxI(ix, self->f44c);
            iy = AsmMinI(iy, self->f45c + self->f450);
            iy = AsmMaxI(iy, self->f450);
            iz = AsmMinI(iz, self->f460 + self->f454);
            iz = AsmMaxI(iz, self->f454);
            float height = 0.0f;
            while (self->f49c[(ix * self->f45c + iy) * self->f460 + iz]) {
                ++iy;
                if (iy > self->f450 + self->f45c) break;
                height += D_00275548;
            }
            path[self->f914] = current;
            path[self->f914].y += height;
            current.x -= 10.0f;
            ++self->f914;
        }
    }
    else if (direction.x == D_002A14F0 && direction.y == D_002A14F4 && direction.z == D_002A150C) {
        while (current.z - D_002756DC <= z) {
            delta.x = current.x - (float)self->f428;
            if (self->f914 > 0) current.y = y;
            delta.y = current.y - (float)self->f42c - self->f464;
            delta.z = current.z - (float)self->f430;
            int ix, iy, iz;
            ix = (int)(delta.x * D_002756DC);
            iy = (int)(delta.y * D_00275F64);
            iz = (int)(delta.z * D_002756DC);
            ix += self->f44c;
            iy += self->f450;
            iz += self->f454;
            ix = AsmMinI(ix, self->f458 + self->f44c);
            ix = AsmMaxI(ix, self->f44c);
            iy = AsmMinI(iy, self->f45c + self->f450);
            iy = AsmMaxI(iy, self->f450);
            iz = AsmMinI(iz, self->f460 + self->f454);
            iz = AsmMaxI(iz, self->f454);
            float height = 0.0f;
            while (self->f49c[(ix * self->f45c + iy) * self->f460 + iz]) {
                ++iy;
                if (iy > self->f450 + self->f45c) break;
                height += D_00275548;
            }
            path[self->f914] = current;
            path[self->f914].y += height;
            current.z += 10.0f;
            ++self->f914;
        }
    }
    else {
        S_Vec4 negativeZ = {D_002A14E8, D_002A14EC, D_002A1508, 1.0f};
        if (func_000262C0(&direction, &negativeZ)) {
            while (current.z + D_002756DC >= z) {
                delta.x = current.x - (float)self->f428;
                if (self->f914 > 0) current.y = y;
                delta.y = current.y - (float)self->f42c - self->f464;
                delta.z = current.z - (float)self->f430;
                int ix, iy, iz;
                ix = (int)(delta.x * D_002756DC);
                iy = (int)(delta.y * D_00275F64);
                iz = (int)(delta.z * D_002756DC);
                ix += self->f44c;
                iy += self->f450;
                iz += self->f454;
                ix = AsmMinI(ix, self->f458 + self->f44c);
                ix = AsmMaxI(ix, self->f44c);
                iy = AsmMinI(iy, self->f45c + self->f450);
                iy = AsmMaxI(iy, self->f450);
                iz = AsmMinI(iz, self->f460 + self->f454);
                iz = AsmMaxI(iz, self->f454);
                float height = 0.0f;
                while (self->f49c[(ix * self->f45c + iy) * self->f460 + iz]) {
                    ++iy;
                    if (iy > self->f450 + self->f45c) break;
                    height += D_00275548;
                }
                path[self->f914] = current;
                path[self->f914].y += height;
                current.z -= 10.0f;
                ++self->f914;
            }
        }
        else if (func_000262C0(&direction, (S_Vec4 *)&D_002A14F4)) {
            while (current.y - D_002756DC <= y) {
                path[self->f914] = current;
                current.y += D_00275548;
                ++self->f914;
            }
        } else {
            S_Vec4 negative;
            if (func_000262C0(&direction, func_000110B0(&negative, (S_Vec4 *)&D_002A14F4))) {
                while (current.y + D_002756DC >= y) {
                    path[self->f914] = current;
                    current.y -= D_00275548;
                    ++self->f914;
                }
            }
        }
    }
    if (self->f914 >= 2) {
        path[self->f914 - 1].y = AsmMaxF(path[self->f914 - 1].y, y);
        path[self->f914 - 1].x = x;
        path[self->f914 - 1].z = z;
        self->f920 = 1;
    } else
        self->f914 = 0;
    if (self->f914 > 2) {
        float anchorHeight = path[0].y;
        int anchor = 0;
        for (int i = 1; i < self->f914; ++i) {
            if (path[i].y > path[i - 1].y && i > anchor) {
                float rise = (path[i].y - anchorHeight) / (float)(i - anchor);
                for (int j = 1; j < i - anchor; ++j)
                    path[anchor + j].y = path[anchor].y + j * rise;
                anchorHeight = path[i].y;
                anchor = i;
            }
        }
        anchorHeight = path[self->f914 - 1].y;
        int end = self->f914 - 1;
        for (int i = self->f914 - 2; i >= anchor; --i) {
            if (path[i].y > path[i + 1].y && i < end) {
                float rise = (path[i].y - anchorHeight) / (float)(end - i);
                for (int j = 1; j < end - i; ++j)
                    path[end - j].y = path[end].y + j * rise;
                anchorHeight = path[i].y;
                end = i;
            }
        }
    }
}
