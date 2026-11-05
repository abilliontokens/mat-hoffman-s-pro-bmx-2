/* 8 functions from 0x00180E00 to 0x00181DB0, found by Ghidra. */
#include "common.h"

extern int D_00289254;
extern int D_0028926C;

void func_001E891B(void *p);
void func_001E8390(void *p);

struct VObj {
    virtual void destroyObject(int flags);
};

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0(void);
    void func_0001DFF0(void);
};

struct RODElem {
    int unk0;
    int unk4;
    VObj *unk8;
};

struct RenderableObjectData : C_0001DFE0 {
    int unk8;
    float unkC;
    RODElem *unk10;
    RenderableObjectData *func_00181410(void);
    void func_00181440(void);
};

struct RenderableObject {
    void *vtbl;
    char pad4[0x23];
    unsigned char unk27;
    char pad28[0x159];
    unsigned char unk181;
    char pad182[0x1e];
    unsigned char unk1A0;
    unsigned char unk1A1;
    unsigned char unk1A2;
    unsigned char unk1A3;
    int unk1A4;
    int unk1A8;
    int unk1AC;
    int unk1B0;
    int unk1B4;
    int unk1B8;
    int unk1BC;
    float unk1C0;
    float unk1C4;
    float unk1C8;
    float unk1CC;
    void func_00197820(int a);
    RenderableObject *func_001814B0(int a);
};

RenderableObjectData *RenderableObjectData::func_00181410(void)
{
    func_0001DFE0();
    unk8 = 0;
    unk10 = 0;
    vtbl = &D_00289254;
    unkC = 1.0f;
    return this;
}

void RenderableObjectData::func_00181440(void)
{
    vtbl = &D_00289254;
    for (int i = 0; i < unk8; i++) {
        VObj *o = unk10[i].unk8;
        if (o != 0) {
            if (((int *)o)[-1] == 0) {
                func_001E891B((int *)o - 1);
            } else {
                o->destroyObject(3);
            }
        }
    }
    if (unk10 != 0) {
        func_001E8390(unk10);
    }
    func_0001DFF0();
}

RenderableObject *RenderableObject::func_001814B0(int a)
{
    func_00197820(a);
    unk1A2 = 0;
    unk1A4 = 0;
    unk1A8 = 0;
    unk1A0 = 0;
    unk1AC = 0;
    unk1B4 = 0;
    unk1B8 = 0;
    unk1BC = 0;
    unk1A3 |= 8;
    unk1C0 = 1.0f;
    unk1C4 = 1.0f;
    unk1C8 = 1.0f;
    unk1CC = 1.0f;
    vtbl = &D_0028926C;
    unk27 |= 3;
    unk181 &= 0xfe;
    unk1A1 = 0xff;
    return this;
}

