// FUN_18057a550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a550 */

longlong FUN_18057a550(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_18057bdc0();
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



