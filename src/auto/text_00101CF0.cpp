/* 3 functions from 0x00101CF0 to 0x00102BB0, found by Ghidra. */
#include "common.h"

extern int D_002826B4;

struct C_001C0110 {
    void func_001C0110(void *a, void *b);
};

extern int D_0028F5E0;
extern float D_00275460;

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1B30(float a, int b);
    void func_001B1AB0(int a, int b);
};

struct C_00093120 {
    void func_00093120(void);
    int func_00092AC0(void);
    void __stdcall func_00093A00(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00093AD0(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00093C80(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00093CF0(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00093890(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00093970(float x, float y, int a, int b, int c, int d);
    void __stdcall func_000944C0(float x, float y, int a, int b, int c, int d);
    void __stdcall func_000943A0(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00094570(float x, float y, int a, int b, int c, int d);
    void __stdcall func_000942F0(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00094410(float x, float y, int a, int b, int c, int d);
    void __stdcall func_00094690(float x, float y, int a, int b, int c, int d);
    void __stdcall func_000941A0(int e, float x, float y, int a, int b, int c, int d);
};

/* BmxUIPageMemCard */
struct C_00101CF0 {
    char pad0[0x280];
    int unk280;
    int unk284;
    int pad288;
    int unk28C;
    char pad290[8];
    C_001B1980 *unk298[2];
    char pad2A0[0x10];
    float unk2B0;
    char pad2B4[0x14];
    int unk2C8;
    char pad2CC[0xC];
    int unk2D8;
    char pad2DC[0x10];
    int unk2EC;
    int unk2F0;
    int unk2F4;
    C_00093120 *unk2F8;
    int unk2FC;
    int unk300;
    char pad304[0xC];
    int unk310;
    int unk314;
    int unk318;
    int unk31C;
    int unk320;
    int unk324;
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    int unk338;
    float unk33C;
    char pad340[0xC];
    int unk34C;
    int unk350;
    int unk354;
    int unk358;
    int pad35C;
    int unk360;
    int unk364;
    int pad368;
    int unk36C;
    int pad370;
    int unk374;
    int unk378;
    int unk37C;
    int unk380;
    char pad384[8];
    int unk38C;
    int unk390;
    int pad394;
    int unk398;
    int unk39C;
    int unk3A0;
    int unk3A4;
    float unk3A8;
    int unk3AC;
    int unk3B0;
    void func_00101CF0(void);
    void func_000CC1B0(void);
    void func_000CC2B0(void);
    void func_000CC370(void);
    void func_000F8010(void);
    void func_000F7F80(void);
    void func_00157960(void);
};

/* BmxUIWidgetOverlayText */
struct C_00102B30 {
    void *vtbl;
    char pad4[0x16C];
    int unk170;
    char pad174[0x38];
    int unk1AC;
    void *unk1B0;
    char pad1B4[0x20C];
    int unk3C0;
    char pad3C4[8];
    int unk3CC;
    int unk3D0;
    int unk3D4;
    int unk3D8;
    int unk3DC;
    int unk3E0;
    char pad3E4[8];
    int unk3EC;
    int unk3F0;
    int unk3F4;
    int unk3F8;
    C_00102B30 *func_00102B30(void *a, void *b);
};

C_00102B30 *C_00102B30::func_00102B30(void *a, void *b)
{
    ((C_001C0110 *)this)->func_001C0110(a, b);
    unk1B0 = 0;
    unk170 = 0;
    unk3C0 = 0;
    unk3CC = 0;
    unk3D0 = 0;
    unk3D8 = 0;
    unk3D4 = 0;
    unk3DC = 0;
    unk3EC = 0;
    unk3F8 = 0;
    unk3F4 = 0;
    unk3E0 = 0;
    vtbl = (void *)&D_002826B4;
    unk3F0 = 0xff;
    return this;
}
