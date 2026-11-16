// FUN_1803717a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803717a0 */

ulonglong * FUN_1803717a0(ulonglong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  lVar6 = DAT_180c6fa00;
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  bVar1 = false;
  if (lVar6 != 0) {
    local_res8 = 0;
    cVar4 = FUN_1804514f0(&local_res8,lVar6,8);
    if (cVar4 == '\0') {
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
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (uVar3 + 0x18 != 0) {
      local_res8 = 0;
      cVar4 = FUN_1804514f0(&local_res8,uVar3 + 0x18,8);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar7 = local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (!bVar1) {
      uVar7 = 0;
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    if (uVar3 + 8 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = 0;
      cVar4 = FUN_1804514f0(&local_res8,uVar3 + 8,8);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar8 = local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    uVar2 = DAT_1808d9be0;
    if (!bVar1) {
      uVar8 = 0;
    }
    if ((((uVar7 < 0x10000) || (uVar8 <= uVar7)) || (uVar8 = uVar8 - uVar7, 0x8000000 < uVar8)) ||
       ((uVar8 & 0x1f) != 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    else {
      param_1[2] = uVar8 >> 5;
      *param_1 = uVar3;
      param_1[1] = uVar7;
      *(undefined4 *)(param_1 + 3) = uVar2;
    }
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



