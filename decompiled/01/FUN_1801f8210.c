// FUN_1801f8210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f8210 */

int FUN_1801f8210(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong local_res8;
  
  if (param_1 == 0) {
    return -1;
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if (param_1 + 0x10 == 0) {
    bVar1 = false;
  }
  else {
    local_res8 = 0;
    cVar4 = FUN_1804514f0(&local_res8,param_1 + 0x10,8);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar3 = local_res8;
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((bVar1) && (uVar3 != 0)) {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    lVar5 = uVar3 + 0x10;
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = local_res8 & 0xffffffff00000000;
      cVar4 = FUN_1804514f0(&local_res8,lVar5,4);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    iVar2 = (int)local_res8;
    lVar5 = FUN_18017ea70();
    iVar6 = *(int *)(lVar5 + 4);
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      *(int *)(lVar5 + 4) = iVar6;
    }
    iVar7 = -1;
    if (bVar1) {
      iVar7 = iVar2;
    }
    if ((iVar7 != -1) && (lVar5 = FUN_1803d4150(iVar6,iVar7), lVar5 == param_1)) {
      return iVar7;
    }
  }
  return -1;
}



