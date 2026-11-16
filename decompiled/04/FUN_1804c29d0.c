// FUN_1804c29d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c29d0 */

uint FUN_1804c29d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff0fff;
  if (7 < uVar2 - 0x20f) {
    return param_1;
  }
  if ((uVar2 - 0x20f & 0xfffffffb) == 0) {
    return param_1 | 0x1000;
  }
  if ((uVar2 - 0x210 & 0xfffffffb) == 0) {
    return param_1 | 0x2000;
  }
  if ((uVar2 - 0x211 & 0xfffffffb) == 0) {
    return param_1 | 0x4000;
  }
  uVar1 = 0x8000;
  if ((uVar2 - 0x212 & 0xfffffffb) != 0) {
    uVar1 = 0;
  }
  return uVar1 | param_1;
}



