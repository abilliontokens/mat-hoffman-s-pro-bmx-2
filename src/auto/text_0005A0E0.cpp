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
void func_001ADCC0(void *, int, void *, void *, void *);
void *func_001E8A44(int);
void func_001BC7F0(void *, int);
struct C_Dlg { virtual void v0(char *s, int n); virtual void v4(); virtual void v8(char *s, int x, int y); virtual void vC(char *s, int w, int h); virtual void v10(); virtual void v14(); };
struct C_Dev {
    void func_0013C1D0(int a);
    void func_00086130(int a);
    int func_0013D780(char *p, int a, int b, int c, int d, int e, int f, int g);
    void func_0013B260(int a);
    void func_0013CC80(char *p, int a, int b, int c, int d, int e, int f, int g, int h);
    void func_0013DFF0(float *p, int a);
};
struct C_Ini {
    C_Ini *func_00168280(void);
    void func_00169490(char *p, int a);
    void func_00169710(char *p);
    void func_00168C20(char *p, int a, float *out);
    void func_001691E0(void);
};
struct C_Tex { char pad[0x40]; int cnt; };
struct C_Mgr { C_Tex *func_00163DC0(char *a, char *b); };
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
