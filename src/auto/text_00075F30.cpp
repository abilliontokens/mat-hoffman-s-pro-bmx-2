/* 1 function from 0x00075F30 to 0x00076EF0, found by Ghidra. */
#include "common.h"

extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[], D_002786B0[], D_00278648[], D_00278624[], D_00278638[], D_00278608[], D_00278600[];
extern char D_00278664[], D_00278668[], D_0027866C[], D_00278670[], D_00278674[];
extern char D_002A60B0[], D_002A60B4[], D_002A60B8[], D_002A60BC[], D_002A60C0[];
extern float D_00278654, D_00275544, D_0027653C, D_00278650, D_002757F0, D_00278E60;
extern int D_0028F5E0, D_0028F5DC;
extern "C" void *func_001E8A44(unsigned int size);

struct Lookup_75F30 {
    int func_0018C780(int, void *, int);
    void *func_0018C160(int);
};
struct Mgr_75F30 {
    char pad0[0x2e8];
    void *f2e8;
    Lookup_75F30 *f2ec;
};

struct Img_75F30 {
    char pad0[0x28];
    float width;
    float height;
    char pad30[8];
    int color;
    float a, b, c, d;
    float f4C, f50;
    char pad54[4];
    unsigned char flags;
    Img_75F30 *func_001D5760();
    Img_75F30 *func_001D5E90();
    void func_001D5FA0(void *p, char *name, int a, int b);
    void func_0005E840(int x);
    void func_001D5810(char *name, float x, float y, int z);
};

struct C_00075F30 {
    char pad0[0x94];
    void *f94;
    void *f98;
    void *f9C;
    int fA0;
    int fA4;
    int fA8;
    Img_75F30 *fAC;
    Img_75F30 *fB0;
    Img_75F30 *fB4[5];
    Img_75F30 *fC8[5];
    Img_75F30 *fDC[6];
    Img_75F30 *f4;
    char padF8[8];
    Img_75F30 *f100, *f104, *f108, *f10C, *f110, *f114, *f118;
    char pad11C[4];
    int f120;
    char pad124[0x74];
    Img_75F30 *f198, *f19C, *f1A0, *f1A4;
    char pad1A8[0x14];
    int f1BC;
    int func_0018C210();
    void func_001577A0(void *obj, int flags);
    C_00075F30 *func_00075F30(int a);
};

/* 0x60-byte image objects (f100..f118, ffc, f1BC, f_f8): f4/f8 at +4/+8, f44 at +0x44,
   color at +0x48, flags at +0x4e. */
struct I60_75F30 {
    float f4;
    float f8;
    char padC[0x38];
    int f44;
    int color;
    char pad4C[2];
    unsigned char flags;
};

extern Mgr_75F30 *D_002A8490;

extern float D_0027886C;
C_00075F30 *C_00075F30::func_00075F30(int a)
{
    int v1, v2, v3;
    void *p;

    f120 = a;
    p = D_002A8490->f2ec->func_0018C160((int)D_002786A0);
    v1 = p ? *(int *)p : 0;
    p = D_002A8490->f2ec->func_0018C160((int)D_00278690);
    v2 = p ? *(int *)p : 0;
    p = D_002A8490->f2ec->func_0018C160((int)D_00278678);
    v3 = p ? *(int *)p : 0;
    *(int *)D_002A60B0 = *(int *)D_00278664;
    *(int *)D_002A60B4 = *(int *)D_00278668;
    *(int *)D_002A60B8 = *(int *)D_0027866C;
    *(int *)D_002A60BC = *(int *)D_00278670;
    *(char *)D_002A60C0 = *(char *)D_00278674;

    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        fAC = o;
        o->func_001D5810(D_00278658, 0.0f, 0.0f, 0);
        if (fAC->width != 640.0f) {
            fAC->width = 640.0f;
            fAC->flags |= 1;
        }
        if (fAC->height != 50.0f) {
            fAC->height = 50.0f;
            fAC->flags |= 1;
        }
        fAC->a = fAC->f4C * D_00278654;
        fAC->b = fAC->f4C * D_00275544;
        fAC->c = fAC->f50 * D_0027653C;
        fAC->d = fAC->f50 * D_00275544;
        fAC->flags |= 4;
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        fB0 = o;
        o->func_001D5810(D_00278658, 0.0f, 398.0f, 0);
        if (fB0->width != 640.0f) {
            fB0->width = 640.0f;
            fB0->flags |= 1;
        }
        if (fB0->height != 50.0f) {
            fB0->height = 50.0f;
            fB0->flags |= 1;
        }
        fB0->a = fB0->f4C * D_00278654;
        fB0->b = fB0->f4C * D_00275544;
        fB0->c = fB0->f50 * D_0027653C;
        fB0->d = fB0->f50 * D_00275544;
        fB0->flags |= 4;
    }

    for (int i = 0; i < 5; i++) {
        float y = (float)i * D_00278650;
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        fB4[i] = o;
        o->func_001D5810(D_00278658, y, 50.0f, 0);
        Img_75F30 *q = (Img_75F30 *)func_001E8A44(0x64);
        q = q ? q->func_001D5760() : 0;
        fC8[i] = q;
        q->func_001D5810(D_00278658, y, 366.0f, 0);
        fC8[i]->a = 0.0f;
        fC8[i]->b = 1.0f;
        fC8[i]->c = 0.99f;
        fC8[i]->d = 0.0f;
        fC8[i]->flags |= 4;
    }

    for (int i = 0; i < 6; i++) {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        fDC[i] = o;
        float x = (i % 2) ? 320.0f : 100.0f;
        float y = (float)(i / 2) * D_002757F0 + D_00278E60;
        fDC[i]->func_001D5810(D_002786B0, x, y, 0);
        fDC[i]->a = 1.0f;
        fDC[i]->b = 0.0f;
        fDC[i]->c = 0.0f;
        fDC[i]->d = 1.0f;
        fDC[i]->flags |= 4;
        if (fDC[i]->width != 221.0f) {
            fDC[i]->width = 221.0f;
            fDC[i]->flags |= 1;
        }
        fDC[i]->color = (fDC[i]->color & 0xffbfa35a) | 0xbfa35a;
        fDC[i]->flags |= 2;
    }

    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        f1A0 = o;
        o->func_001D5810(D_00278648, 491.0f, 96.0f, 0);
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        f198 = o;
        o->func_001D5810(D_00278624, 491.0f, 96.0f, 0);
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        f1A4 = o;
        o->func_001D5810(D_00278638, 379.0f, 96.0f, 0);
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        f19C = o;
        o->func_001D5810(D_00278608, 379.0f, 96.0f, 0);
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        f4 = o;
        o->func_001D5810(D_00278600, 0.0f, 0.0f, 0);
        f4->color &= 0xff000000;
        f4->flags |= 2;
        ((unsigned char *)f4)[0x3b] = 0x80;
        f4->flags |= 2;
        if (f4->height != 448.0f) {
            f4->height = 448.0f;
            f4->flags |= 1;
        }
        if (f4->width != 640.0f) {
            f4->width = 640.0f;
            f4->flags |= 1;
        }
    }

    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x60);
        o = o ? o->func_001D5E90() : 0;
        f100 = o;
        o->func_001D5FA0((void *)v3, D_00278678, 0x14, 0);
        int c = *(int *)((char *)f100 + 0x48);
        if (c != (int)0xaaaaaaaa) {
            *(unsigned char *)((char *)f100 + 0x4e) |= 8;
            *(int *)((char *)f100 + 0x48) = (c & (int)0xffaaaaaa) | 0xaaaaaa;
        }
        if (*(float *)((char *)f100 + 4) == 640.0f) {
            if (*(float *)((char *)f100 + 8) != 40.0f) {
                *(float *)((char *)f100 + 8) = 40.0f;
                *(float *)((char *)f100 + 4) = 640.0f;
                *(unsigned char *)((char *)f100 + 0x4e) |= 6;
            }
        }
        if (*(int *)((char *)f100 + 0x44) != D_0028F5E0) {
            *(int *)((char *)f100 + 0x44) = D_0028F5E0;
            *(unsigned char *)((char *)f100 + 0x4e) |= 6;
        }
        f100->func_0005E840(*(int *)(*(char **)((char *)D_002A8490->f2e8 + 4) + 0xfd8));
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x60);
        o = o ? o->func_001D5E90() : 0;
        f104 = o;
        o->func_001D5FA0((void *)v2, D_00278690, 0x28, 0);
        int c = *(int *)((char *)f104 + 0x48);
        if (c != (int)0xaaaaaaaa) {
            *(unsigned char *)((char *)f104 + 0x4e) |= 8;
            *(int *)((char *)f104 + 0x48) = (c & (int)0xffaaaaaa) | 0xaaaaaa;
        }
        float t = (float)((C_00075F30 *)v2)->func_0018C210();
        float y = t + t + D_0027886C;
        if (*(float *)((char *)f104 + 4) == 120.0f) {
            if (*(float *)((char *)f104 + 8) != y) {
                *(float *)((char *)f104 + 8) = y;
                *(float *)((char *)f104 + 4) = 120.0f;
                *(unsigned char *)((char *)f104 + 0x4e) |= 6;
            }
        }
        if (*(int *)((char *)f104 + 0x44) != D_0028F5DC) {
            *(int *)((char *)f104 + 0x44) = D_0028F5DC;
            *(unsigned char *)((char *)f104 + 0x4e) |= 6;
        }
        f104->func_0005E840(*(int *)(*(char **)((char *)D_002A8490->f2e8 + 4) + 0x1158));
    }
    return this;
}
