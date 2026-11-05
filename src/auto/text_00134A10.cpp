/* 15 functions from 0x00134A10 to 0x001358A0, found by Ghidra. */
#include "common.h"

extern int D_0028472C;
extern int D_00284774;

void func_001E891B(void *p);

struct C_0013B210 {
    void func_0013B210(void *p);
};
extern C_0013B210 *D_002BEAAC;

struct C_0001DFF0 {
    void func_0001DFF0();
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_00157660 {
    void func_00157660();
};

struct C_00157A00 {
    void func_00157A00(int a);
};

/* ColorMapper */
struct C_00135430 {
    void *vtbl;
    void *func_00135430(int flags);
};

/* one 0x4c-byte particle of ParticleSystem::f34 (virtual destructor, slot 0) */
struct S_Particle {
    virtual ~S_Particle();
    char pad4[0x48];
    void func_00135550(int dt);
    static void operator delete[](void *p) { func_001E891B(p); }
    static void operator delete(void *p) { func_001E891B(p); }
};

/* polymorphic helper object held in the f38 / f3c tables */
struct S_ParticleObj {
    virtual void v0();
    virtual void v1();
};

struct ParticleSystem;
typedef void (__cdecl *ParticleCb)(S_Particle *p, ParticleSystem *sys);
typedef void (__cdecl *ParticleEndCb)(ParticleSystem *sys, void *data);

/* ParticleSystem */
struct ParticleSystem {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    S_Particle *f34;
    S_ParticleObj **f38;
    S_ParticleObj **f3c;
    void *f40;
    ParticleCb f44;
    ParticleEndCb f48;
    ParticleSystem *func_00135700(int a);
    void func_00135740();
    void func_001357A0(int dt);
};

struct C_00135870 {
    char pad0[0x4];
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    void func_00135870(int a0, int a1, int a2, int a3, int a4);
};

struct C_00135850 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00135850* func_00135850(void);
};

struct C_00135420 {
    char pad0[0x8710];
    int unk8710;
    int func_00135420(void);
};

struct C_00135410 {
    char pad0[0x710];
    int unk710;
    int func_00135410(void);
};

struct C_00135400 {
    char pad0[0x10];
    int unk10;
    int func_00135400(void);
};


int C_00135400::func_00135400(void) {
    return (int)&unk10;
}

int C_00135410::func_00135410(void) {
    return (int)&unk710;
}

int C_00135420::func_00135420(void) {
    return (int)&unk8710;
}

void *C_00135430::func_00135430(int flags)
{
    vtbl = (void *)&D_0028472C;
    D_002BEAAC->func_0013B210(this);
    ((C_0001DFF0 *)this)->func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00135850* C_00135850::func_00135850(void) {
    extern int D_002847F0;
    unk0 = (int)&D_002847F0;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    return this;
}

void C_00135870::func_00135870(int a0, int a1, int a2, int a3, int a4) {
    unk4 = a4;
    unk8 = a0;
    unk10 = a1;
    unk14 = a2;
    unkC = a3;
}

