/* 6 functions from 0x0006E330 to 0x0006ECC0, found by Ghidra. */
#include "common.h"

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001B1980 {
    void func_001B1980();
};

extern int D_0027850C;
extern int D_00278B14;

struct Res_6E480 {
    void func_001D6410();
};
struct VObj_6E480 {
    virtual ~VObj_6E480();
};
void func_001E891B(void *p);

struct C_0006E330 {
    void *vtbl;
    char pad4[0x20];
    int unk24[8];
    int unk44[8];
    int unk64;
    char pad68[8];
    int unk70;
    u8 unk74;
    char pad75[0xA0 - 0x75];
    int unkA0;
    u8 unkA4;
    char padA5[0xBC - 0xA5];
    int unkBC;
    int unkC0;
    int unkC4;
    int unkC8;
    int unkCC;
    int unkD0;
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    int unkEC;
    int unkF0;
    int unkF4;
    int unkF8;
    int unkFC;
    int unk100;
    int unk104;
    int unk108;
    char pad10C[4];
    int unk110;
    char pad114[0xC];
    int unk120;
    int unk124;
    int unk128;
    int unk12C;
    int unk130[4];
    int unk140[4];
    int unk150;
    int unk154;
    int unk158[5];
    int unk16C[5];
    int unk180[6];
    char pad198[4];
    int unk19C;
    void func_00157600(int a0);
    void func_00157660();
    void func_0006E480();
    C_0006E330 *func_0006E330(int a0);
};

struct C_0006EC60_EC {
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
    char pad4[0x1F0];
    int unk1F4;
    void func_00032A40();
};

struct C_0006E910 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0xBC];
    int unkC0;
    char padC4[0xC];
    C_001B1980 *unkD0;
    C_001B1980 *unkD4;
    char padD8[4];
    C_001B1980 *unkDC;
    char padE0[0xC];
    C_0006EC60_EC *unkEC;
    char padF0[0xC];
    int unkFC;
    char pad100[0x9C];
    int unk19C;
    void func_0006E910();
    void func_0006EC60();
};

struct C_001B17D0 {
    int func_001B1800();
    void func_001B1980();
    void func_001B17D0(char *s);
    char *func_001B17F0();
};
struct S_0006E620 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x6C];
    int unk70;
    char pad74[0x2C];
    int unkA0;
    char unkA4[0x2C];
    C_001B17D0 *unkD0;
    C_001B17D0 *unkD4;
    char padD8[0xC];
    int unkE4;
    float unkE8;
    char padEC[8];
    int unkF4;
    char padF8[0x10];
    int unk108;
    int unk10C;
    int unk110;
    int unk114;
    int unk118;
    int unk11C;
    char pad120[0x7C];
    int unk19C;
    void func_0006E620(int a0);
};
extern float D_00278BD0;

struct S_6E970_EC {
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
    virtual void v18(int a);
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
    virtual void v35();
    virtual void v36();
    char pad4[0x1D];
    u8 flags21;
    char pad22[0x1D2];
    int unk1F4;
};
struct C_5B870 {
    char *func_0005B870();
};
struct S_6E970_G2 {
    char pad[0x190];
    int mode;
    char pad194[0x12C];
    C_5B870 *field2C0;
};
struct S_6E970_G1 {
    char pad[0x190];
    int mode;
    char pad194[0x14C];
    S_6E970_G2 *field2E0;
};
struct S_6E970 {
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
    virtual void v18(int a);
    char pad4[0x6C];
    int unk70;
    char pad74[0x2C];
    int lenA0;
    char unkA4[0x1C];
    int unkC0;
    char padC4[0xC];
    C_001B17D0 *unkD0;
    C_001B17D0 *unkD4;
    char padD8[0xC];
    int unkE4;
    float unkE8;
    S_6E970_EC *unkEC;
    char padF0[4];
    int unkF4;
    char padF8[0x10];
    int unk108;
    int unk10C;
    int unk110;
    int unk114;
    int unk118;
    int unk11C;
    char pad120[0x7C];
    int unk19C;
    void func_0006E620(int a0);
    void func_0006E970(int a0);
};
extern char *func_0005B870(int p);
extern char D_002789B8[2];
extern char D_00278BC8[5], D_00278BC0[5], D_00278414[5], D_002783F8[5], D_00278BB8[6], D_00278BB0[8], D_00278BA8[6], D_00278BA0[5], D_00278B98[6], D_00278B90[5], D_00278B88[5], D_00278B80[5];
extern S_6E970_G1 *D_002A8490;
#include <string.h>
#pragma intrinsic(memcmp)

C_0006E330 *C_0006E330::func_0006E330(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_00278B14;
    unk64 = 0;
    unkD4 = 0;
    unkDC = 0;
    unkD0 = 0;
    for (i = 0; i < 4; i++) {
        unk140[i] = 0;
        unk130[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        (&unk128)[i] = 0;
    }
    unkD8 = 0;
    unkE0 = 0;
    unk74 = 0;
    unk70 = 0;
    unkA4 = 0;
    unkA0 = 0;
    unkC0 = 0;
    unkC4 = 0;
    unkBC = 0;
    unkC8 = 0;
    unkCC = 0;
    unkE8 = 0;
    unkE4 = 1;
    unkEC = 0;
    unk110 = 0;
    for (i = 0; i < 2; i++) {
        (&unk150)[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        unk158[i] = 0;
        unk16C[i] = 0;
    }
    unkF0 = 0;
    unkF4 = 0;
    unk124 = 0;
    unk120 = 0;
    for (i = 0; i < 6; i++) {
        unk180[i] = 0;
    }
    unkF8 = 0;
    unkFC = 0;
    unk104 = 0;
    unk100 = 0;
    unk108 = 1;
    unk19C = 0;
    return this;
}

void C_0006E330::func_0006E480()
{
    int i;
    Res_6E480 *p;
    vtbl = &D_00278B14;
    for (i = 0; i < 4; i++) {
        if (unk140[i]) { delete (VObj_6E480 *)unk140[i]; unk140[i] = 0; }
        p = (Res_6E480 *)unk130[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    for (i = 0; i < 2; i++) {
        if ((&unk128)[i]) { delete (VObj_6E480 *)(&unk128)[i]; (&unk128)[i] = 0; }
    }
    p = (Res_6E480 *)unkE0;
    if (p) { p->func_001D6410(); func_001E891B(p); }
    if (unkC8) delete (VObj_6E480 *)unkC8;
    if (unkCC) delete (VObj_6E480 *)unkCC;
    if (unkD8) { delete (VObj_6E480 *)unkD8; unkD8 = 0; }
    for (i = 0; i < 2; i++) {
        if ((&unk150)[i]) delete (VObj_6E480 *)(&unk150)[i];
        (&unk150)[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        if (unk158[i]) { delete (VObj_6E480 *)unk158[i]; unk158[i] = 0; }
        if (unk16C[i]) { delete (VObj_6E480 *)unk16C[i]; unk16C[i] = 0; }
    }
    if (unkF0) { delete (VObj_6E480 *)unkF0; unkF0 = 0; }
    for (i = 0; i < 6; i++) {
        p = (Res_6E480 *)unk180[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        unk180[i] = 0;
    }
    p = (Res_6E480 *)unkF8;
    if (p) { p->func_001D6410(); func_001E891B(p); unkF8 = 0; }
    p = (Res_6E480 *)unk100;
    if (p) { p->func_001D6410(); func_001E891B(p); unk100 = 0; }
    func_00157660();
}

void C_0006E910::func_0006E910()
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unkD0->func_001B1980();
    unkD4->func_001B1980();
    unkDC->func_001B1980();
    v4();
    unkFC = 0;
    unk19C = 0;
}

void S_6E970::func_0006E970(int a0)
{
    char buf[16];

    unkC0 = 0;
    v6();
    unkEC->v18(1);
    v18(0);
    unkEC->flags21 &= 0xfb;
    func_0006E620(a0);
    unk110 = 0;
    unkEC->v35();
    unkEC->unk1F4 = 1;
    unkF4 = a0;
    unk114 = 0;
    unk118 = 0;
    unk11C = 0;
    unk108 = 1;
    unk10C = 1;
    unk19C = 1;
    strcpy(buf, D_002A8490->field2E0->field2C0->func_0005B870());
    if (strcmp(buf, " ") == 0) {
        switch (D_002A8490->field2E0->mode) {
        case 0: strcpy(buf, "mat"); break;
        case 1: memcpy(buf, D_00278BC8, 5); break;
        case 2: strcpy(buf, "joe"); break;
        case 3: memcpy(buf, D_00278BC0, 5); break;
        case 4: memcpy(buf, D_00278414, 5); break;
        case 5: memcpy(buf, D_002783F8, 5); break;
        case 6: strcpy(buf, "day"); break;
        case 7: memcpy(buf, D_00278BB8, 6); break;
        case 8: memcpy(buf, D_00278BB0, 8); break;
        case 9: memcpy(buf, D_00278BA8, 6); break;
        case 10: memcpy(buf, D_00278BA0, 5); break;
        case 11: memcpy(buf, D_00278B98, 6); break;
        case 12: strcpy(buf, "big"); break;
        case 13: memcpy(buf, D_00278B90, 5); break;
        case 14: memcpy(buf, D_00278B88, 5); break;
        case 15: memcpy(buf, D_00278B80, 5); break;
        }
    }
    unkD0->func_001B17D0(buf);
    strcpy(unkA4, buf);
    lenA0 = strlen((char *)unkD0->func_001B17F0());
    unkD4->func_001B17D0(unkA4 + lenA0 - 1);
    unkA4[lenA0 - 1] = 0;
    unkD0->func_001B17D0(unkA4);
}

void C_0006E910::func_0006EC60()
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unkC0 = 0;
    unkEC->v34();
    unkEC->func_00032A40();
    v4();
    unkEC->unk1F4 = 0;
    unkFC = 0;
    unk19C = 0;
}

