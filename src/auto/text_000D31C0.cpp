/* 1 function from 0x000D31C0 to 0x000D3DA0, found by Ghidra. */
#include "common.h"
extern float D_0027DE74;
extern float D_002755E8;

/* raw field access: M(type, base, byte offset) */
#define M(T, base, off) (*(T *)((char *)(base) + (off)))
#define D31_MANAGER (D_002A8490->f2e0)
#define D31_PROFILE (D31_MANAGER->f2c0->func_0005C020(D31_MANAGER->f2d8))
extern "C" char *strcpy(char *, const char *);
#pragma intrinsic(strcpy)
extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
extern float D_00278C48;

struct S_000D31C0_Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual int v27();
    virtual void v28(int a, int b);
};

struct S_000D31C0_Dev {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};
extern S_000D31C0_Dev *D_002EFDB8;

struct C_000301D0 { int func_000301D0(); };
struct C_000BC5D0 { void func_000BC5D0(void *a, int b); int func_000B5870(); };
struct C_0005B3F0 { void func_0005B3F0(); };
struct C_0005C020;
struct S_000D31C0_Mgr {
    char pad0[0x2c0];
    C_0005C020 *f2c0;
    char pad2c4[0x14];
    int f2d8;
};
struct S_000D31C0_Glob { char pad0[0x2e0]; S_000D31C0_Mgr *f2e0; };
extern S_000D31C0_Glob *D_002A8490;
struct C_0005C020 { int *func_0005C020(int a); };
struct C_001617F0 { int func_001617F0(void *buf, int a); };
extern C_001617F0 *D_002A829C;
struct S_000D31C0_Item { char pad0[0x1b8]; int **f1b8; void func_00182020(int a, int b); };
struct S_000D31C0_Name { char c[31]; };
extern S_000D31C0_Name D_0027F1E8;
extern S_000D31C0_Name D_0027F1C8;

struct C_000D31C0 {
    void func_000D31C0(float dt);
    void func_000D2860();
    void func_001BED00(float dt);
};

void C_000D31C0::func_000D31C0(float dt)
{
    char *self=(char *)this;
    char name[260];
    char *page=M(char *,self,0x124);
    char *ctx=M(char *,page,0x24);
    if (M(int,self,0x28c) || M(int,self,0x290) || M(int,self,0x2bc) || M(int,self,0x294)) {
        M(float,self,0x2a4)+=dt;
        if (M(float,self,0x2a4)>=D_0027DE74 && !M(S_000D31C0_Vt *,ctx,0x30)->v27()) {
            if (M(int,page,0x2a4)) {
                if (M(int,self,0x2bc)) {
                    M(int,self,0x2bc)=0; M(int,self,0x3d4)=0;
                    goto done_transition;
                }
                if (M(int,self,0x28c) || M(int,self,0x290) || M(int,self,0x294)) func_000D2860();
            } else if (M(int,self,0x290) || M(int,self,0x2bc) || M(int,self,0x294)) func_000D2860();
            M(int,self,0x298)=1;
            ((S_000D31C0_Vt *)this)->v28(M(int,self,0x2a0),M(int,self,0x29c));
            M(int,self,0x2a4)=0;
            M(int,self,0x28c)=0;
        }
    }
done_transition:
    M(float,self,0x420)+=dt;
    if (M(int,self,0x3dc)) {
        M(float,self,0x3c8)+=dt;
        if (M(float,self,0x3c8)>=D_002755E8 && !M(C_000301D0 *,M(char *,page,0x25c),0x74)->func_000301D0()
            && (M(int,self,0x3cc) || M(int,self,0x41c))) {
            if (M(int,self,0x41c)==1) M(int,self,0x280)=1;
            M(C_000BC5D0 *,page,0x270)->func_000BC5D0(self+0x2c4,0);
            M(int,self,0x3cc)=0; M(int,self,0x420)=0; M(int,self,0x41c)=0;
        }
    }
    if (M(int,self,0x1fec) && M(C_000BC5D0 *,page,0x270)->func_000B5870() && M(float,self,0x420)>=D_002755E8) {
        M(int,self,0x1fec)=0;
        func_000D2860();
        ((C_0005B3F0 *)D_002A8490->f2e0)->func_0005B3F0();
        M(int,M(char *,self,0x124),0x138)=8;
    }
    int index=M(int,self,0x2018);
    if (index!=M(unsigned char,M(char *,self,0x284),0x3b)) {
        if (M(float,self,0x2024)>=M(float,self,0x2028)) M(int,self,0x2020)=index;
        else {
            float amount=(float)(index-M(int,self,0x201c));
            amount *= M(float,self,0x2024)/M(float,self,0x2028);
            M(int,self,0x2020)=M(int,self,0x201c)+(int)amount;
            M(float,self,0x2024)+=dt;
        }
    }
    if (M(int,self,0x410)) {
        D_002EFDB8->v7(1); D_002EFDB8->v8();
        S_000D31C0_Item **it=(S_000D31C0_Item **)(self+0x2048);
        for (int n=10;n;n--,it++) {
            int v,id;
            if (M(int,it,-0x1c24)==1) {
                strcpy(name,"tracks\\ui\\textures\\solid_white");
                v=M(int,(*it)->f1b8,0);
                id=D_002A829C->func_001617F0(name,1);
            } else {
                strcpy(name,"tracks\\ui\\textures\\dotted_line");
                v=M(int,(*it)->f1b8,0);
                id=D_002A829C->func_001617F0(name,1);
            }
            (*it)->func_00182020(v,id);
        }
        int score=D31_PROFILE[1];
        for (int i=0;i<8;i++) {
            if (i==M(int,self,0x418)) {
                M(int,self,0x450+i*4)=2;
                if (M(int,self,0x1ff0+i*4)) M(int,self,0x470)=3;
                else if (M(int,self,0x3e8+i*4)) M(int,self,0x470)=1;
                else if (M(int,D31_MANAGER,4)==0 && score>=M(int,D31_MANAGER,0x2dc+i*4)) {
                    if (i==2 || i==5) M(int,self,0x470)=M(int,D31_PROFILE,0x618)==1?4:0;
                    else if (i==7) M(int,self,0x470)=M(int,self,0x2040)<i ? 0:4;
                    else if (i==6) {
                        if (M(int,D31_PROFILE,0x610)!=1 && M(int,D31_PROFILE,0x61c)==1) M(int,self,0x470)=4;
                        else M(int,self,0x470)=0;
                    } else M(int,self,0x470)=0;
                } else M(int,self,0x470)=0;
            } else if (M(int,self,0x1ff0+i*4)) M(int,self,0x450+i*4)=3;
            else if (M(int,self,0x3e8+i*4)) M(int,self,0x450+i*4)=1;
            else if (M(int,self,0x450+i*4)!=4) M(int,self,0x450+i*4)=0;
            if (M(int,D31_MANAGER,4)==0) {
                switch(i) {
case 0: if (score>=M(int,D31_MANAGER,0x2e8) && M(int,self,0x45c)!=1 && M(int,self,0x45c)!=3) M(int,self,0x45c)=4;if (score>=M(int,D31_MANAGER,0x2e0) && M(int,self,0x454)!=2 && M(int,self,0x454)!=1 && M(int,self,0x454)!=3) M(int,self,0x454)=4;if (score>=M(int,D31_MANAGER,0x2ec) && M(int,self,0x460)!=2 && M(int,self,0x460)!=1 && M(int,self,0x460)!=3) M(int,self,0x460)=4; break;
case 3: if (M(int,D31_PROFILE,0x618)==1) { if (score>=M(int,D31_MANAGER,0x2e4) && M(int,self,0x458)!=2 && M(int,self,0x458)!=1 && M(int,self,0x458)!=3) M(int,self,0x458)=4; if (score>=M(int,D31_MANAGER,0x2f0) && M(int,self,0x464)!=2 && M(int,self,0x464)!=1 && M(int,self,0x464)!=3) M(int,self,0x464)=4; } break;
case 2: if (score>=M(int,D31_MANAGER,0x2f0) && M(int,self,0x464)!=1 && M(int,self,0x464)!=3 && (M(int,D31_PROFILE,0x618)==1)) M(int,self,0x464)=4;if (score>=M(int,D31_MANAGER,0x2f8) && M(int,self,0x46c)!=1 && M(int,self,0x2040)>=7 && M(int,self,0x46c)!=3 && M(int,D31_MANAGER,4)==0 && M(int,D31_PROFILE,0x614)==1) M(int,self,0x46c)=4; break;
case 5: if (M(int,D31_PROFILE,0x618)==1 && M(int,self,0x458)!=1 && M(int,self,0x458)!=3 && score>=M(int,D31_MANAGER,0x2e4) && M(int,self,0x458)!=2) M(int,self,0x458)=4; break;
case 7: if (score>=M(int,D31_MANAGER,0x2f8) && M(int,self,0x46c)!=2 && M(int,self,0x46c)!=1 && M(int,self,0x46c)!=3 && (M(int,self,0x2040)>=7)) M(int,self,0x46c)=4; break;
case 4: if (score>=M(int,D31_MANAGER,0x2e0) && M(int,self,0x454)!=2 && M(int,self,0x454)!=1 && M(int,self,0x454)!=3) M(int,self,0x454)=4;if (score>=M(int,D31_MANAGER,0x2f4) && M(int,self,0x468)!=1 && M(int,self,0x468)!=3 && (M(int,D31_MANAGER,4)==0 && (M(int,D31_PROFILE,0x610)==1 || M(int,D31_PROFILE,0x61c)==1))) M(int,self,0x468)=4; break;
case 1: if (score>=M(int,D31_MANAGER,0x2ec) && M(int,self,0x460)!=2 && M(int,self,0x460)!=1 && M(int,self,0x460)!=3) M(int,self,0x460)=4;if (score>=M(int,D31_MANAGER,0x2f4) && M(int,self,0x468)!=2 && M(int,self,0x468)!=1 && M(int,self,0x468)!=3 && M(int,D31_MANAGER,4)==0 && (M(int,D31_PROFILE,0x610)==1 || M(int,D31_PROFILE,0x61c)==1)) M(int,self,0x468)=4; break;
case 6: if (score>=M(int,D31_MANAGER,0x2ec) && M(int,self,0x460)!=2 && M(int,self,0x460)!=1 && M(int,self,0x460)!=3) M(int,self,0x460)=4;if (score>=M(int,D31_MANAGER,0x2e0) && M(int,self,0x454)!=2 && M(int,self,0x454)!=1 && M(int,self,0x454)!=3) M(int,self,0x454)=4; break;
                }
            }
        }
        switch(M(int,self,0x418)) {
        case 0: strcpy(name,"tracks\\ui\\textures\\marqueeok"); break;
        case 1: strcpy(name,"tracks\\ui\\textures\\marqueechicago"); break;
        case 2: strcpy(name,"tracks\\ui\\textures\\marqueela"); break;
        case 3: strcpy(name,"tracks\\ui\\textures\\marqueelv"); break;
        case 4: strcpy(name,"tracks\\ui\\textures\\marqueeno"); break;
        case 5: strcpy(name,"tracks\\ui\\textures\\marqueeportland"); break;
        case 6: strcpy(name,"tracks\\ui\\textures\\marqueeboston"); break;
        case 7: strcpy(name,"tracks\\ui\\textures\\marqueetiki"); break;
        }
        S_000D31C0_Item *item=M(S_000D31C0_Item *,self,0x20b0);
        int texture=M(int,item->f1b8,0);
        int id=D_002A829C->func_001617F0(name,1);
        M(S_000D31C0_Item *,self,0x20b0)->func_00182020(texture,id);
        int j = 0;
        S_000D31C0_Item **entry=(S_000D31C0_Item **)(self+0x2090);
        for (;j<8;j++,entry++) {
            if (j==M(int,self,0x418)) strcpy(name,"tracks\\ui\\textures\\ui_mapglowon");
            else strcpy(name,"tracks\\ui\\textures\\ui_mapglowoff");
            texture=M(int,(*entry)->f1b8,0);
            id=D_002A829C->func_001617F0(name,1);
            (*entry)->func_00182020(texture,id);
        }
        int *state=(int *)(self+0x450);
        for (int n=8;n;n--,state++) {
            if (*state==2) {
                if (M(int,self,0x470)==3) strcpy(name,"tracks\\ui\\textures\\ui_mapcompletedon");
                else if (M(int,self,0x470)==1) strcpy(name,"tracks\\ui\\textures\\ui_mapunlockedon");
                else if (M(int,self,0x470)==4) strcpy(name,"tracks\\ui\\textures\\ui_mapunlockableon");
                else strcpy(name,"tracks\\ui\\textures\\ui_maplockedon");
            } else if (*state==3) strcpy(name,"tracks\\ui\\textures\\ui_mapcompletedoff");
            else if (*state==4) strcpy(name,"tracks\\ui\\textures\\ui_mapunlockableoff");
            else if (*state==1) strcpy(name,"tracks\\ui\\textures\\ui_mapunlockedoff");
            else strcpy(name,"tracks\\ui\\textures\\ui_maplockedoff");
            item=M(S_000D31C0_Item *,state,0x1c20);
            texture=M(int,item->f1b8,0);
            id=D_002A829C->func_001617F0(name,1);
            M(S_000D31C0_Item *,state,0x1c20)->func_00182020(texture,id);
        }
        M(int,self,0x410)=0;
    }
    if (M(int,self,0x3e4) && !M(int,self,0x3dc)) {
        M(float,self,0x3e0)+=dt;
        if (M(float,self,0x3e0)>=D_00278C48) {
            M(int,self,0x3dc)=1; M(int,self,0x3e4)=0;
        }
    }
    M(float,self,0x20b4)+=dt;
    func_001BED00(dt);
}
