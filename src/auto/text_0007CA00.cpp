/* 3 functions from 0x0007CA00 to 0x0007D6F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Sprite {
    char pad0[0x28];
    float w;
    float h;
    char pad30[0x8];
    unsigned int color;
    float u0, v0, u1, v1;
    float sx, sy;
    char pad54[4];
    unsigned char flags;
    void Init(const char* name, float a, float b, int c);
};
struct Menu {
    char pad0[0x80];
    Sprite* s80;
    Sprite* s84;
    char pad88[0x30];
    Sprite* sb8;
    Sprite* sbc;
    char padc0[8];
    Sprite* sc8;
    Sprite* scc;
    char padd0[0x1c];
    Sprite* sec[5];
    Sprite* s100[14];
    Sprite* s138;
    char pad13c[0x10];
    int* s14c;
    char pad150[0x28];
    int s178;
    Menu* func_0007CA00(int a);
};
struct C_0007D6D0 {
    undefined4 func_0007D6D0(byte param_1);
};


undefined4 C_0007D6D0::func_0007D6D0(byte param_1)
{
  int func_0006A1A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0006A1A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
