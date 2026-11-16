// FUN_18061a958 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a958 */

longlong FUN_18061a958(void)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180bb1d78 != 0) {
    return DAT_180bb1d78;
  }
  if ((DAT_180bb1d80 == 0) ||
     ((iVar1 = FUN_18061a428(), iVar1 != 0 && (iVar1 = FUN_18061a784(), iVar1 != 0)))) {
    lVar2 = 0;
  }
  else {
    lVar2 = DAT_180bb1d78;
  }
  return lVar2;
}



