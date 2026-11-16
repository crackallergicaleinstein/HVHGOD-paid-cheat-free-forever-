// FUN_180456860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180456860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180456860(longlong param_1,float *param_2,longlong param_3)

{
  size_t *psVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  size_t sVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined8 *_Buf2;
  char *pcVar11;
  undefined2 *puVar12;
  int *piVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  int iVar36;
  bool bVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  float fVar40;
  undefined1 auVar41 [64];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined4 uVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  undefined1 auVar57 [64];
  undefined1 auStack_508 [32];
  float local_4e8;
  char *local_4e0;
  undefined8 local_4d8;
  uint local_4c8;
  byte local_4c4;
  undefined1 local_4c3;
  char local_4c2;
  uint local_4c0 [2];
  float local_4b8;
  float local_4b4;
  uint local_4b0;
  int local_4ac;
  float local_4a8;
  float local_4a4;
  int local_4a0 [2];
  int local_498;
  undefined8 local_490;
  int local_488 [2];
  longlong local_480;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  longlong local_460;
  undefined4 local_458;
  undefined4 local_454;
  ulonglong local_448 [2];
  undefined8 uStack_438;
  undefined8 uStack_430;
  ulonglong local_428;
  undefined8 uStack_420;
  uint uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined2 uStack_40c;
  undefined2 uStack_40a;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined8 uStack_3f7;
  undefined8 uStack_3ef;
  undefined8 uStack_3e7;
  undefined8 uStack_3df;
  undefined8 local_3d7;
  undefined8 uStack_3cf;
  undefined8 uStack_3c7;
  undefined8 uStack_3bf;
  undefined2 local_3b7;
  undefined1 uStack_3b5;
  undefined5 uStack_3b4;
  undefined8 uStack_3af;
  undefined3 uStack_3a7;
  uint uStack_3a4;
  undefined1 uStack_3a0;
  undefined3 uStack_39f;
  undefined5 uStack_39c;
  undefined2 uStack_397;
  undefined1 uStack_395;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  uint uStack_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  undefined8 uStack_378;
  uint uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  uint5 uStack_360;
  undefined3 uStack_35b;
  ulonglong local_358;
  ulonglong uStack_350;
  undefined8 uStack_348;
  uint5 uStack_340;
  undefined3 uStack_33b;
  uint uStack_338;
  uint uStack_334;
  undefined1 uStack_330;
  uint uStack_32c;
  uint local_328;
  uint uStack_324;
  uint uStack_320;
  undefined1 uStack_31c;
  uint uStack_318;
  uint uStack_314;
  ulonglong uStack_310;
  uint local_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint5 uStack_2f0;
  undefined3 uStack_2eb;
  uint local_2e8;
  uint local_2e4;
  undefined1 local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  uint local_2d0;
  undefined1 local_2cc;
  uint local_2c8;
  undefined1 local_2c4;
  undefined1 local_2b8 [8];
  longlong local_2b0;
  undefined1 (**local_2a8) [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  float *local_260;
  longlong local_258;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  undefined1 local_170 [32];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 (*local_140 [2]) [16];
  size_t local_130;
  ulonglong local_128;
  undefined1 local_120 [16];
  ulonglong local_110;
  ulonglong local_108;
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  ulonglong local_e0;
  
  lVar35 = DAT_180bb8ae8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_508;
  uVar33 = 0;
  local_4c8 = 0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  local_460 = *(longlong *)(*(longlong *)(lVar35 + 0x14d0) + 0x2c8);
  local_490 = DAT_180c62ca8;
  auVar49 = ZEXT464(0x3f000000);
  auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 157.42 + 0.5)),1);
  local_4b8 = auVar43._0_4_ + *param_2;
  auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 35.6 + 0.5)),1);
  local_4b4 = auVar43._0_4_ + param_2[1];
  local_4d8 = 0;
  local_4e0 = "MAP SELECTION";
  local_4e8 = (float)DAT_180b0a414;
  local_480 = param_1;
  local_260 = param_2;
  local_258 = param_3;
  FUN_180463450(local_460,DAT_180c62ca8,param_2,&local_4b8);
  local_250 = (undefined1  [16])0x0;
  local_240 = 0;
  local_238 = 0;
  FUN_18015ba30(local_250,&PTR_180700558,0);
  FUN_180455f70(local_140,local_250);
  bVar37 = local_130 == 0;
  uVar29 = 1;
  iVar7 = *(int *)(param_3 + 0xc44);
  if (1 < iVar7) {
    do {
      if (bVar37) {
LAB_180456ae9:
        bVar37 = true;
      }
      else {
        local_4c0[0] = uVar29;
        local_4c8 = iVar7 - 1U;
        local_4b0 = 0;
        puVar21 = &local_4b0;
        if (-1 < (int)uVar29) {
          puVar21 = local_4c0;
        }
        puVar10 = &local_4c8;
        if ((int)uVar29 <= (int)(iVar7 - 1U)) {
          puVar10 = puVar21;
        }
        local_230 = (undefined1  [16])0x0;
        local_220 = 0;
        local_218 = 0;
        lVar35 = -1;
        do {
          lVar35 = lVar35 + 1;
        } while (*(char *)((longlong)(int)*puVar10 * 0x188 + param_3 + lVar35) != '\0');
        FUN_18015ba30(local_230);
        _Buf2 = (undefined8 *)FUN_180455f70(local_1b0,local_230);
        uVar33 = 1;
        local_4c8 = 1;
        psVar1 = _Buf2 + 2;
        if (0xf < (ulonglong)_Buf2[3]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        pauVar15 = (undefined1 (*) [16])local_140;
        if (0xf < local_128) {
          pauVar15 = local_140[0];
        }
        if ((local_130 == *psVar1) &&
           ((local_130 == 0 || (iVar7 = memcmp(pauVar15,_Buf2,local_130), iVar7 == 0))))
        goto LAB_180456ae9;
        bVar37 = false;
      }
      if (uVar33 != 0) {
        uVar33 = 0;
        local_4c8 = 0;
        FUN_18015c010();
      }
      uVar29 = uVar29 + 1;
      iVar7 = *(int *)(param_3 + 0xc44);
    } while ((int)uVar29 < iVar7);
  }
  if ((bVar37) || (7 < iVar7)) {
    local_4c4 = 0;
  }
  else {
    local_4c4 = 1;
  }
  iVar7 = (uint)local_4c4 + iVar7;
  local_2a8 = local_140;
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar26 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  pcVar11 = "##card_menu";
  cVar6 = '#';
  uVar29 = uVar26;
  do {
    pcVar11 = pcVar11 + 1;
    if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar29 = uVar26;
    }
    else {
      uVar29 = crc32(uVar29,cVar6);
    }
    cVar6 = *pcVar11;
  } while (cVar6 != '\0');
  uVar29 = ~uVar29;
  local_4b0 = uVar29;
  local_498 = iVar7;
  local_2b0 = param_3;
  if (*(uint *)(*plVar2 + 0x1534) == uVar29) {
    FUN_1804cf810(uVar29,0xb,"##card_menu");
  }
  iVar36 = 0;
  auVar50 = ZEXT864(0);
  auVar45 = ZEXT1664(_DAT_18086d970);
  uVar26 = 0xbf800000;
  if (0 < iVar7) {
    auVar55 = ZEXT464(0x40c00000);
    auVar57 = ZEXT464(0x4157851f);
    auVar53 = ZEXT464(0x3f2e147b);
    do {
      fVar40 = 28.0;
      fVar38 = 147.5;
      fVar42 = 47.82;
      fVar47 = 36.4;
      local_4c0[0] = *(uint *)(param_3 + 0xc44);
      if ((iVar36 < (int)local_4c0[0]) && (iVar36 == *(int *)(param_3 + 0xc40))) {
        uVar29 = 1;
      }
      else {
        uVar29 = 0;
      }
      lVar35 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      uVar8 = FUN_1804c2670(lVar35,iVar36);
      piVar32 = (int *)(lVar35 + 0x108);
      iVar7 = *(int *)(lVar35 + 0x10c);
      if (*piVar32 == iVar7) {
        iVar34 = *piVar32 + 1;
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        if (iVar34 < iVar7) {
          iVar34 = iVar7;
        }
        FUN_1804d14d0(piVar32,iVar34);
      }
      *(undefined4 *)(*(longlong *)(lVar35 + 0x110) + (longlong)*piVar32 * 4) = uVar8;
      *piVar32 = *piVar32 + 1;
      fVar42 = (float)iVar36 * fVar47 + fVar42;
      fVar47 = auVar49._0_4_;
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar42 * DAT_180b0a41c + fVar47)),1);
      local_144 = auVar43._0_4_ + local_260[1];
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar38 + fVar47)),1);
      local_148 = auVar43._0_4_ + *local_260;
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar42 + fVar40) * DAT_180b0a41c + fVar47)),
                             1);
      local_14c = auVar43._0_4_ + local_260[1];
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 357.5 + fVar47)),1);
      local_150 = auVar43._0_4_ + *local_260;
      fVar42 = (local_14c + local_144) * fVar47;
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_150 - DAT_180b0a41c * 15.0) + fVar47))
                             ,1);
      local_4a8 = auVar43._0_4_;
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_4a8 - DAT_180b0a41c * 12.0) + fVar47))
                             ,1);
      auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 17.136002 + fVar47)),1);
      local_4b8 = auVar43._0_4_ - auVar48._0_4_;
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.574 + fVar47)),1);
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar42 - auVar43._0_4_ * fVar47) + fVar47)),
                             1);
      local_4b4 = auVar43._0_4_;
      if (iVar36 == 0) {
        fVar47 = local_4a8 - DAT_180b0a41c * 9.0;
      }
      else {
        fVar47 = local_4b8 - DAT_180b0a41c * 4.0;
      }
      plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      uVar27 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
      pcVar11 = "#card";
      cVar6 = '#';
      uVar26 = uVar27;
      do {
        if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
          pcVar11 = pcVar11 + 2;
          uVar26 = uVar27;
        }
        else {
          uVar26 = crc32(uVar26,cVar6);
        }
        cVar6 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar6 != '\0');
      uVar26 = ~uVar26;
      local_4a4 = fVar42;
      if (*(uint *)(*plVar2 + 0x1534) == uVar26) {
        FUN_1804cf810(uVar26,0xb,&DAT_180829a78);
      }
      local_4e8 = (float)CONCAT31(local_4e8._1_3_,1);
      local_478 = fVar47;
      local_474 = local_14c;
      puVar12 = (undefined2 *)FUN_1804aad60(local_2b8,uVar26,&local_148,&local_478);
      local_4ac = CONCAT22(local_4ac._2_2_,*puVar12);
      local_4c2 = *(char *)(puVar12 + 1);
      lVar35 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
      lVar16 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      if ((lVar35 == 0) || (lVar35 != lVar16)) {
LAB_180456fcc:
        uVar27 = 0;
      }
      else {
        cVar25 = '\0';
        lVar17 = DAT_180bb8ae8;
        cVar6 = FUN_1804b7ab0(lVar35);
        if ((cVar6 == '\0') ||
           (((*(int *)(lVar17 + 0x1550) != 0 && (*(char *)(lVar17 + 0x155f) == cVar25)) &&
            (*(int *)(lVar17 + 0x1550) != *(int *)(lVar35 + 0x8c))))) goto LAB_180456fcc;
        auVar43 = vmaxss_avx(ZEXT416((uint)local_144),ZEXT416(*(uint *)(lVar16 + 0x26c)));
        auVar51 = vminss_avx(ZEXT416((uint)local_14c),ZEXT416(*(uint *)(lVar16 + 0x274)));
        auVar52 = vminss_avx(ZEXT416((uint)local_150),ZEXT416(*(uint *)(lVar16 + 0x270)));
        auVar48 = vmaxss_avx(ZEXT416((uint)local_148),ZEXT416(*(uint *)(lVar16 + 0x268)));
        if (*(float *)(lVar17 + 0x110) < auVar48._0_4_ - *(float *)(lVar17 + 0xcec))
        goto LAB_180456fcc;
        if (((*(float *)(lVar17 + 0x114) < auVar43._0_4_ - *(float *)(lVar17 + 0xcf0)) ||
            (auVar52._0_4_ + *(float *)(lVar17 + 0xcec) <= *(float *)(lVar17 + 0x110))) ||
           (auVar51._0_4_ + *(float *)(lVar17 + 0xcf0) <= *(float *)(lVar17 + 0x114)))
        goto LAB_180456fcc;
        uVar27 = 1;
      }
      auVar43 = vpcmpeqd_avx(ZEXT416(uVar27),ZEXT416(0));
      auVar43 = vblendvps_avx(auVar45._0_16_,auVar50._0_16_,auVar43);
      fVar38 = (float)FUN_1804aaa10(uVar26 + 1,auVar43._0_8_,0x41900000);
      auVar43 = vpcmpeqd_avx(ZEXT416(uVar29),ZEXT416(0));
      auVar43 = vblendvps_avx(auVar45._0_16_,auVar50._0_16_,auVar43);
      auVar41._0_8_ = FUN_1804aaa10(uVar26 + 2,auVar43._0_8_,0x41900000);
      auVar41._8_56_ = extraout_var;
      auVar44 = ZEXT1664(auVar41._0_16_);
      auVar43 = vmaxss_avx(auVar41._0_16_,ZEXT416((uint)(fVar38 * 0.55)));
      fVar47 = auVar50._0_4_;
      if (fVar47 <= auVar43._0_4_) {
        auVar43 = vminss_avx(auVar45._0_16_,auVar43);
        fVar47 = auVar43._0_4_;
      }
      uVar26 = 0;
      uVar29 = 0;
      do {
        fVar40 = (float)(DAT_1808da488 >> (uVar29 & 0x1f) & 0xff);
        uVar26 = uVar26 | (int)(longlong)
                               (((float)(DAT_1808da470 >> (uVar29 & 0x1f) & 0xff) - fVar40) * fVar47
                                + fVar40 + auVar49._0_4_) << (uVar29 & 0x1f);
        uVar29 = uVar29 + 8;
      } while ((int)uVar29 < 0x20);
      local_4e8 = auVar55._0_4_ * DAT_180b0a41c;
      local_4e0 = (char *)((ulonglong)local_4e0 & 0xffffffff00000000);
      FUN_1804df870(local_460,&local_148,&local_150,uVar26);
      sVar5 = local_130;
      if (iVar36 == 0) {
        local_1e0 = 0;
        uStack_1d8 = 0xf;
        local_1f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar43[0xf] = 0;
        auVar43._0_15_ = local_1f0._1_15_;
        local_1f0 = auVar43 << 8;
        pauVar15 = &local_1f0;
        uVar33 = uVar33 | 2;
        pauVar14 = (undefined1 (*) [16])0x0;
      }
      else {
        if (iVar36 < (int)local_4c0[0]) {
          local_4a0[0] = iVar36;
          local_488[0] = *(int *)(param_3 + 0xc44) + -1;
          local_4ac = 0;
          piVar32 = &local_4ac;
          if (-1 < iVar36) {
            piVar32 = local_4a0;
          }
          piVar13 = local_488;
          if (iVar36 <= local_488[0]) {
            piVar13 = piVar32;
          }
          local_210 = (undefined1  [16])0x0;
          local_200 = 0;
          local_1f8 = 0;
          lVar35 = -1;
          do {
            lVar35 = lVar35 + 1;
          } while (*(char *)((longlong)*piVar13 * 0x188 + param_3 + lVar35) != '\0');
          FUN_18015ba30(local_210);
          pauVar15 = (undefined1 (*) [16])FUN_180455f70(local_190,local_210);
          uVar33 = uVar33 | 8;
        }
        else {
          local_280 = (undefined1  [16])0x0;
          local_270 = (undefined1  [16])0x0;
          pauVar15 = (undefined1 (*) [16])local_140;
          if (0xf < local_128) {
            pauVar15 = local_140[0];
          }
          if (0x7fffffffffffffff < local_130) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (local_130 < 0x10) {
            local_270._8_8_ = 0xf;
            local_270._0_8_ = local_130;
            local_280 = *pauVar15;
          }
          else {
            uVar22 = local_130 | 0xf;
            if (uVar22 < 0x8000000000000000) {
              if (uVar22 < 0x16) {
                uVar22 = 0x16;
              }
            }
            else {
              uVar22 = 0x7fffffffffffffff;
            }
            uVar39 = FUN_18015bca0(uVar22 + 1);
            local_280._0_8_ = uVar39;
            local_270._8_8_ = uVar22;
            local_270._0_8_ = sVar5;
            FUN_18063aed0(uVar39,pauVar15,sVar5 + 1);
          }
          pauVar15 = &local_280;
          uVar33 = uVar33 | 4;
        }
        local_4c8 = uVar33;
        local_2a0 = (undefined1  [16])0x0;
        local_290 = (undefined1  [16])0x0;
        uVar22 = *(ulonglong *)pauVar15[1];
        if (0xf < *(ulonglong *)(pauVar15[1] + 8)) {
          pauVar15 = *(undefined1 (**) [16])*pauVar15;
        }
        if (0x7fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (uVar22 < 0x10) {
          local_290._8_8_ = 0xf;
          local_290._0_8_ = uVar22;
          pauVar14 = *(undefined1 (**) [16])*pauVar15;
          local_2a0 = *pauVar15;
        }
        else {
          uVar31 = uVar22 | 0xf;
          if (uVar31 < 0x8000000000000000) {
            if (uVar31 < 0x16) {
              uVar31 = 0x16;
            }
          }
          else {
            uVar31 = 0x7fffffffffffffff;
          }
          pauVar14 = (undefined1 (*) [16])FUN_18015bca0(uVar31 + 1);
          local_2a0._0_8_ = pauVar14;
          local_290._8_8_ = uVar31;
          local_290._0_8_ = uVar22;
          FUN_18063aed0(pauVar14,pauVar15,uVar22 + 1);
        }
        pauVar15 = &local_2a0;
        uVar33 = uVar33 | 0x10;
      }
      local_4c8 = uVar33;
      local_120 = (undefined1  [16])0x0;
      local_110 = 0;
      local_108 = 0;
      uVar22 = *(ulonglong *)pauVar15[1];
      if (0xf < *(ulonglong *)(pauVar15[1] + 8)) {
        pauVar15 = pauVar14;
      }
      if (0x7fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar22 < 0x10) {
        local_110 = uVar22;
        local_108 = 0xf;
        local_120 = *pauVar15;
      }
      else {
        uVar31 = uVar22 | 0xf;
        if (uVar31 < 0x8000000000000000) {
          if (uVar31 < 0x16) {
            uVar31 = 0x16;
          }
        }
        else {
          uVar31 = 0x7fffffffffffffff;
        }
        uVar39 = FUN_18015bca0(uVar31 + 1);
        local_120._0_8_ = uVar39;
        local_110 = uVar22;
        local_108 = uVar31;
        FUN_18063aed0(uVar39,pauVar15,uVar22 + 1);
      }
      if ((uVar33 & 0x10) != 0) {
        uVar33 = uVar33 & 0xffffffef;
        local_4c8 = uVar33;
        FUN_18015c010(local_2a0);
      }
      if ((uVar33 & 8) != 0) {
        uVar33 = uVar33 & 0xfffffff7;
        local_4c8 = uVar33;
        FUN_18015c010(local_190);
      }
      if ((uVar33 & 4) != 0) {
        uVar33 = uVar33 & 0xfffffffb;
        local_4c8 = uVar33;
        FUN_18015c010(local_280);
      }
      auVar43 = auVar44._0_16_;
      if ((uVar33 & 2) != 0) {
        uVar33 = uVar33 & 0xfffffffd;
        local_4c8 = uVar33;
        FUN_18015c010(local_1f0);
        auVar43 = auVar44._0_16_;
      }
      param_3 = local_258;
      lVar35 = local_460;
      auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
      auVar48 = vmaxss_avx(auVar45._0_16_,auVar48);
      auVar41 = ZEXT1664(auVar48);
      fVar47 = auVar49._0_4_;
      auVar43 = vmaxss_avx(auVar43,ZEXT416((uint)(fVar38 * fVar47)));
      auVar51 = auVar50._0_16_;
      if (auVar50._0_4_ <= auVar43._0_4_) {
        auVar51 = vminss_avx(auVar45._0_16_,auVar43);
      }
      uVar26 = 0;
      uVar29 = 0;
      do {
        fVar38 = (float)(DAT_1808da484 >> (uVar29 & 0x1f) & 0xff);
        uVar26 = uVar26 | (int)(longlong)
                               (((float)(0xff4e403eU >> (uVar29 & 0x1f) & 0xff) - fVar38) *
                                auVar51._0_4_ + fVar38 + fVar47) << (uVar29 & 0x1f);
        uVar29 = uVar29 + 8;
      } while ((int)uVar29 < 0x20);
      fVar47 = auVar48._0_4_ * fVar47;
      local_470 = local_150 - fVar47;
      local_46c = local_14c - fVar47;
      local_468 = fVar47 + local_148;
      local_464 = fVar47 + local_144;
      auVar43 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * auVar55._0_4_ - fVar47)),auVar50._0_16_);
      local_4e8 = 0.0;
      FUN_1804dc420(local_460,&local_468,&local_470,auVar43._0_8_);
      local_4d8 = CONCAT44(local_4d8._4_4_,0x7f7fffff);
      local_4e0 = (char *)CONCAT44(local_4e0._4_4_,0x200);
      local_4e8 = auVar41._0_4_;
      FUN_1804d9a00(lVar35,*(undefined8 *)(lVar35 + 0x58),*(undefined4 *)(lVar35 + 0x50),uVar26);
      *(undefined4 *)(lVar35 + 0x50) = 0;
      if (iVar36 == 0) {
        local_1d0 = (undefined1  [16])0x0;
        auStack_1c0 = (undefined1  [16])0x0;
        FUN_18015ba30(local_1d0,"Global",6);
        auVar54 = auVar55._0_16_;
        auVar52 = auVar53._0_16_;
        auVar51 = auVar50._0_16_;
        auVar43 = auVar45._0_16_;
        auVar48 = auVar49._0_16_;
        auVar56 = auVar57._0_16_;
        pauVar15 = &local_1d0;
        uVar33 = uVar33 | 0x20;
      }
      else {
        pauVar15 = (undefined1 (*) [16])FUN_1804560c0(local_170,local_120);
        auVar54 = auVar55._0_16_;
        auVar52 = auVar53._0_16_;
        auVar51 = auVar50._0_16_;
        auVar43 = auVar45._0_16_;
        auVar48 = auVar49._0_16_;
        auVar56 = auVar57._0_16_;
        uVar33 = uVar33 | 0x40;
      }
      local_4c8 = uVar33;
      local_100 = (undefined1  [16])0x0;
      auStack_f0 = (undefined1  [16])0x0;
      local_100 = *pauVar15;
      auStack_f0 = pauVar15[1];
      (*pauVar15)[0] = 0;
      *(undefined8 *)pauVar15[1] = 0;
      *(undefined8 *)(pauVar15[1] + 8) = 0xf;
      if ((uVar33 & 0x40) != 0) {
        uVar33 = uVar33 & 0xffffffbf;
        auVar49 = ZEXT1664(auVar43);
        auVar50 = ZEXT1664(auVar48);
        auVar45 = ZEXT1664(auVar51);
        auVar53 = ZEXT1664(auVar52);
        auVar55 = ZEXT1664(auVar54);
        auVar57 = ZEXT1664(auVar56);
        local_4c8 = uVar33;
        FUN_18015c010(local_170);
        auVar54 = auVar55._0_16_;
        auVar52 = auVar53._0_16_;
        auVar51 = auVar45._0_16_;
        auVar43 = auVar49._0_16_;
        auVar48 = auVar50._0_16_;
        auVar56 = auVar57._0_16_;
      }
      if ((uVar33 & 0x20) != 0) {
        uVar33 = uVar33 & 0xffffffdf;
        auVar49 = ZEXT1664(auVar43);
        auVar50 = ZEXT1664(auVar48);
        auVar45 = ZEXT1664(auVar51);
        auVar53 = ZEXT1664(auVar52);
        auVar55 = ZEXT1664(auVar54);
        auVar57 = ZEXT1664(auVar56);
        local_4c8 = uVar33;
        FUN_18015c010(local_1d0);
        auVar54 = auVar55._0_16_;
        auVar52 = auVar53._0_16_;
        auVar51 = auVar45._0_16_;
        auVar43 = auVar49._0_16_;
        auVar48 = auVar50._0_16_;
        auVar56 = auVar57._0_16_;
      }
      pcVar11 = local_100;
      if (0xf < (ulonglong)auStack_f0._8_8_) {
        pcVar11 = (char *)local_100._0_8_;
      }
      uVar8 = DAT_180b0a410;
      if ((int)local_4c0[0] <= iVar36) {
        uVar8 = DAT_1808da474;
      }
      fVar47 = DAT_180b0a41c * 0.3;
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(DAT_180b0a41c * auVar56._0_4_ + auVar48._0_4_)),1);
      auVar3 = vmaxss_avx(auVar43,auVar3);
      auVar41 = ZEXT1664(auVar3);
      uVar26 = 0xbf800000;
      auVar45 = ZEXT1664(auVar43);
      auVar49 = ZEXT1664(auVar48);
      auVar50 = ZEXT1664(auVar51);
      auVar53 = ZEXT1664(auVar52);
      auVar55 = ZEXT1664(auVar54);
      auVar57 = ZEXT1664(auVar56);
      lVar16 = FUN_1804e97d0(local_490);
      lVar17 = FUN_1804e95f0(lVar16,0x48);
      fVar38 = auVar49._0_4_;
      if (lVar17 == 0) {
        fVar40 = auVar41._0_4_ * fVar38;
      }
      else {
        fVar40 = (*(float *)(lVar17 + 0x14) - *(float *)(lVar17 + 0xc)) *
                 (auVar41._0_4_ / *(float *)(lVar16 + 0x14));
      }
      auVar43 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.5 + local_148 + fVar38)),1
                            );
      local_458 = auVar43._0_4_;
      auVar43 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)((fVar42 - fVar40 * fVar38) + fVar47 + fVar38)),1);
      local_454 = auVar43._0_4_;
      local_4d8 = 0;
      local_4e8 = (float)uVar8;
      local_4e0 = pcVar11;
      uVar39 = FUN_180463450(lVar35,local_490,auVar57._0_8_,&local_458);
      uVar27 = local_4c0[0];
      if (0 < iVar36) {
        local_4e8 = auVar53._0_4_;
        if (iVar36 < (int)local_4c0[0]) {
          uVar39 = FUN_1804aaf40("##use",(longlong)iVar36 * 0x188 + 0x184 + param_3,&local_4b8,1);
        }
        else {
          local_4c3 = 0;
          cVar6 = FUN_1804aaf40("##use",&local_4c3,&local_4b8,1);
          uVar39 = extraout_XMM0_Qa;
          if (cVar6 != '\0') {
            uVar39 = FUN_1804583b0(&local_2b0);
          }
        }
      }
      cVar6 = FUN_1804ab580(uVar39,&local_4a8,1);
      uVar29 = local_4b0;
      if (cVar6 != '\0') {
        *(int *)(local_480 + 0x30) = iVar36;
        FUN_1804c7740(local_4b0,0);
        plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
        lVar35 = plVar2[0x38];
        auVar41 = ZEXT464(*(uint *)(DAT_180bb8ae8 + 0x110));
        uVar22 = (ulonglong)*(uint *)(DAT_180bb8ae8 + 0x110);
        uVar28 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
        pcVar11 = "#menu_x";
        cVar6 = '#';
        uVar30 = uVar28;
        do {
          if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
            pcVar11 = pcVar11 + 2;
            uVar30 = uVar28;
          }
          else {
            uVar30 = crc32(uVar30,cVar6);
          }
          cVar6 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar6 != '\0');
        uVar30 = ~uVar30;
        if (*(uint *)(*plVar2 + 0x1534) == uVar30) {
          FUN_1804cf810(uVar30,0xb,&DAT_180829b20);
          uVar22 = auVar41._0_8_;
        }
        FUN_1804b1700(lVar35,uVar30,uVar22);
        plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
        uVar28 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
        pcVar11 = "#menu_y";
        cVar6 = '#';
        uVar30 = uVar28;
        do {
          if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
            pcVar11 = pcVar11 + 2;
            uVar30 = uVar28;
          }
          else {
            uVar30 = crc32(uVar30,cVar6);
          }
          cVar6 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar6 != '\0');
        uVar30 = ~uVar30;
        if (*(uint *)(*plVar2 + 0x1534) == uVar30) {
          FUN_1804cf810(uVar30,0xb,&DAT_180829b10);
        }
        FUN_1804b1700(lVar35,uVar30);
      }
      if (local_4c2 != '\0') {
        if (iVar36 < (int)uVar27) {
          *(int *)(param_3 + 0xc40) = iVar36;
        }
        else {
          FUN_1804583b0(&local_2b0);
        }
      }
      iVar7 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar7 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar7 + -1;
      }
      FUN_18015c010(local_100);
      FUN_18015c010(local_120);
      iVar36 = iVar36 + 1;
    } while (iVar36 < local_498);
  }
  lVar16 = local_480;
  uVar46 = 0x3f0ccccd;
  uVar8 = 0x3e800000;
  iVar34 = 8;
  iVar7 = *(int *)(local_480 + 0x30);
  lVar35 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  iVar36 = iVar7;
  if (iVar7 < 0) {
    iVar36 = 0;
  }
  uVar9 = FUN_1804c2670(lVar35,iVar36);
  piVar32 = (int *)(lVar35 + 0x108);
  iVar36 = *(int *)(lVar35 + 0x10c);
  if (*piVar32 == iVar36) {
    iVar20 = *piVar32 + 1;
    if (iVar36 != 0) {
      iVar34 = iVar36 + iVar36 / 2;
    }
    if (iVar20 < iVar34) {
      iVar20 = iVar34;
    }
    FUN_1804d14d0(piVar32,iVar20);
  }
  *(undefined4 *)(*(longlong *)(lVar35 + 0x110) + (longlong)*piVar32 * 4) = uVar9;
  *piVar32 = *piVar32 + 1;
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  piVar32 = (int *)plVar2[0x38];
  uVar27 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  pcVar11 = "#menu_y";
  cVar6 = '#';
  uVar33 = uVar27;
  do {
    if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar33 = uVar27;
    }
    else {
      uVar33 = crc32(uVar33,cVar6);
    }
    cVar6 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar6 != '\0');
  uVar33 = ~uVar33;
  if (*(uint *)(*plVar2 + 0x1534) == uVar33) {
    FUN_1804cf810(uVar33,0xb,&DAT_180829b10);
  }
  puVar21 = *(uint **)(piVar32 + 2);
  uVar22 = (longlong)*piVar32;
  while (uVar31 = uVar22, uVar31 != 0) {
    uVar22 = uVar31 >> 1;
    if (puVar21[uVar22 * 4] < uVar33) {
      puVar21 = puVar21 + uVar22 * 4 + 4;
      uVar22 = uVar31 + (-1 - uVar22);
    }
  }
  if ((puVar21 == *(uint **)(piVar32 + 2) + (longlong)*piVar32 * 4) || (*puVar21 != uVar33)) {
    auVar49 = ZEXT1664(auVar50._0_16_);
  }
  else {
    auVar49 = ZEXT464(puVar21[2]);
  }
  uVar9 = auVar49._0_4_;
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar27 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  pcVar11 = "#menu_x";
  cVar6 = '#';
  uVar33 = uVar27;
  do {
    if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar33 = uVar27;
    }
    else {
      uVar33 = crc32(uVar33,cVar6);
    }
    cVar6 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar6 != '\0');
  uVar33 = ~uVar33;
  if (*(uint *)(*plVar2 + 0x1534) == uVar33) {
    FUN_1804cf810(uVar33,0xb,&DAT_180829b20);
    uVar9 = auVar49._0_4_;
  }
  puVar21 = *(uint **)(piVar32 + 2);
  uVar22 = (longlong)*piVar32;
  while (uVar31 = uVar22, uVar31 != 0) {
    uVar22 = uVar31 >> 1;
    if (puVar21[uVar22 * 4] < uVar33) {
      puVar21 = puVar21 + uVar22 * 4 + 4;
      uVar22 = uVar31 + (-1 - uVar22);
    }
  }
  if ((puVar21 == *(uint **)(piVar32 + 2) + (longlong)*piVar32 * 4) || (*puVar21 != uVar33)) {
    local_4b8 = auVar50._0_4_;
  }
  else {
    local_4b8 = (float)puVar21[2];
  }
  iVar36 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  local_4b4 = (float)uVar9;
  if (iVar36 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar36 + -1;
  }
  cVar6 = FUN_1804a8ab0(uVar29,&local_4b8,&local_4b8,DAT_180b0a41c * 170.0);
  if (cVar6 == '\0') goto LAB_18045831b;
  if (iVar7 == 0) {
    cVar6 = FUN_18048b0e0("Reset",&DAT_180829a4c,1);
    if (cVar6 != '\0') {
      local_448[0] = CONCAT44(uVar8,(int)local_448[0]) & 0xffffffffffff0000;
      local_448[1] = 0x3eb333333e8a3d71;
      uStack_3a4 = auVar45._0_4_;
      uStack_438 = CONCAT44(uVar46,uStack_3a4);
      uStack_430 = CONCAT26(uStack_430._6_2_,0x3eb33333);
      local_428 = 0x3f8000003f800000;
      uStack_420 = 0x3f8000003f800000;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      uStack_40a = 0;
      uStack_408 = 0;
      uStack_407 = 0;
      uStack_400 = 0;
      uStack_3ff = 0;
      uStack_3f8 = 0;
      uStack_3f7 = 0;
      uStack_3ef = 0;
      uStack_3e7 = 0;
      uStack_3df = 0;
      local_3d7 = 0;
      uStack_3cf = 0;
      uStack_3c7 = 0;
      uStack_3bf = 0;
      local_3b7 = 0;
      uStack_3b5 = 0;
      uStack_3b4 = auVar45._0_5_;
      uStack_3af = auVar45._5_8_;
      uStack_3a7 = auVar45._13_3_;
      uStack_3a0 = 0;
      uStack_397 = auVar45._5_2_;
      uStack_395 = auVar45[7];
      uStack_394 = auVar45._8_8_;
      uStack_38c = 0;
      uStack_388 = auVar50._0_4_;
      local_384 = uStack_3a4;
      local_380 = uStack_3a4;
      local_37c = local_37c & 0xffffff00;
      uStack_378 = 0x3f0ccccd3f000000;
      uStack_370 = 0x3f266666;
      uStack_36c = 0x3f800000;
      uStack_368 = 0x453b800043fa0000;
      _uStack_360 = 0x3ecccccd40000000;
      local_358 = CONCAT44(uStack_388,(int)local_358) & 0xffffffffffffff00;
      uStack_350 = CONCAT44(uStack_3a4,(int)uStack_350) & 0xffffffffffffff00;
      uStack_348 = CONCAT44(uStack_3a4,uStack_3a4);
      uStack_340 = (uint5)uStack_388;
      uStack_338 = 0;
      uStack_334 = uStack_3a4;
      uStack_330 = 0;
      uStack_32c = uStack_3a4;
      local_328 = uStack_388;
      uStack_324 = uStack_324 & 0xffffff00;
      uStack_320 = uVar26;
      uStack_31c = 0;
      uStack_318 = uStack_388;
      uStack_314 = uStack_388;
      uStack_310 = 0;
      local_308 = 0x40200000;
      uStack_304 = uStack_3a4;
      uStack_300 = CONCAT31(uStack_300._1_3_,1);
      uStack_2fc = uStack_3a4;
      uStack_2f8 = 0x3f59999a;
      uStack_2f4 = 0x3f19999a;
      uStack_2f0 = (uint5)uStack_3a4;
      local_2e8 = uStack_3a4;
      lVar35 = 2;
      puVar19 = local_448;
      puVar18 = (ulonglong *)(param_3 + 0x20);
      do {
        puVar23 = puVar18;
        puVar24 = puVar19;
        uVar22 = puVar24[1];
        uVar31 = puVar24[2];
        uVar4 = puVar24[3];
        *puVar23 = *puVar24;
        puVar23[1] = uVar22;
        puVar23[2] = uVar31;
        puVar23[3] = uVar4;
        uVar22 = puVar24[5];
        uVar31 = puVar24[6];
        uVar4 = puVar24[7];
        puVar23[4] = puVar24[4];
        puVar23[5] = uVar22;
        puVar23[6] = uVar31;
        puVar23[7] = uVar4;
        uVar22 = puVar24[9];
        uVar31 = puVar24[10];
        uVar4 = puVar24[0xb];
        puVar23[8] = puVar24[8];
        puVar23[9] = uVar22;
        puVar23[10] = uVar31;
        puVar23[0xb] = uVar4;
        uVar22 = puVar24[0xd];
        puVar23[0xc] = puVar24[0xc];
        puVar23[0xd] = uVar22;
        uVar22 = puVar24[0xf];
        puVar23[0xe] = puVar24[0xe];
        puVar23[0xf] = uVar22;
        lVar35 = lVar35 + -1;
        puVar19 = puVar24 + 0x10;
        puVar18 = puVar23 + 0x10;
      } while (lVar35 != 0);
      uVar22 = puVar24[0x11];
      uVar31 = puVar24[0x12];
      uVar4 = puVar24[0x13];
      puVar23[0x10] = puVar24[0x10];
      puVar23[0x11] = uVar22;
      puVar23[0x12] = uVar31;
      puVar23[0x13] = uVar4;
      uVar22 = puVar24[0x15];
      uVar31 = puVar24[0x16];
      uVar4 = puVar24[0x17];
      puVar23[0x14] = puVar24[0x14];
      puVar23[0x15] = uVar22;
      puVar23[0x16] = uVar31;
      puVar23[0x17] = uVar4;
      uVar22 = puVar24[0x19];
      uVar31 = puVar24[0x1a];
      uVar4 = puVar24[0x1b];
      puVar23[0x18] = puVar24[0x18];
      puVar23[0x19] = uVar22;
      puVar23[0x1a] = uVar31;
      puVar23[0x1b] = uVar4;
      *(int *)(puVar23 + 0x1c) = (int)puVar24[0x1c];
      uStack_39c = uStack_3b4;
      goto LAB_180458310;
    }
  }
  else if ((iVar7 < 1) || (*(int *)(param_3 + 0xc44) <= iVar7)) {
    if ((local_4c4 != 0) &&
       ((iVar7 == *(int *)(param_3 + 0xc44) &&
        (cVar6 = FUN_18048b0e0("Add map",&DAT_180829a38,1), cVar6 != '\0')))) {
      FUN_1804583b0(&local_2b0);
      goto LAB_180458310;
    }
  }
  else {
    cVar6 = FUN_18048b0e0("Copy from Global",&DAT_180829a4c,1);
    if (cVar6 != '\0') {
      lVar17 = 2;
      lVar35 = 2;
      puVar19 = (ulonglong *)(param_3 + 0x20);
      puVar18 = local_448;
      do {
        puVar23 = puVar18;
        puVar24 = puVar19;
        uVar22 = puVar24[1];
        uVar31 = puVar24[2];
        uVar4 = puVar24[3];
        *puVar23 = *puVar24;
        puVar23[1] = uVar22;
        puVar23[2] = uVar31;
        puVar23[3] = uVar4;
        uVar22 = puVar24[5];
        uVar31 = puVar24[6];
        uVar4 = puVar24[7];
        puVar23[4] = puVar24[4];
        puVar23[5] = uVar22;
        puVar23[6] = uVar31;
        puVar23[7] = uVar4;
        uVar22 = puVar24[9];
        uVar31 = puVar24[10];
        uVar4 = puVar24[0xb];
        puVar23[8] = puVar24[8];
        puVar23[9] = uVar22;
        puVar23[10] = uVar31;
        puVar23[0xb] = uVar4;
        uVar22 = puVar24[0xd];
        puVar23[0xc] = puVar24[0xc];
        puVar23[0xd] = uVar22;
        uVar22 = puVar24[0xf];
        puVar23[0xe] = puVar24[0xe];
        puVar23[0xf] = uVar22;
        lVar35 = lVar35 + -1;
        puVar19 = puVar24 + 0x10;
        puVar18 = puVar23 + 0x10;
      } while (lVar35 != 0);
      uVar22 = puVar24[0x11];
      uVar31 = puVar24[0x12];
      uVar4 = puVar24[0x13];
      puVar23[0x10] = puVar24[0x10];
      puVar23[0x11] = uVar22;
      puVar23[0x12] = uVar31;
      puVar23[0x13] = uVar4;
      uVar22 = puVar24[0x15];
      uVar31 = puVar24[0x16];
      uVar4 = puVar24[0x17];
      puVar23[0x14] = puVar24[0x14];
      puVar23[0x15] = uVar22;
      puVar23[0x16] = uVar31;
      puVar23[0x17] = uVar4;
      uVar22 = puVar24[0x19];
      uVar31 = puVar24[0x1a];
      uVar4 = puVar24[0x1b];
      puVar23[0x18] = puVar24[0x18];
      puVar23[0x19] = uVar22;
      puVar23[0x1a] = uVar31;
      puVar23[0x1b] = uVar4;
      *(int *)(puVar23 + 0x1c) = (int)puVar24[0x1c];
      puVar19 = local_448;
      puVar18 = (ulonglong *)((longlong)iVar7 * 0x188 + 0x20 + param_3);
      do {
        puVar23 = puVar18;
        puVar24 = puVar19;
        uVar22 = puVar24[1];
        uVar31 = puVar24[2];
        uVar4 = puVar24[3];
        *puVar23 = *puVar24;
        puVar23[1] = uVar22;
        puVar23[2] = uVar31;
        puVar23[3] = uVar4;
        uVar22 = puVar24[5];
        uVar31 = puVar24[6];
        uVar4 = puVar24[7];
        puVar23[4] = puVar24[4];
        puVar23[5] = uVar22;
        puVar23[6] = uVar31;
        puVar23[7] = uVar4;
        uVar22 = puVar24[9];
        uVar31 = puVar24[10];
        uVar4 = puVar24[0xb];
        puVar23[8] = puVar24[8];
        puVar23[9] = uVar22;
        puVar23[10] = uVar31;
        puVar23[0xb] = uVar4;
        uVar22 = puVar24[0xd];
        puVar23[0xc] = puVar24[0xc];
        puVar23[0xd] = uVar22;
        uVar22 = puVar24[0xf];
        puVar23[0xe] = puVar24[0xe];
        puVar23[0xf] = uVar22;
        lVar17 = lVar17 + -1;
        puVar19 = puVar24 + 0x10;
        puVar18 = puVar23 + 0x10;
      } while (lVar17 != 0);
      uVar22 = puVar24[0x11];
      uVar31 = puVar24[0x12];
      uVar4 = puVar24[0x13];
      puVar23[0x10] = puVar24[0x10];
      puVar23[0x11] = uVar22;
      puVar23[0x12] = uVar31;
      puVar23[0x13] = uVar4;
      uVar22 = puVar24[0x15];
      uVar31 = puVar24[0x16];
      uVar4 = puVar24[0x17];
      puVar23[0x14] = puVar24[0x14];
      puVar23[0x15] = uVar22;
      puVar23[0x16] = uVar31;
      puVar23[0x17] = uVar4;
      uVar22 = puVar24[0x19];
      uVar31 = puVar24[0x1a];
      uVar4 = puVar24[0x1b];
      puVar23[0x18] = puVar24[0x18];
      puVar23[0x19] = uVar22;
      puVar23[0x1a] = uVar31;
      puVar23[0x1b] = uVar4;
      *(int *)(puVar23 + 0x1c) = (int)puVar24[0x1c];
      auVar45 = ZEXT1664(auVar45._0_16_);
      auVar50 = ZEXT1664(auVar50._0_16_);
      FUN_1804c7bf0();
    }
    cVar6 = FUN_18048b0e0("Delete",&DAT_180829a48);
    if (cVar6 != '\0') {
      iVar36 = *(int *)(param_3 + 0xc44);
      iVar34 = iVar7 + 1;
      lVar35 = 3;
      if (iVar34 < iVar36) {
        puVar19 = (ulonglong *)((longlong)iVar7 * 0x188 + param_3);
        do {
          lVar17 = 3;
          puVar18 = puVar19 + 0x31;
          puVar24 = local_448;
          do {
            uVar22 = puVar18[1];
            uVar31 = puVar18[2];
            uVar4 = puVar18[3];
            *puVar24 = *puVar18;
            puVar24[1] = uVar22;
            puVar24[2] = uVar31;
            puVar24[3] = uVar4;
            uVar22 = puVar18[5];
            uVar31 = puVar18[6];
            uVar4 = puVar18[7];
            puVar24[4] = puVar18[4];
            puVar24[5] = uVar22;
            puVar24[6] = uVar31;
            puVar24[7] = uVar4;
            uVar22 = puVar18[9];
            uVar31 = puVar18[10];
            uVar4 = puVar18[0xb];
            puVar24[8] = puVar18[8];
            puVar24[9] = uVar22;
            puVar24[10] = uVar31;
            puVar24[0xb] = uVar4;
            uVar22 = puVar18[0xd];
            puVar24[0xc] = puVar18[0xc];
            puVar24[0xd] = uVar22;
            puVar23 = puVar24 + 0x10;
            uVar22 = puVar18[0xf];
            puVar24[0xe] = puVar18[0xe];
            puVar24[0xf] = uVar22;
            puVar18 = puVar18 + 0x10;
            lVar17 = lVar17 + -1;
            puVar24 = puVar23;
          } while (lVar17 != 0);
          *puVar23 = *puVar18;
          puVar18 = local_448;
          lVar17 = 3;
          puVar24 = puVar19;
          do {
            uVar22 = puVar18[1];
            uVar31 = puVar18[2];
            uVar4 = puVar18[3];
            *puVar24 = *puVar18;
            puVar24[1] = uVar22;
            puVar24[2] = uVar31;
            puVar24[3] = uVar4;
            uVar22 = puVar18[5];
            uVar31 = puVar18[6];
            uVar4 = puVar18[7];
            puVar24[4] = puVar18[4];
            puVar24[5] = uVar22;
            puVar24[6] = uVar31;
            puVar24[7] = uVar4;
            uVar22 = puVar18[9];
            uVar31 = puVar18[10];
            uVar4 = puVar18[0xb];
            puVar24[8] = puVar18[8];
            puVar24[9] = uVar22;
            puVar24[10] = uVar31;
            puVar24[0xb] = uVar4;
            uVar22 = puVar18[0xd];
            puVar24[0xc] = puVar18[0xc];
            puVar24[0xd] = uVar22;
            puVar23 = puVar24 + 0x10;
            uVar22 = puVar18[0xf];
            puVar24[0xe] = puVar18[0xe];
            puVar24[0xf] = uVar22;
            puVar18 = puVar18 + 0x10;
            lVar17 = lVar17 + -1;
            puVar24 = puVar23;
          } while (lVar17 != 0);
          *puVar23 = *puVar18;
          iVar34 = iVar34 + 1;
          iVar36 = *(int *)(param_3 + 0xc44);
          puVar19 = puVar19 + 0x31;
        } while (iVar34 < iVar36);
      }
      local_448[0] = 0;
      local_448[1] = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      local_428 = CONCAT44(uVar8,(int)local_428) & 0xffffffffffff0000;
      uStack_420 = 0x3eb333333e8a3d71;
      local_37c = auVar45._0_4_;
      uStack_418 = local_37c;
      uStack_414 = uVar46;
      uStack_410 = 0x3eb33333;
      uStack_40c = 0;
      uStack_408 = 0;
      uStack_407 = 0x3f8000003f8000;
      uStack_400 = 0;
      uStack_3ff = 0x3f8000003f8000;
      uStack_3f8 = 0;
      uStack_3f7 = 0;
      uStack_3ef = 0;
      uStack_3e7 = 0;
      uStack_3df = 0;
      local_3d7 = 0;
      uStack_3cf = 0;
      uStack_3c7 = 0;
      uStack_3bf = 0;
      local_3b7 = 0;
      uStack_3b5 = 0;
      uStack_3b4 = 0;
      uStack_3af = 0;
      uStack_3a7 = 0;
      uStack_3a4 = 0;
      uStack_3a0 = 0;
      uStack_39f = 0;
      uStack_39c = 0;
      uStack_397 = 0;
      uStack_395 = 0;
      uStack_394 = auVar45._0_8_;
      uStack_38c = auVar45._8_4_;
      uStack_388 = auVar45._12_4_;
      local_384 = local_37c;
      local_380 = local_380 & 0xffffff00;
      uStack_378 = auVar45._4_8_;
      uStack_36c = 0;
      uStack_334 = auVar50._0_4_;
      uStack_368 = CONCAT44(local_37c,uStack_334);
      uStack_360 = (uint5)local_37c;
      local_358 = 0x3f0ccccd3f000000;
      uStack_350 = 0x3f8000003f266666;
      uStack_348 = 0x453b800043fa0000;
      _uStack_340 = 0x3ecccccd40000000;
      uStack_338 = uStack_338 & 0xffffff00;
      uStack_330 = 0;
      uStack_32c = local_37c;
      local_328 = local_37c;
      uStack_324 = local_37c;
      uStack_320 = uStack_334;
      uStack_31c = 0;
      uStack_318 = 0;
      uStack_314 = local_37c;
      uStack_310 = CONCAT44(local_37c,(int)uStack_310) & 0xffffffffffffff00;
      local_308 = uStack_334;
      uStack_304 = uStack_304 & 0xffffff00;
      uStack_300 = uVar26;
      uStack_2fc = uStack_2fc & 0xffffff00;
      uStack_2f8 = uStack_334;
      uStack_2f4 = uStack_334;
      _uStack_2f0 = 0;
      local_2e8 = 0x40200000;
      local_2e4 = local_37c;
      local_2e0 = 1;
      local_2dc = local_37c;
      local_2d8 = 0x3f59999a;
      local_2d4 = 0x3f19999a;
      local_2d0 = local_37c;
      local_2cc = 0;
      local_2c8 = local_37c;
      local_2c4 = 0;
      puVar19 = local_448;
      puVar18 = (ulonglong *)((longlong)iVar36 * 0x188 + -0x188 + param_3);
      do {
        uVar22 = puVar19[1];
        uVar31 = puVar19[2];
        uVar4 = puVar19[3];
        *puVar18 = *puVar19;
        puVar18[1] = uVar22;
        puVar18[2] = uVar31;
        puVar18[3] = uVar4;
        uVar22 = puVar19[5];
        uVar31 = puVar19[6];
        uVar4 = puVar19[7];
        puVar18[4] = puVar19[4];
        puVar18[5] = uVar22;
        puVar18[6] = uVar31;
        puVar18[7] = uVar4;
        uVar22 = puVar19[9];
        uVar31 = puVar19[10];
        uVar4 = puVar19[0xb];
        puVar18[8] = puVar19[8];
        puVar18[9] = uVar22;
        puVar18[10] = uVar31;
        puVar18[0xb] = uVar4;
        uVar22 = puVar19[0xd];
        puVar18[0xc] = puVar19[0xc];
        puVar18[0xd] = uVar22;
        puVar24 = puVar18 + 0x10;
        uVar22 = puVar19[0xf];
        puVar18[0xe] = puVar19[0xe];
        puVar18[0xf] = uVar22;
        puVar19 = puVar19 + 0x10;
        lVar35 = lVar35 + -1;
        puVar18 = puVar24;
      } while (lVar35 != 0);
      *puVar24 = *puVar19;
      *(int *)(param_3 + 0xc44) = *(int *)(param_3 + 0xc44) + -1;
      iVar36 = *(int *)(param_3 + 0xc40);
      uStack_370 = uStack_388;
      if (iVar36 == iVar7) {
        *(undefined4 *)(param_3 + 0xc40) = 0;
        *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
      }
      else {
        if (iVar7 < iVar36) {
          *(int *)(param_3 + 0xc40) = iVar36 + -1;
        }
        *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
      }
LAB_180458310:
      FUN_1804c7bf0();
    }
  }
  FUN_1804aeac0();
LAB_18045831b:
  FUN_18015c010(local_140);
}



