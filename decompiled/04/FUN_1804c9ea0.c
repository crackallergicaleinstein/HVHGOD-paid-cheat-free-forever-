// FUN_1804c9ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9ea0 */

char FUN_1804c9ea0(uint param_1)

{
  bool bVar1;
  
  if (((*(int *)(DAT_180bb8ae8 + 0x1550) == 0) || (*(char *)(DAT_180bb8ae8 + 0x1564) == '\0')) ||
     (*(int *)(DAT_180bb8ae8 + 0x1550) != *(int *)(DAT_180bb8ae8 + 0x1ec0))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((param_1 >> 0x1a & 1) != 0) && (bVar1)) {
    return '\x02';
  }
  if ((*(char *)(DAT_180bb8ae8 + 0x2038) == '\0') || (*(char *)(DAT_180bb8ae8 + 0x2039) == '\0')) {
    return '\x01';
  }
  return (*(longlong *)(DAT_180bb8ae8 + 0x2040) != 0) + '\x01';
}



