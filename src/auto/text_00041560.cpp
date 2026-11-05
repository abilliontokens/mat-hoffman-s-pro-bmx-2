/* 4 functions from 0x00041560 to 0x00042260, found by Ghidra. */
#include "common.h"
#include <string.h>

extern char D_00275630[];

struct S_41CF0_Pad {
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
    virtual int v16();
};

struct S_41CF0_Mgr8 {
    char pad0[0x14];
    S_41CF0_Pad *arr14[1];
};

struct S_41CF0_Slot18 {
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
};

struct S_41CF0_Slot31 {
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
    virtual void v31(int a, int b);
};

struct S_41CF0_Obj95C {
    char pad0[0x95c];
    int f95c;
    void func_0010C090(void *a, void *b, void *c, int d);
};

struct S_41CF0_Obj1A8 {
    char pad0[0x1a8];
    S_41CF0_Obj95C *f1a8;
    void func_000A4500(int a, int b);
};

struct S_41DC0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

struct S_41DC0_Text {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    void func_0008A020(char *s);
    void func_0008A040(char *s);
    void func_0008B670(char *s);
};

struct S_41DC0_Tex {
    void func_00198390(void);
};

struct S_41DC0_Gfx {
    char pad0[4];
    S_41DC0_Tex *f4;
};

struct S_41DC0_Btn {
    char pad0[0x1a4];
    S_41DC0_Gfx *f1a4;
};

struct S_41DC0_Menu {
    void func_0002F450(int a0);
};

struct S_41CF0_Owner {
    char pad0[0x4c0];
    S_41CF0_Slot31 *f4c0;
    char pad4c4[0x4e0 - 0x4c4];
    S_41CF0_Obj1A8 *f4e0;
};

struct S_41CF0_Cam {
    void func_00069C40();
    void func_00069FD0(int a0);
};

struct S_41CF0_Mgr2E0 {
    char pad0[0x2fc];
    S_41CF0_Slot18 *f2fc;
    int f300;
};

struct S_41CF0_Global {
    char pad0[8];
    S_41CF0_Mgr8 *f8;
    char pad0c[0x2e0 - 0xc];
    S_41CF0_Mgr2E0 *f2e0;
};

extern S_41CF0_Global *D_002A8490;

struct BmxEventEditor {
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
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    char pad4[0x44 - 4];
    S_41DC0_Menu *f44;
    char pad48[0x64 - 0x48];
    S_41CF0_Owner *f64;
    char pad68[0x284 - 0x68];
    int f284;
    char pad288[0x294 - 0x288];
    char f294[0x10];
    char f2a4[0x10];
    char f2b4[0x10];
    S_41CF0_Cam *f2c4;
    int f2c8;
    char pad2cc[0x388 - 0x2cc];
    char s388[0x32];
    char s3BA[0x32];
    char pad3ec[0x474 - 0x3ec];
    int f474;
    char pad478[0x48c - 0x478];
    int f48c;
    int f490;
    int f494;
    char pad498[0x4a4 - 0x498];
    int f4a4;
    char pad4a8[0x550 - 0x4a8];
    S_41DC0_Text *f550;
    char pad554[4];
    S_41DC0_Text *f558;
    char pad55c[0x564 - 0x55c];
    int f564;
    char pad568[0x58c - 0x568];
    S_41DC0_Obj *f58c;
    S_41DC0_Btn *f590;
    S_41DC0_Btn *f594;
    void func_0003D910(int a0);
    void func_000321F0();
    void func_00041CF0();
    void func_00041DC0();
};

struct S_3D910_Base {
    void func_0003D910(int a0);
};

void BmxEventEditor::func_00041CF0()
{
    int idx = D_002A8490->f2e0->f300;
    if (D_002A8490->f8->arr14[idx]->v16() == 0 && f2c8 == 0) {
        if (f48c != -1 || f564 != 0) {
            ((S_3D910_Base *)this)->func_0003D910(0);
        }
        v18(1);
        f2c8 = 1;
        f64->f4c0->v31(1, 1);
        D_002A8490->f2e0->f2fc->v18(1);
        f64->f4e0->f1a8->f95c = 0;
        f2c4->func_00069C40();
        f2c4->func_00069FD0(idx);
    }
}

void BmxEventEditor::func_00041DC0()
{
    if (f564 != 0 && (f474 == 3 || f474 == 4)) {
        ((S_3D910_Base *)this)->func_0003D910(0);
    }
    f58c->v4();
    f590->f1a4->f4->func_00198390();
    f594->f1a4->f4->func_00198390();
    f64->f4e0->f1a8->func_0010C090(f294, f2a4, f2b4, 1);
    f44->func_0002F450(0);
    f64->f4e0->func_000A4500(1, 0);
    func_000321F0();
    memset(s3BA, 0, 0x32);
    memset(s388, 0, 0x32);
    f550->func_0008A020(s3BA);
    f550->func_0008A040(s388);
    f558->func_0008B670(D_00275630);
    f550->v4();
    f558->v4();
    f490 = 0;
    f494 = 0;
    f4a4 = 0;
    f284 = 1;
}

