// FUN_180154540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154540 */

ulonglong FUN_180154540(undefined8 *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  byte local_res8 [8];
  
  lVar7 = param_1[4] + 1;
  param_1[4] = lVar7;
  lVar5 = param_1[5] + 1;
  param_1[5] = lVar5;
  if (*(char *)(param_1 + 3) == '\0') {
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)param_1[1]) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)*pbVar3;
      *param_1 = pbVar3 + 1;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    local_res8[0] = (byte)*(int *)((longlong)param_1 + 0x14);
    FUN_180157850(param_1 + 7,local_res8);
    lVar7 = param_1[4];
    lVar5 = param_1[5];
  }
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  puVar1 = param_1 + 6;
  if (iVar2 == 10) {
    *puVar1 = *puVar1 + 1;
    param_1[4] = lVar7 + -1;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
LAB_1801546e5:
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *puVar1 = uVar4;
    }
  }
  else {
    local_res8[0] = 0xef;
    if (iVar2 == 0xef) {
      param_1[4] = lVar7 + 1;
      param_1[5] = lVar5 + 1;
      if (*(char *)(param_1 + 3) == '\0') {
        pbVar3 = (byte *)*param_1;
        if (pbVar3 != (byte *)param_1[1]) {
          local_res8[0] = *pbVar3;
          *param_1 = pbVar3 + 1;
          *(uint *)((longlong)param_1 + 0x14) = (uint)local_res8[0];
          goto LAB_180154625;
        }
        *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
LAB_180154625:
        FUN_180157850(param_1 + 7,local_res8);
      }
      uVar6 = *(uint *)((longlong)param_1 + 0x14);
      uVar4 = (ulonglong)uVar6;
      if (uVar6 == 10) goto LAB_18015469d;
      local_res8[0] = 0xbb;
      if (uVar6 != 0xbb) goto LAB_1801546c2;
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\0') {
        pbVar3 = (byte *)*param_1;
        if (pbVar3 != (byte *)param_1[1]) {
          local_res8[0] = *pbVar3;
          *param_1 = pbVar3 + 1;
          *(uint *)((longlong)param_1 + 0x14) = (uint)local_res8[0];
          goto LAB_18015467a;
        }
        *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
LAB_18015467a:
        FUN_180157850(param_1 + 7,local_res8);
      }
      uVar6 = *(uint *)((longlong)param_1 + 0x14);
      uVar4 = (ulonglong)uVar6;
      if (uVar6 == 10) {
LAB_18015469d:
        param_1[6] = param_1[6] + 1;
        param_1[5] = 0;
        return uVar4 & 0xffffffffffffff00;
      }
      if (uVar6 != 0xbf) {
LAB_1801546c2:
        return uVar4 & 0xffffffffffffff00;
      }
      goto LAB_180154707;
    }
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[4] = lVar7 + -1;
    if (lVar5 == 0) goto LAB_1801546e5;
    uVar4 = lVar5 - 1;
    param_1[5] = uVar4;
  }
  if (iVar2 != -1) {
    param_1[8] = param_1[8] + -1;
  }
LAB_180154707:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



