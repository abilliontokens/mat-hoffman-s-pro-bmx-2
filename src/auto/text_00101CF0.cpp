/* 3 functions from 0x00101CF0 to 0x00102BB0, found by Ghidra. */
#include "common.h"

extern int D_002826B4;

struct C_001C0110 {
    void func_001C0110(void *a, void *b);
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

