/* 4 functions from 0x00105AA0 to 0x00106810, found by Ghidra. */
#include "common.h"

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

struct C_Source {
    char pad0[0x28];
    int f28;
    char pad2C[4];
    int f30;
    char pad34[0x1C];
    int f50;
    int f54;
    char pad58[0xC];
    int f64;
    int f68;
};

struct C_001067B0 {
    char pad0[0x1E8];
    C_Source *f1E8;
    char pad1EC[0xF74];
    int f1160;
    int f1164;
    int f1168;
    int f116C;
    int f1170;
    int pad1174;
    int f1178;
    int f117C;
    int f1180;
    char pad1184[0xC0];
    C_Device *f1244;
    char pad1248[0x35C];
    C_ButtonSet *f15A4;
    int pad15A8;
    float f15AC;
    void func_001067B0(void);
    void func_00105AA0(void);
};

void C_001067B0::func_00105AA0(void)
{
    f117C = f1178;
    f116C = f1168;
    f1164 = f1160;
    f1160 = f1E8->f64;
    f1178 = f1E8->f68;
    f1168 = f1E8->f50;
    f1170 = f1E8->f54;
    f1180 = f1E8->f28 != 0 && f1E8->f30 != 0;
    if (f1178 != 0) {
        f15AC = 1.0f;
    } else {
        f15AC = 0.0f;
    }
}

void C_001067B0::func_001067B0(void)
{
    if (f15A4->func_001A2EF0(3)->v7()) {
        f15A4->func_001A2DD0(3);
    }
    if (f15A4->func_001A2EF0(2)->v7()) {
        f15A4->func_001A2DD0(2);
    }
    f1244->v46();
}
