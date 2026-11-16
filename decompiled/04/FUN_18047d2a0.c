// FUN_18047d2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047d2a0 */

undefined8 FUN_18047d2a0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(char *)(DAT_180bb8ae8 + 0x12e) == '\0') &&
     ((*(char *)(DAT_180bb8ae8 + 300) != '\0' ||
      (((0.0 <= *(float *)(DAT_180bb8ae8 + 0xaac) && (*(char *)(DAT_180bb8ae8 + 0xaa4) == '\0')) &&
       (*(char *)(DAT_180bb8ae8 + 0x1cf0) == '\0')))))) {
    cVar1 = FUN_1804c3390(param_1,1,0);
    if ((cVar1 == '\0') && (cVar1 = FUN_1804c3390(param_2,1,0), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



