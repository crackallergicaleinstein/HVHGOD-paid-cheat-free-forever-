// FUN_1800ea640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea640 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ea640(byte *param_1,int param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong lVar17;
  longlong lVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 (*pauVar22) [16];
  undefined1 auStack_178 [32];
  char local_158 [8];
  byte *local_150;
  undefined8 uStack_148;
  ulonglong local_140;
  ulonglong uStack_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [16];
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_e8._0_8_ = "selected mode";
  local_e8._8_8_ = 0xd;
  local_128._0_8_ = "combat";
  local_128._8_8_ = 6;
  uVar9 = FUN_1800aa290(local_128,local_e8);
  FUN_18015abc0(&local_48,0xc,&DAT_1806bbf8c,uVar9);
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  local_90 = 0;
  lVar17 = -1;
  do {
    lVar4 = lVar17 + 0x11;
    lVar17 = lVar17 + 1;
  } while (local_58[lVar4] != '\0');
  FUN_18015ba30(local_a8,&local_48);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_e8._0_8_ = "mode cycle key";
  local_e8._8_8_ = 0xe;
  local_128._0_8_ = "combat";
  local_128._8_8_ = 6;
  uVar9 = FUN_1800aa290(local_128,local_e8);
  FUN_18015abc0(&local_48,0xc,&DAT_1806bbf8c,uVar9);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  lVar17 = -1;
  do {
    lVar4 = lVar17 + 0x11;
    lVar17 = lVar17 + 1;
  } while (local_58[lVar4] != '\0');
  FUN_18015ba30(local_c8,&local_48);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_e8._0_8_ = "enabled";
  local_e8._8_8_ = 7;
  local_128._0_8_ = "ragebot";
  local_128._8_8_ = 7;
  uVar9 = FUN_1800aa290(local_128,local_e8);
  FUN_18015abc0(&local_48,0xc,&DAT_1806bbf8c,uVar9);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  lVar17 = -1;
  do {
    lVar4 = lVar17 + 0x11;
    lVar17 = lVar17 + 1;
  } while (local_58[lVar4] != '\0');
  FUN_18015ba30(local_88,&local_48);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_e8._8_8_ = 7;
  local_e8._0_8_ = "enabled";
  local_128._8_8_ = 8;
  local_128._0_8_ = "legitbot";
  uVar9 = FUN_1800aa290(local_128,local_e8);
  FUN_18015abc0(&local_48,0xc,&DAT_1806bbf8c,uVar9);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar17 = -1;
  do {
    lVar16 = lVar17 + 1;
    lVar4 = lVar17 + 0x11;
    lVar17 = lVar16;
  } while (local_58[lVar4] != '\0');
  FUN_18015ba30(local_68,&local_48,lVar16);
  bVar1 = *param_1;
  if ((bVar1 != 1) ||
     (plVar3 = *(longlong **)(param_1 + 8),
     plVar10 = (longlong *)FUN_180111e70(plVar3,local_128,local_a8), *plVar10 == *plVar3)) {
    if ((param_3 == '\0') || (1 < param_2)) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    if (bVar1 == 1) {
      plVar3 = *(longlong **)(param_1 + 8);
      plVar10 = (longlong *)FUN_180111e70(plVar3,local_128,local_88);
      if (*plVar10 == *plVar3) {
        plVar10 = (longlong *)FUN_180111e70(plVar3,local_128,local_68);
        if (*plVar10 != *plVar3) {
          uVar11 = FUN_18015b360(local_108,local_68);
          pcVar12 = (char *)FUN_1800f43d0(param_1,uVar11);
          cVar7 = *pcVar12;
          if (cVar7 == '\x01') {
            plVar3 = *(longlong **)(pcVar12 + 8);
            plVar10 = (longlong *)FUN_1800f6de0(plVar3,local_128,&DAT_1806bbee0);
            if (*plVar10 == *plVar3) goto LAB_1800eaa59;
            local_150 = (byte *)0x0;
            uStack_148 = 0;
            local_140 = 0;
            uStack_138 = 0;
            FUN_18015ba30(&local_150,&DAT_1806bbee0,1);
            pcVar12 = (char *)FUN_180113610(pcVar12,&local_150);
            FUN_18015c010(&local_150);
            cVar7 = *pcVar12;
          }
          if (cVar7 == '\x04') {
            cVar8 = pcVar12[8] == '\0';
          }
        }
      }
      else {
        uVar11 = FUN_18015b360(local_108,local_88);
        pcVar12 = (char *)FUN_1800f43d0(param_1,uVar11);
        cVar7 = *pcVar12;
        if (cVar7 == '\x01') {
          plVar3 = *(longlong **)(pcVar12 + 8);
          plVar10 = (longlong *)FUN_1800f6de0(plVar3,local_128,&DAT_1806bbee0);
          if (*plVar10 == *plVar3) goto LAB_1800eaa59;
          local_150 = (byte *)0x0;
          uStack_148 = 0;
          local_140 = 0;
          uStack_138 = 0;
          FUN_18015ba30(&local_150,&DAT_1806bbee0,1);
          pcVar12 = (char *)FUN_180113610(pcVar12,&local_150);
          FUN_18015c010(&local_150);
          cVar7 = *pcVar12;
        }
        if (cVar7 == '\x04') {
          cVar8 = pcVar12[8];
        }
      }
    }
LAB_1800eaa59:
    local_128._0_8_ = local_e8;
    local_e8 = ZEXT816(0);
    FUN_1801409d0(local_e8 + 8,0);
    local_e8[0] = 5;
    local_e8[8] = cVar8 != '\0';
    local_e8._9_7_ = 0;
    uVar11 = FUN_18015b360(local_108,local_a8);
    puVar13 = (undefined1 *)FUN_1800f43d0(param_1,uVar11);
    auVar5 = local_e8;
    uVar2 = *puVar13;
    *puVar13 = local_e8[0];
    local_e8[0] = uVar2;
    auVar6 = local_e8;
    uVar11 = *(undefined8 *)(puVar13 + 8);
    local_e8._8_8_ = auVar5._8_8_;
    *(undefined8 *)(puVar13 + 8) = local_e8._8_8_;
    local_e8._0_8_ = auVar6._0_8_;
    local_e8._8_8_ = uVar11;
    FUN_1801409d0(local_e8 + 8,uVar2);
  }
  uVar18 = local_98;
  local_e8 = (undefined1  [16])0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  pauVar22 = &local_a8;
  if (0xf < local_90) {
    pauVar22 = (undefined1 (*) [16])local_a8._0_8_;
  }
  if (0x7fffffffffffffff < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (local_98 < 0x10) {
    uStack_d8 = local_98;
    uStack_d0 = 0xf;
    local_e8 = *pauVar22;
  }
  else {
    uVar19 = local_98 | 0xf;
    if (uVar19 < 0x8000000000000000) {
      if (uVar19 < 0x16) {
        uVar19 = 0x16;
      }
    }
    else {
      uVar19 = 0x7fffffffffffffff;
    }
    uVar11 = FUN_18015bca0(uVar19 + 1);
    local_e8._0_8_ = uVar11;
    uStack_d8 = uVar18;
    uStack_d0 = uVar19;
    FUN_18063aed0(uVar11,pauVar22,uVar18 + 1);
  }
  pcVar12 = (char *)FUN_1800f43d0(param_1,local_e8);
  if ((*pcVar12 == '\x05') || (*pcVar12 == '\x06')) {
    uVar11 = FUN_18015b360(local_108,local_a8);
    uVar11 = FUN_1800f43d0(param_1,uVar11);
    cVar8 = FUN_1800ef4c0(uVar11,0);
    if (cVar8 == '\0') {
      uVar11 = FUN_18015b360(local_108,local_a8);
      uVar11 = FUN_1800f43d0(param_1,uVar11);
      cVar8 = FUN_1800ef4c0(uVar11,1);
      if (cVar8 == '\0') goto LAB_1800eabd6;
    }
  }
  else {
LAB_1800eabd6:
    local_48 = local_e8;
    local_e8 = ZEXT816(0);
    FUN_1801409d0(local_e8 + 8,0);
    local_e8[0] = 5;
    local_e8._8_8_ = 0;
    uVar11 = FUN_18015b360(local_108,local_a8);
    puVar13 = (undefined1 *)FUN_1800f43d0(param_1,uVar11);
    auVar5 = local_e8;
    uVar2 = *puVar13;
    *puVar13 = local_e8[0];
    local_e8[0] = uVar2;
    auVar6 = local_e8;
    uVar11 = *(undefined8 *)(puVar13 + 8);
    local_e8._8_8_ = auVar5._8_8_;
    *(undefined8 *)(puVar13 + 8) = local_e8._8_8_;
    local_e8._0_8_ = auVar6._0_8_;
    local_e8._8_8_ = uVar11;
    FUN_1801409d0(local_e8 + 8,uVar2);
  }
  if ((*param_1 == 1) &&
     (plVar3 = *(longlong **)(param_1 + 8),
     plVar10 = (longlong *)FUN_180111e70(plVar3,&local_48,local_c8), *plVar10 != *plVar3))
  goto LAB_1800eaf5c;
  local_48 = local_e8;
  local_e8 = ZEXT816(0);
  FUN_1801409d0(local_e8 + 8,0);
  local_e8[0] = 5;
  local_e8._8_8_ = 0;
  uVar11 = FUN_18015b360(local_108,local_c8);
  puVar13 = (undefined1 *)FUN_1800f43d0(param_1,uVar11);
  auVar5 = local_e8;
  uVar2 = *puVar13;
  *puVar13 = local_e8[0];
  local_e8[0] = uVar2;
  auVar6 = local_e8;
  uVar11 = *(undefined8 *)(puVar13 + 8);
  local_e8._8_8_ = auVar5._8_8_;
  *(undefined8 *)(puVar13 + 8) = local_e8._8_8_;
  local_e8._0_8_ = auVar6._0_8_;
  local_e8._8_8_ = uVar11;
  FUN_1801409d0(local_e8 + 8,uVar2);
  local_e8 = ZEXT816(0);
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_1800f4160(param_1,local_e8,local_88);
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0x8000000000000000;
  switch(*param_1) {
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
    switch(*param_1) {
    case 1:
      goto switchD_1800ead3b_caseD_1;
    case 2:
      goto switchD_1800ead3b_caseD_2;
    }
  default:
    uStack_138 = 1;
    break;
  case 1:
switchD_1800ead3b_caseD_1:
    uStack_148 = **(undefined8 **)(param_1 + 8);
    break;
  case 2:
switchD_1800ead3b_caseD_2:
    local_140 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
  }
  local_150 = param_1;
  cVar8 = FUN_1800e6ca0(local_e8,&local_150);
  if ((cVar8 == '\0') && (pcVar12 = (char *)FUN_1800f34a0(local_e8), *pcVar12 == '\x01')) {
    uVar11 = FUN_1800f34a0(local_e8);
    cVar8 = FUN_1800e6540(uVar11,&DAT_1806bbee4);
    if (cVar8 == '\0') goto LAB_1800eaf5c;
    uVar11 = FUN_1800f3560(local_e8);
    local_128 = (undefined1  [16])0x0;
    local_118 = 0;
    local_110 = 0;
    FUN_18015ba30(local_128,&DAT_1806bbee4,1);
    pcVar12 = (char *)FUN_1800f43d0(uVar11,local_128);
    if ((*pcVar12 != '\x01') ||
       (plVar3 = *(longlong **)(pcVar12 + 8),
       plVar10 = (longlong *)FUN_1800f6de0(plVar3,&local_48,&DAT_1806bbed8), *plVar10 == *plVar3))
    goto LAB_1800eaf5c;
    local_48 = local_e8;
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_108,&DAT_1806bbed8,1);
    uVar11 = FUN_180113610(pcVar12,local_108);
    FUN_18015c010(local_108);
    puVar13 = (undefined1 *)FUN_1800f4a50(local_e8,uVar11);
    uVar18 = local_b8;
    local_150 = (byte *)0x0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    puVar21 = (undefined8 *)local_c8._0_8_;
    puVar20 = (undefined8 *)local_c8;
    if (0xf < local_b0) {
      puVar20 = (undefined8 *)local_c8._0_8_;
    }
    if (0x7fffffffffffffff < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (local_b8 < 0x10) {
      local_140 = local_b8;
      uStack_138 = 0xf;
      local_150 = (byte *)*puVar20;
      uStack_148 = puVar20[1];
    }
    else {
      uVar19 = local_b8 | 0xf;
      if (uVar19 < 0x8000000000000000) {
        if (uVar19 < 0x16) {
          uVar19 = 0x16;
        }
      }
      else {
        uVar19 = 0x7fffffffffffffff;
      }
      local_150 = (byte *)FUN_18015bca0(uVar19 + 1);
      local_140 = uVar18;
      uStack_138 = uVar19;
      FUN_18063aed0(local_150,puVar20,uVar18 + 1);
    }
    puVar14 = (undefined1 *)FUN_1800f43d0(param_1,&local_150);
    uVar2 = *puVar14;
    *puVar14 = *puVar13;
    *puVar13 = uVar2;
    uVar11 = *(undefined8 *)(puVar14 + 8);
    *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar13 + 8);
    *(undefined8 *)(puVar13 + 8) = uVar11;
    FUN_1801409d0(puVar13 + 8,*puVar13);
  }
  else {
LAB_1800eaf5c:
    uVar18 = local_b8;
    puVar21 = (undefined8 *)local_c8._0_8_;
  }
  local_150 = (byte *)0x0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  puVar20 = (undefined8 *)local_c8;
  if (0xf < local_b0) {
    puVar20 = puVar21;
  }
  if (0x7fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (uVar18 < 0x10) {
    uStack_138 = 0xf;
    local_150 = (byte *)*puVar20;
    uStack_148 = puVar20[1];
    local_140 = uVar18;
  }
  else {
    uVar15 = uVar18 | 0xf;
    uVar19 = 0x7fffffffffffffff;
    if ((uVar15 < 0x8000000000000000) && (uVar19 = uVar15, uVar15 < 0x16)) {
      uVar19 = 0x16;
    }
    local_150 = (byte *)FUN_18015bca0(uVar19 + 1);
    local_140 = uVar18;
    uStack_138 = uVar19;
    FUN_18063aed0(local_150,puVar20,uVar18 + 1);
  }
  pcVar12 = (char *)FUN_1800f43d0(param_1,&local_150);
  if ((*pcVar12 == '\x05') || (*pcVar12 == '\x06')) {
    uVar11 = FUN_18015b360(local_108,local_c8);
    uVar11 = FUN_1800f43d0(param_1,uVar11);
    local_e8 = ZEXT816(0);
    FUN_1801409d0(local_e8 + 8,0);
    local_e8[0] = 5;
    local_e8._8_8_ = 0;
    FUN_180112ae0(uVar11,local_158,local_e8);
    FUN_1801409d0(local_e8 + 8,local_e8[0]);
    if (local_158[0] != -1) {
      uVar11 = FUN_18015b360(local_108,local_c8);
      uVar11 = FUN_1800f43d0(param_1,uVar11);
      local_e8 = ZEXT816(0);
      FUN_1801409d0(local_e8 + 8,0);
      local_e8[0] = 5;
      local_e8._8_8_ = 0xff;
      FUN_180112ae0(uVar11,local_158,local_e8);
      FUN_1801409d0(local_e8 + 8,local_e8[0]);
      if (local_158[0] < '\x01') goto LAB_1800eb152;
    }
  }
  local_48 = local_e8;
  local_e8 = ZEXT816(0);
  FUN_1801409d0(local_e8 + 8,0);
  local_e8[0] = 5;
  local_e8._8_8_ = 0;
  uVar11 = FUN_18015b360(local_108,local_c8);
  puVar13 = (undefined1 *)FUN_1800f43d0(param_1,uVar11);
  auVar5 = local_e8;
  uVar2 = *puVar13;
  *puVar13 = local_e8[0];
  local_e8[0] = uVar2;
  auVar6 = local_e8;
  uVar11 = *(undefined8 *)(puVar13 + 8);
  local_e8._8_8_ = auVar5._8_8_;
  *(undefined8 *)(puVar13 + 8) = local_e8._8_8_;
  local_e8._0_8_ = auVar6._0_8_;
  local_e8._8_8_ = uVar11;
  FUN_1801409d0(local_e8 + 8,uVar2);
LAB_1800eb152:
  FUN_1800f42a0(param_1,local_88);
  FUN_1800f42a0(param_1,local_68);
  FUN_18015c010(local_68);
  FUN_18015c010(local_88);
  FUN_18015c010(local_c8);
  FUN_18015c010(local_a8);
}



