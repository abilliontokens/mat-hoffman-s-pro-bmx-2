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

struct S_41F00_Cur {
    char pad0[0x284];
    int f284;
    char pad288[0x47C - 0x288];
    int f47C;
};

struct S_41F00_Item {
    char pad0[0x314];
    char s314[0x32];
};

struct S_41CF0_Owner {
    char pad0[0x4c0];
    S_41CF0_Slot31 *f4c0;
    char pad4c4[0x4e0 - 0x4c4];
    S_41CF0_Obj1A8 *f4e0;
    char pad4e4[0x5A4 - 0x4e4];
    S_41F00_Cur *f5A4;
    int f5A8;
    S_41F00_Item **f5AC;
    S_41F00_Item *GetItem(int k)
    {
        if (f5A8 > 0 && f5AC != 0 && k < f5A8)
            return f5AC[k];
        return 0;
    }
};

struct S_41F00_V4 {
    float x, y, z, w;
    S_41F00_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct S_41F00_P4 {
    float x, y, z, w;
};

extern S_41F00_P4 D_002A14D4;
extern float D_002A14D8;
extern float D_002A14DC;
extern float D_002A14E0;
extern char D_00276F8C[];

static inline void SetP4_00041F00(S_41F00_P4 *p, float x, float y, float z, float w)
{
    p->x = x;
    p->y = y;
    p->z = z;
    p->w = w;
}

struct S_41F00_Obj {
    char pad0[0x28];
    int f28;
    void func_00197E70(S_41F00_V4 *v);
    void func_00197B40(S_41F00_V4 *a, S_41F00_V4 *b);
    S_41F00_V4 *func_00199B00(S_41F00_V4 *out, int a);
};

struct S_41560_Block {
    char pad0[0x358];
    int w;
    int h;
    int d;
};

extern float D_00276E9C;
extern float D_00276E98;
extern float D_00275AEC;
extern float D_00275548;
extern char D_00276F78[];
extern char D_00276F68[];
int func_001E8AF0(void *a, void *b);

struct S_41F00_Entry {
    int type;
    int pad4;
    S_41F00_Obj *obj;
    S_41F00_Obj *objC;
};

struct S_41F00_Arr {
    int count;
    S_41F00_Entry **items;
    S_41F00_Entry *at(int i)
    {
        if (count > 0 && items != 0 && i < count)
            return items[i];
        return 0;
    }
};

struct S_41F00_Sub {
    void func_0008A910(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

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
    char f288;
    char pad289[3];
    int f28C;
    int f290;
    char f294[0x10];
    char f2a4[0x10];
    char f2b4[0x10];
    S_41CF0_Cam *f2c4;
    int f2c8;
    int f2cc;
    int f2d0;
    int f2d4;
    int f2d8;
    char pad2dc[0x2e4 - 0x2dc];
    int f2e4;
    char pad2e8[0x324 - 0x2e8];
    char s324[0x32];
    char pad356[0x388 - 0x356];
    char s388[0x32];
    char s3BA[0x32];
    char s3EC[0x32];
    char pad41E[0x420 - 0x41E];
    int f420;
    int f424;
    int f428;
    int f42C;
    int f430;
    char pad434[0x45C - 0x434];
    int f45C;
    int f460;
    char pad464[0x474 - 0x464];
    int f474;
    char pad478[0x484 - 0x478];
    int f484;
    char pad488[0x48c - 0x488];
    int f48c;
    int f490;
    int f494;
    char pad498[0x49C - 0x498];
    void **f49C;
    int f4a0;
    int f4a4;
    char pad4a8[0x4ac - 0x4a8];
    S_41F00_P4 f4ac;
    char pad4bc[0x4cc - 0x4bc];
    S_41F00_P4 f4cc;
    S_41F00_P4 f4dc;
    char pad4ec[0x51c - 0x4ec];
    S_41F00_P4 f51c;
    char pad52c[0x550 - 0x52c];
    S_41DC0_Text *f550;
    S_41F00_Sub *f554;
    S_41DC0_Text *f558;
    char pad55c[0x564 - 0x55c];
    S_41F00_Entry *f564;
    void *f568;
    void *f56c;
    void *f570;
    char pad574[0x57c - 0x574];
    int f57c;
    int f580;
    char pad584[0x58c - 0x584];
    S_41DC0_Obj *f58c;
    S_41DC0_Btn *f590;
    S_41DC0_Btn *f594;
    char pad598[0x5a0 - 0x598];
    S_41F00_Arr arr;
    void func_0003D910(int a0);
    void func_000321F0();
    void *func_00038850(void *obj, S_41F00_V4 v, int flag);
    int func_0003E660();
    void func_0003AD50();
    void func_000399A0(int a0);
    void func_000361F0(int a0);
    void func_00041CF0();
    void func_00041DC0();
    void func_00041F00();
    int func_00041560();
    int func_00038B10(void *obj, S_41F00_V4 va, S_41F00_V4 vb, int *ox, int *oy, int *oz, int flag);
    void func_00038A70(void *p, void **out);
    int func_0003D7B0(S_41F00_V4 v);
    __forceinline void FindBlock(void **out, void *p)
    {
        *out = 0;
        func_00038A70(p, out);
    }
    __forceinline void FindBlock2(void *p, void **out)
    {
        *out = 0;
        func_00038A70(p, out);
    }
};

struct S_3D910_Base {
    void func_0003D910(int a0);
};

int BmxEventEditor::func_00041560()
{
    S_41F00_V4 a;
    S_41F00_V4 b;
    S_41F00_V4 c;
    S_41F00_V4 pos;
    S_41F00_P4 tmp1;
    S_41F00_P4 tmp2;
    int px, py, pz;
    void *blk;
    int w, h;
    int i, j, k;
    int idx;
    int flag;
    S_41F00_Entry *save564;
    void *save568;
    void *save56C;
    int save48C;

    f564->obj->func_00197E70(&a);
    f564->obj->func_00197B40(&b, &c);
    flag = 1;
    if (func_00038B10(&f564->obj->f28, a, b, &px, &py, &pz, 1) == 0)
        return -1;
    FindBlock2(&f564->obj->f28, &blk);
    if (blk == 0)
        return -1;
    w = ((S_41560_Block *)blk)->w;
    h = ((S_41560_Block *)blk)->h;
    save48C = f48c;
    save564 = f564;
    save568 = f568;
    f564 = 0;
    f568 = 0;
    save56C = 0;
    blk = 0;
    if (f56c != 0) {
        save56C = f56c;
        f56c = 0;
    }
    if (f570 != 0) {
        blk = f570;
        f570 = 0;
    }
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if (b.x > D_00276E9C || b.x < D_00276E98) {
                idx = ((f45C * (px + i) + py) * f460 + j) + pz;
                pos.x = (float)(px + i) * D_00275AEC + (float)f428;
                pos.y = (float)py * D_00275548 + (float)f42C;
                pos.z = (float)(pz + j) * D_00275AEC + (float)f430;
            } else {
                idx = ((f45C * (px + j) + py) * f460 + i) + pz;
                pos.x = (float)(px + j) * D_00275AEC + (float)f428;
                pos.y = (float)py * D_00275548 + (float)f42C;
                pos.z = (float)(i + pz) * D_00275AEC + (float)f430;
            }
            if (f49C[idx] != 0) {
                flag = 0;
                if (func_0003D7B0(pos) != 0) {
                    f564->obj->func_00197E70(&pos);
                    f568 = func_00038850(f564->obj, pos, 0);
                    if (f564->type >= 3) {
                        if (f564->type == 3 || f564->type == 5)
                            f56c = func_00038850(f564->objC, pos, 0);
                        if (f564->type == 4 || f564->type == 5)
                            f570 = func_00038850(0, pos, 1);
                    }
                    if (func_0003E660() == 0) {
                        f564 = save564;
                        f568 = save568;
                        if (save56C != 0)
                            f56c = save56C;
                        if (blk != 0)
                            f570 = blk;
                        f48c = save48C;
                        return -1;
                    }
                    k = arr.count - 1;
                    if (k >= 0) {
                        do {
                            S_41F00_Entry *e2 = arr.at(k);
                            if (f564 == e2) {
                                f48c = k;
                                break;
                            }
                            k--;
                        } while (k >= 0);
                    }
                    if (f564->type == 0) {
                        if (func_001E8AF0(&f564->obj->f28, D_00276F78) != 0) {
                            S_41F00_Item *item = f64->GetItem(f64->f5A4->f284);
                            f288--;
                            func_001ADCC0(item->s314, 0x32, D_00276F68, (unsigned char)f288 + 1);
                            if (f288 == 0) {
                                f290 = 0;
                                *(S_41F00_P4 *)f294 = D_002A14D4;
                                *(S_41F00_P4 *)f2a4 = D_002A14D4;
                                *(S_41F00_P4 *)f2b4 = D_002A14D4;
                            } else if (f48c == f28C) {
                                k = f28C + 1;
                                if (k < arr.count) {
                                    do {
                                        S_41F00_Entry *e2 = arr.at(k);
                                        if (e2->type == 0) {
                                            if (func_001E8AF0(&e2->obj->f28, D_00276F78) != 0) {
                                                *(S_41F00_P4 *)f294 = *(S_41F00_P4 *)(e2->obj->func_00199B00((S_41F00_V4 *)&tmp1, 0));
                                                e2->obj->func_00197B40((S_41F00_V4 *)f2a4, (S_41F00_V4 *)f2b4);
                                                f28C = k;
                                                break;
                                            }
                                        }
                                        k++;
                                    } while (k < arr.count);
                                }
                                if (f28C == f48c) {
                                    k = 0;
                                    if (f28C > 0) {
                                        do {
                                            S_41F00_Entry *e2 = arr.at(k);
                                            if (e2->type == 0) {
                                                if (func_001E8AF0(&e2->obj->f28, D_00276F78) != 0) {
                                                    *(S_41F00_P4 *)f294 = *(S_41F00_P4 *)(e2->obj->func_00199B00((S_41F00_V4 *)&tmp2, 0));
                                                    e2->obj->func_00197B40((S_41F00_V4 *)f2a4, (S_41F00_V4 *)f2b4);
                                                    f28C = k;
                                                    break;
                                                }
                                            }
                                            k++;
                                        } while (k < f28C);
                                    }
                                }
                            }
                        }
                    }
                    func_0003D910(1);
                }
            }
        }
    }
    f564 = save564;
    f568 = save568;
    if (save56C != 0)
        f56c = save56C;
    if (blk != 0)
        f570 = blk;
    f48c = -1;
    return flag == 0;
}

void BmxEventEditor::func_00041CF0()
{
    int idx = D_002A8490->f2e0->f300;
    if (D_002A8490->f8->arr14[idx]->v16() == 0 && f2c8 == 0) {
        if (f48c != -1) {
            func_0003D910(0);
        } else if (f564 != 0) {
            func_0003D910(0);
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

void BmxEventEditor::func_00041F00()
{
    S_41F00_V4 v;
    S_41F00_Entry *e;
    int i;

    if (f564 != 0 && f48c == -1)
        func_0003D910(0);
    i = arr.count - 1;
    if (i >= f484) {
        do {
            e = arr.at(i);
            f564 = e;
            f48c = i;
            if (e->type == 0 || e->type >= 3) {
                e->obj->func_00197E70(&v);
                f568 = func_00038850(f564->obj, v, 0);
                if (f564->type >= 3) {
                    if (f564->type == 3 || f564->type == 5)
                        f56c = func_00038850(f564->objC, v, 0);
                    if (f564->type == 4 || f564->type == 5)
                        f570 = func_00038850(0, v, 1);
                }
                if (func_0003E660() != 0)
                    func_0003D910(1);
            } else {
                if (e->type == 2)
                    i -= e->type;
                func_0003D910(1);
            }
            i--;
        } while (i >= f484);
    }
    func_001ADCC0(f64->GetItem(f64->f5A4->f47C)->s314, 0x32, D_00276F8C);
    f284 = 0;
    f290 = 0;
    f288 = 0;
    f2c8 = 0;
    f2cc = 0;
    f2d0 = 0;
    f2d4 = 0;
    f2d8 = 0;
    f2e4 = 0;
    f420 = 1;
    f424 = 500;
    f48c = -1;
    f490 = 0;
    f494 = 0;
    f4a0 = 0;
    f4ac = D_002A14D4;
    f4cc = D_002A14D4;
    f4dc = D_002A14D4;
    f51c = D_002A14D4;
    f564 = 0;
    f568 = 0;
    f56c = 0;
    f570 = 0;
    f57c = 0;
    f580 = 0;
    memset(s324, 0, 0x32);
    memset(s3EC, 0, 0x32);
    v34();
    f554->func_0008A910();
    func_0003AD50();
    func_000399A0(0);
    func_000361F0(1);
}

