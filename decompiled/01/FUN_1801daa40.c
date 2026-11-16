// FUN_1801daa40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801daa40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801daa40(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  undefined8 uVar6;
  undefined1 auStackY_d8 [32];
  char *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 *local_88;
  undefined1 *local_80;
  int *local_78;
  longlong local_70;
  char *local_68;
  char **local_60;
  char *local_58;
  longlong lStack_50;
  undefined1 local_48 [4];
  undefined2 local_44 [2];
  int local_40 [2];
  char local_38 [16];
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1808d5f00 ^ (ulonglong)auStackY_d8;
  switch(*param_1) {
  case 0:
    *param_2 = *(undefined8 *)*param_3;
    break;
  case 1:
    puVar4 = (undefined8 *)param_3[1];
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = *(undefined4 *)(puVar4 + 2);
    FUN_1801dde10(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),&local_a8);
    break;
  case 2:
    puVar4 = (undefined8 *)param_3[1];
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = *(undefined4 *)(puVar4 + 2);
    FUN_1801de3e0(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),&local_a8);
    break;
  case 3:
    puVar4 = (undefined8 *)param_3[1];
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = *(undefined4 *)(puVar4 + 2);
    FUN_1801de7a0(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),&local_a8);
    break;
  case 4:
    puVar4 = (undefined8 *)param_3[1];
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = *(undefined4 *)(puVar4 + 2);
    FUN_1801ded70(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),&local_a8);
    break;
  case 5:
    puVar4 = (undefined8 *)param_3[1];
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = *(undefined4 *)(puVar4 + 2);
    FUN_1801dbf60(param_2,*(undefined8 *)*param_3,param_1[8],&local_a8);
    break;
  case 6:
    puVar4 = (undefined8 *)param_3[1];
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = *(undefined4 *)(puVar4 + 2);
    FUN_1801dc140(param_2,*(undefined8 *)*param_3,param_1[8],&local_a8);
    break;
  case 7:
    FUN_1801dc220(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 8:
    FUN_1801dcb70(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 9:
    FUN_1801dcb70(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 10:
    lVar2 = param_3[1];
    uVar6 = *(undefined8 *)*param_3;
    FUN_1801e1ad0(&local_a8,local_38,local_28,*(undefined8 *)(param_1 + 8));
    local_44[0] = 0x7830;
    local_40[0] = ((int)local_a8 - (int)local_38) + 2;
    local_58 = local_a8;
    lStack_50 = uStack_a0;
    if (*(char *)(lVar2 + 8) == 'P') {
      local_44[0] = 0x5830;
      for (pcVar3 = local_38; pcVar3 != local_a8; pcVar3 = pcVar3 + 1) {
        cVar1 = *pcVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar3 = cVar1 + -0x20;
        }
      }
    }
    local_70 = lVar2;
    if ((*(char *)(lVar2 + 0xd) == '\0') || (*(char *)(lVar2 + 9) != '\0')) {
      local_88 = local_44;
      local_48[0] = 0;
      local_80 = local_48;
      local_78 = local_40;
      local_68 = local_38;
      local_60 = &local_58;
      FUN_1801df7d0(param_2,uVar6,local_40[0],lVar2);
    }
    else {
      local_88 = local_44;
      local_48[0] = 1;
      local_80 = local_48;
      local_78 = local_40;
      local_68 = local_38;
      local_60 = &local_58;
      FUN_1801dd1c0(&local_88,param_2,uVar6);
    }
    break;
  case 0xb:
    local_58 = *(char **)(param_1 + 8);
    lStack_50 = -1;
    puVar4 = (undefined8 *)*param_3;
    do {
      lStack_50 = lStack_50 + 1;
    } while (local_58[lStack_50] != '\0');
    uVar6 = param_3[1];
    ppcVar5 = &local_58;
    goto LAB_1801dada9;
  case 0xc:
    local_a8 = *(char **)(param_1 + 8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined8 *)*param_3;
    uVar6 = param_3[1];
    ppcVar5 = &local_a8;
LAB_1801dada9:
    FUN_1801dd2d0(param_2,*puVar4,ppcVar5,uVar6);
    break;
  case 0xd:
                    /* WARNING: Subroutine does not return */
    FUN_1801dbc80();
  default:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
}



