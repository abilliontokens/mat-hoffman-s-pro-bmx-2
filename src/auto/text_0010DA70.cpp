/* 13 functions from 0x0010DA70 to 0x0010E920, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00275630;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

extern Vec4 D_002A3A3C;

struct C_Device {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46();
};

struct C_Button {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual int v7();
};

struct C_ButtonSet {
    C_Button *func_001A2EF0(int index);
    void func_001A2DD0(int index);
};

struct V_Slot4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

struct C_00198330 {
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct Owner_10DA70_Info {
    char pad0[0x124];
    int f124;
};

struct Owner_10DA70_4DC {
    char pad0[0x4DC];
    Owner_10DA70_Info *f4DC;
};

struct Obj_10DA70_1E0 {
    char pad0[0x22C];
    C_00198330 *f22C;
};

struct Obj_10DA70_1F0 {
    char pad0[0x68];
    int f68;
};

struct Spring_10DA70 {
    void func_001A86D0(int a);
};

struct Obj_10DA70_A00 {
    int f0;
    C_00198330 *f4;
};

struct Blk24_10DA70 {
    int f0, f4, f8, fC;
    float f10;
    int f14;
};

struct BmxVehicle_10DA70 {
    void *vtbl;
    char pad4[0x20];
    Owner_10DA70_4DC *f24;
    char pad28[0x1E0 - 0x28];
    Obj_10DA70_1E0 *f1E0;
    char pad1E4[0x1F0 - 0x1E4];
    Obj_10DA70_1F0 *f1F0;
    Spring_10DA70 *f1F4;
    char pad1F8[0x468 - 0x1F8];
    int f468;
    char pad46C[0x5C8 - 0x46C];
    int f5C8;
    char pad5CC[0x79C - 0x5CC];
    Blk24_10DA70 f79C;
    char pad7B4[0xA00 - 0x7B4];
    Obj_10DA70_A00 *fA00;
    char padA04[4];
    V_Slot4 *fA08;
    V_Slot4 *fA0C;
    V_Slot4 *fA10;
    V_Slot4 *fA14;
    char padA18[0x11AC - 0xA18];
    int f11AC;
    int f11B0;
    int f11B4;
    char pad11B8[0x1244 - 0x11B8];
    C_Device *f1244;
    char pad1248[0x1584 - 0x1248];
    int f1584;
    char pad1588[0x15A4 - 0x1588];
    C_ButtonSet *f15A4;
    int pad15A8;
    float f15AC;
    float f15B0;
    void func_001057A0(void);
    void func_001058F0(void);
    void func_001576C0(void);
    void func_00108510(int *name, Vec4 v);
    void func_0010DA70(Blk24_10DA70 *p);
    int func_0010DAB0(void);
    void func_0010DB70(void);
    void func_0010DC00(void);
};

struct C_0010E260 {
    void func_0010E260(void);
};

struct C_0010E8A0 {
    int f0;
    int f4[5];
    int f18[5];
    int f2C;
    int f30;
    int f34;
    int f38[100];
    int f1C8[100];
    int f358[100];
    void func_0010E8A0(void);
};

struct C_0010E810Slot {
    void func_000848F0(void);
};

struct C_0010E810Arr {
    char pad0[0x170];
    C_0010E810Slot *f170[1];
};

struct C_0010E810Global {
    char pad0[0x2A4];
    C_0010E810Arr *f2A4;
};

extern C_0010E810Global *D_002A8490;

struct C_0010E810Child {
    char pad0[0x24];
    int f24;
};

struct C_0010E810 {
    char pad0[0x1EC];
    C_0010E810Child *f1EC;
    char pad1F0[0x99C - 0x1F0];
    int f99C;
    char pad9A0[4];
    float f9A4;
    char pad9A8[0xA2C - 0x9A8];
    int fA2C;
    char padA30[0x11EC - 0xA30];
    int f11EC;
    int f11F0;
    int f11F4;
    char pad11F8[0x209C - 0x11F8];
    int f209C;
    int f20A0;
    int f20A4;
    int f20A8;
    void func_00108FF0(void);
    void func_0010E810(void);
};


void BmxVehicle_10DA70::func_0010DA70(Blk24_10DA70 *p)
{
    f79C = *p;
    f79C.f10 = f79C.f10 * 0.01745329f;
    func_001057A0();
}

int BmxVehicle_10DA70::func_0010DAB0(void)
{
    if (f1584 == -1) {
        Vec4 v;

        v.z = 0.0f;
        v.y = 0.0f;
        v.x = 0.0f;
        v.w = 1.0f;
        f1E0->f22C->func_00199A70(0, &v);
        fA00->f4->func_00199A70(0, &v);
        if (v.y < (float)f24->f4DC->f124) {
            func_00108510(&D_00275630, D_002A3A3C);
        }
    }
    return 0;
}

void BmxVehicle_10DA70::func_0010DB70(void)
{
    if (f15A4->func_001A2EF0(3)->v7()) {
        f15A4->func_001A2DD0(3);
    }
    if (f15A4->func_001A2EF0(2)->v7()) {
        f15A4->func_001A2DD0(2);
    }
    f1244->v46();
    func_001576C0();
    fA08->v4();
    fA0C->v4();
    fA10->v4();
    fA14->v4();
}

void BmxVehicle_10DA70::func_0010DC00(void)
{
    if (f5C8 == 0) {
        f1F0->f68 = 1;
    } else {
        f1F0->f68 = 0;
    }
    if (f468 != 0) {
        f1F4->func_001A86D0(f11B4);
        func_001058F0();
    } else if (f5C8 == 0) {
        f1F4->func_001A86D0(f11B0);
    } else {
        f1F4->func_001A86D0(f11AC);
        func_001058F0();
    }
    f15B0 = f15AC;
}

void C_0010E260::func_0010E260(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 0x1084);
  puVar2 = (undefined4 *)(iVar1 + 0x1c8);
  iVar3 = 100;
  do {
    puVar2[-100] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[100] = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  return;
}
