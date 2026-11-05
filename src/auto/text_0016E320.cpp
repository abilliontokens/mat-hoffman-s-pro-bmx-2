/* 3 functions from 0x0016E320 to 0x0016F110, found by Ghidra. */
#include "common.h"

struct Anim { int unk_0; int unk_4; int unk_8; };
struct Owner { char pad[0x1b0]; int idx; float unk_1b4; float unk_1b8; };
struct Table { char pad[0x134]; Anim *anims; };
struct Body {
    float x, y, z, pad0c;
    float vx, vy, vz, pad1c;
    char pad20[8];
    int frame;
    float cur;
    float len;
    float rate;
    float pad38b;
    float gravity_acc;
    float scale;
    float pad44;
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
