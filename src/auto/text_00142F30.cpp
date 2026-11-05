/* 19 functions from 0x00142F30 to 0x00143C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00143BD0 {
    undefined4 func_00143BD0(byte param_1);
};

extern int D_002859D0;
extern int D_002859EC;
void *func_001E8A44(int size);

struct PageObj {
    virtual void destroy(int flags);
};

struct DXRenderableObjectData {
    void *vtbl;
    void func_00181410();
    DXRenderableObjectData *func_00143520(void);
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
};


DXRenderableObjectData *DXRenderableObjectData::func_00143520(void)
{
    func_00181410();
    vtbl = (void *)&D_002859D0;
    return this;
}

DXRenderableObject *DXRenderableObject::func_00143540(int a1, int a2, int a3)
{
    if (func_001817F0(a1, a2, 0) != 0) {
        f1a3 = a3;
        return this;
    }
    return 0;
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
