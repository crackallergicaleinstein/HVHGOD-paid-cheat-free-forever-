// FUN_1804c2a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2a40 */

char * FUN_1804c2a40(uint param_1)

{
  if (param_1 == 0) {
    return "None";
  }
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
  if (param_1 - 0x200 < 0x9b) {
    return *(char **)(&UNK_1807b7020 + (longlong)(int)param_1 * 8);
  }
  return "Unknown";
}



