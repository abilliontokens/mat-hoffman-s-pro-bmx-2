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
struct C_0016E320 {
    char pad_00[0x24];
    float f24, f28, f2c, f30;
    float f34, f38, f3c, f40;
    char pad_44[0x54 - 0x44];
    float f54, f58, f5c;
    char pad_60[4];
    void *f64;
    void *f68;
    char pad_70[0x170 - 0x70];
    float f170, f174;
    int f178;
    float f17c, f180;
    int f184, f188;
    char pad_190[4];
    int f190;
    float f194;
    char pad_198[0x1a8 - 0x198];
    int f1a8, f1ac;
    char pad_1b0[0x1c4 - 0x1b0];
    int f1c4, f1c8;
    char pad_1cc[0x1f0 - 0x1cc];
    float f1f0, f1f4;
    float f1f8, f1fc, f200, f204;
    int f208, f20c;
    float f210, f214, f218;
    char pad_21c[4];
    float f220, f224, f228;
    int func_00169E10(float dt);
    int func_0016E320(float dt);
};
extern float D_00278C48;
extern float D_002A8898;
extern float D_00275544;
extern float D_002754B0;
extern float D_002755E8;
extern float D_00275460;
extern short D_002EFE50;
int func_001E8833();
float func_00011170(float *v);
void func_00169B90(void *a, void *b);
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

int C_0016EEA0::func_0016EEA0(float dt)
{
    if (D_002A8490->f124 == 0) {
        S_16EEA0_Node *node = D_002A829C->ents[f148->f4].node;
        node->func_001B07A0();
        if (f150 == 0) {
            float sx, sy;
            int idx = node->func_001B07D0(0, 0);
            S_16EEA0_Tex *tex = D_002AA6C0->ents[idx].tex;
            int i;
            if (tex) {
                sx = (float)tex->w;
                sy = (float)tex->h;
            }
            for (i = 0; i < f14c; i++) {
                f104[i * 8] /= sx;
                f104[i * 8 + 1] /= sy;
                f104[i * 8 + 2] /= sx;
                f104[i * 8 + 3] /= sy;
                f104[i * 8 + 4] /= sx;
                f104[i * 8 + 5] /= sy;
                f104[i * 8 + 6] /= sx;
                f104[i * 8 + 7] /= sy;
            }
            f150 = 1;
        }
        if (f170 != 0 && f170->fA8 != 0) {
            f170->v10(dt);
        }
        float step = dt * 1000.0f;
        for (int j = 0; j < f11c; j++) {
            Body *p = f12c[j];
            if (!(p->flags & 0x80)) {
                p->cur += step;
                Body *t = f12c[j];
                if (t->cur > t->len) {
                    f12c[j] = f12c[f11c - 1];
                    f12c[f11c - 1] = t;
                    if (j == --f11c) break;
                }
            }
            func_0016EC80(this, f12c[j], dt);
        }
        if (D_002A8490->log != 0) {
            if (D_002A88B4 < 0) {
                int id = D_002A8490->log->f1934++;
                D_002A88B4 = id;
            }
            func_0013E260(D_002A8490->log, D_002A88B4, D_002889DC);
            func_0013E1F0(D_002A8490->log, D_002A88B4, D_002889C4, f11c);
        }
    }
    return 1;
}
