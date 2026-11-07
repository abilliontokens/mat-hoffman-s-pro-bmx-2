/* 1 function from 0x0010F320 to 0x00111A00, found by Ghidra. */
#include "common.h"

struct Vec4_10F320 { float x,y,z,w; };
struct S_0002EF70_Item { void func_0015B060(void *,float,float); };
struct S_0002EF70_Mgr { char pad[0x14]; S_0002EF70_Item *items[1]; void *func_00135E80(); };
struct S_2EF70_Ent { void *func_001362A0(float,float,int,void *,int,float); };
struct Manager10F320 {
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
    virtual void get(const char *,const char *,char *,int *);
    void *f4;
    S_0002EF70_Mgr *f8;
};
extern Manager10F320 *D_002A8490;
extern char D_002A4A00[],D_002A4C10[],D_00275678[],D_00283CD0[],D_00283CDC[];
extern "C" void *func_001E8A44(int);
extern "C" void *func_001E8920(void *,const void *,int);
extern "C" unsigned int strlen(const char *);
extern "C" char *strcpy(char *,const char *);
#pragma intrinsic(strlen,strcpy)
int func_001ADCC0(char *,int,const char *,...);
struct C_0010F320 {
    int w[0x121c/4];
    void func_00104BE0();
    void func_00109F80();
    void func_0010F320(int a0,int a1,int a10,int a14,int a18,int a1c,int a20,int a24,Vec4_10F320 v28,Vec4_10F320 v38,Vec4_10F320 v48,int a58,int a5c);
};


void __fastcall func_0010F320(char* self, int edx, void* a0, void* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int aa, int ab, int ac, int ad, int ae, int af, int b0, int b1, int b2, int b3, int a58, int a5c)
{
    *(int*)(self + 0xa2c) = a5c;
    *(int*)(self + 0xa28) = a5c;
    *(int*)(self + 0x1218) = a5c + 1;
    *(void**)(self + 0x24) = a0;
}
