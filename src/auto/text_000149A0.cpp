/* 7 functions from 0x000149A0 to 0x00015980, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct AIPedestrian {
    void *func_00015960(unsigned int flags);
    void func_00014020();
    void func_001C6DA0(int arg1, int arg2);
    void func_000149A0(int idx, float scale);
    int func_000119D0(void *pos);
    int func_00011BE0(int *idx, float *dist);
};

struct Vec4_149A0 {
    float x, y, z, w;
};

struct V4C_149A0 {
    float x, y, z, w;
    V4C_149A0(float p, float q, float r, float s) { x = p; y = q; z = r; w = s; }
};

struct Obj197B40 {
    void func_00197B40(Vec4_149A0 *a, Vec4_149A0 *b);
};

struct Obj108360 {
    void func_00108360();
};

struct Sound149A0 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38();
    virtual void Play(int a, float vol, int c);
};

extern char *D_002B9120;
extern const float D_002756B4;
extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)

struct Obj13F50 {
    void func_00013F50(void *arg1, int arg2, void *arg3, int arg4);
};

struct AIPedFleeState {
    char pad_0[8];
    AIPedestrian *owner;
    void func_00014EA0();
    void func_00012B00(int arg1);
    int func_00014EF0(float dt);
};
struct PedHelper { int func_00011BE0(int *idx, float *dist); };
extern float D_002756C8, D_00275460, D_00275600, D_002756C4, D_002756BC, D_00275548;
int func_000119D0(void *pos);
struct PedAnim { void func_0008AB90(int arg); };
void __stdcall func_000149A0(int idx, float scale);

struct AnimCtl_14B40 { void func_0008AB90(int a); };
struct VecSrc_14B40 { Vec4_149A0 *func_00199B00(Vec4_149A0 *out, int a); };

struct PedObj_14B40 {
    char pad0[0x384];
    AnimCtl_14B40 *f384;
    char pad388[0x390 - 0x388];
    int f390;
    int f394;
    char pad398[0x39c - 0x398];
    int f39c;
    char pad3a0[0x3a8 - 0x3a0];
    int f3a8;
    char pad3ac[0x3b0 - 0x3ac];
    int f3b0;
    int f3b4;
    char pad3b8[0x3bc - 0x3b8];
    int f3bc;
    unsigned f3c0;
    char pad3c4[0x3cc - 0x3c4];
    int f3cc;
    char pad3d0[0x3d8 - 0x3d0];
    float f3d8;
    char pad3dc[0x3e1 - 0x3dc];
    char f3e1;
    char f3e2;
    char pad3e3[0x3e4 - 0x3e3];
    float f3e4, f3e8, f3ec;
    void func_001C6B30(Vec4_149A0 v, float f);
    int func_00011BE0(float *dist, int *idx);
};

struct AIPedScaredState_14B40 {
    char pad0[8];
    PedObj_14B40 *owner;
    int func_00014B40(float dt);
};

void __cdecl func_000111B0(Vec4_149A0 *a, Vec4_149A0 *b);
extern float D_002756C0;
extern float D_002755F8;

struct AIPedCurseState {
    char pad_0[8];
    AIPedestrian *owner;
    void func_00015170();
    int func_000151F0(float dt);
};
struct Vec4Src_151F0 { Vec4_149A0 *func_00199B00(Vec4_149A0 *out, int a); };
struct Ped_151F0 {
    int func_00011BE0(int *idx, float *dist);
    void func_001C6B30(Vec4_149A0 v, float f);
    void func_000149A0(int idx, float scale);
};
extern const float D_002756B8;

extern void *D_002A8490;
extern Obj13F50 *D_002AF44C;
static __forceinline int IsLocal_151F0()
{
    char *p = *(char **)((char *)D_002A8490 + 0x2a4);
    return p != 0 && *(int *)(p + 0x1c8) == 0;
}

static __forceinline void SetAnimState_14EF0(char *o, int state, int animOff)
{
    if (IsLocal_151F0())
        *(int *)(o + 0x3bc) = state;
    (*(PedAnim **)(o + 0x384))->func_0008AB90(*(int *)(o + animOff));
}

void func_001E891B(void *ptr);
int func_00011260(int arg1, int arg2);

void AIPedestrian::func_000149A0(int idx, float scale)
{
    if (*(unsigned int *)((char *)D_002A8490 + 0x238) >= *(unsigned int *)((char *)this + 0x3c0)) {
        char *rider = *(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8);
        if (*(unsigned char *)(rider + 0x21) & 1) {
            Vec4_149A0 a;
            Vec4_149A0 b;
            a.z = 0.0f; a.y = 0.0f; a.x = 0.0f; a.w = 1.0f;
            b.z = 0.0f; b.y = 0.0f; b.x = 0.0f; b.w = 1.0f;
            (*(Obj197B40 **)(*(char **)((char *)this + 0x3c) + 4))->func_00197B40(&a, &b);
            (*(Obj108360 **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8))->func_00108360();
            *(V4C_149A0 *)(*(char **)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x950) + 0x5c) = V4C_149A0(a.x * scale, a.y * scale, a.z * scale, 1.0f);
            float vol = scale * 0.015f;
            *(unsigned int *)((char *)this + 0x3c0) = *(unsigned int *)((char *)D_002A8490 + 0x238) + 5000;
            int snd = *(int *)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x970);
            (*(Sound149A0 **)(*(char **)((char *)D_002A8490 + 8) + snd * 4 + 0x14))->Play(0, vol, 200);
            if (*((char *)this + 0x3e1) == 0) {
                D_002AF44C->func_00013F50(this, *(unsigned char *)((char *)this + 0x3e2), (char *)this + 0x3e4, *(int *)((char *)this + 0x3cc));
            }
        }
    }
}

int AIPedScaredState_14B40::func_00014B40(float dt)
{
    float dist;
    int idx;
    int id;
    float dot;
    Vec4_149A0 a, b, v, t;
    Vec4_149A0 *pos;
    float *m;
    float dx, dy, dz;
    int r = 1;

    if (*(int *)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x1c8) == r)
        return r;
    owner->func_00011BE0((float *)&idx, (int *)&dist);
    if (idx == -1)
        return r;
    id = *(int *)((*(char * volatile *)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x1194);
    if (*(int *)(*(char **)((*(char * volatile *)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x950) + 0xbc) != 0)
        v = *(*(VecSrc_14B40 **)(*(char **)((*(char * volatile *)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0xa00) + 4))->func_00199B00(&t, 0);
    else
        v = *(Vec4_149A0 *)((*(char * volatile *)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x834);
    pos = (Vec4_149A0 *)&owner->f3e4;
    dz = v.z - pos->z;
    dy = v.y - pos->y;
    dx = v.x - pos->x;
    b.z = dz;
    b.y = dy;
    b.x = dx;
    b.w = 1.0f;
    func_000111B0(&b, &b);
    m = (float *)(*(char **)(*(char **)(*(char **)(D_002B9120 + 0x588) + owner->f3b4 * 4) + 4) + owner->f3b0 * 16);
    dz = m[2] - owner->f3ec;
    dy = m[1] - owner->f3e8;
    dx = m[0] - owner->f3e4;
    a.x = dx;
    a.y = dy;
    a.z = dz;
    a.w = 1.0f;
    func_000111B0(&a, &a);
    dot = a.x * b.x + a.y * b.y + a.z * b.z;
    if (dist <= D_002756C4) {
        if (IsLocal_151F0()) {
            owner->f3bc = 3;
            owner->f384->func_0008AB90(owner->f39c);
        }
    } else if (dist > D_002756C0 && id > D_00275460 && dot <= D_002755F8) {
        if (IsLocal_151F0()) {
            owner->f3bc = 1;
            owner->f384->func_0008AB90(owner->f394);
        }
    }
    if (owner->f3e2 != 2) {
        if (dist < D_002756BC &&
            *(int *)(*(char **)((*(char * volatile *)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x950) + 0xbc) == 0) {
            func_000149A0(idx, -13.0f);
            if (IsLocal_151F0()) {
                owner->f3bc = 6;
                owner->f384->func_0008AB90(owner->f390);
            }
        }
        owner->f3d8 = dt + owner->f3d8;
        if (owner->f3d8 > D_00275548) {
            if (IsLocal_151F0()) {
                owner->f3bc = 8;
                owner->f384->func_0008AB90(owner->f3a8);
            }
        }
    }
    owner->func_001C6B30(v, dt * D_002756B8);
    return r;
}

void AIPedFleeState::func_00014EA0()
{
    owner->func_001C6DA0(*(int *)((char *)owner + 0x41c), 1);
    if (*(int *)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x1c8) == 0) {
        *(unsigned char *)((char *)owner + 0x3df) = 1;
        *(unsigned char *)((char *)owner + 0x3e0) = 1;
        func_00012B00(1);
    }
}

int AIPedFleeState::func_00014EF0(float dt)
{
    struct {
        AIPedFleeState *self;
        float dist;
        int idx;
        volatile float sq;
        volatile float len;
    } L;

    L.self = this;
    if (*(int *)(*(int *)((char *)D_002A8490 + 0x2a4) + 0x1c8) == 1)
        return 1;
    *(int *)((char *)L.self->owner + 0x3b0) = L.self->owner->func_000119D0((char *)L.self->owner + 0x3e4);
    L.self->owner->func_00011BE0(&L.idx, &L.dist);
    if (L.idx == -1)
        return 1;
    if (L.dist < D_002756C8 &&
        *(float *)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + L.idx * 4 + 0x1a8) + 0x1194) > D_00275460) {
        if (*(int *)(*(int *)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + L.idx * 4 + 0x1a8) + 0x950) + 0xbc) == 0)
            L.self->func_00012B00(1);
    } else {
        float *q = (float *)((char *)L.self->owner + 0x3e4);
        float dx = *(float *)((char *)L.self + 0xc) - q[0];
        float dy = *(float *)((char *)L.self + 0x10) - q[1];
        float dz = *(float *)((char *)L.self + 0x14) - q[2];
        L.sq = dz * dz + dy * dy + dx * dx;
        L.len = sqrtf(L.sq);
        if (L.len < D_00275600) {
            if (*(unsigned int *)((char *)D_002A8490 + 0x238) <= *(unsigned int *)((char *)L.self + 0x1c))
                return 1;
            L.self->func_00012B00(0);
        }
    }
    if (L.dist > D_002756C4)
        SetAnimState_14EF0((char *)L.self->owner, 4, 0x3a0);
    if (*(char *)((char *)L.self->owner + 0x3e2) == 2)
        return 1;
    if (L.dist < D_002756BC &&
        *(int *)(*(int *)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + L.idx * 4 + 0x1a8) + 0x950) + 0xbc) == 0)
        func_000149A0(L.idx, -13.0f);
    SetAnimState_14EF0((char *)L.self->owner, 6, 0x390);
    *(float *)((char *)L.self->owner + 0x3d8) = dt + *(float *)((char *)L.self->owner + 0x3d8);
    if (*(float *)((char *)L.self->owner + 0x3d8) > D_00275548)
        SetAnimState_14EF0((char *)L.self->owner, 8, 0x3a8);
    return 1;
}

void AIPedCurseState::func_00015170()
{
    *(int *)(*(char **)((char *)owner + 0x3c) + 0x10) = 1;
    owner->func_001C6DA0(*(int *)((char *)owner + 0x420), 1);
    if (*(int *)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x1c8) == 0 && *(char *)((char *)owner + 0x3e1) == 0) {
        if (func_00011260(0, 100) > 0x32) {
            D_002AF44C->func_00013F50(owner, *(unsigned char *)((char *)owner + 0x3e2), (char *)owner + 0x3e4, *(int *)((char *)owner + 0x3cc));
        }
    }
}

int AIPedCurseState::func_000151F0(float dt)
{
    if (*(int *)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x1c8) != 1) {
        float dist;
        int idx;
        ((Ped_151F0 *)owner)->func_00011BE0(&idx, &dist);
        if (idx != -1) {
            Vec4_149A0 v;
            ((Ped_151F0 *)owner)->func_001C6B30(
                *(*(Vec4Src_151F0 **)(*(char **)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0xa00) + 4))->func_00199B00(&v, 0),
                dt * D_002756B8);
            if (dist <= D_002756C4) {
                SetAnimState_14EF0((char *)owner, 3, 0x39c);
            } else if (*(int *)(*(char **)((char *)owner + 0x3c) + 0x10) == 1) {
                SetAnimState_14EF0((char *)owner, 2, 0x398);
            }
            if (*(unsigned char *)((char *)owner + 0x3e2) != 2) {
                if (dist < D_002756BC && *(int *)(*(char **)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x950) + 0xbc) == 0) {
                    ((Ped_151F0 *)owner)->func_000149A0(idx, -13.0f);
                    SetAnimState_14EF0((char *)owner, 6, 0x390);
                }
            }
        }
    }
    *(float *)((char *)owner + 0x3d8) += dt;
    return 1;
}

void *AIPedestrian::func_00015960(unsigned int flags)
{
    func_00014020();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
