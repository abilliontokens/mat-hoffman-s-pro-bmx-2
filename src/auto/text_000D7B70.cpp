/* 6 functions from 0x000D7B70 to 0x000D8B20, found by Ghidra. */
#include "common.h"
extern int D_0027F404;

struct DelObjHOF4 {
    virtual void Destroy(int a0);
};

struct BmxUIPageHOF4D {
    void *vtbl;
    char pad4[0x2F4 - 4];
    DelObjHOF4 *arr2F4[2];
    DelObjHOF4 *arr2FC[2];
    DelObjHOF4 *arr304[2];
    void func_001BE3F0();
    void func_000D7B70();
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
