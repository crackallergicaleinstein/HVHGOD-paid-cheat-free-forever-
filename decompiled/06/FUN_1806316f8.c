// FUN_1806316f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806316f8 */

undefined8 FUN_1806316f8(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_18060fddc();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180bb2530)) {
      if ((*(byte *)((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_18060fddc();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 9;
    FUN_18060aad4();
  }
  return 0xffffffffffffffff;
}



