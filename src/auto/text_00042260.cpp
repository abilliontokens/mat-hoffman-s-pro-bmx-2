/* 1 function from 0x00042260 to 0x00042840, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
void *func_001E8A44(unsigned int);
void func_001E891B(void *);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int func_001E8AF0(const char *s, const char *pat);
extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void func_00037840();

extern char D_002A5870[], D_00276FC8[], D_00276FBC[], D_002A60B0[], D_002A5FA8[], D_00275678[];
extern char D_00276C08[], D_002A47F0[], D_002A48F8[], D_00275630[], D_00276FAC[], D_00276B9C[];
extern char D_00276F78[], D_00276F9C[];
extern int D_00280000;

struct S16_42260 { int a, b, c, d; };
struct S36_42260 { int f[9]; };
extern S16_42260 D_002A14D4;
extern int D_002A14D8, D_002A14DC, D_002A14E0;

struct C_00192900 {
    char pad0[0x3c];
    int f3C;
    C_00192900 *func_00192900(int a);
    void func_00192A90(void *a);
    void func_00192AC0(void *a);
};
struct C_001923F0 { C_001923F0 *func_001923F0(int n); };
struct C_001C3E50 {
    C_001C3E50 *func_001C3E50(int a);
    void func_001C3EA0(int a);
    void func_001C4A70();
    void func_001C4C30();
};
struct C_001D35E0 {
    virtual void v0(); virtual void v1(); virtual void v2(char *, int, int);
    virtual void v3(char *, int, int); virtual void v4(); virtual void v5(); virtual void v6();
    void func_001D35E0();
};
struct C_001A2C00 {
    C_001A2C00 *func_001A2C00(int a, int b, int c, int d);
    void func_001A23F0(S36_42260 s0, S16_42260 s1, S16_42260 s2, int a17, int a18, int a19, int a20, int a21);
    void func_001A4640(char *a, char *b, int c);
};
struct C_002BEAAC_42260 {
    int func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_0013B260(int a);
    void func_0013DFF0(char *name, int a);
    void func_0013C1D0(int *a);
};
extern C_002BEAAC_42260 *D_002BEAAC;
struct C_00012140 { void func_00012140(); };
struct S_42260_Item { int f0; int f4; struct C_00199B00_42260 *f8; };
struct C_00199B00_42260 {
    S16_42260 *func_00199B00(S16_42260 *out, int a);
    void func_00197B40(void *a, void *b);
};
struct S_42260_Ent { char pad0[0x314]; char s314[0x32]; };
struct S_42260_Sub { char pad0[0x47c]; int f47C; };
struct C_000AF900 {
    char pad0[0x4c0];
    int f4C0;
    char pad4C4[0xe0];
    S_42260_Sub *f5A4;
    int f5A8;
    S_42260_Ent **f5AC;
    int func_000AF900(void *a);
    void func_000B03A0(int *a, void *b, void (*c)());
};
struct S_2A8490_2E0 { char pad0[0x2c4]; int f2C4; };
struct S_2A8490 { char pad0[4]; int f4; char pad8[0x2d8]; S_2A8490_2E0 *f2E0; };
extern S_2A8490 *D_002A8490;

struct C_00042260 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E(); virtual void v1F();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24();
    char pad4[0x60];
    C_000AF900 *f64;
    char pad68[0xf0];
    C_001C3E50 *f158;
    char pad15C[0x74];
    C_00012140 *f1D0;
    C_001D35E0 *f1D4;
    char pad1D8[0xb0];
    u8 f288;
    char pad289[7];
    int f290;
    S16_42260 f294;
    char pad2A4[0x10];
    char f2B4[0x10];
    char pad2C4[0x164];
    char f428[0x30];
    int f458;
    int f45C;
    int f460;
    char pad464[0x38];
    int *f49C;
    char pad4A0[0x9c];
    C_001A2C00 *f53C;
    char pad540[4];
    C_001923F0 *f544;
    C_001923F0 *f548;
    C_00192900 *f54C;
    char pad550[0x14];
    S_42260_Item *f564;
    int f568;
    int f56C;
    int f570;
    char pad574[0x2c];
    int f5A0;
    S_42260_Item **f5A4;
    char pad5A8[0xc];
    char f5B4[4];
    int func_00042260();
    void func_0003BC90();
    int func_000392B0();
};

int C_00042260::func_00042260()
{
    C_00042260 *t;
    char buf[0x104];
    S36_42260 s;
    S16_42260 tmp;
    void *mem;

    mem = func_001E8A44(0xa0);
    this->f54C = mem ? ((C_00192900 *)mem)->func_00192900(1) : 0;
    t = this; t->f54C->f3C = 0;
    mem = func_001E8A44(0x44);
    this->f544 = mem ? ((C_001923F0 *)mem)->func_001923F0(0x400) : 0;
    mem = func_001E8A44(0x44);
    this->f548 = mem ? ((C_001923F0 *)mem)->func_001923F0(0x400) : 0;
    t = this; t->f54C->func_00192A90(t->f544);
    t = this; t->f54C->func_00192AC0(t->f548);
    func_001ADCC0(buf, 0x104, D_00276FC8, D_002A5870);
    if (D_002BEAAC->func_0013D780(buf, 0, 0, 0, 0, 0, 0, 0))
        D_002BEAAC->func_0013B260(0);
    int lim = 0x103;
    int cnt = AsmMinI(lim, 8);
    func_001E8920(D_002A60B0, D_00276FBC, cnt);
    D_002A60B0[cnt] = 0;
    mem = func_001E8A44(0x70);
    this->f158 = mem ? ((C_001C3E50 *)mem)->func_001C3E50(1) : 0;
    this->f158->func_001C3EA0(1);
    this->f158->func_001C4A70();
    this->f158->func_001C4C30();
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    this->v24();
    this->v1F();
    this->f1D4->v3(D_00276C08, 0x19c, 0x10);
    this->f1D4->v2(D_00276C08, 0x140, 0x186);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x1f0);
    this->f53C = mem ? ((C_001A2C00 *)mem)->func_001A2C00(D_002A8490->f4, this->f64->f4C0, 6, 1) : 0;
    S16_42260 v;
    v.a = D_002A14D4.a;
    v.b = D_002A14D8;
    v.c = D_002A14DC;
    v.d = D_002A14E0;
    this->f53C->func_001A23F0(s, v, v, 2, 0x41a00000, 0x42c80000, 0, 1);
    this->f53C->func_001A4640(D_00276FAC, D_00275630, -1);
    D_002BEAAC->func_0013DFF0(buf, 1);
    t = this;
    if (t->f1D4) {
        t->f1D4->v6();
        C_001D35E0 *p = this->f1D4;
        if (p) {
            p->func_001D35E0();
            func_001E891B(p);
        }
        this->f1D4 = 0;
    }
    this->f1D0->func_00012140();
    func_001ADCC0(buf, 0x104, D_00276B9C, D_002A5870);
    D_002BEAAC->func_0013C1D0(&D_00280000);
    if (D_002BEAAC->func_0013D780(buf, 0, 0, 0, 0, 0, 0, 0))
        D_002BEAAC->func_0013B260(0);
    t = this;
    if (!t->f64->func_000AF900(t->f428))
        return 0;
    this->func_0003BC90();
    t = this;
    mem = func_001E8A44(t->f460 * t->f45C * t->f458 * 4);
    this->f49C = (int *)mem;
    memset(this->f49C, 0, this->f460 * this->f45C * this->f458 * 4);
    if (D_002A8490->f2E0->f2C4) {
        t = this;
        int start = t->f5A0;
        t->f64->func_000B03A0(&t->f5A0, t->f5B4, func_00037840);
        for (int i = start; t = this, i < t->f5A0; i++) {
            S_42260_Item *item = (t->f5A0 > 0 && t->f5A4 && i < t->f5A0) ? t->f5A4[i] : 0;
            t->f564 = item;
            if (item->f0 == 0 || (item->f0 > 2 && item->f0 <= 5)) {
                this->func_000392B0();
                if (func_001E8AF0((char *)item->f8 + 0x28, D_00276F78)) {
                    t = this;
                    if (t->f290 == 0) {
                        t->f290 = 1;
                        t = this;
                        S16_42260 *r = t->f564->f8->func_00199B00(&tmp, 0);
                        this->f294 = *r;
                        t = this; t->f564->f8->func_00197B40(t->pad2A4, t->f2B4);
                    }
                    t = this;
                    t->f288++;
                    C_00042260 *u = this;
                    C_000AF900 *m = u->f64;
                    int k = m->f5A4->f47C;
                    S_42260_Ent *e = (m->f5A8 > 0 && m->f5AC && k < m->f5A8) ? m->f5AC[k] : 0;
                    func_001ADCC0(e->s314, 0x32, D_00276F9C, u->f288 + 1);
                }
                this->f564 = 0;
            }
        }
    }
    this->f564 = 0;
    t = this; t->f568 = 0;
    t = this; t->f56C = 0;
    t = this; t->f570 = 0;
    return 1;
}
