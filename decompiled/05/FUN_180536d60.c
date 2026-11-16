// FUN_180536d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180536d60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180536d60(void)

{
  size_t *psVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  uint *puVar5;
  size_t _Size;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  ulonglong *puVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *_Buf1;
  ulonglong *puVar21;
  uint *puVar22;
  undefined1 *puVar23;
  float *pfVar24;
  undefined8 ****ppppuVar25;
  char cVar26;
  undefined8 *_Buf2;
  char *pcVar27;
  undefined8 *puVar28;
  char ****ppppcVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  ulonglong uVar32;
  byte *pbVar33;
  longlong lVar34;
  longlong *plVar35;
  byte *pbVar36;
  char *pcVar37;
  char ****ppppcVar38;
  longlong lVar39;
  size_t sVar40;
  uint *puVar41;
  bool bVar42;
  bool bVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auStack_2d8 [32];
  ulonglong local_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  uint local_298;
  longlong *local_290;
  uint local_288 [4];
  undefined1 local_278 [16];
  longlong *plStack_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong local_250;
  undefined1 local_248 [16];
  longlong *plStack_238;
  ulonglong uStack_230;
  undefined1 local_228 [16];
  ulonglong uStack_218;
  ulonglong uStack_210;
  char ****local_208;
  undefined8 uStack_200;
  longlong *plStack_1f8;
  ulonglong uStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [8];
  undefined1 local_140 [16];
  longlong local_130;
  undefined8 ****local_128;
  undefined1 *local_120;
  longlong *local_118;
  undefined *local_110;
  undefined1 local_108 [16];
  undefined8 *local_f8;
  undefined1 (*local_f0 [2]) [16];
  longlong *plStack_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [16];
  size_t local_c0;
  longlong *local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 ****local_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_2d8;
  local_298 = 0;
  local_288[0] = 0;
  plVar15 = (longlong *)FUN_1803cbbc0();
  local_140 = (undefined1  [16])0x0;
  local_130 = 0;
  local_1e8 = (undefined1  [16])0x0;
  auStack_1d8 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1e8,"All Features",0xc);
  local_140 = (undefined1  [16])0x0;
  local_130 = 0;
  lVar39 = 0x20;
  lVar16 = FUN_18015bca0(0x20);
  local_140._8_8_ = lVar16;
  local_140._0_8_ = lVar16;
  local_290 = (longlong *)local_140;
  local_1c8._8_8_ = lVar16;
  local_1c8._0_8_ = lVar16;
  puStack_1b8 = local_140;
  local_130 = lVar16 + 0x20;
  FUN_18015b360(lVar16,local_1e8);
  local_140._8_8_ = lVar16 + 0x20;
  _eh_vector_destructor_iterator_(local_1e8,0x20,1,thunk_FUN_18015c010);
  lVar16 = plVar15[1];
  lVar34 = *plVar15;
  if (lVar34 != lVar16) {
    puVar28 = (undefined8 *)(lVar34 + 8);
    lVar31 = local_140._8_8_;
    do {
      if ((lVar31 - local_140._0_8_ & 0xffffffffffffffe0U) == 0x20) {
LAB_180536ee8:
        if (lVar31 == local_130) {
          FUN_1802117e0(local_140,lVar31,puVar28);
          lVar31 = local_140._8_8_;
        }
        else {
          FUN_18015b360(lVar31,puVar28);
          local_140._8_8_ = local_140._8_8_ + 0x20;
          lVar31 = local_140._8_8_;
        }
      }
      else {
        _Buf1 = (undefined8 *)(lVar31 + -0x20);
        _Buf2 = puVar28;
        if (0xf < (ulonglong)puVar28[3]) {
          _Buf2 = (undefined8 *)*puVar28;
        }
        sVar40 = *(size_t *)(lVar31 + -0x10);
        if (0xf < *(ulonglong *)(lVar31 + -8)) {
          _Buf1 = (undefined8 *)*_Buf1;
        }
        if ((sVar40 != puVar28[2]) ||
           ((sVar40 != 0 && (iVar12 = memcmp(_Buf1,_Buf2,sVar40), iVar12 != 0))))
        goto LAB_180536ee8;
      }
      lVar34 = lVar34 + 0x48;
      puVar28 = puVar28 + 9;
    } while (lVar34 != lVar16);
  }
  local_b0 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined8 *)0x0;
  local_108._0_8_ = FUN_18015bca0(8);
  uVar19 = local_140._8_8_;
  local_f8 = (undefined8 *)(local_108._0_8_ + 8);
  *(undefined **)local_108._0_8_ = &DAT_180829db8;
  local_108._8_8_ = (undefined8 *)(local_108._0_8_ + 8);
  for (lVar16 = local_140._0_8_; lVar16 != uVar19; lVar16 = lVar16 + 0x20) {
    pauVar17 = (undefined1 (*) [16])FUN_18015b360(local_188,lVar16);
    bVar42 = true;
    if (*(ulonglong *)(pauVar17[1] + 8) < 0x10) {
      pauVar30 = pauVar17;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])*pauVar17;
    }
    lVar34 = *(longlong *)pauVar17[1];
    puVar23 = *pauVar30;
    for (; pauVar30 != (undefined1 (*) [16])(puVar23 + lVar34);
        pauVar30 = (undefined1 (*) [16])(*pauVar30 + 1)) {
      bVar4 = (*pauVar30)[0];
      uVar13 = (uint)bVar4;
      if ((bVar4 == 0x5f) || (bVar4 == 0x2d)) {
        (*pauVar30)[0] = 0x20;
        uVar13 = 0x20;
      }
      if (bVar42) {
        uVar13 = toupper(uVar13);
        (*pauVar30)[0] = (char)uVar13;
      }
      bVar42 = (char)uVar13 == ' ';
    }
    local_1c8 = *pauVar17;
    puStack_1b8 = *(undefined1 **)pauVar17[1];
    uStack_1b0 = *(undefined8 *)(pauVar17[1] + 8);
    (*pauVar17)[0] = 0;
    *(undefined8 *)pauVar17[1] = 0;
    *(undefined8 *)(pauVar17[1] + 8) = 0xf;
    FUN_18015c010(pauVar17);
    FUN_1801b1650(local_b0,local_1c8);
    FUN_18015c010(local_1c8);
  }
  uVar19 = local_b0._8_8_;
  for (plVar35 = (longlong *)local_b0._0_8_; plVar35 != (longlong *)uVar19; plVar35 = plVar35 + 4) {
    local_290 = plVar35;
    if (0xf < (ulonglong)plVar35[3]) {
      local_290 = (longlong *)*plVar35;
    }
    FUN_1801543a0(local_98,&local_290);
  }
  uVar32 = 1;
  if (1 < (ulonglong)((longlong)(local_140._8_8_ - local_140._0_8_) >> 5)) {
    do {
      puVar21 = (ulonglong *)(local_140._0_8_ + lVar39);
      local_258 = (ulonglong)puVar21;
      if (0xf < puVar21[3]) {
        local_258 = *puVar21;
      }
      local_250 = puVar21[2];
      local_290 = (longlong *)FUN_1805368e0(&local_258);
      FUN_1801543a0(local_108,&local_290);
      uVar32 = uVar32 + 1;
      lVar39 = lVar39 + 0x20;
    } while (uVar32 < (ulonglong)((longlong)(local_140._8_8_ - local_140._0_8_) >> 5));
  }
  local_288[0] = (int)((longlong)(local_140._8_8_ - local_140._0_8_) >> 5) - 1;
  local_258 = local_258 & 0xffffffff00000000;
  puVar21 = &local_258;
  if (-1 < DAT_180c7e120) {
    puVar21 = (ulonglong *)&DAT_180c7e120;
  }
  puVar18 = (ulonglong *)local_288;
  if (DAT_180c7e120 <= (int)local_288[0]) {
    puVar18 = puVar21;
  }
  DAT_180c7e120 = (int)*puVar18;
  local_128 = (undefined8 ****)local_98;
  local_120 = local_108;
  local_110 = &DAT_180b0d658;
  local_118 = plVar15;
  FUN_180488c60();
  FUN_180537b90(&local_128);
  FUN_180488f10();
  local_228 = (undefined1  [16])0x0;
  uStack_218 = 0;
  uStack_210 = 0;
  lVar16 = -1;
  do {
    pcVar37 = &DAT_180c7e011 + lVar16;
    lVar16 = lVar16 + 1;
  } while (*pcVar37 != '\0');
  FUN_18015ba30(local_228);
  pcVar37 = local_228;
  if (0xf < uStack_210) {
    pcVar37 = (char *)local_228._0_8_;
  }
  pcVar27 = pcVar37 + uStack_218;
  uStack_70 = uStack_218;
  uStack_68 = uStack_210;
  for (; pcVar37 != pcVar27; pcVar37 = pcVar37 + 1) {
    cVar11 = *pcVar37;
    uStack_218 = uStack_70;
    uStack_210 = uStack_68;
    if (('@' < cVar11) && (cVar11 < '[')) {
      *pcVar37 = cVar11 + ' ';
    }
    uStack_70 = uStack_218;
    uStack_68 = uStack_210;
  }
  local_80 = (undefined8 ****)local_228._0_8_;
  uStack_78 = local_228._8_8_;
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_228._1_15_;
  local_228 = auVar6 << 8;
  uStack_218 = 0;
  uStack_210 = 0xf;
  FUN_18015c010(local_228);
  bVar42 = false;
  sVar40 = 0;
  local_258 = 0;
  local_c0 = 0;
  plVar35 = (longlong *)0xf;
  local_290 = (longlong *)0xf;
  local_b8 = (longlong *)0xf;
  local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar7[0xf] = 0;
  auVar7._0_15_ = local_d0._1_15_;
  local_d0 = auVar7 << 8;
  puVar41 = (uint *)*plVar15;
  puVar5 = (uint *)plVar15[1];
  if (puVar41 != puVar5) {
    do {
      if (DAT_180c7e120 == 0) {
LAB_18053730e:
        if (uStack_70 == 0) {
          uVar13 = local_298;
LAB_180537457:
          bVar43 = false;
        }
        else {
          puVar22 = puVar41 + 10;
          if (*(longlong *)(puVar41 + 0xe) == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (0xf < *(ulonglong *)(puVar41 + 0x10)) {
            puVar22 = *(uint **)puVar22;
          }
          local_2a8 = 1;
          local_2b0 = &DAT_1806bcfc0;
          local_2b8 = *(longlong *)(puVar41 + 0xe);
          FUN_18015a9c0(local_1a8,0x7fffffffffffffff,&DAT_1806bcfc0,puVar22);
          uVar13 = local_298;
          local_288[0] = local_298 | 9;
          puVar22 = puVar41 + 2;
          if (0xf < *(ulonglong *)(puVar41 + 8)) {
            puVar22 = *(uint **)puVar22;
          }
          puVar28 = (undefined8 *)FUN_18015b2a0(local_1a8,puVar22,*(undefined8 *)(puVar41 + 6));
          local_208 = (char ****)*puVar28;
          plStack_1f8 = (longlong *)puVar28[2];
          uStack_1f0 = puVar28[3];
          uStack_200 = puVar28[1];
          *(undefined1 *)puVar28 = 0;
          puVar28[2] = 0;
          puVar28[3] = 0xf;
          ppppcVar38 = (char ****)&local_208;
          if (0xf < uStack_1f0) {
            ppppcVar38 = local_208;
          }
          ppppcVar29 = (char ****)((longlong)plStack_1f8 + (longlong)ppppcVar38);
          plStack_268 = plStack_1f8;
          uStack_260 = uStack_1f0;
          for (; ppppcVar38 != ppppcVar29; ppppcVar38 = (char ****)((longlong)ppppcVar38 + 1)) {
            cVar11 = *(char *)ppppcVar38;
            plStack_1f8 = plStack_268;
            uStack_1f0 = uStack_260;
            if (('@' < cVar11) && (cVar11 < '[')) {
              *(char *)ppppcVar38 = cVar11 + ' ';
            }
            plStack_268 = plStack_1f8;
            uStack_260 = uStack_1f0;
          }
          local_278._8_8_ = uStack_200;
          local_278._0_8_ = local_208;
          local_208 = (char ****)((ulonglong)local_208 & 0xffffffffffffff00);
          plStack_1f8 = (longlong *)0x0;
          uStack_1f0 = 0xf;
          FUN_18015c010(&local_208);
          uVar13 = uVar13 | 0xf;
          ppppuVar25 = &local_80;
          if (0xf < uStack_68) {
            ppppuVar25 = local_80;
          }
          puVar23 = local_278;
          if (0xf < uStack_260) {
            puVar23 = (undefined1 *)local_278._0_8_;
          }
          local_2b8 = uStack_70;
          local_298 = uVar13;
          lVar16 = FUN_180159df0(puVar23,plStack_268,0,ppppuVar25);
          if (lVar16 != -1) goto LAB_180537457;
          bVar43 = true;
        }
        if ((uVar13 & 2) != 0) {
          uVar13 = uVar13 & 0xfffffffd;
          local_298 = uVar13;
          FUN_18015c010(local_278);
        }
        if ((uVar13 & 1) != 0) {
          local_298 = uVar13 & 0xfffffffe;
          FUN_18015c010(local_1a8);
        }
        if (!bVar43) {
          puVar22 = puVar41 + 2;
          if (0xf < *(ulonglong *)(puVar41 + 8)) {
            puVar22 = *(uint **)puVar22;
          }
          puVar23 = local_d0;
          if ((longlong *)0xf < plVar35) {
            puVar23 = (undefined1 *)local_d0._0_8_;
          }
          if ((sVar40 != *(size_t *)(puVar41 + 6)) ||
             ((sVar40 != 0 && (iVar12 = memcmp(puVar23,puVar22,sVar40), iVar12 != 0)))) {
            if (bVar42) {
              FUN_180488f10();
            }
            pauVar17 = (undefined1 (*) [16])FUN_18015b360(local_168,puVar41 + 2);
            bVar42 = true;
            if (*(ulonglong *)(pauVar17[1] + 8) < 0x10) {
              pauVar30 = pauVar17;
            }
            else {
              pauVar30 = *(undefined1 (**) [16])*pauVar17;
            }
            lVar16 = *(longlong *)pauVar17[1];
            puVar23 = *pauVar30;
            for (; pauVar30 != (undefined1 (*) [16])(puVar23 + lVar16);
                pauVar30 = (undefined1 (*) [16])(*pauVar30 + 1)) {
              bVar4 = (*pauVar30)[0];
              uVar13 = (uint)bVar4;
              if ((bVar4 == 0x5f) || (bVar4 == 0x2d)) {
                (*pauVar30)[0] = 0x20;
                uVar13 = 0x20;
              }
              if (bVar42) {
                uVar13 = toupper(uVar13);
                (*pauVar30)[0] = (char)uVar13;
              }
              bVar42 = (char)uVar13 == ' ';
            }
            local_1e8 = *pauVar17;
            auStack_1d8 = pauVar17[1];
            (*pauVar17)[0] = 0;
            *(undefined8 *)pauVar17[1] = 0;
            *(undefined8 *)(pauVar17[1] + 8) = 0xf;
            FUN_18015c010(pauVar17);
            puVar23 = local_1e8;
            if (0xf < (ulonglong)auStack_1d8._8_8_) {
              puVar23 = (undefined1 *)local_1e8._0_8_;
            }
            FUN_1805302b0(puVar23);
            FUN_18015c010(local_1e8);
            FUN_180488c60();
            puVar22 = puVar41 + 2;
            if ((uint *)local_d0 != puVar41 + 2) {
              if (0xf < *(ulonglong *)(puVar41 + 8)) {
                puVar22 = *(uint **)(puVar41 + 2);
              }
              FUN_180113930(local_d0,puVar22,*(undefined8 *)(puVar41 + 6));
              local_290 = local_b8;
              local_258 = local_c0;
            }
          }
          bVar42 = true;
          lVar16 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
          uVar14 = FUN_1804c2670(lVar16,*puVar41);
          piVar2 = (int *)(lVar16 + 0x108);
          iVar12 = *(int *)(lVar16 + 0x10c);
          if (*piVar2 == iVar12) {
            iVar20 = *piVar2 + 1;
            if (iVar12 == 0) {
              iVar12 = 8;
            }
            else {
              iVar12 = iVar12 / 2 + iVar12;
            }
            if (iVar20 < iVar12) {
              iVar20 = iVar12;
            }
            FUN_1804d14d0(piVar2,iVar20);
          }
          *(undefined4 *)(*(longlong *)(lVar16 + 0x110) + (longlong)*piVar2 * 4) = uVar14;
          *piVar2 = *piVar2 + 1;
          plVar15 = (longlong *)DAT_180b0d660[1];
          cVar11 = *(char *)((longlong)plVar15 + 0x19);
          plVar35 = DAT_180b0d660;
          while (cVar11 == '\0') {
            if (*(uint *)((longlong)plVar15 + 0x1c) < *puVar41) {
              plVar15 = plVar15 + 2;
            }
            else {
              plVar35 = plVar15;
            }
            plVar15 = (longlong *)*plVar15;
            cVar11 = *(char *)((longlong)plVar15 + 0x19);
          }
          if ((*(char *)((longlong)plVar35 + 0x19) == '\0') &&
             (*(uint *)((longlong)plVar35 + 0x1c) <= *puVar41)) {
            local_148[0] = 0;
          }
          else {
            local_148[0] = 1;
          }
          local_248 = (undefined1  [16])0x0;
          uStack_230 = 0;
          plVar15 = *(longlong **)(puVar41 + 0xe);
          pauVar17 = (undefined1 (*) [16])(puVar41 + 10);
          if (0xf < *(ulonglong *)(puVar41 + 0x10)) {
            pauVar17 = *(undefined1 (**) [16])*pauVar17;
          }
          if ((longlong *)0x7fffffffffffffff < plVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (plVar15 < (longlong *)0x10) {
            plStack_238 = plVar15;
            uVar32 = 0xf;
            uStack_230 = 0xf;
            pbVar36 = *(byte **)*pauVar17;
            local_248 = *pauVar17;
          }
          else {
            uVar32 = (ulonglong)plVar15 | 0xf;
            if (uVar32 < 0x8000000000000000) {
              if (uVar32 < 0x16) {
                uVar32 = 0x16;
              }
            }
            else {
              uVar32 = 0x7fffffffffffffff;
            }
            pbVar36 = (byte *)FUN_18015bca0(uVar32 + 1);
            local_248._0_8_ = pbVar36;
            plStack_238 = plVar15;
            uStack_230 = uVar32;
            FUN_18063aed0(pbVar36,pauVar17,(longlong)plVar15 + 1);
          }
          bVar43 = true;
          pbVar33 = local_248;
          if (0xf < uVar32) {
            pbVar33 = pbVar36;
          }
          pbVar36 = pbVar33 + (longlong)plVar15;
          plVar35 = plStack_238;
          uVar10 = uStack_230;
          plVar15 = plStack_e0;
          uVar32 = uStack_d8;
          for (; uStack_d8 = uVar10, plStack_e0 = plVar35, pbVar33 != pbVar36; pbVar33 = pbVar33 + 1
              ) {
            bVar4 = *pbVar33;
            uVar13 = (uint)bVar4;
            plStack_238 = plStack_e0;
            uStack_230 = uStack_d8;
            if ((bVar4 == 0x5f) || (bVar4 == 0x2d)) {
              plStack_e0 = plVar15;
              uStack_d8 = uVar32;
              *pbVar33 = 0x20;
              uVar13 = 0x20;
              plVar15 = plStack_e0;
              uVar32 = uStack_d8;
            }
            uStack_d8 = uVar32;
            plStack_e0 = plVar15;
            if (bVar43) {
              uVar13 = toupper(uVar13);
              *pbVar33 = (byte)uVar13;
            }
            bVar43 = (char)uVar13 == ' ';
            plVar35 = plStack_238;
            uVar10 = uStack_230;
            plVar15 = plStack_e0;
            uVar32 = uStack_d8;
          }
          local_f0[0] = (undefined1 (*) [16])local_248._0_8_;
          local_f0[1] = (undefined1 (*) [16])local_248._8_8_;
          auVar8[0xf] = 0;
          auVar8._0_15_ = local_248._1_15_;
          local_248 = auVar8 << 8;
          plStack_238 = (longlong *)0x0;
          uStack_230 = 0xf;
          FUN_18015c010(local_248);
          plVar15 = plStack_e0;
          local_278 = (undefined1  [16])0x0;
          plStack_268 = (longlong *)0x0;
          uStack_260 = 0;
          pauVar17 = (undefined1 (*) [16])local_f0;
          if (0xf < uStack_d8) {
            pauVar17 = local_f0[0];
          }
          if ((longlong *)0x7fffffffffffffff < plStack_e0) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (plStack_e0 < (longlong *)0x10) {
            plStack_268 = plStack_e0;
            uStack_260 = 0xf;
            local_278 = *pauVar17;
          }
          else {
            uVar32 = (ulonglong)plStack_e0 | 0xf;
            if (uVar32 < 0x8000000000000000) {
              if (uVar32 < 0x16) {
                uVar32 = 0x16;
              }
            }
            else {
              uVar32 = 0x7fffffffffffffff;
            }
            uVar19 = FUN_18015bca0(uVar32 + 1);
            local_278._0_8_ = uVar19;
            plStack_268 = plVar15;
            uStack_260 = uVar32;
            FUN_18063aed0(uVar19,pauVar17,(longlong)plVar15 + 1);
          }
          FUN_1805369c0(&local_128,local_278);
          lVar16 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
          fVar3 = *(float *)(lVar16 + 0x118);
          auVar46 = ZEXT464((uint)fVar3);
          auVar44 = ZEXT464(*(uint *)(lVar16 + 0x11c));
          if ((*(longlong *)(lVar16 + 0x1c8) != 0) ||
             (pfVar24 = (float *)(lVar16 + 0x280), *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
            pfVar24 = (float *)(lVar16 + 0x250);
          }
          auVar45 = ZEXT464((uint)((*pfVar24 - fVar3) + fVar3));
          local_1c8._0_8_ = puVar41 + 2;
          if (0xf < *(ulonglong *)(puVar41 + 8)) {
            local_1c8._0_8_ = *(undefined8 *)(puVar41 + 2);
          }
          local_1c8._8_8_ = *(undefined8 *)(puVar41 + 6);
          uVar19 = FUN_1805368e0(local_1c8);
          ppppuVar25 = &local_128;
          if ((undefined *)0xf < local_110) {
            ppppuVar25 = local_128;
          }
          local_2b0 = (undefined *)0x0;
          local_2b8 = local_2b8 & 0xffffffffffffff00;
          cVar11 = FUN_1804898a0(ppppuVar25,local_148,uVar19,1);
          if (cVar11 != '\0') {
            FUN_180509fd0(&DAT_180b0d658,*puVar41,local_148[0]);
          }
          uVar32 = uStack_d8;
          pauVar17 = local_f0[0];
          pauVar30 = (undefined1 (*) [16])local_f0;
          if (0xf < uStack_d8) {
            pauVar30 = local_f0[0];
          }
          ppppuVar25 = &local_128;
          if ((undefined *)0xf < local_110) {
            ppppuVar25 = local_128;
          }
          if ((local_118 == plStack_e0) &&
             ((local_118 == (longlong *)0x0 ||
              (iVar12 = memcmp(ppppuVar25,pauVar30,(size_t)local_118), iVar12 == 0)))) {
LAB_180537a6d:
            lVar39 = DAT_180bb8ae8;
          }
          else {
            lVar16 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
            lVar34 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
            lVar39 = DAT_180bb8ae8;
            if ((lVar16 != 0) && (lVar16 == lVar34)) {
              cVar26 = '\0';
              cVar11 = FUN_1804b7ab0(lVar16);
              if ((cVar11 != '\0') &&
                 (((*(int *)(lVar39 + 0x1550) == 0 || (*(char *)(lVar39 + 0x155f) != cVar26)) ||
                  (*(int *)(lVar39 + 0x1550) == *(int *)(lVar16 + 0x8c))))) {
                auVar6 = vmaxss_avx(auVar44._0_16_,ZEXT416(*(uint *)(lVar34 + 0x26c)));
                auVar8 = vminss_avx(auVar45._0_16_,ZEXT416(*(uint *)(lVar34 + 0x270)));
                auVar9 = vminss_avx(ZEXT416(*(uint *)(lVar34 + 0x11c)),
                                    ZEXT416(*(uint *)(lVar34 + 0x274)));
                auVar7 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(lVar34 + 0x268)));
                if (auVar7._0_4_ - *(float *)(lVar39 + 0xcec) <= *(float *)(lVar39 + 0x110)) {
                  if (((auVar6._0_4_ - *(float *)(lVar39 + 0xcf0) <= *(float *)(lVar39 + 0x114)) &&
                      (*(float *)(lVar39 + 0x110) < *(float *)(lVar39 + 0xcec) + auVar8._0_4_)) &&
                     (*(float *)(lVar39 + 0x114) < *(float *)(lVar39 + 0xcf0) + auVar9._0_4_)) {
                    pauVar30 = (undefined1 (*) [16])local_f0;
                    if (0xf < uVar32) {
                      pauVar30 = pauVar17;
                    }
                    FUN_1804c75b0(&DAT_1806bbe98,pauVar30);
                    goto LAB_180537a6d;
                  }
                }
              }
            }
          }
          iVar12 = *(int *)(*(longlong *)(lVar39 + 0x14d0) + 0x108);
          if (iVar12 < 2) {
            FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(lVar39 + 0x14d0) + 0x108) = iVar12 + -1;
          }
          FUN_18015c010(&local_128);
          FUN_18015c010(local_f0);
          plVar35 = local_290;
          sVar40 = local_258;
        }
      }
      else {
        puVar28 = (undefined8 *)((longlong)DAT_180c7e120 * 0x20 + local_140._0_8_);
        puVar22 = puVar41 + 2;
        psVar1 = puVar28 + 2;
        if (0xf < (ulonglong)puVar28[3]) {
          puVar28 = (undefined8 *)*puVar28;
        }
        _Size = *(size_t *)(puVar41 + 6);
        if (0xf < *(ulonglong *)(puVar41 + 8)) {
          puVar22 = *(uint **)puVar22;
        }
        if ((_Size == *psVar1) &&
           ((_Size == 0 || (iVar12 = memcmp(puVar22,puVar28,_Size), iVar12 == 0))))
        goto LAB_18053730e;
      }
      puVar41 = puVar41 + 0x12;
    } while (puVar41 != puVar5);
    if (bVar42) {
      FUN_180488f10();
      goto LAB_180537ae6;
    }
  }
  FUN_1805302b0("No entries match your search.");
LAB_180537ae6:
  FUN_18015c010(local_d0);
  FUN_18015c010(&local_80);
  FUN_1800f0160(local_108);
  FUN_1800f0160(local_98);
  FUN_180111b90(local_b0);
  FUN_180111b90(local_140);
}



