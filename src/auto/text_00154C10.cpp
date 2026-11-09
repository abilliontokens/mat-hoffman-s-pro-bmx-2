/* 4 functions from 0x00154C10 to 0x00155890, found by Ghidra. */
#include "common.h"

#include <string.h>
#include <math.h>
#include "asm_helpers.h"

extern int D_00286DD4;

void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);

extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5870[], D_00275678[];
extern char D_002A5FA8[], D_002A47F0[], D_002A48F8[], D_002A5348[];
extern char D_002758F0[], D_002758E4[], D_002758D8[], D_002758CC[];

/* the path buffers are saved and restored with a length-clamped copy (AsmMinI) */
static __forceinline void CopyPathP_001554D0(char *dst, const char *src);
static __forceinline void CopyPathV_001554D0(char *dst, const char *src)
{
    int slen = strlen(src);
    int lim = 0x103;
    int n = AsmMinI(lim, slen);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

/* menu object (0x20c bytes) created through func_001CF740 */
struct S_001554D0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(const char *s, int a, int b, int c, int d);
    S_001554D0_Obj *func_001CF740(void *a, int b, int c);
};

struct S_001554D0_Cam {
    void func_0019ABA0(int a, int b);
};

struct S_001554D0_Owner {
    char pad0[4];
    S_001554D0_Cam *f4;
};

struct S_001554D0_Scene {
    char pad0[0xb4];
    void *fB4;
};

struct S_154C10_Dbg {
    char pad0[0x1934];
    int f1934;
};

struct S_154C10_Sub158 {
    void func_001C4D50(int a);
};

struct S_154C10_Notify {
    char pad0[0x158];
    S_154C10_Sub158 *f158;
    void func_0004AB90(int a);
};

struct S_001554D0_Root {
    char pad0[4];
    S_001554D0_Scene *f4;
    char pad8[0x10];
    S_154C10_Dbg *f18;
    char pad1C[0x124 - 0x1c];
    int f124;
    char pad128[0x2a4 - 0x128];
    S_154C10_Notify *f2A4;
    char pad2A8[0x2e0 - 0x2a8];
    int *f2E0;
};

struct V4_154C10 {
    float x, y, z, w;
};

struct S_154C10_Tbl {
    char pad0[0x24];
    V4_154C10 pts[1];
};

struct S_154C10_Anim {
    int func_0001BE90(void *obj, int a, int b, int c);
};

struct S_001554D0_Global {
    char pad0[0x348];
    int f348;
    char pad34C[0x484 - 0x34c];
    S_154C10_Anim *f484;
    char pad488[0x4a8 - 0x488];
    int *f4A8;
    char pad4AC[0x14];
    int f4C0;
    char pad4C4[0x4dc - 0x4c4];
    S_154C10_Tbl *f4DC;
};

extern S_001554D0_Global *D_002B9120;
extern S_001554D0_Root *D_002A8490;

/* FPSPlayer::Update (vtable slot 12) */
struct V4c_154C10 : V4_154C10 {
    V4c_154C10() { x = y = z = 0.0f; w = 1.0f; }
};

struct S_154C10_Pos {
    V4_154C10 func_00016E40(void);
};

struct S_154C10_Line {
    void func_0014AC30(V4_154C10 *line, int a);
    void func_00133ED0(void);
    float func_00133F10(int a);
};

struct V4k_154C10 {
    float x, y, z, w;
    V4k_154C10(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct S_154C10_Xf {
    V4_154C10 func_00197F70(float *vin);
    void func_00199600(V4_154C10 v);
    void func_00199600(V4k_154C10 v);
    void func_0019AC50(void);
};

struct S_154C10_Mid {
    char pad0[4];
    S_154C10_Xf *f4;
    char pad8[8];
    int f10;
    char pad14[0x20];
    float f34;
    void func_00166C50(const void *p);
    void func_00132D20(void);
};

struct S_154C10_Cam {
    char pad0[0x1a4];
    S_154C10_Mid *f1a4;
};

struct S_154C10_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
    void func_0011CA60(V4_154C10 v);
};

extern "C" int func_001DC974(void);
extern "C" void func_0013E260(void *, int, const void *);
extern "C" void func_0013E1F0(void *, int, const void *, ...);
void func_00011060(void);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
extern float D_002A789C, D_002A78A0, D_002A78A4, D_002A78A8;
extern float D_00275600, D_002756C8;
extern double D_0027F710;
extern char D_00286D8C[], D_00286D7C[], D_00286D68[], D_00286D58[], D_00286D50[];

struct C_00154C10 {
    char pad0[0x24];
    int f24;
    char pad28[4];
    S_154C10_Cam *f2c;
    char pad30[4];
    float f34;
    char pad38[0x10];
    int f48;
    int f4c;
    char pad50[4];
    float f54;
    float f58;
    int f5c;
    char pad60[0x18];
    S_154C10_Line *f78;
    char pad7c[8];
    V4_154C10 f84;
    V4_154C10 f94;
    V4_154C10 fa4;
    V4_154C10 fb4;
    int fc4;
    V4_154C10 fc8;
    char padd8[8];
    S_154C10_Obj *fe0;
    unsigned int fe4;
    float fe8;
    float fec;
    float ff0;
    char padf4[0x14];
    int f108;
    float f10c;
    char pad110[0x10];
    V4_154C10 f120;
    char pad130[0x574 - 0x130];
    int f574;
    int f578;
    int f57c;
    float f580;
    char pad584[4];
    int f588;
    float f58c;
    char pad590[0x6c8 - 0x590];
    int f6c8;
    char pad6cc[0x6ec - 0x6cc];
    int f6ec;
    int f6f0;
    V4_154C10 func_00016E40(void);
    void func_00151F80(float dt);
    void func_001521D0(V4_154C10 *pos, V4_154C10 *out);
    void func_00152300(float dt);
    void func_001528D0(float dt);
    void func_00153350(float dt);
    void func_00153DF0(float dt);
    void func_00157A00(float dt);
    int func_00154C10(float dt);
};

struct C_001554D0 {
    char pad0[0x3c];
    S_001554D0_Owner *f3C;
    char pad40[0x360];
    S_001554D0_Obj *f3A0[2];
    S_001554D0_Obj *f3A8[2];
    char pad3B0[4];
    S_001554D0_Obj *f3B4;
    S_001554D0_Obj *f3B8;
    void func_001554D0(int a0);
};

struct C_001C7310 {
    void func_001C7310(void *param);
};

struct C_00155450 {
    void *vtbl;
    char pad4[0x380];
    int f384, f388, f38C, f390, f394, f398, f39C, f3A0;
    int f3A4, f3A8, f3AC, f3B0, f3B4, f3B8;
    char pad3BC[0x28];
    int f3E4;
    C_00155450 *func_00155450(void *param);
};

int C_00154C10::func_00154C10(float dt)
{
    float t0, t1;
    V4_154C10 v;
    V4_154C10 p[2];
    V4_154C10 pos;
    float ny;

    if (D_002A8490->f124 != 0) {
        return 1;
    }
    if (f120.x == D_002A789C && f120.y == D_002A78A0 && f120.z == D_002A78A4) {
        f120 = func_00016E40();
    }
    func_00151F80(dt);
    f54 += dt;
    f58 += dt;
    if (fe4 > 0) {
        if (func_001DC974() - fe4 > 0x6e) {
            fe4 = 0;
            fe0->v31();
            fe0->v32();
            fe0->v4();
        } else {
            v.x = 1.5f;
            v.y = -2.0f;
            v.z = 6.0f;
            v.w = 1.0f;
            v = f2c->f1a4->f4->func_00197F70(&v.x);
            fe0->func_0011CA60(v);
        }
    }
    func_00153350(dt);
    func_001528D0(dt);
    func_00152300(dt);
    p[0].z = p[0].y = p[0].x = 0.0f;
    p[0].w = 1.0f;
    pos = func_00016E40();
    ny = pos.y - f34;
    v = pos;
    v.y = ny;
    func_001521D0(&v, &p[0]);
    fb4 = v;
    f108 = 0;
    if (ny <= v.y) {
        f2c->f1a4->f4->func_00199600(V4k_154C10(pos.x, v.y + f34, pos.z, pos.w));
        f2c->f1a4->func_00132D20();
        fec = 0;
        f108 = 1;
    }
    if (f108 != 0) {
        fa4 = p[0];
    }
    if (D_002A8490->f18 != 0) {
        if (f6c8 < 0) {
            f6c8 = D_002A8490->f18->f1934++;
        }
        func_0013E260(D_002A8490->f18, f6c8, D_00286D8C);
        func_0013E1F0(D_002A8490->f18, f6c8, D_00286D7C, f108);
        func_0013E1F0(D_002A8490->f18, f6c8, D_00286D68, (double)v.y);
        func_0013E1F0(D_002A8490->f18, f6c8, D_00286D58, (double)(ny - v.y));
    }
    func_00153DF0(dt);
    if (f108 != 0 && (t0 = fe8 * fe8 + fec * fec + ff0 * ff0, t1 = AsmSqrtF(t0)) > D_0027F710) {
        f10c += dt;
        if (f10c > D_00275600) {
            f10c -= D_00275600;
        }
    } else {
        f10c = 0;
    }
    if (func_00016E40().y <= D_002756C8) {
        f2c->f1a4->f4->func_00199600(D_002B9120->f4DC->pts[f24]);
    }
    f4c = f6ec;
    f48 = f6f0;
    f2c->f1a4->f4->func_0019AC50();
    if (f2c->f1a4->f10 != 0 && f574 <= 0 && f578 > 0) {
        f578--;
        f574 = 10;
    }
    D_002B9120->f484->func_0001BE90(f2c, 0, 1, 1);
    f2c->f1a4->func_00166C50(D_00286D50);
    if (f57c != 0 && dt + f2c->f1a4->f34 >= f580) {
        f57c = 0;
    }
    f2c->f1a4->f10 = 1;
    if (*D_002A8490->f2E0 > 1) {
        fc4 = 0;
        V4_154C10 *d = &f94;
        d->x = D_002A789C;
        d->y = D_002A78A0;
        d->z = D_002A78A4;
        d->w = D_002A78A8;
        d = &f84;
        d->x = D_002A789C;
        d->y = D_002A78A0;
        d->z = D_002A78A4;
        d->w = D_002A78A8;
        func_00011FF0(p, 0x10, 2, (void *)func_00011060);
        p[0] = func_00016E40();
        p[1] = ((S_154C10_Pos **)D_002B9120)[0x13a - f24]->func_00016E40();
        fc8 = p[0];
        f78->func_0014AC30(p, 0);
        f78->func_00133ED0();
        f78->func_00133F10(0);
        f5c = fc4;
    }
    if (f588 != 0) {
        f58c += dt;
        if (f58c > D_00275600) {
            D_002A8490->f2A4->func_0004AB90(f24);
            f588 = 0;
            f58c = 0;
        }
    }
    if (*D_002A8490->f2E0 == 1) {
        D_002A8490->f2A4->f158->func_001C4D50(0x1f4);
        f120 = func_00016E40();
        func_00157A00(dt);
    }
}

void func_001553E0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_00155450 *C_00155450::func_00155450(void *param)
{
    ((C_001C7310 *)this)->func_001C7310(param);
    f384 = 0;
    f388 = 0;
    f38C = 0;
    f390 = 0;
    f394 = 0;
    f398 = 0;
    f39C = 0;
    f3A0 = 0;
    f3A8 = 0;
    f3A4 = 0;
    f3AC = 0;
    f3B0 = 0;
    f3B4 = 0;
    f3B8 = 0;
    f3E4 = 0;
    vtbl = (void *)&D_00286DD4;
    return this;
}

void C_001554D0::func_001554D0(int a0)
{
    char buf1[0x104];
    char buf2[0x104];
    char name[0x104];
    void *mem;
    int off;
    int k;

    f3C->f4->func_0019ABA0(D_002B9120->f4A8[D_002B9120->f348], 2);
    CopyPathP_001554D0(buf1, D_002A5EA0);
    CopyPathP_001554D0(buf2, D_002A60B0);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    CopyPathP_001554D0(D_002A5EA0, buf1);
    CopyPathP_001554D0(D_002A60B0, buf2);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x20c);
    f3B4 = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f3B4->v4(D_002758F0, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    f3B8 = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f3B8->v4(D_002758E4, 1, 1, 0, 0);
    k = 0;
    off = 0x3a0;
    do {
        k++;
        func_001ADCC0(name, 0x104, D_002758D8, k);
        mem = func_001E8A44(0x20c);
        *(S_001554D0_Obj **)((char *)this + off) = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        (*(S_001554D0_Obj **)((char *)this + off))->v4(name, 1, 1, 0, 0);
        off += 4;
    } while (off < 0x3a8);
    k = 0;
    off = 0x3a8;
    do {
        k++;
        func_001ADCC0(name, 0x104, D_002758CC, k);
        mem = func_001E8A44(0x20c);
        *(S_001554D0_Obj **)((char *)this + off) = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        (*(S_001554D0_Obj **)((char *)this + off))->v4(name, 1, 1, 0, 0);
        off += 4;
    } while (off < 0x3b0);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
}
static __forceinline void CopyPathP_001554D0(char *dst, const char *src)
{
    int slen = strlen(src);
    int lim = 0x103;
    int n = AsmMinI(lim, slen);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}
