#include <string.h>
struct S_0008FCB0_Text {
 char pad0[0x34]; float f34; char pad38[12]; unsigned int f44; char pad48[6]; unsigned char f4E;
 void func_001D5AD0(); void func_001D6600();
 void func_0005E840(const char *); void func_0005E9A0(unsigned int);
 void func_00082430(float); void func_00082400(int); void func_0005E960(int,int);
};
struct S_0008FCB0_Rider { char pad0[0x11f4]; int f11F4; };
struct S_0008FCB0_Strings { char pad0[0x52c]; char *f52C; };
struct S_0008FCB0_State { char pad0[0x2d4]; int f2D4; };
struct S_0008FCB0_Game { char pad0[0x270]; int f270,f274; char pad278[0x68]; S_0008FCB0_State *f2E0; };
struct S_0008FCB0_Rect { int x,y,w,h; float z0,z1; };
struct S_0008FCB0_Render { char pad0[0x1e0]; S_0008FCB0_Rect f1E0; void func_0012B2B0(S_0008FCB0_Rect *,S_0008FCB0_Rect *); };
struct S_0008FCB0_Engine { int f0; S_0008FCB0_Render *f4; };
struct C_0008FCB0 {
 char pad0[0x24]; S_0008FCB0_Text *a24[4]; char pad34[4]; int f38,f3C; char pad40[4];
 S_0008FCB0_Rider *f44; S_0008FCB0_Strings *f48; char pad4C[0x88]; int fD4;
 char padD8[0x50]; int f128; float f12C; char pad130[12]; int f13C;
 char pad140[0x24]; S_0008FCB0_Text *f164,*f168; char pad16C[0x18]; float f184;
 S_0008FCB0_Text *f188,*f18C; char pad190[4]; S_0008FCB0_Text *f194;
 char pad198[0x68]; int f200,f204; S_0008FCB0_Text *f208;
 char pad20C[0xe0]; int a2EC[100],a47C[100]; char pad60C[0x20c];
 char s818[4][0x104]; int fC28; char padC2C[4]; int fC30; float fC34,fC38,fC3C;
 int fC40,fC44,fC48; float fC4C; S_0008FCB0_Text *fC50; int fC54,fC58;
 char padC5C[0xe0]; S_0008FCB0_Text *fD3C,*fD40,*fD44,*fD48; char padD4C[4]; float fD50;
 char padD54[0x10]; float fD64; char padD68[0x14]; int fD7C,fD80;
 S_0008FCB0_Text *fD84,*fD88; char padD8C[0x10]; int fD9C,fDA0;
 int func_0008FCB0(); void func_000847B0(); void func_000844B0(); void func_00157960();
 void func_00083410(); void func_000832A0();
};

extern S_0008FCB0_Engine *D_002EFDB8;
extern float D_00275544,D_0027A09C,D_00275460,D_0027A098,D_00276288,D_00275600,D_0027A094,D_0027A090;
extern unsigned int D_0028F5E0;
extern char D_002795A4[],D_00276F28[],D_002789B8[];
int func_001ADCC0(char *,int,const char *,...);
