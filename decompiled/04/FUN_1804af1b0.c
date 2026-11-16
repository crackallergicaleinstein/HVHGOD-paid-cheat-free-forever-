// FUN_1804af1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804af1b0 */

longlong FUN_1804af1b0(uint param_1)

{
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  return (longlong)(int)(param_1 - 0x200) * 0x10 + 0x134 + DAT_180bb8ae8;
}



