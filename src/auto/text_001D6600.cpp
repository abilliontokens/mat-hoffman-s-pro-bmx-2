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

extern char D_0028F6B8[], D_0028762C[], D_0028F6B4[], D_0028F6A0[], D_00276274[];
struct Img_001D6D00 { int f0; char pad[0x10]; int f14; int f18; };
struct Sz_001D6D00 { int w; void *p; };
int __cdecl func_001ADCC0(char *buf, int n, ...);
void *__cdecl func_0014FDF0(char *buf, char *mode);
void __cdecl func_0014FE50(void *h);
void *__cdecl func_001E8AA5(int n);
void __cdecl func_001E8390(void *p);
void __cdecl func_00178C60(void *a, void *b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
void __cdecl func_001B3A50(void *a, int b, int c, int d, char *e, int f);

struct XboxTextureMap {
    void func_001D6D00(Img_001D6D00 *img, Sz_001D6D00 *sz, char *name);
    virtual void slot0(int flags);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int slot8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
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
    *(void **)this = (void *)&D_0028F644;
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
            ((void **)p)[0] = (void *)&D_0028F644;
            p->fB8 = 0;
            p->fBC = 0;
            if (p->slot8(dims[1], f8, fC, (dims[0] << 3) / func_001B2910(fA4), fA0, fA4, fA4, 0, 0))
                return p;
            p->slot0(1);
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

void XboxTextureMap::func_001D6D00(Img_001D6D00 *img, Sz_001D6D00 *sz, char *name)
{
    char buf[0x104];
    char *ext;
    int i;
    void *h;
    void *mem;

    if (func_001B2910(img->f0) == 8)
        ext = D_0028F6B8;
    else
        ext = D_0028762C;
    char *base = name;
    i = 0;
    if (base == 0)
        base = D_0028F6B4;
    h = 0;
    for (;;) {
        if (h != 0)
            func_0014FE50(h);
        func_001ADCC0(buf, 0x104, D_0028F6A0, base, i, ext);
        h = func_0014FDF0(buf, D_00276274);
        i++;
        if (h == 0)
            break;
    }
    mem = func_001E8AA5(img->f18 * img->f14 * 4);
    int w = img->f14;
    func_00178C60(mem, sz->p, w, img->f18, w, (sz->w << 3) / func_001B2910(fA4), 0x22b8, fA4, 0, 0, 0x80, 0xff00ff, 1);
    func_001B3A50(mem, img->f14, img->f18, 0, buf, 0x20);
    func_001E8390(mem);
}

