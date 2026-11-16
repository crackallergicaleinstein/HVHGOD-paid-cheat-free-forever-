// FUN_180632c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180632c90 */

byte FUN_180632c90(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180bb2530)) {
      return *(byte *)((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 9;
    FUN_18060aad4();
  }
  return 0;
}



