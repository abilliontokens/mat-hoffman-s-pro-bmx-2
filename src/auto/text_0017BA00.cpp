/* 11 functions from 0x0017BA00 to 0x0017C590, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

extern f32 D_00275544;
extern f32 D_00275460;
extern int D_0028909C;
extern void *D_002EFD80;

void func_001E8390(void *p);

struct C_001927A0 {
    void func_001927A0(void);
};

/* object with a virtual deleting destructor in slot 0 */
struct QuadTreeNode {
    virtual void Destroy(int flag);
};

/* objects released through virtual slot 2 */
struct QuadTreeRes {
    virtual void v0();
    virtual void v1();
    virtual void Release();
};

/* QuadTree */
struct C_0017C300 {
    void *vtbl;
    char pad4[0x88];
    QuadTreeNode *f8C;
    QuadTreeRes *f90;
    QuadTreeRes *f94;
    u32 flags98;
    char pad9C[0x7E4];
    u32 unk880;
    s32 unk884;
    u32 unk888;
    u32 unk88C;
    u32 unk890;
    void *unk894;
    u32 unk898;
    u32 unk89C;
    char pad8A0[0x10];
    u32 unk8B0;
    void func_0017C300(void);
    void func_0017C520(void);
};

struct QuadV2 {
    f32 x, y;
};

static inline f32 QuadCross(f32 a, f32 b, f32 c, f32 d) {
    return c * a + d * b;
}

static inline f32 QuadArea(const QuadV2 &p, const QuadV2 &q, const QuadV2 &r) {
    return (q.y - r.y) * p.x + (p.y - q.y) * r.x + (r.y - p.y) * q.x;
}

/* 4 points of a 2D quad, stored x,y */
struct C_0017BDE0 {
    f32 v[8];
    int func_0017BDE0(f32 x, f32 y);
    void func_0017BE40(void);
    int func_0017BFB0(void);
};

struct C_0017BB50 {
    void func_0017BB50(undefined4 *param_1);
};

struct C_0017BB10 {
    void func_0017BB10(undefined4 *param_1);
};


int func_0017BA00(QuadV2 *a, QuadV2 *b, QuadV2 *c, QuadV2 *d, QuadV2 *out)
{
    f32 ex;
    f32 ey;
    f32 dx12;
    f32 dx43;
    f32 dy12;
    f32 dy43;
    f32 den;
    f32 t;
    f32 u;

    ex = d->x - b->x;
    ey = d->y - b->y;
    dx12 = a->x - b->x;
    dx43 = d->x - c->x;
    dy12 = a->y - b->y;
    dy43 = d->y - c->y;
    den = dx12 * dy43 - dy12 * dx43;
    if (den == D_00275544) {
        return 0;
    }
    den = D_00275460 / den;
    t = (dy43 * ex - dx43 * ey) * den;
    if (t < D_00275544) {
        return 0;
    }
    if (t > D_00275460) {
        return 0;
    }
    u = (dx12 * ey - dy12 * ex) * den;
    if (u < D_00275544) {
        return 0;
    }
    if (u > D_00275460) {
        return 0;
    }
    out->x = t * dx12 + b->x;
    out->y = t * dy12 + b->y;
    return 1;
}

void C_0017BB10::func_0017BB10(undefined4 *param_1)
{
  undefined4* in_ECX = (undefined4*)this;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  return;
}

void C_0017BB50::func_0017BB50(undefined4 *param_1)
{
  undefined4* in_ECX = (undefined4*)this;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[4];
  in_ECX[3] = param_1[5];
  in_ECX[4] = param_1[8];
  in_ECX[5] = param_1[9];
  in_ECX[6] = param_1[0xc];
  in_ECX[7] = param_1[0xd];
  return;
}

int C_0017BDE0::func_0017BDE0(f32 x, f32 y) {
    int i = 0;
    int j;

    do {
        j = (i + 1) & 3;
        if (D_00275544 < (x - v[i * 2]) * (v[i * 2 + 1] - v[j * 2 + 1]) + (y - v[i * 2 + 1]) * (v[j * 2] - v[i * 2])) {
            return 0;
        }
        i++;
    } while (i < 4);
    return 1;
}

int C_0017BDE0::func_0017BFB0(void) {
    f32 loc[16];
    unsigned int k;
    int off;

    k = 0;
    loc[0] = v[2] - v[0];
    loc[1] = v[3] - v[1];
    loc[2] = v[4] - v[2];
    loc[3] = v[5] - v[3];
    loc[4] = v[6] - v[4];
    loc[5] = v[7] - v[5];
    loc[6] = v[0] - v[6];
    off = 0;
    loc[7] = v[1] - v[7];
    do {
        *(u32 *)((char *)loc + off + 0x24) = *(u32 *)((char *)loc + off);
        k++;
        *(f32 *)((char *)loc + off + 0x20) = -*(f32 *)((char *)loc + off + 4);
        if (D_00275544 < loc[(k & 3) * 2 + 1] * *(f32 *)((char *)loc + off + 0x24) + loc[(k & 3) * 2] * *(f32 *)((char *)loc + off + 0x20)) {
            return 0;
        }
        off += 8;
    } while (off < 0x20);
    return 1;
}

void C_0017C300::func_0017C300(void) {
    D_002EFD80 = this;
    unk880 = 0;
    unk884 = -1;
    flags98 &= ~1;
    unk888 = 0;
    unk88C = 0;
    unk890 = 0;
    unk898 = 0;
    unk894 = 0;
    unk89C = 0;
    unk8B0 = 0;
}

void C_0017C300::func_0017C520(void) {
    vtbl = (void *)&D_0028909C;
    D_002EFD80 = this;
    flags98 |= 1;
    if (unk894 != 0) {
        func_001E8390(unk894);
    }
    if (f8C != 0) {
        f8C->Destroy(1);
    }
    if (f90 != 0) {
        f90->Release();
    }
    if (f94 != 0) {
        f94->Release();
    }
    ((C_001927A0 *)this)->func_001927A0();
}

