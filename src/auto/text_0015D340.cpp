/* 8 functions from 0x0015D340 to 0x0015E300, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
extern float D_00287890, D_00287880, D_00287870, D_00275544, D_0027A060;
void func_0011AC30(void*,void*);
static __forceinline void Normalize_DD80(float *volatile outArg, const float *volatile inArg) {
 const float *in=inArg; float *out=outArg;
 __m128 v=_mm_loadu_ps(in), sq=_mm_mul_ps(v,v);
 __m128 len=_mm_add_ss(_mm_movehl_ps(sq,sq),sq);
 len=_mm_add_ss(len,_mm_shuffle_ps(sq,sq,0xe1));
 __m128 minv=_mm_load_ss(&D_00287890);
 __m128 cmp=_mm_cmplt_ss(len,minv);
 len=_mm_add_ss(len,_mm_and_ps(cmp,minv));
 __m128 r=_mm_rsqrt_ss(len);
 __m128 t=_mm_mul_ss(_mm_mul_ss(len,r),r);
 __m128 scale=_mm_mul_ss(_mm_mul_ss(r,_mm_load_ss(&D_00287870)),_mm_sub_ss(_mm_load_ss(&D_00287880),t));
 scale=_mm_shuffle_ps(scale,scale,0);
 _mm_storeu_ps(out,_mm_mul_ps(scale,v));
}
static __forceinline float Min_DD80(float a, float b) {
 float r;
 _mm_store_ss(&r,_mm_min_ss(_mm_set_ss(a),_mm_set_ss(b)));
 return r;
}
static __forceinline void Xform_DD80(float *volatile outArg,float *volatile inArg,float *volatile mArg) {
 float *in=inArg; float *m=mArg; float *out=outArg;
 __m128 v=_mm_loadu_ps(in);
 _mm_storeh_pi((__m64*)(out+2),v);
 out[3]=1.0f;
 v=_mm_loadh_pi(v,(__m64*)(out+2));
 __m128 r0=_mm_mul_ps(_mm_load_ps(m),v);
 __m128 r1=_mm_mul_ps(_mm_load_ps(m+4),v);
 __m128 r2=_mm_mul_ps(_mm_load_ps(m+8),v);
 __m128 t=_mm_add_ps(_mm_unpacklo_ps(r0,r1),_mm_unpackhi_ps(r0,r1));
 __m128 u=_mm_add_ps(r2,_mm_movehl_ps(r2,r2));
 _mm_storeu_ps(out,_mm_add_ps(_mm_movelh_ps(t,u),_mm_shuffle_ps(_mm_movehl_ps(t,t),u,0x14)));
 out[3]=1.0f;
}

void func_001E891B(void *p);

void *func_001E8A44(int size);

struct V4_15D850 { float x, y, z, w; };
static inline V4_15D850 v4_15D850(float x, float y, float z)
{
    V4_15D850 r;
    r.x = x;
    r.y = y;
    r.z = z;
    r.w = 1.0f;
    return r;
}

struct C_00192A50 {
    char pad0[0x3c];
    int unk3C;
    C_00192A50 *func_00192900(int a);
    void func_00192A50(C_00192A50 *other, int c);
    void func_00192A90(void *p);
    void func_00192AC0(void *p);
};

struct C_001923F0 {
    C_001923F0 *func_001923F0(int a);
};

struct C_0017D5A0 {
    C_0017D5A0 *func_0017D5A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

struct C_00193500 {
    void func_00193500();
    void func_00193870(int *p);
};

struct C_0015DCC0_Item {
    char pad0[0x24];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    char pad3C[0x14];
    float unk50;
    float unk54;
    float unk58;
    char pad5C[0x68];
    C_00193500 *unkC4;
    void func_0015D0A0(C_00192A50 *p, int a);
};
void *func_001E83E8(void *p, int size);

struct C_0015DA60 {
    char pad0[0x24];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    C_0015DCC0_Item *unk34;
    void *unk38;
    V4_15D850 *unk3C;
    V4_15D850 unk40;
    V4_15D850 *unk50;
    V4_15D850 unk54;
    V4_15D850 *unk64;
    char pad68[4];
    C_00192A50 **unk6C;
    C_001923F0 **unk70;
    C_0017D5A0 **unk74;
    int unk78;
    int unk7C;
    int unk80;
    C_0015DCC0_Item **unk84;
    int unk88;
    void func_0015DAA0(C_0015DCC0_Item *item, int idx);
    void func_0015D250();
    void func_0015D850(int count, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int flag);
    void func_0015DA60(int a, int b, int c);
    void func_0015DCC0(C_0015DCC0_Item *item);
    void func_0015DD80(float *m, int count, char *in, char *out, int stride);
};

extern float D_00275460;
struct V4_15E130 { float x, y, z, w; };
struct Sum_15E130 { V4_15E130 sa, sb; };
struct N2_15E130 { char pad[0x24]; struct N_15E130* list; char pad2[0x14]; int idx; };
struct A_15E130 { int pad; N2_15E130* p; };
struct C_0017A1D0 { int func_0017A1D0(float a, float b, float* out); };
struct N_15E130 { N_15E130* next; N2_15E130* p; C_0017A1D0* obj; };
struct C_0015E130 {
    char pad[0x38]; int* flags; V4_15E130* b; char pad2[0x10]; V4_15E130* a;
    void func_0015E130(A_15E130* arg0, float arg1, float arg2, V4_15E130* out, V4_15E130* out2);
};

struct C_0015E0F0 {
    int func_0015E0F0(int param_1);
};


extern int D_002E2928;
extern int D_002E292C;
int __stdcall func_00157BF0(int a, int b);
int func_00135C70(int a, int b, int c, int d);
int __stdcall func_0015D340(int a, int b)
{
    int r = func_00157BF0(a, b);
    if (func_00135C70(0x1e, 0, a, 0x80)) { int t = D_002E2928; D_002E2928 = 1 - t; return 1; }
    if (func_00135C70(0x26, 0, a, 0x80)) { int t = D_002E292C; D_002E292C = 1 - t; return 1; }
    return r;
}

void C_0015DA60::func_0015D850(int count, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int flag)
{
    V4_15D850 d = v4_15D850(50.0f, 50.0f, 50.0f);
    int i;

    unk54 = d;
    unk40 = d;
    func_0015D250();
    unk78 = count;
    unk6C = (C_00192A50 **)func_001E8A44(count * 4);
    unk50 = (V4_15D850 *)func_001E8A44(count * 16);
    unk64 = (V4_15D850 *)func_001E8A44(count * 16);
    unk3C = (V4_15D850 *)func_001E8A44(count * 16);
    unk38 = func_001E8A44(count * 4);
    if (flag != 0) {
        unk74 = (C_0017D5A0 **)func_001E8A44(count * 4);
    } else {
        unk70 = (C_001923F0 **)func_001E8A44(count * 4);
    }
    for (i = 0; i < count; i++) {
        void *m = func_001E8A44(0xa0);
        unk6C[i] = m ? ((C_00192A50 *)m)->func_00192900(1) : 0;
        if (flag != 0) {
            void *m2 = func_001E8A44(0x8b4);
            unk74[i] = m2 ? ((C_0017D5A0 *)m2)->func_0017D5A0(a1, a2, a3, a4, a5, a6, a7) : 0;
            unk6C[i]->func_00192A90(unk74[i]);
            unk6C[i]->func_00192AC0(unk74[i]);
        } else {
            void *m3 = func_001E8A44(0x44);
            unk70[i] = m3 ? ((C_001923F0 *)m3)->func_001923F0(0x400) : 0;
            unk6C[i]->func_00192A90(unk70[i]);
            unk6C[i]->func_00192AC0(unk70[i]);
        }
        unk6C[i]->unk3C = i;
        unk64[i] = d;
        unk50[i] = unk64[i];
    }
}

void C_0015DA60::func_0015DA60(int a, int b, int c)
{
    unk6C[a]->func_00192A50(unk6C[b], c);
    unk6C[b]->func_00192A50(unk6C[a], c);
}

void C_0015DA60::func_0015DAA0(C_0015DCC0_Item *item, int idx)
{
    int i;
    if (unk50 != 0 && item->unk28 == 4) {
        unk64[idx].x = item->unk50;
        unk50[idx].x = unk64[idx].x;
        unk40.x = unk54.x = unk50[idx].x;
        unk64[idx].y = item->unk54;
        unk50[idx].y = unk64[idx].y;
        unk40.y = unk54.y = unk50[idx].y;
        unk64[idx].z = item->unk58;
        unk50[idx].z = unk64[idx].z;
        unk40.z = unk54.z = unk50[idx].z;
        unk64[idx].w = 1.0f;
        unk50[idx].w = 1.0f;
        unk54.w = 1.0f;
        unk40.w = 1.0f;
        if (idx == 0) {
            for (i = 0; i < unk78; i++) {
                unk50[i] = unk40;
                unk64[i] = unk40;
            }
        }
    }
    if (unk6C != 0) {
        int t = item->unk28;
        if (t == 1 || t == 3) {
            item->func_0015D0A0(unk6C[idx], 1);
        }
    }
    if (item->unk28 == 2 || item->unk28 == 1) {
        unk24 = item->unk30;
        unk28 = item->unk34;
        unk2C = item->unk38;
        unk30 = 0;
    }
    if (item->unk28 == 2) {
        unk34 = item;
        if (unk3C != 0 && idx == 0) {
            for (i = 0; i < unk78; i++) {
                ((int *)&unk3C[i])[0] = item->unk30;
                ((int *)&unk3C[i])[1] = item->unk34;
                ((int *)&unk3C[i])[2] = item->unk38;
                ((int *)&unk3C[i])[3] = 0;
                if (unk38 != 0) {
                    ((int *)unk38)[i] = 1;
                }
            }
        }
    }
    switch (item->unk28) {
    case 1:
    case 3:
        unk88 = 1;
    }
    if (unk80 < unk7C + 1) {
        unk80 = unk7C + 10;
        unk84 = (C_0015DCC0_Item **)func_001E83E8(unk84, unk80 * 4);
    }
    unk84[unk7C] = item;
    unk7C++;
}

void C_0015DA60::func_0015DCC0(C_0015DCC0_Item *item)
{
    int found = 0;
    int i = 0;
    if (0 < unk7C) {
        do {
            C_0015DCC0_Item *cur = unk84[i];
            if (cur == item) {
                found = 1;
            } else if (found) {
                unk84[i - 1] = cur;
            }
            i++;
        } while (i < unk7C);
    }
    unk7C--;
    if (item->unk28 == 1 && item->unkC4 != 0) {
        item->unkC4->func_00193870(&item->unk24);
        C_00193500 *sub = item->unkC4;
        if (sub != 0) {
            sub->func_00193500();
            func_001E891B(sub);
        }
        item->unkC4 = 0;
    }
    unk88 = 0;
    for (i = 0; i < unk7C; i++) {
        if (unk84[i]->unk28 == 2) {
            unk88 = 1;
            return;
        }
    }
}

void C_0015DA60::func_0015DD80(float *matrix, int count, char *in, char *out, int stride)
{
    C_0015DA60 *volatile self = this;
    volatile float color[3];
    volatile V4_15D850 dir;
    __declspec(align(16)) float m[16];
    color[0]=0; color[2]=0; color[1]=0;
    dir.z=0; dir.y=0; dir.x=0; dir.w=1;
    __m128 *volatile dst=(__m128*)m;
    __m128 *src=(__m128*)matrix;
    __m128 ma=src[0], mb=src[1], mc=src[2], md=src[3];
    __m128 *p=dst; p[0]=ma; p[1]=mb; p[2]=mc; p[3]=md;
    func_0011AC30(m,m);
    C_0015DA60 *s=self;
    for(int i=0;i<s->unk7C;s=self,++i) {
        C_0015DCC0_Item *item=s->unk84[i];
        if(item->unk28==2) {
            color[0]=*(float*)&item->unk30; color[2]=*(float*)&item->unk34; color[1]=*(float*)&item->unk38;
            Xform_DD80((float*)&dir.x,(float*)((char*)item+0x94),m);
            Normalize_DD80((float*)&dir.x,(float*)&dir.x);
        }
    }
    for(int j=0;j<count;s=self,++j) {
        float dist=-(dir.y*(*(float*)(in+4))+dir.x*(*(float*)in)+dir.z*(*(float*)(in+8)));
        if(dist>D_00275544) {
            float cy=dist*color[2]+s->unk40.y;
            float cz=dist*color[1]+s->unk40.z;
            float fr=Min_DD80(dist*color[0]+s->unk40.x,1.0f);
            float fg=Min_DD80(cy,1.0f);
            float fb=Min_DD80(cz,1.0f);
            unsigned col=(((int)(fr*D_0027A060)|0xffffff00)<<8);
            col=(col|((int)(fg*D_0027A060)&255))<<8;
            col|=(int)(fb*D_0027A060)&255;
            *(unsigned*)(out+16)=col;
        } else {
            unsigned col=(((int)(s->unk40.x*D_0027A060)|0xffffff00)<<8);
            col=(col|((int)(s->unk40.y*D_0027A060)&255))<<8;
            col|=(int)(s->unk40.z*D_0027A060)&255;
            *(unsigned*)(out+16)=col;
        }
        *(int*)(out+20)=0;
        in+=stride; out+=32;
    }
}

int C_0015E0F0::func_0015E0F0(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    piVar2 = *(int **)(in_ECX + 0x84);
    do {
      if (*(int *)(*piVar2 + 0x28) == param_1) {
        return (*(int **)(in_ECX + 0x84))[iVar1];
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x7c));
  }
  return 0;
}

extern "C" void * __cdecl memset(void *, int, unsigned int);
void C_0015E130::func_0015E130(A_15E130* arg0, float arg1, float arg2, V4_15E130* out, V4_15E130* out2) {
N2_15E130 *p=arg0->p;
int idx=p->idx;
V4_15E130 sa, sb;
memset(&sa,0,sizeof(sa)); memset(&sb,0,sizeof(sb));
N_15E130* n=p->list;
float w;
*out=a[idx]; if(out2) *out2=b[idx];
w=0.0f;
for(;n;n=n->next) {float d;
if(n->obj->func_0017A1D0(arg1,arg2,&d)) {
float t; int j=n->p->idx;
w+=t=(arg2-d)/arg2;
sa.x+=t*a[j].x; sa.y+=t*a[j].y; sa.z+=t*a[j].z;
if(out2 && flags[j]) {sb.x+=t*b[j].x; sb.y+=t*b[j].y; sb.z+=t*b[j].z;}
}}
w=1.0f/(w+1.0f);
out->w=1.0f; out->x=(sa.x+out->x)*w; out->y=(sa.y+out->y)*w; out->z=(sa.z+out->z)*w;
if(out2) {out2->w=0.0f; out2->x=(sb.x+out2->x)*w; out2->y=(sb.y+out2->y)*w; out2->z=(sb.z+out2->z)*w;}
}

