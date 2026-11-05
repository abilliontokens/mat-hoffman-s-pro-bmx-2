/* 10 functions from 0x00128930 to 0x00129930, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00129900 {
    void func_00129900(void);
};

extern int D_002B92E4;
extern int D_002B92F4;
extern u32 D_002A3CD8;
extern u32 D_002A3CDC;
extern u32 D_002A3CE0;
extern u32 D_002A3CE4;
extern int D_00283F64;

/* vector initialised to (0, 0, 0, 1) */
struct S_00129050_Vec4 {
    float x, y, z, w;
    S_00129050_Vec4() {
        z = 0;
        y = 0;
        x = 0;
        w = 1.0f;
    }
};

struct S_00129050_Leaf32 {
    S_00129050_Vec4 v0;
    S_00129050_Vec4 v1;
};

struct S_00129050_Leaf20 {
    int unk[5];
};

struct S_002B92E8 {
    void *nodes;
    S_00129050_Leaf32 *leaves;
};

struct S_002B9290 {
    void *nodes;
    S_00129050_Leaf20 *leaves;
};

extern S_002B92E8 *D_002B92E8;
extern S_002B9290 *D_002B9290;

struct C_002B92A0 {
    void func_000264C0(int param_1);
};
extern C_002B92A0 D_002B92A0;
extern C_002B92A0 D_002B9300;

int func_00128930(S_00129050_Leaf20 *leaf, S_00129050_Vec4 *vecs, int idx, C_002B92A0 *obj);
void func_0011AC30(void *out, void *in);
void func_0011ACC0(void *out, int a, void *b);
void func_00129110(int a1, int a2);

/* BoxCollisionObject (run-time type information), base class CollisionObject */
struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x4C];
    int f50;
    char pad54[0x9C];
    u32 fF0, fF4, fF8, fFC;
    u32 f100, f104, f108, f10C;
    void func_00132EB0(int a0);
    BoxCollisionObject *func_00129840(int a0);
};


void func_001294E0(int a0, int a1, int a2, int a3, int a4) {
    extern int D_002B92F4;
    int func_001293F0(...);
    D_002B92F4 = a4;
    func_001293F0(a0, a1, a2, a3);
}

void C_00129900::func_00129900(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x54) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
  }
  return;
}

void func_00129920(void) {
    int func_00133020(...);
    func_00133020();
}
