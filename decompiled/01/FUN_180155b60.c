// FUN_180155b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180155b60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x000180155e6d : 10 cases all go to same
   destination */

void FUN_180155b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 10;
  param_1[0xc] = 0;
  puVar5 = puVar1;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar5 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar5 = 0;
  if (param_1[7] != param_1[8]) {
    param_1[8] = param_1[7];
  }
  param_1[0x13] = 0xffffffffffffffff;
  local_38[0] = *(undefined1 *)((longlong)param_1 + 0x14);
  FUN_180157850(param_1 + 7,local_38);
  iVar12 = 5;
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  switch(iVar4) {
  case 0x2d:
    FUN_18015af80(puVar1);
    break;
  case 0x30:
    goto switchD_180155bf9_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_180155bf9_caseD_31;
  }
  iVar12 = 6;
  uVar3 = FUN_180157250(param_1);
  switch(uVar3) {
  case 0x30:
    goto switchD_180155c29_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar4 = *(int *)((longlong)param_1 + 0x14);
switchD_180155bf9_caseD_31:
    FUN_18015af80(puVar1,iVar4);
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pbVar2 = (byte *)*param_1;
      if (pbVar2 == (byte *)param_1[1]) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = (uint)*pbVar2;
        *param_1 = pbVar2 + 1;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar11;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x14) != -1) {
      local_38[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
      FUN_180157850(param_1 + 7,local_38);
    }
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    if (iVar4 == 10) goto LAB_180155e9a;
    switch(iVar4) {
    case 0x2e:
      break;
    default:
      goto switchD_180155ce8_caseD_2f;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_180155bf9_caseD_31;
    case 0x45:
    case 0x65:
      goto switchD_180155ce8_caseD_45;
    }
  default:
    pcVar9 = "invalid number; expected digit after \'-\'";
    goto LAB_180155f8a;
  }
LAB_180155cee:
  FUN_18015af80(param_1 + 10,*(undefined1 *)(param_1 + 0x12));
  param_1[0x13] = param_1[0xc] + -1;
  iVar12 = 7;
  uVar3 = FUN_180157250(param_1);
  switch(uVar3) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar11 = (uint)*(byte *)((longlong)param_1 + 0x14);
switchD_180155db8_caseD_30:
    FUN_18015af80(param_1 + 10,uVar11);
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pbVar2 = (byte *)*param_1;
      if (pbVar2 == (byte *)param_1[1]) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = (uint)*pbVar2;
        *param_1 = pbVar2 + 1;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar11;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x14) != -1) {
      local_38[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
      FUN_180157850(param_1 + 7,local_38);
    }
    uVar11 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar11 == 10) goto LAB_180155e9a;
    switch(uVar11) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_180155db8_caseD_30;
    default:
      goto switchD_180155ce8_caseD_2f;
    case 0x45:
    case 0x65:
      goto switchD_180155ce8_caseD_45;
    }
  default:
    pcVar9 = "invalid number; expected digit after \'.\'";
  }
  goto LAB_180155f8a;
switchD_180155c29_caseD_30:
  iVar4 = *(int *)((longlong)param_1 + 0x14);
switchD_180155bf9_caseD_30:
  FUN_18015af80(puVar1,iVar4);
  iVar4 = FUN_180157250(param_1);
  if (iVar4 == 0x2e) goto LAB_180155cee;
  if ((iVar4 - 0x45U & 0xffffffdf) != 0) goto switchD_180155ce8_caseD_2f;
LAB_180155dca:
  FUN_18015af80(param_1 + 10,*(undefined1 *)((longlong)param_1 + 0x14));
  iVar12 = 7;
  uVar3 = FUN_180157250(param_1);
  switch(uVar3) {
  case 0x2b:
  case 0x2d:
    FUN_18015af80(param_1 + 10,*(undefined1 *)((longlong)param_1 + 0x14));
    uVar3 = FUN_180157250(param_1);
    switch(uVar3) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_180155dfc_caseD_30;
    default:
      pcVar9 = "invalid number; expected digit after exponent sign";
      goto LAB_180155f8a;
    }
  default:
    pcVar9 = "invalid number; expected \'+\', \'-\', or digit after exponent";
LAB_180155f8a:
    param_1[0xe] = pcVar9;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
switchD_180155dfc_caseD_30:
    FUN_18015af80(param_1 + 10,*(undefined1 *)((longlong)param_1 + 0x14));
    iVar4 = FUN_180157250(param_1);
    while (iVar4 - 0x30U < 10) {
      FUN_18015af80(param_1 + 10,*(undefined1 *)((longlong)param_1 + 0x14));
      iVar4 = FUN_180157250(param_1);
    }
switchD_180155ce8_caseD_2f:
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[4] = param_1[4] + -1;
    if (param_1[5] == 0) {
      if (param_1[6] != 0) {
        param_1[6] = param_1[6] + -1;
      }
    }
    else {
      param_1[5] = param_1[5] + -1;
    }
    if (*(int *)((longlong)param_1 + 0x14) != -1) {
      param_1[8] = param_1[8] + -1;
    }
    local_30 = 0;
    puVar6 = (undefined4 *)FUN_18060fe00();
    *puVar6 = 0;
    if (iVar12 == 5) {
      plVar10 = param_1 + 10;
      if (0xf < (ulonglong)param_1[0xd]) {
        plVar10 = (longlong *)*plVar10;
      }
      uVar7 = FUN_18060fb58(plVar10,&local_30,10);
      piVar8 = (int *)FUN_18060fe00();
      if (*piVar8 != 0x22) {
        param_1[0x10] = uVar7;
      }
    }
    else if (iVar12 == 6) {
      plVar10 = param_1 + 10;
      if (0xf < (ulonglong)param_1[0xd]) {
        plVar10 = (longlong *)*plVar10;
      }
      uVar7 = FUN_18060faa4(plVar10,&local_30,10);
      piVar8 = (int *)FUN_18060fe00();
      if (*piVar8 != 0x22) {
        param_1[0xf] = uVar7;
      }
    }
    plVar10 = param_1 + 10;
    if (0xf < (ulonglong)param_1[0xd]) {
      plVar10 = (longlong *)*plVar10;
    }
    uVar7 = FUN_180614da4(plVar10,&local_30);
    param_1[0x11] = uVar7;
  }
LAB_180155e9a:
  param_1[5] = 0;
  param_1[6] = param_1[6] + 1;
  goto switchD_180155ce8_caseD_2f;
switchD_180155ce8_caseD_45:
  goto LAB_180155dca;
}



