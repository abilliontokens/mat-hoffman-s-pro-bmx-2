/* 1 function from 0x001160C0 to 0x00117160, found by Ghidra. */
#include "common.h"
#include <string.h>
struct C_000AD5C0 { int func_000AD5C0(int,int *,int); int func_000A7570(int,int,int); void func_000A7560(); };
struct C_001C3D30 { void func_001C3D30(int); };
struct Queue_10DED0 { int count; int ids[5]; int modes[5]; int f2C; int f30; int f34; int f38[100]; int f1C8[100]; void func_00109340(int,int); };
struct Obj831549 { int func_000831C0(); };
extern float D_002755E8, D_00276098, D_002756DC, D_00275460, D_00283C80, D_00278C58;
unsigned int func_001DC974();

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
 char pad0[0x454];
 int f454;
 char pad458[0x10];
 int f468;
 char pad46c[0x4];
 int f470;
 char pad474[0x8];
 int f47C;
 char pad480[0x74];
 int f4F4;
 int f4F8;
 char pad4fc[0xf0];
 int f5EC;
 int f5F0;
 int f5F4;
 char pad5f8[0x88];
 int f680;
 char pad684[0x18];
 int f69C;
 char pad6a0[0x64];
 int f704;
 char pad708[0x4];
 int f70C;
 char pad710[0x34];
 float f744;
 char pad748[0x20c];
 int f954;
 float f958;
 int f95C;
 float f960;
 float f964;
 float f968;
 char pad96c[0x4];
 int f970;
 char pad974[0xc];
 int f980;
 int f984;
 int f988;
 float f98C;
 int f990;
 char pad994[0x4];
 int f998;
 float f99C;
 float f9A0;
 float f9A4;
 float f9A8;
 float f9AC;
 float f9B0;
 char pad9b4[0x4];
 float f9B8;
 float f9BC;
 float f9C0;
 float f9C4;
 float f9C8;
 char pad9cc[0x4];
 int f9D0;
 int f9D4;
 int f9D8;
 char pad9dc[0x4];
 int f9E0;
 float f9E4;
 S_001160C0_Axis * f9E8;
 S_001160C0_Axis * f9EC;
 char pad9f0[0x3c];
 int fA2C;
 int fA30;
 char pada34[0x10];
 int fA44;
 char pada48[0x624];
 float f106C;
 float f1070;
 char pad1074[0x4];
 int f1078;
 char pad107c[0x8];
 int f1084;
 int f1088;
 int f108C;
 char pad1090[0x7c];
 int f110C;
 char pad1110[0x4];
 int f1114;
 int f1118;
 int f111C;
 char pad1120[0x14];
 int f1134;
 float f1138;
 char pad113c[0x8];
 float f1144;
 float f1148;
 float f114C;
 float f1150;
 float f1154;
 int f1158;
 char pad115c[0xc];
 int f1168;
 char pad116c[0xc];
 int f1178;
 char pad117c[0x60];
 int f11DC;
 char pad11e0[0xc];
 int f11EC;
 int f11F0;
 int f11F4;
 char pad11f8[0x3e0];
 int f15D8;
 char pad15dc[0x2c];
 int f1608;
 char pad160c[0x4];
 int f1610;
 char pad1614[0x14];
 int f1628;
 char pad162c[0x4];
 int f1630;
 char pad1634[0x1e68-0x1634];
 int input[32]; int prev[32];
 char pad1F68[0x201c-0x1f68]; float f201C;
 char pad2020[0x20ac-0x2020]; int f20AC;
 int func_00107FB0(); int func_001091D0();
 void func_0010DCB0(); void func_0010DED0(int,int); int func_0010E030(int,int);
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
