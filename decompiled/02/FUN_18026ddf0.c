// FUN_18026ddf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026ddf0 */

bool FUN_18026ddf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_18026de60();
  if (lVar3 != 0) {
    lVar1 = FUN_18017ea70();
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
    cVar2 = FUN_1801ad810(lVar3,param_2);
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if (cVar2 != '\0') goto LAB_18026de42;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_18026de42:
  return *(char *)(param_1 + 0x38) == '\0';
}



