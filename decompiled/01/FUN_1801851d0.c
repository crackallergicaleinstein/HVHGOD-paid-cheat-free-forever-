// FUN_1801851d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801851d0 */

longlong FUN_1801851d0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  
  iVar1 = *(int *)param_1[1];
  lVar5 = *(longlong *)*param_1;
  local_res10 = param_2;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (iVar1 + lVar5 == 0) {
    bVar2 = false;
  }
  else {
    local_res10 = 0;
    cVar3 = FUN_1804514f0(&local_res10,iVar1 + lVar5,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  lVar5 = local_res10;
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if ((bVar2) && (lVar5 != 0)) {
    lVar4 = lVar5 + *(int *)param_1[3] + (longlong)*(int *)param_1[2];
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar4 == 0) {
      bVar2 = false;
    }
    else {
      local_res10 = 0;
      cVar3 = FUN_1804514f0(&local_res10,lVar4,8);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    lVar5 = local_res10;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (!bVar2) {
      lVar5 = 0;
    }
  }
  else {
    lVar5 = 0;
  }
  FUN_180184460(param_2,lVar5);
  return param_2;
}



