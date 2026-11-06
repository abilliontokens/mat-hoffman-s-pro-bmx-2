/* 3 functions from 0x0005A0E0 to 0x0005A8F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_135D00 { void func_00135D00(int a, int b); };
struct C_160C00 { C_160C00 *func_00160C00(void); void func_00160D30(void *a, int b, int c); void func_00161040(int a); };
struct C_VT { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(char *s); };
struct C_001BC7F0 { void func_001BC7F0(int a); };
struct C_0005A0E0 {
    void *vtbl;
    int unk_4;
    char *unk_8;
    char pad[0x2A0];
    void *unk_2AC;
    char pad2[0x38];
    C_160C00 *unk_2E8;
    char pad3[0x10];
    int unk_2FC;
    int func_001D0E80(void);
    int func_0005A0E0(void);
};
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_0027808C[], D_00278064[];
extern C_VT *D_002A829C;
void *func_001E8A44(int);
void func_001BC7F0(void *, int);
struct C_Dlg { virtual void v0(char *s, int n); virtual void v4(); virtual void v8(char *s, int x, int y); virtual void vC(char *s, int w, int h); virtual void v10(); virtual void v14(); };
struct C_Dev {
    void func_0013C1D0(int a);
    void func_00086130(int a);
    int func_0013D780(char *p, int a, int b, int c, int d, int e, int f, int g);
    void func_0013B260(int a);
    void func_0013CC80(char *p, int a, int b, int c, int d, int e, int f, int g);
    void func_0013DFF0(float *p, int a);
};
struct C_Ini {
    C_Ini *func_00168280(void);
    void func_00169490(char *p, int a);
    void func_00169710(char *p);
    void func_00168C20(char *p, int a, int *out);
    void func_001691E0(void);
};
struct C_Tex { char pad[0x40]; int cnt; };
struct C_Mgr { C_Tex *func_00163DC0(C_Ini *ini, char *a, char *b); };
extern C_Dev *D_002BEAAC;
extern C_Mgr *D_002EF7D0;
extern char D_00276C90[], D_002780CC[], D_002A4A00[], D_002780C0[], D_00277298[], D_00277288[], D_00277268[], D_00276C08[], D_002780AC[], D_002780A0[], D_002A5660[];
extern float D_002780BC;
extern int D_001F4240;
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, ...);
extern "C" void func_001DC974();
extern "C" int func_001E8858();
extern "C" void func_001E891B(void *);
struct C_Dlg2 : C_Dlg { C_Dlg2 *func_001D1BB0(); void func_001D35E0(); };
void *operator new(unsigned int);
struct C_0018C640 {
    void func_0018C640(void);
};

struct C_001D0E60 {
    void func_001D0E60(void);
};

struct C_0005A8A0 {
    undefined4 *func_0005A8A0(byte param_1);
};

int C_0005A0E0::func_0005A0E0(void)
{
    int result;
    C_135D00 *p;
    int j;

    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    result = func_001D0E80();
    p = *(C_135D00 **)(unk_8 + 0xcc0);
    for (j = 0; j < 8; j++) {
        p->func_00135D00(0, 10);
        p->func_00135D00(1, 11);
        p->func_00135D00(2, 8);
        p->func_00135D00(3, 9);
        p->func_00135D00(4, 0);
        p->func_00135D00(5, 1);
        p->func_00135D00(6, 2);
        p->func_00135D00(7, 3);
        p->func_00135D00(8, 8);
        p->func_00135D00(9, 9);
        p->func_00135D00(10, 0);
        p->func_00135D00(11, 0);
        p->func_00135D00(12, 0);
        p->func_00135D00(13, 3);
        p->func_00135D00(14, 6);
        p->func_00135D00(15, 7);
        p->func_00135D00(16, 12);
        p->func_00135D00(17, 1);
        p->func_00135D00(18, 2);
        p->func_00135D00(19, 5);
        p->func_00135D00(20, 5);
        p->func_00135D00(21, 4);
        p->func_00135D00(22, 14);
        p->func_00135D00(23, 12);
        p->func_00135D00(24, 13);
        p->func_00135D00(25, 6);
        p->func_00135D00(26, 0);
        p->func_00135D00(27, 7);
        p->func_00135D00(28, 5);
        p->func_00135D00(29, 13);
        p->func_00135D00(30, 7);
        p->func_00135D00(31, 6);
        p->func_00135D00(32, 5);
        p->func_00135D00(33, 4);
        p->func_00135D00(34, 15);
        p->func_00135D00(35, 6);
        p->func_00135D00(36, 7);
        p->func_00135D00(37, 5);
        p->func_00135D00(38, 4);
        p->func_00135D00(39, 6);
        p->func_00135D00(40, 6);
        p->func_00135D00(41, 7);
        p->func_00135D00(42, 5);
        p->func_00135D00(43, 4);
        p->func_00135D00(44, 10);
        p->func_00135D00(45, 11);
        p->func_00135D00(46, 8);
        p->func_00135D00(47, 9);
        p->func_00135D00(48, 0);
        p->func_00135D00(49, 2);
        p->func_00135D00(50, 1);
        p->func_00135D00(51, 3);
        p->func_00135D00(52, 12);
        p->func_00135D00(53, 13);
        p->func_00135D00(54, 6);
        p->func_00135D00(55, 7);
        p->func_00135D00(56, 5);
        p->func_00135D00(57, 4);
        p->func_00135D00(58, 15);
        p->func_00135D00(59, 14);
        p->func_00135D00(60, 6);
        p->func_00135D00(61, 7);
        p->func_00135D00(62, 5);
        p->func_00135D00(63, 4);
        p->func_00135D00(64, 15);
        p->func_00135D00(65, 7);
    }
    D_002A829C->v4(D_0027808C);
    unk_2FC = 0;
    if (!unk_2E8) {
        C_160C00 *o = (C_160C00 *)func_001E8A44(0x30);
        o = o ? o->func_00160C00() : 0;
        unk_2E8 = o;
        o->func_00160D30(D_00278064, -1, 1);
    }
    unk_2E8->func_00161040(0);
    if (unk_2AC)
        ((C_001BC7F0 *)unk_2AC)->func_001BC7F0(0);
    return result;
}

void __stdcall func_0005A480(int flag)
{
    float f;
    int count = 0;
    char buf[0x104];
    char buf2[0x104];
    char buf3[0x104];
    C_Dlg2 *dlg;
    C_Ini *ini;
    C_Ini *ini2;
    C_Tex *tex;
    int i;
    int n;

    func_001DC974();
    f = 0;
    dlg = (C_Dlg2 *)func_001E8A44(0x54);
    dlg = dlg ? dlg->func_001D1BB0() : 0;
    dlg->v0(D_00276C90, 0);
    dlg->v14();
    func_001ADCC0(buf, 0x104, D_002780CC, D_002A5348);
    D_002BEAAC->func_0013C1D0((int)&D_001F4240);
    if (flag) {
        D_002BEAAC->func_00086130(1);
    } else {
        if (D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0))
            D_002BEAAC->func_0013B260(1);
    }

    ini = (C_Ini *)func_001E8A44(0x4cc);
    ini = ini ? ini->func_00168280() : 0;
    func_001ADCC0(buf2, 0x104, D_002780C0, D_002A4A00);
    ini->func_00169490(buf2, 0);
    ini->func_00169710(D_00277298);
    ini->func_00168C20(D_00277288, 0, &count);
    for (i = 0; i < count; i++) {
        func_001ADCC0(buf3, 0x104, D_00277268, i + 1);
        tex = D_002EF7D0->func_00163DC0(ini, buf3, D_002A4A00);
        if (tex) tex->cnt++;
        f = *(volatile float *)&f + D_002780BC;
        n = (int)f;
        dlg->vC(D_00276C08, n, 0x10);
        dlg->v8(D_00276C08, n / 2 + 0x72, 0x187);
    }
    if (ini) {
        ini->func_001691E0();
        func_001E891B(ini);
    }
    if (flag) {
        D_002BEAAC->func_00086130(0);
        D_002BEAAC->func_0013CC80(buf, 1, 1, 0, 0, 0, 0, 1);
    }
    D_002BEAAC->func_0013DFF0((float *)buf, 1);
    func_001ADCC0(buf, 0x104, D_002780AC, D_002A5348);
    if (flag) {
        D_002BEAAC->func_00086130(1);
    } else {
        if (D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0))
            D_002BEAAC->func_0013B260(1);
    }

    ini2 = (C_Ini *)func_001E8A44(0x4cc);
    ini2 = ini2 ? ini2->func_00168280() : 0;
    func_001ADCC0(buf2, 0x104, D_002780A0, D_002A5660);
    ini2->func_00169490(buf2, 0);
    ini2->func_00169710(D_00277298);
    ini2->func_00168C20(D_00277288, 0, &count);
    for (i = 0; i < count; i++) {
        func_001ADCC0(buf3, 0x104, D_00277268, i + 1);
        tex = D_002EF7D0->func_00163DC0(ini2, buf3, D_002A5660);
        if (tex) tex->cnt++;
        f = *(volatile float *)&f + D_002780BC;
        n = (int)f;
        dlg->vC(D_00276C08, n, 0x10);
        dlg->v8(D_00276C08, n / 2 + 0x72, 0x187);
    }
    if (ini2) {
        ini2->func_001691E0();
        func_001E891B(ini2);
    }
    if (flag) {
        D_002BEAAC->func_00086130(0);
        D_002BEAAC->func_0013CC80(buf, 1, 1, 0, 0, 0, 0, 1);
    }
    D_002BEAAC->func_0013DFF0((float *)buf, 1);
    D_002BEAAC->func_0013B260(0);
    dlg->func_001D35E0();
    func_001E891B(dlg);
}

undefined4 *C_0005A8A0::func_0005A8A0(byte param_1)
{
  extern int D_00277FD4;
  void func_001E891B(void *);
  undefined4 *in_ECX = (undefined4 *)this;
  C_0018C640 *p = (C_0018C640 *)in_ECX[0xbb];

  *in_ECX = (undefined4)&D_00277FD4;
  if (p != 0) {
    p->func_0018C640();
    func_001E891B(p);
  }
  ((C_001D0E60 *)in_ECX)->func_001D0E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
