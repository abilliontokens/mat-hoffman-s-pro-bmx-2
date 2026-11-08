/* 7 functions from 0x000ADF20 to 0x000AEF10, found by Ghidra. */
#include "common.h"

extern int D_0027C594;
extern int D_0027C1EC;

void func_001E891B(void *p);
extern int D_0027C12C;
void *func_001E8A44(int size);
struct C_000ADF20_Obj {
    void *vtbl;
    int f4;
    char pad8[8];
    C_000ADF20_Obj *func_00188700();
    C_000ADF20_Obj() {
        func_00188700();
        vtbl = (void *)&D_0027C12C;
    }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
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

struct WaterParseLocals {
    int n, total;
    float v2[4], v1[4];
    int count;
    char buf[0x104];
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


void __stdcall func_000ADF20(int *param_1, C_000ADF20_Obj **param_2)
{
    C_000ADF20_Obj *p = new C_000ADF20_Obj;
    *param_2 = p;
    p->f4 = *param_1;
}

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

void C_000AE780::func_000AE780(C_000AE780Parser * volatile parser)
{
    C_000AE780 * volatile self = this;
    int i;
    int end;
    int j;
    char buf[0x104];

    if (parser->func_00169710(D_0027CBAC)) {
        int f104, f110, f118, f108, total, f114, f10c;
        parser->func_00168C20(D_0027CB90, 0, &total);
        if (total > 0) {
            if (self->arr != 0) {
                i = self->count;
                self->count = total + i;
                end = self->count;
                self->arr = (C_000AE780Elem **)func_001E83E8(self->arr, end * 4);
            } else {
                self->count = total;
                i = 0;
                end = self->count;
                self->arr = (C_000AE780Elem **)func_001E8A44(end * 4);
            }
            if (i < end) {
                volatile int n = 1 - i;
                do {
                    func_001ADCC0(buf, 0x104, D_0027CB78, i + n);
                    if (parser->func_00169710(buf)) {
                        Vec4_000AEC90 v11c;
                        Vec4_000AEC90 v12c;
                        Vec4_000AEC90 v13c;
                        Vec4_000AEC90 v14c;
                        char name[0x104];
                        int n2[1];
                        parser->func_00168BE0(D_0027C4D0, D_002764F0, name, -1);
                        parser->func_00168C20(D_0027C4BC, 1, &f104);
                        parser->func_00168C20(D_00275680, 0, &f108);
                        parser->func_00168C20(D_0027CB6C, 1, &f10c);
                        parser->func_00168C50(D_0027CB60, 0, &f110);
                        parser->func_00168C50(D_0027CB54, 0, &f114);
                        parser->func_00168C50(D_0027CB44, 0, &f118);
                        parser->func_00168CB0(D_0027CB38, D_002A2734, &v11c);
                        parser->func_00168CB0(D_00275AD4, D_002A2734, &v12c);
                        parser->func_00168CB0(D_0027CB30, D_002A2734, &v13c);
                        parser->func_00168CB0(D_0027CB2C, D_002A2734, &v14c);
                        void *mem = func_001E8A44(0x160);
                        self->arr[i] = mem ? ((C_000AE780Elem *)mem)->func_000A9A00() : 0;
                        volatile int len = (int)strlen(name);
                        volatile int maxlen = 0x103;
                        n2[0] = min_000AE780((int)maxlen, (int)len);
                        func_001E8920(self->arr[i]->name, name, n2[0]);
                        self->arr[i]->name[n2[0]] = 0;
                        self->arr[i]->f104 = f104;
                        self->arr[i]->f108 = f108;
                        self->arr[i]->f10c = f10c;
                        self->arr[i]->f110 = f110;
                        self->arr[i]->f114 = f114;
                        self->arr[i]->f118 = f118;
                        self->arr[i]->v11c = v11c;
                        self->arr[i]->v12c = v12c;
                        self->arr[i]->v13c = v13c;
                        self->arr[i]->v14c = v14c;
                        if (f104 == 0) {
                            self->arr[i]->f15c = (int *)func_001E8A44(4);
                            self->arr[i]->f15c[0] = 0;
                        } else {
                            self->arr[i]->f15c = (int *)func_001E8A44(f104 << 2);
                            for (j = 0; j < f110; j++) {
                                self->arr[i]->f15c[j] = 0;
                            }
                        }
                    }
                    ++i;
                } while (i < end);
            }
        }
    }
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
    int locals[2];
    
    int i;
    Vec4_000AEC90 v1;
    Vec4_000AEC90 v2;
    char buf[0x104];

    if (parser->func_00169710(D_0027CC24)) {
        parser->func_00168C20(D_0027CC08, 0, &count);
        if (count > 0) {
            if (field_28 != 0) {
                i = field_24;
                locals[1] = field_24 = count + i;
                field_28 = (WaterBox *)func_001E83E8(field_28, field_24 * 0x28);
            } else {
                WaterBox *q;
                locals[1] = field_24 = count;
                locals[0] = count;
                i = 0;
                q = (WaterBox *)func_001E8A44(locals[0] * 0x28);
                if (q != 0) {
                    func_00011FF0(q, 0x28, locals[0], &D_000AAA50);
                } else {
                    q = 0;
                }
                field_28 = q;
            }
            if (i < locals[1]) {
            int offset = i * 0x28;
            locals[0] = 1 - i;
            do {
                func_001ADCC0(buf, 0x104, D_0027CBF4, locals[0] + i);
                if (parser->func_00169710(buf)) {
                    parser->func_00168CB0(D_0027CBE8, D_002A2734, &v1);
                    parser->func_00168CB0(D_0027CBDC, D_002A2734, &v2);
                    parser->func_00168C50(D_0027CBCC, 0, &(*(WaterBox *)((char *)field_28 + offset)).f20);
                    parser->func_00168C50(D_0027CBC0, 0, &(*(WaterBox *)((char *)field_28 + offset)).f24);
                    *(volatile float *)&(*(WaterBox *)((char *)field_28 + offset)).f24 *= D_00275998;
                    if (v1.x < v2.x) {
                        (*(WaterBox *)((char *)field_28 + offset)).f0 = v1.x;
                        (*(WaterBox *)((char *)field_28 + offset)).f10 = v2.x;
                    } else {
                        (*(WaterBox *)((char *)field_28 + offset)).f0 = v2.x;
                        (*(WaterBox *)((char *)field_28 + offset)).f10 = v1.x;
                    }
                    if (v1.y < v2.y) {
                        (*(WaterBox *)((char *)field_28 + offset)).f4 = v1.y;
                        (*(WaterBox *)((char *)field_28 + offset)).f14 = v2.y;
                    } else {
                        (*(WaterBox *)((char *)field_28 + offset)).f4 = v2.y;
                        (*(WaterBox *)((char *)field_28 + offset)).f14 = v1.y;
                    }
                    if (v1.z < v2.z) {
                        (*(WaterBox *)((char *)field_28 + offset)).f8 = v1.z;
                        (*(WaterBox *)((char *)field_28 + offset)).f18 = v2.z;
                    } else {
                        (*(WaterBox *)((char *)field_28 + offset)).f8 = v2.z;
                        (*(WaterBox *)((char *)field_28 + offset)).f18 = v1.z;
                    }
                }
            ++i;
                offset += 0x28;
            } while (i < locals[1]);
            }
        }
    }
}

