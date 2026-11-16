// FUN_1804c8df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8df0 */

void FUN_1804c8df0(void)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = DAT_180bb8ae8;
  if ((*(longlong *)(DAT_180bb8ae8 + 0x2040) == 0) ||
     ((*(uint *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 0x14) & 0x10000) == 0)) {
    if (*(int *)(DAT_180bb8ae8 + 0x2090) == 2) {
      bVar1 = *(byte *)(DAT_180bb8ae8 + 0x28) & 1;
    }
    else {
      if (*(int *)(DAT_180bb8ae8 + 0x2090) != 3) goto LAB_1804c8e1d;
      bVar1 = *(byte *)(DAT_180bb8ae8 + 0x28) & 2;
    }
    if (bVar1 != 0) {
LAB_1804c8e1d:
      if (*(char *)(DAT_180bb8ae8 + 0x76) == '\0') {
        *(undefined2 *)(DAT_180bb8ae8 + 0x2039) = 0x101;
        return;
      }
      *(undefined2 *)(DAT_180bb8ae8 + 0x2038) = 0x101;
      *(undefined1 *)(lVar2 + 0x203a) = 1;
      return;
    }
  }
  *(undefined2 *)(DAT_180bb8ae8 + 0x2038) = 0x100;
  *(undefined1 *)(lVar2 + 0x203a) = 1;
  return;
}



