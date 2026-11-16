// FUN_1804c3590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3590 */

undefined8 FUN_1804c3590(int param_1)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0xb5e + DAT_180bb8ae8) == '\0') {
    return 0;
  }
  param_1 = param_1 + 0x290;
  if (((((param_1 < 0x200) || (0x29a < param_1)) && (param_1 != 0x1000)) &&
      (((param_1 != 0x2000 && (param_1 != 0x4000)) && (param_1 != 0x8000)))) ||
     (lVar1 = FUN_1804af210(DAT_180bb8ae8), *(char *)(lVar1 + 8) == '\0')) {
    return 1;
  }
  return 0;
}



