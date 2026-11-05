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
    short unk1A2;
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
