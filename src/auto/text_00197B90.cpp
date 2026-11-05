/* 18 functions from 0x00197B90 to 0x00198B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001982F0 {
    void func_001982F0(void);
};

struct C_000264C0 {
    void func_000264C0(void *src);
};

struct C_00197EA0 {
    char padB0[0xB0];
    void func_00197EA0(void *dst);
};

struct C_00197EC0_Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00197EC0 {
    char padF0[0xF0];
    float fF0;
    float fF4;
    float fF8;
    char padFC[4];
    float f100;
    float f104;
    float f108;
    char pad10C[4];
    float f110;
    float f114;
    float f118;
    void func_00197AA0(void);
    C_00197EC0_Vec4 func_00197EC0(float *v);
};

/* SceneNode: children list at 0x174 (siblings) and 0x178 (first child chain) */
struct C_00198230 {
    char pad0[0x174];
    C_00198230 *f174;
    C_00198230 *f178;
    C_00198230 *f17C;
    void func_00198230(C_00198230 *child);
    int func_00198270(void);
};

struct C_00197E70 {
    void func_00197E70(undefined4 *param_1);
};

struct C_001983A0 {
    void func_001983A0(void);
};

struct C_00198390 {
    void func_00198390(void);
};

struct C_00197820 {
    void *func_00197820(int a);
};

struct C_001983B0 {
    void func_001983B0(void **out);
};

struct C_001982A0 {
    char pad0[0x174];
    C_001982A0 *f174;
    C_001982A0 *f178;
    void func_001982A0(int *count, C_001982A0 **array);
};

struct C_00198330 {
    char pad0[0x174];
    C_00198330 *f174;
    C_00198330 *f178;
    C_00198330 *func_00198330(void *arg);
};

struct C_001983E0_V4 {
    int x;
    int y;
    int z;
    int w;
};

struct C_001983E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    char pad4[0x12C];
    C_001983E0_V4 f130;
    C_001983E0_V4 f140;
    char pad150[0x30];
    u8 f180;
    void func_001983E0(void *out0, void *out1);
};


void C_00197E70::func_00197E70(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xbc);
  param_1[1] = *(undefined4 *)(in_ECX + 0xcc);
  param_1[2] = *(undefined4 *)(in_ECX + 0xdc);
  return;
}

void C_00197EA0::func_00197EA0(void *dst)
{
    ((C_000264C0 *)dst)->func_000264C0((char *)this + 0xB0);
}

C_00197EC0_Vec4 C_00197EC0::func_00197EC0(float *v)
{
    C_00197EC0_Vec4 r;

    r.w = 1.0f;
    func_00197AA0();
    r.x = fF0 * v[0] + (fF4 * v[1] + fF8 * v[2]);
    r.y = f100 * v[0] + f104 * v[1] + f108 * v[2];
    r.z = f110 * v[0] + f114 * v[1] + f118 * v[2];
    return r;
}

void C_00198230::func_00198230(C_00198230 *child)
{
    C_00198230 *node = this;
    C_00198230 **pp = &node->f178;

    while (*pp != 0) {
        node = *pp;
        pp = &node->f178;
    }
    node->f178 = child;
    child->f17C = node;
}

int C_00198230::func_00198270(void)
{
    int n = 0;

    if (f178 != 0) {
        n = f178->func_00198270();
    }
    if (f174 != 0) {
        n += f174->func_00198270();
    }
    return n + 1;
}

void C_001982F0::func_001982F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  *(byte *)(in_ECX + 0x180) = *(byte *)(in_ECX + 0x180) | 0x80;
  piVar2 = (int *)(in_ECX + 0x170);
  for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x170)) {
    iVar1 = *piVar2;
    *(byte *)(iVar1 + 0x180) = *(byte *)(iVar1 + 0x180) | 0x80;
    piVar2 = (int *)(iVar1 + 0x170);
  }
  return;
}

void *func_001E8A44(int size);
int func_001EA426(void *a, void *b);
C_00198330 *C_00198330::func_00198330(void *arg)
{
    C_00198330 *result = 0;
    if (func_001EA426((char *)this + 0x28, arg) == 0) {
        return this;
    }
    if (f178 != 0) {
        result = f178->func_00198330(arg);
        if (result != 0) {
            return result;
        }
    }
    if (f174 != 0) {
        result = f174->func_00198330(arg);
    }
    return result;
}

void C_00198390::func_00198390(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) | 4;
  return;
}

void C_001983A0::func_001983A0(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) & 0xfb;
  return;
}

