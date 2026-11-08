/* 2 functions from 0x0010E920 to 0x0010F320, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0010F300 {
    undefined4 func_0010F300(byte param_1);
};

struct C_0010E920 {
    int f[0x813];
    void *func_0010E920(int param_1);
    void func_0002B1C0(int param_1);
    void func_00108F50();
    void func_00108FF0();
};

extern int D_002A3A3C, D_002A3A40, D_002A3A44, D_002A3A48;
extern int D_002A3A5C, D_002A3A60, D_002A3A64, D_002A3A68;
struct Vec_0010E920 {
    int x, y, z, w;
    __forceinline void Clear() { z = 0; y = 0; x = 0; w = 0x3f800000; }
    __forceinline Vec_0010E920 *Set() { x = D_002A3A3C; y = D_002A3A40; z = D_002A3A44; w = D_002A3A48; return this; }
    __forceinline void SetOther() { x = D_002A3A5C; y = D_002A3A60; z = D_002A3A64; w = D_002A3A68; }
};

struct BmxVehicle {
    int f[0x813];
    BmxVehicle(int param_1);
};


#pragma optimize("y", off)
void *C_0010E920::func_0010E920(int param_1)
{
    extern int D_00282AE4;
    extern int D_002A3A3C;
    extern int D_002A3A40;
    extern int D_002A3A44;
    extern int D_002A3A48;
    extern int D_002A3A5C;
    extern int D_002A3A60;
    extern int D_002A3A64;
    extern int D_002A3A68;
    int func_001E8A44(...);
    volatile int *p = (int *)this;
    int *q;
    int *puVar2;
    int *puVar4;
    int iVar3;
    int iVar5;
    int uVar1;

    func_0002B1C0(param_1);
    p[0] = (int)&D_00282AE4;
    ((Vec_0010E920 *)(p + 0x1f9))->Clear();
    ((Vec_0010E920 *)(p + 0x1fd))->Clear();
    ((Vec_0010E920 *)(p + 0x201))->Clear();
    ((Vec_0010E920 *)(p + 0x205))->Clear();
    ((Vec_0010E920 *)(p + 0x209))->Clear();
    p[0x20f] = 0;
    p[0x20e] = 0;
    p[0x20d] = 0;
    p[0x210] = 0x3f800000;
    ((Vec_0010E920 *)(p + 0x211))->Clear();
    ((Vec_0010E920 *)(p + 0x215))->Clear();
    q = (int *)p + 0x20d;
    ((Vec_0010E920 *)(p + 0x219))->Clear();
    ((Vec_0010E920 *)(p + 0x21d))->Clear();
    puVar4 = (int *)p + 0x4ab;
    ((Vec_0010E920 *)(p + 0x221))->Clear();
    puVar2 = (int *)p + 0x4b0;
    iVar3 = 0x14;
    do {
        puVar2[-3] = 0;
        puVar2[-4] = 0;
        *puVar4 = 0;
        puVar2[-2] = 0x3f800000;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[-1] = 0;
        puVar2[2] = 0x3f800000;
        puVar4 = puVar4 + 9;
        puVar2 = puVar2 + 9;
        iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    ((Vec_0010E920 *)(p + 0x7eb))->Clear();
    ((Vec_0010E920 *)(p + 0x800))->Clear();
    ((Vec_0010E920 *)(p + 0x80a))->Clear();
    ((Vec_0010E920 *)(p + 0x80e))->Clear();
    p[0x22b] = 0;
    p[0x22c] = 0;
    p[0x22d] = 0;
    p[0x449] = 0;
    p[0x448] = 0;
    p[0x254] = 0;
    p[0x47c] = 0;
    p[0x569] = 0;
    p[0x56a] = 0;
    p[0x22e] = 0;
    p[0x22f] = 0x40a00000;
    p[0x259] = 0;
    p[0x25a] = 0;
    p[0x25b] = 0;
    p[0x269] = 0;
    p[0x267] = 0;
    p[0x268] = 0x3f800000;
    p[0x26f] = 0;
    p[0x270] = 0;
    p[0x271] = 0;
    p[0x272] = 0;
    p[0x26c] = 0;
    p[0x26d] = 0;
    p[0x26e] = 0;
    p[0x26a] = 0;
    p[0x26b] = 0;
    p[0x41b] = 0;
    p[0x41c] = 0;
    p[0x41d] = 0;
    p[0x41e] = 0;
    p[0x41f] = 0;
    p[0x274] = 0;
    p[0x275] = 0;
    p[0x278] = 0;
    p[0x279] = 0;
    p[0x255] = 0;
    p[0x25c] = 0;
    p[0x27a] = 0;
    p[0x27b] = 0;
    p[0x27c] = 0;
    p[0x27d] = 0;
    p[0x273] = 0;
    p[0x464] = 1;
    p[0x27e] = 0;
    p[0x290] = 0;
    p[0x27f] = 0;
    p[0x575] = 0;
    p[0x280] = 0;
    p[0x282] = 0;
    p[0x283] = 0;
    p[0x284] = 0;
    p[0x285] = 0;
    p[0x281] = 0;
    ((char *)p)[0xa18] = 0;
    puVar2 = (int *)p + 0x49b;
    iVar3 = 4;
    do {
        puVar2[-4] = 0;
        *puVar2 = 0;
        puVar2[4] = 0;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    p[0x4a3] = 0;
    p[0x4a4] = 0;
    p[0x4a6] = 0;
    p[0x4a7] = 0;
    p[0x4a8] = 0;
    p[0x4a9] = 0;
    ((char *)p)[0x12a8] = 0;
    puVar2 = (int *)p + 0x6aa;
    iVar3 = 0x46;
    do {
        puVar2[-0x46] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    puVar2 = (int *)p + 0x740;
    iVar3 = 5;
    do {
        iVar5 = 0x10;
        do {
            puVar2[-0x50] = 0;
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
            iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
        iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    puVar2 = (int *)p + 0x5fd;
    iVar3 = 0x67;
    do {
        puVar2[-0x67] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    p[0x593] = 0;
    p[0x443] = 0;
    p[0x444] = 0;
    p[0x445] = 0;
    p[0x447] = 0;
    p[0x465] = 0;
    p[0x28a] = -1;
    p[0x28b] = -1;
    ((Vec_0010E920 *)(p + 0x1fd))->Set();
    ((Vec_0010E920 *)(p + 0x201))->Set();
    p[0x205] = D_002A3A5C;
    p[0x206] = D_002A3A60;
    p[0x207] = D_002A3A64;
    p[0x208] = D_002A3A68;
    ((Vec_0010E920 *)q)->Set();
    p[0x12d] = 0;
    p[0x493] = 0;
    p[0x494] = 0;
    p[0x458] = 0;
    p[0x459] = 0;
    p[0x45a] = 0;
    p[0x45b] = 0;
    p[0x45c] = 0;
    p[0x45e] = 0;
    p[0x45f] = 0;
    p[0x460] = 0;
    p[0x56b] = 0;
    p[0x56c] = 0;
    p[0x7e3] = 0x3f800000;
    p[0x7e4] = 0x3ecccccd;
    p[0x7e5] = 0x3fb33333;
    p[0x7e6] = 0x3f4ccccd;
    p[0x7da] = 0x3f800000;
    p[0x466] = 0x3f800000;
    p[0x467] = 0x3f800000;
    p[0x495] = 0x3f060a91;
    p[0x496] = 0x3f060a91;
    p[0x468] = 0x3f800000;
    p[0x7e7] = 0x41200000;
    p[499] = 0;
    p[0x1e9] = 0x447a0000;
    p[0x1ea] = 0x447a0000;
    p[0x1ec] = 0x458ca000;
    p[0x1e7] = 0x40000000;
    p[0x1e8] = 0x40000000;
    p[0x1eb] = 0x3f5f66f1;
    p[0x1ef] = 0;
    p[0x1f0] = 0;
    p[0x1f2] = 0;
    p[0x1ed] = 0;
    p[0x1ee] = 0;
    p[0x1f1] = 0;
    p[0x471] = 0;
    p[0x472] = 0;
    p[0x473] = 0;
    p[0x486] = 0;
    p[0x420] = 0x40a00000;
    p[0x487] = 0;
    p[0x488] = 0;
    p[0x489] = 0;
    p[0x48a] = 0;
    p[0x48b] = 0;
    ((Vec_0010E920 *)q)->Set();
    ((Vec_0010E920 *)(p + 0x211))->Set();
    ((Vec_0010E920 *)(p + 0x215))->Set();
    ((Vec_0010E920 *)(p + 0x219))->Set();
    p[0x21d] = D_002A3A5C;
    p[0x21e] = D_002A3A60;
    p[0x21f] = D_002A3A64;
    p[0x220] = D_002A3A68;
    ((Vec_0010E920 *)(p + 0x221))->Set();
    p[0x595] = 0x3f800000;
    p[0x7e2] = 0;
    p[0x813] = 0;
    p[0x814] = 0;
    p[0x815] = 0;
    p[0x816] = 0;
    p[0x81f] = 0;
    p[0x820] = 0;
    p[0x817] = 0;
    p[0x818] = 0;
    p[0x819] = 0;
    p[0x81a] = 0;
    p[0x81b] = 0;
    p[0x81c] = 0;
    p[0x81d] = 0;
    p[0x81e] = 0;
    p[0x46a] = 0;
    p[0x821] = 1;
    p[0x822] = 0;
    p[0x47d] = 0;
    p[0x47f] = 1;
    p[0x480] = 0;
    p[0x421] = 0;
    p[0x7ea] = 0;
    p[0x7ef] = 0;
    p[0x804] = 0;
    p[0x48c] = 0;
    p[0x48d] = 0;
    p[0x48e] = 0;
    p[0x48f] = 0;
    p[0x490] = 0;
    p[0x805] = 0;
    p[0x806] = 0;
    p[0x491] = 0;
    p[0x256] = 0;
    p[599] = 0;
    p[600] = 0;
    p[0x28e] = 1;
    p[0x28f] = 0;
    p[0x277] = 0;
    p[9] = 0;
    ((char *)p)[0x1090] = 0;
    p[0x442] = 0;
    p[0x1f7] = 0;
    p[0x1f8] = 0;
    p[0x1f6] = 0;
    p[0x1f5] = 0;
    p[0x56d] = 0;
    p[0x56e] = 0;
    p[0x56f] = 0;
    p[0x570] = 0;
    p[0x571] = 0;
    p[0x572] = 0;
    p[0x573] = 0;
    p[0x574] = 0;
    p[0x58d] = 0;
    p[0x58e] = 0;
    p[0x1e4] = 0;
    p[0x1e5] = 0;
    p[0x1e6] = 0;
    p[0x827] = 0;
    p[0x828] = 0;
    p[0x829] = 0;
    p[0x82a] = 0;
    p[0x561] = -1;
    p[0x807] = 0x40a00000;
    p[0x830] = 0x3f800000;
    iVar3 = 0x14;
    puVar2 = (int *)p + 0x4af;
    do {
        ((Vec_0010E920 *)(puVar2 - 4))->Set();
        ((Vec_0010E920 *)puVar2)->SetOther();
        puVar2[4] = 0;
        iVar3 = iVar3 - 1;
        puVar2 = puVar2 + 9;
    } while (iVar3 != 0);
    p[0x55f] = 0;
    p[0x560] = 0x13;
    puVar2 = (int *)func_001E8A44(0x194);
    if (puVar2 != (int *)0) {
        *puVar2 = 0;
        iVar3 = 0x14;
        puVar4 = puVar2;
        do {
            puVar4[0x15] = -1;
            puVar4[1] = -1;
            puVar4[0x29] = 0;
            puVar4[0x3d] = 0;
            puVar4[0x51] = -1;
            iVar3 = iVar3 - 1;
            puVar4 = puVar4 + 1;
        } while (iVar3 != 0);
    } else {
        puVar2 = 0;
    }
    p[0x298] = (int)puVar2;
    puVar2 = (int *)func_001E8A44(0x194);
    if (puVar2 != (int *)0) {
        *puVar2 = 0;
        iVar3 = 0x14;
        puVar4 = puVar2;
        do {
            puVar4[0x15] = -1;
            puVar4[1] = -1;
            puVar4[0x29] = 0;
            puVar4[0x3d] = 0;
            puVar4[0x51] = -1;
            iVar3 = iVar3 - 1;
            puVar4 = puVar4 + 1;
        } while (iVar3 != 0);
    } else {
        puVar2 = 0;
    }
    p[0x299] = (int)puVar2;
    p[0x292] = 0;
    p[0x293] = 0;
    p[0x295] = 0;
    p[0x416] = 0;
    p[0x417] = 0;
    p[0x296] = 0;
    p[0x297] = 0;
    func_00108F50();
    func_00108FF0();
    p[0x562] = 0;
    p[0x563] = 0;
    p[0x564] = 0;
    p[0x565] = 0;
    p[0x566] = 0;
    return this;
}
#pragma optimize("", on)
undefined4 C_0010F300::func_0010F300(byte param_1)
{
  int func_00109D40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00109D40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
