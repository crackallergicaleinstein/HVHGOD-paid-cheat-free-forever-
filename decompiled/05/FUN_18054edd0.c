// FUN_18054edd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054edd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18054edd0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  char *pcVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auStack_278 [32];
  char *local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined *local_240;
  undefined1 local_230;
  uint local_228;
  longlong local_220;
  int *local_218;
  longlong local_210;
  undefined1 local_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  longlong local_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  float local_c8 [2];
  undefined8 ****local_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  undefined8 ****local_a0 [3];
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  uVar13 = 0;
  local_228 = 0;
  iVar17 = 0;
  if (0 < *(int *)*param_1) {
    local_220 = 0;
    auVar22 = ZEXT464(0x80000000);
    auVar24 = ZEXT464(0x3f000000);
    auVar26 = ZEXT464(0x3f800000);
    auVar21 = ZEXT464(0x43af0000);
    auVar28 = ZEXT464(0x3f800000);
    do {
      lVar1 = local_220;
      FUN_1804c2920(iVar17);
      lVar3 = param_1[1];
      lVar1 = lVar1 + (longlong)*(int *)param_1[2] * 4;
      local_210 = ((longlong)*(int *)param_1[2] * 4 + 9 + (longlong)iVar17) * 0x70 + lVar3;
      lVar16 = lVar1 * 0x70;
      if ((*(char *)param_1[3] == '\0') && (*(int *)(lVar16 + 0x458 + lVar3) == *(int *)param_1[4]))
      {
        local_208 = (undefined1  [16])0x0;
        auStack_1f8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_208,&DAT_180867178,2);
        auVar27 = auVar28._0_16_;
        auVar25 = auVar26._0_16_;
        auVar23 = auVar24._0_16_;
        auVar20 = auVar22._0_16_;
        auVar18 = auVar21._0_16_;
        plVar6 = (longlong *)local_208;
        uVar13 = uVar13 | 1;
      }
      else {
        puVar12 = (undefined2 *)&DAT_1807d150c;
        if (*(char *)param_1[3] != '\0') {
          puVar12 = &DAT_18081f144;
        }
        uVar7 = FUN_18015bea0(local_128,*(undefined4 *)(lVar16 + 0x458 + lVar3));
        local_228 = uVar13 | 2;
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (*(char *)((longlong)puVar12 + lVar15) != '\0');
        plVar6 = (longlong *)FUN_18015b2a0(uVar7,puVar12);
        auVar27 = auVar28._0_16_;
        auVar25 = auVar26._0_16_;
        auVar23 = auVar24._0_16_;
        auVar20 = auVar22._0_16_;
        auVar18 = auVar21._0_16_;
        local_168 = *plVar6;
        lStack_160 = plVar6[1];
        lStack_158 = plVar6[2];
        lStack_150 = plVar6[3];
        *(undefined1 *)plVar6 = 0;
        plVar6[2] = 0;
        plVar6[3] = 0xf;
        plVar6 = &local_168;
        uVar13 = uVar13 | 0x406;
      }
      local_c0 = (undefined8 ****)*plVar6;
      lStack_b8 = plVar6[1];
      lStack_b0 = plVar6[2];
      uStack_a8 = plVar6[3];
      *(undefined1 *)plVar6 = 0;
      plVar6[2] = 0;
      plVar6[3] = 0xf;
      local_228 = uVar13;
      if ((uVar13 & 4) != 0) {
        uVar13 = uVar13 & 0xfffffffb;
        auVar21 = ZEXT1664(auVar18);
        auVar22 = ZEXT1664(auVar20);
        auVar24 = ZEXT1664(auVar23);
        auVar26 = ZEXT1664(auVar25);
        auVar28 = ZEXT1664(auVar27);
        local_228 = uVar13;
        FUN_18015c010(&local_168);
        auVar27 = auVar28._0_16_;
        auVar25 = auVar26._0_16_;
        auVar23 = auVar24._0_16_;
        auVar20 = auVar22._0_16_;
        auVar18 = auVar21._0_16_;
      }
      if ((uVar13 & 2) != 0) {
        uVar13 = uVar13 & 0xfffffffd;
        auVar21 = ZEXT1664(auVar18);
        auVar22 = ZEXT1664(auVar20);
        auVar24 = ZEXT1664(auVar23);
        auVar26 = ZEXT1664(auVar25);
        auVar28 = ZEXT1664(auVar27);
        local_228 = uVar13;
        FUN_18015c010(local_128);
        auVar27 = auVar28._0_16_;
        auVar25 = auVar26._0_16_;
        auVar23 = auVar24._0_16_;
        auVar20 = auVar22._0_16_;
        auVar18 = auVar21._0_16_;
      }
      if ((uVar13 & 1) != 0) {
        uVar13 = uVar13 & 0xfffffffe;
        auVar21 = ZEXT1664(auVar18);
        auVar22 = ZEXT1664(auVar20);
        auVar24 = ZEXT1664(auVar23);
        auVar26 = ZEXT1664(auVar25);
        auVar28 = ZEXT1664(auVar27);
        local_228 = uVar13;
        FUN_18015c010(local_208);
        auVar27 = auVar28._0_16_;
        auVar25 = auVar26._0_16_;
        auVar23 = auVar24._0_16_;
        auVar20 = auVar22._0_16_;
        auVar18 = auVar21._0_16_;
      }
      if (*(int *)((lVar1 + 9) * 0x70 + 8 + lVar3) == 0) {
        local_188 = (undefined1  [16])0x0;
        local_178 = (undefined1  [16])0x0;
        auVar21 = ZEXT1664(auVar18);
        auVar22 = ZEXT1664(auVar20);
        auVar24 = ZEXT1664(auVar23);
        auVar26 = ZEXT1664(auVar25);
        auVar28 = ZEXT1664(auVar27);
        FUN_18015ba30(local_188,"Add Shortcut",0xc);
        uVar14 = uVar13 | 0x10;
      }
      else {
        auVar21 = ZEXT1664(auVar18);
        auVar22 = ZEXT1664(auVar20);
        auVar24 = ZEXT1664(auVar23);
        auVar26 = ZEXT1664(auVar25);
        auVar28 = ZEXT1664(auVar27);
        FUN_18050da90(local_e8);
        uVar14 = uVar13 | 8;
      }
      local_228 = uVar14;
      uVar7 = FUN_18015bea0(local_108,iVar17 + 1);
      pauVar8 = (undefined1 (*) [16])FUN_180141490(uVar7,0,"Preset ",7);
      local_1a8 = *pauVar8;
      auStack_198 = pauVar8[1];
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      (*pauVar8)[0] = 0;
      *(undefined8 *)pauVar8[1] = 0;
      local_228 = uVar14 | 0x20;
      auVar21 = ZEXT1664(auVar21._0_16_);
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_1a8,"  /  ",5);
      local_1c8 = *pauVar8;
      auStack_1b8 = pauVar8[1];
      (*pauVar8)[0] = 0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      local_228 = uVar14 | 0x60;
      ppppuVar10 = &local_c0;
      if (0xf < uStack_a8) {
        ppppuVar10 = local_c0;
      }
      auVar21 = ZEXT1664(auVar21._0_16_);
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_1c8,ppppuVar10,lStack_b0);
      local_1e8 = *pauVar8;
      auStack_1d8 = pauVar8[1];
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      (*pauVar8)[0] = 0;
      *(undefined8 *)pauVar8[1] = 0;
      local_228 = uVar14 | 0xe0;
      auVar21 = ZEXT1664(auVar21._0_16_);
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      puVar9 = (undefined8 *)FUN_18015b2a0(local_1e8,"  /  ",5);
      local_148 = *puVar9;
      uStack_140 = puVar9[1];
      uStack_138 = puVar9[2];
      uStack_130 = puVar9[3];
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      local_228 = uVar14 | 0x1e0;
      auVar21 = ZEXT1664(auVar21._0_16_);
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      FUN_18015a6e0(local_a0);
      uVar13 = uVar14 | 0x3e0;
      local_228 = uVar13;
      FUN_18015c010(&local_148);
      FUN_18015c010(local_1e8);
      FUN_18015c010(local_1c8);
      FUN_18015c010(local_1a8);
      FUN_18015c010(local_108);
      if ((uVar14 & 0x10) != 0) {
        uVar13 = uVar14 & 0xffffffef | 0x3e0;
        local_228 = uVar13;
        FUN_18015c010(local_188);
      }
      if ((uVar13 & 8) != 0) {
        uVar13 = uVar13 & 0xfffffff7;
        local_228 = uVar13;
        FUN_18015c010(local_e8);
      }
      ppppuVar10 = local_a0;
      if (0xf < local_88) {
        ppppuVar10 = local_a0[0];
      }
      cVar5 = FUN_18048b0e0(ppppuVar10,&DAT_180829dc4,1);
      if (cVar5 != '\0') {
        FUN_180516c40("##override");
      }
      pcVar11 = "Damage Preset";
      if (*(char *)param_1[3] != '\0') {
        pcVar11 = "Hit Chance Preset";
      }
      cVar5 = FUN_180488630("##override",pcVar11,auVar21._0_8_);
      if (cVar5 != '\0') {
        local_218 = (int *)param_1[5];
        piVar4 = (int *)param_1[4];
        pcVar11 = (char *)param_1[3];
        FUN_180488c60();
        local_c8[0] = (float)*(int *)(lVar16 + 0x458 + lVar3);
        cVar5 = *pcVar11;
        if (cVar5 == '\0') {
          local_258 = "%.0f HP";
          if (*(int *)(lVar16 + 0x458 + lVar3) == *piVar4) {
            local_258 = "FL";
          }
        }
        else {
          local_258 = "%.0f%%";
        }
        local_240 = &DAT_18082a25c;
        if (cVar5 != '\0') {
          local_240 = &DAT_18085d5ac;
        }
        auVar20._0_4_ = (float)*piVar4;
        auVar20._4_12_ = SUB1612(ZEXT816(0),4);
        auVar18._0_4_ = (float)*local_218;
        auVar18._4_12_ = SUB1612(ZEXT816(0),4);
        pcVar11 = "Minimum Damage";
        if (cVar5 != '\0') {
          pcVar11 = "Hit Chance";
        }
        local_230 = 0;
        local_248 = 1;
        local_250 = auVar28._0_4_;
        cVar5 = FUN_18048a250(pcVar11,local_c8,auVar18._0_8_,auVar20._0_8_);
        if (cVar5 != '\0') {
          fVar19 = (float)(~auVar22._0_4_ & (uint)local_c8[0]);
          auVar20 = vroundps_avx(ZEXT416((uint)fVar19),0);
          auVar18 = vcmpss_avx(ZEXT416((uint)(fVar19 - auVar20._0_4_)),auVar24._0_16_,0);
          *(int *)(lVar16 + 0x458 + lVar3) =
               (int)(float)((uint)((float)(auVar18._0_4_ & auVar26._0_4_) + auVar20._0_4_) |
                           auVar22._0_4_ & (uint)local_c8[0]);
          FUN_18050cd00();
        }
        FUN_180488f10();
        FUN_180488c60();
        FUN_18050e290(local_210);
        FUN_180488f10();
        cVar5 = FUN_18048b0e0("Delete Preset",&DAT_180829a48,1);
        if (cVar5 != '\0') {
          *(int *)param_1[6] = iVar17;
          FUN_1804c7bf0();
        }
        FUN_1804aeac0();
      }
      iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar2 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
      }
      FUN_18015c010(local_a0);
      FUN_18015c010(&local_c0);
      iVar17 = iVar17 + 1;
      local_220 = local_220 + 1;
    } while (iVar17 < *(int *)*param_1);
  }
}



