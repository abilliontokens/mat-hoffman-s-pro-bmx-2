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
    char pad30[0xC];
    float a, b, c, d;
    float f4C, f50;
    char pad54[4];
    unsigned char flags;
    Img_75F30 *func_001D5760();
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
    char padDC[0x24];
    int f100, f104, f108, f10C, f110, f114, f118;
    char pad11C[4];
    int f120;
    char pad124[0x74];
    int f198, f19C, f1A0, f1A4;
    char pad1A8[0x14];
    int f1BC;
    int func_0018C210();
    void func_001577A0(void *obj, int flags);
    C_00075F30 *func_00075F30(int a);
};

extern Mgr_75F30 *D_002A8490;

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
        if (o->width != 640.0f) {
            o->width = 640.0f;
            o->flags |= 1;
        }
        if (o->height != 50.0f) {
            o->height = 50.0f;
            o->flags |= 1;
        }
        o->a = o->f4C * D_00278654;
        o->b = o->f4C * D_00275544;
        o->c = o->f50 * D_0027653C;
        o->d = o->f50 * D_00275544;
        o->flags |= 4;
    }
    {
        Img_75F30 *o = (Img_75F30 *)func_001E8A44(0x64);
        o = o ? o->func_001D5760() : 0;
        fB0 = o;
        o->func_001D5810(D_00278658, 0.0f, 398.0f, 0);
        if (o->width != 640.0f) {
            o->width = 640.0f;
            o->flags |= 1;
        }
        if (o->height != 50.0f) {
            o->height = 50.0f;
            o->flags |= 1;
        }
        o->a = o->f4C * D_00278654;
        o->b = o->f4C * D_00275544;
        o->c = o->f50 * D_0027653C;
        o->d = o->f50 * D_00275544;
        o->flags |= 4;
    }
    return this;
}
