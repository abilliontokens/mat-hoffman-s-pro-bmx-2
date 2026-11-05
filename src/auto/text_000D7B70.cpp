/* 6 functions from 0x000D7B70 to 0x000D8B20, found by Ghidra. */
#include "common.h"
extern int D_0027F404;

struct DelObjHOF4 {
    virtual void Destroy(int a0);
};

struct S_000D8A40_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D8A40_Res {
    void func_00103260(int a);
};

struct S_000D8A40_Owner {
    S_000D8A40_Res *func_000BA9B0(int a);
};

struct BmxUIPageHOF4D {
    void *vtbl;
    char pad4[0x124 - 4];
    S_000D8A40_Owner *f124;
    char pad128[0x2CC - 0x128];
    S_000D8A40_Widget *arr2CC[5];
    S_000D8A40_Widget *arr2E0[5];
    DelObjHOF4 *arr2F4[2];
    DelObjHOF4 *arr2FC[2];
    DelObjHOF4 *arr304[2];
    S_000D8A40_Widget *arr30C[5];
    void func_001BE3F0();
    void func_000D7B70();
    void func_000D8A40();
};

void BmxUIPageHOF4D::func_000D7B70()
{
    vtbl = &D_0027F404;
    for (int i = 0; i < 2; i++) {
        if (arr2F4[i] != 0) {
            arr2F4[i]->Destroy(1);
            arr2F4[i] = 0;
        }
        if (arr2FC[i] != 0) {
            arr2FC[i]->Destroy(1);
            arr2FC[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (arr304[i] != 0) {
            arr304[i]->Destroy(1);
            arr304[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageHOF4D::func_000D8A40()
{
    S_000D8A40_Owner *owner = f124;
    int i;
    for (i = 0; i < 5; i++) {
        arr2CC[i]->func_001B1980();
        arr2E0[i]->func_001B1980();
        arr30C[i]->func_001B1980();
        arr2CC[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr2E0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr30C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x20)->func_00103260(0);
}

