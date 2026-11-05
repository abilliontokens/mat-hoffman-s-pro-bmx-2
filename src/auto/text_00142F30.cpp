/* 19 functions from 0x00142F30 to 0x00143C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00143BD0 {
    undefined4 func_00143BD0(byte param_1);
};

extern int D_002859D0;
extern int D_002859EC;
extern int D_00285A9C;
extern int *D_002EFDB8;
void *func_001E8A44(int size);
void func_001E891B(void *);

struct PageObj {
    virtual void destroy(int flags);
};

struct DXRenderableObjectData {
    void *vtbl;
    void func_00181410();
    void func_00181440();
    DXRenderableObjectData *func_00143520(void);
    void *func_00143770(int flags);
};

struct DXRenderableObject;

struct Alloc190 {
    Alloc190 *func_00142E90(DXRenderableObject *owner);
};

struct DXRenderableObject {
    void *vtbl;
    char pad4[0x19F];
    unsigned char f1a3 : 1;
    char pad1a4[0x2C];
    PageObj *f1d0;
    int f1d4;
    void func_001814B0(int a);
    int func_001817F0(int a, int b, int c);
    void func_00181540();
    DXRenderableObject *func_00143540(int a1, int a2, int a3);
    DXRenderableObject *func_00143580(int a);
    void func_001435D0(void);
    void *func_001437A0(int flags);
};

struct C_001C5DE0 {
    void func_001C5DE0(void *a, void *b, void *c, int d);
};

extern C_001C5DE0 *D_002AB66C;

struct C_00143600 {
    void func_00143600();
};

struct C_001437E0 {
    int unk0;
    void *unk4;
    int unk8;
    void func_001437E0(void *p);
};


DXRenderableObjectData *DXRenderableObjectData::func_00143520(void)
{
    func_00181410();
    vtbl = (void *)&D_002859D0;
    return this;
}

DXRenderableObject *DXRenderableObject::func_00143540(int a1, int a2, int a3)
{
    if (func_001817F0(a1, a2, 0) == 0)
        return 0;
    f1a3 = a3;
    return this;
}

DXRenderableObject *DXRenderableObject::func_00143580(int a)
{
    Alloc190 *p;

    func_001814B0(a);
    vtbl = (void *)&D_002859EC;
    p = (Alloc190 *)func_001E8A44(0x190);
    if (p)
        p = p->func_00142E90(this);
    else
        p = 0;
    f1d0 = (PageObj *)p;
    f1d4 = -1;
    return this;
}

void DXRenderableObject::func_001435D0(void)
{
    vtbl = (void *)&D_002859EC;
    if (f1d0)
        f1d0->destroy(1);
    func_00181540();
}

void C_00143600::func_00143600()
{
    __declspec(align(16)) float m[16];
    int func_000263B0(...);
    int func_00197AA0(...);

    func_00197AA0();
    func_000263B0(m, (char *)this + 0xf0, (char *)(D_002EFDB8[1] + 0xf0));
    D_002AB66C->func_001C5DE0(m, (char *)this + 0x150, (char *)this + 0x160, 0);
}

void *DXRenderableObjectData::func_00143770(int flags)
{
    vtbl = (void *)&D_002859D0;
    func_00181440();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void *DXRenderableObject::func_001437A0(int flags)
{
    vtbl = (void *)&D_002859EC;
    if (f1d0)
        f1d0->destroy(1);
    func_00181540();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

undefined4 C_00143BD0::func_00143BD0(byte param_1)
{
  int func_001439D0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001439D0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
