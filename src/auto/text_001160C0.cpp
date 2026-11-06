/* 1 function from 0x001160C0 to 0x00117160, found by Ghidra. */
#include "common.h"

/* input device slot: virtual 3 reads an analog value for a control code */
struct S_001160C0_Pad {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3(int idx, int code, float *out);
};

struct S_001160C0_Axis {
    char pad0[0x24];
    float f24;
};

/* input mapper: index lookup of a (control, device, mode) triple */
struct S_001160C0_Map {
    char pad0[0x14];
    S_001160C0_Pad *items[4];
    int func_00136170(int control, int device, int mode);
};

struct S_001160C0_Root {
    char pad0[8];
    S_001160C0_Map *f8;
};
extern S_001160C0_Root *D_002A8490;
extern float D_00275544;

/* player controller (update) */
struct C_001160C0 {
    char pad0[0x958];
    float f958;
    int f95C;
    float f960;
    float f964;
    float f968;
    char pad96C[4];
    int f970;
    char pad974[0x74];
    S_001160C0_Axis *f9E8;
    S_001160C0_Axis *f9EC;
    char pad9F0[0x1E68 - 0x9F0];
    int input[0x20];
    int prev[0x20];
    int func_00107FB0();
    void func_001160C0(float dt);
};

void C_001160C0::func_001160C0(float dt)
{
    if (f958 <= 0.0f && f95C == 0) {
        f964 = f9E8->f24;
        f968 = f9EC->f24;
        for (int i = 0; i < 0x20; i++) {
            float v;
            if (D_002A8490->f8->items[f970]->v3(i, 0x3F, &v)) {
                input[i] = v >= 0.0f;
            } else {
                input[i] = 0;
                if (prev[i] != 0 && v > 0.0f) {
                    input[i] = 1;
                }
            }
        }
        if (input[D_002A8490->f8->func_00136170(0, 2, 0)]) {
            f964 = -1.0f;
        } else if (input[D_002A8490->f8->func_00136170(1, 2, 0)]) {
            f964 = 1.0f;
        }
        if (input[D_002A8490->f8->func_00136170(2, 2, 0)]) {
            f968 = -1.0f;
        } else if (input[D_002A8490->f8->func_00136170(3, 2, 0)]) {
            f968 = 1.0f;
        }
    }
    for (int j = 0; j < 0x20; j++) {
        prev[j] = input[j];
    }
}
