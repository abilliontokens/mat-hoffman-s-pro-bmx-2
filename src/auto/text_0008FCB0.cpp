/* 1 function from 0x0008FCB0 to 0x00091820, found by Ghidra. */
#include "common.h"
struct S_0008FCB0_Font { void func_001B1980(); void func_001B1860(int,float,int,float,int,int,int,int,float,int,int,float,int); };
#include "overlay_0008FCB0_local.h"

extern char *D_002A8490;
int C_0008FCB0::func_0008FCB0()
{
    C_0008FCB0 * volatile self = this;
    char text[14];
    S_0008FCB0_Rect saved, view;
    S_0008FCB0_Render *render;
    if (((S_0008FCB0_Game *)D_002A8490)->f2E0->f2D4 != 0) return 0;
    if (((S_0008FCB0_Game *)D_002A8490)->f274 < ((S_0008FCB0_Game *)D_002A8490)->f270 - 1) return 1;
    render = D_002EFDB8->f4;
    if (((S_0008FCB0_Game *)D_002A8490)->f270 > 1) {
        saved = render->f1E0;
        view.x = 0; view.y = 0; view.w = 640; view.h = 448;
        render->func_0012B2B0(&view, &saved);
    }
    self->fD3C->func_001D5AD0();
    self->fD40->func_001D5AD0();
    self->fD44->func_001D5AD0();
    self->func_000847B0();
    if (self->fD64 > D_00275544 || self->fD50 > D_00275544) self->fD48->func_001D5AD0();
    if (self->fDA0) self->func_000844B0();
    self->func_00157960();
    if (self->fD84) self->fD84->func_001D5AD0();
    if (self->fD88) self->fD88->func_001D5AD0();
    if (self->fD7C && self->fD80) self->func_00083410();
    if (self->fD4 > 0) {
        self->f164->func_001D5AD0();
        self->f168->func_001D5AD0();
        if (self->f200) {
            self->f208->func_0005E9A0(0xffb73614);
            self->f208->func_0005E840(self->f48->f52C + 0x6484);
            self->f208->func_00082430(1.0f);
            self->f208->func_001D6600();
        }
        if (self->f204) {
            self->f208->func_0005E9A0(0xff469048);
            self->f208->func_0005E840(self->f48->f52C + 0x6452);
            self->f208->func_00082430(1.0f);
            self->f208->func_001D6600();
        }
        if (self->fC48 || self->fC40) {
            if (self->fC48) func_001ADCC0(text, 14, D_002795A4, self->fC4C);
            if (self->fC44 && !self->fC40) {
                strcat(text, D_002789B8);
                strcat(text, self->f48->f52C + 0x6420);
            }
            if (self->fC40) {
                if (self->fC48) {
                    strcat(text, D_002789B8);
                    strcat(text, self->f48->f52C + 0x63bc);
                } else {
                    func_001ADCC0(text, 14, D_00276F28, self->f48->f52C + 0x63bc);
                }
            }
            self->fC50->func_0005E840(text);
            self->fC50->func_001D6600();
            self->fD9C = 1;
        }
        if (self->fC54) {
            self->fC50->func_0005E840(self->f48->f52C + (self->fC58 ? 0x6358 : 0x638a));
            self->fC50->func_001D6600();
            self->fC54 = 0;
            self->fD9C = 1;
        }
    }
    if (self->f184 > D_00275544) {
        if (self->f184 > D_0027A09C) self->f194->func_001D5AD0();
        self->f188->func_001D5AD0();
        self->f18C->func_001D6600();
    }
    if (self->fC28 > 0) {
        for (int i = 0; i < self->fC28; i++) {
            if (self->fC30 == 1) {
                S_0008FCB0_Text *t = self->a24[i];
                t->func_0005E840(self->s818[i]);
                if (self->fC38 != t->f34) { t->f34 = self->fC38; t->f4E |= 6; }
                t->func_00082400((int)self->fC3C);
                t->func_0005E960(self->f38, self->f3C + i * 20);
                if (t->f44 != D_0028F5E0) { t->f44 = D_0028F5E0; t->f4E |= 6; }
                t->func_001D6600();
                if (self->fC34 <= D_00275460) { self->fC38 = D_0027A098 + self->fC38; self->fC3C = 255.0f; }
                if (self->fC38 > D_00275460) self->fC38 = 1.0f;
                if ((self->fC34 > D_00276288 && self->fC28 == 1) || (self->fC34 > D_00275600 && self->fC28 > 1)) {
                    self->fC38 -= D_0027A094;
                    if (self->fC3C > D_00275544) self->fC3C -= D_0027A090;
                    if (self->fC3C < D_00275544) self->fC3C = 0;
                    if (self->fC38 < D_00275544) self->fC38 = 0;
                }
                if (!(self->fC3C > D_00275544)) {
                    self->fC28 = 0; self->fC30 = 0; self->fC38 = 1.0f; self->fC3C = 255.0f;
                }
            }
        }
        if (self->f44->f11F4 == 0) {
            for (int i = 0; i < 100; i++) { self->a2EC[i] = -1; self->a47C[i] = -1; }
        }
    }
    self->func_000832A0();
    self->func_00157960();
    if (((S_0008FCB0_Game *)D_002A8490)->f270 > 1) render->func_0012B2B0(&saved, 0);
    return 1;
}
