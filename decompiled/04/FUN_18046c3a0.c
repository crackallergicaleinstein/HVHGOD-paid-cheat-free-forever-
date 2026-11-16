// FUN_18046c3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046c3a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046c3a0(longlong param_1,int *param_2,int param_3,float *param_4)

{
  int *piVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined2 *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  undefined **ppuVar18;
  byte *pbVar19;
  int iVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_2e8 [32];
  float local_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined2 local_2a8;
  int local_2a4;
  int local_2a0;
  undefined8 local_298;
  undefined1 local_290 [8];
  longlong local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined1 local_230 [8];
  longlong local_228;
  byte *local_220;
  undefined *local_218 [4];
  undefined *local_1f8 [4];
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  fVar22 = DAT_180b0a41c;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  if ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) ||
     (*(int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
              *(longlong *)(DAT_180bb8ae8 + 0x2000)) != param_3)) {
    *(undefined1 *)(param_1 + 0x7178) = 0;
  }
  auVar27 = ZEXT464(0x41100000);
  fVar28 = 4.0;
  if (*(char *)(param_1 + 0x7178) == '\0') {
    fVar32 = DAT_180b0a41c * 9.0;
    fVar23 = param_4[1];
    fVar25 = DAT_180b0a41c * 4.0;
    *(float *)(param_1 + 0x7170) = *param_4 - DAT_180b0a41c * 310.0;
    *(float *)(param_1 + 0x7174) = fVar32 + fVar23 + fVar25;
    *(undefined1 *)(param_1 + 0x7178) = 1;
  }
  local_108 = fVar22 * 10.0;
  fVar23 = 6.0;
  local_104 = fVar22 * 6.0;
  local_2c8 = -1.0;
  local_228 = param_1;
  cVar8 = FUN_1804a8290(param_3,param_1 + 0x7170,fVar22 * 300.0,&local_108);
  lVar13 = DAT_180bb8ae8;
  if (cVar8 == '\0') {
  }
  iVar10 = *param_2;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (2 < iVar10) {
    iVar10 = 2;
  }
  pbVar19 = (byte *)(param_2 + (longlong)iVar10 * 0x46b + 1);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar13 + 0x14d0);
  fVar22 = *(float *)(lVar3 + 0x11c);
  uVar4 = *(undefined8 *)(lVar3 + 0x2c8);
  fVar32 = *(float *)(lVar3 + 0x118);
  if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
     (pfVar16 = (float *)(lVar3 + 0x280), *(longlong *)(lVar13 + 0x2338) != 0)) {
    pfVar16 = (float *)(lVar3 + 0x250);
  }
  fVar25 = *pfVar16;
  *(undefined1 *)(lVar3 + 0xce) = 1;
  plVar5 = *(longlong **)(lVar13 + 0x14d0);
  fVar25 = fVar25 - fVar32;
  local_f0 = *(float *)(plVar5 + 5);
  local_ec = *(float *)((longlong)plVar5 + 0x2c);
  local_108 = local_f0 + *(float *)(plVar5 + 6);
  pcVar11 = "#drag";
  local_104 = DAT_180b0a41c * 20.0 + fVar22;
  uVar15 = ~*(uint *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4);
  cVar8 = '#';
  uVar17 = uVar15;
  do {
    if (((cVar8 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar17 = uVar15;
    }
    else {
      uVar17 = crc32(uVar17,cVar8);
    }
    cVar8 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar8 != '\0');
  uVar17 = ~uVar17;
  local_278 = fVar22;
  local_274 = fVar25;
  local_220 = pbVar19;
  if (*(uint *)(*plVar5 + 0x1534) == uVar17) {
    FUN_1804cf810(uVar17,0xb,&DAT_18082ab64);
  }
  local_2c8 = (float)CONCAT31(local_2c8._1_3_,1);
  puVar12 = (undefined2 *)FUN_1804aad60(local_290,uVar17,&local_f0,&local_108);
  lVar13 = DAT_180bb8ae8;
  uVar2 = *puVar12;
  local_2a8._1_1_ = (char)((ushort)uVar2 >> 8);
  if (((char)uVar2 != '\0') || (local_2a8._1_1_ != '\0')) {
    *(undefined4 *)(DAT_180bb8ae8 + 0x24d8) = 2;
    if (local_2a8._1_1_ != '\0') {
      fVar31 = *(float *)(lVar13 + 0x100);
      fVar24 = *(float *)((longlong)plVar5 + 0x2c);
      *(float *)(param_1 + 0x7170) = *(float *)(plVar5 + 5) + *(float *)(lVar13 + 0xfc);
      *(float *)(param_1 + 0x7174) = fVar31 + fVar24;
    }
    if (((char)uVar2 != '\0') || (local_2a8._1_1_ != '\0')) {
      uVar9 = 0x3f800000;
      goto LAB_18046c702;
    }
  }
  uVar9 = 0;
LAB_18046c702:
  local_2a8 = uVar2;
  uVar21 = FUN_1804aaa10(uVar17 + 1,uVar9,0x41800000);
  fVar26 = 8.0;
  local_108 = (fVar32 + fVar25) - fVar23 * DAT_180b0a41c;
  local_104 = DAT_180b0a41c * 8.0 + fVar22;
  local_2c8 = (float)FUN_180462ad0(DAT_180b0a450,DAT_1808da474,uVar21);
  local_2c0 = &DAT_18082a298;
  FUN_180463b40(uVar4,DAT_180c62cc0,auVar27._0_8_,&local_108);
  local_108 = DAT_180b0a41c * 2.0 + fVar32;
  local_104 = DAT_180b0a41c * 2.0 + fVar22;
  local_2b8 = 0;
  local_2c0 = "ESP Layout";
  local_2c8 = (float)DAT_180b0a458;
  FUN_180463450(uVar4,DAT_180c62cb0,0x41600000,&local_108);
  fVar23 = DAT_180b0a41c * 24.0;
  local_218[0] = &DAT_18082a250;
  local_218[1] = &DAT_180829db8;
  local_1f8[1] = &DAT_18082a250;
  local_1f8[0] = &DAT_18082a248;
  local_1d0 = &DAT_18082a27c;
  local_1f8[2] = &DAT_18082a254;
  local_198 = &DAT_18082a27c;
  local_1f8[3] = &DAT_18082a270;
  local_218[2] = &DAT_180829fa4;
  local_1b8 = &DAT_18082a25c;
  local_218[3] = &DAT_18082a244;
  fVar22 = DAT_180b0a41c * 22.0 + fVar22;
  fVar31 = DAT_180b0a41c * fVar28;
  fVar25 = (fVar25 - fVar31) * 0.5;
  local_1a8 = &DAT_180829a4c;
  local_1d8 = &DAT_180829fa4;
  local_190 = &DAT_18082a284;
  local_1c8 = &DAT_18082a264;
  local_1c0 = &DAT_180829f98;
  local_1b0 = &DAT_18082a244;
  local_1a0 = &DAT_18082a264;
  local_188 = &DAT_180829f9c;
  fVar30 = 7.0;
  fVar29 = 19.0;
  local_178 = &DAT_180829f98;
  local_180 = &DAT_18082a24c;
  local_170 = &DAT_180829f9c;
  local_168 = &DAT_18082a294;
  local_148 = &DAT_180829fa4;
  local_160 = &DAT_18082a28c;
  local_138 = &DAT_180829f9c;
  local_158 = &DAT_18082a278;
  local_130 = &DAT_180829f98;
  local_150 = &DAT_18082a258;
  local_140 = &DAT_18082a274;
  local_128 = &DAT_180829fa0;
  local_118 = &DAT_18082a280;
  local_120 = &DAT_18082a264;
  local_2a0 = 0;
  local_298 = 0;
  local_27c = fVar25;
  fVar24 = DAT_180b0a41c;
  do {
    lVar13 = local_298;
    iVar10 = local_2a0;
    iVar20 = 0;
    if (local_2a0 == 1 || (local_2a0 == 1 || (local_2a0 == 2 || local_2a0 == 0))) {
      local_270 = fVar24 * fVar30 + fVar32;
      local_26c = fVar24 * fVar26 + fVar22;
      local_2c8 = auVar27._0_4_;
      FUN_180463dc0(uVar4,&local_270,DAT_180b0a438,*(undefined8 *)((longlong)local_218 + local_298))
      ;
      local_2c0 = *(char **)((longlong)&PTR_s_Player_Details_18082ac18 + lVar13);
      local_268 = DAT_180b0a41c * 17.0 + fVar32;
      local_264 = DAT_180b0a41c * fVar28 + fVar22;
      local_2b8 = 0;
      local_2c8 = (float)DAT_180b0a414;
      FUN_180463450(uVar4,DAT_180c62ca8,auVar27._0_8_,&local_268);
      fVar22 = fVar22 + DAT_180b0a41c * fVar29;
      ppuVar18 = &PTR_s_Bounding_Box_18077eec0;
      local_2a4 = 0;
      local_288 = 0;
      local_280 = fVar22;
      fVar24 = DAT_180b0a41c;
      iVar14 = iVar20;
      do {
        if (*(int *)(ppuVar18 + 1) == iVar10) {
          local_100 = (fVar25 + fVar31) * (float)(iVar14 % 2) + fVar32;
          local_fc = (fVar31 + fVar23) * (float)(iVar14 / 2) + fVar22;
          local_f4 = local_fc + fVar23;
          local_f8 = local_100 + fVar25;
          lVar13 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
          uVar9 = FUN_1804c2670(lVar13,iVar20);
          iVar10 = *(int *)(lVar13 + 0x10c);
          piVar1 = (int *)(lVar13 + 0x108);
          if (*piVar1 == iVar10) {
            iVar14 = *piVar1 + 1;
            if (iVar10 == 0) {
              iVar10 = 8;
            }
            else {
              iVar10 = iVar10 / 2 + iVar10;
            }
            if (iVar14 < iVar10) {
              iVar14 = iVar10;
            }
            FUN_1804d14d0(piVar1,iVar14);
          }
          local_260 = fVar29 * DAT_180b0a41c;
          *(undefined4 *)(*(longlong *)(lVar13 + 0x110) + (longlong)*piVar1 * 4) = uVar9;
          *piVar1 = *piVar1 + 1;
          local_260 = local_f8 - local_260;
          plVar5 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
          local_25c = local_f4;
          pcVar11 = "##esp_choice";
          uVar15 = ~*(uint *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4);
          cVar8 = '#';
          uVar17 = uVar15;
          do {
            pcVar11 = pcVar11 + 1;
            if (((cVar8 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
              pcVar11 = pcVar11 + 2;
              uVar17 = uVar15;
            }
            else {
              uVar17 = crc32(uVar17,cVar8);
            }
            cVar8 = *pcVar11;
          } while (cVar8 != '\0');
          uVar17 = ~uVar17;
          if (*(uint *)(*plVar5 + 0x1534) == uVar17) {
            FUN_1804cf810(uVar17,0xb,"##esp_choice");
          }
          local_2c8 = (float)CONCAT31(local_2c8._1_3_,1);
          puVar12 = (undefined2 *)FUN_1804aad60(local_290,uVar17,&local_100,&local_260);
          local_2a8 = *puVar12;
          if (*(char *)(puVar12 + 1) != '\0') {
            *pbVar19 = *pbVar19 == 0;
          }
          plVar5 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
          local_258 = local_f8 - fVar29 * DAT_180b0a41c;
          local_254 = local_fc;
          pcVar11 = "##esp_settings";
          uVar15 = ~*(uint *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4);
          cVar8 = '#';
          uVar17 = uVar15;
          do {
            pcVar11 = pcVar11 + 1;
            if (((cVar8 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
              pcVar11 = pcVar11 + 2;
              uVar17 = uVar15;
            }
            else {
              uVar17 = crc32(uVar17,cVar8);
            }
            cVar8 = *pcVar11;
          } while (cVar8 != '\0');
          uVar17 = ~uVar17;
          if (*(uint *)(*plVar5 + 0x1534) == uVar17) {
            FUN_1804cf810(uVar17,0xb,"##esp_settings");
          }
          local_2c8 = (float)CONCAT31(local_2c8._1_3_,1);
          puVar12 = (undefined2 *)FUN_1804aad60(local_230,uVar17,&local_258,&local_f8);
          cVar8 = (char)local_2a8;
          uVar2 = *puVar12;
          if ((*(char *)(puVar12 + 1) != '\0') ||
             ((((char)local_2a8 != '\0' || ((char)uVar2 != '\0')) &&
              ((*(char *)(DAT_180bb8ae8 + 0xb5f) != '\0' &&
               (lVar13 = FUN_1804af210(DAT_180bb8ae8,0x291), *(char *)(lVar13 + 8) == '\0')))))) {
            *(int *)(local_228 + 0x6e0c) = iVar20;
            *(undefined1 *)(local_228 + 0x6e10) = 1;
            FUN_1804c7bf0();
          }
          local_2c8 = fVar28 * DAT_180b0a41c;
          if (*pbVar19 == 0) {
            uVar9 = DAT_180b0a434;
            if (cVar8 != '\0') {
              uVar9 = DAT_180b0a454;
            }
          }
          else {
            uVar9 = DAT_1808da470;
          }
          local_2c0 = (char *)((ulonglong)local_2c0 & 0xffffffff00000000);
          FUN_1804df870(uVar4,&local_100,&local_f8,uVar9);
          fVar25 = fVar23 * 0.5;
          fVar22 = fVar25 + local_fc;
          fVar24 = local_f8 - DAT_180b0a41c * 29.0;
          local_2c8 = DAT_180b0a41c * fVar28;
          local_108 = fVar24 - DAT_180b0a41c * fVar30;
          local_104 = fVar22 - local_2c8;
          local_f0 = fVar24 + DAT_180b0a41c * fVar30;
          local_ec = fVar22 + local_2c8;
          uVar9 = DAT_1808da474;
          if (*pbVar19 != 0) {
            uVar9 = DAT_180b0a458;
          }
          if (*pbVar19 == 0) {
            local_2b8 = local_2b8 & 0xffffffff00000000;
            local_2c0 = (char *)CONCAT44(local_2c0._4_4_,0x3f800000);
            FUN_1804de7c0(uVar4,&local_108,&local_f0,DAT_180b0a450);
          }
          else {
            local_2c0 = (char *)((ulonglong)local_2c0._4_4_ << 0x20);
            FUN_1804df870();
          }
          auVar6 = vpcmpeqd_avx(ZEXT116(*pbVar19),SUB6416(ZEXT464(0),0));
          auVar6 = vblendvps_avx(SUB6416(ZEXT464(0x40400000),0),SUB6416(ZEXT464(0xc0400000),0),
                                 auVar6);
          local_2c8 = 0.0;
          local_250 = auVar6._0_4_ * DAT_180b0a41c + fVar24;
          uVar7 = DAT_180b0a450;
          if (*pbVar19 != 0) {
            uVar7 = DAT_1808da488;
          }
          local_24c = fVar22;
          FUN_1804e01c0(uVar4,&local_250,DAT_180b0a41c * 2.5,uVar7);
          local_248 = DAT_180b0a41c * 10.0 + local_100;
          local_244 = fVar25 + local_fc;
          local_2c8 = auVar27._0_4_;
          FUN_180463dc0(uVar4,&local_248,uVar9,
                        *(undefined8 *)((longlong)local_218 + local_288 + 0x20));
          if (iVar20 == 0x15) {
            local_2c0 = "Weapon Name";
          }
          else if (iVar20 == 0x16) {
            local_2c0 = "Weapon Icon";
          }
          else if (iVar20 == 0x18) {
            local_2c0 = "Bomb Icon";
          }
          else if (iVar20 == 0x19) {
            local_2c0 = "Defuser Icon";
          }
          else if (iVar20 == 0x1a) {
            local_2c0 = "Taser Icon";
          }
          else {
            local_2c0 = *ppuVar18;
          }
          local_240 = DAT_180b0a41c * 20.0 + local_100;
          local_23c = DAT_180b0a41c * fVar30 + local_fc;
          local_2b8 = 0;
          local_2c8 = (float)uVar9;
          FUN_180463450(uVar4,DAT_180c62ca8,auVar27._0_8_,&local_240);
          local_234 = fVar25 + local_fc;
          fVar26 = 8.0;
          local_238 = local_f8 - auVar27._0_4_ * DAT_180b0a41c;
          local_2c8 = 8.0;
          FUN_180463dc0(uVar4,&local_238,DAT_180b0a438,&DAT_18082a288);
          if (((char)uVar2 != '\0') || (cVar8 != '\0')) {
            FUN_1804ad0d0(*(undefined8 *)
                           ((longlong)&PTR_s_Draws_a_box_around_the_player_s_b_18077f280 + local_288
                           ),0x438c0000);
          }
          iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar10 < 2) {
            FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
          }
          local_2a4 = local_2a4 + 1;
          iVar10 = local_2a0;
          fVar22 = local_280;
          fVar25 = local_27c;
          fVar24 = DAT_180b0a41c;
          iVar14 = local_2a4;
        }
        local_288 = local_288 + 8;
        iVar20 = iVar20 + 1;
        pbVar19 = pbVar19 + 0x9c;
        ppuVar18 = ppuVar18 + 4;
      } while (iVar20 < 0x1d);
      fVar22 = fVar22 + (float)((iVar14 + 1) / 2) * (fVar31 + fVar23) + fVar24 * fVar28;
      pbVar19 = local_220;
    }
    lVar13 = DAT_180bb8ae8;
    local_2a0 = iVar10 + 1;
    local_298 = local_298 + 8;
  } while (local_298 < 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x14d0);
  *(float *)(lVar13 + 0x11c) = local_278;
  local_298 = CONCAT44(fVar22 - local_278,local_274);
  *(float *)(lVar13 + 0x118) = fVar32;
  *(undefined1 *)(lVar13 + 0x159) = 1;
  FUN_1804c6420(&local_298,0xbf800000);
  FUN_1804aeac0();
}



