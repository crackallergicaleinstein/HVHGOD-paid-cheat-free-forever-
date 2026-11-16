// FUN_18061a994 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a994 */

longlong FUN_18061a994(void)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180bb1d80 != 0) {
    return DAT_180bb1d80;
  }
  if ((DAT_180bb1d78 == 0) ||
     ((iVar1 = FUN_18061a49c(), iVar1 != 0 && (iVar1 = FUN_18061a864(), iVar1 != 0)))) {
    lVar2 = 0;
  }
  else {
    lVar2 = DAT_180bb1d80;
  }
  return lVar2;
}



