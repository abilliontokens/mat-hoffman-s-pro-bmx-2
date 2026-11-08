/* 4 functions from 0x000CC620 to 0x000CCBE0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern int D_0027E54C;

struct ElemC {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

struct DelObjC_000CC {
    virtual void Destroy(int a0);
};

/* BmxUIPageMemCard */
struct BmxUIPageMemCard {
    void *vtbl;
    char pad4[0x2A0 - 4];
    ElemC *arr2A0[4];
    char pad2B0[0x3A0 - 0x2B0];
    short unk3A0;
    void func_001BF000();
    void func_000CC620();
};

/* BmxUIPageRider */
struct BmxUIPageRider {
    void *vtbl;
    char pad4[0x390 - 4];
    DelObjC_000CC *arr390[8];
    DelObjC_000CC *arr3B0[8];
    char pad3D0[0x3F8 - 0x3D0];
    DelObjC_000CC *arr3F8[2];
    DelObjC_000CC *arr400[16];
    char pad440[0x550 - 0x440];
    DelObjC_000CC *unk550;
    void func_001BE3F0();
    void func_000CCB10();
    BmxUIPageRider *func_000CC700(void *a);
};

struct BmxUIPageBase {
    void func_001BE360(void *a);
};
extern char D_0027E538[];
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);

struct C_000CC6D0 {
    char pad0[0x328];
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    int unk338;
    int unk33C;
    void func_000CC6D0(void);
};


void BmxUIPageMemCard::func_000CC620()
{
    for (int i = 0; i < 4; i++) {
        ElemC *e = arr2A0[i];
        e->f38 = ((int)unk3A0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
    }
    func_001BF000();
}

void C_000CC6D0::func_000CC6D0(void) {
    unk32C = 0;
    unk330 = 178;
    unk334 = 178;
    unk338 = 0;
    unk33C = 1065353216;
    unk328 = 0;
}

BmxUIPageRider *BmxUIPageRider::func_000CC700(void *a)
{
    int off;
    int len;
    int res;

    ((BmxUIPageBase *)this)->func_001BE360(a);
    *(void **)this = &D_0027E54C;
    for (off = 0x3d0; off < 0x3f8; off += 4)
        *(int *)(off + (char *)this) = 0;
    *(int *)((char *)this + 0x48c) = 1;
    *(int *)((char *)this + 0x490) = 0;
    *(int *)((char *)this + 0x288) = 0;
    len = 0x103;
    res = AsmMinI(len, 10);
    func_001E8920((char *)this + 0x28c, D_0027E538, res);
    ((char *)this)[0x28c + res] = 0;
    for (off = 0x390; off < 0x3b0; off += 4)
        *(int *)(off + (char *)this) = 0;
    for (off = 0x3b0; off < 0x3d0; off += 4)
        *(int *)(off + (char *)this) = 0;
    *(int *)((char *)this + 0x498) = 0;
    *(int *)((char *)this + 0x4a0) = 0;
    *(int *)((char *)this + 0x4a4) = 0;
    *(int *)((char *)this + 0x49c) = 0;
    *(int *)((char *)this + 0x4b4) = 0;
    *(int *)((char *)this + 0x4a8) = 0;
    *(int *)((char *)this + 0x4ac) = 0;
    *(int *)((char *)this + 0x4b0) = 0;
    *(int *)((char *)this + 0x4b8) = 0;
    *(int *)((char *)this + 0x4bc) = 0;
    *(int *)((char *)this + 0x4c0) = 0;
    *(int *)((char *)this + 0x590) = 0;
    *(int *)((char *)this + 0x59c) = 0;
    *(int *)((char *)this + 0x5a8) = 0;
    *(int *)((char *)this + 0x4c4) = 0;
    *(int *)((char *)this + 0x4c8) = 0;
    *(int *)((char *)this + 0x4cc) = 0;
    *(int *)((char *)this + 0x4d0) = 0;
    *(int *)((char *)this + 0x4d4) = 0;
    *(int *)((char *)this + 0x578) = 0;
    *(int *)((char *)this + 0x484) = 0;
    *(int *)((char *)this + 0x4dc) = 0;
    *(int *)((char *)this + 0x4d8) = 0;
    for (off = 0x3f8; off < 0x400; off += 4)
        *(int *)(off + (char *)this) = 0;
    for (off = 0x400; off < 0x440; off += 4)
        *(int *)(off + (char *)this) = 0;
    *(int *)((char *)this + 0x488) = 0;
    *(int *)((char *)this + 0x480) = 0;
    *(int *)((char *)this + 0x4e0) = 0;
    *(int *)((char *)this + 0x4e4) = 0;
    *(int *)((char *)this + 0x4e8) = 0;
    *(int *)((char *)this + 0x4ec) = 0;
    *(int *)((char *)this + 0x4f0) = 0;
    *(int *)((char *)this + 0x4f4) = 0;
    *(int *)((char *)this + 0x4f8) = 0;
    *(int *)((char *)this + 0x50c) = 0;
    *(int *)((char *)this + 0x510) = 0;
    *(int *)((char *)this + 0x514) = 0;
    *(int *)((char *)this + 0x518) = 0;
    *(int *)((char *)this + 0x51c) = 0;
    *(int *)((char *)this + 0x520) = 0;
    *(int *)((char *)this + 0x524) = 0;
    *(int *)((char *)this + 0x528) = 1;
    *(int *)((char *)this + 0x52c) = 0;
    *(int *)((char *)this + 0x530) = 0;
    *(int *)((char *)this + 0x534) = 0;
    *(int *)((char *)this + 0x58c) = 0;
    *(int *)((char *)this + 0x5b4) = 0;
    *(int *)((char *)this + 0x53c) = 0;
    *(int *)((char *)this + 0x540) = 0;
    *(int *)((char *)this + 0x544) = 0;
    *(int *)((char *)this + 0x548) = 0;
    *(int *)((char *)this + 0x54c) = 0;
    *(int *)((char *)this + 0x550) = 0;
    *(int *)((char *)this + 0x554) = 0;
    *(int *)((char *)this + 0x558) = 0;
    *(int *)((char *)this + 0x55c) = 0;
    *(int *)((char *)this + 0x598) = 0;
    *(int *)((char *)this + 0x5a0) = 0;
    *(int *)((char *)this + 0x5a4) = 1;
    *(int *)((char *)this + 0x5ac) = 0;
    *(int *)((char *)this + 0x500) = 0;
    *(int *)((char *)this + 0x5b0) = 0;
    *(int *)((char *)this + 0x560) = 0;
    *(int *)((char *)this + 0x574) = 0;
    *(int *)((char *)this + 0x568) = 0;
    for (off = 0x440; off < 0x460; off += 4)
        *(int *)(off + (char *)this) = 0;
    *(int *)((char *)this + 0x4c4) = 0;
    *(int *)((char *)this + 0x4c8) = 0;
    *(int *)((char *)this + 0x4cc) = 0;
    *(int *)((char *)this + 0x4d0) = 0;
    *(int *)((char *)this + 0x4d4) = 0;
    *(int *)((char *)this + 0x56c) = 1;
    *(int *)((char *)this + 0x570) = 0;
    *(int *)((char *)this + 0x538) = 0;
    *(int *)((char *)this + 0x57c) = 0;
    *(int *)((char *)this + 0x580) = 0;
    *(int *)((char *)this + 0x584) = 0;
    *(int *)((char *)this + 0x594) = 0;
    return this;
}

void BmxUIPageRider::func_000CCB10()
{
    int i;

    vtbl = &D_0027E54C;
    for (i = 0; i < 8; i++) {
        if (arr390[i] != 0) {
            arr390[i]->Destroy(1);
            arr390[i] = 0;
        }
    }
    for (i = 0; i < 8; i++) {
        if (arr3B0[i] != 0) {
            arr3B0[i]->Destroy(1);
            arr3B0[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (arr3F8[i] != 0) {
            arr3F8[i]->Destroy(1);
            arr3F8[i] = 0;
        }
    }
    for (i = 0; i < 16; i++) {
        if (arr400[i] != 0) {
            arr400[i]->Destroy(1);
            arr400[i] = 0;
        }
    }
    if (unk550 != 0) {
        unk550->Destroy(1);
        unk550 = 0;
    }
    func_001BE3F0();
}

