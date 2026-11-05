/* 7 functions from 0x000ADF20 to 0x000AEF10, found by Ghidra. */
#include "common.h"

extern int D_0027C594;
extern int D_0027C1EC;

void func_001E891B(void *p);

struct GrindElem {
    void func_000A83C0();
};

extern char D_0027CC24[], D_0027CC08[], D_0027CBF4[], D_0027CBE8[], D_0027CBDC[];
extern char D_0027CBCC[], D_0027CBC0[], D_002A2734[];
extern int D_000AAA50;
extern float D_00275998;
void *func_001E83E8(void *block, unsigned int size);
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

struct Vec4_000AEC90 {
    float x, y, z, w;
    Vec4_000AEC90() { x = y = z = 0; w = 1; }
};

struct C_000AEC90Parser {
    int func_00169710(void *name);
    int func_00168C20(void *name, int def, void *out);
    void func_00168CB0(void *name, void *def, void *out);
    int func_00168C50(void *name, float def, void *out);
};

/* one water-inclusion box: min/max corners and two extra floats */
struct WaterBox {
    float f0, f4, f8, fc;
    float f10, f14, f18, f1c;
    float f20, f24;
};

struct WaterInclusionBoxes {
    void *vtbl;
    char pad_04[0x20];
    int field_24;
    WaterBox *field_28;
    void func_00157660();
    void *func_000AEC50(unsigned int flags);
    void func_000AEC90(C_000AEC90Parser *parser);
};

struct Grinds {
    void *vtbl;
    char pad_04[0x20];
    int count;
    GrindElem **arr;
    void func_00157660();
    void func_000AE6E0();
};
struct BMXCameraFacingObjects {
    void *vtbl;
    void func_000A99A0();
    void *func_000AE760(unsigned int flags);
};
#include "ghidra.h"
struct C_000AE740 {
    undefined4 func_000AE740(byte param_1);
};


void Grinds::func_000AE6E0() {
    vtbl = (void *)&D_0027C1EC;
    if (arr) {
        for (int i = 0; i < count; i++) {
            GrindElem *e = arr[i];
            if (e) {
                e->func_000A83C0();
                func_001E891B(e);
            }
        }
        func_001E891B(arr);
        arr = 0;
    }
    func_00157660();
}

undefined4 C_000AE740::func_000AE740(byte param_1)
{
  int func_000A9120(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000A9120();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *BMXCameraFacingObjects::func_000AE760(unsigned int flags)
{
    func_000A99A0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *WaterInclusionBoxes::func_000AEC50(unsigned int flags) {
    vtbl = (void *)&D_0027C594;
    if (field_28) func_001E891B(field_28);
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

