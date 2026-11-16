// FUN_1803ecfb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ecfb0 */

ulonglong FUN_1803ecfb0(undefined8 *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    local_res8 = 0;
    cVar2 = FUN_1804514f0(&local_res8,param_2,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar5 = local_res8;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  if ((bVar1) && (uVar5 != 0)) {
    lVar4 = uVar5 + (longlong)(param_3 * 8);
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = 0;
      cVar2 = FUN_1804514f0(&local_res8,lVar4,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar5 = local_res8;
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if (!bVar1) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  if ((uVar5 < *(ulonglong *)*param_1) || (*(ulonglong *)param_1[1] <= uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}



