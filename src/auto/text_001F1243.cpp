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
    void func_001EF170(int);
    S_001EF734 *func_001EFAB5(void *, void *);
    S_001EF734 *func_001EFD7A(void *, const char *);
};
S_001EF734 *func_001F306F(S_001EF734 *, int);
S_001EF734 *func_001F1184(S_001EF734 *);
S_001EF734 *func_001F1DF5(S_001EF734 *);
S_001EF734 *func_001F1243(S_001EF734 *, S_001EF734 *);

#pragma optimize("sy", on)
#pragma optimize("y", off)
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
#pragma optimize("", on)
