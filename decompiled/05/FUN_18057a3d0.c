// FUN_18057a3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a3d0 */

longlong FUN_18057a3d0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uStackX_1c;
  
  plVar1 = (longlong *)FUN_18057bdc0(CONCAT44(uStackX_1c,param_1));
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



