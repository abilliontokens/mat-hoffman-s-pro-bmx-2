/* 3 functions from 0x001DB4D0 to 0x001DC010, found by Ghidra. */
#include "common.h"
#include <string.h>
struct WaterConfig {
 char pad0[0x54]; int f54; char pad58[0x10]; int f68;
 char pad6C[0x64]; void *fD0;
};
struct WaterItem {
 char pad0[0x54]; void *f54; void *f58; void *f5C;
 void func_001B0560(void *,void *);
};
struct WaterTable { char pad0[0x14]; char *f14; };
extern WaterTable *D_002A829C;
extern char D_001DB560[],D_001DB700[];
extern char D_0028FA04[],D_0028F9F4[],D_0028F9E4[],D_0028F9D4[];
extern int D_002ABE74;
extern char D_002A5A80[],D_0028F9C0[];
extern char D_002AC6D8[],D_002AC6EC[],D_002AC6FC[],D_002AC710[];
extern char D_002F0D08[],D_002F0E08[],D_002F0F08[],D_002F0C08[];
extern char D_0028F9AC[],D_0028F994[],D_0028F980[];
void *func_001E8A44(int);
struct I_Release;
I_Release *func_001D6E20(const char *,int,int);
void func_001ADCC0(char *,int,const char *,...);
void func_0014A7B0(char *,const char *);
struct WaterTexture {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void create(int,int,int,int,int,int,int,int,int);
 virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
 virtual void v13(); virtual void v14(); virtual void v15();
 virtual void *lock(int,int,int); virtual void unlock(int);
 WaterTexture *func_001D6AD0(int);
};
struct WaterEntry {
 int a,b,c,d,e;
 WaterEntry() { a=b=c=d=e=0; }
};
void func_001E891B(void *p);
void __stdcall func_00201100(void *p);
extern int D_0028F8F4;
struct C_00012140 { void func_00012140(void); C_00012140 *func_00142C70(); void func_00142C80(const char *,int); };
struct C_0014A540 { void func_0014A540(void); C_0014A540 *func_0014A520(char *); void func_0014A560(const char *,int); };
struct I_Release { virtual void v0(); virtual void v1(); virtual void Release(); };
struct XboxWaterDisplacement {
    void *vtbl;
    char pad04[0x24];
    I_Release *f28;
    char pad2C[0x1C];
    void *f48;
    char pad4C[0x94];
    C_0014A540 *fE0;
    C_0014A540 *fE4;
    C_0014A540 *fE8;
    C_0014A540 *fEC;
    C_00012140 *fF0;
    C_00012140 *fF4;
    C_00012140 *fF8;
    C_00012140 *fFC;
    char pad100[0x108];
    I_Release *f208;
    void *f20C;
    char pad210[0x8];
    void *f218[3];
    void *f224[3];
    void *f230[0x96];
    void *f488[6];
    I_Release *f4A0;
    void func_001DBA40(void);
    void func_001CA1C0(void);
    void func_001CA1D0(WaterConfig *,const char *,int,int,int,unsigned int);
    XboxWaterDisplacement *func_001DBBF0(WaterConfig *,const char *,int,int,int,unsigned int);
};

void XboxWaterDisplacement::func_001DBA40(void)
{
    int i;
    vtbl = &D_0028F8F4;
    C_00012140 *p;
    if ((p = fF0) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fF4) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fF8) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fFC) != 0) { p->func_00012140(); func_001E891B(p); }
    if (f4A0) f4A0->Release();
    if (f48) func_001E891B(f48);
    if (f28) f28->Release();
    C_0014A540 *q;
    if ((q = fE8) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fE0) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fE4) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fEC) != 0) { q->func_0014A540(); func_001E891B(q); }
    if (f208) f208->Release();
    if (f20C) {
        func_001E891B(f20C);
        f20C = 0;
    }
    for (i = 0; i < 3; i++) {
        if (f218[i]) func_00201100(f218[i]);
        if (f224[i]) func_00201100(f224[i]);
    }
    for (i = 0; i < 0x96; i++) {
        if (f230[i]) func_00201100(f230[i]);
    }
    for (i = 0; i < 6; i++) {
        if (f488[i]) func_00201100(f488[i]);
    }
    func_001CA1C0();
}
