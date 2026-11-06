/* 1 function from 0x00042840 to 0x00043F00, found by Ghidra. */
#include "common.h"
#include <string.h>

struct V4 {
    float x, y, z, w;
    V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct Obj390 {
    void func_00198390();
};

struct MidD {
    char pad0[4];
    Obj390 *f4;
    char pad8[8];
    int f10;
    void func_00164820(int a);
    void func_001670C0(int a, int b, int c);
    void func_00132D20();
    void func_00194F10(V4 *out);
};

struct Mid2D {
    char pad0[4];
    int f4;
};

struct MgrD {
    char pad0[0x1a4];
    MidD *f1A4;
    char pad1A8[4];
    Mid2D *f1AC;
};

struct Obj44D {
    char pad0[0x5c];
    MidD *f5C;
};

struct GObjD {
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void vf7(int a);
    virtual void vf8();
};

struct S_Text {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008B670(char *s);
};

struct S_Btn {
    void func_001A4100(int a, int b, int c);
};

struct S_Obj {
    char pad0[0x28];
    int f28;
    void func_001983A0();
};

struct S_Entry {
    int type;
    int pad4;
    S_Obj *obj;
    S_Obj *objC;
    int pad10;
    int pad14;
    int pad18;
    S_Entry() { type = -1; pad4 = 0; obj = 0; objC = 0; pad10 = 0; pad14 = 0; pad18 = 0; }
};

struct S_Slot {
    char pad0[0x44];
    int f44;
};

struct S_Item {
    char pad0[0x314];
    char s314[0x32];
    char pad346[0x358 - 0x346];
    int f358;
    int f35c;
    char pad360[0x36c - 0x360];
    int f36c;
};

struct S_Owner {
    char pad0[0x5a4];
    S_Slot *f5A4;
    int f5A8;
    S_Item **f5AC;
    S_Item *GetItem(int k)
    {
        if (f5A8 > 0 && f5AC != 0 && k < f5A8)
            return f5AC[k];
        return 0;
    }
};

extern GObjD *D_002EFDB8;
extern float D_002A14D4;
extern float D_002A14D8;
extern float D_002A14DC;
extern float D_00275AEC;
extern float D_00275548;
extern char D_00276FF4[];
extern char D_00276FD8[];
extern char D_00276F2C[];
extern char D_00276BB4[];
extern char D_00276F58[];
extern char D_002A5870[];
extern char D_002A5EA0[];
extern char D_002A60B0[];
extern char D_002A4C10[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

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
    Obj44D *f44;
    char pad48[0x64 - 0x48];
    S_Owner *f64;
    char pad68[0x2cc - 0x68];
    int f2cc;
    int f2d0;
    char pad2d4[4];
    int f2d8;
    char pad2dc[0x428 - 0x2dc];
    int f428;
    int pad42c;
    int f430;
    int f434;
    int pad438;
    int f43c;
    float f440;
    int f444;
    int f448;
    char pad44c[0x47c - 0x44c];
    int f47c;
    int f480;
    int f484;
    char pad488[0x48c - 0x488];
    int f48c;
    int f490;
    char pad494[0x4a0 - 0x494];
    int f4a0;
    char pad4a4[0x51c - 0x4a4];
    V4 f51c;
    char pad52c[0x53c - 0x52c];
    S_Btn *f53c;
    char pad540[0x558 - 0x540];
    S_Text *f558;
    char pad55c[0x564 - 0x55c];
    S_Entry *f564;
    char pad568[0x598 - 0x568];
    MgrD *f598;
    MgrD *f59c;
    int cnt5a0;
    void func_0003D910(int a0);
    int func_00042840();
};
