// FUN_180184240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180184240 */

uint * FUN_180184240(uint *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_res8;
  undefined4 uStackX_c;
  ulonglong local_res10;
  
  bVar2 = false;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  if (0xfffffffffffff9ee < param_2 - 1U) {
    return param_1;
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (param_2 + 0xac8 == 0) {
    local_res8 = local_res8 & 0xffffff00;
    uVar8 = local_res8;
  }
  else {
    local_res8 = 0;
    cVar4 = FUN_1804514f0(&local_res8,param_2 + 0xac8,4);
    uVar8 = local_res8;
    if (cVar4 == '\0') {
      local_res8 = (uint)local_res8._1_3_ << 8;
      uVar8 = local_res8;
    }
    else {
      local_res8 = CONCAT31(local_res8._1_3_,1);
    }
  }
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (param_2 + 0xad0 == 0) {
    bVar1 = false;
    uVar10 = CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_res10 = 0;
    cVar4 = FUN_1804514f0(&local_res10,param_2 + 0xad0,8);
    if (cVar4 == '\0') {
      bVar1 = false;
      uVar10 = CONCAT44(uStackX_c,local_res8);
    }
    else {
      bVar1 = true;
      uVar10 = local_res10;
    }
  }
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (param_2 + 0xab0 == 0) {
    uVar9 = local_res8;
  }
  else {
    local_res10 = local_res10 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_res10,param_2 + 0xab0,4);
    if (cVar4 == '\0') {
      uVar9 = local_res8;
    }
    else {
      bVar2 = true;
      uVar9 = (uint)local_res10;
    }
  }
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (param_2 + 0xab8 == 0) {
    bVar3 = false;
    uVar7 = CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_res10 = 0;
    cVar4 = FUN_1804514f0(&local_res10,param_2 + 0xab8,8);
    if (cVar4 == '\0') {
      bVar3 = false;
      uVar7 = CONCAT44(uStackX_c,local_res8);
    }
    else {
      bVar3 = true;
      uVar7 = local_res10;
    }
  }
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if ((char)local_res8 == '\0') {
    return param_1;
  }
  if (!bVar1) {
    return param_1;
  }
  if (bVar2) {
    if (bVar3) {
      *param_1 = uVar8;
      *(ulonglong *)(param_1 + 2) = uVar10;
      param_1[4] = uVar9;
      *(ulonglong *)(param_1 + 6) = uVar7;
      *(undefined1 *)(param_1 + 8) = 1;
      cVar4 = FUN_180184150(uVar8,uVar10);
      if ((cVar4 == '\0') ||
         (cVar4 = FUN_180184150(param_1[4],*(undefined8 *)(param_1 + 6)), cVar4 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)((longlong)param_1 + 0x21) = uVar5;
      return param_1;
    }
    return param_1;
  }
  return param_1;
}



