// FUN_180525be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180525be0 */

ulonglong FUN_180525be0(uint param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (param_1 < 0x15) {
    uVar1 = param_1 - 0x10;
    in_RAX = (ulonglong)uVar1;
    if (((uVar1 & 0xfffffffa) != 0) || (param_1 == 0x15)) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



