// FUN_1800eea70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800eea70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800eea70(undefined8 *param_1,int param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined4 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong *plVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8 [2];
  char *local_1d8;
  longlong **local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1b0 [2];
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined1 *local_188;
  ulonglong local_180;
  char *local_178;
  longlong local_170;
  undefined1 *local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  ulonglong local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined1 local_130 [16];
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  char local_b8;
  undefined7 uStack_b7;
  longlong *plStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  char local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 auStack_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  local_198._0_8_ = (longlong)param_2;
  puVar3 = (&PTR_s_pistol_1806ff2f8)[param_2];
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  lVar19 = -1;
  do {
    lVar19 = lVar19 + 1;
  } while (*(char *)(*(longlong *)*param_1 + lVar19) != '\0');
  FUN_18015ba30(local_d8);
  pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_d8,&DAT_1806bfbdc,3);
  local_130 = *pauVar8;
  uStack_120 = *(undefined8 *)pauVar8[1];
  uStack_118 = (undefined1)*(undefined8 *)(pauVar8[1] + 8);
  uStack_117 = (undefined7)((ulonglong)*(undefined8 *)(pauVar8[1] + 8) >> 8);
  *(undefined8 *)(pauVar8[1] + 8) = 0xf;
  (*pauVar8)[0] = 0;
  *(undefined8 *)pauVar8[1] = 0;
  lVar19 = -1;
  do {
    lVar19 = lVar19 + 1;
  } while (puVar3[lVar19] != '\0');
  pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_130,puVar3);
  local_78 = *pauVar8;
  auStack_68 = pauVar8[1];
  (*pauVar8)[0] = 0;
  *(undefined8 *)pauVar8[1] = 0;
  *(undefined8 *)(pauVar8[1] + 8) = 0xf;
  FUN_18015c010(local_130);
  FUN_18015c010(local_d8);
  plVar16 = (longlong *)param_1[1];
  local_100 = plVar16 + 9;
  if (plVar16 != local_100) {
    do {
      pcVar15 = (char *)*plVar16;
      uVar12 = param_1[2];
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (pcVar15[lVar19] != '\0');
      FUN_18015ba30(local_f8,pcVar15);
      FUN_1800eb4a0(uVar12,local_160,local_78,local_f8);
      FUN_18015c010(local_f8);
      cVar6 = '\0';
      if (local_160[0] != '\0') {
        local_168 = local_a8;
        puVar9 = (undefined1 *)FUN_1800f4a50(local_a8);
        uVar12 = param_1[3];
        local_170 = -1;
        do {
          local_170 = local_170 + 1;
        } while (pcVar15[local_170] != '\0');
        local_1d8 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 0x18)) {
          local_1d8 = *(char **)param_3;
        }
        local_58._0_12_ = ZEXT812(0);
        local_1d0 = *(longlong ***)(param_3 + 0x10);
        local_178 = pcVar15;
        uVar7 = FUN_1800aa290(&local_1d8,&local_178);
        FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c,uVar7);
        local_1c8 = (undefined1  [16])0x0;
        local_1b8 = 0;
        local_1b0[0] = 0;
        lVar19 = -1;
        do {
          lVar20 = lVar19 + 1;
          lVar19 = lVar19 + 1;
        } while (local_58[lVar20] != '\0');
        FUN_18015ba30(local_1c8,local_58);
        puVar10 = (undefined1 *)FUN_1800f43d0(uVar12,local_1c8);
        uVar17 = *puVar10;
        *puVar10 = *puVar9;
        *puVar9 = uVar17;
        uVar12 = *(undefined8 *)(puVar10 + 8);
        puVar1 = (undefined8 *)(puVar9 + 8);
        *(undefined8 *)(puVar10 + 8) = *puVar1;
        *puVar1 = uVar12;
        FUN_1801409d0(puVar1,*puVar9);
        cVar6 = local_160[0];
      }
      FUN_1801409d0(local_160 + 8,cVar6);
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_100);
  }
  lVar19 = param_1[2];
  ppuVar2 = &PTR_s_pistol_1806ff2f8 + local_198._0_8_;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1 *)0x0;
  local_180 = 0;
  lVar20 = -1;
  do {
    lVar20 = lVar20 + 1;
  } while ((*ppuVar2)[lVar20] != '\0');
  FUN_18015ba30(local_198);
  local_160 = (undefined1  [16])0x0;
  local_150 = 0;
  local_148 = 0;
  lVar20 = -1;
  do {
    lVar20 = lVar20 + 1;
  } while (*(char *)(*(longlong *)*param_1 + lVar20) != '\0');
  FUN_18015ba30(local_160);
  local_1d8 = local_198;
  if (0xf < local_180) {
    local_1d8 = (char *)local_198._0_8_;
  }
  local_178 = local_160;
  if (0xf < local_148) {
    local_178 = (char *)local_160._0_8_;
  }
  local_58._0_12_ = ZEXT812(0);
  local_1d0 = (longlong **)local_188;
  local_170 = local_150;
  uVar7 = FUN_1800aa290(&local_178,&local_1d8);
  FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c,uVar7);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  lVar20 = -1;
  do {
    lVar18 = lVar20 + 1;
    lVar20 = lVar20 + 1;
  } while (local_58[lVar18] != '\0');
  FUN_18015ba30(local_a8,local_58);
  uVar12 = *(undefined8 *)(lVar19 + 8);
  cVar6 = FUN_1800f40c0(uVar12,local_a8);
  if (cVar6 == '\0') {
    uVar12 = *(undefined8 *)(lVar19 + 0x10);
    cVar6 = FUN_1800f40c0(uVar12,local_a8);
    if (cVar6 == '\0') {
      local_b8 = '\0';
      FUN_180111d10(&plStack_b0,0);
    }
    else {
      uVar12 = FUN_180113610(uVar12,local_a8);
      FUN_1800f4a50(&local_b8,uVar12);
    }
  }
  else {
    uVar11 = FUN_18015b360(local_f8);
    uVar12 = FUN_1800f43d0(uVar12,uVar11);
    FUN_1800f4a50(&local_b8,uVar12);
  }
  FUN_18015c010(local_a8);
  FUN_18015c010(local_160);
  FUN_18015c010(local_198);
  uVar12 = param_1[2];
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  lVar19 = -1;
  do {
    lVar19 = lVar19 + 1;
  } while (*(char *)(*(longlong *)param_1[5] + lVar19) != '\0');
  FUN_18015ba30(local_d8);
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  lVar19 = -1;
  do {
    lVar19 = lVar19 + 1;
  } while (*(char *)(*(longlong *)*param_1 + lVar19) != '\0');
  FUN_18015ba30(local_f8);
  FUN_1800eb4a0(uVar12,local_88,local_f8,local_d8);
  FUN_18015c010(local_f8);
  FUN_18015c010(local_d8);
  if (local_b8 != '\x01') {
    FUN_1800e60e0(local_130,&DAT_1806bbee0);
    uStack_117 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    FUN_1801409d0(&uStack_110,0);
    uStack_118 = 4;
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_198._1_15_;
    local_198 = auVar4 << 8;
    uStack_110 = local_198._0_8_;
    local_108 = 0;
    local_1d8 = local_130;
    local_1d0 = &local_100;
    FUN_1800f4e90(local_1c8,&local_1d8,1,2);
    local_1b8 = 0;
    FUN_1800e60e0(local_160,&DAT_1806bbee4);
    local_148 = local_148 & 0xffffffffffffff00;
    FUN_180111d10(local_140,0);
    local_138 = 0;
    local_1d8 = local_160;
    local_1d0 = (longlong **)local_130;
    FUN_1800f4e90(local_1b0,&local_1d8,1,2);
    local_1a0 = 0;
    local_1d8 = local_1c8;
    local_1d0 = (longlong **)local_198;
    pcVar13 = (char *)FUN_1800f4e90(local_a8,&local_1d8,1,2);
    cVar6 = *pcVar13;
    *pcVar13 = local_b8;
    pcVar15 = pcVar13 + 8;
    plVar16 = *(longlong **)pcVar15;
    *(longlong **)pcVar15 = plStack_b0;
    local_b8 = cVar6;
    plStack_b0 = plVar16;
    FUN_1801409d0(pcVar15,*pcVar13);
    _eh_vector_destructor_iterator_(local_1c8,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_160,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_130,0x18,2,FUN_1800aab30);
  }
  local_1e8[0] = local_58;
  cVar6 = FUN_1800eb640();
  if ((cVar6 == '\0') || (cVar6 = FUN_1800eb640(extraout_XMM0_Qa,local_88), cVar6 == '\0')) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
  }
  local_58 = ZEXT816(0);
  FUN_1801409d0(local_58 + 8,0);
  local_58[0] = 4;
  local_198[0] = uVar17;
  local_58._8_8_ = local_198._0_8_;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = 0;
  local_1b0[0] = 0;
  FUN_18015ba30(local_1c8,&DAT_1806bbee0,1);
  puVar9 = (undefined1 *)FUN_1800f43d0(&local_b8,local_1c8);
  auVar4 = local_58;
  uVar17 = *puVar9;
  *puVar9 = local_58[0];
  local_58[0] = uVar17;
  auVar5 = local_58;
  uVar12 = *(undefined8 *)(puVar9 + 8);
  local_58._8_8_ = auVar4._8_8_;
  *(undefined8 *)(puVar9 + 8) = local_58._8_8_;
  local_58._0_8_ = auVar5._0_8_;
  local_58._8_8_ = uVar12;
  FUN_1801409d0(local_58 + 8,uVar17);
  plVar16 = plStack_b0;
  if ((local_b8 == '\x01') &&
     (plVar14 = (longlong *)FUN_1800f6de0(plStack_b0,local_1e8,&DAT_1806bbee4), *plVar14 != *plVar16
     )) {
    local_1c8 = (undefined1  [16])0x0;
    local_1b8 = 0;
    local_1b0[0] = 0;
    FUN_18015ba30(local_1c8,&DAT_1806bbee4,1);
    pcVar15 = (char *)FUN_1800f43d0(&local_b8,local_1c8);
    if (*pcVar15 != '\0') goto LAB_1800ef324;
  }
  if ((local_88[0] == '\x01') &&
     (plVar16 = (longlong *)FUN_1800f6de0(local_80,local_1e8,&DAT_1806bbee4), *plVar16 != *local_80)
     ) {
    local_1e8[0] = local_a8;
    local_130 = (undefined1  [16])0x0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_117 = 0;
    FUN_18015ba30(local_130,&DAT_1806bbee4,1);
    uVar12 = FUN_180113610(local_88,local_130);
    FUN_18015c010(local_130);
    puVar9 = (undefined1 *)FUN_1800f4a50(local_a8,uVar12);
    local_1c8 = (undefined1  [16])0x0;
    local_1b8 = 0;
    local_1b0[0] = 0;
    FUN_18015ba30(local_1c8,&DAT_1806bbee4,1);
    puVar10 = (undefined1 *)FUN_1800f43d0(&local_b8,local_1c8);
    uVar17 = *puVar10;
    *puVar10 = *puVar9;
    *puVar9 = uVar17;
    puVar1 = (undefined8 *)(puVar9 + 8);
    uVar12 = *(undefined8 *)(puVar10 + 8);
    *(undefined8 *)(puVar10 + 8) = *puVar1;
    *puVar1 = uVar12;
    FUN_1801409d0(puVar1,*puVar9);
  }
LAB_1800ef324:
  local_1e8[0] = local_198;
  local_198._1_7_ = uStack_b7;
  local_198[0] = local_b8;
  local_198._8_8_ = plStack_b0;
  local_b8 = '\0';
  plStack_b0 = (longlong *)0x0;
  uVar12 = param_1[3];
  local_178 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    local_178 = *(char **)param_3;
  }
  local_58._0_12_ = ZEXT812(0);
  local_1d8 = "enabled";
  local_1d0 = (longlong **)0x7;
  local_170 = *(longlong *)(param_3 + 0x10);
  uVar7 = FUN_1800aa290(&local_178,&local_1d8);
  FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c,uVar7);
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = 0;
  local_1b0[0] = 0;
  lVar19 = -1;
  do {
    lVar18 = lVar19 + 1;
    lVar20 = lVar19 + 1;
    lVar19 = lVar18;
  } while (local_58[lVar20] != '\0');
  FUN_18015ba30(local_1c8,local_58,lVar18);
  pcVar15 = (char *)FUN_1800f43d0(uVar12,local_1c8);
  auVar4 = local_198;
  cVar6 = *pcVar15;
  *pcVar15 = local_198[0];
  local_198[0] = cVar6;
  auVar5 = local_198;
  uVar12 = *(undefined8 *)(pcVar15 + 8);
  local_198._8_8_ = auVar4._8_8_;
  *(undefined8 *)(pcVar15 + 8) = local_198._8_8_;
  local_198._0_8_ = auVar5._0_8_;
  local_198._8_8_ = uVar12;
  FUN_1801409d0(local_198 + 8,cVar6);
  FUN_1801409d0(&local_80,local_88[0]);
  FUN_1801409d0(&plStack_b0,local_b8);
  FUN_18015c010(local_78);
}



