/* 5 functions from 0x00125F00 to 0x00126DD0, found by Ghidra. */
#include "common.h"
struct S_001268E0_Vec { float f[4]; };
struct S_001268E0_Rec { S_001268E0_Vec a, b; };

/* 0x34-byte record split by a float threshold */
struct S_00126770_Rec {
    float f[13];
};

void func_00126740(int a0, int a1, int a2, int a3, int a4, int a5) {
    extern int D_002B92F4;
    int func_00125F00(...);
    D_002B92F4 = a3;
    func_00125F00(a0, a1, a2, a4, a5);
}

int func_00126770(S_00126770_Rec *src, S_00126770_Rec *outA, S_00126770_Rec *outB, int count, int *cntA, int *cntB, float thr, int mode)
{
    int sel;
    int i;
    S_00126770_Rec *r;

    *cntA = 0;
    *cntB = 0;
    sel = 0;
    r = src;
    for (i = 0; i < count; i++) {
        switch (mode) {
        case 0:
            if (r->f[7] > thr) {
                sel = 1;
            } else {
                sel = 0;
            }
            break;
        case 1:
            if (r->f[8] > thr) {
                sel = 1;
            } else {
                sel = 0;
            }
            break;
        case 2:
            if (r->f[9] > thr) {
                sel = 1;
            } else {
                sel = 0;
            }
            break;
        }
        if (sel) {
            outA[*cntA] = *r;
            (*cntA)++;
        } else {
            outB[*cntB] = *r;
            (*cntB)++;
        }
        r++;
    }
    if (*cntB != 0 && *cntA != 0) {
        return 1;
    }
    *cntA = count / 2;
    *cntB = count - count / 2;
    for (i = 0; i < *cntA; i++) {
        outA[i] = src[i];
    }
    for (i = 0; i < *cntB; i++) {
        outB[i] = src[*cntA + i];
    }
    return 0;
}

int func_001268E0(S_001268E0_Rec *src, S_001268E0_Vec *pos, S_001268E0_Rec *outA, S_001268E0_Rec *outB, S_001268E0_Vec *posA, S_001268E0_Vec *posB, int count, int *cntA, int *cntB, float thr, int mode)
{
 int sel;
 S_001268E0_Rec *r;
 S_001268E0_Vec *p;
 *cntA = 0; *cntB = 0;
 if(count > 0) {
 p=pos; r=src;
 for (int i = 0; i < count; i++) {
 switch(mode) {
 case 0: if(p->f[0] > thr) sel=1; else sel=0; break;
 case 1: if(p->f[1] > thr) sel=1; else sel=0; break;
 case 2: if(p->f[2] > thr) sel=1; else sel=0; break;
 }
 if(sel) {
 outA[*cntA].a = r->a; outA[*cntA].b = r->b;
 posA[*cntA] = *p; (*cntA)++;
 } else {
 outB[*cntB].a = r->a; outB[*cntB].b = r->b;
 posB[*cntB] = *p; (*cntB)++;
 }
 r++; p++;
 }
 }
 if(*cntB && *cntA) return 1;
 *cntA=count/2; *cntB=count-count/2; return 0;
}

