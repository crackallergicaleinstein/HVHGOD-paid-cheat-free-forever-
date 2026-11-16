// FUN_1800e09b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e09b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e09b0(longlong param_1,char **param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar12;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  char **local_88;
  longlong local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_80 = -1;
  do {
    local_80 = local_80 + 1;
  } while (*(char *)((longlong)param_2 + local_80) != '\0');
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_78 = "anti aim";
  local_70 = 8;
  local_88 = param_2;
  uVar6 = FUN_1800aa290(&local_78,&local_88);
  FUN_18015abc0(local_28,0xc,&DAT_1806bbf8c,uVar6);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  lVar12 = -1;
  do {
    lVar11 = lVar12 + 1;
    lVar5 = lVar12 + 1;
    lVar12 = lVar11;
  } while (local_28[lVar5] != '\0');
  FUN_18015ba30(local_48,local_28,lVar11);
  if (**(char **)(param_1 + 8) == '\x01') {
    plVar3 = *(longlong **)(*(char **)(param_1 + 8) + 8);
    plVar7 = (longlong *)FUN_180111e70(plVar3,&local_88,local_48);
    if (*plVar7 != *plVar3) goto LAB_1800e0b08;
  }
  local_88 = &local_78;
  puVar8 = (undefined1 *)FUN_1800f4a50(&local_78,param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar9 = FUN_18015b360(local_68,local_48);
  puVar10 = (undefined1 *)FUN_1800f43d0(uVar4,uVar9);
  uVar2 = *puVar10;
  *puVar10 = *puVar8;
  *puVar8 = uVar2;
  puVar1 = (undefined8 *)(puVar8 + 8);
  uVar4 = *(undefined8 *)(puVar10 + 8);
  *(undefined8 *)(puVar10 + 8) = *puVar1;
  *puVar1 = uVar4;
  FUN_1801409d0(puVar1,*puVar8);
LAB_1800e0b08:
  FUN_18015c010(local_48);
}



