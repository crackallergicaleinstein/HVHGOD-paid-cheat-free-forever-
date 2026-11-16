// FUN_18027aae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027aae0 */

void FUN_18027aae0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[2] != '\0') {
    lVar1 = *param_1;
    lVar5 = param_1[1];
    lVar4 = FUN_18026de60();
    if (lVar4 != 0) {
      lVar2 = FUN_18017ea70();
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
      cVar3 = FUN_1801ad810(lVar4,lVar5);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if (cVar3 != '\0') {
        return;
      }
    }
    *(undefined1 *)(lVar1 + 0x38) = 1;
  }
  return;
}



