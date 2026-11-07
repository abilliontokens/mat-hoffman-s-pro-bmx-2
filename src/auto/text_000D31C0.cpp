/* 1 function from 0x000D31C0 to 0x000D3DA0, found by Ghidra. */
#include "common.h"
extern float D_0027DE74;
extern float D_002755E8;

/* raw field access: M(type, base, byte offset) */
#define M(T, base, off) (*(T *)((char *)(base) + (off)))
#define D31_MANAGER (D_002A8490->f2e0)
#define D31_PROFILE (D31_MANAGER->f2c0->func_0005C020(D31_MANAGER->f2d8))
extern "C" char *strcpy(char *, const char *);
#pragma intrinsic(strcpy)
extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
extern float D_00278C48;

struct S_000D31C0_Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual int v27();
    virtual void v28(int a, int b);
};

struct S_000D31C0_Dev {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};
extern S_000D31C0_Dev *D_002EFDB8;

struct C_000301D0 { int func_000301D0(); };
struct C_000BC5D0 { void func_000BC5D0(void *a, int b); int func_000B5870(); };
struct C_0005B3F0 { void func_0005B3F0(); };
struct C_0005C020;
struct S_000D31C0_Mgr {
    char pad0[0x2c0];
    C_0005C020 *f2c0;
    char pad2c4[0x14];
    int f2d8;
};
struct S_000D31C0_Glob { char pad0[0x2e0]; S_000D31C0_Mgr *f2e0; };
extern S_000D31C0_Glob *D_002A8490;
struct C_0005C020 { int *func_0005C020(int a); };
struct C_001617F0 { int func_001617F0(void *buf, int a); };
extern C_001617F0 *D_002A829C;
struct S_000D31C0_Item { char pad0[0x1b8]; int **f1b8; void func_00182020(int a, int b); };
struct S_000D31C0_Name { char c[31]; };
extern S_000D31C0_Name D_0027F1E8;
extern S_000D31C0_Name D_0027F1C8;

struct C_000D31C0 {
    void func_000D31C0(float dt);
    void func_000D2860();
    void func_001BED00(float dt);
};

void C_000D31C0::func_000D31C0(float dt)
{
    char *self = (char *)this;
    char *g = M(char *, self, 0x124);
    int k;
    int score;

    if (M(int, self, 0x28c) != 0 || M(int, self, 0x290) != 0 || M(int, self, 0x2bc) != 0 || M(int, self, 0x294) != 0) {
        M(float, self, 0x2a4) = dt + M(float, self, 0x2a4);
        if (M(float, self, 0x2a4) >= D_0027DE74) {
            if (M(S_000D31C0_Vt *, M(char *, g, 0x24), 0x30)->v27() == 0) {
                if (M(int, g, 0x2a4) != 0) {
                    if (M(int, self, 0x2bc) != 0) {
                        M(int, self, 0x2bc) = 0;
                        M(int, self, 0x3d4) = 0;
                        goto after_timer;
                    }
                    if (M(int, self, 0x28c) != 0 || M(int, self, 0x290) != 0 || M(int, self, 0x294) != 0) {
                        func_000D2860();
                    }
                } else if (M(int, self, 0x290) != 0 || M(int, self, 0x2bc) != 0 || M(int, self, 0x294) != 0) {
                    func_000D2860();
                }
                M(int, self, 0x298) = 1;
                ((S_000D31C0_Vt *)self)->v28(M(int, self, 0x2a0), M(int, self, 0x29c));
                M(int, self, 0x2a4) = 0;
                M(int, self, 0x28c) = 0;
            }
        }
    }
after_timer:
    M(float, self, 0x420) = dt + M(float, self, 0x420);
    if (M(int, self, 0x3dc) != 0) {
        M(float, self, 0x3c8) = dt + M(float, self, 0x3c8);
        if (M(float, self, 0x3c8) >= D_002755E8) {
            if (M(C_000301D0 *, M(char *, g, 0x25c), 0x74)->func_000301D0() == 0) {
                if (M(int, self, 0x3cc) != 0 || M(int, self, 0x41c) != 0) {
                    if (M(int, self, 0x41c) == 1) {
                        M(int, self, 0x280) = 1;
                    }
                    M(C_000BC5D0 *, g, 0x270)->func_000BC5D0(self + 0x2c4, 0);
                    M(int, self, 0x3cc) = 0;
                    M(int, self, 0x420) = 0;
                    M(int, self, 0x41c) = 0;
                }
            }
        }
    }
    if (M(int, self, 0x1fec) != 0 && M(C_000BC5D0 *, g, 0x270)->func_000B5870() != 0 && M(float, self, 0x420) >= D_002755E8) {
        M(int, self, 0x1fec) = 0;
        func_000D2860();
    }
    M(C_0005B3F0 *, D_002A8490, 0x2e0)->func_0005B3F0();
    M(int, M(char *, self, 0x124), 0x138) = 8;
    if (M(int, self, 0x2018) != M(unsigned char, M(char *, self, 0x284), 0x3b)) {
        if (M(float, self, 0x2024) >= M(float, self, 0x2028)) {
            M(int, self, 0x2020) = M(int, self, 0x2018);
        } else {
            M(int, self, 0x2020) = (int)((float)(M(int, self, 0x2018) - M(int, self, 0x201c)) * (M(float, self, 0x2024) / M(float, self, 0x2028))) + M(int, self, 0x201c);
            M(float, self, 0x2024) = dt + M(float, self, 0x2024);
        }
    }
    if (M(int, self, 0x410) != 0) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
        for (k = 0; k < 10; k++) {
            S_000D31C0_Name buf;
            int a;
            int b;
            S_000D31C0_Item *item = M(S_000D31C0_Item *, self, 0x2048 + k * 4);
            buf = (M(int, self, 0x424 + k * 4) == 1) ? D_0027F1E8 : D_0027F1C8;
            a = **item->f1b8;
            b = D_002A829C->func_001617F0(&buf, 1);
            M(S_000D31C0_Item *, self, 0x2048 + k * 4)->func_00182020(a, b);
        }
        score = M(C_0005C020 *, D_002A8490->f2e0, 0x2c0)->func_0005C020(D_002A8490->f2e0->f2d8)[1];
    }
}
