/* 3 functions from 0x0005A0E0 to 0x0005A8F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_135D00 { void func_00135D00(int a, int b); };
struct C_160C00 { void func_00160C00(void); void func_00160D30(void *a, int b, int c); void func_00161040(int a); };
struct C_VT { void **vtbl; };
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
