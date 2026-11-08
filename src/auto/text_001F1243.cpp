/* 3 functions from 0x001F1243 to 0x001F208F, found by Ghidra. */
#include "common.h"
extern char *D_002F6A28;
struct ParserFlags { unsigned int low:12; unsigned int b12:1; unsigned int b13:1; unsigned int high:18; };
extern ParserFlags D_002F6A38;
struct ParserFlagsByte { unsigned char low:4; unsigned char b4:1; unsigned char b5:1; unsigned char high:2; };
extern ParserFlagsByte D_002F6A39;
extern unsigned char D_002F6A1C;
extern char D_00295CE8[];
struct S_001EF734 {
    u32 value;
    u32 flags;
    int func_001EF1E7();
    int func_001EF1D0();
    void func_001EEEE6(S_001EF734 *);
    void func_001EEF4F(S_001EF734 *);
    S_001EF734 *func_001EF170(int);
    void func_001EF333(int);
          S_001EF734 *func_001EFD3B(void *, char);
      S_001EF734 *func_001EFAB5(void *, void *);
      S_001EF734 *func_001EFD7A(void *, const char *);
      int func_001EF1FC();
      void func_001EF2FE(S_001EF734 *);
      void func_001EF935(S_001EF734 *);
      void func_001EFB82(char *);
};
S_001EF734 *func_001F306F(S_001EF734 *, int);
extern char D_00295CD0[];
S_001EF734 *func_001EFD19(S_001EF734 *, const char *, S_001EF734 *);
S_001EF734 *func_001EFCD5(S_001EF734 *, char, S_001EF734 *);
S_001EF734 *func_001F098B(S_001EF734 *, int);
S_001EF734 *func_001F01D8(S_001EF734 *);
S_001EF734 *func_001F0B53(S_001EF734 *);
S_001EF734 *func_001F1184(S_001EF734 *);
S_001EF734 *func_001F1DF5(S_001EF734 *);
S_001EF734 *func_001F1243(S_001EF734 *, S_001EF734 *);

#pragma optimize("sy", on)
#pragma optimize("y", off)
int func_001EEA34();
void func_001EFCF7(void *a, int b, void *c);
S_001EF734 *func_001F1243(S_001EF734 *out, S_001EF734 *arg)
{
    S_001EF734 type;
    S_001EF734 a, b, c, d;
    int code;
    int f1;
    int isClass;
    int flag8;

    type.value = 0;
    type.flags &= 0xfffffe00;
    code = func_001EEA34();
    f1 = arg->func_001EF1FC();
    if (code == -1) {
        out->func_001EF170(1);
        return out;
    }
    if (code == -2) {
        func_001EFCF7(out, 2, arg);
        return out;
    }
    if (code == -3) {
        out->func_001EEEE6(arg);
        return out;
    }
    isClass = code & 0x8000;
    if (isClass == 0) {
        return out;
    }
    flag8 = ((code & 0x1800) == 0x800);
    if (flag8) {
        if ((code & 0x400) && (code & 0x1b00) == 0x1000) {
            return out;
        }
    } else {
        if ((code & 0x1000) && (code & 0x1b00) == 0x1000) {
            return out;
        }
    }
    if (flag8) {
        if ((code & 0x400) && ((code & 0x1b00) == 0x1100 || (code & 0x1b00) == 0x1200)) {
            return out;
        }
    } else {
        if ((code & 0x1000) && ((code & 0x1b00) == 0x1100 || (code & 0x1b00) == 0x1200)) {
            return out;
        }
    }
    (void)f1;
    (void)a; (void)b; (void)c; (void)d;
    out->func_001EEEE6(&type);
    return out;
}

S_001EF734 *func_001F1C3A(S_001EF734 *out)
{
 S_001EF734 a, b, c, d;
 int special;
 if (D_002F6A38.b13) {
  D_002F6A39.b5 = 0;
  func_001F306F(&b,0);
  D_002F6A38.b13 = 1;
  goto copy_b;
 } else if (*D_002F6A28 == '?') {
  ++D_002F6A28;
  func_001F1184(&a);
  special = !a.func_001EF1E7() && (a.flags & 0x20);
  if (a.func_001EF1D0()) {
   if (*D_002F6A28 && *D_002F6A28 != '@') {
    func_001F1DF5(&b);
    if (!b.func_001EF1E7()) {
     if (D_002F6A1C) {
      D_002F6A1C = 0;
      a.func_001EEF4F(a.func_001EFAB5(&c,&b));
      if (*D_002F6A28 != '@') {
       b.func_001EEF4F(func_001F1DF5(&c));
       a.func_001EEF4F(b.func_001EFD7A(&d,D_00295CE8)->func_001EFAB5(&c,&a));
      }
     } else {
      a.func_001EEF4F(b.func_001EFD7A(&c,D_00295CE8)->func_001EFAB5(&d,&a));
     }
    }
   }
   if (special && !a.func_001EF1E7()) a.flags |= 0x20;
   if (!a.func_001EF1E7() && !(a.flags & 0x100)) {
    char ch = *D_002F6A28;
    if (ch) {
     if (ch != '@') goto error1;
     ++D_002F6A28;
    }
    if ((D_002F6A39.b4) && !special) {
     b.value = 0;
     *(unsigned short *)&b.flags &= 0xfe00;
     func_001F1243(&d,&b);
    } else {
     func_001F1243(out,&a);
     goto done;
    }
   }
  }
  copy_a:
  out->func_001EEEE6(&a);
  goto done;
 } else {
  if (*D_002F6A28) { error1: out->func_001EF170(1); }
  else { error2: out->func_001EF170(2); }
  goto done;
 }
 goto done;
 copy_b: out->func_001EEEE6(&b);
 done: return out;
}

#pragma optimize("sy", on)
#pragma optimize("y", off)
S_001EF734 *func_001F1DF5(S_001EF734 *out)
{
 S_001EF734 scope;
 S_001EF734 a1, a2, b1, b2, c1, d1, d2, e1, e2, e3, e4, f1, f2, f3, g1, g2, h1, h2;
 bool needBracket;
 scope.value = 0;
 scope.flags &= 0xfffffe00;
 needBracket = false;
 while ((scope.flags & 0xf) == 0 && *D_002F6A28 && *D_002F6A28 != '@') {
  if (D_002F6A1C) goto done;
  if (!scope.func_001EF1E7()) {
   scope.func_001EEF4F(func_001EFD19(&a1, D_00295CE8, &scope));
   if (needBracket) {
    scope.func_001EEF4F(func_001EFCD5(&a2, '[', &scope));
    needBracket = false;
   }
  }
  if (*D_002F6A28 == '?') {
   switch (*++D_002F6A28) {
   case '$':
    scope.func_001EEF4F(func_001F098B(&b1, (--D_002F6A28, 1))->func_001EFAB5(&b2, &scope));
    break;
   case '%':
   case 'A':
    while (*D_002F6A28 != '@') ++D_002F6A28;
    scope.func_001EEF4F(func_001EFD19(&c1, (++D_002F6A28, D_00295CD0), &scope));
    break;
   case '?':
    if (D_002F6A28[1] == '_' && D_002F6A28[2] == '?') {
     ++D_002F6A28;
     scope.func_001EEF4F(func_001F0B53(&d1)->func_001EFAB5(&d2, &scope));
     if (*D_002F6A28 == '@') ++D_002F6A28;
    } else {
     scope.func_001EEF4F(func_001EFCD5(&e1, '`', func_001F1C3A(&e2))->func_001EFD3B(&e3, '\'')->func_001EFAB5(&e4, &scope));
    }
    break;
   case 'I':
    scope.func_001EEF4F(func_001F098B(&f1, (++D_002F6A28, 1))->func_001EFD3B(&f2, ']')->func_001EFAB5(&f3, &scope));
    needBracket = true;
    break;
   default:
    scope.func_001EEF4F(func_001F01D8(&g1)->func_001EFAB5(&g2, &scope));
    break;
   }
  } else {
   scope.func_001EEF4F(func_001F098B(&h1, 1)->func_001EFAB5(&h2, &scope));
  }
 }
 if (*D_002F6A28) {
  if (*D_002F6A28 != '@') {
   scope.value = 0;
   if ((scope.flags & 0xf) != 3)
    scope.flags = (scope.flags & 0xfffffff1) | 1;
  }
 } else if (scope.func_001EF1E7())
  scope.func_001EF333(2);
 else
  scope.func_001EEF4F(b1.func_001EF170(2)->func_001EFD7A(&h2, D_00295CE8)->func_001EFAB5(&h1, &scope));
done:
 out->func_001EEEE6(&scope);
 return out;
}
#pragma optimize("", on)

#pragma optimize("", on)
