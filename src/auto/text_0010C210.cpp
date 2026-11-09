/* 1 function from 0x0010C210 to 0x0010DA70, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

struct Cfg10 {
    Cfg10 *func_00168280();
    void func_00169490(void *a, int b);
    void func_00169710(const char *name);
    int func_00168B90(const char *name, void *out);
    int func_00168CB0(const char *name, void *out, void *a);
    int func_00168A10(const char *name, void *out);
    void func_001691E0();
};
struct Extra10 {
 void func_0002B140(Cfg10 *);
 void func_000B6840(float,float,int);
 void func_001A9110(float,float,float,float,float,float,float,float);
 void func_001A9220(float,float);
 void func_000269B0(float,float,float);
};
extern char D_002837F0[];
extern char D_002837DC[];
extern char D_002837C4[];
extern char D_00283790[];
extern char D_00283778[];
extern char D_00283760[];
extern char D_00276748[];
extern char D_0028374C[];
extern char D_00283744[];
extern char D_0028373C[];
extern char D_00283734[];
extern char D_00283728[];
extern char D_00283718[];
extern char D_0028370C[];
extern char D_00283700[];
extern char D_002836E8[];
extern char D_002836D8[];
extern char D_002836C4[];
extern char D_002836B0[];
extern char D_002836A0[];
extern char D_00283680[];
extern char D_0028366C[];
extern char D_00283664[];
extern char D_00283650[];
extern char D_0028363C[];
extern char D_0028362C[];
extern char D_00283618[];
extern char D_00283604[];
extern char D_002835F4[];
extern char D_002835E0[];
extern char D_002835D0[];
extern char D_002835BC[];
extern char D_002835B4[];
extern char D_002835A4[];
extern char D_00283590[];
extern char D_0028357C[];
extern char D_00283564[];
extern char D_0028354C[];
extern char D_0028353C[];
extern char D_0028352C[];
extern char D_0028351C[];
extern char D_00283508[];
extern char D_002834F8[];
extern char D_002834E8[];
extern char D_002834D4[];
extern char D_002834C0[];
extern char D_002834A8[];
extern char D_00283490[];
extern char D_00283480[];
extern char D_00283470[];
extern char D_00283460[];
extern char D_00283454[];
extern char D_00283444[];
extern char D_00283434[];
extern char D_0028341C[];
extern char D_00283408[];
extern char D_002833F0[];
struct Mgr10 {
    void func_0013B1A0(void *a);
};
struct VObj10 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(float a);
    virtual void v29(void *a);
};
struct Node230 {
    void func_0019A680(void *a, void *b);
    void func_00198B70(void *a, void *b);
};
struct Mat10 {
    void func_000264C0(void *src);
};
struct Sub261 {
    void func_00026170(Cfg10 *cfg);
    float func_00026110();
};
struct C_0010C210 {
    void func_0010C210();
};
struct Q10C { float x, y, z, w; Q10C() { z = 0; y = 0; x = 0; w = 1.0f; } };
struct __declspec(align(16)) M44C { float m[16]; };
static __forceinline void ZeroMatrix10(float *p) {
    __m128 z = _mm_setzero_ps();
    _mm_store_ps(p, z); _mm_store_ps(p+4, z);
    _mm_store_ps(p+8, z); _mm_store_ps(p+12, z);
}
struct Owner10C {
    void func_0010C210();
};
extern Mgr10 *D_002BEAAC;
extern "C" void *func_001E8A44(unsigned int size);
extern int func_001E891B(void *p);
extern const float D_00275BF8;
extern const float D_00283A7C;
extern const float D_00283A78;
extern const float D_00275998;
extern char D_00283B28[], D_00283B20[], D_00283B18[], D_00283B08[], D_00283AF4[], D_00283AE0[], D_00283AD0[], D_00283ABC[], D_00283AB4[], D_00283AAC[], D_00283AA4[], D_00283A98[], D_00283A8C[], D_00283A80[];
extern char D_00283A68[], D_00283A5C[], D_00283A4C[], D_00283A38[], D_00283A2C[], D_00283A20[], D_00283A10[], D_00283A00[], D_002839F4[], D_002839E0[], D_002839D0[], D_002839C0[], D_002839B8[], D_002839A8[], D_0028399C[], D_0028398C[], D_00283978[], D_00283964[], D_00283950[], D_00283940[], D_00283930[], D_0028391C[], D_00283904[], D_002838F4[], D_002838E4[], D_002838D0[], D_002838B8[], D_002838B0[];
extern char D_002838A4[], D_002833C8[], D_002833B8[], D_002833A8[], D_00283390[], D_0028337C[], D_0028336C[], D_00283358[], D_00283344[], D_00283334[], D_00283328[], D_00283318[], D_00283308[], D_002832F4[], D_002832E4[], D_002832D8[];
extern char D_002832C8[], D_002832BC[], D_002832A4[], D_00283290[], D_00283280[], D_00283260[], D_00283240[], D_0028321C[], D_002831D0[], D_002831BC[], D_0028319C[], D_00283178[], D_0028316C[];
extern char D_00283160[], D_00283154[], D_00283148[], D_0028313C[], D_0028312C[], D_0028311C[], D_002830F0[], D_002830D0[], D_002830B4[], D_00283084[], D_00283070[], D_00283064[], D_0028301C[], D_00283008[];
extern char D_00283894[], D_00283884[], D_00283874[], D_00283864[], D_00283858[], D_0028384C[], D_00283840[], D_00283834[], D_00283820[], D_00283814[], D_002833E0[], D_0027C280[];
extern char D_00283800[], D_002837B4[], D_002837A4[];
extern float D_00277D04;
extern char D_002831F8[], D_002831EC[], D_0028310C[], D_002830F8[], D_002830E4[], D_002830C8[], D_00283030[];

float func_0014F510(float a);
#pragma optimize("y", on)
void Owner10C::func_0010C210()
{
      D_002BEAAC->func_0013B1A0((char *)this + 0x33c);
      Cfg10 *cfg;
      void *mem = func_001E8A44(0x4cc);
      if (mem != 0) {
          cfg = ((Cfg10 *)mem)->func_00168280();
      } else {
          cfg = 0;
      }
      cfg->func_00169490((char *)this + 0x33c, 0);
      cfg->func_00169710(D_00283B28);
      float v38;
      float v3c;
      cfg->func_00168B90(D_00283B20, &v38);
      cfg->func_00168B90(D_00283B18, &v3c);
      cfg->func_00168B90(D_00283B08, (char *)this + 0x4a8);
      cfg->func_00168B90(D_00283AF4, (char *)this + 0x1198);
      cfg->func_00168B90(D_00283AE0, (char *)this + 0x119c);
      cfg->func_00168B90(D_00283AD0, (char *)this + 0x11a0);
      cfg->func_00168B90(D_00283ABC, (char *)this + 0x1654);
      cfg->func_00168B90(D_00283AB4, (char *)this + 0xec);
      cfg->func_00168B90(D_00283AAC, (char *)this + 0xf0);
      cfg->func_00168B90(D_00283AA4, (char *)this + 0xf4);
      cfg->func_00168B90(D_00283A98, (char *)this + 0xfc);
      cfg->func_00168B90(D_00283A8C, (char *)this + 0x100);
      cfg->func_00168B90(D_00283A80, (char *)this + 0x104);
      *(float *)((char *)this + 0x28) = v3c * D_00275BF8;
      {
          char *t = (char *)this;
          VObj10 *obj = *(VObj10 **)(t + 0x1e0);
          char *src = t + 0xec;
          *(float *)((char *)obj + 0x190) = *(float *)src;
          *(float *)((char *)obj + 0x194) = *(float *)(src + 0x4);
          *(float *)((char *)obj + 0x198) = *(float *)(src + 0x8);
          *(float *)((char *)obj + 0x19c) = *(float *)(src + 0xc);
      }
      (*(VObj10 **)((char *)this + 0x1e0))->v28(v38 * D_00283A7C);
              Q10C q2;
        Q10C q1;
        { char *t=(char *)this; (*(Node230 **)(t + 0x230))->func_0019A680(&q1, t + 0x7c); }
      __declspec(align(16)) M44C matA;
      __declspec(align(16)) M44C matB;
      AsmZeroMatrix(&matA);
      matB = matA;
      ((Mat10 *)((char *)this + 0x8d0))->func_000264C0(&matB);
      {
          char *t = (char *)this;
          float obj210 = *(float *)(*(char **)(t + 0x1e0) + 0x210);
          *(float *)(t + 0x8d0) = (*(float *)(t + 0x80) * *(float *)(t + 0x80) + *(float *)(t + 0x84) * *(float *)(t + 0x84)) * (obj210 * D_00283A78) * *(float *)(t + 0x119c);
      }
      {
          char *t = (char *)this;
          float obj210 = *(float *)(*(char **)(t + 0x1e0) + 0x210);
          *(float *)(t + 0x8e4) = (*(float *)(t + 0x7c) * *(float *)(t + 0x7c) + *(float *)(t + 0x84) * *(float *)(t + 0x84)) * (obj210 * D_00283A78) * *(float *)(t + 0x11a0);
      }
      {
          char *t = (char *)this;
          float obj210 = *(float *)(*(char **)(t + 0x1e0) + 0x210);
          *(float *)(t + 0x8f8) = (*(float *)(t + 0x7c) * *(float *)(t + 0x7c) + *(float *)(t + 0x80) * *(float *)(t + 0x80)) * (obj210 * D_00283A78) * *(float *)(t + 0x1198);
      }
      *(float *)((char *)this + 0x90c) = 1.0f;
      *(unsigned char *)(*(char **)((char *)this + 0x230) + 0x180) &= 0xbf;
      *(unsigned char *)(*(char **)((char *)this + 0x230) + 0x180) |= 0x10;
      (*(Node230 **)((char *)this + 0x230))->func_00198B70(&q1, &q2);
      AsmZeroMatrix(&matA);
      matB = matA;
      ((Mat10 *)((char *)this + 0x910))->func_000264C0(&matB);
      {
          char *t = (char *)this;
          float obj210 = *(float *)(*(char **)(t + 0x1e0) + 0x210);
          *(float *)(t + 0x910) = (q1.y * q1.z + q1.z * q1.z) * (obj210 * D_00283A78) * *(float *)(t + 0x119c);
      }
      {
          char *t = (char *)this;
          float obj210 = *(float *)(*(char **)(t + 0x1e0) + 0x210);
          *(float *)(t + 0x924) = (q1.x * q1.x + q1.y * q1.y) * (obj210 * D_00283A78) * *(float *)(t + 0x11a0);
      }
      {
          char *t = (char *)this;
          float obj210 = *(float *)(*(char **)(t + 0x1e0) + 0x210);
          *(float *)(t + 0x938) = (q1.x * q1.x + q1.z * q1.z) * (obj210 * D_00283A78) * *(float *)(t + 0x1198);
      }
      *(float *)((char *)this + 0x94c) = 1.0f;
      (*(VObj10 **)((char *)this + 0x1e0))->v29((char *)this + 0x910);
      cfg->func_00169710(D_00283A68);
      cfg->func_00168B90(D_00283A5C, *(char **)((char *)this + 0x208) + 0x64);
      *(int *)((char *)this + 0x7a4) = *(int *)(*(char **)((char *)this + 0x208) + 0x64);
      cfg->func_00168B90(D_00283A4C, *(char **)((char *)this + 0x208) + 0x68);
      *(int *)((char *)this + 0x7a8) = *(int *)(*(char **)((char *)this + 0x208) + 0x68);
      cfg->func_00168B90(D_00283A38, (char *)this + 0x7bc);
      *(int *)((char *)this + 0x7c0) = *(int *)((char *)this + 0x7bc);
      cfg->func_00168B90(D_00283A2C, *(char **)((char *)this + 0x208) + 0x6c);
      cfg->func_00168B90(D_00283A20, *(char **)((char *)this + 0x208) + 0x70);
      cfg->func_00168B90(D_00283A10, *(char **)((char *)this + 0x208) + 0x74);
      cfg->func_00168B90(D_00283A00, *(char **)((char *)this + 0x208) + 0x90);
      cfg->func_00168B90(D_002839F4, *(char **)((char *)this + 0x208) + 0x78);
      cfg->func_00168B90(D_002839E0, *(char **)((char *)this + 0x208) + 0x7c);
      cfg->func_00168B90(D_002839D0, *(char **)((char *)this + 0x208) + 0x88);
      cfg->func_00168B90(D_002839C0, *(char **)((char *)this + 0x208) + 0x8c);
      cfg->func_00169710(D_002839B8);
      cfg->func_00168B90(D_002839A8, (char *)this + 0x658);
      cfg->func_00168B90(D_0028399C, (char *)this + 0x660);
      { char *t = (char *)this; *(float *)(t + 0x658) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x660) *= D_00275998; }
      cfg->func_00169710(D_0028398C);
      (*(Sub261 **)((char *)this + 0x5ec))->func_00026170(cfg);
      cfg->func_00168B90(D_00283978, (char *)this + 0x5f8);
      cfg->func_00168B90(D_00283964, (char *)this + 0x5fc);
      cfg->func_00168B90(D_00283950, (char *)this + 0x600);
      cfg->func_00168B90(D_00283940, (char *)this + 0x7b4);
      *(float *)((char *)this + 0x79c) = (*(Sub261 **)((char *)this + 0x5ec))->func_00026110();
      cfg->func_00169710(D_00283930);
      (*(Sub261 **)((char *)this + 0x5f0))->func_00026170(cfg);
      cfg->func_00168B90(D_0028391C, (char *)this + 0x604);
      cfg->func_00168B90(D_00283904, (char *)this + 0x608);
      cfg->func_00168B90(D_00283940, (char *)this + 0x7b8);
      *(float *)((char *)this + 0x7a0) = (*(Sub261 **)((char *)this + 0x5f0))->func_00026110();
      cfg->func_00169710(D_002838F4);
      (*(Sub261 **)((char *)this + 0x5f4))->func_00026170(cfg);
      cfg->func_00169710(D_002838E4);
      cfg->func_00168B90(D_002838D0, *(char **)((char *)this + 0x208) + 0x84);
      cfg->func_00168B90(D_002838B8, *(char **)((char *)this + 0x208) + 0x80);
      cfg->func_00169710(D_002838B0);
      cfg->func_00168B90(D_002838A4, (char *)this + 0x50c);
      cfg->func_00168B90(D_00283894, (char *)this + 0x510);
      cfg->func_00168B90(D_00283884, (char *)this + 0x514);
      cfg->func_00168B90(D_00283874, (char *)this + 0x518);
      cfg->func_00168B90(D_00283864, (char *)this + 0x51c);
      cfg->func_00168B90(D_00283858, (char *)this + 0x520);
      cfg->func_00168B90(D_0028384C, (char *)this + 0x524);
      cfg->func_00168B90(D_00283840, (char *)this + 0x528);
      {
          char *t = (char *)this;
          *(int *)(t + 0x7b0) = *(int *)(t + 0x528);
      }
      cfg->func_00168B90(D_00283834, (char *)this + 0x7c8);
      cfg->func_00168B90(D_00283820, (char *)this + 0x530);
      cfg->func_00168B90(D_00283814, (char *)this + 0x534);
      cfg->func_00168B90(D_00283800, (char *)this + 0x508);
      cfg->func_00168B90(D_002837F0, (char *)this + 0x52c);
      cfg->func_00168B90(D_002837DC, (char *)this + 0x49c);
      cfg->func_00168B90(D_002837C4, (char *)this + 0x4a0);
      { char *t = (char *)this; *(float *)(t + 0x50c) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x510) *= D_00275998; }
      cfg->func_00168B90(D_002837B4, (char *)this + 0x590);
      cfg->func_00168B90(D_002837A4, (char *)this + 0x58c);
      cfg->func_00168B90(D_00283790, (char *)this + 0x594);
      cfg->func_00168B90(D_00283778, (char *)this + 0x578);
      cfg->func_00168B90(D_00283760, (char *)this + 0x584);
      ((Extra10 *)((char *)this+0x778))->func_0002B140(cfg);
      cfg->func_00169710(D_00276748);
      float v50, v58, v54, v2c, v34, v30, v28, v24, v20, v1c;
      cfg->func_00168B90(D_0028374C, &v50);
      cfg->func_00168B90(D_00283744, &v58);
      cfg->func_00168B90(D_0028373C, &v54);
      cfg->func_00168B90(D_00283734, &v2c);
      cfg->func_00168B90(D_00283728, &v34);
      cfg->func_00168B90(D_00283718, *(char **)((char *)this+0x1e8) + 0x84);
      { char *t=(char *)this; (*(Extra10 **)(t+0x1e8))->func_000B6840(v34,v2c,*(int *)(t+0x24)); }
      { char *t = *(char **)((char *)this+0x1e8); *(float *)(t + 0x84) *= D_00275998; }
      cfg->func_00169710(D_0028370C);
      cfg->func_00168B90(D_00283700, (char *)this + 0x8c0);
      cfg->func_00168B90(D_002836E8, &v30);
      cfg->func_00168B90(D_002836D8, &v28);
      cfg->func_00168B90(D_002836C4, &v24);
      cfg->func_00168B90(D_002836B0, &v20);
      cfg->func_00168B90(D_002836A0, (char *)this + 0x4ec);
      cfg->func_00168B90(D_00283680, (char *)this + 0x8c4);
      cfg->func_00168B90(D_0028366C, (char *)this + 0x8c8);
      { char *t=(char *)this; float f=*(float *)(t+0x8c0); (*(Extra10 **)(t+0x1f0))->func_001A9110(v30,v28,v24,v28,v24,f,f,f); }
      (*(Extra10 **)((char *)this+0x1f0))->func_001A9220(0.0f,v20);
      *(int *)(*(char **)((char *)this+0x1f0)+0xc8)=0;
      { char *t=(char *)this; *(int *)(*(char **)(t+0x1f0)+0xb4)=*(int *)(t+0x8c8); }
      { char *t=(char *)this; *(int *)(*(char **)(t+0x1f0)+0xbc)=*(int *)(t+0x8c0); }
      { char *t=(char *)this; *(int *)(*(char **)(t+0x1f0)+0xc0)=*(int *)(t+0x8c0); }
      { char *t=(char *)this; *(int *)(*(char **)(t+0x1f0)+0xc4)=*(int *)(t+0x8c0); }
      cfg->func_00169710(D_00283664);
      cfg->func_00168B90(D_00283650, *(char **)((char *)this+0x1ec) + 0x34);
      cfg->func_00168B90(D_0028363C, *(char **)((char *)this+0x1ec) + 0x38);
      cfg->func_00168B90(D_0028362C, *(char **)((char *)this+0x1ec) + 0x3c);
      cfg->func_00168B90(D_00283618, *(char **)((char *)this+0x1ec) + 0x40);
      cfg->func_00168B90(D_00283604, *(char **)((char *)this+0x1ec) + 0x44);
      cfg->func_00168B90(D_002835F4, *(char **)((char *)this+0x1ec) + 0x48);
      cfg->func_00168B90(D_002835E0, *(char **)((char *)this+0x1ec) + 0x4c);
      { float q[4]={0,0,0,1}; cfg->func_00168CB0(D_002835D0,q,*(char **)((char *)this+0x1ec)+0x68); }
      cfg->func_00168B90(D_002835BC, (char *)this + 0x59c);
      { char *t = *(char **)((char *)this+0x1ec); *(float *)(t + 0x34) *= D_00277D04; }
      { char *t = *(char **)((char *)this+0x1ec); *(float *)(t + 0x38) *= D_00277D04; }
      { char *t = *(char **)((char *)this+0x1ec); *(float *)(t + 0x3c) *= D_00277D04; }
      { char *t = (char *)this; *(float *)(t + 0x59c) *= D_00277D04; }
      { char *t=(char *)this; *(int *)(*(char **)(t+0x210)+0xcc)=*(int *)(*(char **)(t+0x1ec)+0x3c); }
      cfg->func_00169710(D_002835B4);
      cfg->func_00168B90(D_002835A4, *(char **)((char *)this+0x20c) + 0x38);
      { float q[4]={0,0,0,1}; cfg->func_00168CB0(D_00283590,q,*(char **)((char *)this+0x20c)+0x74); }
      { float q[4]={0,0,0,1}; cfg->func_00168CB0(D_0028357C,q,*(char **)((char *)this+0x20c)+0x84); }
      cfg->func_00168B90(D_00283564, *(char **)((char *)this+0x20c) + 0x40);
      cfg->func_00168B90(D_0028354C, *(char **)((char *)this+0x20c) + 0x44);
      cfg->func_00168B90(D_0028353C, (char *)this + 0x5d4);
      cfg->func_00168B90(D_0028352C, (char *)this + 0x5d0);
      cfg->func_00168B90(D_0028351C, *(char **)((char *)this+0x20c) + 0x58);
      cfg->func_00168B90(D_00283508, *(char **)((char *)this+0x20c) + 0xa4);
      cfg->func_00168B90(D_002834F8, *(char **)((char *)this+0x20c) + 0xa8);
      cfg->func_00168B90(D_002834E8, *(char **)((char *)this+0x20c) + 0xac);
      cfg->func_00168B90(D_002834D4, *(char **)((char *)this+0x20c) + 0xb0);
      cfg->func_00168B90(D_002834C0, *(char **)((char *)this+0x20c) + 0xb4);
      cfg->func_00168B90(D_002834A8, *(char **)((char *)this+0x20c) + 0xb8);
      { char *t = *(char **)((char *)this+0x20c); *(float *)(t + 0xa4) *= D_00275998; }
      { char *t = *(char **)((char *)this+0x20c); *(float *)(t + 0xa8) *= D_00275998; }
      { char *t = *(char **)((char *)this+0x20c); *(float *)(t + 0xac) *= D_00275998; }
      cfg->func_00169710(D_00283490);
      cfg->func_00168B90(D_00283480, (char *)this + 0x60c);
      cfg->func_00168B90(D_00283470, (char *)this + 0x610);
      cfg->func_00168B90(D_00283460, (char *)this + 0x61c);
      cfg->func_00168B90(D_00283454, (char *)this + 0x618);
      cfg->func_00168B90(D_00283444, (char *)this + 0x620);
      cfg->func_00168B90(D_00283434,&v1c);
      cfg->func_00168B90(D_0028341C, (char *)this + 0x630);
      cfg->func_00168B90(D_00283408, (char *)this + 0x638);
      cfg->func_00168B90(D_002833F0, (char *)this + 0x614);
      { char *t = (char *)this; *(float *)(t + 0x610) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x61c) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x618) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x614) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x638) *= D_00275998; }
      (*(Extra10 **)((char *)this+0x220))->func_000269B0(0.0f,v1c,3.402823466e38f);
      (*(Extra10 **)((char *)this+0x224))->func_000269B0(1.0f,v1c,3.402823466e38f);
      (*(Extra10 **)((char *)this+0x228))->func_000269B0(0.0f,v1c,3.402823466e38f);
      cfg->func_00169710(D_0027C280);
      cfg->func_00168B90(D_002833E0, (char *)this + 0x5a0);
      cfg->func_00168B90(D_002833C8, (char *)this + 0x5a4);
      cfg->func_00168B90(D_002833B8, (char *)this + 0x5a8);
      cfg->func_00168B90(D_002833A8, (char *)this + 0x5ac);
      cfg->func_00168B90(D_00283390, (char *)this + 0x5b0);
      cfg->func_00168B90(D_0028337C, (char *)this + 0x5b4);
      cfg->func_00168B90(D_0028399C, (char *)this + 0x5b8);
      cfg->func_00168B90(D_0028336C, (char *)this + 0x494);
      cfg->func_00168B90(D_00283358, (char *)this + 0x498);
      cfg->func_00168B90(D_00283344, (char *)this + 0x4a4);
      cfg->func_00168B90(D_00283334, (char *)this + 0x5c4);
      cfg->func_00168B90(D_00283328, *(char **)((char *)this + 0x210) + 0xc0);
      cfg->func_00168B90(D_00283318, *(char **)((char *)this + 0x210) + 0xc4);
      cfg->func_00168B90(D_00283308, *(char **)((char *)this + 0x210) + 0xc8);
      cfg->func_00168B90(D_002832F4, (char *)this + 0x4ac);
      cfg->func_00168B90(D_002832E4, (char *)this + 0x728);
      { char *t = (char *)this; *(float *)(t + 0x5ac) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x5b4) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x5b8) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x5b0) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x4ac) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x4a4) *= D_00277D04; }
      {
          char *t = *(char **)((char *)this + 0x210);
          *(float *)(t + 0xc8) = *(float *)(t + 0xc8) * D_00277D04;
      }
      cfg->func_00169710(D_002832D8);
      cfg->func_00168B90(D_002832C8, *(char **)((char *)this + 0x208) + 0xb4);
      cfg->func_00168B90(D_002832BC, (char *)this + 0x6ac);
      cfg->func_00168B90(D_002832A4, (char *)this + 0x6b0);
      cfg->func_00168A10(D_00283290, (char *)this + 0x6c4);
      cfg->func_00168B90(D_00283280, (char *)this + 0x700);
      cfg->func_00168B90(D_00283260, (char *)this + 0x6b4);
      cfg->func_00168B90(D_00283240, (char *)this + 0x6b8);
      cfg->func_00168B90(D_0028321C, (char *)this + 0x6c0);
      cfg->func_00168B90(D_002831F8, (char *)this + 0x6c0);
      { char *t = (char *)this; float v = *(float *)(t + 0x6b4) * D_00275998; v = func_0014F510(v); *(float *)((char *)this + 0x6b4) = v; }
      { char *t = (char *)this; float v = *(float *)(t + 0x6b8) * D_00275998; v = func_0014F510(v); *(float *)((char *)this + 0x6b8) = v; }
      { char *t = (char *)this; float v = *(float *)(t + 0x6bc) * D_00275998; v = func_0014F510(v); *(float *)((char *)this + 0x6bc) = v; }
      { char *t = (char *)this; float v = *(float *)(t + 0x6c0) * D_00275998; v = func_0014F510(v); *(float *)((char *)this + 0x6c0) = v; }
      cfg->func_00169710(D_002831EC);
      cfg->func_00168B90(D_002831D0, *(char **)((char *)this + 0x208) + 0xb8);
      cfg->func_00168B90(D_002831BC, (char *)this + 0x6f8);
      cfg->func_00168B90(D_0028319C, (char *)this + 0x6ec);
      cfg->func_00168B90(D_00283178, (char *)this + 0x6f0);
      { char *t = (char *)this; float v = *(float *)(t + 0x6ec) * D_00275998; v = func_0014F510(v); *(float *)((char *)this + 0x6ec) = v; }
      { char *t = (char *)this; float v = *(float *)(t + 0x6f0) * D_00275998; v = func_0014F510(v); *(float *)((char *)this + 0x6f0) = v; }
      cfg->func_00169710(D_0028316C);
      cfg->func_00168B90(D_00283160, (char *)this + 0x4b8);
      cfg->func_00168B90(D_00283154, (char *)this + 0x4c0);
      cfg->func_00168B90(D_00283148, (char *)this + 0x4bc);
      cfg->func_00168B90(D_0028313C, (char *)this + 0x4c4);
      cfg->func_00168B90(D_0028312C, (char *)this + 0x1254);
      cfg->func_00168B90(D_0028311C, (char *)this + 0x1258);
      cfg->func_00168B90(D_0028310C, (char *)this + 0x124c);
      cfg->func_00168B90(D_002830F8, *(char **)((char *)this + 0x20c) + 0x48);
      { char *t = (char *)this; *(float *)(t + 0x4b8) *= D_00277D04; }
      { char *t = (char *)this; *(float *)(t + 0x4bc) *= D_00277D04; }
      { char *t = (char *)this; *(float *)(t + 0x1254) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x1258) *= D_00275998; }
      cfg->func_00169710(D_002830F0);
      cfg->func_00168B90(D_002830E4, (char *)this + 0x4dc);
      cfg->func_00168B90(D_002830D0, (char *)this + 0x1f9c);
      if (*(float *)((char *)this + 0x4dc) != 0.0f) {
          char *t = (char *)this;
          *(float *)(t + 0x4e0) = 1.0f / *(float *)(t + 0x4dc);
      }
      cfg->func_00169710(D_002830C8);
      cfg->func_00168B90(D_002830B4, (char *)this + 0x8a0);
      cfg->func_00168B90(D_002830B4, (char *)this + 0x7c4);
      cfg->func_00168B90(D_00283084, (char *)this + 0x8a4);
      cfg->func_00168B90(D_00283070, (char *)this + 0x8a8);
      { char *t = (char *)this; *(float *)(t + 0x8a0) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x7c4) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x8a8) *= D_00275998; }
      { char *t = (char *)this; *(float *)(t + 0x8a4) *= D_00277D04; }
      {
          char *t = (char *)this;
          *(int *)(t + 0x7ac) = *(int *)(t + 0x8a0);
      }
      cfg->func_00169710(D_00283064);
      cfg->func_00168B90(D_00283030, (char *)this + 0x4d0);
      cfg->func_00168B90(D_00283030, (char *)this + 0x4d4);
      cfg->func_00168B90(D_00283030, (char *)this + 0x4c8);
      cfg->func_00168B90(D_0028301C, (char *)this + 0x4cc);
      cfg->func_00168B90(D_00283008, (char *)this + 0x4d8);
      if (cfg != 0) {
          cfg->func_001691E0();
          func_001E891B(cfg);
      }
}
