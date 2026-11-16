// FUN_1800eb4a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800eb4a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800eb4a0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [48];
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    local_78 = (undefined8 *)*param_4;
  }
  local_70 = param_4[2];
  local_58._0_8_ = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    local_58._0_8_ = *param_3;
  }
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_58._8_8_ = param_3[2];
  uVar4 = FUN_1800aa290(local_58,&local_78);
  FUN_18015abc0(local_38,0xc,&DAT_1806bbf8c,uVar4);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  lVar7 = -1;
  do {
    lVar3 = lVar7 + 1;
    lVar7 = lVar7 + 1;
  } while (local_38[lVar3] != '\0');
  FUN_18015ba30(local_58,local_38);
  pcVar1 = *(char **)(param_1 + 8);
  if (*pcVar1 == '\x01') {
    plVar2 = *(longlong **)(pcVar1 + 8);
    plVar5 = (longlong *)FUN_180111e70(plVar2,local_38,local_58);
    if (*plVar5 != *plVar2) {
      uVar6 = FUN_18015b360(&local_78,local_58);
      uVar6 = FUN_1800f43d0(pcVar1,uVar6);
      FUN_1800f4a50(param_2,uVar6);
      goto LAB_1800eb603;
    }
  }
  pcVar1 = *(char **)(param_1 + 0x10);
  if (*pcVar1 == '\x01') {
    plVar2 = *(longlong **)(pcVar1 + 8);
    plVar5 = (longlong *)FUN_180111e70(plVar2,local_38,local_58);
    if (*plVar5 != *plVar2) {
      uVar6 = FUN_180113610(pcVar1,local_58);
      FUN_1800f4a50(param_2,uVar6);
      goto LAB_1800eb603;
    }
  }
  *param_2 = 0;
  FUN_180111d10(param_2 + 8,0);
LAB_1800eb603:
  FUN_18015c010(local_58);
}



