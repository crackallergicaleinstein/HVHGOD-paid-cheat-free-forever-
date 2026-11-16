// FUN_180501aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180501aa0 */

ulonglong FUN_180501aa0(char *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char *pcVar21;
  longlong lVar22;
  char cVar23;
  byte bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  longlong lVar29;
  int *piVar30;
  longlong lVar31;
  char cVar32;
  char cVar33;
  uint uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined8 uVar42;
  undefined1 auVar41 [64];
  float fVar43;
  undefined1 auVar44 [64];
  float fVar45;
  float fVar46;
  undefined1 auVar47 [64];
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined8 in_stack_fffffffffffffeb0;
  char *pcVar53;
  undefined4 uVar54;
  undefined8 in_stack_fffffffffffffec0;
  char *pcVar55;
  undefined4 uVar56;
  char local_117;
  float local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  lVar22 = DAT_180bb8ae8;
  uVar54 = (undefined4)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20);
  uVar56 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
  uVar9 = *(ulonglong *)(DAT_180bb8ae8 + 0x14d0);
  *(undefined1 *)(uVar9 + 0xce) = 1;
  plVar10 = *(longlong **)(lVar22 + 0x14d0);
  if (*(char *)((longlong)plVar10 + 0xd1) != '\0') {
    return uVar9 & 0xffffffffffffff00;
  }
  lVar31 = lVar22;
  iVar25 = FUN_1804b0a90(param_1,0,
                         *(undefined4 *)(plVar10[0x22] + -4 + (longlong)(int)plVar10[0x21] * 4));
  if (*(int *)(*plVar10 + 0x1534) == iVar25) {
    FUN_1804cf810(iVar25,0xb,param_1);
    lVar31 = DAT_180bb8ae8;
  }
  if ((*(int *)(lVar31 + 0x2008) < *(int *)(lVar31 + 0x1ff8)) &&
     (*(int *)((longlong)*(int *)(lVar31 + 0x2008) * 0x38 + *(longlong *)(lVar31 + 0x2000)) ==
      iVar25)) {
    bVar24 = 1;
  }
  else {
    bVar24 = 0;
  }
  piVar1 = (int *)(lVar22 + 0x26c8);
  piVar30 = *(int **)(lVar22 + 0x26d0);
  iVar27 = *piVar1;
  uVar34 = *(uint *)((longlong)plVar10 + 0x14) >> 4 & 0x1000000 | 0x10020145;
  piVar3 = piVar30 + iVar27;
  do {
    if (piVar3 <= piVar30) {
      iVar26 = *(int *)(lVar22 + 0x26cc);
      if (iVar27 == iVar26) {
        if (iVar26 == 0) {
          iVar26 = 8;
        }
        else {
          iVar26 = iVar26 / 2 + iVar26;
        }
        iVar16 = iVar27 + 1;
        if (iVar27 + 1 < iVar26) {
          iVar16 = iVar26;
        }
        FUN_1804d14d0(piVar1,iVar16);
        lVar31 = DAT_180bb8ae8;
      }
      *(int *)(*(longlong *)(lVar22 + 0x26d0) + (longlong)*piVar1 * 4) = iVar25;
      *piVar1 = *piVar1 + 1;
      pcVar53 = param_1;
      goto joined_r0x000180501c7a;
    }
    iVar26 = *piVar30;
    piVar30 = piVar30 + 1;
  } while (iVar26 != iVar25);
  if (bVar24 == 0) {
    *(undefined4 *)(lVar22 + 0x1f10) = 0;
  }
  else {
    bVar24 = FUN_1804c7d70(iVar25,param_1,uVar34);
  }
  goto LAB_180502638;
  while( true ) {
    pcVar53 = pcVar21 + 1;
    if ((*pcVar21 == '#') && (*pcVar53 == '#')) break;
joined_r0x000180501c7a:
    pcVar21 = pcVar53;
    if ((pcVar21 == (char *)0xffffffffffffffff) || (*pcVar21 == '\0')) break;
  }
  auVar51 = ZEXT464(0xbf800000);
  auVar47 = ZEXT864(0);
  if (param_1 == pcVar21) {
    auVar40 = ZEXT816(0);
    local_10c = *(undefined4 *)(lVar31 + 0x11e0);
  }
  else {
    pcVar53 = param_1;
    pcVar55 = pcVar21;
    FUN_1804ea040(&local_110,*(undefined8 *)(lVar31 + 0x11d0),*(undefined4 *)(lVar31 + 0x11e0),
                  0x7f7fffff,0xbf800000,param_1,pcVar21,pcVar21,0);
    uVar54 = (undefined4)((ulonglong)pcVar53 >> 0x20);
    uVar56 = (undefined4)((ulonglong)pcVar55 >> 0x20);
    auVar40._0_4_ = (float)(int)((uint)((float)(int)local_110 < local_110) + (int)local_110);
    auVar40._4_12_ = SUB1612(ZEXT816(0),4);
  }
  auVar41 = ZEXT1664(auVar40);
  local_108._4_4_ = local_10c;
  local_108._0_4_ = auVar40._0_4_;
  uVar28 = local_10c;
  cVar23 = FUN_180501a10();
  if (cVar23 != '\0') {
    *(uint *)(lVar22 + 0x1e8c) = *(uint *)(lVar22 + 0x1e8c) | 0x2000;
  }
  fVar35 = *(float *)(plVar10 + 0x23);
  fVar46 = *(float *)((longlong)plVar10 + 0x11c);
  local_110 = fVar35;
  FUN_1804c2800(param_1);
  lVar31 = DAT_180bb8ae8;
  uVar36 = auVar41._0_8_;
  if (param_3 == '\0') {
    uVar7 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
    if ((uVar7 & 0x40) == 0) {
      pfVar2 = (float *)(DAT_180bb8ae8 + 0xc84);
      *(float *)(DAT_180bb8ae8 + 0x26a4) = *pfVar2;
      *(float *)(lVar31 + 0xc84) = *pfVar2 * *(float *)(lVar31 + 0xc88);
    }
    piVar1 = (int *)(lVar31 + 0x1fd8);
    *(uint *)(lVar31 + 0x1e80) = uVar7 | 0x40;
    iVar27 = *(int *)(lVar31 + 0x1fdc);
    if (*piVar1 == iVar27) {
      iVar26 = *piVar1 + 1;
      if (iVar27 == 0) {
        iVar27 = 8;
      }
      else {
        iVar27 = iVar27 / 2 + iVar27;
      }
      if (iVar26 < iVar27) {
        iVar26 = iVar27;
      }
      FUN_1804d14d0(piVar1,iVar26);
      uVar36 = auVar41._0_8_;
    }
    *(undefined4 *)(*(longlong *)(lVar31 + 0x1fe0) + (longlong)*piVar1 * 4) =
         *(undefined4 *)(lVar31 + 0x1e80);
    *piVar1 = *piVar1 + 1;
    *(short *)(lVar31 + 0x26a8) = *(short *)(lVar31 + 0x26a8) + 1;
  }
  uVar48 = *(undefined4 *)(lVar22 + 0xd58);
  fVar50 = 0.3;
  *(undefined4 *)(lVar22 + 0xd58) = *(undefined4 *)(lVar22 + 0xd54);
  if (*(int *)((longlong)plVar10 + 0x1d4) == 0) {
    fVar45 = 0.5;
    *(float *)(plVar10 + 0x23) =
         (float)(int)(*(float *)(lVar22 + 0xcd4) * 0.5) + *(float *)(plVar10 + 0x23);
    FUN_1804b2c90(0xe,*(float *)(lVar22 + 0xcd4) + *(float *)(lVar22 + 0xcd4));
    auVar44 = ZEXT464((uint)(fVar46 + *(float *)(plVar10 + 0x2a)));
    auVar37._0_4_ = (float)*(ushort *)(plVar10 + 0x32);
    auVar37._4_12_ = SUB1612(ZEXT816(0),4);
    auVar41 = ZEXT464((uint)(auVar37._0_4_ + *(float *)(plVar10 + 0x23)));
    local_117 = FUN_1804ff860(auVar37._0_8_,bVar24,0x400001);
    lVar31 = DAT_180bb8ae8;
    auVar40 = vunpcklps_avx(auVar41._0_16_,auVar44._0_16_);
    *(undefined **)(DAT_180bb8ae8 + 0x2868) = &DAT_1807d30f8;
    *(undefined **)(lVar31 + 0x2870) = &DAT_1807d32dc;
    FUN_1804b3060(auVar40._0_8_,param_1);
    FUN_1804b2de0();
    auVar52 = ZEXT464(0x3f800000);
    *(float *)(plVar10 + 0x23) =
         *(float *)(plVar10 + 0x23) - (float)(int)(fVar45 * *(float *)(lVar22 + 0xcd4));
    local_110 = (fVar35 - 1.0) - (float)(int)(fVar45 * *(float *)(lVar22 + 0xcd4));
    fVar35 = (auVar44._0_4_ - *(float *)(lVar22 + 0xcc8)) + *(float *)((longlong)plVar10 + 0x6c);
  }
  else {
    fVar35 = (float)FUN_1805016d0((longlong)plVar10 + 0x184,0,uVar36,0,
                                  (float)(int)(*(float *)(lVar22 + 0x11e0) * 1.2));
    lVar31 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar31 + 0x1c8) != 0) ||
       (lVar29 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      lVar29 = 0x250;
    }
    fVar45 = *(float *)(plVar10 + 0x23);
    auVar44 = ZEXT464((uint)(fVar46 + *(float *)(plVar10 + 0x2a)));
    fVar46 = (*(float *)(lVar29 + lVar31) - *(float *)(lVar31 + 0x118)) - fVar35;
    auVar40 = vmaxss_avx(auVar47._0_16_,ZEXT416((uint)fVar46));
    auVar41 = ZEXT1664(auVar40);
    local_108._4_4_ = uVar28;
    local_108._0_4_ = fVar35;
    local_117 = FUN_1804ff860(&PTR_180700558,bVar24,fVar46,local_108);
    lVar31 = DAT_180bb8ae8;
    *(undefined ***)(DAT_180bb8ae8 + 0x2868) = &PTR_180700558;
    *(undefined **)(lVar31 + 0x2870) = &DAT_18085b250;
    auVar40 = vunpcklps_avx(ZEXT416((uint)((float)*(ushort *)(plVar10 + 0x32) + fVar45)),
                            auVar44._0_16_);
    FUN_1804b3060(auVar40._0_8_,param_1,pcVar21,0);
    auVar40 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
    auVar37 = vshufps_avx(auVar40,auVar40,0xff);
    local_108._0_12_ = auVar40._0_12_;
    local_108._12_4_ = auVar37._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    fVar35 = fVar50 * *(float *)(lVar22 + 0x11e0);
    auVar41 = ZEXT464((uint)((float)*(ushort *)((longlong)plVar10 + 0x194) + fVar45 + auVar41._0_4_
                            + fVar35));
    lVar31 = DAT_180bb8ae8;
    uVar28 = FUN_1804b1120(local_108,fVar35);
    auVar52 = ZEXT464(0x3f800000);
    auVar40 = vunpcklps_avx(auVar41._0_16_,auVar44._0_16_);
    FUN_1804eadd0(plVar10[0x59],auVar40._0_8_,uVar28,auVar52._0_8_,auVar47._0_4_,
                  CONCAT44(uVar54,0x3f800000),*(undefined8 *)(lVar31 + 0xdb0),
                  CONCAT44(uVar56,*(undefined4 *)(lVar31 + 0xdb8)));
    fVar35 = auVar44._0_4_ - *(float *)(lVar22 + 0xc90);
    fVar45 = 0.5;
  }
  lVar31 = DAT_180bb8ae8;
  *(undefined4 *)(lVar22 + 0xd58) = uVar48;
  if (param_3 == '\0') {
    if (*(short *)(lVar31 + 0x26a8) < 1) {
      FUN_1804c5a40();
      lVar31 = DAT_180bb8ae8;
    }
    else {
      iVar27 = *(int *)(lVar31 + 0x1fd8);
      *(short *)(lVar31 + 0x26a8) = *(short *)(lVar31 + 0x26a8) + -1;
      uVar7 = *(uint *)(lVar31 + 0x1e80);
      *(int *)(lVar31 + 0x1fd8) = iVar27 + -1;
      uVar8 = *(uint *)(*(longlong *)(lVar31 + 0x1fe0) + -8 + (longlong)iVar27 * 4);
      *(uint *)(lVar31 + 0x1e80) = uVar8;
      if (((uVar7 & 0x40) != 0) && ((uVar8 & 0x40) == 0)) {
        *(undefined4 *)(lVar31 + 0xc84) = *(undefined4 *)(lVar31 + 0x26a4);
      }
    }
  }
  fVar46 = auVar47._0_4_;
  auVar37 = auVar52._0_16_;
  auVar40 = auVar51._0_16_;
  if (*(int *)(lVar22 + 0x1550) == iVar25) {
    if (*(int *)(lVar22 + 0x1538) != iVar25) {
      if (((*(int *)(lVar22 + 0x1574) == 1) && (*(char *)(lVar31 + 0x118) != '\0')) &&
         (*(float *)(lVar31 + 0xa0) * *(float *)(lVar31 + 0xa0) <= *(float *)(lVar31 + 0xbc4))) {
        FUN_1804b7870(0,0);
        lVar31 = DAT_180bb8ae8;
        fVar46 = auVar47._0_4_;
        auVar37 = auVar52._0_16_;
        auVar40 = auVar51._0_16_;
        *(undefined8 *)(DAT_180bb8ae8 + 0x1c94) = 0xffffffffffffffff;
        *(undefined2 *)(lVar31 + 0x1c9c) = 0;
      }
      goto LAB_18050223b;
    }
LAB_180502243:
    if ((param_3 == '\0') || (*(char *)(lVar22 + 0x2039) != '\0')) goto LAB_180502262;
    bVar19 = true;
  }
  else {
LAB_18050223b:
    if (*(int *)(lVar22 + 0x1538) == iVar25) goto LAB_180502243;
LAB_180502262:
    bVar19 = false;
  }
  bVar18 = false;
  cVar32 = '\0';
  cVar33 = '\0';
  bVar20 = false;
  if (*(int *)((longlong)plVar10 + 0x1d4) == 1) {
    bVar17 = false;
    if (((*(int *)(lVar22 + 0x1ff8) <= *(int *)(lVar22 + 0x2008)) ||
        (lVar29 = (longlong)*(int *)(lVar22 + 0x2008) * 0x38 + *(longlong *)(lVar22 + 0x2000),
        lVar29 == 0)) ||
       ((lVar29 = *(longlong *)(lVar29 + 8), lVar29 == 0 ||
        (*(longlong **)(lVar29 + 0x3c8) != plVar10)))) {
      lVar29 = 0;
    }
    if ((*(longlong **)(lVar22 + 0x14d8) == plVar10) && (lVar29 != 0)) {
      fVar50 = *(float *)(lVar29 + 0x28);
      fVar39 = *(float *)(lVar29 + 0x2c);
      fVar4 = *(float *)(lVar22 + 0x114);
      fVar5 = *(float *)(lVar22 + 0x11e0);
      fVar11 = fVar50 + *(float *)(lVar29 + 0x30);
      fVar49 = fVar39 + *(float *)(lVar29 + 0x34);
      auVar12 = vcmpss_avx(ZEXT416(*(uint *)(plVar10 + 5)),ZEXT416((uint)fVar50),1);
      auVar40 = vblendvps_avx(auVar40,auVar37,auVar12);
      fVar43 = auVar40._0_4_;
      fVar6 = *(float *)(lVar22 + 0x110);
      fVar14 = fVar6 - *(float *)(lVar22 + 0xfc);
      fVar15 = fVar4 - *(float *)(lVar22 + 0x100);
      if (fVar43 <= fVar46) {
        auVar40 = vunpcklps_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar39));
        uVar36 = auVar40._0_8_;
        local_108._0_4_ = auVar40._0_4_;
        auVar40 = vshufps_avx(auVar40,auVar40,0x55);
        fVar39 = auVar40._0_4_;
        fVar50 = (float)local_108._0_4_;
      }
      else {
        auVar40 = vunpcklps_avx(ZEXT416((uint)fVar50),ZEXT416((uint)fVar49));
        uVar36 = auVar40._0_8_;
        local_108._0_4_ = auVar40._0_4_;
        auVar40 = vshufps_avx(auVar40,auVar40,0x55);
        fVar49 = auVar40._0_4_;
        fVar11 = (float)local_108._0_4_;
      }
      local_108._0_8_ = uVar36;
      fVar13 = ABS(fVar14 - fVar50) * 0.3;
      fVar38 = fVar5 * fVar45;
      if (fVar38 <= fVar13) {
        auVar40 = vminss_avx(ZEXT416((uint)(fVar5 * 2.5)),ZEXT416((uint)fVar13));
        fVar38 = auVar40._0_4_;
      }
      fVar14 = fVar14 - fVar43 * fVar45;
      fVar50 = fVar50 + fVar43 * fVar5;
      fVar11 = fVar11 + fVar43 * fVar5;
      auVar40 = vmaxss_avx(ZEXT416((uint)((fVar39 - fVar38) - fVar15)),ZEXT416((uint)(-fVar5 * 8.0))
                          );
      fVar45 = auVar40._0_4_ + fVar15;
      auVar40 = vminss_avx(ZEXT416((uint)((fVar49 + fVar38) - fVar15)),ZEXT416((uint)(fVar5 * 8.0)))
      ;
      fVar39 = auVar40._0_4_ + fVar15;
      bVar17 = (fVar6 - fVar11) * (fVar45 - fVar39) - (fVar4 - fVar39) * (fVar50 - fVar11) < fVar46;
      if (((fVar6 - fVar50) * (fVar15 - fVar45) - (fVar4 - fVar45) * (fVar14 - fVar50) < fVar46 ==
           bVar17) &&
         (bVar17 == (fVar6 - fVar14) * (fVar39 - fVar15) - (fVar11 - fVar14) * (fVar4 - fVar15) <
                    fVar46)) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      fVar50 = 0.3;
    }
    cVar33 = cVar32;
    if (bVar24 == 0) {
      if (local_117 == '\0') {
        if (bVar19) {
          if (bVar17) {
            if (fVar50 <= *(float *)(lVar22 + 0x1544)) {
              bVar18 = false;
              if (fVar50 <= *(float *)(lVar22 + 0x24dc)) {
                bVar18 = true;
              }
            }
          }
          else {
            bVar18 = true;
          }
        }
      }
      else {
        bVar18 = true;
      }
    }
    else if ((((!bVar19) && (*(longlong **)(lVar22 + 0x14d8) == plVar10)) && (!bVar17)) &&
            ((*(char *)(lVar22 + 0x2039) == '\0' && (*(int *)(lVar22 + 0x1550) == 0)))) {
      cVar33 = '\x01';
    }
    if ((*(int *)(lVar22 + 0x203c) == iVar25) && (*(int *)(lVar22 + 0x20f0) == 1)) {
      bVar18 = true;
      bVar20 = true;
      *(undefined2 *)(lVar31 + 0x20e0) = 0;
      *(bool *)(lVar31 + 0x20a1) = *(char *)(lVar31 + 0x20a2) != '\0';
      FUN_1804c8df0();
    }
  }
  else {
    if (bVar24 == 0) {
      if (local_117 == '\0') goto LAB_180502521;
    }
    else {
      if (local_117 != '\0') {
        if (cVar23 == '\0') goto LAB_18050255c;
        cVar33 = '\x01';
        bVar24 = 0;
        goto LAB_18050255f;
      }
LAB_180502521:
      if (((!bVar19) || (cVar23 == '\0')) || (bVar24 != 0)) {
        if ((*(int *)(lVar22 + 0x203c) != iVar25) || (*(int *)(lVar22 + 0x20f0) != 3))
        goto LAB_18050255f;
        *(undefined2 *)(lVar31 + 0x20e0) = 0;
        *(bool *)(lVar31 + 0x20a1) = *(char *)(lVar31 + 0x20a2) != '\0';
      }
    }
LAB_18050255c:
    bVar18 = true;
  }
LAB_18050255f:
  if (((param_3 == '\0') || (cVar33 != '\0')) &&
     ((*(int *)(lVar31 + 0x2008) < *(int *)(lVar31 + 0x1ff8) &&
      (*(int *)((longlong)*(int *)(lVar31 + 0x2008) * 0x38 + *(longlong *)(lVar31 + 0x2000)) ==
       iVar25)))) {
    FUN_1804c7a50(*(undefined4 *)(lVar22 + 0x2008),1);
  }
  FUN_1804c29a0();
  if (bVar18) {
    if (*(int *)(lVar22 + 0x1550) == iVar25) {
      *(undefined1 *)(lVar22 + 0x1560) = 1;
    }
    if ((bVar24 != 0) || (*(int *)(lVar22 + 0x1ff8) <= *(int *)(lVar22 + 0x2008))) {
      FUN_1804c76a0(param_1,0x20);
      goto LAB_180502680;
    }
    FUN_1804c76a0(param_1,0);
  }
  else if (bVar24 != 0) {
LAB_180502680:
    lVar31 = DAT_180bb8ae8;
    local_108 = *(undefined1 (*) [16])(lVar22 + 0x1ec0);
    uStack_f8 = *(undefined8 *)(lVar22 + 0x1ed0);
    uStack_f0 = *(undefined8 *)(lVar22 + 0x1ed8);
    uVar36 = *(undefined8 *)(lVar22 + 0x1f00);
    uVar42 = *(undefined8 *)(lVar22 + 0x1f08);
    local_e8 = *(undefined8 *)(lVar22 + 0x1ee0);
    uStack_e0 = *(undefined8 *)(lVar22 + 0x1ee8);
    uStack_d8 = *(undefined8 *)(lVar22 + 0x1ef0);
    uStack_d0 = *(undefined8 *)(lVar22 + 0x1ef8);
    *(uint *)(DAT_180bb8ae8 + 0x1f10) = *(uint *)(DAT_180bb8ae8 + 0x1f10) | 1;
    *(float *)(lVar31 + 0x1f20) = local_110;
    *(float *)(lVar31 + 0x1f24) = fVar35;
    *(undefined8 *)(lVar31 + 0x1f28) = 0;
    *(undefined4 *)(lVar31 + 0x1f14) = 1;
    FUN_1804b2c00(7);
    bVar24 = FUN_1804c7d70(iVar25,param_1,uVar34);
    FUN_1804b2de0(1);
    if (bVar24 != 0) {
      if (((bVar18) && (bVar20)) && (*(char *)(lVar22 + 0x20a2) == '\0')) {
        FUN_1804c8a10(*(undefined8 *)(lVar22 + 0x14d0),2);
        FUN_1804c9d70(*(undefined8 *)(lVar22 + 0x14d0),0);
      }
      *(undefined8 *)(lVar22 + 0x1ec0) = local_108._0_8_;
      *(undefined8 *)(lVar22 + 0x1ec8) = local_108._8_8_;
      *(undefined8 *)(lVar22 + 0x1ed0) = uStack_f8;
      *(undefined8 *)(lVar22 + 0x1ed8) = uStack_f0;
      *(undefined8 *)(lVar22 + 0x1ee0) = local_e8;
      *(undefined8 *)(lVar22 + 0x1ee8) = uStack_e0;
      *(undefined8 *)(lVar22 + 0x1ef0) = uStack_d8;
      *(undefined8 *)(lVar22 + 0x1ef8) = uStack_d0;
      *(undefined8 *)(lVar22 + 0x1f00) = uVar36;
      *(undefined8 *)(lVar22 + 0x1f08) = uVar42;
      if (*(longlong **)(lVar22 + 0x14d8) == plVar10) {
        *(uint *)(lVar22 + 0x1ec8) = *(uint *)(lVar22 + 0x1ec8) | 0x80;
      }
    }
    goto LAB_180502638;
  }
  *(undefined4 *)(lVar22 + 0x1f10) = 0;
LAB_180502638:
  return (ulonglong)bVar24;
}



