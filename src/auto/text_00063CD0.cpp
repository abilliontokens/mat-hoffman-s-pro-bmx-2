/* 5 functions from 0x00063CD0 to 0x00064BA0, found by Ghidra. */
#include "common.h"
struct C_63CD0_Call {
 char pad0[0x38];
 unsigned int color;
 char pad3c[0x58-0x3c];
 unsigned char flags;
 void setColor(unsigned int c) { color = (color & 0xff000000) | (c & 0xffffff); flags |= 2; }
 void setAlpha(unsigned char a) { ((unsigned char *)&color)[3] = a; flags |= 2; }
 void func_001D5AD0();
 void func_0005E7C0(float, float);
 void func_00051140(float);
 void func_00051160(float);
 void func_00051180(float);
 void func_00062070(int);
 void func_00062CD0(int);
 void func_00051A90(int);
};

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001C4D50 {
    void func_001C4D50(int a);
};

struct C_001C3D40 {
    void func_001C3D40(int a);
    void func_001C3D60(int a);
};

struct S_00064A40_64;

struct C_00064A40_3B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    virtual void v30(S_00064A40_64 *a);
};

struct C_00064A40_534 {
    void func_000A84F0();
};

struct S_00064A40_1a8 {
    char pad0[0x95c];
    int unk95c;
};

struct S_00064A40_4e0 {
    char pad0[0x1a8];
    S_00064A40_1a8 *unk1a8;
};

struct S_00064A40_64 {
    char pad0[0x3b4];
    C_00064A40_3B4 *unk3b4;
    char pad3b8[0x4e0 - 0x3b8];
    S_00064A40_4e0 *unk4e0;
    char pad4e4[0x534 - 0x4e4];
    C_00064A40_534 *unk534;
};

struct C_00064A40_1C0 {
    int func_00097700();
    void __stdcall_dummy();
    void func_000988B0(C_00064A40_3B4 *a, C_00064A40_534 *b);
    void func_00098EE0(C_00064A40_3B4 *a, C_00064A40_534 *b);
    void func_000981D0(C_00064A40_3B4 *a, C_00064A40_534 *b, int c);
};

struct C_00064A40_1D0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    char pad4[0x60];
    S_00064A40_64 *unk64;
    char pad68[0x1c0 - 0x68];
    C_00064A40_1C0 *unk1c0;
    char pad1c4[0x1f4 - 0x1c4];
    int unk1f4;
    void func_000533E0();
    void func_000321C0();
};

struct C_00064A40 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    char pad4[0x64];
    int unk68;
    char pad6c[0x1d0 - 0x6c];
    C_00064A40_1D0 *unk1d0;
    char pad1d4[0x274 - 0x1d4];
    int unk274;
    int unk278;
    int unk27c;
    char pad280[0x2b0 - 0x280];
    int unk2b0;
    int unk2b4;
    int unk2b8;
    void func_00064A40();
};
extern C_001C3D40 *D_002F07B8;

struct S_00064990_1a8 {
    char pad0[0x95c];
    int unk95c;
};

struct S_00064990_4e0 {
    char pad0[0x1a8];
    S_00064990_1a8 *unk1a8;
};

struct S_00064990_64 {
    char pad0[0x4e0];
    S_00064990_4e0 *unk4e0;
};

struct C_00064990_1D0 {
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
    char pad4[0x60];
    S_00064990_64 *unk64;
    char pad68[0xF0];
    C_001C4D50 *unk158;
    char pad15C[0x98];
    int unk1F4;
    void func_00032A40();
};

/* widget with a 24-bit colour in the low bits of its dword at +0x48 */
struct C_00064580_Widget {
    char pad0[0x48];
    union {
        unsigned int unk48;
        struct {
            unsigned int rgb : 24;
            unsigned int alpha : 8;
        } color;
    };
    char pad4C[2];
    unsigned char unk4E;
    void func_0005E840(int a);
    void func_001D6600();
};

struct C_00064580 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x60];
    int unk64;
    char pad68[0xD4];
    C_00064580_Widget *unk13C[16];
    char pad17C[0x4C];
    int unk1C8;
    int unk1CC;
    C_00064990_1D0 *unk1D0;
    int func_00064580(int idx, int a1, unsigned int a2);
    void func_00064990();
};

struct C_000645E0_74 {
    void func_00030210();
    void func_000301F0();
};

struct S_000645E0_44 {
    char pad0[0x74];
    C_000645E0_74 *unk74;
};

struct C_000645E0_1C0 {
    int func_00097FD0();
    void func_0009A0E0(int a);
    void func_000976C0();
    int func_00097700();
    void func_000988B0(C_00064A40_3B4 *a, C_00064A40_534 *b);
    void func_00098EE0(C_00064A40_3B4 *a, C_00064A40_534 *b);
    void func_000981D0(C_00064A40_3B4 *a, C_00064A40_534 *b, int c);
    void func_0009A100(int a, int b);
};

struct C_000645E0_1D0 {
    char pad0[0x44];
    S_000645E0_44 *unk44;
    char pad48[0x64 - 0x48];
    S_00064A40_64 *unk64;
    char pad68[0x158 - 0x68];
    C_001C4D50 *unk158;
    char pad15c[0x1c0 - 0x15c];
    C_000645E0_1C0 *unk1c0;
    char pad1c4[0x35c - 0x1c4];
    int unk35c;
    int func_00051840();
    void func_00053460();
};

struct C_000645E0_250 {
    int func_00092A10();
    int func_00092A50(int *a);
};

struct C_000645E0_2C0 {
    int func_0005C020(int a);
};

struct S_000645E0_2E0 {
    char pad0[0x48];
    int unk48;
    char pad4c[0x2c0 - 0x4c];
    C_000645E0_2C0 *unk2c0;
    char pad2c4[0x2d8 - 0x2c4];
    int unk2d8;
};

struct S_002A8490 {
    char pad0[0x244];
    int unk244;
    char pad248[0x2e0-0x248];
    S_000645E0_2E0 *unk2e0;
};
extern S_002A8490 *D_002A8490;

struct C_000645E0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    char pad4[0x60];
    int unk64;
    int unk68;
    char pad6c[0x1c8 - 0x6c];
    int unk1c8;
    int unk1cc;
    C_000645E0_1D0 *unk1d0;
    char pad1d4[4];
    int unk1d8;
    float unk1dc;
    int unk1e0;
    char pad1e4[0x214 - 0x1e4];
    int unk214;
    int unk218;
    int unk21c;
    int unk220;
    int unk224;
    int unk228;
    int unk22c;
    int pad230;
    int unk234;
    int unk238;
    int pad23c;
    int unk240;
    int unk244;
    char pad248[0x250 - 0x248];
    C_000645E0_250 *unk250;
    int unk254;
    char pad258[0x268 - 0x258];
    int unk268;
    char pad26c[0x274 - 0x26c];
    int unk274;
    int unk278;
    int unk27c;
    char pad280[0x288 - 0x280];
    int unk288;
    int unk28c;
    char pad290[0x2b0 - 0x290];
    int unk2b0;
    int pad2b4;
    int unk2b8;
    char pad2bc[0x2c4 - 0x2bc];
    int unk2c4;
    void func_000645E0();
};

extern void __fastcall func_00061B80(int *);
extern void __fastcall func_001D5AD0(void *);
extern void __fastcall func_0005E7C0(void *, int, float, float);
extern void __fastcall func_00051140(void *, int, float);
extern void __fastcall func_00051160(void *, int, float);
extern void __fastcall func_00051180(void *, int, float);
extern void __fastcall func_00062070(int *, int, int);
extern void __fastcall func_00062CD0(int *, int, int);
extern void __fastcall func_00051A90(void *, int, int);
void __fastcall func_00063CD0(int *self) {
 if(self[0x64/4]==4 && self[0x280/4]) {
 func_00061B80(self); if(self[0x288/4]) { func_001D5AD0((void *)self[500/4]);
 } return;
 }
 int *p;
 p=(int *)self[276/4]; if(p[1]!=0x43e68000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43e68000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }

 p=(int *)self[264/4]; if(p[1]!=0x43e68000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43e68000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }

 switch(self[0x64/4]) {
 case 7: ((C_63CD0_Call *)self[280/4])->func_0005E7C0(491.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(491.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 return;
 case 2: case 6:
 switch(self[0x270/4]) {
 case 0: ((C_63CD0_Call *)self[276/4])->func_0005E7C0(320.0f, 388.0f);
((C_63CD0_Call *)self[264/4])->func_0005E7C0(320.0f, 388.0f);
 if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 break;
 case 4: ((C_63CD0_Call *)self[276/4])->func_0005E7C0(491.0f, 388.0f);
((C_63CD0_Call *)self[264/4])->func_0005E7C0(491.0f, 388.0f);
 if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }

 if(self[0x2c4/4]) { ((C_63CD0_Call *)self[280/4])->func_0005E7C0(365.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(365.0f, 388.0f);
 } else { ((C_63CD0_Call *)self[280/4])->func_0005E7C0(227.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(227.0f, 388.0f);
 }
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 break;
 case 11: case 12: ((C_63CD0_Call *)self[276/4])->func_0005E7C0(491.0f, 388.0f);
((C_63CD0_Call *)self[264/4])->func_0005E7C0(491.0f, 388.0f);
 if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 break;
 case 1: if (self[488/4]) { func_001D5AD0((void *)self[272/4]);
 } else { func_001D5AD0((void *)self[284/4]);
 }
 ((C_63CD0_Call *)self[280/4])->func_0005E7C0(365.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(365.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 break;
 case 3:
 if(self[0x64/4]==2) { if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 ((C_63CD0_Call *)self[280/4])->func_0005E7C0(365.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(365.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 }
 else if(self[0x28c/4]) {
 ((C_63CD0_Call *)self[0x1f0/4])->func_00051140(128.0f);((C_63CD0_Call *)self[0x1f0/4])->func_00051160(128.0f);
 ((C_63CD0_Call *)self[496/4])->func_0005E7C0(128.0f, 214.0f);
((C_63CD0_Call *)self[0x1f0/4])->func_00051180(10.0f);func_001D5AD0((void *)self[496/4]);

 ((C_63CD0_Call *)self[0x12c/4])->func_00051140(179.2f);((C_63CD0_Call *)self[0x12c/4])->func_00051160(179.2f);
 ((C_63CD0_Call *)self[300/4])->func_0005E7C0(102.4f, 198.4f);
func_001D5AD0((void *)self[300/4]);

 ((C_63CD0_Call *)self[0x1a4/4+self[0x228/4]])->func_0005E7C0(384.0f,214.0f);
 ((C_63CD0_Call *)self[0x1a4/4+self[0x228/4]])->func_00051140(128.0f);
 ((C_63CD0_Call *)self[0x1a4/4+self[0x228/4]])->func_00051160(128.0f);
 ((C_63CD0_Call *)self[0x1a4/4+self[0x228/4]])->func_00051180(10.0f);
 func_001D5AD0((void *)self[0x1a4/4+self[0x228/4]]);
 ((C_63CD0_Call *)self[0x130/4])->func_00051140(179.2f);((C_63CD0_Call *)self[0x130/4])->func_00051160(179.2f);
 ((C_63CD0_Call *)self[304/4])->func_0005E7C0(358.4f, 198.4f);
func_001D5AD0((void *)self[304/4]);

 if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 func_001D5AD0((void *)self[276/4]);
 ((C_63CD0_Call *)self[280/4])->func_0005E7C0(365.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(365.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }

 } break;
 case 2: case 8: case 9: if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 if (self[488/4]) { func_001D5AD0((void *)self[272/4]);
 } else { func_001D5AD0((void *)self[284/4]);
 }
 break;
 default: break;
 } break;
 case 1: if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 ((C_63CD0_Call *)self[280/4])->func_0005E7C0(365.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(365.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 break;
 case 8: ((C_63CD0_Call *)self[276/4])->func_0005E7C0(370.0f, 388.0f);
((C_63CD0_Call *)self[264/4])->func_0005E7C0(370.0f, 388.0f);
 if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 ((C_63CD0_Call *)self[280/4])->func_0005E7C0(50.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(50.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 break;
 case 3: ((C_63CD0_Call *)self[276/4])->func_0005E7C0(491.0f, 388.0f);
((C_63CD0_Call *)self[264/4])->func_0005E7C0(491.0f, 388.0f);
 if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }

 case 9:
 if(self[0x2b0/4]) { ((C_63CD0_Call *)self[280/4])->func_0005E7C0(365.0f, 388.0f);
((C_63CD0_Call *)self[268/4])->func_0005E7C0(365.0f, 388.0f);
 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }
 } break;
 default: p=(int *)self[276/4]; if(p[1]!=0x43f58000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43f58000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }
p=(int *)self[264/4]; if(p[1]!=0x43f58000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43f58000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }
if (self[480/4]) { func_001D5AD0((void *)self[264/4]);
 } else { func_001D5AD0((void *)self[276/4]);
 }
 break;
 }
 func_001D5AD0((void *)self[252/4]);
func_001D5AD0((void *)self[256/4]);

 int i; for(i=0;i<5;i++) { func_001D5AD0((void *)self[0x17c/4+i]);func_001D5AD0((void *)self[0x190/4+i]); }
 if(!self[0x214/4] && self[0x64/4]!=4 && self[0x64/4]!=5 && self[0x1ec/4]) {
 p=(int *)self[0x1ec/4];
 if(((float *)p)[1]!=0.0f || ((float *)p)[2]!=0.0f) {p[1]=0;p[2]=0;((unsigned char *)p)[0x58]|=1;}
 p=(int *)self[0x1ec/4];if(p[0x28/4]!=0x44200000){p[0x28/4]=0x44200000;((unsigned char *)p)[0x58]|=1;}
 p=(int *)self[0x1ec/4];if(p[0x2c/4]!=0x43e00000){p[0x2c/4]=0x43e00000;((unsigned char *)p)[0x58]|=1;}
 ((C_63CD0_Call *)self[0x1ec/4])->setColor(0);
 if(self[0x64/4]==2) ((C_63CD0_Call *)self[0x1ec/4])->setAlpha(0xb2);
 else ((C_63CD0_Call *)self[0x1ec/4])->setAlpha(0x40);func_001D5AD0((void *)self[492/4]);

 }
 if(self[0x64/4]==4) {
 if(self[0x288/4]) {func_001D5AD0((void *)self[500/4]);
}func_001D5AD0((void *)self[504/4]);

 p=(int *)self[280/4]; if(p[1]!=0x43b68000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43b68000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }
p=(int *)self[268/4]; if(p[1]!=0x43b68000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43b68000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }

 if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }

 if(self[0x224/4]) {if (self[488/4]) { func_001D5AD0((void *)self[272/4]);
 } else { func_001D5AD0((void *)self[284/4]);
 }
}
 ((C_63CD0_Call *)self)->func_00062070(D_002A8490->unk244);((C_63CD0_Call *)self)->func_00062CD0(((int *)D_002A8490)[0x244/4]);
 for(i=0;i<self[0x224/4];i++) {func_001D5AD0((void *)self[0x1a4/4+i]);func_001D5AD0((void *)self[0x12c/4+i]);}
 } else if(self[0x64/4]==6) {func_001D5AD0((void *)self[504/4]);
} else if(self[0x64/4]==5) {
 if(self[0x288/4]) {func_001D5AD0((void *)self[500/4]);
}func_001D5AD0((void *)self[504/4]);

 for(i=0;i<2;i++)func_001D5AD0((void *)self[0x1b4/4+i]);
 p=(int *)self[280/4]; if(p[1]!=0x43b68000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43b68000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }
p=(int *)self[268/4]; if(p[1]!=0x43b68000 || p[2]!=0x43c20000) { unsigned char flags=((unsigned char *)p)[0x58]|1; p[1]=0x43b68000;p[2]=0x43c20000;((unsigned char *)p)[0x58]=flags; }
if (self[484/4]) { func_001D5AD0((void *)self[268/4]);
 } else { func_001D5AD0((void *)self[280/4]);
 }

 ((C_63CD0_Call *)self)->func_00062CD0(((int *)D_002A8490)[0x244/4]);
 if(!self[0x230/4])((C_63CD0_Call *)self[0x1d0/4])->func_00051A90(1);
 for(i=0;i<self[0x224/4];i++) {func_001D5AD0((void *)self[0x1a4/4+i]);func_001D5AD0((void *)self[0x12c/4+i]);}
 } else if(self[0x64/4]==3) {func_001D5AD0((void *)self[508/4]);
}
}

int C_00064580::func_00064580(int idx, int a1, unsigned int a2)
{
    if (idx >= 0 && idx < 16) {
        unk13C[idx]->func_0005E840(a1);
        C_00064580_Widget *w = unk13C[idx];
        if (w->unk48 != a2) {
            w->unk4E |= 8;
            w->color.rgb = a2;
        }
        unk13C[idx]->func_001D6600();
    }
    return idx + 1;
}

void C_000645E0::func_000645E0()
{
    int r;
    unk1c8 = 1;
    unk1e0 = 0;
    v6();
    unk2c4 = 0;
    unk214 = 0;
    unk228 = 0;
    unk22c = 0;
    unk234 = 0;
    unk238 = 0;
    unk224 = unk1d0->func_00051840();
    unk240 = 0;
    unk244 = 0;
    unk218 = 0;
    unk214 = 0;
    unk21c = -1;
    unk1d8 = 0;
    unk1dc = 1.0f;
    unk27c = -1;
    unk278 = 1;
    unk254 = unk250->func_00092A10();
    unk288 = 0;
    unk28c = 0;
    unk1d0->unk35c = 0;
    unk2b0 = 0;
    unk68 = 1;
    unk2b8 = 0;
    r = D_002A8490->unk2e0->unk2c0->func_0005C020(D_002A8490->unk2e0->unk2d8);
    switch (unk64) {
    case 0:
        if (unk1d0->unk1c0->func_00097FD0() == 1) {
            unk1d0->unk1c0->func_0009A0E0(r);
            unk1d0->unk1c0->func_000976C0();
            if (!unk1d0->unk1c0->func_00097700()) {
                unk1d0->unk1c0->func_000988B0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
                unk1d0->unk1c0->func_00098EE0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
                unk1d0->unk1c0->func_000981D0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534, 0);
            }
        }
        unk1d0->unk44->unk74->func_00030210();
        unk214 = 1;
        break;
    case 1:
        unk1d0->unk44->unk74->func_00030210();
        unk218 = 1;
        unk1d0->unk1c0->func_0009A100(r, D_002A8490->unk2e0->unk48);
        break;
    case 2:
        if (!unk250->func_00092A50(&unk268))
            unk268 = 8000;
        unk1d0->unk44->unk74->func_000301F0();
        break;
    case 3:
        if (unk1d0->unk1c0->func_00097FD0() == 1) {
            unk1d0->unk1c0->func_0009A0E0(r);
            unk1d0->unk1c0->func_000976C0();
            if (!unk1d0->unk1c0->func_00097700()) {
                unk1d0->unk1c0->func_000988B0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
                unk1d0->unk1c0->func_00098EE0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
                unk1d0->unk1c0->func_000981D0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534, 0);
            }
        }
        unk1cc = 0;
        if (unk224 && !unk274)
            unk220 = 1;
        else
            unk220 = 0;
        unk218 = 1;
        break;
    case 4:
        unk1d0->unk44->unk74->func_00030210();
        unk1d0->func_00053460();
        break;
    case 7:
        unk1d0->unk44->unk74->func_00030210();
        unk1dc = 2.0f;
        break;
    case 8:
    case 9:
        unk218 = 1;
        break;
    }
    if (unk64 != 4)
        unk1d0->unk158->func_001C4D50(1000);
}

void C_00064580::func_00064990()
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unk1C8 = 0;
    unk1D0->v34();
    unk1D0->func_00032A40();
    v4();
    unk1D0->unk1F4 = 0;
    unk1D0->unk64->unk4e0->unk1a8->unk95c = 0;
    if (unk64 != 3 || unk1CC != 5) {
        unk1D0->unk158->func_001C4D50(1000);
    }
    D_002F07B8->func_001C3D40(0);
}

void C_00064A40::func_00064A40()
{
    unk1d0->func_000533E0();
    unk1d0->func_000321C0();
    unk1d0->v35();
    unk1d0->func_000533E0();
    v29();
    unk274 = 0;
    unk1d0->unk1f4 = 1;
    unk1d0->unk64->unk4e0->unk1a8->unk95c = 1;
    unk27c = -1;
    unk278 = 1;
    unk2b0 = 0;
    unk68 = 1;
    unk2b8 = 0;
    if (unk1d0->unk64->unk3b4)
        unk1d0->unk64->unk3b4->v30(unk1d0->unk64);
    if (unk1d0->unk64->unk534)
        unk1d0->unk64->unk534->func_000A84F0();
    if (unk1d0->unk1c0 && !unk1d0->unk1c0->func_00097700()) {
        unk1d0->unk1c0->func_000988B0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
        unk1d0->unk1c0->func_00098EE0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534);
        unk1d0->unk1c0->func_000981D0(unk1d0->unk64->unk3b4, unk1d0->unk64->unk534, 0);
    }
    D_002F07B8->func_001C3D60(0);
}