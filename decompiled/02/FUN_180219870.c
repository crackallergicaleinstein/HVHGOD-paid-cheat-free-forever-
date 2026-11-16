// FUN_180219870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180219870 */

longlong FUN_180219870(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int local_res10 [2];
  
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar1 = false;
  if (param_2 + param_1 != 0) {
    local_res10[0] = 0;
    cVar3 = FUN_1804514f0(local_res10,param_2 + param_1,4);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  iVar2 = local_res10[0];
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if (bVar1) {
    return iVar2 + param_1 + (longlong)param_3;
  }
  return 0;
}



