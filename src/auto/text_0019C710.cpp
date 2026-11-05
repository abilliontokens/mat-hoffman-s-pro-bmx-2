/* 7 functions from 0x0019C710 to 0x0019D6C0, found by Ghidra. */
#include "common.h"

void *func_001E8A44(int size);
void func_00133D80(void *p);
extern int D_002B92E0;
extern int D_002B92F0;

/* (0, 0, 0, 1) vector */
struct V4_0019CB00 {
    float x;
    float y;
    float z;
    float w;
    V4_0019CB00() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_0019CB00(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

/* the 0x38-byte transform stored at +0x54 */
struct S_0019CB00_Xform {
    V4_0019CB00 a;
    V4_0019CB00 b;
    V4_0019CB00 c;
    float f30;
    float f34;
    S_0019CB00_Xform *Init(void)
    {
        a.z = 0.0f;
        a.y = 0.0f;
        a.x = 0.0f;
        a.w = 1.0f;
        b.z = 0.0f;
        b.y = 0.0f;
        b.x = 0.0f;
        b.w = 1.0f;
        c.z = 0.0f;
        c.y = 0.0f;
        c.x = 0.0f;
        c.w = 1.0f;
        return this;
    }
};

struct SoultreeCollisionObject {
    int vtbl;
    char pad_0[0x50];
    S_0019CB00_Xform *unk54;
    char pad_58[0xa4 - 0x58];
    unsigned short unkA4;
    unsigned char unkA6;
    unsigned char unkA7;
    char pad_A8[0xb0 - 0xa8];
    char unkB0[0x100];
    char unk1B0[0xc];
    unsigned short unk1BC;
    char pad_1BE[0x1c4 - 0x1be];
    int unk1C4;
    int unk1C8;
    void func_0019CB00(void);
    void func_0019CCA0(int param_1);
    void func_0019CBF0(int param_1, int param_2);
    int func_0019D680(void *param_1);
    void func_00157A00(int param_1);
    int func_0019BB80(void *param_1);
    void func_0019BA70();
    void func_0019B890();
    void func_0019B760();
    void func_00133E60();
    void *func_0019D650(int flags);
};

extern "C" void __stdcall func_0019BBD0(unsigned short param_1, int *param_2, int param_3, char *param_4, char *param_5);
extern "C" void __stdcall func_0019BD20(unsigned short param_1, int *param_2, char *param_3, char *param_4, int param_5);

void SoultreeCollisionObject::func_0019CB00(void)
{
    S_0019CB00_Xform *p;

    D_002B92E0 = 0;
    D_002B92F0 = 0;
    if (unk54 == 0) {
        void *m = func_001E8A44(0x38);
        unk54 = m != 0 ? ((S_0019CB00_Xform *)m)->Init() : 0;
    }
    func_00133D80(unk54);
    p = unk54;
    V4_0019CB00 t(0);
    p->a = t;
    V4_0019CB00 u(0);
    p->b = u;
    p->f34 = 0.0f;
    p->f30 = 1.0f;
}

void SoultreeCollisionObject::func_0019CBF0(int param_1, int param_2)
{
    int local[2];
    local[0] = unk1C4;
    local[1] = unk1C8;
    switch (unkA6) {
    case 1:
        func_0019BBD0(unk1BC, local, param_1, unkB0, unk1B0);
        return;
    case 2:
    case 3:
    case 4:
    case 5:
        return;
    case 6:
        func_0019BD20(unk1BC, local, unk1B0, unkB0, 1);
        return;
    case 7:
        func_0019BD20(unk1BC, local, unk1B0, unkB0, 0);
        return;
    }
}

void SoultreeCollisionObject::func_0019CCA0(int param_1)
{
    if (unkA6 != 0) {
        func_0019CBF0(unkA4, unkA6);
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

void *SoultreeCollisionObject::func_0019D650(int flags)
{
    extern int D_0028B1C4;
    void func_001E891B(void *);
    vtbl = (int)&D_0028B1C4;
    func_0019B760();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int SoultreeCollisionObject::func_0019D680(void *param_1)
{
    unsigned int result;
    if (((int *)param_1)[0x14] != 6) {
        return 0;
    }
    result = (unsigned int)func_0019BB80(param_1);
    if (result != 0) {
        func_0019BA70();
        func_0019B890();
    }
    return (int)result;
}

