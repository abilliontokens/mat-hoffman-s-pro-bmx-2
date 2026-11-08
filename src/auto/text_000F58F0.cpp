/* 1 function from 0x000F58F0 to 0x000F63D0, found by Ghidra. */
#include "common.h"

struct F58_Obj {
    void func_001B1980();
    void func_001B2270(int a);
    void func_001B1A30(int a, int b, int c);
    void func_001B1860(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

struct C_000F58F0 {
    char pad0[0x2A4];
    int f2A4;
    char pad2A8[0x2C4 - 0x2A8];
    int f2C4;
    char pad2C8[0x2D8 - 0x2C8];
    F58_Obj *a2D8[24];
    void func_000CA9B0();
    void func_000C9860();
    void func_000CAA10();
    void func_000CA940();
    void func_000CA8D0();
    void func_000C98D0();
    void func_000F58F0();
};

void C_000F58F0::func_000F58F0(void)
{
    F58_Obj *o;
    int iVar1;

    iVar1 = f2A4;
    if (iVar1 == 0) {
        a2D8[0]->func_001B1980();
        a2D8[5]->func_001B1980();
        a2D8[5]->func_001B2270(0xffbfa35a);
        a2D8[5]->func_001B1A30(0x43a00000, 0x42ca0000, 0);
        a2D8[5]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
        func_000CA9B0();
        a2D8[0]->func_001B2270(0xffbfa35a);
        a2D8[0]->func_001B1A30(0x43a50000, 0x42ca0000, 0);
        a2D8[0]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
        iVar1 = f2C4;
        if (iVar1 == 5) {
            a2D8[11]->func_001B1980();
            a2D8[11]->func_001B1A30(0x43a00000, 0x43988000, 0);
            a2D8[11]->func_001B2270(0xffcccccc);
            a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
            a2D8[2]->func_001B1980();
            a2D8[2]->func_001B1A30(0x43a50000, 0x43988000, 0);
            a2D8[2]->func_001B2270(0xffcccccc);
            o = a2D8[2];
            goto LAB28bf;
        }
    } else {
        if (iVar1 == 1) {
            a2D8[21]->func_001B1980();
            a2D8[7]->func_001B1980();
            a2D8[7]->func_001B1A30(0x43a00000, 0x430d0000, 0);
            a2D8[7]->func_001B2270(0xffbfa35a);
            a2D8[7]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
            func_000C9860();
            a2D8[21]->func_001B1A30(0x43a50000, 0x430d0000, 0);
            a2D8[21]->func_001B2270(0xffbfa35a);
            a2D8[21]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
            if (f2C4 == 2) {
                a2D8[8]->func_001B1980();
                a2D8[8]->func_001B1A30(0x43a00000, 0x43390000, 0);
                a2D8[8]->func_001B2270(0xffcccccc);
                a2D8[8]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
                a2D8[22]->func_001B1980();
                a2D8[22]->func_001B1A30(0x43a50000, 0x43390000, 0);
                a2D8[22]->func_001B2270(0xffcccccc);
                o = a2D8[22];
                goto LAB28bf;
            }
            if (f2C4 != 0) goto LABac8;
            a2D8[5]->func_001B1980();
            a2D8[5]->func_001B1A30(0x43a00000, 0x42d20000, 0);
            a2D8[5]->func_001B2270(0xffcccccc);
            a2D8[5]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
            a2D8[0]->func_001B1980();
            a2D8[0]->func_001B1A30(0x43a50000, 0x42d20000, 0);
            a2D8[0]->func_001B2270(0xffcccccc);
            o = a2D8[0];
            goto LAB28bf;
        }
        if (iVar1 != 2) {
            if (iVar1 == 3) {
                a2D8[1]->func_001B1980();
                a2D8[9]->func_001B1980();
                a2D8[9]->func_001B1A30(0x43a00000, 0x435d0000, 0);
                a2D8[9]->func_001B2270(0xffbfa35a);
                a2D8[9]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
                func_000CAA10();
                a2D8[1]->func_001B1A30(0x43a50000, 0x435d0000, 0);
                a2D8[1]->func_001B2270(0xffbfa35a);
                a2D8[1]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
                if (f2C4 == 2) {
                    a2D8[8]->func_001B1980();
                    a2D8[8]->func_001B1A30(0x43a00000, 0x43390000, 0);
                    a2D8[8]->func_001B2270(0xffcccccc);
                    a2D8[8]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
                    a2D8[22]->func_001B1980();
                    a2D8[22]->func_001B1A30(0x43a50000, 0x43390000, 0);
                    a2D8[22]->func_001B2270(0xffcccccc);
                    o = a2D8[22];
                    goto LAB28bf;
                }
                if (f2C4 != 4) goto LABac8;
            } else {
                if (iVar1 == 4) {
                    a2D8[19]->func_001B1980();
                    a2D8[10]->func_001B1980();
                    a2D8[10]->func_001B1A30(0x43a00000, 0x43828000, 0);
                    a2D8[10]->func_001B2270(0xffbfa35a);
                    a2D8[10]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
                    func_000CA940();
                    a2D8[19]->func_001B1A30(0x43a50000, 0x43828000, 0);
                    a2D8[19]->func_001B2270(0xffbfa35a);
                    a2D8[19]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
                    if (f2C4 == 3) {
                        a2D8[9]->func_001B1980();
                        a2D8[9]->func_001B1A30(0x43a00000, 0x43610000, 0);
                        a2D8[9]->func_001B2270(0xffcccccc);
                        a2D8[9]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
                        a2D8[1]->func_001B1980();
                        a2D8[1]->func_001B1A30(0x43a50000, 0x43610000, 0);
                        a2D8[1]->func_001B2270(0xffcccccc);
                        o = a2D8[1];
                        goto LAB28bf;
                    }
                    if (f2C4 != 5) goto LABac8;
                    a2D8[11]->func_001B1980();
                    a2D8[11]->func_001B1A30(0x43a00000, 0x43988000, 0);
                    a2D8[11]->func_001B2270(0xffcccccc);
                    a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
                    a2D8[2]->func_001B1980();
                    a2D8[2]->func_001B1A30(0x43a50000, 0x43988000, 0);
                    a2D8[2]->func_001B2270(0xffcccccc);
                    o = a2D8[2];
                    goto LAB28bf;
                }
                a2D8[2]->func_001B1980();
                a2D8[11]->func_001B1980();
                a2D8[11]->func_001B1A30(0x43a00000, 0x43968000, 0);
                a2D8[11]->func_001B2270(0xffbfa35a);
                a2D8[11]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
                func_000CA8D0();
                a2D8[2]->func_001B1A30(0x43a50000, 0x43968000, 0);
                a2D8[2]->func_001B2270(0xffbfa35a);
                a2D8[2]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
                if (f2C4 != 4) {
                    if (f2C4 == 0) {
                        a2D8[5]->func_001B1980();
                        a2D8[5]->func_001B1A30(0x43a00000, 0x42d20000, 0);
                        a2D8[5]->func_001B2270(0xffcccccc);
                        a2D8[5]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
                        a2D8[0]->func_001B1980();
                        a2D8[0]->func_001B1A30(0x43a50000, 0x42d20000, 0);
                        a2D8[0]->func_001B2270(0xffcccccc);
                        a2D8[0]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
                        f2C4 = -1;
                    }
                    goto LABac8;
                }
            }
            a2D8[10]->func_001B1980();
            a2D8[10]->func_001B1A30(0x43a00000, 0x43848000, 0);
            a2D8[10]->func_001B2270(0xffcccccc);
            a2D8[10]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
            a2D8[19]->func_001B1980();
            a2D8[19]->func_001B1A30(0x43a50000, 0x43848000, 0);
            a2D8[19]->func_001B2270(0xffcccccc);
            o = a2D8[19];
            goto LAB28bf;
        }
        a2D8[22]->func_001B1980();
        a2D8[8]->func_001B1980();
        a2D8[8]->func_001B1A30(0x43a00000, 0x43350000, 0);
        a2D8[8]->func_001B2270(0xffbfa35a);
        a2D8[8]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
        func_000C98D0();
        a2D8[22]->func_001B1A30(0x43a50000, 0x43350000, 0);
        a2D8[22]->func_001B2270(0xffbfa35a);
        a2D8[22]->func_001B1860(0, 0xbf800000, 0xff, 0x3f933333, 0, 0, 0, 0xff, 0x3fb9999a, 0, 0, 0x3e4ccccd, 0);
        iVar1 = f2C4;
        if (iVar1 == 3) {
            a2D8[9]->func_001B1980();
            a2D8[9]->func_001B1A30(0x43a00000, 0x43610000, 0);
            a2D8[9]->func_001B2270(0xffcccccc);
            a2D8[9]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
            a2D8[1]->func_001B1980();
            a2D8[1]->func_001B1A30(0x43a50000, 0x43610000, 0);
            a2D8[1]->func_001B2270(0xffcccccc);
            o = a2D8[1];
            goto LAB28bf;
        }
    }
    if (iVar1 != 1) {
    LABac8:
        f2C4 = -1;
        return;
    }
    a2D8[7]->func_001B1980();
    a2D8[7]->func_001B1A30(0x43a00000, 0x43110000, 0);
    a2D8[7]->func_001B2270(0xffcccccc);
    a2D8[7]->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
    a2D8[21]->func_001B1980();
    a2D8[21]->func_001B1A30(0x43a50000, 0x43110000, 0);
    a2D8[21]->func_001B2270(0xffcccccc);
    o = a2D8[21];
LAB28bf:
    o->func_001B1860(0, 0xbf800000, 0xff, 0x3fb9999a, 0, 0, 0, 0xff, 0x3f933333, 0, 0, 0x3e4ccccd, 0);
    f2C4 = -1;
    return;
}
