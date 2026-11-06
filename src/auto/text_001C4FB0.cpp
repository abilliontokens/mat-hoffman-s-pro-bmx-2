/* 5 functions from 0x001C4FB0 to 0x001C5DE0, found by Ghidra. */
#include "common.h"

extern int D_0028E6B0;
void *func_001E8A44(unsigned int size);
struct VisibilityQuadTreeNode {
    void *vtbl;
    char pad4[0x10];
    void func_0017CE10();
};
extern int D_0028E664;
extern int D_002F07E8;
void func_001E891B(void *p);
int __stdcall func_001927C0(int a0, int a1);

struct S_001C5C50_View {
    char pad0[0x1e8];
    unsigned int width;
    unsigned int height;
};
extern float D_00275460, D_002755E4, D_002755E8;

/* quad tree node traversal (func_001C4FB0) */
struct V4_1C4FB0 {
    float x, y, z, w;
    V4_1C4FB0() { x = y = z = 0.0f; w = 1.0f; }
    V4_1C4FB0(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
};

struct S_1C4FB0_Camera {
    char pad0[0x28];
    float f28;
    char pad2c[4];
    float f30;
    void func_0017D500(int a, int b);
};

struct S_1C4FB0_Cull {
    int func_001C5DE0(int base, V4_1C4FB0 *center, V4_1C4FB0 *extent, int *out);
};

struct C_001C4FB0 {
    virtual void vf0();
    virtual void vf1(int a, int b, int c, int d, int e);
    C_001C4FB0 **f4;
    int f8;
    float fC;
    float f10;
    void func_001C4FB0(int a, int b, int c, int d, int e, int f);
};

extern float D_002EFD7C;
extern S_1C4FB0_Camera *D_002EFD80;
extern S_1C4FB0_Cull *D_002AB66C;

#define QN_VISIT(i, EX, EZ) \
    if (f4[i]) { \
        ctr.y = f4[i]->fC; \
        ctr.x = EX; \
        ext2.y = f4[i]->f10; \
        ctr.z = EZ; \
        if (D_002AB66C->func_001C5DE0(f + 0xf0, &ctr, &ext2, &res)) { \
            if (res == 0) f4[i]->vf1(a, b, c, d, e); \
            else f4[i]->func_001C4FB0(a, b, c, d, e, f); \
        } \
    }

/* VisibilityQuadTree */
struct C_001C5AA0 {
    char pad0[0x890];
    int unk890;
    char pad894[4];
    int unk898;
    void func_001C5AA0();
    void func_001927C0(int a0, int a1);
};

struct C_001C5AC0 {
    void *vtbl;
    void func_0017C520();
    C_001C5AC0 *func_001C5AC0(unsigned int flags);
};

void C_001C4FB0::func_001C4FB0(int a, int b, volatile int c, volatile int d, int e, volatile int f)
{
    int right = c + e;
    int bottom = d + e;
    float cx = (float)right * D_002EFD7C + D_002EFD80->f28;
    float cy = (float)bottom * D_002EFD7C + D_002EFD80->f30;
    V4_1C4FB0 ctr;
    int res;
    e >>= 1;
    float ext = (float)e * D_002EFD7C;
    V4_1C4FB0 ext2(ext, 0.0f, ext);
    D_002EFD80->func_0017D500(f8, 1);
    if (f4) {
        if (a >= right) {
            if (b >= bottom) {
                QN_VISIT(0, cx - ext, cy - ext)
                QN_VISIT(1, cx - ext, ext + cy)
                QN_VISIT(2, ext + cx, cy - ext)
                QN_VISIT(3, ext + cx, ext + cy)
            } else {
                QN_VISIT(1, cx - ext, ext + cy)
                QN_VISIT(0, cx - ext, cy - ext)
                QN_VISIT(3, ext + cx, ext + cy)
                QN_VISIT(2, ext + cx, cy - ext)
            }
        } else {
            if (b >= bottom) {
                QN_VISIT(2, ext + cx, cy - ext)
                QN_VISIT(3, ext + cx, ext + cy)
                QN_VISIT(0, cx - ext, cy - ext)
                QN_VISIT(1, cx - ext, ext + cy)
            } else {
                QN_VISIT(3, ext + cx, ext + cy)
                QN_VISIT(2, ext + cx, cy - ext)
                QN_VISIT(1, cx - ext, ext + cy)
                QN_VISIT(0, cx - ext, cy - ext)
            }
        }
    }
}

void C_001C5AA0::func_001C5AA0()
{
    func_001927C0(unk890, unk898);
}

C_001C5AC0 *C_001C5AC0::func_001C5AC0(unsigned int flags)
{
    vtbl = &D_0028E664;
    D_002F07E8 = 0;
    func_0017C520();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int __stdcall func_001C5C50(S_001C5C50_View *view, float *m, float *v, float *out, unsigned int *flags)
{
float x,y,z,w; unsigned int f=0;
w=m[14]*v[2]; w+=m[13]*v[1]; w+=m[12]*v[0]; w+=m[15];
*(unsigned int *)&w &= 0x7fffffff;
x=m[2]*v[2]+m[1]*v[1]+m[0]*v[0]+m[3];
y=m[6]*v[2]; y+=m[5]*v[1]; y+=m[4]*v[0]; y+=m[7];
z=m[10]*v[2]; z+=m[9]*v[1]; z+=m[8]*v[0]; z+=m[11];
if(x>w)f|=1; if(x< -w)f|=2; if(y>w)f|=4; if(y< -w)f|=8; if(z>w)f|=16; if(z< -w)f|=32;
if(out){float inv=D_00275460/w;float sh=(float)view->height*D_002755E8;float sw=(float)view->width*D_002755E8;out[0]=(inv*x+D_00275460)*sw;out[1]=(inv*y+D_00275460)*sh;out[2]=inv*z;}
if(flags)*flags=f;return f==0;
}

