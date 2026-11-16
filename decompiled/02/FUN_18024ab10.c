// FUN_18024ab10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024ab10 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018024b3b5) */

void FUN_18024ab10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  short sVar7;
  uint *puVar8;
  undefined1 (*pauVar9) [16];
  uint *puVar10;
  uint **ppuVar11;
  ULONGLONG UVar12;
  uint **ppuVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 uVar24;
  char cVar25;
  uint *puVar26;
  uint uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 extraout_var [56];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  uint uVar44;
  undefined1 auVar45 [64];
  float fVar46;
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auStack_1218 [32];
  undefined **local_11f8;
  char *local_11f0;
  uint local_11e8;
  undefined8 local_11e0;
  ulonglong local_11d8;
  undefined8 local_11d0;
  ulonglong local_11c8;
  ulonglong local_11c0;
  ulonglong local_11b8;
  undefined8 local_11b0;
  double local_11a8;
  double local_11a0;
  double local_1198;
  double local_1190;
  double local_1188;
  double local_1180;
  uint local_1178;
  uint local_1170;
  undefined4 local_1168;
  char local_1158;
  byte local_1157;
  char local_1156;
  bool local_1155;
  byte local_1154;
  uint *local_1150;
  uint *local_1148;
  float local_1140;
  float local_113c;
  longlong local_1138;
  char *local_1128;
  undefined8 local_1120;
  uint *local_1118;
  uint *local_1110;
  undefined8 local_1108;
  longlong local_1100;
  char local_10f8 [8];
  ulonglong local_10f0;
  float local_e8 [2];
  ulonglong local_e0;
  
  if (param_2 == 0) {
    return;
  }
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1218;
  lVar17 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar17 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if (lVar17 == 0) {
  }
  lVar23 = 0;
  if (*(longlong *)(lVar17 + 0x30) != 0) {
    lVar23 = *(longlong *)(lVar17 + 0x30) + 0x10;
  }
  if (lVar23 == 0) {
  }
  auVar45 = ZEXT464(*(uint *)(lVar23 + 0xc));
  local_1138 = param_1;
  sVar7 = thunk_FUN_180624430(*(uint *)(lVar23 + 0xc));
  if (0 < sVar7) {
  }
  uVar39 = *(uint *)(param_1 + 0xd4);
  auVar38 = ZEXT464(uVar39);
  local_1150 = (uint *)CONCAT44(local_1150._4_4_,uVar39);
  sVar7 = thunk_FUN_180624430(uVar39);
  if (0 < sVar7) {
  }
  uVar39 = 0x7fffffff;
  uVar44 = 0x7fffffff;
  uVar40 = 0x7fffffff;
  uVar41 = 0x7fffffff;
  auVar42 = ZEXT464(0x43b40000);
  fVar48 = 0.001;
  if (DAT_180b0dfe8 == '\0') {
    fVar46 = auVar45._0_4_ - auVar38._0_4_;
    auVar36 = ZEXT464((uint)fVar46);
    sVar7 = thunk_FUN_180624430(fVar46);
    if (sVar7 < 1) {
      uVar27 = FUN_180615070(auVar36._0_8_,auVar42._0_8_);
    }
    else {
      uVar27 = 0;
    }
    if ((float)(uVar27 & uVar39) <= fVar48) {
    }
  }
  DAT_180b0dfe8 = '\x01';
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar16 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar16 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  *puVar16 = *puVar16 | 4;
  puVar18 = (uint *)0x0;
  if (*(longlong *)(puVar16 + 0xc) != 0) {
    puVar18 = (uint *)(*(longlong *)(puVar16 + 0xc) + 0x10);
  }
  local_1110 = puVar16 + 2;
  if (puVar18 == (uint *)0x0) {
  }
  if (local_1110 == (uint *)0x0) {
  }
  local_113c = (float)puVar16[0x12];
  auVar43 = ZEXT464((uint)local_113c);
  local_1140 = (float)puVar16[0x13];
  auVar36 = ZEXT464((uint)local_1140);
  local_1148 = puVar18;
  local_1118 = puVar16;
  sVar7 = thunk_FUN_180624430(local_113c);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(auVar36._0_8_);
  if (0 < sVar7) {
  }
  auVar37._0_8_ = FUN_180636420(auVar43._0_8_,auVar36._0_8_);
  auVar37._8_56_ = extraout_var;
  auVar37 = ZEXT1664(auVar37._0_16_);
  auVar30 = vunpcklps_avx(auVar43._0_16_,auVar36._0_16_);
  auVar36 = ZEXT1664(auVar30);
  puVar8 = (uint *)FUN_180244af0(auVar30._0_8_,auVar38._0_8_,auVar45._0_8_);
  auVar38 = ZEXT464(0x3f800000);
  auVar30 = vmaxss_avx(auVar37._0_16_,auVar38._0_16_);
  local_1108._0_4_ = SUB84(puVar8,0);
  auVar47 = ZEXT464((uint)((float)local_1108 / auVar30._0_4_));
  local_1108._4_4_ = (float)((ulonglong)puVar8 >> 0x20);
  auVar43 = ZEXT464((uint)(local_1108._4_4_ / auVar30._0_4_));
  local_1108 = puVar8;
  local_1156 = FUN_18024a3b0();
  uVar15 = auVar36._0_8_;
  if ((DAT_180cd3c00 & 1) == 0) {
    DAT_180cd3c00 = DAT_180cd3c00 | 1;
    local_1108 = (uint *)CONCAT44(local_1108._4_4_,0xdafa8d1);
    local_1100 = 0;
    local_1128 = (char *)&local_1108;
    local_1120 = 1;
    FUN_18044c9c0(DAT_180c64058);
    uVar15 = auVar36._0_8_;
    DAT_180cd3c08 = local_1100;
  }
  if ((DAT_180cd3c08 == 0) || (local_1157 = 1, *(char *)(DAT_180cd3c08 + 0x58) == '\0')) {
    local_1157 = 0;
  }
  local_1154 = DAT_180b8e114 & 1;
  if (((DAT_180b8e114 & 1) == 0) ||
     (((DAT_180c646f1 == '\0' && (DAT_180c646fa == '\0')) && (DAT_180b8e580 == '\0')))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_1155 = false;
  if ((int)puVar16[4] < 1) {
LAB_18024ae5f:
    cVar25 = '\x01';
  }
  else {
    plVar21 = *(longlong **)(puVar16 + 6);
    uVar22 = (ulonglong)puVar16[4];
    local_1155 = false;
    do {
      plVar21 = plVar21 + 1;
      puVar8 = (uint *)0x0;
      if (*plVar21 != 0) {
        puVar8 = (uint *)(*plVar21 + 0x10);
      }
      if ((puVar8 != (uint *)0x0) && (((*puVar8 & 8) != 0 || ((*puVar8 & 0x10) != 0)))) {
        local_1155 = true;
      }
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
    if ((local_1155 == false) || (bVar4)) goto LAB_18024ae5f;
    cVar25 = '\0';
  }
  bVar6 = local_1155;
  fVar46 = 0.995;
  local_e8[0] = auVar38._0_4_;
  local_1158 = cVar25;
  if ((((local_1157 == 0) || (!bVar4)) || (auVar37._0_4_ <= 0.02)) || (0.995 <= auVar37._0_4_)) {
    bVar4 = false;
    if (local_1157 != 0) goto LAB_18024aea9;
  }
  else {
    bVar4 = true;
LAB_18024aea9:
    if (((cVar25 == '\0') || (*(char *)(param_1 + 0xcd) == '\0')) || (local_1156 != '\0')) {
      if (bVar4) {
        auVar33._0_4_ = (uint)auVar43._0_4_ & uVar39;
        auVar33._4_4_ = auVar43._4_4_ & uVar44;
        auVar33._8_4_ = auVar43._8_4_ & uVar40;
        auVar33._12_4_ = auVar43._12_4_ & uVar41;
        auVar30._0_4_ = (uint)auVar47._0_4_ & uVar39;
        auVar30._4_4_ = auVar47._4_4_ & uVar44;
        auVar30._8_4_ = auVar47._8_4_ & uVar40;
        auVar30._12_4_ = auVar47._12_4_ & uVar41;
        auVar30 = vmaxss_avx(auVar33,auVar30);
        fVar35 = auVar30._0_4_;
        if (fVar48 < fVar35) {
          auVar31._0_4_ = auVar47._0_4_ / fVar35;
          auVar31._4_12_ = auVar47._4_12_;
          uVar29 = auVar31._0_8_;
          auVar47 = ZEXT1664(auVar31);
          auVar34._0_4_ = auVar43._0_4_ / fVar35;
          auVar34._4_12_ = auVar43._4_12_;
          uVar15 = auVar34._0_8_;
          auVar43 = ZEXT1664(auVar34);
          goto LAB_18024af33;
        }
      }
    }
    else {
      pauVar9 = (undefined1 (*) [16])
                FUN_180244b90(&local_1128,uVar15,(ulonglong)local_1150 & 0xffffffff,auVar45._0_8_);
      auVar30 = *pauVar9;
      uVar29 = auVar30._0_8_;
      if ((char)((ulonglong)*(undefined8 *)(*pauVar9 + 8) >> 0x20) != '\0') {
        auVar47 = ZEXT1664(auVar30);
        auVar30 = vshufps_avx(auVar30,auVar30,0x55);
        uVar15 = auVar30._0_8_;
        auVar43 = ZEXT1664(auVar30);
        auVar45 = ZEXT464((uint)*(undefined8 *)(*pauVar9 + 8));
        if (bVar4) {
LAB_18024af33:
          local_e8[0] = (float)FUN_180636420(uVar29,uVar15);
          local_e8[0] = auVar37._0_4_ / local_e8[0];
          auVar38 = ZEXT1664(CONCAT124(auVar37._4_12_,local_e8[0]));
        }
      }
    }
  }
  auVar37 = ZEXT464((uint)local_1150._0_4_);
  fVar35 = auVar45._0_4_ - local_1150._0_4_;
  auVar36 = ZEXT464((uint)fVar35);
  sVar7 = thunk_FUN_180624430(fVar35);
  if (sVar7 < 1) {
    uVar22 = FUN_180615070(auVar36._0_8_,auVar42._0_8_);
  }
  else {
    uVar22 = 0;
  }
  auVar36 = ZEXT464((uint)DAT_180b8e148);
  auVar42 = ZEXT464((uint)DAT_180b8e14c);
  fVar35 = auVar38._0_4_;
  if (cVar25 == '\0') {
    fVar28 = (float)((uint)uVar22 & uVar39);
    uVar22 = CONCAT44((uint)(uVar22 >> 0x20) & uVar44,fVar28);
    bVar4 = fVar48 < fVar28;
LAB_18024afc7:
    local_1150 = (uint *)0x0;
    uVar39 = puVar16[4];
    lVar17 = (longlong)(int)uVar39;
    if (bVar4) {
      if (0x20 < (int)((fVar35 < fVar46) + 1 + uVar39)) {
      }
      puVar8 = (uint *)FUN_1803dfb00(uVar22,puVar16 + 2);
      if ((puVar8 == (uint *)0x0) ||
         (((auVar38._0_4_ < fVar46 &&
           (local_1150 = (uint *)FUN_1803dfb00(extraout_XMM0_Qa,puVar16 + 2), auVar38._0_4_ < fVar46
           )) && (local_1150 == (uint *)0x0)))) {
        local_1110[2] = uVar39;
        FUN_18063ab10(local_10f8,0,0x600);
        local_11f0 = (char *)CONCAT44(local_11f0._4_4_,uVar39);
        local_11f8 = *(undefined ***)(param_2 + 8);
        FUN_18015ad60(local_10f8,0x600,0xffffffffffffffff,"command=%lld slots=%d");
        local_11f8 = &PTR_180700558;
        if (local_10f8[0] != '\0') {
          local_11f8 = (undefined **)&DAT_1806bcfc0;
        }
        uVar15 = 2;
        goto LAB_18024b617;
      }
      if (0 < lVar17) {
        lVar23 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(puVar16 + 6) + 8 + lVar23 * 8);
          puVar18 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar18 = (uint *)(lVar1 + 0x10);
          }
          if (puVar18 != (uint *)0x0) {
            uVar39 = *puVar18;
            if (cVar25 == '\0') {
              if ((uVar39 & 8) == 0) {
                auVar30 = ZEXT816(0);
                puVar16 = (uint *)&DAT_00000018;
                if (lVar1 != 0) {
                  puVar16 = (uint *)(lVar1 + 0x28);
                }
              }
              else {
                auVar30 = ZEXT416(puVar18[6]);
                puVar16 = puVar18 + 6;
              }
              if ((uVar39 & 0x10) == 0) {
                auVar33 = ZEXT816(0);
                puVar26 = (uint *)0x1c;
                if (lVar1 != 0) {
                  puVar26 = (uint *)(lVar1 + 0x2c);
                }
              }
              else {
                auVar33 = ZEXT416(puVar18[7]);
                puVar26 = puVar18 + 7;
              }
              auVar30 = vunpcklps_avx(auVar30,auVar33);
              puVar10 = (uint *)FUN_180244af0(auVar30._0_8_,auVar37._0_8_,auVar45._0_8_);
              uVar39 = *puVar18;
              if ((uVar39 & 0x18) != 0) {
                local_1108._0_4_ = SUB84(puVar10,0);
                *puVar16 = (uint)(float)local_1108;
                *puVar18 = uVar39 | 0x18;
                local_1108._4_4_ = (float)((ulonglong)puVar10 >> 0x20);
                *puVar26 = (uint)local_1108._4_4_;
              }
              puVar16 = local_1118;
              cVar25 = local_1158;
              local_1108 = puVar10;
            }
            else {
              *puVar18 = uVar39 & 0xffffffe7;
            }
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < lVar17);
        puVar18 = local_1148;
      }
      if (cVar25 == '\0') {
        auVar30 = vunpcklps_avx(auVar36._0_16_,auVar42._0_16_);
        local_1148 = (uint *)FUN_180244af0(auVar30._0_8_,auVar37._0_8_,auVar45._0_8_);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = local_1148;
        auVar30 = vshufps_avx(auVar32,auVar32,0x55);
        fVar46 = auVar30._0_4_;
        puVar26 = local_1148;
        fVar35 = local_1148._0_4_;
        local_1148 = puVar26;
      }
      else {
        fVar46 = auVar43._0_4_;
        fVar35 = auVar47._0_4_;
      }
      puVar26 = local_1150;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[5] = 0;
      puVar8[6] = (uint)(fVar35 - auVar36._0_4_);
      *puVar8 = *puVar8 | 0x1f;
      puVar8[7] = (uint)(fVar46 - auVar42._0_4_);
      if (local_1150 != (uint *)0x0) {
        local_1150[2] = 0;
        local_1150[3] = 0;
        *(undefined1 *)(local_1150 + 4) = 0;
        local_1108 = (uint *)CONCAT44(local_1108._4_4_,0x3f7d70a4);
        local_1150 = (uint *)CONCAT44(local_1150._4_4_,0x3b800000);
        ppuVar13 = &local_1150;
        if (0.00390625 <= auVar38._0_4_) {
          ppuVar13 = (uint **)local_e8;
        }
        ppuVar11 = (uint **)&local_1108;
        if (auVar38._0_4_ <= 0.99) {
          ppuVar11 = ppuVar13;
        }
        puVar26[5] = *(uint *)ppuVar11;
        puVar26[6] = auVar47._0_4_ ^ 0x80000000;
        *puVar26 = *puVar26 | 0x1f;
        puVar26[7] = auVar43._0_4_ ^ 0x80000000;
      }
      lVar23 = *(longlong *)(puVar16 + 6);
      puVar19 = (undefined8 *)(lVar23 + 8);
      uVar15 = puVar19[lVar17];
      for (; 0 < lVar17; lVar17 = lVar17 + -1) {
        puVar19[lVar17] = *(undefined8 *)(lVar23 + lVar17 * 8);
      }
      *puVar19 = uVar15;
      lVar17 = (longlong)(int)puVar16[4];
      if (lVar17 < 0x21) {
        FUN_180250340(puVar19);
        fVar35 = auVar38._0_4_;
      }
      else {
        FUN_180250440(local_10f8,lVar17 - lVar17 / 2);
        local_11f0 = (char *)CONCAT71(local_11f0._1_7_,local_1154);
        local_11f8 = (undefined **)local_10f0;
        FUN_180250540(puVar19);
        fVar35 = auVar38._0_4_;
        if (0x200 < local_10f0) {
          if (DAT_180c7df30 == 0) {
            local_1128 = "tier0.dll:g_pMemAlloc";
            local_1120 = 0x15;
            DAT_180c7df30 = FUN_180451750(&local_1128);
          }
          (**(code **)(**(longlong **)DAT_180c7df30 + 0x18))();
          fVar35 = auVar38._0_4_;
        }
      }
      param_1 = local_1138;
    }
  }
  else if (((bVar6) ||
           (fVar28 = (float)((uint)(auVar47._0_4_ - DAT_180b8e148) & uVar39),
           uVar22 = (ulonglong)(uint)fVar28, fVar48 < fVar28)) ||
          ((fVar28 = (float)((uint)(auVar43._0_4_ - DAT_180b8e14c) & uVar39),
           uVar22 = (ulonglong)(uint)fVar28, fVar48 < fVar28 || (fVar35 < fVar46)))) {
    bVar4 = true;
    goto LAB_18024afc7;
  }
  bVar5 = local_1157;
  fVar28 = auVar47._0_4_;
  puVar16[0x12] = (uint)fVar28;
  *puVar16 = *puVar16 | 0xc0;
  fVar46 = auVar43._0_4_;
  puVar16[0x13] = (uint)fVar46;
  *puVar18 = *puVar18 | 2;
  uVar44 = auVar45._0_4_;
  puVar18[3] = uVar44;
  *(uint *)(param_1 + 0xd4) = uVar44;
  uVar39 = puVar18[4];
  *(uint *)(param_1 + 0xc) = puVar18[2];
  *(uint *)(param_1 + 0x10) = uVar44;
  *(uint *)(param_1 + 0x14) = uVar39;
  *(float *)(param_1 + 0x10c) = fVar35;
  if (((*(char *)(param_1 + 0xcd) != '\0') && (local_1156 == '\0')) &&
     (iVar20 = 0, 0 < *(int *)(param_2 + 0x30))) {
    lVar17 = 0;
    do {
      lVar23 = *(longlong *)(lVar17 + 8 + *(longlong *)(param_2 + 0x38));
      puVar16 = (uint *)0x0;
      if (lVar23 != 0) {
        puVar16 = (uint *)(lVar23 + 0x10);
      }
      if (puVar16 != (uint *)0x0) {
        *puVar16 = *puVar16 | 1;
        puVar8 = (uint *)0x0;
        if (*(longlong *)(puVar16 + 2) != 0) {
          puVar8 = (uint *)(*(longlong *)(puVar16 + 2) + 0x10);
        }
        if (puVar8 != (uint *)0x0) {
          puVar8[2] = puVar18[2];
          puVar8[3] = uVar44;
          *puVar8 = *puVar8 | 7;
          puVar8[4] = 0;
        }
      }
      iVar20 = iVar20 + 1;
      lVar17 = lVar17 + 8;
    } while (iVar20 < *(int *)(param_2 + 0x30));
  }
  uVar22 = *(ulonglong *)(param_2 + 0x60);
  uVar2 = *(ulonglong *)(param_2 + 0x68);
  uVar3 = *(ulonglong *)(param_2 + 0x70);
  uVar14 = uVar22 & 0xfffffffffffff9e7;
  *(ulonglong *)(param_2 + 0x60) = uVar14;
  if (fVar48 < fVar28) {
    uVar14 = uVar14 | 8;
    *(ulonglong *)(param_2 + 0x60) = uVar14;
  }
  if (fVar28 < -0.001) {
    uVar14 = uVar14 | 0x10;
    *(ulonglong *)(param_2 + 0x60) = uVar14;
  }
  if (fVar48 < fVar46) {
    uVar14 = uVar14 | 0x200;
    *(ulonglong *)(param_2 + 0x60) = uVar14;
  }
  if (fVar46 < -0.001) {
    uVar14 = uVar14 | 0x400;
    *(ulonglong *)(param_2 + 0x60) = uVar14;
  }
  if (local_1157 != 0) {
    *(ulonglong *)(param_2 + 0x68) = ((uint)uVar22 ^ (uint)uVar14) & 0x618 | uVar2;
    *(ulonglong *)(param_2 + 0x70) = uVar3 & 0xfffffffffffff9e7;
  }
  UVar12 = GetTickCount64();
  if (((uVar22 ^ *(ulonglong *)(param_2 + 0x60)) & 0x618) == 0) {
  }
  if (UVar12 < DAT_180c64500) {
  }
  DAT_180c64500 = UVar12 + 1000;
  LOCK();
  UNLOCK();
  uVar14 = *(ulonglong *)(param_2 + 0x68);
  if ((uVar2 == uVar14) && (uVar3 == *(ulonglong *)(param_2 + 0x70))) {
    uVar24 = 1;
  }
  else {
    uVar24 = 0;
  }
  FUN_18063ab10(local_10f8,0,0x600);
  local_1180 = (double)auVar45._0_4_;
  local_1188 = (double)auVar37._0_4_;
  local_1190 = (double)auVar43._0_4_;
  local_1198 = (double)auVar47._0_4_;
  local_11a0 = (double)local_1140;
  local_11a8 = (double)local_113c;
  local_1170 = local_1110[2];
  local_1178 = (uint)local_1155;
  local_11b0 = *(undefined8 *)(param_2 + 0x70);
  local_11d0 = *(undefined8 *)(param_2 + 0x60);
  local_11e0 = DAT_180b0dfd8;
  local_11e8 = (uint)local_1154;
  local_11f0 = (char *)CONCAT44(local_11f0._4_4_,(uint)bVar5);
  local_11f8 = *(undefined ***)(param_2 + 8);
  local_11d8 = uVar22;
  local_11c8 = uVar2;
  local_11c0 = uVar14;
  local_11b8 = uVar3;
  local_1168 = uVar24;
  FUN_18015ad60(local_10f8,0x600,0xffffffffffffffff,
                "command=%lld quantized=%d grounded=%d physical=0x%llx held=(0x%llx,0x%llx) changed=(0x%llx,0x%llx) scroll=(0x%llx,0x%llx) source_wish=(%.9f,%.9f) sent_wish=(%.9f,%.9f) source_yaw=%.3f sent_yaw=%.3f analog_stream=%d subticks=%d physical_edges_preserved=%d server_ack=unverified"
               );
  local_11f8 = &PTR_180700558;
  if (local_10f8[0] != '\0') {
    local_11f8 = (undefined **)&DAT_1806bcfc0;
  }
  uVar15 = 0;
LAB_18024b617:
  local_11f0 = local_10f8;
  FUN_1800f6900(uVar15);
}



