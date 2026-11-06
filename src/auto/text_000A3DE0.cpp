/* 9 functions from 0x000A3DE0 to 0x000A4D30, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern "C" char * __cdecl strcat(char *, const char *);
extern char D_0027B524[2];
extern char D_0027B520[3];
extern char D_0027B51C[2];
extern char D_0027B518[3];
extern char D_0027B514[2];
extern char D_0027B510[3];
extern char D_00279258[2];
extern char D_0027B50C[3];
extern char D_0027B508[2];

extern int D_0027B1BC;

#define F(T, o) (*(T *)((char *)this + (o)))
extern char D_0027B4F0[], D_0027B4D8[], D_0027B4B8[], D_0027B4A4[], D_0027B490[], D_0027B47C[], D_0027B464[], D_0027B44C[], D_0027B434[], D_0027B41C[], D_0027B404[], D_0027B3EC[], D_0027B3D4[], D_0027B3BC[], D_0027B39C[], D_0027B380[], D_0027B364[], D_0027B344[], D_0027B324[], D_0027B30C[], D_0027B2F4[], D_0027B2E0[];

#define F(T, o) (*(T *)((char *)this + (o)))
struct C_000A4570 { C_000A4570 *func_000A4570(void); };
extern char D_0027B4F0[], D_0027B4D8[], D_0027B4B8[], D_0027B4A4[], D_0027B490[], D_0027B47C[], D_0027B464[], D_0027B44C[], D_0027B434[], D_0027B41C[], D_0027B404[], D_0027B3EC[], D_0027B3D4[], D_0027B3BC[], D_0027B39C[], D_0027B380[], D_0027B364[], D_0027B344[], D_0027B324[], D_0027B30C[], D_0027B2F4[], D_0027B2E0[];

/* BmxPlayerStart */
struct C_000A3DE0 {
    C_000A3DE0 *func_000A3DE0(void);
    void func_00185790(void);
};

struct S2_000A4AF0 { u16 a; };
struct S3_000A4AF0 { u16 a; u8 b; };

#define APPEND2(D) { char *p = buf - 1; do ; while (*++p); *(S2_000A4AF0 *)p = *(S2_000A4AF0 *)(D); }
#define APPEND3(D) { char *p = buf - 1; do ; while (*++p); *(u16 *)p = *(u16 *)(D); p[2] = (D)[2]; }

extern char D_002A60B0[];
extern char D_002A5EA0[];
extern char D_002A46E8[];
extern char D_002A4C10[];
extern char D_002A5660[];
extern char D_002A4A00[];
extern char D_00276F28[];
extern char D_0027B208[];
extern char D_0027B1FC[];
extern char D_0027B1E4[];
extern char D_0027B1CC[];
extern char D_0027B1C0[];
extern char D_002A2734[];
extern char D_002A2764[];
extern char D_0027B25C[];
extern char D_0027B244[];
extern char D_0027B22C[];
extern char D_0027B214[];

struct C_000A4080_Stream {
    int func_00169710(const char *name);
    void func_00168CB0(char *buf, const char *key, void *dst);
    void func_00168C20(const char *key, int def, void *dst);
};

struct BmxPlayerStart {
    char pad0[0x24];
    char unk24[0x80];
    char unkA4[0x80];
    int unk124;
    int func_000A4080(C_000A4080_Stream *stream);
};

struct C_000A4150_flags {
    char pad0[0x180];
    u8 unk180;
};

struct C_000A4150_obj {
    void *vtbl;
    C_000A4150_flags *unk4;
    C_000A4150_obj *func_00164440(int a, int b);
    void func_001673B0(char *path, int a, int b, int c, int d);
};

struct C_000A4150 {
    C_000A4150_obj *unk0;
    int func_000A4150(char *a1);
    int func_000A4400(char *a1);
};

struct C_000A4500_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_00108370();
    void func_001083E0();
};

struct C_000A4500 {
    char pad0[0x1A8];
    C_000A4500_Obj *unk1A8[8];
    int unk1C8[8];
    void func_000A4500(int param_1, int param_2);
};

struct DXRenderableObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35(const char *name, int a, int b);
    char pad4[0x19F];
    u8 f1a3;
    DXRenderableObject *func_00143580(int a);
};

struct C_000A4250 {
    DXRenderableObject *unk0;
    DXRenderableObject *unk4;
    DXRenderableObject *unk8;
    DXRenderableObject *unkC;
    int func_000A4250(void);
};

struct C_000A43E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_000A43E0* func_000A43E0(void);
};


C_000A3DE0 *C_000A3DE0::func_000A3DE0(void)
{
    struct Q4 { int x, y, z, w; };
    int *u;
    int *p;
    int i;
    func_00185790();
    u = (int *)this;
    u[0] = (int)&D_0027B1BC;
    p = &u[0x24 / 4];
    i = 8;
    do { p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; p += 4; } while (--i);
    p = &u[0xa4 / 4];
    i = 8;
    do { p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; p += 4; } while (--i);
    for (i = 0; i < 8; i++) {
        ((Q4 *)&u[0x24 / 4])[i] = *(Q4 *)D_002A2734;
        ((Q4 *)&u[0xa4 / 4])[i] = *(Q4 *)D_002A2764;
    }
    u[0x124 / 4] = 0;
    return this;
}

int BmxPlayerStart::func_000A4080(C_000A4080_Stream *stream)
{
    char buf[0x104];
    char *p;
    int i;
    int n;

    if (!stream->func_00169710(D_0027B1FC)) {
        return 0;
    }
    i = 1;
    p = unkA4;
    n = 8;
    do {
        func_001ADCC0(buf, 0x104, D_0027B1E4, i);
        stream->func_00168CB0(buf, D_002A2734, p - 0x80);
        func_001ADCC0(buf, 0x104, D_0027B1CC, i);
        stream->func_00168CB0(buf, D_002A2764, p);
        i++;
        p += 0x10;
    } while (--n);
    stream->func_00168C20(D_0027B1C0, 0, &unk124);
    return 1;
}

int C_000A4150::func_000A4150(char *a1) {
    char buf[0x104];
    C_000A4150_obj *obj;

    func_001ADCC0(D_002A60B0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A5EA0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A46E8, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A4C10, 0x104, D_00276F28, D_002A5660);
    if (!unk0) {
        obj = (C_000A4150_obj *)func_001E8A44(0x244);
        unk0 = obj ? obj->func_00164440(1, 1) : 0;
        func_001ADCC0(buf, 0x104, D_0027B208, D_002A5660, a1);
        unk0->func_001673B0(buf, 0, 1, 1, 1);
        unk0->unk4->unk180 |= 8;
        unk0->unk4->unk180 |= 0x10;
    }
    return 1;
}

int C_000A4250::func_000A4250(void) {
    func_001ADCC0(D_002A60B0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A5EA0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A46E8, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A4C10, 0x104, D_00276F28, D_002A5660);
    if (!unk0) {
        DXRenderableObject *obj = (DXRenderableObject *)func_001E8A44(0x1e0);
        unk0 = obj ? obj->func_00143580(1) : 0;
        unk0->v35(D_0027B25C, 0, 0);
        unk0->f1a3 &= 0xf7;
    }
    if (!unk4) {
        DXRenderableObject *obj = (DXRenderableObject *)func_001E8A44(0x1e0);
        unk4 = obj ? obj->func_00143580(1) : 0;
        unk4->v35(D_0027B244, 0, 0);
        unk4->f1a3 &= 0xf7;
    }
    if (!unk8) {
        DXRenderableObject *obj = (DXRenderableObject *)func_001E8A44(0x1e0);
        unk8 = obj ? obj->func_00143580(1) : 0;
        unk8->v35(D_0027B22C, 0, 0);
        unk8->f1a3 &= 0xf7;
    }
    if (!unkC) {
        DXRenderableObject *obj = (DXRenderableObject *)func_001E8A44(0x1e0);
        unkC = obj ? obj->func_00143580(1) : 0;
        unkC->v35(D_0027B214, 0, 1);
        unkC->f1a3 &= 0xf7;
    }
    return 1;
}

C_000A43E0* C_000A43E0::func_000A43E0(void) {
    unk0 = 0;
    unk4 = 1;
    unk8 = 1;
    unkC = 1;
    return this;
}

int C_000A4150::func_000A4400(char *a1) {
    char buf[0x104];
    C_000A4150_obj *obj;

    func_001ADCC0(D_002A60B0, 0x104, D_00276F28, D_002A4A00);
    func_001ADCC0(D_002A5EA0, 0x104, D_00276F28, D_002A4A00);
    func_001ADCC0(D_002A46E8, 0x104, D_00276F28, D_002A4A00);
    func_001ADCC0(D_002A4C10, 0x104, D_00276F28, D_002A4A00);
    if (!unk0) {
        obj = (C_000A4150_obj *)func_001E8A44(0x244);
        unk0 = obj ? obj->func_00164440(1, 1) : 0;
        func_001ADCC0(buf, 0x104, D_0027B208, D_002A4A00, a1);
        unk0->func_001673B0(buf, 0, 1, 1, 1);
        unk0->unk4->unk180 |= 8;
        unk0->unk4->unk180 |= 0x10;
    }
    return 1;
}

void C_000A4500::func_000A4500(int param_1, int param_2)
{
    if (param_1 == 0) {
        if (unk1C8[param_2] == 0) {
            unk1A8[param_2]->func_00108370();
            unk1A8[param_2]->v4();
            unk1C8[param_2] = 1;
        }
    } else if (unk1C8[param_2] != 0) {
        unk1A8[param_2]->func_001083E0();
        unk1A8[param_2]->v6();
        unk1C8[param_2] = 0;
    }
}

