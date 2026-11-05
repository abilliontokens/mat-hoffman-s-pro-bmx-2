/* 13 functions from 0x001324B0 to 0x00132DB8, found by Ghidra. */
#include "common.h"

struct CinematographerCam {
    void *vtbl;
    char pad_4[0x80 - 0x4];
    void *unk80;
    void *unk84;
    void *unk88;
    void *unk8C;
    void *unk90;
    void *unk94;
    void func_001324B0();
    void func_0012B540();
};

struct C_00132540 {
    void func_00132540();
};

struct Class_002845AC {
    void func_00132DB0();
    void func_00132DE0();
};

extern int D_00284514;
extern int D_002845AC;
void func_001E891B(void *ptr);
void func_001E8390(void *ptr);

struct C_Off_1324B0 {
    char pad0[4];
    int f4;
};

struct C_Item_1324B0 {
    void func_00133ED0();
    void func_00133140(int a, int b);
};

struct C_Dst_1324B0 {
    void func_00157960();
    void func_00157A00(int a);
};

struct C_Dst64520_1324B0 {
    void func_00164520();
};

struct C_19_1324B0 {
    void func_0019ABA0(int a, int b);
};

struct C_1329F0 {
    void func_001329F0();
    void func_00132C50(int a1);
    void func_00132CA0();
};

struct C_19AC50_1324B0 {
    void func_0019AC50();
};

struct C_198E60_1324B0 {
    void func_00198E60();
};

struct C_Item2_1324B0 {
    void func_00133210();
    void func_001332A0();
};

struct C_132CC0 {
    char pad0[4];
    void *f4;
    char pad8[0x278];
    void *f280;
    int f284;
    void func_00132CC0(int a1, int a2, int a3);
    void func_00132D20();
    void func_00132D70();
};

void CinematographerCam::func_001324B0()
{
    vtbl = (void *)&D_00284514;
    if (unk80 != 0) {
        func_001E891B(unk80);
    }
    if (unk84 != 0) {
        func_001E891B(unk84);
    }
    if (unk88 != 0) {
        func_001E891B(unk88);
    }
    if (unk8C != 0) {
        func_001E891B(unk8C);
    }
    if (unk90 != 0) {
        func_001E891B(unk90);
    }
    if (unk94 != 0) {
        func_001E891B(unk94);
    }
    func_0012B540();
}

void C_00132540::func_00132540()
{
    unsigned int *in_ECX = (unsigned int *)this;
    int iVar2;
    for (iVar2 = 0; iVar2 < 8; iVar2++) {
        in_ECX[iVar2 * 4 + 2] = 0;
        in_ECX[iVar2 * 4 + 1] = 0;
        in_ECX[iVar2 * 4] = 0;
        in_ECX[iVar2 * 4 + 3] = 0x3f800000;
    }
    in_ECX[1] = 0xff7fffff;
    in_ECX[0x20] = 0xff7fffff;
    in_ECX[0x21] = 0xff7fffff;
    in_ECX[0x22] = 0x7f7fffff;
    *in_ECX = 0xff7fffff;
    in_ECX[2] = 0xff7fffff;
    in_ECX[4] = 0x7f7fffff;
    in_ECX[5] = 0xff7fffff;
    in_ECX[6] = 0xff7fffff;
    in_ECX[8] = 0x7f7fffff;
    in_ECX[9] = 0x7f7fffff;
    in_ECX[10] = 0xff7fffff;
    in_ECX[0xc] = 0xff7fffff;
    in_ECX[0xd] = 0x7f7fffff;
    in_ECX[0xe] = 0xff7fffff;
    in_ECX[0x10] = 0xff7fffff;
    in_ECX[0x11] = 0xff7fffff;
    in_ECX[0x12] = 0xff7fffff;
    in_ECX[0x14] = 0x7f7fffff;
    in_ECX[0x15] = 0xff7fffff;
    in_ECX[0x16] = 0xff7fffff;
    in_ECX[0x18] = 0x7f7fffff;
    in_ECX[0x19] = 0x7f7fffff;
    in_ECX[0x1a] = 0xff7fffff;
    in_ECX[0x1c] = 0xff7fffff;
    in_ECX[0x1d] = 0x7f7fffff;
    in_ECX[0x1e] = 0xff7fffff;
}

int func_001325D0(float *param_1)
{
    float fVar1;
    float fVar2;
    int tmp;
    int bVar3;
    tmp = *(int *)&param_1[3];
    tmp = tmp & 0x7fffffff;
    fVar2 = *(float *)&tmp;
    bVar3 = 0;
    if (*param_1 > fVar2) {
        bVar3 = 1;
    }
    fVar1 = -fVar2;
    if (fVar1 > *param_1) {
        bVar3 = bVar3 | 2;
    }
    if (param_1[1] > fVar2) {
        bVar3 = bVar3 | 4;
    }
    if (fVar1 > param_1[1]) {
        bVar3 = bVar3 | 8;
    }
    if (param_1[2] > fVar2) {
        bVar3 = bVar3 | 0x10;
    }
    if (fVar1 > param_1[2]) {
        bVar3 = bVar3 | 0x20;
    }
    return bVar3;
}

void C_1329F0::func_001329F0()
{
    char *base = (char *)this - 0x294;
    int off = ((C_Off_1324B0 *)*(void **)base)->f4;

    *(void **)(base + off) = (void *)&D_002845AC;
    *(int *)(base + off - 4) = off - 0x294;
    if (*(void **)((char *)this - 0x14) != 0) {
        func_001E8390(*(void **)((char *)this - 0x14));
    }
    ((C_Dst64520_1324B0 *)((char *)this - 0x74))->func_00164520();
}

void C_1329F0::func_00132C50(int a1)
{
    int i;

    for (i = 0; i < *(int *)((char *)this - 0x10); i++) {
        ((C_Item_1324B0 *)*(void **)((char *)this - 0x14))[i].func_00133ED0();
    }
    ((C_Dst_1324B0 *)((char *)this - 0x294 + ((C_Off_1324B0 *)*(void **)((char *)this - 0x294))->f4))->func_00157A00(a1);
}

void C_1329F0::func_00132CA0()
{
    ((C_Dst_1324B0 *)((char *)this - 0x294 + ((C_Off_1324B0 *)*(void **)((char *)this - 0x294))->f4))->func_00157960();
}

void C_132CC0::func_00132CC0(int a1, int a2, int a3)
{
    int i;

    ((C_19_1324B0 *)f4)->func_0019ABA0(a1, a3);
    for (i = 0; i < f284; i++) {
        ((C_Item_1324B0 **)f280)[i]->func_00133ED0();
        ((C_Item_1324B0 **)f280)[i]->func_00133140(a2, a3);
    }
}

void Class_002845AC::func_00132DB0()
{
    ((Class_002845AC *)((char *)this - *(int *)((char *)this - 4)))->func_00132DE0();
}
