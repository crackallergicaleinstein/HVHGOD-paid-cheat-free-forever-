// FUN_180619a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180619a40 */

longlong FUN_180619a40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)FUN_18061a958();
  if ((plVar2 != (longlong *)0x0) && (param_1 != 0)) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)(param_1 + uVar5) != '\0');
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(char *)(lVar3 + uVar4) != '\0');
      if (((uVar5 < uVar4) && (*(char *)(lVar3 + uVar5) == '=')) &&
         (iVar1 = FUN_180629db0(lVar3,param_1,uVar5), iVar1 == 0)) {
        return *plVar2 + 1 + uVar5;
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  return 0;
}



