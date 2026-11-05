/* 3 functions from 0x001648E0 to 0x001653E0, found by Ghidra. */
#include "common.h"
struct Vec4_165EF0 {
 float x,y,z,w;
 Vec4_165EF0 operator-(const Vec4_165EF0 &b) const { Vec4_165EF0 r; r.x=x-b.x; r.y=y-b.y; r.z=z-b.z; r.w=1.0f; return r; }
 Vec4_165EF0 operator*(float s) const { Vec4_165EF0 r; r.x=x*s; r.y=y*s; r.z=z*s; r.w=1.0f; return r; }
 Vec4_165EF0 operator+(const Vec4_165EF0 &b) const { Vec4_165EF0 r; r.x=x+b.x; r.y=y+b.y; r.z=z+b.z; r.w=1.0f; return r; }
};
struct C_001648E0_Item {
 virtual void v0();
 virtual void v1();
 virtual void v2(float, Vec4_165EF0 *);
 virtual void v3(float, Vec4_165EF0 *);
 int f4;
};
struct C_001648E0_Arg {
 char pad0[0x14];
 C_001648E0_Item **f14, **f18;
 int f1C, f20;
 char pad24[0x14];
 float f38;
};
struct C_00165D00_Node {
 char pad0[0x170];
 int f170;
 void func_00199300(Vec4_165EF0 *);
 void func_00199650(Vec4_165EF0 *);
};
struct C_00165D00_Elem {
 char pad0[0x34];
 C_00165D00_Node *f34;
 char pad38[8];
};
struct C_001648E0 {
 int f0;
 void *f4;
 int f8;
 void *fC;
 char pad10[8];
 int f18;
 char pad1C[0x1D0];
 C_00165D00_Elem *f1EC;
 int *f1F0;
 char pad1F4[0xC];
 Vec4_165EF0 *f200, *f204;
 void func_001648E0(C_001648E0_Arg *, float, int, int *, float);
};
void func_001641B0(void *, void *);
void func_001640D0(void *, int, void *, void *);
void func_0015C7D0(Vec4_165EF0 *, Vec4_165EF0 *, Vec4_165EF0 *, float);
extern float D_00275544;

