// FUN_1800dfca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800dfca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dfca0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar13;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_c0 = -1;
  do {
    local_c0 = local_c0 + 1;
  } while (*(char *)((longlong)param_3 + local_c0) != '\0');
  local_b0 = -1;
  do {
    local_b0 = local_b0 + 1;
  } while (*(char *)(param_2 + local_b0) != '\0');
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
  local_c8 = param_3;
  local_b8 = param_2;
  uVar6 = FUN_1800aa290(&local_b8,&local_c8);
  FUN_18015abc0(local_28,0xc,&DAT_1806bbf8c,uVar6);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar13 = -1;
  do {
    lVar5 = lVar13 + 1;
    lVar13 = lVar13 + 1;
  } while (local_28[lVar5] != '\0');
  FUN_18015ba30(local_68,local_28);
  local_b0 = -1;
  do {
    local_b0 = local_b0 + 1;
  } while (*(char *)(param_5 + local_b0) != '\0');
  local_c0 = -1;
  do {
    local_c0 = local_c0 + 1;
  } while (*(char *)((longlong)param_4 + local_c0) != '\0');
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
  local_b8 = param_5;
  local_c8 = param_4;
  uVar6 = FUN_1800aa290(&local_c8,&local_b8);
  FUN_18015abc0(local_28,0xc,&DAT_1806bbf8c,uVar6);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  lVar13 = -1;
  do {
    lVar12 = lVar13 + 1;
    lVar5 = lVar13 + 1;
    lVar13 = lVar12;
  } while (local_28[lVar5] != '\0');
  FUN_18015ba30(local_48,local_28,lVar12);
  pcVar3 = *(char **)(param_1 + 8);
  if (*pcVar3 == '\x01') {
    plVar4 = *(longlong **)(pcVar3 + 8);
    plVar7 = (longlong *)FUN_180111e70(plVar4,&local_c8,local_48);
    if (*plVar7 == *plVar4) {
      plVar7 = (longlong *)FUN_180111e70(plVar4,&local_c8,local_68);
      if (*plVar7 != *plVar4) {
        local_c8 = &local_b8;
        uVar8 = FUN_18015b360(local_a8,local_68);
        uVar8 = FUN_1800f43d0(pcVar3,uVar8);
        puVar9 = (undefined1 *)FUN_1800f4a50(&local_b8,uVar8);
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar10 = FUN_18015b360(local_88,local_48);
        puVar11 = (undefined1 *)FUN_1800f43d0(uVar8,uVar10);
        uVar2 = *puVar11;
        *puVar11 = *puVar9;
        *puVar9 = uVar2;
        puVar1 = (undefined8 *)(puVar9 + 8);
        uVar8 = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar11 + 8) = *puVar1;
        *puVar1 = uVar8;
        FUN_1801409d0(puVar1,*puVar9);
      }
    }
  }
  FUN_1800f42a0(*(undefined8 *)(param_1 + 8),local_68);
  FUN_18015c010(local_48);
  FUN_18015c010(local_68);
}



