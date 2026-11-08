/* 3 functions from 0x000F4BA0 to 0x000F58F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_0027DE74, D_00278C48;
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct S_000F4BA0_Obj301D0 {
    int func_000301D0(void);
};

struct S_000F4BA0_B {
    char pad0[0x74];
    S_000F4BA0_Obj301D0 *unk74;
};

struct S_000F4BA0_Item {
    void func_00103260(int a);
    void func_00103350(void);
};

struct S_000F4BA0_Owner {
    char pad0[0x25c];
    S_000F4BA0_B *unk25c;
    char pad260[0x2a4 - 0x260];
    int unk2a4;
    S_000F4BA0_Item *func_000BA9B0(int id);
};

struct UIPage_000F4BA0 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(int a, int b);
};

struct BmxUIPageOptions : UIPage_000F4BA0 {
    char pad4[0x124 - 4];
    S_000F4BA0_Owner *unk124;
    char pad128[0x148 - 0x128];
    int unk148[8];
    char pad168[0x280 - 0x168];
    int unk280, unk284;
    int unk288, unk28c;
    float unk290;
    int unk294, unk298, unk29c, unk2a0, unk2a4;
    char pad2a8[0x2b0 - 0x2a8];
    int unk2b0;
    char pad2b4[0x2bc - 0x2b4];
    float unk2bc;
    int unk2c0, unk2c4, unk2c8, unk2cc;
    float unk2d0, unk2d4;
    unsigned char *unk2d8;
    void func_000F4BA0(float dt);
    __forceinline void Notify_000F4BA0(int a, int b) { v70(a, b); }
    void func_001BEE50(int a, int b, int c);
    void func_001BED00(float dt);
};

struct C_000F4DE0 {
    undefined4 func_000F4DE0(byte param_1);
};

struct F4E_Obj {
    void func_001B1980();
    void func_001B1A30(int a, int b, int c);
    void func_001B2270(int a);
    void func_001B1860(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
};

struct C_000F4E00 {
    char pad0[0x2a4];
    int f2A4;
    char pad2A8[0x2c4 - 0x2a8];
    int f2C4;
    char pad2C8[0x2d8 - 0x2c8];
    F4E_Obj *a2D8[23];
    void func_000F4E00();
    void func_000CA9B0();
    void func_000C9860();
    void func_000C98D0();
    void func_000CAA10();
    void func_000CA940();
    void func_000CA8D0();
};


void BmxUIPageOptions::func_000F4BA0(float dt)
{
    S_000F4BA0_Owner *owner = unk124;
    if (unk298 || unk294) {
        for (int i = 0; i < 8; i++)
            unk148[i] = 0;
    }
    if (unk280 || unk298 || unk294) {
        unk290 += dt;
        if (unk280 && owner->unk2a4) {
            unk280 = 0;
            unk2a0 = 0;
        } else if (unk290 >= D_0027DE74) {
            unk284 = 1;
            Notify_000F4BA0(unk28c, unk288);
            unk290 = 0;
        }
    }
    if (unk2c0 && !unk2a4) {
        unk2bc += dt;
        if (unk2bc >= D_00278C48) {
            unk2a4 = 1;
            unk2c0 = 0;
        }
    }
    if (unk2c4 != unk2d8[0x3b]) {
        if (unk2d0 >= unk2d4) {
            unk2cc = unk2c4;
        } else {
            float range = (float)(unk2c4 - unk2c8);
            unk2cc = unk2c8 + (int)(range * (unk2d0 / unk2d4));
            unk2d0 += dt;
        }
    }
    if (unk29c && owner->unk25c->unk74->func_000301D0() == 0) {
        unk2c0 = 1;
        unk2bc = 0;
        owner->func_000BA9B0(0x16)->func_00103260(0);
        owner->func_000BA9B0(0x17)->func_00103260(0);
        unk2c4 = 255;
        unk2c8 = 0;
        unk2cc = 0;
        unk2d0 = 0;
        unk2d4 = 0.25f;
        func_001BEE50(1, unk2b0, 0);
        unk29c = 0;
    }
    if (unk2a0) {
        owner->func_000BA9B0(0x16)->func_00103350();
        owner->func_000BA9B0(0x17)->func_00103350();
        unk2c4 = 0;
        unk2c8 = 255;
        unk2cc = 255;
        unk2d0 = 0;
        unk2d4 = 0.25f;
        unk2a0 = 0;
    }
    func_001BED00(dt);
}

undefined4 C_000F4DE0::func_000F4DE0(byte param_1)
{
  int func_000C9050(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C9050();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000F4E00::func_000F4E00(void)
{
F4E_Obj *o;
if (f2A4 == 0) {
a2D8[0]->func_001B1980();
a2D8[5]->func_001B1980();
a2D8[5]->func_001B2270(0xffbfa35a);
a2D8[5]->func_001B1A30(0x43a00000, 0x42ca0000, 0);
a2D8[5]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
func_000CA9B0();
a2D8[0]->func_001B2270(0xffbfa35a);
a2D8[0]->func_001B1A30(0x43a50000, 0x42ca0000, 0);
a2D8[0]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
if(f2C4 == 5) {
a2D8[11]->func_001B1980();
a2D8[11]->func_001B1A30(1134559232, 0x43968000, 0);
a2D8[11]->func_001B2270(0xffcccccc);
a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[2]->func_001B1980();
a2D8[2]->func_001B1A30(1134886912, 0x43988000, 0);
a2D8[2]->func_001B2270(0xffcccccc);
o=a2D8[2];
goto tail;
}
else if(f2C4 == 1) {
a2D8[7]->func_001B1980();
a2D8[7]->func_001B1A30(1134559232, 0x43110000, 0);
a2D8[7]->func_001B2270(0xffcccccc);
a2D8[7]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[21]->func_001B1980();
a2D8[21]->func_001B1A30(1134886912, 0x43110000, 0);
a2D8[21]->func_001B2270(0xffcccccc);
o=a2D8[21];
goto tail;
}
}
else if (f2A4 == 1) {
a2D8[21]->func_001B1980();
a2D8[7]->func_001B1980();
a2D8[7]->func_001B1A30(1134559232, 0x430d0000, 0);
a2D8[7]->func_001B2270(0xffbfa35a);
a2D8[7]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
func_000C9860();
a2D8[21]->func_001B1A30(1134886912, 0x430d0000, 0);
a2D8[21]->func_001B2270(0xffbfa35a);
a2D8[21]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
if(f2C4 != 2) {
if(f2C4 == 0) {
a2D8[5]->func_001B1980();
a2D8[5]->func_001B1A30(1134559232, 0x42d20000, 0);
a2D8[5]->func_001B2270(0xffcccccc);
a2D8[5]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[0]->func_001B1980();
a2D8[0]->func_001B1A30(1134886912, 0x42d20000, 0);
a2D8[0]->func_001B2270(0xffcccccc);
o=a2D8[0];
goto tail;
}
} else {
a2D8[8]->func_001B1980();
a2D8[8]->func_001B1A30(1134559232, 0x43390000, 0);
a2D8[8]->func_001B2270(0xffcccccc);
a2D8[8]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[22]->func_001B1980();
a2D8[22]->func_001B1A30(1134886912, 0x43390000, 0);
a2D8[22]->func_001B2270(0xffcccccc);
o=a2D8[22];
goto tail;
}
}
else if (f2A4 == 2) {
a2D8[22]->func_001B1980();
a2D8[8]->func_001B1980();
a2D8[8]->func_001B1A30(1134559232, 0x43350000, 0);
a2D8[8]->func_001B2270(0xffbfa35a);
a2D8[8]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
func_000C98D0();
a2D8[22]->func_001B1A30(1134886912, 0x43350000, 0);
a2D8[22]->func_001B2270(0xffbfa35a);
a2D8[22]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
if(f2C4 == 1) {
a2D8[7]->func_001B1980();
a2D8[7]->func_001B1A30(1134559232, 0x43110000, 0);
a2D8[7]->func_001B2270(0xffcccccc);
a2D8[7]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[21]->func_001B1980();
a2D8[21]->func_001B1A30(1134886912, 0x43110000, 0);
a2D8[21]->func_001B2270(0xffcccccc);
o=a2D8[21];
goto tail;
}
else if(f2C4 == 3) {
a2D8[9]->func_001B1980();
a2D8[9]->func_001B1A30(1134559232, 0x43610000, 0);
a2D8[9]->func_001B2270(0xffcccccc);
a2D8[9]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[1]->func_001B1980();
a2D8[1]->func_001B1A30(1134886912, 0x43610000, 0);
a2D8[1]->func_001B2270(0xffcccccc);
o=a2D8[1];
goto tail;
}
}
else if (f2A4 == 3) {
a2D8[1]->func_001B1980();
a2D8[9]->func_001B1980();
a2D8[9]->func_001B1A30(1134559232, 0x435d0000, 0);
a2D8[9]->func_001B2270(0xffbfa35a);
a2D8[9]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
func_000CAA10();
a2D8[1]->func_001B1A30(1134886912, 0x435d0000, 0);
a2D8[1]->func_001B2270(0xffbfa35a);
a2D8[1]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
if(f2C4 != 4) {
if(f2C4 == 2) {
a2D8[8]->func_001B1980();
a2D8[8]->func_001B1A30(1134559232, 0x43390000, 0);
a2D8[8]->func_001B2270(0xffcccccc);
a2D8[8]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[22]->func_001B1980();
a2D8[22]->func_001B1A30(1134886912, 0x43390000, 0);
a2D8[22]->func_001B2270(0xffcccccc);
o=a2D8[22];
goto tail;
}
} else {
a2D8[10]->func_001B1980();
a2D8[10]->func_001B1A30(1134559232, 0x43848000, 0);
a2D8[10]->func_001B2270(0xffcccccc);
a2D8[10]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[19]->func_001B1980();
a2D8[19]->func_001B1A30(1134886912, 0x43848000, 0);
a2D8[19]->func_001B2270(0xffcccccc);
o=a2D8[19];
goto tail;
}
}
else if (f2A4 == 4) {
a2D8[19]->func_001B1980();
a2D8[10]->func_001B1980();
a2D8[10]->func_001B1A30(1134559232, 0x43828000, 0);
a2D8[10]->func_001B2270(0xffbfa35a);
a2D8[10]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
func_000CA940();
a2D8[19]->func_001B1A30(1134886912, 0x43828000, 0);
a2D8[19]->func_001B2270(0xffbfa35a);
a2D8[19]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
if(f2C4 == 3) {
a2D8[9]->func_001B1980();
a2D8[9]->func_001B1A30(1134559232, 0x43610000, 0);
a2D8[9]->func_001B2270(0xffcccccc);
a2D8[9]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[1]->func_001B1980();
a2D8[1]->func_001B1A30(1134886912, 0x43610000, 0);
a2D8[1]->func_001B2270(0xffcccccc);
o=a2D8[1];
goto tail;
}
else if(f2C4 == 5) {
a2D8[11]->func_001B1980();
a2D8[11]->func_001B1A30(1134559232, 0x43988000, 0);
a2D8[11]->func_001B2270(0xffcccccc);
a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[2]->func_001B1980();
a2D8[2]->func_001B1A30(1134886912, 0x43988000, 0);
a2D8[2]->func_001B2270(0xffcccccc);
o=a2D8[2];
goto tail;
}
}
else {
a2D8[2]->func_001B1980();
a2D8[11]->func_001B1980();
a2D8[11]->func_001B1A30(1134559232, 0x43968000, 0);
a2D8[11]->func_001B2270(0xffbfa35a);
a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
func_000CA8D0();
a2D8[2]->func_001B1A30(1134886912, 0x43968000, 0);
a2D8[2]->func_001B2270(0xffbfa35a);
a2D8[2]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
if(f2C4 == 5) {
a2D8[11]->func_001B1980();
a2D8[11]->func_001B1A30(1134559232, 0x43988000, 0);
a2D8[11]->func_001B2270(0xffcccccc);
a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[2]->func_001B1980();
a2D8[2]->func_001B1A30(1134886912, 0x43988000, 0);
a2D8[2]->func_001B2270(0xffcccccc);
o=a2D8[2];
goto tail;
}
else if(f2C4 == 0) {
a2D8[5]->func_001B1980();
a2D8[5]->func_001B1A30(1134559232, 0x42d20000, 0);
a2D8[5]->func_001B2270(0xffcccccc);
a2D8[5]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
a2D8[0]->func_001B1980();
a2D8[0]->func_001B1A30(1134886912, 0x42d20000, 0);
a2D8[0]->func_001B2270(0xffcccccc);
a2D8[0]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
f2C4=-1;
}
}
goto done;
tail:
o->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0xbf800000, 0xff, 0x3f800000, 0, 0, 0, 0);
done:
f2C4=-1;
}

