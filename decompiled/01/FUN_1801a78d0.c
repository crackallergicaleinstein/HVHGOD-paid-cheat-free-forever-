// FUN_1801a78d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a78d0 */

longlong FUN_1801a78d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1804513c0(param_2,1,2);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    lVar2 = FUN_18017ea70();
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    FUN_1801ae0e0(param_1,param_2,param_3,param_4);
    lVar2 = FUN_18017ea70();
    if (*(int *)(lVar2 + 4) != 0) {
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
    }
  }
  return param_1;
}



