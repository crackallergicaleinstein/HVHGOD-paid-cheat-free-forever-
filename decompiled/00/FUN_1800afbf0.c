// FUN_1800afbf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800afbf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800afbf0(char *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  longlong lStack_90;
  undefined1 local_88 [32];
  undefined8 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  char local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = 0;
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = (undefined8 *)*param_2;
  lStack_90 = param_2[1];
  local_68 = param_4;
  uVar4 = FUN_1800aa290(&local_98,&local_a8);
  FUN_18015abc0(local_40,9,&DAT_1806bbf8c,uVar4);
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while (local_40[lVar3] != '\0');
  FUN_18015ba30(local_60,local_40);
  if (*param_1 == '\x01') {
    plVar2 = *(longlong **)(param_1 + 8);
    plVar5 = (longlong *)FUN_180111e70(plVar2,&local_98,local_60);
    if (*plVar5 != *plVar2) {
      local_98 = &local_a8;
      local_a8 = *param_4;
      uStack_a0 = param_4[1];
      *(undefined1 *)param_4 = 0;
      param_4[1] = 0;
      uVar6 = FUN_18015b360(local_88,local_60);
      puVar7 = (undefined1 *)FUN_1800f43d0(param_1,uVar6);
      uVar1 = *puVar7;
      *puVar7 = (undefined1)local_a8;
      local_a8 = CONCAT71(local_a8._1_7_,uVar1);
      uVar6 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uStack_a0;
      uStack_a0 = uVar6;
      FUN_1801409d0(&uStack_a0,uVar1);
    }
  }
  FUN_18015c010(local_60);
  FUN_1801409d0(param_4 + 1,*(undefined1 *)param_4);
}



