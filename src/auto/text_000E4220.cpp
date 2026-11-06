/* 6 functions from 0x000E4220 to 0x000E51B0, found by Ghidra. */
#include "common.h"
#include "string.h"

extern int D_0027FC74;
void func_001E891B(void *p);

/* anything the page owns and frees through its virtual destructor */
struct S_000E4AB0_Obj {
    virtual ~S_000E4AB0_Obj();
};

/* owned object destroyed with an explicit call, then freed */
struct S_000E4AB0_Raw {
    void func_001D6410();
};

/* BmxUIPageRiderOps */
struct C_000E4AB0 {
    void *vtbl;
    char pad4[0x50C];
    S_000E4AB0_Obj *f510;
    S_000E4AB0_Obj *a514[5];
    S_000E4AB0_Obj *a528[5];
    S_000E4AB0_Obj *a53C[5];
    S_000E4AB0_Obj *a550[5];
    S_000E4AB0_Raw *a564[5];
    char pad578[0x6B8 - 0x578];
    S_000E4AB0_Obj *a6B8[6];
    S_000E4AB0_Obj *a6D0[4];
    S_000E4AB0_Obj *a6E0[4];
    C_000E4AB0 *func_000E4830(int a0);
    void func_001BE360(int a0);
    void func_000E4AB0();
    void func_001BE3F0();
};

struct C_000E5150_Slots {
    char pad0[0x62C];
    int f62C[3];
    int f638[8];
};

struct C_0005C020 {
    C_000E5150_Slots *func_0005C020(int param);
    void func_0005C1B0(int a, int b);
    void func_0005C170(int a, int b);
};

struct C_000E5150_Mgr {
    char pad0[0x190];
    int a190[(0x2C0 - 0x190) / 4];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};

/* the strings of the text table the root holds at +0x2E8 (+4) */
struct S_000E4BC0_Strings {
    char pad0[0x800];
    char *f800;
    char pad804[0x838 - 0x804];
    char *f838;
    char pad83C[0x950 - 0x83C];
    char *f950;
    char pad954[0xF50 - 0x954];
    char *fF50;
};

struct S_000E4BC0_Text {
    int f0;
    S_000E4BC0_Strings *f4;
};

/* lookup of named UI nodes, held by the root at +0x2EC */
struct S_000E4BC0_Lookup {
    int *func_0018C160(int name);
};

struct C_000E5150_Global {
    char pad0[0x2E0];
    C_000E5150_Mgr *f2E0;
    char pad2E4[4];
    S_000E4BC0_Text *f2E8;
    S_000E4BC0_Lookup *f2EC;
};

extern C_000E5150_Global *D_002A8490;

extern int D_002A3398, D_002A339C, D_002A33A0, D_002A33A4;
C_000E4AB0 *C_000E4AB0::func_000E4830(int a0)
{
 int *w = (int *)this;
 int *p; int i;
 func_001BE360(a0);
 ((volatile int *)w)[0]=(int)&D_0027FC74;
 ((volatile int *)w)[318]=0;
 ((volatile int *)w)[317]=0;
 ((volatile int *)w)[316]=0;
 ((volatile int *)w)[319]=0x3f800000;
 ((volatile int *)w)[208]=0;
 ((volatile int *)w)[209]=0;
 ((volatile int *)w)[210]=0;
 w[160]=0;
 w[161]=0;
 w[481]=0;
 w[482]=0;
 w[483]=0;
 w[163]=-1;
 w[162]=-1;
 w[168]=0;
 w[169]=0;
 w[166]=0;
 w[170]=0;
 w[164]=0;
 w[165]=0;
 p=&w[0x62c/4]; i=35;
 do { p[-0x8c/4]=0; p[0]=0; p[-0x378/4]=0; p[-0x2d4/4]=0; p[0xc4/4]=255; ++p; } while(--i);
 w[0x50c/4]=0;
 p=&w[0x528/4]; i=5;
 do { p[-5]=0; p[0]=0; p[5]=0; p[10]=0; p[15]=0; ++p; } while(--i);
 p=&w[0x428/4]; i=16;
 do { p[-16]=0; p[0]=0; ++p; } while(--i);
 w[308]=-1;
 w[309]=-1;
 w[294]=0;
 w[293]=0;
 w[295]=0;
 w[292]=0;
 w[249]=0;
 w[213]=0;
 w[167]=0;
 w[282]=0;
 w[283]=0;
 w[284]=0;
 w[296]=0;
 w[287]=0;
 w[288]=0;
 w[289]=0;
 w[290]=0;
 w[291]=0;
 w[285]=0;
 w[305]=0;
 w[310]=0;
 ((volatile int *)w)[306]=1;
 ((volatile int *)w)[307]=1;
 memset(&w[0x6b8/4],0,24);
 for(i=0;i<4;i++) a6E0[i]=0;
 for(i=0;i<4;i++) a6D0[i]=0;
 w[311]=0;
 w[312]=0;
 w[314]=0;
 w[313]=0;
 w[315]=0;
 w[297]=0;
 w[298]=0;
 w[299]=0;
 w[300]=0;
 w[301]=0;
 w[302]=0;
 w[0x4f0/4]=D_002A3398;
 w[0x4f4/4]=D_002A339C;
 w[0x4f8/4]=D_002A33A0;
 w[0x4fc/4]=D_002A33A4;
 w[211]=0;
 w[212]=0;
 w[320]=0;
 w[321]=0;
 w[322]=0;
 w[324]=0;
 return this;
}

void C_000E4AB0::func_000E4AB0()
{
    int i;
    S_000E4AB0_Raw *p;

    vtbl = (void *)&D_0027FC74;
    for (i = 0; i < 5; i++) {
        if (a514[i]) {
            delete a514[i];
            a514[i] = 0;
        }
        if (a528[i]) {
            delete a528[i];
            a528[i] = 0;
        }
        if (a53C[i]) {
            delete a53C[i];
            a53C[i] = 0;
        }
        if (a550[i]) {
            delete a550[i];
            a550[i] = 0;
        }
        p = a564[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
            a564[i] = 0;
        }
    }
    for (i = 0; i < 6; i++) {
        if (a6B8[i]) {
            delete a6B8[i];
            a6B8[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (a6E0[i]) {
            delete a6E0[i];
            a6E0[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (a6D0[i]) {
            delete a6D0[i];
            a6D0[i] = 0;
        }
    }
    if (f510) {
        delete f510;
        f510 = 0;
    }
    func_001BE3F0();
}

int __stdcall func_000E5150(int index)
{
    C_000E5150_Mgr *mgr = D_002A8490->f2E0;
    return mgr->f2C0->func_0005C020(mgr->f2D8)->f638[index];
}

int __stdcall func_000E5180(int index)
{
    C_000E5150_Mgr *mgr = D_002A8490->f2E0;
    return mgr->f2C0->func_0005C020(mgr->f2D8)->f62C[index];
}

