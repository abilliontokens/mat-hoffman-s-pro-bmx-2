/* 10 functions from 0x000A0260 to 0x000A11A0, found by Ghidra. */
#include "common.h"
struct C_000A09F0 {
    char pad0[0x18];
    int unk18;
    int *unk1C;
    int unk20;
    int unk24;
    C_000A09F0* func_000A09F0(void);
    void func_000A0A10(void);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_00132E20_000A0260 {
    int func_00132E20(char *name);
};

extern C_00132E20_000A0260 *D_002A4334;
extern char D_00276688[];
extern char D_0027ADEC[];
extern char D_0027ADE4[];
extern char D_0027ADDC[];
extern char D_0027ADD4[];
extern char D_0027ADD0[];
extern int D_002B9118;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B911C;
extern int D_002B9114;
extern int D_002B9110;

struct C_001702B0_000A0260 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual int v27(char *name, int a);
    C_001702B0_000A0260 *func_001702B0(int a);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern "C" char *__cdecl strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)

extern char D_002A5558[];
extern char D_002A5348[];
extern char D_002A5450[];
extern char D_00275678[];
extern char D_002764F0[];

struct C_000A0AE0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    char pad4[0x384];        /* 0x04 */
    void *f388;              /* 0x388 */
    char pad38C[0xFC];       /* 0x38C */
    C_001702B0_000A0260 *f488; /* 0x488 */
    char pad48C[0xC4];       /* 0x48C */
    int f550;                /* 0x550 */
    C_000A0AE0 *func_000A0AE0(int a);
    int func_000A10B0(int a);
};

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct S_000A08D0 {
    f32 f0, f1, f2, f3;
};

struct S_000A08D0_5 {
    f32 f0, f1, f2, f3, f4;
};

static S_000A08D0_5 *init_000A08D0(S_000A08D0_5 *p, f32 f1) {
    p->f0 = 0.0f;
    p->f1 = f1;
    p->f3 = 3.402823466e+38f;
    p->f4 = -3.402823466e+38f;
    p->f2 = 1.0f;
    return p;
}

struct C_000A08D0 {
    char pad0[0x38];
    int f38;
    char pad3C[0xA0];
    void *fDC;
    void *fE0;
    void func_000A00A0(S_000A08D0 s, int a5);
    int func_000A08D0(S_000A08D0 s, int a5);
};

struct C_000A0A80 {
    char pad0[0x4E0];
    int f4E0;
    char pad4E4[0x48];
    int f52C;
    int f530;
    int f534;
    int f538;
    int f53C;
    int f540;
    char pad544[0x4];
    int f548;
    int f54C;
    char pad550[0x8];
    int f558;
    char pad55C[0x8];
    int f564;
    int f568;
    int f56C;
    void func_000A0A80(void);
    void func_00182B00(void);
};


int C_000A08D0::func_000A08D0(S_000A08D0 s, int a5) {
    S_000A08D0_5 *p = (S_000A08D0_5 *)func_001E8A44(0x14);
    fDC = p ? init_000A08D0(p, 0.02f) : 0;
    p = (S_000A08D0_5 *)func_001E8A44(0x14);
    fE0 = p ? init_000A08D0(p, 0.2f) : 0;
    func_000A00A0(s, a5);
    f38 = 1;
    return 1;
}

C_000A09F0* C_000A09F0::func_000A09F0(void) {
    unk18 = 0;
    unk1C = 0;
    unk20 = 0;
    unk24 = 0;
    return this;
}

void C_000A09F0::func_000A0A10(void) {
    if (unk20) {
        func_001E891B((void *)unk20);
        unk20 = 0;
    }
    if (unk1C) {
        for (int i = 0; i < unk18; i++) {
            if (unk1C[i]) {
                func_001E891B((void *)unk1C[i]);
                unk1C[i] = 0;
            }
        }
        func_001E891B(unk1C);
        unk1C = 0;
    }
}

void C_000A0A80::func_000A0A80(void) {
    f4E0 = 0;
    f530 = 0;
    f534 = 0;
    f564 = 0;
    f568 = 0;
    f56C = 0;
    f52C = 0;
    f538 = 0;
    f53C = 0;
    f540 = 0;
    f548 = 0;
    f54C = 0;
    f558 = 0;
    func_00182B00();
}

C_000A0AE0 *C_000A0AE0::func_000A0AE0(int a)
{
    v28();
    D_002B9118 = D_002A4334->func_00132E20(D_00276688);
    D_002B9108 = D_002A4334->func_00132E20(D_0027ADEC);
    D_002B910C = D_002A4334->func_00132E20(D_0027ADE4);
    D_002B911C = D_002A4334->func_00132E20(D_0027ADDC);
    D_002B9114 = D_002A4334->func_00132E20(D_0027ADD4);
    D_002B9110 = D_002A4334->func_00132E20(D_0027ADD0);
    f550 = a;
    return this;
}

void func_000A0B80(void) {
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
}

int C_000A0AE0::func_000A10B0(int a)
{
    return a;
}

