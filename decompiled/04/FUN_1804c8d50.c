// FUN_1804c8d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8d50 */

void FUN_1804c8d50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(DAT_180bb8ae8 + 0x1480) + -1;
  if (param_1 != 0) {
    iVar1 = -1;
    if ((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) {
      iVar1 = 0;
      do {
        param_1 = *(longlong *)(param_1 + 0x3c8);
      } while ((*(uint *)(param_1 + 0x14) & 0x1000000) != 0);
    }
    iVar1 = *(short *)(param_1 + 0xe2) + iVar1;
  }
  if (-1 < iVar1) {
    lVar3 = (longlong)iVar1;
    plVar4 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x1488) + lVar3 * 8);
    do {
      lVar2 = *plVar4;
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0xcd) != '\0')) &&
         ((*(uint *)(lVar2 + 0x14) & 0x10200) != 0x10200)) goto LAB_1804c8ddc;
      plVar4 = plVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  lVar2 = 0;
LAB_1804c8ddc:
  FUN_1804c8a10(lVar2,1);
  return;
}



