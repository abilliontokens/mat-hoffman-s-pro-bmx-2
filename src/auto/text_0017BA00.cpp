/* 11 functions from 0x0017BA00 to 0x0017C590, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

extern f32 D_00275544;
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

/* 4 points of a 2D quad, stored x,y */
struct C_0017BDE0 {
    f32 v[8];
    int func_0017BDE0(f32 x, f32 y);
    int func_0017BFB0(void);
};

struct C_0017BB50 {
    void func_0017BB50(undefined4 *param_1);
};

struct C_0017BB10 {
    void func_0017BB10(undefined4 *param_1);
};


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
    f32 e[8];
    f32 n[8];
    int i;

    e[0] = v[2] - v[0];
    e[1] = v[3] - v[1];
    e[2] = v[4] - v[2];
    e[3] = v[5] - v[3];
    e[4] = v[6] - v[4];
    e[5] = v[7] - v[5];
    e[6] = v[0] - v[6];
    e[7] = v[1] - v[7];
    for (i = 0; i < 4; i++) {
        n[i * 2 + 1] = e[i * 2];
        n[i * 2] = -e[i * 2 + 1];
        if (D_00275544 < e[((i + 1) & 3) * 2 + 1] * n[i * 2 + 1] + e[((i + 1) & 3) * 2] * n[i * 2]) {
            return 0;
        }
    }
    return 1;
}

void C_0017C300::func_0017C300(void) {
    D_002EFD80 = this;
    flags98 &= ~1;
    unk880 = 0;
    unk884 = -1;
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

