/* 9 functions from 0x00136860 to 0x00137810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00136B40 {
    undefined4 func_00136B40(byte param_1);
};

extern int D_00284860;
extern char D_00284878[];

int func_001E91F4(int p);

struct C_0013B210 {
    void func_0013AFF0(int a, int b, int c);
};
extern C_0013B210 *D_002BEAAC;

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0(void);
    void func_0001DFF0(void);
};

struct CubeSlot {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
};

struct CubeGroup {
    unsigned short mask;
    CubeSlot *ptrs[0x39];
    unsigned int vec[4];
    int unkF8;
};

struct Cube : C_0001DFE0 {
    float v08[4];
    float v18[4];
    float v28[4];
    int unk38;
    void *unk3C;
    char unk40;
    char pad41[7];
    CubeGroup groups[6];
    void func_001364B0(void);
    void func_00136860(int i, int j, int a);
    void func_00136A70(void);
    int func_001369E0(int a);
    Cube *func_00136AD0(void);
};

struct TokenizerBuf {
    double align;
    void func_001B4A40(int a);
    char *func_001B4A70(const char *delims);
};

struct TokenEntry {
    char *name;
    int pad[4];
};


void Cube::func_00136A70(void)
{
    vtbl = &D_00284860;
    for (int i = 5; i >= 0; i--) {
        for (int j = 15; j >= 0; j--) {
            if (groups[i].ptrs[j] != 0) {
                groups[i].ptrs[j]->vf2();
                groups[i].ptrs[j] = 0;
            }
        }
    }
    func_0001DFF0();
}

undefined4 C_00136B40::func_00136B40(byte param_1)
{
  int func_00136A70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00136A70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
