// FUN_1803c4390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c4390 */

int FUN_1803c4390(undefined8 *param_1,ulonglong param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong local_res8;
  
  iVar9 = *(int *)*param_1;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if ((longlong)iVar9 + param_2 != 0) {
    local_res8 = 0;
    cVar5 = FUN_1804514f0(&local_res8,(longlong)iVar9 + param_2,8);
    if (cVar5 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar3 = local_res8;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if ((bVar1) && (uVar3 != 0)) {
    lVar6 = FUN_18017ea70();
    local_res8 = 0;
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar5 = FUN_1804514f0(&local_res8,uVar3,8);
    uVar4 = local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    uVar7 = 0;
    if (cVar5 != '\0') {
      uVar7 = uVar4;
    }
    if (uVar7 == param_2) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      if (uVar3 + 0x10 == 0) {
        bVar1 = false;
      }
      else {
        local_res8 = local_res8 & 0xffffffff00000000;
        cVar5 = FUN_1804514f0(&local_res8,uVar3 + 0x10,4);
        if (cVar5 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      uVar2 = (uint)local_res8;
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if (((bVar1) && (0x3fff < (uVar2 & 0x7fff))) && ((uVar2 & 0x7fff) != 0x7fff)) {
        iVar9 = *(int *)param_1[1];
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        bVar1 = false;
        if ((longlong)iVar9 + uVar3 != 0) {
          local_res8 = local_res8 & 0xffffffff00000000;
          cVar5 = FUN_1804514f0(&local_res8,(longlong)iVar9 + uVar3,4);
          if (cVar5 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        iVar9 = (uint)local_res8;
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        iVar8 = 0;
        if (bVar1) {
          iVar8 = iVar9;
        }
        iVar9 = 0;
        if (iVar8 < 0) {
          iVar9 = iVar8;
        }
        return iVar9;
      }
    }
  }
  return 0;
}



