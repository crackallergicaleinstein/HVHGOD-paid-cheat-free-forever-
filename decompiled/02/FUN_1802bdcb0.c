// FUN_1802bdcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bdcb0 */

longlong FUN_1802bdcb0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  lVar5 = DAT_180c6e8e8;
  if (DAT_180c6e8e8 != 0) {
    local_res8 = param_1;
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = 0;
      cVar2 = FUN_1804514f0(&local_res8,lVar5,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    lVar5 = local_res8;
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if ((bVar1) && (lVar5 != 0)) {
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      lVar5 = lVar5 + 8;
      if (lVar5 == 0) {
        bVar1 = false;
      }
      else {
        local_res8 = 0;
        cVar2 = FUN_1804514f0(&local_res8,lVar5,8);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      lVar5 = local_res8;
      lVar3 = FUN_18017ea70();
      if (*(int *)(lVar3 + 4) != 0) {
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
      }
      if ((bVar1) && (lVar5 != 0)) {
        lVar3 = FUN_18017ea70();
        local_res8 = 0;
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        cVar2 = FUN_1804514f0(&local_res8,lVar5,8);
        lVar3 = local_res8;
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if ((cVar2 == '\0') || (lVar3 == 0)) {
          lVar5 = 0;
        }
        return lVar5;
      }
    }
  }
  return 0;
}



