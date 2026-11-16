// FUN_1801daf20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801daf20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801daf20(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [64];
  undefined1 auStackY_138 [32];
  undefined1 *local_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  ulonglong local_40 [3];
  
  local_40[0] = DAT_1808d5f00 ^ (ulonglong)auStackY_138;
  switch(*param_1) {
  case 0:
    *param_2 = *param_3;
  case 1:
    FUN_1801dbbb0(param_3,param_2,*(undefined4 *)(param_1 + 8));
  case 2:
    puVar8 = (undefined8 *)*param_3;
    FUN_1801e4cf0(&local_108,local_a0,local_88,*(undefined4 *)(param_1 + 8));
    for (puVar11 = local_a0; puVar11 != local_108; puVar11 = puVar11 + 1) {
      uVar1 = *puVar11;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[2] + puVar8[1]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
    }
    break;
  case 3:
    puVar8 = (undefined8 *)*param_3;
    FUN_1801e1650(&local_108,local_88,local_70,*(undefined8 *)(param_1 + 8));
    for (puVar11 = local_88; puVar11 != local_108; puVar11 = puVar11 + 1) {
      uVar1 = *puVar11;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[1] + puVar8[2]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
    }
    break;
  case 4:
    puVar8 = (undefined8 *)*param_3;
    FUN_1801e1ad0(&local_108,local_70,local_58,*(undefined8 *)(param_1 + 8));
    for (puVar11 = local_70; puVar11 != local_108; puVar11 = puVar11 + 1) {
      uVar1 = *puVar11;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[2] + puVar8[1]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
    }
    break;
  case 5:
    puVar8 = (undefined8 *)*param_3;
    pcVar9 = "false";
    if (param_1[8] != '\0') {
      pcVar9 = "true";
    }
    cVar2 = *pcVar9;
    while (cVar2 != '\0') {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(char *)(puVar8[1] + puVar8[2]) = cVar2;
      puVar8[2] = puVar8[2] + 1;
      cVar2 = *pcVar9;
    }
    break;
  case 6:
    puVar8 = (undefined8 *)*param_3;
    uVar1 = param_1[8];
    if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
      (**(code **)*puVar8)(puVar8);
    }
    *(undefined1 *)(puVar8[1] + puVar8[2]) = uVar1;
    puVar8[2] = puVar8[2] + 1;
    break;
  case 7:
    auVar13 = ZEXT464(*(uint *)(param_1 + 8));
    puVar8 = (undefined8 *)*param_3;
    sVar3 = thunk_FUN_180624430(*(uint *)(param_1 + 8));
    uVar12 = auVar13._0_8_;
    if (sVar3 == 2) {
      iVar4 = FUN_180615430(uVar12);
      uVar12 = auVar13._0_8_;
      puVar6 = (undefined2 *)local_e8;
      if (iVar4 != 0) {
        local_e8[0] = 0x2d;
        puVar6 = (undefined2 *)(local_e8 + 1);
      }
      *puVar6 = 0x616e;
      puVar11 = (undefined1 *)((longlong)puVar6 + 3);
      *(undefined1 *)(puVar6 + 1) = 0x6e;
      if (puVar11 == local_e8) goto LAB_1801db220;
    }
    else {
LAB_1801db220:
      puVar5 = (undefined8 *)FUN_1801e6040(&local_108,local_e8,local_d0,uVar12);
      puVar11 = (undefined1 *)*puVar5;
    }
    for (puVar10 = local_e8; puVar10 != puVar11; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[1] + puVar8[2]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
    }
    break;
  case 8:
    uVar12 = *(undefined8 *)(param_1 + 8);
    puVar8 = (undefined8 *)*param_3;
    sVar3 = thunk_FUN_1806243d0(uVar12);
    if (sVar3 == 2) {
      iVar4 = FUN_1806117a0(uVar12);
      puVar6 = (undefined2 *)local_d0;
      if (iVar4 != 0) {
        local_d0[0] = 0x2d;
        puVar6 = (undefined2 *)(local_d0 + 1);
      }
      *puVar6 = 0x616e;
      *(undefined1 *)(puVar6 + 1) = 0x6e;
      puVar11 = (undefined1 *)((longlong)puVar6 + 3);
      if ((undefined1 *)((longlong)puVar6 + 3) == local_d0) goto LAB_1801db2e7;
    }
    else {
LAB_1801db2e7:
      FUN_1801e34b0(&local_108,local_d0,local_b8,uVar12);
      puVar11 = local_108;
    }
    for (puVar10 = local_d0; puVar10 != puVar11; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[1] + puVar8[2]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
    }
    break;
  case 9:
    uVar12 = *(undefined8 *)(param_1 + 8);
    puVar8 = (undefined8 *)*param_3;
    sVar3 = thunk_FUN_180624470(uVar12);
    if (sVar3 == 2) {
      iVar4 = FUN_1806117a0(uVar12);
      puVar6 = (undefined2 *)local_b8;
      if (iVar4 != 0) {
        local_b8[0] = 0x2d;
        puVar6 = (undefined2 *)(local_b8 + 1);
      }
      *puVar6 = 0x616e;
      *(undefined1 *)(puVar6 + 1) = 0x6e;
      puVar11 = (undefined1 *)((longlong)puVar6 + 3);
      if ((undefined1 *)((longlong)puVar6 + 3) == local_b8) goto LAB_1801db3b3;
    }
    else {
LAB_1801db3b3:
      FUN_1801e34b0(&local_108,local_b8,local_a0,uVar12);
      puVar11 = local_108;
    }
    for (puVar10 = local_b8; puVar10 != puVar11; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[1] + puVar8[2]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
    }
    break;
  case 10:
    puVar8 = (undefined8 *)*param_3;
    FUN_1801e1ad0(&local_108,local_58,local_40,*(undefined8 *)(param_1 + 8));
    if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
      (**(code **)*puVar8)(puVar8);
    }
    *(undefined1 *)(puVar8[2] + puVar8[1]) = 0x30;
    puVar8[2] = puVar8[2] + 1;
    if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
      (**(code **)*puVar8)(puVar8);
    }
    *(undefined1 *)(puVar8[2] + puVar8[1]) = 0x78;
    lVar7 = puVar8[2] + 1;
    puVar8[2] = lVar7;
    for (puVar11 = local_58; puVar11 != local_108; puVar11 = puVar11 + 1) {
      uVar1 = *puVar11;
      if ((ulonglong)puVar8[3] < lVar7 + 1U) {
        (**(code **)*puVar8)(puVar8);
      }
      *(undefined1 *)(puVar8[2] + puVar8[1]) = uVar1;
      puVar8[2] = puVar8[2] + 1;
      lVar7 = puVar8[2];
    }
    break;
  case 0xb:
    pcVar9 = *(char **)(param_1 + 8);
    puVar8 = (undefined8 *)*param_3;
    if (pcVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("String pointer is null.");
    }
    cVar2 = *pcVar9;
    while (cVar2 != '\0') {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if ((ulonglong)puVar8[3] < puVar8[2] + 1) {
        (**(code **)*puVar8)(puVar8);
      }
      *(char *)(puVar8[1] + puVar8[2]) = cVar2;
      puVar8[2] = puVar8[2] + 1;
      cVar2 = *pcVar9;
    }
    break;
  case 0xc:
    local_108 = *(undefined1 **)(param_1 + 8);
    lStack_100 = *(longlong *)(param_1 + 0x10);
    FUN_1801dd3d0(param_2,*param_3,&local_108);
  case 0xd:
    local_108 = (undefined1 *)*param_3;
    lStack_100 = param_3[1];
    lStack_f8 = param_3[2];
    local_f0 = param_3[3];
    (**(code **)(param_1 + 0x10))(param_3[4],&local_108,*(undefined8 *)(param_1 + 8));
    *param_2 = (longlong)local_108;
  default:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  *param_2 = (longlong)puVar8;
}



