// FUN_180387970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387970 */

undefined1 FUN_180387970(undefined1 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = DAT_180c70a80;
  uVar2 = DAT_180c70a60;
  if ((DAT_180c70a70 != 0) && (DAT_180c70a80 != 0)) {
    lVar1 = FUN_18017ea70();
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
    cVar3 = FUN_18022ff70(lVar4,uVar2,param_1);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



