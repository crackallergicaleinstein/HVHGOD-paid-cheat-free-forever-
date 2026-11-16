// FUN_1804af210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804af210 */

longlong FUN_1804af210(longlong param_1,uint param_2)

{
  if ((param_2 & 0xf000) != 0) {
    if (param_2 == 0x1000) {
      param_2 = 0x297;
    }
    else if (param_2 == 0x2000) {
      param_2 = 0x298;
    }
    else if (param_2 == 0x4000) {
      param_2 = 0x299;
    }
    else if (param_2 == 0x8000) {
      param_2 = 0x29a;
    }
  }
  return param_1 + ((longlong)(int)(param_2 - 0x200) * 3 + 0x575) * 4;
}



