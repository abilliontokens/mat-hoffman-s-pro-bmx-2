/* 4 functions from 0x000874E0 to 0x00087D20, found by Ghidra. */
#include "common.h"

extern int D_002797A4;

void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct C_00157600 {
    void func_00157600(int param);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_000876B0_Child {
    virtual void Destroy(int flag);
};

struct C_000876B0_Item {
    void func_001D6410(void);
};

struct C_000876B0 {
    void *vtbl;
    char pad4[0x20];
    C_000876B0_Item *f24[2];
    C_000876B0_Child *f2C;
    C_000876B0_Child *f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44[0x20];
    int fC4;
    C_000876B0 *func_000876B0(int a0);
    void func_00087700(void);
};

static __forceinline void SetVtbl_876B0(C_000876B0 *p)
{
    p->vtbl = (void *)&D_002797A4;
}

struct LookupObj_874E0 {
    int *func_0018C160(int a);
};

struct GObjRoot_874E0 {
    char pad0[0x10];
    int f10;
    char pad14[0x2ec - 0x14];
    LookupObj_874E0 *p2EC;
};

extern GObjRoot_874E0 *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_0027958C;

struct ClampObj_874E0 {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_874E0 {
    ClampObj_874E0 *func_0018C070();
};

struct C_00087760 {
    char pad0[0x2c];
    int *f2C;
    int *f30;
    int f34;
    char pad38[0x8];
    int f40;
    char pad44[0x80];
    int fC4;
    C_00087760 *func_00087760(int a, int b);
};

/* BestScoreOverlay */
struct C_000874E0 {
    char pad0[0x44];
    int f44;
    void func_000874E0(void);
    void func_001578D0(void);
};

void C_000874E0::func_000874E0(void)
{
    int *r;
    MidObj_874E0 *a;
    MidObj_874E0 *b;
    ClampObj_874E0 *o;

    if (D_002A8490->f10 != f44) {
        func_001578D0();
        return;
    }
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    a = r != 0 ? (MidObj_874E0 *)*r : 0;
    r = D_002A8490->p2EC->func_0018C160((int)&D_0027958C);
    b = r != 0 ? (MidObj_874E0 *)*r : 0;
    if (a != 0) {
        o = a->func_0018C070();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    }
    if (b != 0) {
        o = b->func_0018C070();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    }
    func_001578D0();
}

C_000876B0 *C_000876B0::func_000876B0(int a0) {
    volatile C_000876B0 *v;

    ((C_00157600 *)this)->func_00157600(1);
    v = (volatile C_000876B0 *)this;
    v->vtbl = (void *)&D_002797A4;
    v->f24[0] = 0;
    v->f24[1] = 0;
    v->f2C = 0;
    v->f30 = 0;
    v->f34 = 0;
    v->f38 = 0;
    v->f3C = 0;
    v->f40 = 0;
    v->fC4 = 0;
    memset((void *)v->f44, 0, sizeof(f44));
    return this;
}

void C_000876B0::func_00087700(void) {
    int i;

    vtbl = (void *)&D_002797A4;
    if (f2C != 0) {
        f2C->Destroy(1);
        f2C = 0;
    }
    if (f30 != 0) {
        f30->Destroy(1);
        f30 = 0;
    }
    for (i = 0; i < 2; i++) {
        C_000876B0_Item *p = f24[i];
        if (p != 0) {
            p->func_001D6410();
            func_001E891B(p);
        }
    }
    ((C_00157660 *)this)->func_00157660();
}

