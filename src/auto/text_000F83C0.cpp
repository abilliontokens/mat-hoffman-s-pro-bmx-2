/* 1 function from 0x000F83C0 to 0x000F89B0, found by Ghidra. */
#include "common.h"

struct S_F83C0_Obj { void func_001D5AD0(); };
struct S_F83C0_Mgr {
    char pad0[0x24];
    S_F83C0_Obj *f24; S_F83C0_Obj *f28; S_F83C0_Obj *f2c; S_F83C0_Obj *f30;
    char pad34[0x1c];
    S_F83C0_Obj *f50; S_F83C0_Obj *f54; S_F83C0_Obj *f58; S_F83C0_Obj *f5c;
    char pad60[8];
    S_F83C0_Obj *f68; S_F83C0_Obj *f6c; S_F83C0_Obj *f70; S_F83C0_Obj *f74;
};
extern S_F83C0_Mgr *D_002B91AC;

struct S_F83C0_Node { char pad0[0x38]; unsigned int f38; char pad3c[0x1c]; unsigned char f58; void func_001D5AD0(); };
struct S_F83C0_Svc { int func_000301D0(); };
struct S_F83C0_Host { char pad0[0x74]; S_F83C0_Svc *f74; };
struct S_F83C0_Owner { char pad0[0x25c]; S_F83C0_Host *f25c; };
struct S_F83C0_Glob { char pad0[0x2e0]; char *f2e0; };
extern S_F83C0_Glob *D_002A8490;
void func_000D0DD0();

struct C_000F83C0 {
    char pad0[0x124];
    S_F83C0_Owner *f124;
    char pad128[0x18];
    S_F83C0_Host *f140;
    char pad144[0x24c];
    S_F83C0_Node *f390[8];
    char pad3b0[0x48];
    char pad3f8[8];
    char pad400[0x3c];
    int f43c[0x12];
    int f484;
    char pad488[4];
    int f48c;
    int f490;
    char pad494[4];
    int f498;
    int f49c;
    int f4a0;
    int f4a4;
    char pad4a8[0x24];
    short f4cc;
    char pad4ce[0x16];
    int f4e4;
    char pad4e8[4];
    int f4ec;
    int f4f0;
    int f4f4;
    char pad4f8[0x18];
    int f510;
    char pad514[4];
    int f518;
    int f51c;
    char pad520[0x18];
    int f538;
    int f53c;
    int f540;
    int f544;
    int f548;
    int f54c;
    int f550;
    char pad554[4];
    int f558;
    char pad55c[4];
    int f560;
    char pad564[0x14];
    int f578;
    int f57c;
    int f580;
    char pad584[4];
    int f588;
    int f58c;
    int f590;
    char pad594[0x20];
    int f5b4;
    void func_000D0DD0();
    int func_000F83C0(void);
};

int C_000F83C0::func_000F83C0(void)
{
    int zero = 0;

    if (f124->f25c->f74->func_000301D0() == zero) {
        if (f590 != zero) {
            (f498 != zero ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
        } else if (f5b4 != zero) {
            (f498 != zero ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
            (f4a0 != zero ? D_002B91AC->f6c : D_002B91AC->f54)->func_001D5AD0();
        } else if (f4f0 == zero && f4f4 == zero && f4e4 == zero && f558 == zero && f538 != zero && f588 == zero && f4ec == zero) {
            if (f4e4 != zero) {
                (f4a0 != zero ? D_002B91AC->f6c : D_002B91AC->f54)->func_001D5AD0();
                (f49c != zero ? D_002B91AC->f70 : D_002B91AC->f58)->func_001D5AD0();
            } else {
                (f498 != zero ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
                (f4a0 != zero ? D_002B91AC->f6c : D_002B91AC->f54)->func_001D5AD0();
            }
        } else if (f57c == zero && f580 == zero) {
            if (f4ec != zero) {
                (f498 != zero ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
                (f4a0 != zero ? D_002B91AC->f6c : D_002B91AC->f54)->func_001D5AD0();
            } else if (f510 == zero) {
                (f498 != zero ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
                (f4a0 != zero ? D_002B91AC->f6c : D_002B91AC->f54)->func_001D5AD0();
                if (f48c != 2 && f48c != 4 && f48c != 7 && f48c != 9 && f48c != 0xd &&
                    f48c != 0x10 && f43c[f48c] == zero) {
                    (f49c != zero ? D_002B91AC->f70 : D_002B91AC->f58)->func_001D5AD0();
                }
            }
        }
        if (f538 != zero) {
            (f498 != zero ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
        }
        if (f560 != zero && f510 == zero && f4f0 == zero && f4f4 == zero && f4e4 == zero && f51c == zero && f518 == zero && f578 == zero &&
            f558 == zero && f57c == zero && f580 == zero && f538 == zero && f4ec == zero && f5b4 == zero) {
            (f4a4 != zero ? D_002B91AC->f74 : D_002B91AC->f5c)->func_001D5AD0();
        }
    }

    if (f124->f25c->f74->func_000301D0() == zero && f484 == zero) {
        for (int i = 0; i < 8; i++) {
            if (i == f490) {
                int idx = *(int *)(D_002A8490->f2e0 + 0x300 + i * 4);
                if (idx != -1) {
                    S_F83C0_Node *n = *(S_F83C0_Node **)((char *)this + 0x3b0 + idx * 4);
                    n->f38 = (n->f38 & 0xffffff) | ((int)*(short *)((char *)this + 0x4cc) << 24);
                    n->f58 |= 2;
                    n->func_001D5AD0();
                }
            }
            S_F83C0_Node *n = f390[i];
            n->f38 = (n->f38 & 0xffffff) | ((int)*(short *)((char *)this + 0x4cc) << 24);
            n->f58 |= 2;
            n->func_001D5AD0();
        }
    }

    D_002B91AC->f24->func_001D5AD0();
    D_002B91AC->f28->func_001D5AD0();
    D_002B91AC->f2c->func_001D5AD0();
    D_002B91AC->f30->func_001D5AD0();

    if (f124->f25c->f74->func_000301D0() == zero && f484 == zero) {
        for (int i = 0; i < 2; i++) {
            S_F83C0_Node *n = *(S_F83C0_Node **)((char *)this + 0x3f8 + i * 4);
            n->f38 = (n->f38 & 0xffffff) | ((int)*(short *)((char *)this + 0x4cc) << 24);
            n->f58 |= 2;
            n->func_001D5AD0();
        }
        int idx = *(int *)(*(int *)(*(int *)((char *)this + 0x140) + 4) + 0x30);
        S_F83C0_Node *n = *(S_F83C0_Node **)((char *)this + 0x3fc + idx * 4);
        n->f38 = (n->f38 & 0xffffff) | ((int)*(short *)((char *)this + 0x4cc) << 24);
        n->f58 |= 2;
        (*(S_F83C0_Node **)((char *)this + 0x400 + (idx - 1) * 4))->func_001D5AD0();
    }

    if (f510 == zero && f4f0 == zero && f4f4 == zero && f4e4 == zero && f51c == zero && f558 == zero && f538 == zero && f57c == zero &&
        f4ec == zero && f590 == zero && f580 == zero && f5b4 == zero) {
        if (f58c != zero) {
            func_000D0DD0();
        }
        return 1;
    }

    if (f58c != zero) {
        S_F83C0_Node *n = (S_F83C0_Node *)f550;
        n->f38 = (n->f38 & 0xffffff) | ((int)*(short *)((char *)this + 0x544) << 24);
        n->f58 |= 2;
        n->func_001D5AD0();
    } else {
        f540 = 0;
        f544 = 0;
        f548 = 0;
        f53c = 0xb2;
        f54c = 0x3e800000;
        f58c = 1;
    }
    return 1;
}
