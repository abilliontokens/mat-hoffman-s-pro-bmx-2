/* 4 functions from 0x000D0E00 to 0x000D1AE0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <string.h>

extern int D_0027EB8C;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000D0 {
    virtual void Destroy(int a0);
};

/* min taking references (so its operands live in stack temporaries), returning the value */
template <class T>
inline T min_ref(const T &a, const T &b)
{
    return b < a ? b : a;
}

/* a record whose name string sits at +0x28 */
struct S_000D1980_Item {
    char pad0[0x28];
    char name[1];
};

struct S_000D1980_Entry {
    int f0;
    int f4;
    S_000D1980_Item *f8;
};

struct S_000D1980_List {
    char pad0[0x24];
    int count;
    S_000D1980_Entry **items;
};

struct S_000D1980_Group {
    char pad0[0x3A8];
    S_000D1980_List **f3A8;
};

/* the camera/view object at +0x270 of the page's owner */
struct S_000D1050_View {
    char pad0[0x34];
    int f34;
    int f38;
    void func_000BC4C0(float a, float b);
    void func_000BC4A0(float a, float b);
    void func_00093280(float a);
};

struct S_000D1980_Mgr {
    char pad0[0x150];
    S_000D1980_Group *f150;
    char pad154[0x270 - 0x154];
    S_000D1050_View *f270;
};

/* per-profile save record: two arrays of 8 flags */
struct S_000D1050_Save {
    int f0;
    int f4;
    char pad8[0x5EC - 0x8];
    int f5EC[8];
    int f60C[8];
};

struct S_000D1050_Progress {
    S_000D1050_Save *func_0005C020(int a);
    int func_0005C120(int a);
};

struct S_000D1050_Music {
    int func_00094EE0();
    void func_00094C60();
    void func_00094E40(int a, int b, int c);
};

struct S_000D1050_Game {
    int f0;
    int f4;
    char pad8[0x2C0 - 0x8];
    S_000D1050_Progress *f2C0;
    char pad2C4[0x2D8 - 0x2C4];
    int f2D8;
    int f2DC;
    int f2E0, f2E4, f2E8, f2EC, f2F0, f2F4, f2F8;
    S_000D1050_Music *f2FC;
};

struct S_000D1050_Strings {
    char pad0[0x7C8];
    int f7C8;
    char pad7CC[0x838 - 0x7CC];
    int f838;
    char pad83C[0x958 - 0x83C];
    int f958;
    int f95C;
    int f960;
    char pad964[0x978 - 0x964];
    int f978;
    char pad97C[0x1258 - 0x97C];
    int f1258;
};

struct S_000D1050_StringsHolder {
    int f0;
    S_000D1050_Strings *f4;
};

struct S_000D1050_Root {
    char pad0[0x2E0];
    S_000D1050_Game *f2E0;
    int f2E4;
    S_000D1050_StringsHolder *f2E8;
};

struct S_000D1050_Text {
    void func_0005E840(int a);
};

struct S_000D1050_Hud {
    char pad0[0x34];
    S_000D1050_Text *f34;
    S_000D1050_Text *f38;
    S_000D1050_Text *f3C;
    S_000D1050_Text *f40;
    S_000D1050_Text *f44;
    S_000D1050_Text *f48;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000D1050_Root *D_002A8490;
extern S_000D1050_Hud *D_002B91AC;
extern float D_0027DE70;
extern float D_0027ED00;
extern char D_002A64D0[];
extern char D_00275678[];
extern char D_0027ECF0[], D_0027ECE4[], D_0027ECD8[], D_0027ECCC[], D_0027ECBC[], D_0027ECB0[], D_0027ECA0[], D_0027EC94[];
extern char D_0027EC84[], D_0027EC78[], D_0027EC68[], D_0027EC5C[], D_0027EC50[], D_0027EC44[], D_0027EC38[], D_0027EC2C[];
int func_001ADCC0(char *dst, int size, const char *fmt, ...);

/* the 10 bytes of "marquee08" */
struct S_000D1980_Str10 {
    char c[10];
};

extern S_000D1980_Str10 D_0027ED04;
extern int D_0027ED08;
extern short D_0027ED0C;
char *func_001E8920(char *dst, const char *src, int n);
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

/* BmxUIPageLevelSelection */
struct C_000D0FD0 {
    void *vtbl;
    char pad4[0x120];
    S_000D1980_Mgr *f124;
    char pad128[0x280 - 0x128];
    int f280;
    DelObjC_000D0 *arr284[2];
    int f28C, f290, f294, f298, f29C, f2A0;
    float f2A4;
    int f2A8, f2AC, f2B0, f2B4, f2B8, f2BC, f2C0;
    u8 f2C4;
    char pad2C5[0x3C8 - 0x2C5];
    float f3C8;
    int f3CC;
    int f3D0, f3D4, f3D8, f3DC, f3E0, f3E4;
    int f3E8[8];
    C_001D6410 *unk408;
    int f40C, f410, f414, f418, f41C, f420;
    int f424[10];
    int f44C;
    int f450[8];
    int f470;
    char f474[8];
    char pad47C[0xE9C - 0x47C];
    char fE9C[8];
    char padEA4[0x16BC - 0xEA4];
    char f16BC[8];
    char pad16C4[0x1EDC - 0x16C4];
    S_000D1980_Str10 f1EDC;
    char pad1EE6[0x1FE0 - 0x1EE6];
    int f1FE0, f1FE4, f1FE8, f1FEC;
    int f1FF0[8];
    int f2010, f2014, f2018, f201C, f2020, f2024, f2028, f202C, f2030, f2034, f2038, f203C, f2040;
    DelObjC_000D0 *unk2044;
    char pad2048[0x20B0 - 0x2048];
    S_000D1980_Item *f20B0;
    int f20B4;
    C_000D0FD0 *func_000D0E00(int a);
    void func_001BE360(int a);
    void func_001BE3F0();
    void func_000D0FD0();
    void func_000D1050();
    void func_000D1980();
};

C_000D0FD0 *C_000D0FD0::func_000D0E00(int a)
{
    int i;
    func_001BE360(a);
    vtbl = &D_0027EB8C;
    f2A8 = 0;
    f2B8 = 1;
    f418 = 0;
    f2C0 = 1;
    f28C = 0;
    f290 = 0;
    *(int *)&f2A4 = 0;
    f2BC = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2C4 = 0;
    *(int *)&f3C8 = 0;
    f3D0 = 0;
    f3D4 = 0;
    f3D8 = 0;
    f3DC = 0;
    f3E4 = 0;
    f3E0 = 0;
    for (i = 0; i < 8; i++) {
        f3E8[i] = 0;
        f1FF0[i] = 0;
    }
    unk408 = 0;
    f294 = 0;
    for (i = 0; i < 8; i++)
        f450[i] = 0;
    f470 = 0;
    for (i = 0; i < 10; i++)
        f424[i] = 0;
    f44C = 0;
    for (i = 0; i < 8; i++) {
        f474[i] = 0;
        fE9C[i] = 0;
        f16BC[i] = 0;
    }
    f1EDC.c[0] = 0;
    f410 = 1;
    f2AC = 0;
    f414 = 0;
    f1FE0 = 0;
    f1FE4 = 0;
    f1FE8 = 0;
    f1FEC = 0;
    f2B0 = 0;
    f2B4 = 0;
    for (i = 0; i < 2; i++)
        arr284[i] = 0;
    f2010 = 0;
    f203C = 0;
    f2018 = 0;
    f201C = 0;
    f2020 = 0;
    f2024 = 0;
    f2028 = 0;
    f202C = 0;
    f2030 = 0;
    f2034 = 0;
    f2038 = 0;
    f2014 = 0;
    f41C = 0;
    f420 = 0;
    f2040 = 0;
    f20B4 = 0;
    unk2044 = 0;
    f280 = 0;
    return this;
}

void C_000D0FD0::func_000D0FD0()
{
    C_001D6410 *p = unk408;
    vtbl = &D_0027EB8C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
        unk408 = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr284[i] != 0) {
            arr284[i]->Destroy(1);
            arr284[i] = 0;
        }
    }
    if (unk2044 != 0) {
        unk2044->Destroy(1);
        unk2044 = 0;
    }
    func_001BE3F0();
}

void C_000D0FD0::func_000D1050()
{
    S_000D1980_Mgr *owner = f124;
    int i = 0;
    f1FEC = i;
    f280 = i;
    if (D_002A8490->f2E0->f4 == i) {
        for (i = 0; i < 8; i++)
            f3E8[i] = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f60C[i];
    } else {
        for (i = 0; i < 8; i++)
            f3E8[i] = D_002A8490->f2E0->f2C0->func_0005C120(i) != 0;
    }
    f2040 = 0;
    for (i = 0; i < 8; i++) {
        if (D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f5EC[i] != 0)
            f2040++;
    }
    if (D_002A8490->f2E0->f4 == 0) {
        for (i = 0; i < 8; i++)
            f1FF0[i] = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f5EC[i] != 0;
    }
    f1FE0 = 0;
    f203C = 0;
    int v = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f4;
    for (i = 0; i < 8; i++) {
        if (i == f418) {
            f450[i] = 2;
            if (f1FF0[i] != 0) {
                f470 = 3;
            } else if (f3E8[i] != 0) {
                f470 = 1;
            } else if (D_002A8490->f2E0->f4 == 0) {
                switch (i) {
                case 0:
                    f470 = v >= D_002A8490->f2E0->f2E8 ? 4 : 0;
                    f470 = v >= D_002A8490->f2E0->f2E0 ? 4 : 0;
                    f470 = v >= D_002A8490->f2E0->f2EC ? 4 : 0;
                    break;
                case 3:
                    f470 = v >= D_002A8490->f2E0->f2E4 ? 4 : 0;
                    f470 = v >= D_002A8490->f2E0->f2F0 ? 4 : 0;
                    break;
                case 2:
                    f470 = v >= D_002A8490->f2E0->f2F0 ? 4 : 0;
                case 7:
                    if (v >= D_002A8490->f2E0->f2F8 && f2040 >= 7)
                        f470 = 4;
                    else
                        f470 = 0;
                    break;
                case 5:
                    f470 = v >= D_002A8490->f2E0->f2E4 ? 4 : 0;
                    break;
                case 4:
                    f470 = v >= D_002A8490->f2E0->f2E0 ? 4 : 0;
                    f470 = v >= D_002A8490->f2E0->f2F4 ? 4 : 0;
                    break;
                case 1:
                    f470 = v >= D_002A8490->f2E0->f2EC ? 4 : 0;
                    f470 = v >= D_002A8490->f2E0->f2F4 ? 4 : 0;
                    break;
                case 6:
                    f470 = v >= D_002A8490->f2E0->f2EC ? 4 : 0;
                    f470 = v >= D_002A8490->f2E0->f2E0 ? 4 : 0;
                    break;
                }
            } else {
                f470 = 0;
            }
        } else if (f1FF0[i] != 0) {
            f450[i] = 3;
        } else {
            f450[i] = f3E8[i] != 0;
        }
    }
    f44C = 0;
    if (f450[5] != 0 && f450[2] != 0)
        f424[0] = 1;
    if (f450[5] != 0 && f450[3] != 0)
        f424[1] = 1;
    if (f450[2] != 0 && f450[7] != 0)
        f424[2] = 1;
    if (f450[2] != 0 && f450[3] != 0)
        f424[3] = 1;
    if (f450[3] != 0 && f450[0] != 0)
        f424[4] = 1;
    if (f450[0] != 0 && f450[1] != 0)
        f424[5] = 1;
    if (f450[0] != 0 && f450[4] != 0)
        f424[6] = 1;
    if (f450[1] != 0 && f450[4] != 0)
        f424[7] = 1;
    if (f450[4] != 0 && f450[6] != 0)
        f424[8] = 1;
    if (f450[1] != 0 && f450[6] != 0)
        f424[9] = 1;
    f28C = 0;
    f290 = 0;
    f294 = 0;
    f2BC = 0;
    f298 = 0;
    f3E4 = 0;
    f3E0 = 0;
    f41C = 0;
    f420 = 0;
    if (!D_002A8490->f2E0->f2FC->func_00094EE0()) {
        D_002A8490->f2E0->f2FC->func_00094C60();
        D_002A8490->f2E0->f2FC->func_00094E40(2, 100, 500);
        D_002A8490->f2E0->f2FC->func_00094E40(3, 100, 500);
    }
    owner->f270->f34 = 1;
    owner->f270->f38 = 0;
    owner->f270->func_000BC4C0(32.0f, D_0027ED00 + D_0027DE70);
    owner->f270->func_000BC4A0(1.07f, 0.95f);
    owner->f270->func_00093280(1.0f);
    f3CC = 1;
    switch (f418) {
    case 0:
        if (D_002A8490->f2E0->f2C0->func_0005C120(0))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECF0);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECE4);
        break;
    case 1:
        if (D_002A8490->f2E0->f2C0->func_0005C120(1))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECD8);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECCC);
        break;
    case 2:
        if (D_002A8490->f2E0->f2C0->func_0005C120(2))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECBC);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECB0);
        break;
    case 3:
        if (D_002A8490->f2E0->f2C0->func_0005C120(3))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027ECA0);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC94);
        break;
    case 4:
        if (D_002A8490->f2E0->f2C0->func_0005C120(4))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC84);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC78);
        break;
    case 5:
        if (D_002A8490->f2E0->f2C0->func_0005C120(5))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC68);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC5C);
        break;
    case 6:
        if (D_002A8490->f2E0->f2C0->func_0005C120(6))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC50);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC44);
        break;
    case 7:
        if (D_002A8490->f2E0->f2C0->func_0005C120(7))
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC38);
        else
            func_001ADCC0((char *)&f2C4, 0x104, D_00275678, D_002A64D0, D_0027EC2C);
        break;
    }
    f3C8 = 0.5f;
    f3D0 = 1;
    f3DC = 0;
    f410 = 1;
    f2010 = 0;
    f2014 = 0;
    if (D_002A8490->f2E0->f4 == 0)
        D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->f960);
    else
        D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->f958);
    D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->func_000BF860(1, 0x17b, 0x184, 0);
    D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4->f838);
    D_002B91AC->func_000BF860(2, 0xb4, 0x184, 0);
    D_002B91AC->f40->func_0005E840(D_002A8490->f2E8->f4->f1258);
    D_002B91AC->func_000BF860(3, 0x34, 0x184, 0);
    D_002B91AC->f44->func_0005E840(D_002A8490->f2E8->f4->f978);
    f20B4 = 0;
}

void C_000D0FD0::func_000D1980()
{
    char buf[0x104];
    int i;

    S_000D1980_Mgr *mgr = f124;
    f1EDC = D_0027ED04;
    i = 0;
    for (;;) {
        int cnt = (*mgr->f150->f3A8)->count;
        if (i >= cnt) break;
        S_000D1980_Entry *e = (*mgr->f150->f3A8)->items[i];
        if (e != 0 && e->f4 == 1 && e->f8 != 0) {
            int len = strlen(e->f8->name);
            int lim = 0x103;
            int n = AsmMinI(lim, len);
            func_001E8920(buf, (*(S_000D1980_Item * volatile *)&e->f8)->name, n);
            buf[n] = 0;
            char *dot = func_001E8AC0(buf, '.');
            if (dot != 0) {
                memset(dot, 0, strlen(dot));
            }
            if (func_001EA426(buf, (const char *)&f1EDC) == 0) {
                f20B0 = e->f8;
            }
        }
        i++;
    }
}

