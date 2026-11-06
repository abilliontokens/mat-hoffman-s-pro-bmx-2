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
    int func_000F83C0(void);
};
