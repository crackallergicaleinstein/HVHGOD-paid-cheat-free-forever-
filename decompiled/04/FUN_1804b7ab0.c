// FUN_1804b7ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7ab0 */

undefined8 FUN_1804b7ab0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180bb8ae8;
  if (((((*(longlong *)(DAT_180bb8ae8 + 0x2040) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 0x3d8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0xcd) != '\0')) &&
      (lVar2 = *(longlong *)(param_1 + 0x3d8), lVar1 != lVar2)) &&
     ((((*(uint *)(lVar1 + 0x14) >> 0x1b & 1) != 0 ||
       (((*(uint *)(lVar1 + 0x14) >> 0x1a & 1) != 0 && ((param_2 & 0x20) == 0)))) &&
      (*(longlong *)(lVar2 + 0x3d8) != lVar1)))) {
    while (lVar2 != lVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x3d0);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



