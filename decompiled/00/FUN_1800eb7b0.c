// FUN_1800eb7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800eb7b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800eb7b0(undefined8 *param_1,ulonglong param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  char cVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 (*pauVar12) [16];
  char *pcVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined **ppuVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined2 *puVar21;
  byte bVar22;
  longlong *in_stack_00000030;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [16];
  char *local_2b8;
  longlong lStack_2b0;
  undefined **local_2a8;
  longlong *local_2a0;
  char *local_298;
  longlong lStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined8 local_228;
  char **local_220;
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined1 auStack_200 [16];
  undefined1 local_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined *local_1c8;
  longlong local_1c0;
  char *local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 auStack_138 [16];
  undefined1 local_128 [16];
  undefined1 auStack_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 local_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char *local_68;
  char *local_60;
  char local_58 [16];
  char local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  local_60 = "item esp";
  local_68 = "esp items";
  puVar17 = *(undefined4 **)*param_1;
  puVar2 = (undefined4 *)((undefined8 *)*param_1)[1];
  if (puVar17 != puVar2) {
    do {
      if ((param_2 <= *(ulonglong *)(puVar17 + 2)) &&
         (*(ulonglong *)(puVar17 + 2) < param_2 + 0x7850)) {
        local_58[0] = '\0';
        local_58[1] = '\0';
        local_58[2] = '\0';
        local_58[3] = '\0';
        local_58[4] = '\0';
        local_58[5] = '\0';
        local_58[6] = '\0';
        local_58[7] = '\0';
        local_58[8] = '\0';
        local_58[9] = '\0';
        local_58[10] = '\0';
        local_58[0xb] = '\0';
        FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c,*puVar17);
        if ((*(char *)param_1[1] == '\x01') &&
           (plVar20 = *(longlong **)((char *)param_1[1] + 8),
           plVar11 = (longlong *)FUN_1800f6de0(plVar20,&local_2a8,local_58), *plVar11 != *plVar20))
        {
        }
      }
      puVar17 = puVar17 + 0x1c;
    } while (puVar17 != puVar2);
  }
  bVar22 = 0;
  local_2a8 = &PTR_s_pistol_1806ff2f8;
  plVar20 = in_stack_00000030 + 0x11;
  local_2a0 = plVar20;
  do {
    ppuVar16 = local_2a8;
    puVar3 = *local_2a8;
    uVar4 = param_1[1];
    local_1c0 = -1;
    do {
      local_1c0 = local_1c0 + 1;
    } while (puVar3[local_1c0] != '\0');
    local_1b0 = -1;
    do {
      local_1b0 = local_1b0 + 1;
    } while (local_68[local_1b0] != '\0');
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_1c8 = puVar3;
    local_1b8 = local_68;
    FUN_1800aa290(&local_1b8,&local_1c8);
    FUN_18015abc0(local_48,0xc,&DAT_1806bbf8c);
    local_288 = (undefined1  [16])0x0;
    local_278 = (undefined1  [16])0x0;
    lVar18 = -1;
    do {
      lVar5 = lVar18 + 1;
      lVar18 = lVar18 + 1;
    } while (local_48[lVar5] != '\0');
    FUN_18015ba30(local_288,local_48);
    bVar8 = FUN_1800f40c0(uVar4);
    bVar22 = bVar22 | bVar8;
    FUN_18015c010(local_288);
    plVar11 = local_2a0;
    plVar15 = in_stack_00000030;
    if (in_stack_00000030 != plVar20) {
      do {
        local_298 = (char *)*plVar15;
        uVar4 = param_1[1];
        lStack_290 = -1;
        do {
          lStack_290 = lStack_290 + 1;
        } while (local_298[lStack_290] != '\0');
        local_268 = (undefined1  [16])0x0;
        local_258 = (undefined1  [16])0x0;
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (local_68[lVar18] != '\0');
        FUN_18015ba30(local_268);
        pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_268,&DAT_1806bfbdc,3);
        local_1a8 = *pauVar12;
        auStack_198 = pauVar12[1];
        *(undefined8 *)(pauVar12[1] + 8) = 0xf;
        (*pauVar12)[0] = 0;
        *(undefined8 *)pauVar12[1] = 0;
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (puVar3[lVar18] != '\0');
        pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_1a8,puVar3);
        local_210 = *pauVar12;
        auStack_200 = pauVar12[1];
        (*pauVar12)[0] = 0;
        *(undefined8 *)pauVar12[1] = 0;
        *(undefined8 *)(pauVar12[1] + 8) = 0xf;
        local_2b8 = local_210;
        if (0xf < (ulonglong)auStack_200._8_8_) {
          local_2b8 = (char *)local_210._0_8_;
        }
        local_58[0] = '\0';
        local_58[1] = '\0';
        local_58[2] = '\0';
        local_58[3] = '\0';
        local_58[4] = '\0';
        local_58[5] = '\0';
        local_58[6] = '\0';
        local_58[7] = '\0';
        local_58[8] = '\0';
        local_58[9] = '\0';
        local_58[10] = '\0';
        local_58[0xb] = '\0';
        local_2c8._8_8_ = lStack_290;
        local_2c8._0_8_ = local_298;
        lStack_2b0 = auStack_200._0_8_;
        FUN_1800aa290(&local_2b8,local_2c8);
        FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c);
        local_248 = (undefined1  [16])0x0;
        local_238 = (undefined1  [16])0x0;
        lVar18 = -1;
        do {
          lVar5 = lVar18 + 1;
          lVar18 = lVar18 + 1;
        } while (local_58[lVar5] != '\0');
        FUN_18015ba30(local_248,local_58);
        bVar8 = FUN_1800f40c0(uVar4);
        bVar22 = bVar22 | bVar8;
        FUN_18015c010(local_248);
        FUN_18015c010(local_210);
        FUN_18015c010(local_1a8);
        FUN_18015c010(local_268);
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar11);
      ppuVar16 = local_2a8;
      plVar20 = local_2a0;
    }
    local_2a8 = ppuVar16 + 1;
  } while (local_2a8 != (undefined **)&DAT_1806ff328);
  uVar4 = param_1[1];
  lStack_2b0 = -1;
  do {
    lStack_2b0 = lStack_2b0 + 1;
  } while (local_60[lStack_2b0] != '\0');
  lStack_290 = -1;
  do {
    lStack_290 = lStack_290 + 1;
  } while (local_68[lStack_290] != '\0');
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_2b8 = local_60;
  local_298 = local_68;
  uVar10 = FUN_1800aa290(&local_298,&local_2b8);
  FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c,uVar10);
  local_268 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
  lVar18 = -1;
  do {
    lVar5 = lVar18 + 1;
    lVar18 = lVar18 + 1;
  } while (local_58[lVar5] != '\0');
  FUN_18015ba30(local_268,local_58);
  cVar9 = FUN_1800f40c0(uVar4,local_268);
  FUN_18015c010(local_268);
  if (cVar9 != '\0' || bVar22 != 0) {
    local_248._8_8_ = in_stack_00000030;
    local_248._0_8_ = &local_68;
    local_238._8_8_ = param_1[1];
    local_238._0_8_ = param_1[3];
    local_228 = param_1[2];
    local_220 = &local_60;
    local_218 = param_1[4];
    local_168 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    FUN_18015ba30(local_168,"esp items v2",0xc);
    pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_168," - all",6);
    local_188 = *pauVar12;
    auStack_178 = pauVar12[1];
    (*pauVar12)[0] = 0;
    *(undefined8 *)pauVar12[1] = 0;
    *(undefined8 *)(pauVar12[1] + 8) = 0xf;
    FUN_1800ec1e0(local_248,2,local_188);
    FUN_18015c010(local_188);
    FUN_18015c010(local_168);
    puVar21 = &DAT_1806ff950;
    ppuVar16 = &PTR_s_Pistols_1806ff970;
    do {
      puVar3 = *ppuVar16;
      local_108 = (undefined1  [16])0x0;
      local_f8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_108,"esp items v2",0xc);
      pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_108," - group - ",0xb);
      local_128 = *pauVar12;
      auStack_118 = pauVar12[1];
      *(undefined8 *)(pauVar12[1] + 8) = 0xf;
      (*pauVar12)[0] = 0;
      *(undefined8 *)pauVar12[1] = 0;
      lVar18 = -1;
      do {
        lVar18 = lVar18 + 1;
      } while (puVar3[lVar18] != '\0');
      pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_128,puVar3);
      local_148 = *pauVar12;
      auStack_138 = pauVar12[1];
      (*pauVar12)[0] = 0;
      *(undefined8 *)pauVar12[1] = 0;
      *(undefined8 *)(pauVar12[1] + 8) = 0xf;
      uVar10 = FUN_1800ba930(*puVar21);
      FUN_1800ec1e0(local_248,uVar10,local_148);
      FUN_18015c010(local_148);
      FUN_18015c010(local_128);
      FUN_18015c010(local_108);
      ppuVar16 = ppuVar16 + 1;
      puVar21 = puVar21 + 2;
    } while ((longlong)ppuVar16 < 0x1806ff9a8);
    puVar21 = &DAT_1806ff3e8;
    lVar18 = 0x2c;
    do {
      lVar5 = *(longlong *)(puVar21 + -8);
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      FUN_18015ba30(local_a8,"esp items v2",0xc);
      pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_a8," - weapon - ",0xc);
      local_c8 = *pauVar12;
      auStack_b8 = pauVar12[1];
      *(undefined8 *)(pauVar12[1] + 8) = 0xf;
      (*pauVar12)[0] = 0;
      *(undefined8 *)pauVar12[1] = 0;
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (*(char *)(lVar5 + lVar19) != '\0');
      pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_c8,lVar5);
      local_e8 = *pauVar12;
      auStack_d8 = pauVar12[1];
      (*pauVar12)[0] = 0;
      *(undefined8 *)pauVar12[1] = 0;
      *(undefined8 *)(pauVar12[1] + 8) = 0xf;
      uVar10 = FUN_1800ba930(*puVar21);
      FUN_1800ec1e0(local_248,uVar10,local_e8);
      FUN_18015c010(local_e8);
      FUN_18015c010(local_c8);
      FUN_18015c010(local_a8);
      puVar21 = puVar21 + 0x10;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    local_2a8 = (undefined **)local_2c8;
    local_2c8 = ZEXT816(0);
    FUN_1801409d0(local_2c8 + 8,0);
    local_2c8[0] = 5;
    local_2c8._8_8_ = 2;
    uVar4 = param_1[1];
    local_2b8 = "scope";
    lStack_2b0 = 5;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    FUN_18015ba30(local_88,"esp items v2",0xc);
    pauVar12 = (undefined1 (*) [16])FUN_18015b2a0(local_88," profiles",9);
    local_1f0 = *pauVar12;
    auStack_1e0 = pauVar12[1];
    (*pauVar12)[0] = 0;
    *(undefined8 *)pauVar12[1] = 0;
    *(undefined8 *)(pauVar12[1] + 8) = 0xf;
    pcVar13 = local_1f0;
    if (0xf < (ulonglong)auStack_1e0._8_8_) {
      pcVar13 = (char *)local_1f0._0_8_;
    }
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_298 = local_2b8;
    lStack_290 = lStack_2b0;
    lStack_2b0 = auStack_1e0._0_8_;
    local_2b8 = pcVar13;
    uVar10 = FUN_1800aa290(&local_2b8,&local_298);
    FUN_18015abc0(local_58,0xc,&DAT_1806bbf8c,uVar10);
    local_288 = (undefined1  [16])0x0;
    local_278 = ZEXT816(0);
    lVar18 = -1;
    do {
      lVar19 = lVar18 + 1;
      lVar5 = lVar18 + 1;
      lVar18 = lVar19;
    } while (local_58[lVar5] != '\0');
    FUN_18015ba30(local_288,local_58,lVar19);
    puVar14 = (undefined1 *)FUN_1800f43d0(uVar4,local_288);
    auVar6 = local_2c8;
    uVar1 = *puVar14;
    *puVar14 = local_2c8[0];
    local_2c8[0] = uVar1;
    auVar7 = local_2c8;
    uVar4 = *(undefined8 *)(puVar14 + 8);
    local_2c8._8_8_ = auVar6._8_8_;
    *(undefined8 *)(puVar14 + 8) = local_2c8._8_8_;
    local_2c8._0_8_ = auVar7._0_8_;
    local_2c8._8_8_ = uVar4;
    FUN_1801409d0(local_2c8 + 8,uVar1);
    FUN_18015c010(local_1f0);
    FUN_18015c010(local_88);
  }
}



