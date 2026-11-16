// FUN_18054d330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054d330 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18054d330(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
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
  int *piVar17;
  int iVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auStack_268 [32];
  char *local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined *local_230;
  undefined1 local_220;
  uint local_218;
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
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  uVar13 = 0;
  local_218 = 0;
  iVar18 = 0;
  if (0 < *(int *)*param_1) {
    auVar23 = ZEXT464(0x80000000);
    auVar25 = ZEXT464(0x3f000000);
    auVar27 = ZEXT464(0x3f800000);
    auVar22 = ZEXT464(0x43af0000);
    auVar29 = ZEXT464(0x3f800000);
    do {
      FUN_1804c2920(iVar18);
      lVar2 = param_1[1];
      iVar1 = *(int *)param_1[2];
      if (iVar18 == 0) {
        local_210 = 0x5a0;
        if (iVar1 == 0) {
          local_210 = 0x530;
        }
        local_210 = local_210 + lVar2;
        if (iVar1 == 0) {
          piVar17 = (int *)(lVar2 + 0x52c);
        }
        else {
          piVar17 = (int *)(lVar2 + 0x598);
        }
      }
      else {
        lVar15 = (longlong)(iVar18 + -1) * 0x70;
        local_210 = lVar15;
        if (iVar1 != 0) {
          local_210 = ((longlong)(iVar18 + -1) + 3) * 0x70;
        }
        local_210 = local_210 + lVar2;
        lVar16 = 0x1b8;
        if (iVar1 == 0) {
          lVar16 = 0x68;
        }
        piVar17 = (int *)(lVar16 + lVar2 + lVar15);
      }
      lVar2 = local_210;
      if ((*(char *)param_1[3] == '\0') && (*piVar17 == *(int *)param_1[4])) {
        local_208 = (undefined1  [16])0x0;
        auStack_1f8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_208,&DAT_180867178,2);
        auVar28 = auVar29._0_16_;
        auVar26 = auVar27._0_16_;
        auVar24 = auVar25._0_16_;
        auVar21 = auVar23._0_16_;
        auVar19 = auVar22._0_16_;
        uVar13 = uVar13 | 1;
        plVar6 = (longlong *)local_208;
      }
      else {
        puVar12 = (undefined2 *)&DAT_1807d150c;
        if (*(char *)param_1[3] != '\0') {
          puVar12 = &DAT_18081f144;
        }
        uVar7 = FUN_18015bea0(local_128,*piVar17);
        local_218 = uVar13 | 2;
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (*(char *)((longlong)puVar12 + lVar15) != '\0');
        plVar6 = (longlong *)FUN_18015b2a0(uVar7,puVar12);
        auVar28 = auVar29._0_16_;
        auVar26 = auVar27._0_16_;
        auVar24 = auVar25._0_16_;
        auVar21 = auVar23._0_16_;
        auVar19 = auVar22._0_16_;
        local_168 = *plVar6;
        lStack_160 = plVar6[1];
        lStack_158 = plVar6[2];
        lStack_150 = plVar6[3];
        *(undefined1 *)plVar6 = 0;
        plVar6[2] = 0;
        plVar6[3] = 0xf;
        uVar13 = uVar13 | 0x406;
        plVar6 = &local_168;
      }
      local_c0 = (undefined8 ****)*plVar6;
      lStack_b8 = plVar6[1];
      lStack_b0 = plVar6[2];
      uStack_a8 = plVar6[3];
      *(undefined1 *)plVar6 = 0;
      plVar6[2] = 0;
      plVar6[3] = 0xf;
      local_218 = uVar13;
      if ((uVar13 & 4) != 0) {
        uVar13 = uVar13 & 0xfffffffb;
        auVar22 = ZEXT1664(auVar19);
        auVar23 = ZEXT1664(auVar21);
        auVar25 = ZEXT1664(auVar24);
        auVar27 = ZEXT1664(auVar26);
        auVar29 = ZEXT1664(auVar28);
        local_218 = uVar13;
        FUN_18015c010(&local_168);
        auVar28 = auVar29._0_16_;
        auVar26 = auVar27._0_16_;
        auVar24 = auVar25._0_16_;
        auVar21 = auVar23._0_16_;
        auVar19 = auVar22._0_16_;
      }
      if ((uVar13 & 2) != 0) {
        uVar13 = uVar13 & 0xfffffffd;
        auVar22 = ZEXT1664(auVar19);
        auVar23 = ZEXT1664(auVar21);
        auVar25 = ZEXT1664(auVar24);
        auVar27 = ZEXT1664(auVar26);
        auVar29 = ZEXT1664(auVar28);
        local_218 = uVar13;
        FUN_18015c010(local_128);
        auVar28 = auVar29._0_16_;
        auVar26 = auVar27._0_16_;
        auVar24 = auVar25._0_16_;
        auVar21 = auVar23._0_16_;
        auVar19 = auVar22._0_16_;
      }
      if ((uVar13 & 1) != 0) {
        uVar13 = uVar13 & 0xfffffffe;
        auVar22 = ZEXT1664(auVar19);
        auVar23 = ZEXT1664(auVar21);
        auVar25 = ZEXT1664(auVar24);
        auVar27 = ZEXT1664(auVar26);
        auVar29 = ZEXT1664(auVar28);
        local_218 = uVar13;
        FUN_18015c010(local_208);
        auVar28 = auVar29._0_16_;
        auVar26 = auVar27._0_16_;
        auVar24 = auVar25._0_16_;
        auVar21 = auVar23._0_16_;
        auVar19 = auVar22._0_16_;
      }
      if (*(int *)(lVar2 + 8) == 0) {
        local_188 = (undefined1  [16])0x0;
        local_178 = (undefined1  [16])0x0;
        auVar22 = ZEXT1664(auVar19);
        auVar23 = ZEXT1664(auVar21);
        auVar25 = ZEXT1664(auVar24);
        auVar27 = ZEXT1664(auVar26);
        auVar29 = ZEXT1664(auVar28);
        FUN_18015ba30(local_188,"Add Shortcut",0xc);
        uVar14 = uVar13 | 0x10;
      }
      else {
        auVar22 = ZEXT1664(auVar19);
        auVar23 = ZEXT1664(auVar21);
        auVar25 = ZEXT1664(auVar24);
        auVar27 = ZEXT1664(auVar26);
        auVar29 = ZEXT1664(auVar28);
        FUN_18050da90(local_e8);
        uVar14 = uVar13 | 8;
      }
      local_218 = uVar14;
      uVar7 = FUN_18015bea0(local_108,iVar18 + 1);
      pauVar8 = (undefined1 (*) [16])FUN_180141490(uVar7,0,"Preset ",7);
      local_1a8 = *pauVar8;
      auStack_198 = pauVar8[1];
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      (*pauVar8)[0] = 0;
      *(undefined8 *)pauVar8[1] = 0;
      local_218 = uVar14 | 0x20;
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar29 = ZEXT1664(auVar29._0_16_);
      pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_1a8,"  /  ",5);
      local_1c8 = *pauVar8;
      auStack_1b8 = pauVar8[1];
      (*pauVar8)[0] = 0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      local_218 = uVar14 | 0x60;
      ppppuVar10 = &local_c0;
      if (0xf < uStack_a8) {
        ppppuVar10 = local_c0;
      }
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar29 = ZEXT1664(auVar29._0_16_);
      pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_1c8,ppppuVar10,lStack_b0);
      local_1e8 = *pauVar8;
      auStack_1d8 = pauVar8[1];
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      (*pauVar8)[0] = 0;
      *(undefined8 *)pauVar8[1] = 0;
      local_218 = uVar14 | 0xe0;
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar29 = ZEXT1664(auVar29._0_16_);
      puVar9 = (undefined8 *)FUN_18015b2a0(local_1e8,"  /  ",5);
      local_148 = *puVar9;
      uStack_140 = puVar9[1];
      uStack_138 = puVar9[2];
      uStack_130 = puVar9[3];
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      local_218 = uVar14 | 0x1e0;
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar29 = ZEXT1664(auVar29._0_16_);
      FUN_18015a6e0(local_a0);
      uVar13 = uVar14 | 0x3e0;
      local_218 = uVar13;
      FUN_18015c010(&local_148);
      FUN_18015c010(local_1e8);
      FUN_18015c010(local_1c8);
      FUN_18015c010(local_1a8);
      FUN_18015c010(local_108);
      if ((uVar14 & 0x10) != 0) {
        uVar13 = uVar14 & 0xffffffef | 0x3e0;
        local_218 = uVar13;
        FUN_18015c010(local_188);
      }
      if ((uVar13 & 8) != 0) {
        uVar13 = uVar13 & 0xfffffff7;
        local_218 = uVar13;
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
      cVar5 = FUN_180488630("##override",pcVar11,auVar22._0_8_);
      if (cVar5 != '\0') {
        piVar3 = (int *)param_1[5];
        piVar4 = (int *)param_1[4];
        pcVar11 = (char *)param_1[3];
        FUN_180488c60();
        local_c8[0] = (float)*piVar17;
        cVar5 = *pcVar11;
        if (cVar5 == '\0') {
          local_248 = "%.0f HP";
          if (*piVar17 == *piVar4) {
            local_248 = "FL";
          }
        }
        else {
          local_248 = "%.0f%%";
        }
        local_230 = &DAT_18082a25c;
        if (cVar5 != '\0') {
          local_230 = &DAT_18085d5ac;
        }
        auVar21._0_4_ = (float)*piVar4;
        auVar21._4_12_ = SUB1612(ZEXT816(0),4);
        auVar19._0_4_ = (float)*piVar3;
        auVar19._4_12_ = SUB1612(ZEXT816(0),4);
        pcVar11 = "Minimum Damage";
        if (cVar5 != '\0') {
          pcVar11 = "Hit Chance";
        }
        local_220 = 0;
        local_238 = 1;
        local_240 = auVar29._0_4_;
        cVar5 = FUN_18048a250(pcVar11,local_c8,auVar19._0_8_,auVar21._0_8_);
        if (cVar5 != '\0') {
          fVar20 = (float)(~auVar23._0_4_ & (uint)local_c8[0]);
          auVar21 = vroundps_avx(ZEXT416((uint)fVar20),0);
          auVar19 = vcmpss_avx(ZEXT416((uint)(fVar20 - auVar21._0_4_)),auVar25._0_16_,0);
          *piVar17 = (int)(float)((uint)((float)(auVar19._0_4_ & auVar27._0_4_) + auVar21._0_4_) |
                                 auVar23._0_4_ & (uint)local_c8[0]);
          FUN_18050cd00();
        }
        FUN_180488f10();
        FUN_180488c60();
        FUN_18050e290(local_210);
        FUN_180488f10();
        cVar5 = FUN_18048b0e0("Delete Preset",&DAT_180829a48,1);
        if (cVar5 != '\0') {
          *(int *)param_1[6] = iVar18;
          FUN_1804c7bf0();
        }
        FUN_1804aeac0();
      }
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      FUN_18015c010(local_a0);
      FUN_18015c010(&local_c0);
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)*param_1);
  }
}



