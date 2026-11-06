/* 7 functions from 0x000ADF20 to 0x000AEF10, found by Ghidra. */
#include "common.h"

extern int D_0027C594;
extern int D_0027C1EC;

void func_001E891B(void *p);
extern int D_0027C12C;
struct C_000ADF20_Obj {
    void *vtbl;
    int f4;
    char pad8[8];
    C_000ADF20_Obj *func_00188700();
};

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
struct C_000AE780Parser {
    int func_00169710(void *name);
    int func_00168C20(void *name, int def, void *out);
    void func_00168CB0(void *name, void *def, void *out);
    int func_00168C50(void *name, float def, void *out);
    void func_00168BE0(void *name, void *def, char *out, int size);
};

struct C_000AE780Elem {
    char name[0x104];
    int f104;
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
    Vec4_000AEC90 v11c;
    Vec4_000AEC90 v12c;
    Vec4_000AEC90 v13c;
    Vec4_000AEC90 v14c;
    int *f15c;
    C_000AE780Elem *func_000A9A00();
};

struct C_000AE780 {
    void *vtbl;
    char pad_04[0x20];
    int count;
    C_000AE780Elem **arr;
    void func_000AE780(C_000AE780Parser *parser);
};

void *func_001E8920(void *dst, const void *src, unsigned int n);
extern "C" size_t strlen(const char *s);
#pragma intrinsic(strlen)
extern char D_0027CBAC[], D_0027CB90[], D_0027CB78[], D_002764F0[], D_0027C4D0[];
extern char D_0027C4BC[], D_00275680[], D_0027CB6C[], D_0027CB60[], D_0027CB54[];
extern char D_0027CB44[], D_0027CB38[], D_00275AD4[], D_0027CB30[], D_0027CB2C[];

template <class T> inline T min_000AE780(T a, T b)
{
    return a > b ? b : a;
}

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

void WaterInclusionBoxes::func_000AEC90(C_000AEC90Parser *parser)
{
    int count;
    int total;
    int n;
    int i;
    Vec4_000AEC90 v2;
    Vec4_000AEC90 v1;
    char buf[0x104];

    if (parser->func_00169710(D_0027CC24)) {
        parser->func_00168C20(D_0027CC08, 0, &count);
        if (count > 0) {
            if (field_28 != 0) {
                i = field_24;
                total = field_24 = count + i;
                field_28 = (WaterBox *)func_001E83E8(field_28, total * 0x28);
            } else {
                WaterBox *q;
                n = total = field_24 = count;
                i = 0;
                q = (WaterBox *)func_001E8A44(n * 0x28);
                if (q != 0) {
                    func_00011FF0(q, 0x28, n, &D_000AAA50);
                } else {
                    q = 0;
                }
                field_28 = q;
            }
            n = 1 - i;
            for (; i < total; i++) {
                func_001ADCC0(buf, 0x104, D_0027CBF4, n + i);
                if (parser->func_00169710(buf)) {
                    parser->func_00168CB0(D_0027CBE8, D_002A2734, &v1);
                    parser->func_00168CB0(D_0027CBDC, D_002A2734, &v2);
                    parser->func_00168C50(D_0027CBCC, 0, &field_28[i].f20);
                    parser->func_00168C50(D_0027CBC0, 0, &field_28[i].f24);
                    field_28[i].f24 *= D_00275998;
                    if (v1.x < v2.x) {
                        field_28[i].f0 = v1.x;
                        field_28[i].f10 = v2.x;
                    } else {
                        field_28[i].f0 = v2.x;
                        field_28[i].f10 = v1.x;
                    }
                    if (v1.y < v2.y) {
                        field_28[i].f4 = v1.y;
                        field_28[i].f14 = v2.y;
                    } else {
                        field_28[i].f4 = v2.y;
                        field_28[i].f14 = v1.y;
                    }
                    if (v1.z < v2.z) {
                        field_28[i].f8 = v1.z;
                        field_28[i].f18 = v2.z;
                    } else {
                        field_28[i].f8 = v2.z;
                        field_28[i].f18 = v1.z;
                    }
                }
            }
        }
    }
}

