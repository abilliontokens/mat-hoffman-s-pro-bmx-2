/* 18 functions from 0x001BC310 to 0x001BD080, found by Ghidra. */
#include "common.h"

extern int D_0028D334;
extern int D_0028D3B4;
extern int D_0028D44C;
extern "C" void *memset(void *dst, int c, unsigned int n);

void func_001E8390(void *p);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct S_001BCC90_A84 {
    char pad0[0x230];
    u8 flags230;
};

extern S_001BCC90_A84 *D_002A8490;

struct S_001BCC90_F670 {
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
    virtual void vf32();
};

extern S_001BCC90_F670 *D_002F0670;

struct C_001BCC90 {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    C_001BCC90 *func_001BCC90(void *param_1);
};

struct S_001BCC40_F7B8 {
    char pad0[8];
    u32 f8;
};

extern S_001BCC40_F7B8 *D_002F07B8;

struct C_001BCC40 {
    void *vtbl;
    char pad4[0x10C];
    void *f110;
    char pad114[0xC];
    void *f120;
    void func_001BCC40();
    void func_00157660();
};

struct C_00149380 {
    void func_00149380();
};

struct C_UIGlobalManagerVT {
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
    virtual void *vf28(void *a, void *b);
};

struct S_001BC710_PageObj {
    virtual void destroy(int flags);
};

extern S_001BC710_PageObj *D_002F0630;

struct S_001BC810_D8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void vf7(int a);
    virtual void vf8();
};

extern S_001BC810_D8 *D_002EFDB8;

struct S_001BC810_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct S_001BC710_F24 {
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
    virtual void v35();
    virtual void v36();
    void func_00157810();
};

/* UIGlobalManager */
struct C_UIGlobalManager {
    void *vtbl;
    char pad4[0x20];
    S_001BC710_F24 *f24;
    int f28;
    S_001BC810_Item **f2C;
    int func_001BC7F0(void *a);
    C_UIGlobalManager *func_001BC770(void *param);
    void func_001BC7A0();
    void func_001BC810();
    void *func_001BCA30(unsigned int flags);
    void *func_001BCBE0(void *a1, void *a2, int a3);
    int func_001BCA90();
    void func_00157660();
};

void func_001BC310();

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_001BBAA0 {
    void func_001BBAA0(void *a, void *b);
};

struct C_001BC640 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001BC640 *func_001BC640(void *param);
};

struct C_001BC670 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void func_001D3F50();
    void func_001BC670(void *a1, void *a2);
};

struct C_001BC6B0 {
    void *vtbl;
    void func_00157660();
    void *func_001BC6B0(unsigned int flags);
};

struct C_001BC6E0 {
    int count;
    char *data;
    char func_001BC6E0(void *param);
};

C_001BC640 *C_001BC640::func_001BC640(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D334;
    return this;
}

void C_001BC670::func_001BC670(void *a1, void *a2)
{
    f24 = (int)a1;
    f28 = (int)a2;
    ((C_001BBAA0 *)a1)->func_001BBAA0(this, (void *)&func_001BC310);
    ((C_001BBAA0 *)f28)->func_001BBAA0(this, (void *)&func_001BC310);
    func_001D3F50();
}

void *C_001BC6B0::func_001BC6B0(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = (void *)&D_0028D334;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

char C_001BC6E0::func_001BC6E0(void *param)
{
    int func_001E8BB0(...);
    char *func_001E83E8(...);
    void func_001E8920(...);
    int i;

    for (i = 0; i < count; i++) {
        if (func_001E8BB0(param, data + i * 0x80, 0x80) == 0)
            return i;
    }
    count = count + 1;
    data = func_001E83E8(data, count * 0x80);
    memset(data + i * 0x80, 0, 0x80);
    func_001E8920(data + i * 0x80, param, 0x80);
    return count - 1;
}

C_UIGlobalManager *C_UIGlobalManager::func_001BC770(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f2C = 0;
    f28 = 0;
    f24 = 0;
    vtbl = (void *)&D_0028D3B4;
    return this;
}

void C_UIGlobalManager::func_001BC7A0()
{
    vtbl = (void *)&D_0028D3B4;
    if (f2C != 0) {
        func_001E8390(f2C);
        f2C = 0;
    }
    if (D_002F0630 != 0) {
        D_002F0630->destroy(1);
        D_002F0630 = 0;
    }
    func_00157660();
}

int C_UIGlobalManager::func_001BC7F0(void *a)
{
    if (f24 != 0) {
        f24->v36();
    }
    return 1;
}

void C_UIGlobalManager::func_001BC810()
{
    int i;

    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    for (i = 0; i < f28; i++) {
        f2C[i]->v5();
    }
    if (f24 != 0) {
        f24->func_00157810();
        f24->v2();
        f24 = 0;
    }
}

C_001BCC90 *C_001BCC90::func_001BCC90(void *param_1)
{
    f24 = param_1;
    if (D_002A8490->flags230 & 0x20) {
        D_002F0670->vf32();
    }
    return this;
}

