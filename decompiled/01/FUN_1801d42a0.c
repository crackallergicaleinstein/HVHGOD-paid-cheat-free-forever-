// FUN_1801d42a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d42a0 */

longlong FUN_1801d42a0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 0;
  for (lVar3 = *param_1; lVar3 != param_1[1]; lVar3 = lVar3 + 0x168) {
    if ((*(char *)(lVar3 + 0xe1) == '\0') && (*(char *)(lVar3 + 0xe3) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    lVar4 = lVar2 + 1;
    if (!bVar1) {
      lVar4 = lVar2;
    }
    lVar2 = lVar4;
  }
  return lVar2;
}



