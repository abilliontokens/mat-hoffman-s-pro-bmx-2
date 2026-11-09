/* 1 function from 0x0009A290 to 0x0009C770, found by Ghidra. */
#include "common.h"

struct C_0009A290_Obj {
    int func_0013B1A0(char *a);
};

struct C_0009A290 {
    union {
        int w[0x400 / 4];
        struct {
            int f0, f4, f8, fC, f10, f14;
            char pad18[0x194 - 0x18];
            int f194;
            void *f198;
        };
    };
    int func_0009A290(int a1, char *a2, int *a3);
};

struct C_00168280 {
    char pad0[0x4cc];
    C_00168280 *func_00168280();
    int func_00169490(const char *, int);
    void func_00169710(const char *);
    void func_00168A10(const char *, int *);
    void func_00168BE0(const char *, const char *, char *, int);
    void func_00168550(const char *, char *, int);
    void func_00168C20(const char *, int, int *);
    void func_00168C50(const char *, float, float *);
    void func_00168CB0(const char *, const float *, float *);
    void func_001691E0();
};
extern char D_002769F8[], D_0027A9BC[], D_0027A9A8[], D_0027A994[];
extern char D_0027A980[], D_0027A968[], D_00275630[];
extern char D_0027A958[], D_0027A944[], D_0027A934[];
int func_001ADCC0(char *, int, const char *, ...);
int func_001EA426(const char *, const char *);
int func_001E8A44(int);
struct C_00097A80 {
    char data[0x48e4];
    C_00097A80 *func_00097A80();
};
// companion object at this->f198+0x64: vtable slots used by func_0009A290
class C_v64 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93();
    virtual int v178(char *);
    virtual void v17C();
    virtual int v180(char *);
    virtual int v184(char *);
};
struct S198 { char pad[0x64]; C_v64 *o; };
struct Cx { int m(int a, int b); };
void *func_001ADA43(int);
void func_001AC58F(char *);
void func_0009A1F0(C_00168280 *, const char *, const char *, char *, int);
extern char D_0027A904[], D_0027A914[], D_0027A924[], D_002772CC[], D_00276980[], D_0027A8FC[], D_0027A8F0[], D_0027A8E0[], D_0027A8D8[], D_0027A8CC[], D_0027A8C4[], D_0027A8B0[], D_0027A8A4[], D_0027A894[], D_0027A888[], D_0027A878[], D_0027A85C[], D_0027A84C[], D_0027A83C[], D_0027A828[], D_0027A810[], D_0027A7F8[], D_0027A7E0[], D_0027A7CC[], D_0027A7BC[], D_0027A7A4[], D_0027A78C[], D_0027A774[], D_0027A760[], D_0027A748[], D_0027A730[], D_0027A718[];
extern char D_0027A700[],D_0027A6E0[],D_0027A6C0[],D_0027A6A8[],D_0027A694[],D_0027A678[],D_0027A658[],D_0027A638[];
extern float D_002A2400[4];
void func_001E891B(void *);
extern char D_0027A9D4;
extern char D_002A5870[];
extern char D_0027A9D0[];
extern C_0009A290_Obj *D_002BEAAC;
extern "C" char *__cdecl strcpy(char *, const char *);
extern "C" char *__cdecl strcat(char *, const char *);
#pragma optimize("y", off)
#pragma optimize("p", on)
int C_0009A290::func_0009A290(int a1, char *a2, int *a3)
{
    char buf[0x178];
    char key[0x28], value[0x100];
    C_00168280 *iniObj;
    w[0x198/4] = a1;
    w[0x194/4] = 0;
    w[0]=0; w[1]=0; w[2]=0; w[3]=0; w[4]=0; w[5]=0;
    int i=0;
    char c;
    do { c=D_002A5870[i]; buf[i]=c; ++i; } while(c);
    strcat(buf,a2);
    strcat(buf,".sol");
    if (!D_002BEAAC->func_0013B1A0(buf)) {
        w[0x194/4]=1;
        return (int)this;
    }
    iniObj=(C_00168280 *)func_001E8A44(0x4cc);
    iniObj=iniObj ? iniObj->func_00168280() : 0;
    iniObj->func_00169490(buf,0);
    iniObj->func_00169710(D_002769F8);
    w[6]=(int)a3; w[7]=(int)a3;
    iniObj->func_00168A10(D_0027A9BC,&w[3]);
    iniObj->func_00168A10(D_0027A9A8,&w[4]);
    iniObj->func_00168A10(D_0027A994,&w[5]);
    for(int group=0;group<3;group++) {
        for(int slot=0;slot<15;slot++) {
            int index=group*15+slot;
            w[0x2c/4+index]=-1;
            func_001ADCC0(key,0x28,D_0027A980,group+1,slot+1);
            iniObj->func_00168BE0(key,D_00275630,value,0x77);
            if(value[0]) {
                int found=-1;
                for(int n=0;n<(*(int **)(*(int *)(w[0x198/4]+0x64)+0x3ac))[9] && found==-1;n++) {
                    int *list=*(int **)(*(int *)(w[0x198/4]+0x64)+0x3ac);
                    int obj=((int *)list[10])[n];
                    if(*(int *)(obj+4)==1 && !func_001EA426(value,(char *)(obj+0xa0))) found=n;
                }
                w[0x2c/4+index]=found;
            }
            w[0xe0/4+index]=-1;
            func_001ADCC0(key,0x28,D_0027A968,group+1,slot+1);
            iniObj->func_00168BE0(key,D_00275630,value,0x77);
            if(value[0]) {
                int found=-1;
                for(int n=0;n<(*(int **)(*(int *)(a1+0x64)+0x3b4))[9] && found==-1;n++) {
                    int *list=*(int **)(*(int *)(a1+0x64)+0x3b4);
                    int obj=((int *)list[10])[n];
                    if(!func_001EA426(value,(char *)(obj+0x18))) found=n;
                }
                w[0xe0/4+index]=found;
            }
        }
    }
    iniObj->func_00168A10(D_0027A958,&w[8]);
    iniObj->func_00168A10(D_0027A944,&w[9]);
    iniObj->func_00168A10(D_0027A934,&w[10]);
    int count;
    char prefix[0x28], section[0x28], format[0x104];
    C_00097A80 **objects;
    for(int kind=0;kind<3;kind++) {
        switch(kind) {
        case 0: count=w[3]; strcpy(prefix,"EasyObjective"); break;
        case 1: count=w[4]; strcpy(prefix,"MediumObjective"); break;
        case 2: count=w[5]; strcpy(prefix,"HardObjective"); break;
        }
        if(count>0) {
            switch(kind) {
            case 0: w[0]=func_001E8A44(count*4); objects=(C_00097A80 **)w[0]; break;
            case 1: w[1]=func_001E8A44(count*4); objects=(C_00097A80 **)w[1]; break;
            case 2: w[2]=func_001E8A44(count*4); objects=(C_00097A80 **)w[2]; break;
            }
            for(int j=0;j<count;j++) {
                func_001ADCC0(section,0x28,D_002772CC,prefix,j+1);
                iniObj->func_00169710(section);
                C_00097A80 *mem=(C_00097A80 *)func_001E8A44(0x48e4);
                objects[j]=mem ? mem->func_00097A80() : 0;
                func_0009A1F0(iniObj,D_0027A8FC,D_00276980,objects[j]->data,0x3c);
                func_0009A1F0(iniObj,D_0027A8E0,D_0027A8F0,objects[j]->data+0x3c,0x3c);
                func_0009A1F0(iniObj,D_0027A8CC,D_0027A8D8,objects[j]->data+0x78,0x3c);
                iniObj->func_00168550(D_0027A8C4,objects[j]->data+0xb4,0x77);
                iniObj->func_00168550(D_0027A8B0,objects[j]->data+0x12c,0x77);
                iniObj->func_00168C20(D_0027A8A4,1,(int *)(objects[j]->data+0x1b8));
                iniObj->func_00168C20(D_0027A894,0,(int *)(objects[j]->data+0x1bc));
                iniObj->func_00168C20(D_0027A888,0,(int *)(objects[j]->data+0x1a8));
                iniObj->func_00168C20(D_0027A878,0,(int *)(objects[j]->data+0x1ac));
                iniObj->func_00168C20(D_0027A85C,0,(int *)(objects[j]->data+0x1b0));
                iniObj->func_00168C20(D_0027A84C,0,(int *)(objects[j]->data+0x1cc));
                for(int k=0;k<*(int *)(objects[j]->data+0x1cc);k++) {
                    func_001ADCC0(format,0x104,D_0027A83C,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x290+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A828,k+1);
                    iniObj->func_00168C20(format,-1,(int *)(objects[j]->data+0x1d0+k*4));
                    func_001ADCC0(format,0x104,D_0027A810,k+1);
                    iniObj->func_00168C20(format,-1,(int *)(objects[j]->data+0x260+k*4));
                    func_001ADCC0(format,0x104,D_0027A7F8,k+1);
                    iniObj->func_00168C20(format,-1,(int *)(objects[j]->data+0x230+k*4));
                    func_001ADCC0(format,0x104,D_0027A7E0,k+1);
                    iniObj->func_00168C20(format,-1,(int *)(objects[j]->data+0x200+k*4));
                    func_001ADCC0(format,0x104,D_0027A7CC,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x830+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A7BC,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0xdd0+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A7A4,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x1910+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A78C,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x1370+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A774,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x1eb0+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A760,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x2450+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A748,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x29f0+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A730,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x2f90+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A718,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x3530+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A700,k+1);
                    iniObj->func_00168C50(format,0.0f,(float *)(objects[j]->data+0x3b00+k*4));
                    func_001ADCC0(format,0x104,D_0027A6E0,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x3b30+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A6C0,k+1);
                    iniObj->func_00168A10(format,(int *)(objects[j]->data+0x40d0+k*4));
                    float vec[4]={0,0,0,1};
                    func_001ADCC0(format,0x104,D_0027A6A8,k+1);
                    iniObj->func_00168CB0(format,D_002A2400,vec);
                    if(vec[0]!=D_002A2400[0] || vec[1]!=D_002A2400[1] || vec[2]!=D_002A2400[2]) {
                        *(float *)(objects[j]->data+0x4100+k*16)=(float)(int)vec[0];
                        *(float *)(objects[j]->data+0x4104+k*16)=(float)(int)vec[1];
                        *(float *)(objects[j]->data+0x4108+k*16)=(float)(int)vec[2];
                    }
                    func_001ADCC0(format,0x104,D_0027A694,k+1);
                    iniObj->func_00168CB0(format,D_002A2400,(float *)(objects[j]->data+0x4760+k*16));
                    func_001ADCC0(format,0x104,D_0027A678,k+1);
                    iniObj->func_00168550(format,objects[j]->data+0x41c0+k*0x78,0x77);
                    func_001ADCC0(format,0x104,D_0027A658,k+1);
                    iniObj->func_00168C20(format,-1,(int *)(objects[j]->data+0x4820+k*4));
                    func_001ADCC0(format,0x104,D_0027A638,k+1);
                    iniObj->func_00168C20(format,-1,(int *)(objects[j]->data+0x4850+k*4));
                }
            }
        }
    }
    if(iniObj) {
        iniObj->func_001691E0();
        func_001E891B(iniObj);
    }
    return (int)this;
}
#pragma optimize("", on)
