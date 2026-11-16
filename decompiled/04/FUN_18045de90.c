// FUN_18045de90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045de90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045de90(uint param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  char *pcVar22;
  uint *puVar23;
  int iVar24;
  char cVar25;
  uint uVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 extraout_XMM0_Qa;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar37 [64];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  char *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2b8;
  byte local_2a8;
  char local_2a7;
  undefined8 local_2a0;
  int local_298;
  undefined8 local_290;
  uint local_288;
  longlong local_280;
  undefined8 local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  uint local_258;
  longlong local_250;
  longlong local_248;
  int *local_240;
  undefined8 local_228;
  undefined1 local_220 [16];
  float local_210;
  undefined4 uStack_20c;
  float local_1f8;
  undefined4 uStack_1f4;
  undefined1 local_1e8 [112];
  undefined4 local_178 [12];
  undefined1 local_148 [96];
  ulonglong local_e8;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM7._0_16_;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_308;
  piVar2 = *(int **)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c0);
  local_178[0] = 1;
  uVar18 = ~param_1;
  puVar14 = local_178;
  uVar15 = uVar18;
  do {
    uVar15 = crc32(uVar15,*puVar14);
    puVar13 = puVar14 + 1;
    puVar1 = puVar14 + 2;
    puVar14 = puVar13;
  } while (puVar1 <= local_178 + 1);
  if (puVar13 < local_178 + 1) {
    do {
      uVar15 = crc32(uVar15,*(undefined1 *)puVar13);
      puVar13 = (undefined4 *)((longlong)puVar13 + 1);
    } while (puVar13 < local_178 + 1);
  }
  auVar40 = ZEXT864(0);
  local_280 = param_3;
  local_248 = param_2;
  local_240 = piVar2;
  uVar28 = FUN_1804b1470(piVar2,~uVar15,0);
  cVar25 = '\0';
  local_178[2] = 0;
  puVar14 = local_178 + 2;
  do {
    uVar18 = crc32(uVar18,*puVar14);
    puVar13 = puVar14 + 1;
    puVar1 = puVar14 + 2;
    puVar14 = puVar13;
  } while (puVar1 <= local_178 + 3);
  if (puVar13 < local_178 + 3) {
    do {
      uVar18 = crc32(uVar18,*(undefined1 *)puVar13);
      puVar13 = (undefined4 *)((longlong)puVar13 + 1);
    } while (puVar13 < local_178 + 3);
  }
  uVar29 = FUN_1804b1470(piVar2,~uVar18,auVar40._0_8_);
  uVar12 = DAT_180c62ca8;
  local_290 = (longlong *)CONCAT44(uVar28,uVar29);
  auVar36 = ZEXT464((uint)(DAT_180b0a41c * 106.0));
  uVar17 = (ulonglong)(uint)(DAT_180b0a41c * 106.0);
  lVar19 = *DAT_180c62c58;
  lVar27 = DAT_180c62c58[1];
  auVar41 = ZEXT464(0x41533333);
  fVar38 = 0.5;
  fVar33 = DAT_180b0a41c;
  if (lVar19 != lVar27) {
    auVar37 = ZEXT464(0x3f800000);
    fVar39 = 55.0;
    do {
      if (*(longlong *)(lVar19 + 0x20) == param_3) {
        local_2e8 = FUN_18045f3f0(*(undefined4 *)(lVar19 + 0x50));
        if (*(int *)(lVar19 + 0x54) == 1) {
          pcVar22 = "Hold";
        }
        else if (*(int *)(lVar19 + 0x54) == 2) {
          pcVar22 = "Always";
        }
        else {
          pcVar22 = "Toggle";
        }
        FUN_18015abc0(local_148,0x60,"%s \"%s\"",pcVar22);
        auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar41._0_4_ * DAT_180b0a41c + fVar38)),1);
        auVar4 = vmaxss_avx(auVar37._0_16_,auVar4);
        local_2b8 = 0;
        local_2c8 = 0;
        local_2d0 = 0;
        local_2d8 = 0;
        local_2e0 = local_148;
        local_2e8 = CONCAT44(local_2e8._4_4_,auVar40._0_4_);
        FUN_1804ea040(&local_2a0,uVar12,auVar4._0_8_);
        auVar4 = vmaxss_avx(auVar36._0_16_,
                            ZEXT416((uint)(DAT_180b0a41c * fVar39 + (float)local_2a0)));
        auVar36 = ZEXT1664(auVar4);
        fVar33 = DAT_180b0a41c;
      }
      uVar17 = auVar36._0_8_;
      lVar19 = lVar19 + 0x68;
    } while (lVar19 != lVar27);
  }
  local_278 = (undefined4 *)CONCAT44(fVar33 * 5.0,fVar33 * 5.0);
  local_2e8 = CONCAT44(local_2e8._4_4_,fVar33 * 8.0);
  cVar8 = FUN_1804a8290(param_1,&local_290,uVar17,&local_278);
  lVar19 = DAT_180bb8ae8;
  if (cVar8 == '\0') {
  }
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar3 = *(longlong **)(lVar19 + 0x14d0);
  local_250 = plVar3[0x59];
  local_298 = *(int *)(lVar19 + 0x2008);
  uVar18 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  pcVar22 = "##editor";
  cVar8 = '#';
  uVar15 = uVar18;
  do {
    pcVar22 = pcVar22 + 1;
    if (((cVar8 == '#') && (*pcVar22 == '#')) && (pcVar22[1] == '#')) {
      pcVar22 = pcVar22 + 2;
      uVar15 = uVar18;
    }
    else {
      uVar15 = crc32(uVar15,cVar8);
    }
    cVar8 = *pcVar22;
  } while (cVar8 != '\0');
  uVar18 = ~uVar15;
  local_290 = plVar3;
  local_288 = uVar18;
  if (*(uint *)(*plVar3 + 0x1534) == uVar18) {
    FUN_1804cf810(uVar18,0xb,"##editor");
  }
  uVar16 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  pcVar22 = "#all";
  cVar8 = '#';
  uVar26 = uVar16;
  do {
    if (((cVar8 == '#') && (*pcVar22 == '#')) && (pcVar22[1] == '#')) {
      pcVar22 = pcVar22 + 2;
      uVar26 = uVar16;
    }
    else {
      uVar26 = crc32(uVar26,cVar8);
    }
    cVar8 = *pcVar22;
    pcVar22 = pcVar22 + 1;
  } while (cVar8 != '\0');
  uVar26 = ~uVar26;
  local_258 = uVar26;
  if (*(uint *)(*plVar3 + 0x1534) == uVar26) {
    FUN_1804cf810(uVar26,0xb,&DAT_180829f30);
  }
  iVar24 = local_298;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar18)) {
    cVar25 = '\x01';
    local_2a7 = '\x01';
    iVar9 = (int)((DAT_180c62c58[1] - *DAT_180c62c58) / 0x68);
    if ((DAT_1808e4e34 < 0) ||
       ((iVar9 <= DAT_1808e4e34 ||
        (*(longlong *)((longlong)DAT_1808e4e34 * 0x68 + 0x20 + *DAT_180c62c58) != param_3)))) {
      FUN_1804c7a50(local_298,1);
      cVar25 = '\0';
      local_2a7 = '\0';
    }
  }
  else {
    local_2a7 = '\0';
    iVar9 = (int)((DAT_180c62c58[1] - *DAT_180c62c58) / 0x68);
  }
  local_178[4] = 0;
  puVar14 = local_178 + 4;
  do {
    uVar15 = crc32(uVar15,*puVar14);
    puVar13 = puVar14 + 1;
    puVar1 = puVar14 + 2;
    puVar14 = puVar13;
  } while (puVar1 <= local_178 + 5);
  if (puVar13 < local_178 + 5) {
    do {
      uVar15 = crc32(uVar15,*(undefined1 *)puVar13);
      puVar13 = (undefined4 *)((longlong)puVar13 + 1);
    } while (puVar13 < local_178 + 5);
  }
  local_278 = (undefined4 *)FUN_1804b15a0(piVar2,~uVar15);
  lVar19 = DAT_180bb8ae8;
  if (DAT_180bbecd8 != '\0') {
    fVar33 = *(float *)(DAT_180bb8ae8 + 0x114) - DAT_180c62c7c;
    fVar39 = *(float *)(DAT_180bb8ae8 + 0x110) - DAT_180c62c78;
    if (fVar39 * fVar39 + fVar33 * fVar33 < DAT_180b0a41c * 3.0 * DAT_180b0a41c * 3.0) {
      local_2a8 = 0;
      goto LAB_18045e528;
    }
    DAT_180bbecd8 = '\0';
  }
  if (iVar24 < *(int *)(DAT_180bb8ae8 + 0x1ff8)) {
    if ((((*(float *)(DAT_180bb8ae8 + 0xfc) != auVar40._0_4_) ||
         (*(float *)(DAT_180bb8ae8 + 0x100) != auVar40._0_4_)) &&
        (lVar27 = *(longlong *)((longlong)iVar24 * 0x38 + 8 + *(longlong *)(DAT_180bb8ae8 + 0x2000))
        , lVar27 != 0)) && (*(char *)(lVar27 + 0xcd) != '\0')) {
      local_260 = *(float *)(DAT_180bb8ae8 + 0x110) - *(float *)(DAT_180bb8ae8 + 0xfc);
      local_25c = *(float *)(DAT_180bb8ae8 + 0x114) - *(float *)(DAT_180bb8ae8 + 0x100);
      local_270 = *(float *)(lVar27 + 0x28);
      if (local_270 < local_260) {
        local_270 = local_270 + *(float *)(lVar27 + 0x30);
      }
      local_26c = *(float *)(lVar27 + 0x2c) + *(float *)(lVar27 + 0x34) + DAT_180b0a41c * 6.0;
      local_264 = *(float *)(lVar27 + 0x2c) - DAT_180b0a41c * 6.0;
      local_268 = local_270;
      local_2a8 = FUN_1804b07c0(&local_260,&local_268,&local_270);
      local_2a8 = local_2a8 ^ 1;
      goto LAB_18045e528;
    }
  }
  local_2a8 = 1;
LAB_18045e528:
  iVar24 = 0;
  local_2a0 = (longlong)iVar9;
  auVar40 = ZEXT464(0x41a66666);
  fVar33 = 13.5;
  uVar28 = 0x41300000;
  fVar39 = 28.0;
  if (0 < iVar9) {
    lVar27 = 0;
    fVar38 = 9.0;
    fVar35 = 1.5;
    fVar31 = 3.6;
    fVar32 = 1.8;
    cVar25 = local_2a7;
    do {
      lVar21 = *DAT_180c62c58;
      if (*(longlong *)(lVar27 + 0x20 + lVar21) == local_280) {
        lVar19 = *(longlong *)(lVar19 + 0x14d0);
        uVar29 = FUN_1804c2670(lVar19,iVar24);
        piVar2 = (int *)(lVar19 + 0x108);
        iVar9 = *(int *)(lVar19 + 0x10c);
        if (*piVar2 == iVar9) {
          iVar20 = *piVar2 + 1;
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          if (iVar20 < iVar9) {
            iVar20 = iVar9;
          }
          FUN_1804d14d0(piVar2,iVar20);
        }
        *(undefined4 *)(*(longlong *)(lVar19 + 0x110) + (longlong)*piVar2 * 4) = uVar29;
        *piVar2 = *piVar2 + 1;
        if ((cVar25 == '\0') || (DAT_1808e4e34 != iVar24)) {
          cVar8 = '\0';
        }
        else {
          cVar8 = '\x01';
        }
        pauVar10 = (undefined1 (*) [16])FUN_18045c410(local_220,"##entry",cVar8,auVar40._0_8_);
        auVar36 = ZEXT1664(*pauVar10);
        local_228 = *(undefined8 *)pauVar10[1];
        local_2e8 = FUN_18045f3f0(*(undefined4 *)(lVar27 + 0x50 + lVar21));
        iVar9 = *(int *)(lVar27 + 0x54 + lVar21);
        if (iVar9 == 1) {
          pcVar22 = "Hold";
        }
        else if (iVar9 == 2) {
          pcVar22 = "Always";
        }
        else {
          pcVar22 = "Toggle";
        }
        FUN_18015abc0(local_148,0x60,"%s \"%s\"",pcVar22);
        lVar19 = DAT_180bb8ae8;
        uVar29 = DAT_1808da478;
        *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
        uVar12 = *(undefined8 *)(*(longlong *)(lVar19 + 0x14d0) + 0x2c8);
        local_260 = fVar33 * DAT_180b0a41c + auVar36._0_4_;
        local_25c = (float)local_228;
        fVar34 = (float)local_228;
        local_2e8._0_4_ = uVar28;
        FUN_180463dc0(uVar12,&local_260,DAT_180b0a438,&DAT_180829e08);
        uVar6 = DAT_180c62ca8;
        fVar30 = (float)FUN_180463350(DAT_180c62ca8,0x41533333);
        local_264 = fVar34 - fVar30 * 0.5;
        auVar4 = vroundss_avx(ZEXT816(0),
                              ZEXT416((uint)(fVar39 * DAT_180b0a41c + auVar36._0_4_ + 0.5)),1);
        local_268 = auVar4._0_4_;
        local_2d8 = 0;
        local_2e0 = local_148;
        local_2e8._0_4_ = uVar29;
        FUN_180463450(uVar12,uVar6,0x41533333,&local_268);
        auVar4 = vshufps_avx(auVar36._0_16_,auVar36._0_16_,0xaa);
        local_270 = auVar4._0_4_ - DAT_180b0a41c * fVar38;
        local_2e0 = (char *)CONCAT44(local_2e0._4_4_,DAT_180b0a41c * fVar35);
        local_2e8 = CONCAT44(local_2e8._4_4_,DAT_1808da478);
        local_26c = fVar34;
        FUN_1804648c0(local_250,&local_270,DAT_180b0a41c * fVar32,DAT_180b0a41c * fVar31);
        if ((((local_228._4_1_ != '\0') && (local_2a8 != 0)) || (local_228._5_1_ != '\0')) &&
           (cVar8 == '\0')) {
          uVar29 = vextractps_avx(auVar36._0_16_,1);
          DAT_1808e4e34 = iVar24;
          DAT_180bbecd9 = cVar8;
          *local_278 = uVar29;
          if (cVar25 == '\0') {
            FUN_1804c7740(local_288,0);
          }
          cVar25 = '\x01';
        }
        lVar19 = DAT_180bb8ae8;
        iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar9 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
          lVar19 = DAT_180bb8ae8;
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
        }
      }
      iVar24 = iVar24 + 1;
      lVar27 = lVar27 + 0x68;
      local_2a0 = local_2a0 + -1;
    } while (local_2a0 != 0);
    auVar41 = ZEXT464(0x41533333);
    fVar38 = 0.5;
    local_2a0 = 0;
    uVar26 = local_258;
    local_2a7 = cVar25;
  }
  if ((*(int *)(lVar19 + 0x2008) < *(int *)(lVar19 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(lVar19 + 0x2008) * 0x38 + *(longlong *)(lVar19 + 0x2000)) ==
      uVar26)) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
  }
  pauVar10 = (undefined1 (*) [16])FUN_18045c410(local_220,"##all_line",cVar8,auVar40._0_8_);
  lVar19 = DAT_180bb8ae8;
  uVar29 = DAT_1808da478;
  auVar4 = *pauVar10;
  auVar36 = ZEXT1664(auVar4);
  fVar35 = *(float *)pauVar10[1];
  local_228 = *(undefined8 *)pauVar10[1];
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar12 = *(undefined8 *)(*(longlong *)(lVar19 + 0x14d0) + 0x2c8);
  local_2a0 = CONCAT44(fVar35,fVar33 * DAT_180b0a41c + auVar4._0_4_);
  local_2e8._0_4_ = uVar28;
  FUN_180463dc0(uVar12,&local_2a0,DAT_180b0a438,&DAT_180829db8);
  uVar6 = DAT_180c62ca8;
  fVar31 = (float)FUN_180463350(DAT_180c62ca8,auVar41._0_8_);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar39 * DAT_180b0a41c + auVar36._0_4_ + fVar38)),
                        1);
  local_2a0 = CONCAT44(fVar35 - fVar31 * fVar38,auVar4._0_4_);
  local_2d8 = 0;
  local_2e0 = "All Hotkeys";
  local_2e8 = CONCAT44(local_2e8._4_4_,uVar29);
  FUN_180463450(uVar12,uVar6,auVar41._0_8_,&local_2a0);
  uVar12 = auVar40._0_8_;
  auVar4 = vshufps_avx(auVar36._0_16_,auVar36._0_16_,0x55);
  auVar36 = ZEXT1664(auVar4);
  if ((((local_228._4_1_ != '\0') && (local_2a8 != 0)) || (local_228._5_1_ != '\0')) &&
     (cVar8 == '\0')) {
    local_178[6] = 0;
    uVar15 = ~uVar26;
    puVar14 = local_178 + 6;
    do {
      uVar15 = crc32(uVar15,*puVar14);
      puVar13 = puVar14 + 1;
      puVar1 = puVar14 + 2;
      puVar14 = puVar13;
    } while (puVar1 <= local_178 + 7);
    if (puVar13 < local_178 + 7) {
      do {
        uVar15 = crc32(uVar15,*(undefined1 *)puVar13);
        puVar13 = (undefined4 *)((longlong)puVar13 + 1);
      } while (puVar13 < local_178 + 7);
    }
    FUN_1804b1700(local_240,~uVar15);
    FUN_1804c7740(uVar26,0);
    uVar12 = auVar40._0_8_;
  }
  pfVar11 = (float *)FUN_18045c410(local_220,&DAT_180829efc,0,uVar12);
  lVar19 = DAT_180bb8ae8;
  uVar29 = DAT_1808da478;
  fVar31 = *pfVar11;
  fVar35 = pfVar11[4];
  uStack_1f4 = pfVar11[5];
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar12 = *(undefined8 *)(*(longlong *)(lVar19 + 0x14d0) + 0x2c8);
  local_2a0 = CONCAT44(fVar35,fVar33 * DAT_180b0a41c + fVar31);
  local_1f8 = fVar35;
  local_2e8._0_4_ = uVar28;
  FUN_180463dc0(uVar12,&local_2a0,DAT_180b0a438,&DAT_180829db4);
  uVar6 = DAT_180c62ca8;
  fVar32 = (float)FUN_180463350(DAT_180c62ca8,auVar41._0_8_);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar39 * DAT_180b0a41c + fVar31 + fVar38)),1);
  local_2a0 = CONCAT44(fVar35 - fVar32 * fVar38,auVar4._0_4_);
  local_2d8 = 0;
  local_2e0 = "New Hotkey";
  local_2e8 = CONCAT44(local_2e8._4_4_,uVar29);
  FUN_180463450(uVar12,uVar6,auVar41._0_8_,&local_2a0);
  cVar7 = uStack_1f4._1_1_;
  if (uStack_1f4._1_1_ != '\0') {
    uVar12 = FUN_18045c250(local_1e8,local_248,local_280);
    FUN_18045f540(extraout_XMM0_Qa,uVar12);
    FUN_18015c010(local_1e8);
    DAT_1808e4e34 = (int)((DAT_180c62c58[1] - *DAT_180c62c58) / 0x68) + -1;
    DAT_180bbecd9 = '\x01';
    DAT_180bbecd8 = '\x01';
    DAT_180c62c78 = *(float *)(DAT_180bb8ae8 + 0x110);
    DAT_180c62c7c = *(float *)(DAT_180bb8ae8 + 0x114);
    *local_278 = auVar36._0_4_;
    FUN_1804c7740(local_288,0);
  }
  FUN_18045cb80();
  pfVar11 = (float *)FUN_18045c410(local_220,"##reset",0);
  lVar19 = DAT_180bb8ae8;
  uVar29 = DAT_180b0a430;
  fVar31 = *pfVar11;
  fVar35 = pfVar11[4];
  uStack_20c = pfVar11[5];
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar12 = *(undefined8 *)(*(longlong *)(lVar19 + 0x14d0) + 0x2c8);
  local_2a0 = CONCAT44(fVar35,fVar33 * DAT_180b0a41c + fVar31);
  local_210 = fVar35;
  local_2e8._0_4_ = uVar28;
  FUN_180463dc0(uVar12,&local_2a0,uVar29,&DAT_180829a4c);
  uVar6 = DAT_180c62ca8;
  fVar33 = (float)FUN_180463350(DAT_180c62ca8,auVar41._0_8_);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar39 * DAT_180b0a41c + fVar31 + fVar38)),1);
  local_2a0 = CONCAT44(fVar35 - fVar33 * fVar38,auVar4._0_4_);
  local_2d8 = 0;
  local_2e0 = "Reset";
  local_2e8 = CONCAT44(local_2e8._4_4_,uVar29);
  FUN_180463450(uVar12,uVar6,auVar41._0_8_,&local_2a0);
  if (uStack_20c._1_1_ == '\0') {
    if ((((char)uStack_1f4 == '\0') && ((char)uStack_20c == '\0')) ||
       (((cVar25 == '\0' && (cVar8 == '\0')) || ((cVar7 != '\0' || (local_2a8 == 0)))))) {
      if ((local_228._4_1_ != '\0') && ((cVar25 != '\0' && (local_2a8 != 0)))) {
        DAT_180bbecd9 = '\0';
      }
    }
    else {
      FUN_1804c7a50(local_298,1);
    }
  }
  else {
    if ((DAT_180c62c60 != 0) && (-1 < local_280)) {
      iVar24 = *(int *)(local_248 + 0x10);
      if (iVar24 == 0) {
        uVar12 = 1;
      }
      else if (iVar24 == 1) {
        local_250 = 4;
        uVar12 = 4;
      }
      else if (iVar24 == 2) {
        uVar12 = 4;
      }
      else if (iVar24 == 3) {
        uVar12 = *(undefined8 *)(local_248 + 0x30);
      }
      else {
        uVar12 = 0;
      }
      FUN_18063aed0(DAT_180c62c70 + local_280,DAT_180c62c60 + local_280,uVar12);
    }
    lVar19 = DAT_180c62c58[1];
    lVar27 = *DAT_180c62c58;
    lVar21 = local_280;
    if (lVar27 != lVar19) {
      do {
        if ((*(longlong *)(lVar27 + 0x20) == lVar21) && (*(char *)(lVar27 + 0x5e) != '\0')) {
          uVar28 = FUN_18045c100(lVar27);
          *(undefined4 *)(lVar27 + 0x60) = uVar28;
          lVar21 = local_280;
        }
        lVar27 = lVar27 + 0x68;
      } while (lVar27 != lVar19);
    }
    FUN_1804c7bf0();
  }
  plVar3 = local_290;
  if ((((-1 < DAT_1808e4e34) && (DAT_1808e4e34 < (int)((DAT_180c62c58[1] - *DAT_180c62c58) / 0x68)))
      && (*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8))) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == local_288)) {
    FUN_18045d080(local_288,local_290,*local_278);
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar26)) {
    uVar15 = *(uint *)((longlong)plVar3 + 0x2c);
    local_178[8] = 0;
    uVar18 = ~uVar26;
    puVar14 = local_178 + 8;
    do {
      uVar18 = crc32(uVar18,*puVar14);
      puVar13 = puVar14 + 1;
      puVar1 = puVar14 + 2;
      puVar14 = puVar13;
    } while (puVar1 <= local_178 + 9);
    if (puVar13 < local_178 + 9) {
      do {
        uVar18 = crc32(uVar18,*(undefined1 *)puVar13);
        puVar13 = (undefined4 *)((longlong)puVar13 + 1);
      } while (puVar13 < local_178 + 9);
    }
    puVar23 = *(uint **)(local_240 + 2);
    uVar17 = (longlong)*local_240;
    while (uVar5 = uVar17, uVar5 != 0) {
      uVar17 = uVar5 >> 1;
      if (puVar23[uVar17 * 4] < ~uVar18) {
        puVar23 = puVar23 + uVar17 * 4 + 4;
        uVar17 = uVar5 + (-1 - uVar17);
      }
    }
    if ((puVar23 != (uint *)((longlong)*local_240 * 0x10 + *(longlong *)(local_240 + 2))) &&
       (*puVar23 == ~uVar18)) {
      uVar15 = puVar23[2];
    }
    FUN_18045da30(uVar26,plVar3,uVar15);
  }
  FUN_1804aeac0();
}



