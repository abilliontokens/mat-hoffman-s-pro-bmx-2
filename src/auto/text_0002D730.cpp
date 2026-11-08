/* 1 function from 0x0002D730 to 0x0002EB10, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <xmmintrin.h>
struct V4_2D730 {
    float x, y, z, w;
    V4_2D730() { z = y = x = 0.0f; w = 1.0f; }
};
static __forceinline float Abs_2D730(float a)
{
    unsigned int i = *(volatile unsigned int *)&a & 0x7fffffff;
    return *(float *)&i;
}

struct S_2D730_Transform {
    void func_00197EC0(void *out, void *in);
    void func_001994C0(int, void *, void *);
    void func_00199110(int, void *, void *, int, int, int);
    float func_00026A10(float, float);
    void func_000269B0(float, float, float);
    void func_0001C5B0(void *);
};
void func_00026340(void *, void *);
float func_00011220(void *, void *);
void func_0001C5E0(void *, void *, float);
void func_0001C5E0(void *, float, void *);

struct S_2D730_Component {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void tick(float dt);
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void set_speed(float value);
};

struct S_2D730_Mgr {
      void *func_00026500(int a, void *b);
      void *func_00026500(void *name, int a);
  };

struct S_2D730_Sub {
    void func_00025E50(float f);
    void func_00030CE0(float);
    void func_00030E70(float);
    void func_001941F0(float);
    void func_00174550(int, int, int);
    void func_000B8AD0(int, int);
    void func_000B6A70(float);
    void func_00133EF0(void *p);
    void func_00134530(int mask, int *a, int *b, int n, int x, int y);
};

extern int D_002B7EA4;
extern int D_002B7EA0;
extern int D_002B7E9C;
extern int D_002B7E98;
extern int D_002A7CB8;
extern int D_002767AC;
extern int D_002767A4;
extern int D_002A1190;
extern float D_00275460;

struct S_2D730_I4 {
    int v[4];
};

struct S_2D730_Node {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual void slot30();
    virtual void slot31();
    virtual void slot32();
    virtual void slot33();
    virtual void slot34();
    virtual void update();
    char pad4[0x238 - 4];
    float f238, f23C, f240, f244;
};

struct S_2D730_State {
    char pad0[0x24];
    int f24;
    char pad28[0x50 - 0x28];
    int f50, f54, f58;
    char pad5c[0x64 - 0x5c];
    int f64, f68, f6c, f70, f74;
    char pad78[0x8c - 0x78];
    int f8c;
    char pad90[0x1a0 - 0x90];
    int f1a0[4];
    char pad1b0[0x1d8 - 0x1b0];
    S_2D730_State *f1d8, *f1dc, *f1e0;
    int func_00026A70(int);
};

struct C_0002D730 {
    char pad0[0x1e0];
    S_2D730_Node *f1e0;
    void *f1e4;
    S_2D730_State *f1e8;
    void *f1ec, *f1f0, *f1f4, *f1f8, *f1fc, *f200;
    S_2D730_Sub *f204;
    void *f208, *f20c, *f210;
    char pad214[0x230 - 0x214];
    void *f230;
    int f234;
    int f238[4];
    char pad248[0x440 - 0x248];
    int f440;
    char pad444[0x454 - 0x444];
    int f454;
    char pad458[0x468 - 0x458];
    int f468;
    char pad46c[0x5f0 - 0x46c];
    S_2D730_Sub *f5f0;
    char pad5f4[0x69c - 0x5f4];
    int f69c;
    char pad6a0[0x6a8 - 0x6a0];
    int f6a8;
    char pad6ac[0x6c8 - 0x6ac];
    int f6c8;
    char pad6cc[0x6dc - 0x6cc];
    float f6dc, f6e0, f6e4;
    char pad6e8[0x6fc - 0x6e8];
    float f6fc, f700;
    void func_0002D730(float dt);
    void func_00027D60(void);
    void func_0002AF90(void);
    void func_0002A7C0(void);
    void func_00027C50(float);
    void func_0002CBC0(float);
    void func_000298F0(float);
    void func_00029E00(float);
    void func_0002A010(float);
    void func_0002C9A0(float);
    void func_0002CB00(float);
    void func_00027860(float);
    void func_0002A250(float);
};

extern float D_00275AEC;
extern float D_00275BF8;
extern float D_002A118C;
extern float D_002A1188;
extern int D_002A10F0, D_002A10F4, D_002A10F8, D_002A10FC;
extern int D_002B9108, D_002B911C, D_002B910C, D_002BA160;
extern int D_002B7E94, D_002B7E90, D_002B7E8C, D_002B7E88, D_002B7E84;
extern int D_002B7E80, D_002B7E7C, D_002B7E78, D_002B7E74, D_002B7E70;
extern int D_002B7E6C, D_002B7E68, D_002B7E64, D_002B7E60;
extern int D_00276794, D_00276780, D_00276774, D_00276768, D_0027675C;
extern int D_00276754, D_00276748, D_00276738, D_0027672C, D_00276720;
extern int D_00276710, D_00276708, D_00276700;
int func_000292C0(void);

void C_0002D730::func_0002D730(float dt)
{
    if (!(D_002B7EA4 & 1)) {
        D_002B7EA4 |= 1;
        D_002B7EA0 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_002767AC, -1);
    }
    if (!(D_002B7EA4 & 2)) {
        D_002B7EA4 |= 2;
        *(float *)&D_002B7E9C = D_00275460 / (float)D_002A1190;
    }
    if (!(D_002B7EA4 & 4)) {
        D_002B7EA4 |= 4;
        D_002B7E98 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_002767A4, -1);
    }
    if (f454 != 0)
        f5f0->func_00025E50(dt);
    func_00027D60();
    if (f69c != 0) {
        int moved = 0;
        f6fc += dt;
        if (f6fc > f700) {
            float scaled[3];
            scaled[0] = f6dc * 10.0f;
            scaled[1] = f6e0 * 10.0f;
            scaled[2] = f6e4 * 10.0f;
            float *velocity = &f1e0->f238;
            velocity[0] += scaled[0];
            velocity[1] += scaled[1];
            velocity[2] += scaled[2];
            moved = 1;
        }
        if (f1e8->f50 || f1e8->f54 || f468 || moved || !func_000292C0()) {
            f69c = 0;
            f6a8 = 0;
        }
    }
    if (f1e8->f68 != 0)
        f6c8 = 0;

    f1e0->update();
    if (!(D_002B7EA4 & 8)) {
        D_002B7EA4 |= 8;
        D_002B7E94 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276794, -1);
    }
    f204->func_00133EF0((char *)f230 + 0xf0);
    f204->func_00134530(0x40, &f234, f238, 3, 0, 0);
    if (f234 > 0) {
        f1e8->f24 = 1;
        *(int *)((char *)f1f4 + 0x5c) = 1;
    } else {
        f1e8->f24 = 0;
        *(int *)((char *)f1f4 + 0x5c) = 0;
    }
    f1e8->f58 = f1e8->f50;
    f1e8->f70 = f440;
    f1e8->f74 = *(int *)((char *)this + 0x680);
    *(int *)((char *)f1ec + 0x2c) = f1e8->f68;
    *(int *)((char *)f20c + 0x5c) = *(int *)((char *)this + 0x4b4);
    *(int *)((char *)f20c + 0x60) = *(int *)((char *)this + 0x5cc);
    *(int *)((char *)f20c + 0x28) = f1e8->f68;
    *(int *)((char *)f20c + 0x2c) = f1e8->f64;
    *(S_2D730_I4 *)((char *)f20c + 0x64) = *(S_2D730_I4 *)((char *)f1e8 + 0x1a0);
    *(int *)((char *)f20c + 0xa0) = f1e8->f8c;
    *(int *)((char *)f20c + 0x34) = f1e8->f68 &&
        ((f1e8->f1d8 && f1e8->f1d8->f68 == D_002B9108) ||
         (f1e8->f1d8 && f1e8->f1d8->f68 == D_002B911C));
    *(int *)((char *)f208 + 0x4c) = *(int *)((char *)this + 0x680);
    *(int *)((char *)f208 + 0x50) = *(int *)((char *)this + 0x684);
    *(int *)((char *)f208 + 0x48) = f440;
    *(S_2D730_I4 *)((char *)f208 + 0x9c) = *(S_2D730_I4 *)((char *)f1e8 + 0x1a0);
    *(int *)((char *)f208 + 0x38) = f468;
    *(int *)((char *)f208 + 0xac) = f69c;
    *(int *)((char *)f208 + 0xb0) = *(int *)((char *)this + 0x704) || *(int *)((char *)this + 0x70c);
    *(S_2D730_I4 *)((char *)f208 + 0xbc) = *(S_2D730_I4 *)((char *)this + 0x6cc);
    *(S_2D730_I4 *)((char *)f208 + 0xcc) = *(S_2D730_I4 *)((char *)this + 0x6dc);
    *(int *)((char *)f208 + 0x34) = f1e8->f68;

    if (f468 && !*(int *)((char *)f210 + 0x24))
        ((S_2D730_Component *)f1e4)->set_speed((*(float *)((char *)this + 0x4a8) + 1.0f) * 32.2f);
    else if (f69c)
        ((S_2D730_Component *)f1e4)->set_speed(*(float *)((char *)this + 0x6b0) * 32.2f);
    else if (f1e8->f64 || f468 || *(int *)((char *)this + 0x704) || *(int *)((char *)this + 0x70c))
        ((S_2D730_Component *)f1e4)->set_speed(32.2f);
    else {
        if (!*(int *)((char *)this + 0x680) || !(Abs_2D730(f1e0->f23C) >= *(float *)((char *)this + 0x58c))) {
            if (f440) {
                if (*(int *)((char *)this + 0x684))
                    ((S_2D730_Component *)f1e4)->set_speed(D_002A118C * 32.2f);
                else
                    ((S_2D730_Component *)f1e4)->set_speed(*(float *)((char *)this + 0x28) + 32.2f);
            }
        }
    }
    if (!(D_002B7EA4 & 16)) {
        D_002B7EA4 |= 16;
        D_002B7E90 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276780, -1);
    }
    ((S_2D730_Component *)f1f4)->tick(dt);
    func_0002AF90();
    if (!(D_002B7EA4 & 32)) {
        D_002B7EA4 |= 32;
        D_002B7E8C = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276774, -1);
    }
    ((S_2D730_Sub *)f1ec)->func_00030CE0(dt);
    ((int *)((char *)this + 0x8c))[0] = D_002A10F0;
    ((int *)((char *)this + 0x8c))[1] = D_002A10F4;
    ((int *)((char *)this + 0x8c))[2] = D_002A10F8;
    ((int *)((char *)this + 0x8c))[3] = D_002A10FC;
    ((int *)((char *)this + 0x9c))[0] = D_002A10F0;
    ((int *)((char *)this + 0x9c))[1] = D_002A10F4;
    ((int *)((char *)this + 0x9c))[2] = D_002A10F8;
    ((int *)((char *)this + 0x9c))[3] = D_002A10FC;
    float step = *(float *)&D_002B7E9C * dt;
    for (int iteration = 0; iteration < D_002A1190; ++iteration) {
    if (!(D_002B7EA4 & 64)) {
        D_002B7EA4 |= 64;
        D_002B7E88 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276768, -1);
    }
    func_0002CBC0(step);
    if (!(D_002B7EA4 & 128)) {
        D_002B7EA4 |= 128;
        D_002B7E84 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_0027675C, -1);
    }
    func_000298F0(step);
    func_00029E00(step);
    func_0002A010(step);
    if (!(D_002B7EA4 & 256)) {
        D_002B7EA4 |= 256;
        D_002B7E80 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276754, -1);
    }
    func_0002C9A0(step);
    func_0002CB00(step);
    if (!*(int *)((char *)this + 0x704) && !*(int *)((char *)this + 0x70c))
        ((S_2D730_Sub *)f1e4)->func_001941F0(step);
    if (!(D_002B7EA4 & 512)) {
        D_002B7EA4 |= 512;
        D_002B7E7C = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276748, -1);
    }

    if (f468) {
        ((S_2D730_Sub *)f1e0)->func_00174550(1, 1, 0);
        ((S_2D730_Sub *)f1e8)->func_000B8AD0(0, 0);
    } else if (*(int *)((char *)this + 0x490)) {
        ((S_2D730_Sub *)f1e8)->func_000B8AD0(0, 0);
    } else {
        ((S_2D730_Sub *)f1e8)->func_000B6A70(step);
        if (*(int *)((char *)this + 0x4f8) && *(int *)((char *)this + 0x698) != 4) {
            if (!*(int *)((char *)this + 0x46c) && !*(int *)((char *)this + 0x6a0)) {
                if (f1e8->f68 || !*(int *)((char *)this + 0x4fc))
                    *(int *)((char *)this + 0x4fc) = 1;
            }
            if (!*(int *)((char *)this + 0x4fc))
                ((S_2D730_Sub *)f1e8)->func_000B8AD0(0, 0);
        }
        if (f1e8->f68 && !*(int *)((char *)this + 0x5c8))
            ((S_2D730_Sub *)f1e0)->func_00174550(0, 1, 0);
        else
            ((S_2D730_Sub *)f1e0)->func_00174550(1, 1, 1);
        ((S_2D730_Component *)f1e8)->tick(step);
    }
    if (f1e8->f68) {
        f6a8 = 0;
        *(int *)((char *)this + 0x46c) = 0;
        *(int *)((char *)this + 0x6a0) = 0;
        *(short *)((char *)this + 0x500) = f1e8->f1d8 ? *(short *)((char *)f1e8->f1d8 + 0x68) : *(short *)&D_002BA160;
        *(float *)((char *)this + 0x504) = 0;
        *(S_2D730_I4 *)((char *)this + 0x55c) = *(S_2D730_I4 *)&f1e0->f238;
    } else if (f468) {
        *(int *)((char *)this + 0x46c) = 1;
        *(float *)((char *)this + 0x504) = 0;
    } else if (f69c) {
        *(int *)((char *)this + 0x6a0) = 1;
        *(float *)((char *)this + 0x504) = 0;
    } else {
        *(float *)((char *)this + 0x504) += step;
    }
    if (!(D_002B7EA4 & 1024)) {
        D_002B7EA4 |= 1024;
        D_002B7E78 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276738, -1);
    }
    ((S_2D730_Component *)f208)->tick(step);
    if (!(D_002B7EA4 & 2048)) {
        D_002B7EA4 |= 2048;
        D_002B7E74 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_0027672C, -1);
    }
    func_00027860(step);
    if (!f468) {
    if (!(D_002B7EA4 & 4096)) {
        D_002B7EA4 |= 4096;
        D_002B7E70 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276720, -1);
    }
    ((S_2D730_Component *)f20c)->tick(step);
    if (!(D_002B7EA4 & 8192)) {
        D_002B7EA4 |= 8192;
        D_002B7E6C = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276774, -1);
    }
    ((S_2D730_Sub *)f1ec)->func_00030E70(step);
    }
    if (!(D_002B7EA4 & 16384)) {
        D_002B7EA4 |= 16384;
        D_002B7E68 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276710, -1);
    }
    ((S_2D730_Component *)f1f0)->tick(step);
    if (*(int *)((char *)f1f0 + 0x30) && !*(int *)((char *)this + 0x5c8))
        *(float *)((char *)this + 0x4ec) = *(float *)((char *)this + 0x4e4);
    if (*(float *)((char *)this + 0x4ec) > 0.0f) {
        *(float *)((char *)f20c + 0x3c) = *(float *)((char *)this + 0x4e8);
        *(float *)((char *)this + 0x4ec) -= step;
    } else
        *(float *)((char *)f20c + 0x3c) = 1.0f;
    if (Abs_2D730(*(float *)((char *)f1e0 + 0x170)) > Abs_2D730(*(float *)((char *)this + 0x9c))) *(float *)((char *)this + 0x9c) = *(float *)((char *)f1e0 + 0x170);
    if (Abs_2D730(*(float *)((char *)f1e0 + 0x174)) > Abs_2D730(*(float *)((char *)this + 0xa0))) *(float *)((char *)this + 0xa0) = *(float *)((char *)f1e0 + 0x174);
    if (Abs_2D730(*(float *)((char *)f1e0 + 0x178)) > Abs_2D730(*(float *)((char *)this + 0xa4))) *(float *)((char *)this + 0xa4) = *(float *)((char *)f1e0 + 0x178);
    func_0002A250(dt);
    if (f468) {
        S_2D730_Node *node = f1e0;
        V4_2D730 impulse;
        impulse.z = -(*(float *)((char *)node + 0x250) * *(float *)((char *)this + 0x5c4));
        if (*(void **)((char *)node + 0x22c)) {
            V4_2D730 transformed;
            ((S_2D730_Transform *)*(void **)((char *)node + 0x22c))->func_00197EC0(&transformed, &impulse);
            *(float *)((char *)node + 0x130) += transformed.x;
            *(float *)((char *)node + 0x134) += transformed.y;
            *(float *)((char *)node + 0x138) += transformed.z;
        }
        ((S_2D730_Component *)f210)->tick(step);
    }
    if (!(D_002B7EA4 & 32768)) {
        D_002B7EA4 |= 32768;
        D_002B7E64 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276708, -1);
    }
    ((S_2D730_Component *)f1e0)->tick(step);
    if (Abs_2D730(*(float *)((char *)f1e0 + 0x6c)) > Abs_2D730(*(float *)((char *)this + 0x8c))) *(float *)((char *)this + 0x8c) = *(float *)((char *)f1e0 + 0x6c);
    if (Abs_2D730(*(float *)((char *)f1e0 + 0x70)) > Abs_2D730(*(float *)((char *)this + 0x90))) *(float *)((char *)this + 0x90) = *(float *)((char *)f1e0 + 0x70);
    if (Abs_2D730(*(float *)((char *)f1e0 + 0x74)) > Abs_2D730(*(float *)((char *)this + 0x94))) *(float *)((char *)this + 0x94) = *(float *)((char *)f1e0 + 0x74);
    }
    if (!(D_002B7EA4 & 65536)) {
        D_002B7EA4 |= 65536;
        D_002B7E60 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(&D_00276700, -1);
    }

    func_0002A7C0();
    ((S_2D730_Transform *)f230)->func_001994C0(0, (char *)this + 0x10c, (char *)this + 0x11c);
    if (!*(int *)((char *)f208 + 0xf8) && !*(int *)((char *)f208 + 0x118)) {
        *(float *)((char *)this + 0x11c) = ((S_2D730_Transform *)*(void **)((char *)this + 0x220))->func_00026A10(*(float *)((char *)this + 0x12c), dt);
        *(float *)((char *)this + 0x120) = ((S_2D730_Transform *)*(void **)((char *)this + 0x224))->func_00026A10(*(float *)((char *)this + 0x130), dt);
        *(float *)((char *)this + 0x124) = ((S_2D730_Transform *)*(void **)((char *)this + 0x228))->func_00026A10(*(float *)((char *)this + 0x134), dt);
        func_00026340((char *)this + 0x11c, (char *)this + 0x11c);
        V4_2D730 perpendicular;
        AsmVec3Cross((float *)&perpendicular.x, (float *)((char *)this + 0x10c), (float *)((char *)this + 0x11c));
        AsmVec3Cross((float *)((char *)this + 0x11c), (float *)&perpendicular.x, (float *)((char *)this + 0x10c));
        ((S_2D730_Transform *)f230)->func_00199110(0, (char *)this + 0x10c, (char *)this + 0x11c, 0, 1, 0);
    } else {
        ((S_2D730_Transform *)*(void **)((char *)this + 0x220))->func_000269B0(*(float *)((char *)this + 0x11c), 3.402823466e38f, 3.402823466e38f);
        ((S_2D730_Transform *)*(void **)((char *)this + 0x224))->func_000269B0(*(float *)((char *)this + 0x120), 3.402823466e38f, 3.402823466e38f);
        ((S_2D730_Transform *)*(void **)((char *)this + 0x228))->func_000269B0(*(float *)((char *)this + 0x124), 3.402823466e38f, 3.402823466e38f);
    }
    if (f1e8->f68) {
        if (((f1e8->f1d8 && f1e8->f1d8->f68 == D_002B9108) ||
             (f1e8->f1d8 && f1e8->f1d8->f68 == D_002B911C)) && *(int *)((char *)this + 0x9e0))
            *(int *)((char *)this + 0x444) = 1;
        else
            *(int *)((char *)this + 0x444) = 0;
    }
    if (!*(int *)((char *)this + 0x680) && !f440 && !f1e8->f68 &&
        Abs_2D730(*(float *)((char *)this + 0x120)) < 0.707f &&
        f1e0->f23C >= 0.0f &&
        (f1e8->func_00026A70(D_002B9108) || f1e8->func_00026A70(D_002B911C))) {
        *(int *)((char *)this + 0x680) = 1;
        float *velocity = &f1e0->f238;
        V4_2D730 projected;
        func_0001C5E0(&projected, f1e8->f1a0, func_00011220(f1e8->f1a0, velocity));
        ((S_2D730_Transform *)velocity)->func_0001C5B0(&projected);
    }
    if (*(int *)((char *)this + 0x680) && (f1e8->f68 || f468)) {
        *(int *)((char *)this + 0x680) = 0;
        if (!f468 && *(float *)((char *)this + 0x760) >= 0.0f)
            func_00027C50(1.0f);
    }
    if (!*(int *)((char *)this + 0x684) &&
        ((f1e8->f1dc && f1e8->f1dc->f68 == D_002B910C) ||
         (f1e8->f1e0 && f1e8->f1e0->f68 == D_002B910C)))
        *(int *)((char *)this + 0x684) = 1;
    if (*(int *)((char *)this + 0x684) &&
        !(f1e8->f1dc && f1e8->f1dc->f68 == D_002B910C) &&
        !(f1e8->f1e0 && f1e8->f1e0->f68 == D_002B910C))
        *(int *)((char *)this + 0x684) = 0;
    if (!f440 && *(int *)((char *)this + 0x680) && *(int *)((char *)this + 0x444)) {
        f440 = 1;
        *(int *)((char *)this + 0x680) = 0;
        f1e8->f1d8 = 0;
        f1e0->f23C = D_002A1188;
    }
    if (f440 && (f1e8->f68 || f468)) f440 = 0;
    if (f1e8->f68) {
        *(int *)((char *)this + 0x714) = 1;
        *(int *)((char *)this + 0x478) = 1;
    }
}
