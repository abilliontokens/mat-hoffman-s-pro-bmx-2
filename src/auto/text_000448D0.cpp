/* 1 function from 0x000448D0 to 0x00049470, found by Ghidra. */
#include "common.h"

#include <xmmintrin.h>

struct V4_000448D0 {
    float x, y, z, w;
    V4_000448D0() { x = y = z = 0.0f; w = 1.0f; }
};
struct Vt_000448D0 {
    virtual void v0(const char *, int);
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5();
};
struct Dev_000448D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(int); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
};
struct Dev6_000448D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6();
    char padB4[0xb4 - 4];
    Dev6_000448D0 *fB4;
};
struct Q1A8_000448D0 {
    void func_00108370(void);
    void func_001083E0(void);
};
struct Q4E0_000448D0 {
    char pad0[0x1a8];
    Q1A8_000448D0 *f1a8;
    void func_000A4500(int, int);
};
struct Table_448D0 { char pad0[0x38]; int f38,f3c,f40,f44; char pad48[0x48-0x48]; };
struct Elem_448D0 { char pad0[0x358]; int f358,f35c,f360; };
struct Cam_448D0 {
    int f0,f4;
    void func_00194E60(V4_000448D0);
    void func_00194EB0(V4_000448D0);
    void func_00194F60(V4_000448D0);
    void func_00194F90(float);
};
struct Holder_448D0 { char pad0[0x5c]; Cam_448D0 *f5c; };
struct Object_448D0 {
    char pad0[0x28];
    void func_00198390(); void func_001983A0();
    void func_0019A8C0(V4_000448D0*,V4_000448D0*);
};
struct Base_448D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    Object_448D0 *f4;
};
struct Nested_448D0 { char pad0[0x1a4]; Base_448D0 *f1a4; };
struct Sub_448D0 { char pad0[0x24]; Object_448D0 *f24; Nested_448D0 *f28; Object_448D0 *f2c; int f30; Holder_448D0 *f34; float f38; };
struct Timer_448D0 { void func_001C4D10(int,int); };
extern float D_00275AEC,D_0027653C,D_00276220,D_00276D50;
extern double D_002766C8;
extern float D_002A14E4[4];
extern char D_00276D54[];
int func_001E8AF0(void*,char*);
void func_00034820(float*,float*);
struct Q64_000448D0 {
    char pad0[0x4e0];
    Q4E0_000448D0 *f4e0;
    char pad4e4[0x5a4-0x4e4];
    Table_448D0 *f5a4;
    int f5a8;
    Elem_448D0 **f5ac;
};
struct Q2FC_000448D0 {
    void func_00095200(int);
};
struct Q2E0_000448D0 {
    char pad0[0x190];
    int f190;
    char pad194[0x2fc - 0x194];
    Q2FC_000448D0 *f2fc;
};
struct G8490_000448D0 {
    char pad0[4];
    Dev6_000448D0 *f4;
    char pad8[0x230 - 8];
    unsigned int f230;
    int f234;
    char pad238[0x2e0 - 0x238];
    Q2E0_000448D0 *f2e0;
    int f2e4;
};
struct G829C_000448D0 {
    void func_001616F0(void);
};
struct GFDB8_000448D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(int); virtual void v8();
    char pad4[0x30 - 4];
    int f30;
};
struct G7B8_000448D0 {
    char pad0[8];
    int f8;
};
struct Node_000448D0 {
    void func_0008A060(void);
    void func_0008A910(void);
};
struct Obj54_000448D0 {
    Obj54_000448D0 *func_001D1BB0(void);
    virtual void v0(const char *, int);
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5();
};
struct C_000448D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33();
    char pad4[0x64 - 4];
    Q64_000448D0 *f64;
    char pad68[0x1d4 - 0x68];
    Obj54_000448D0 *f1d4;
    char pad1d8[0x550 - 0x1d8];
    Node_000448D0 *f550;
    Node_000448D0 *f554;
    void func_00012140(void);
    int func_001D7D00(void);
    void func_001D3F50(void);
    void func_00033680(void);
    void func_00042260(void);
    void func_000321C0(void);
    void func_0003AD50(void);
    void func_000448D0(void);
};
extern G8490_000448D0 *D_002A8490;
extern GFDB8_000448D0 *D_002EFDB8;
extern G7B8_000448D0 *D_002F07B8;
extern Dev_000448D0 *D_002F0670;
extern G829C_000448D0 *D_002A829C;
extern char D_00276C90[];
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[];
void func_00012140(void);
void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);

void C_000448D0::func_000448D0(void)
{
    void *mem;

    D_002A8490->f234 = 1;
    func_00012140();
    mem = func_001E8A44(0x54);
    f1d4 = mem ? ((Obj54_000448D0 *)mem)->func_001D1BB0() : 0;
    f1d4->v0(D_00276C90, 0);
    f1d4->v5();
    func_001D3F50();
    if (func_001D7D00() == 0) return;
    func_00033680();
    func_00042260();
    D_002EFDB8->f30 = 1;
    D_002F07B8->f8 = 1;
    func_00012140();
    v33();
    if (D_002A8490->f230 & 0x20) {
        D_002F0670->v32();
    }
    D_002A8490->f4->fB4->v6();
    if (D_002A8490->f2e4 == 0) {
        D_002A8490->f2e0->f2fc->func_00095200(0x13);
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    D_002A829C->func_001616F0();
    D_002A8490->f4->v6();
    if (D_002A8490->f2e0->f190 == 3) {
        f64->f4e0->f1a8->func_00108370();
        f64->f4e0->f1a8->func_001083E0();
        f64->f4e0->func_000A4500(0, 0);
    }
    func_000321C0();
    f550->func_0008A060();
    f554->func_0008A910();
    func_0003AD50();
}
