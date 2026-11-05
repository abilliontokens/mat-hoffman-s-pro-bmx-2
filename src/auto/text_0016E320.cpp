/* 3 functions from 0x0016E320 to 0x0016F110, found by Ghidra. */
#include "common.h"

struct Anim { int unk_0; int unk_4; int unk_8; };
struct Owner { char pad[0x1b0]; int idx; float unk_1b4; float unk_1b8; };
struct Table { char pad[0x34]; float ax, ay, az; char pad2[0xf8]; Anim *anims; };
struct Body {
    float x, y, z, pad0c;
    float vx, vy, vz, pad1c;
    char pad20[8];
    int frame;
    float cur;
    float len;
    float rate;
    float gravity_acc;
    float pad3c;
    float scale;
    unsigned flags;
    Owner *owner;
};
extern int D_002A8910;
extern float D_00286D4C;
extern unsigned D_002EFC90;
extern float D_00275460;
extern float D_002A890C;
extern float D_002EFC8C;
extern float D_002889C0;
extern int func_001E8858(float);
struct S_16EEA0_Node {
    void func_001B07A0(void);
    int func_001B07D0(int a, int b);
};
struct S_16EEA0_NodeEnt { int f0; S_16EEA0_Node *node; int f8, fC; };
struct S_16EEA0_NodeTbl { char pad0[0x14]; S_16EEA0_NodeEnt *ents; };
struct S_16EEA0_Tex { char pad0[8]; int w; int h; };
struct S_16EEA0_TexEnt { int f0; S_16EEA0_Tex *tex; int f8, fC; };
struct S_16EEA0_TexTbl { char pad0[0x14]; S_16EEA0_TexEnt *ents; };
struct S_16EEA0_Log { char pad0[0x1934]; int f1934; };
struct S_16EEA0_Root { char pad0[0x18]; S_16EEA0_Log *log; char pad1c[0x108]; int f124; };
struct S_16EEA0_Fx {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vC();
    virtual void v10(float dt);
    char pad4[0xa4];
    int fA8;
};
struct S_16EEA0_148 { int f0; int f4; };
struct C_0016EEA0 {
    char pad0[0x104];
    float *f104;
    char pad108[0x11c - 0x108];
    int f11c;
    char pad120[0x12c - 0x120];
    Body **f12c;
    char pad130[0x148 - 0x130];
    S_16EEA0_148 *f148;
    int f14c;
    int f150;
    char pad154[0x170 - 0x154];
    S_16EEA0_Fx *f170;
    int func_0016EEA0(float dt);
};
extern S_16EEA0_Root *D_002A8490;
extern S_16EEA0_NodeTbl *D_002A829C;
extern S_16EEA0_TexTbl *D_002AA6C0;
extern float D_00276278;
extern int D_002A88B4;
extern const char D_002889DC[];
extern const char D_002889C4[];
void func_0016EC80(C_0016EEA0 *self, Body *p, float dt);
void func_0013E260(S_16EEA0_Log *log, int id, const char *fmt, ...);
void func_0013E1F0(S_16EEA0_Log *log, int id, const char *fmt, ...);
