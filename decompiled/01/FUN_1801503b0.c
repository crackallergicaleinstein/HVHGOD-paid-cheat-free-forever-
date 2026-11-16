// FUN_1801503b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801503b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801503b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  byte bVar10;
  undefined1 auStack_88 [48];
  byte *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  byte *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0) {
    local_30 = (byte *)CONCAT44(local_30._4_4_,
                                (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >>
                                     3) + -1);
    local_38[0] = 1;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_30,local_38);
    if (cVar6 == '\0') {
      puVar7 = (undefined1 *)FUN_1800f4a50(&local_30,param_1 + 0xb8);
      puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 0x10) + -8);
      uVar2 = *puVar4;
      *puVar4 = *puVar7;
      *puVar7 = uVar2;
      puVar1 = (undefined8 *)(puVar7 + 8);
      uVar5 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = *puVar1;
      *puVar1 = uVar5;
      FUN_1801409d0(puVar1,*puVar7);
    }
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  FUN_180151b00(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
  }
  pbVar9 = *(byte **)(*(longlong *)(param_1 + 0x10) + -8);
  if (pbVar9 == (byte *)0x0) {
  }
  if ((*pbVar9 != 2) && (*pbVar9 != 1)) {
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0x8000000000000000;
  bVar10 = *pbVar9;
  local_30 = pbVar9;
  switch(bVar10) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar10) {
    case 0:
      local_18 = 1;
      break;
    case 1:
      goto switchD_1801504db_caseD_1;
    case 2:
      goto switchD_1801504db_caseD_2;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      goto switchD_1801504db_default;
    default:
      goto switchD_180150559_caseD_0;
    case 0xb:
    case 0x15:
      goto switchD_180150559_caseD_1;
    case 0xc:
    case 0x16:
      goto switchD_180150559_caseD_2;
    case 0x14:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      goto switchD_180150559_default;
    }
  case 1:
switchD_1801504db_caseD_1:
    local_28 = *(undefined8 *)**(undefined8 **)(pbVar9 + 8);
    break;
  case 2:
switchD_1801504db_caseD_2:
    uStack_20 = **(undefined8 **)(pbVar9 + 8);
    break;
  default:
switchD_1801504db_default:
    local_18 = 0;
  }
  do {
    pbVar9 = *(byte **)(*(longlong *)(param_1 + 0x10) + -8);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0x8000000000000000;
    bVar10 = *pbVar9;
    local_58 = pbVar9;
    switch(bVar10) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_180150559_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar10) {
      case 1:
        goto switchD_180150559_caseD_1;
      case 2:
        goto switchD_180150559_caseD_2;
      }
    default:
switchD_180150559_default:
      local_40 = 1;
      break;
    case 1:
switchD_180150559_caseD_1:
      local_50 = **(undefined8 **)(pbVar9 + 8);
      break;
    case 2:
switchD_180150559_caseD_2:
      uStack_48 = *(undefined8 *)(*(longlong *)(pbVar9 + 8) + 8);
    }
    cVar6 = FUN_1800e6ca0(&local_30,&local_58);
    if (cVar6 != '\0') {
    }
    pcVar8 = (char *)FUN_1800f34a0(&local_30);
    if (*pcVar8 == '\t') {
      local_58 = local_30;
      local_50 = local_28;
      uStack_48 = uStack_20;
      local_40 = local_18;
      FUN_1800ef9a0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8),&local_30,&local_58);
    }
    FUN_1800f33e0(&local_30);
  } while( true );
}



