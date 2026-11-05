/* 10 functions from 0x001D6600 to 0x001D73E0, found by Ghidra. */
#include "common.h"

extern int D_0028F644;
extern int D_002A83E0;

int __cdecl func_001B2910(int a0);
unsigned int __stdcall func_00201100(void *p);
int __stdcall func_00200390(void *a0, void *a1);
int __stdcall func_001FCFE0(int a0);
void *__cdecl func_001E8A44(int size);
void __stdcall func_001FCEA0(void *map, int index, void *out, int a, int b);

struct XboxTextureMap {
    void *vtbl;
    char pad4[4];
    int f8;
    int fC;
    char pad10[0xa0 - 0x10];
    int fA0;
    int fA4;
    char padA8[0xb8 - 0xa8];
    void *fB8;
    void *fBC;
    void func_001B1200(void *param);
    void func_001B11D0(void);
    XboxTextureMap *func_001D6AD0(void *param);
    void func_001D6B00(void);
    void func_001D6C50(void *param);
    int func_001D6CB0(int param);
    XboxTextureMap *func_001D6B70(void);
};

struct XboxTextureMapVtbl {
    virtual void slot0(int flags);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int slot8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};

XboxTextureMap *XboxTextureMap::func_001D6AD0(void *param)
{
    func_001B1200(param);
    fB8 = 0;
    fBC = 0;
    *(void **)this = (void *)&D_0028F644;
    return this;
}

void XboxTextureMap::func_001D6B00(void)
{
    vtbl = (void *)&D_0028F644;
    if (fB8 != 0) {
        if (D_002A83E0 != 0) {
            func_001B2910(fA4);
        }
        func_00201100(fB8);
        fB8 = 0;
    }
    if (fBC != 0) {
        func_00201100(fBC);
        fBC = 0;
    }
    func_001B11D0();
}

XboxTextureMap *XboxTextureMap::func_001D6B70(void)
{
    int dims[2];
    XboxTextureMap *p;

    if (fB8 != 0) {
        func_001FCEA0(fB8, 0, dims, 0, 0x80);
        p = (XboxTextureMap *)func_001E8A44(0x110);
        if (p != 0) {
            p->func_001B1200((void *)1);
            *(void * volatile *)p = (void *)&D_0028F644;
            p->fB8 = 0;
            p->fBC = 0;
            if (((XboxTextureMapVtbl *)p)->slot8(dims[1], f8, fC, (dims[0] << 3) / func_001B2910(fA4), fA0, fA4, fA4, 0, 0))
                return p;
            ((XboxTextureMapVtbl *)p)->slot0(1);
        }
    }
    return 0;
}

int __stdcall func_001D6C40(int a0, int a1) {
    return 1;
}

void XboxTextureMap::func_001D6C50(void *param)
{
    if (fB8 != 0) {
        func_00200390(param, fB8);
    }
}

int XboxTextureMap::func_001D6CB0(int param)
{
    int v = f8;
    int n = func_001FCFE0((int)fB8);
    int i = 0;

    if (v != param) {
        while (i < n) {
            v /= 2;
            i++;
            if (v == param) {
                return i;
            }
        }
    }
    if (v != param) {
        return -1;
    }
    return i;
}

