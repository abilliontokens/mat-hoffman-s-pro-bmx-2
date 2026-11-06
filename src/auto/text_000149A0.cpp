/* 7 functions from 0x000149A0 to 0x00015980, found by Ghidra. */
#include "common.h"

struct AIPedestrian {
    void *func_00015960(unsigned int flags);
    void func_00014020();
    void func_001C6DA0(int arg1, int arg2);
    void func_000149A0(int idx, float scale);
};

struct Vec4_149A0 {
    float x, y, z, w;
};

static __forceinline Vec4_149A0 Scale_149A0(const Vec4_149A0 &v, float s)
{
    Vec4_149A0 r;
    r.x = v.x * s;
    r.y = v.y * s;
    r.z = v.z * s;
    r.w = 1.0f;
    return r;
}

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
extern float D_002756B4;

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
void func_000149A0(int idx, float scale);

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
static inline int IsLocal_151F0()
{
    char *p = *(char **)((char *)D_002A8490 + 0x2a4);
    return p != 0 && *(int *)(p + 0x1c8) == 0;
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
            Vec4_149A0 c;
            a.z = 0.0f; a.y = 0.0f; a.x = 0.0f; a.w = 1.0f;
            b.z = 0.0f; b.y = 0.0f; b.x = 0.0f; b.w = 1.0f;
            (*(Obj197B40 **)(*(char **)((char *)this + 0x3c) + 4))->func_00197B40(&a, &b);
            (*(Obj108360 **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8))->func_00108360();
            c.x = a.x * scale;
            c.y = a.y * scale;
            c.z = a.z * scale;
            c.w = 1.0f;
            *(Vec4_149A0 *)(*(char **)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x950) + 0x5c) = c;
            *(unsigned int *)((char *)this + 0x3c0) = *(unsigned int *)((char *)D_002A8490 + 0x238) + 5000;
            int snd = *(int *)(*(char **)(*(char **)(D_002B9120 + 0x4e0) + idx * 4 + 0x1a8) + 0x970);
            (*(Sound149A0 **)(*(char **)((char *)D_002A8490 + 8) + snd * 4 + 0x14))->Play(0, scale * 0.015f, 200);
            if (*((char *)this + 0x3e1) == 0) {
                D_002AF44C->func_00013F50(this, *(unsigned char *)((char *)this + 0x3e2), (char *)this + 0x3e4, *(int *)((char *)this + 0x3cc));
            }
        }
    }
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

void *AIPedestrian::func_00015960(unsigned int flags)
{
    func_00014020();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
