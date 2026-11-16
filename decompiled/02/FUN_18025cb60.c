// FUN_18025cb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025cb60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18025cb60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined1 (*pauVar2) [32];
  undefined8 *puVar3;
  float fVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined1 auVar9 [32];
  undefined1 *puVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  float *pfVar17;
  float *pfVar18;
  int *piVar19;
  longlong *plVar20;
  ULONGLONG UVar21;
  byte bVar22;
  int *piVar23;
  longlong lVar24;
  ulonglong uVar25;
  float *pfVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong *puVar31;
  int *piVar32;
  float fVar33;
  longlong lVar34;
  longlong lVar35;
  char cVar36;
  longlong lVar37;
  ulonglong uVar38;
  bool bVar39;
  bool bVar40;
  char cVar41;
  float fVar42;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar43;
  double dVar44;
  float fVar45;
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auVar49 [64];
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auStackY_1308 [32];
  int local_1298;
  float local_1294;
  longlong local_1290;
  longlong local_1288 [2];
  undefined8 local_1278;
  longlong *local_1270;
  longlong *local_1268;
  int local_1260 [3];
  float local_1254;
  ulonglong local_1250;
  undefined8 *local_1248 [2];
  char *local_1238;
  undefined8 local_1230;
  undefined1 local_1228 [16];
  undefined1 local_1218 [16];
  undefined1 auStack_1208 [16];
  uint local_11f8;
  undefined4 uStack_11f4;
  undefined4 uStack_11f0;
  undefined4 uStack_11ec;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined1 local_11d8 [32];
  undefined8 local_11b8;
  ulonglong uStack_11b0;
  ulonglong uStack_11a8;
  uint5 uStack_11a0;
  undefined3 uStack_119b;
  undefined1 local_1198 [16];
  longlong lStack_1188;
  uint uStack_1180;
  uint uStack_117c;
  undefined1 local_1178;
  undefined7 uStack_1177;
  undefined8 local_1168;
  undefined1 local_1160 [8];
  undefined1 local_1158 [24];
  int *piStack_1140;
  undefined1 *local_1138;
  ulonglong local_1130;
  undefined1 local_1128 [4096];
  undefined1 local_128 [8];
  undefined1 local_120 [16];
  ulonglong *local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [16];
  int *local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStackY_1308;
  local_1228 = ZEXT816(0x1807d0418);
  local_1268 = param_4;
  local_1248[0] = param_2;
  local_1168 = param_3;
  FUN_18017bf40(local_1228 + 8);
  local_120 = (undefined1  [16])0x0;
  local_110 = (ulonglong *)0x0;
  puVar14 = (ulonglong *)FUN_18015bca0();
  uVar15 = local_120._8_8_;
  if (local_120._0_8_ != local_120._8_8_) {
    puVar31 = (ulonglong *)(local_120._0_8_ + 0x10);
    puVar27 = puVar14;
    do {
      *puVar27 = puVar31[-2];
      uVar28 = puVar31[1];
      puVar31[1] = 0;
      uVar38 = *puVar31;
      *puVar31 = 0;
      uVar25 = puVar31[-1];
      puVar31[-1] = 0;
      puVar27[1] = uVar25;
      puVar27[2] = uVar38;
      puVar27[3] = uVar28;
      puVar27 = puVar27 + 4;
      puVar1 = puVar31 + 2;
      puVar31 = puVar31 + 4;
    } while (puVar1 != (ulonglong *)local_120._8_8_);
  }
  if ((ulonglong *)local_120._0_8_ != (ulonglong *)0x0) {
    puVar27 = (ulonglong *)local_120._0_8_;
    if (local_120._0_8_ != local_120._8_8_) {
      do {
        FUN_180159650();
        puVar27 = puVar27 + 4;
      } while (puVar27 != (ulonglong *)uVar15);
    }
    puVar27 = (ulonglong *)local_120._0_8_;
    if ((0xfff < ((longlong)local_110 - local_120._0_8_ & 0xffffffffffffffe0U)) &&
       (puVar27 = *(ulonglong **)(local_120._0_8_ + -8),
       0x1f < (ulonglong)(local_120._0_8_ + (-8 - (longlong)puVar27)))) goto LAB_18025e00c;
    FUN_1804547d0(puVar27);
  }
  local_120._8_8_ = puVar14;
  local_120._0_8_ = puVar14;
  local_110 = puVar14 + 0x40;
  local_1298 = 0;
  lVar16 = *param_4;
  lVar37 = (param_4[1] - lVar16) / 0x98;
  puVar27 = puVar14;
  if (0 < (int)lVar37) {
    do {
      iVar12 = local_1298;
      uVar28 = *(ulonglong *)((longlong)local_1298 * 0x98 + 0x90 + lVar16);
      for (; puVar14 != puVar27; puVar14 = puVar14 + 4) {
        if (*puVar14 == uVar28) {
          piVar32 = (int *)puVar14[2];
          if (piVar32 == (int *)puVar14[3]) {
            FUN_18026b910(puVar14 + 1,piVar32,&local_1298);
          }
          else {
            *piVar32 = local_1298;
            puVar14[2] = puVar14[2] + 4;
          }
          goto LAB_18025ceb4;
        }
      }
      _local_1158 = ZEXT832(uVar28);
      uVar15 = FUN_18015bca0(0x40);
      FUN_18063aed0(uVar15,local_1158._8_8_,local_1158._16_8_ - local_1158._8_8_);
      FUN_180158f30(local_1158 + 8,uVar15,0,0x10);
      if ((int *)local_1158._16_8_ == piStack_1140) {
        FUN_18026b910(local_1158 + 8,local_1158._16_8_,&local_1298);
      }
      else {
        *(int *)local_1158._16_8_ = iVar12;
        local_1158._16_8_ = (int *)(local_1158._16_8_ + 4);
      }
      if ((ulonglong *)local_120._8_8_ == local_110) {
        FUN_1802686b0(local_120,local_120._8_8_,local_1158);
      }
      else {
        *(undefined8 *)local_120._8_8_ = local_1158._0_8_;
        piVar32 = piStack_1140;
        uVar43 = local_1158._16_8_;
        uVar15 = local_1158._8_8_;
        _local_1158 = ZEXT832((ulonglong)local_1158._0_8_);
        *(undefined8 *)(local_120._8_8_ + 8) = uVar15;
        *(undefined8 *)(local_120._8_8_ + 0x10) = uVar43;
        *(int **)(local_120._8_8_ + 0x18) = piVar32;
        local_120._8_8_ = (ulonglong *)(local_120._8_8_ + 0x20);
      }
      FUN_180159650(local_1158 + 8);
LAB_18025ceb4:
      local_1298 = iVar12 + 1;
      lVar16 = *param_4;
      lVar37 = (param_4[1] - lVar16) / 0x98;
      puVar14 = (ulonglong *)local_120._0_8_;
      puVar27 = (ulonglong *)local_120._8_8_;
    } while (local_1298 < (int)lVar37);
  }
  lVar16 = FUN_180252d60(&DAT_180c7e1f0,lVar37,DAT_180cc934c);
  local_e8 = local_108;
  local_1290 = lVar16;
  if (puVar14 != puVar27) {
    puVar14 = puVar14 + 1;
    uVar15 = extraout_XMM0_Qa;
    while( true ) {
      if (*(char *)(lVar16 + 0x318) == '\0') {
        uVar15 = FUN_180264fd0(puVar14);
      }
      else {
        pfVar26 = (float *)*puVar14;
        pfVar18 = (float *)puVar14[1];
        iVar12 = (int)((longlong)pfVar18 - (longlong)pfVar26 >> 2);
        if (8 < iVar12) {
          iVar12 = 8;
        }
        lVar37 = (longlong)iVar12;
        local_1278 = &local_e8;
        lVar16 = lVar37 * 4;
        local_1288[0] = lVar37;
        local_1270 = param_4;
        if (pfVar26 != pfVar26 + lVar37) {
          lVar24 = lVar16 >> 2;
          lVar35 = lVar16 >> 3;
          while (0 < lVar35) {
            lVar35 = lVar35 + -1;
            local_1294 = pfVar26[lVar35];
            uVar15 = FUN_180267e60(pfVar26,lVar35,lVar24,&local_1294);
          }
          for (pfVar17 = pfVar26 + lVar37; pfVar17 < pfVar18; pfVar17 = pfVar17 + 1) {
            lVar35 = *local_1270;
            lVar30 = (longlong)(int)*pfVar17;
            lVar34 = (longlong)(int)*pfVar26;
            uVar43 = FUN_18025e030(uVar15,lVar30 * 0x98 + lVar35);
            fVar33 = (float)lVar30;
            uVar15 = FUN_18025e030(uVar43,lVar34 * 0x98 + lVar35);
            if ((float)uVar15 < (float)uVar43) {
              *pfVar17 = (float)lVar34;
              local_1294 = fVar33;
              uVar15 = FUN_180267e60(pfVar26,0,lVar24,&local_1294);
            }
          }
          pfVar18 = pfVar26 + lVar37;
          if (1 < lVar24) {
            do {
              pfVar18 = pfVar18 + -1;
              local_1294 = *pfVar18;
              *pfVar18 = *pfVar26;
              FUN_180267e60(pfVar26,0,(longlong)pfVar18 - (longlong)pfVar26 >> 2,&local_1294);
              lVar16 = lVar16 + -4;
            } while (7 < lVar16);
          }
          param_4 = local_1268;
        }
        uVar15 = FUN_1802662a0(puVar14);
        lVar16 = local_1290;
      }
      if (puVar14 + 3 == puVar27) break;
      puVar14 = puVar14 + 4;
    }
    puVar14 = (ulonglong *)local_120._0_8_;
    puVar27 = (ulonglong *)local_120._8_8_;
  }
  local_128[0] = 0;
  local_1278 = (undefined1 **)local_128;
  lVar37 = (longlong)puVar27 - (longlong)puVar14 >> 5;
  local_1270 = param_4;
  if (lVar37 < 0x21) {
    FUN_180266600(puVar14,puVar27,&local_1278);
  }
  else {
    uVar38 = lVar37 - (lVar37 - ((longlong)puVar27 - (longlong)puVar14 >> 0x3f) >> 1);
    uVar28 = 0x7fffffffffffffff;
    if ((longlong)uVar38 < 0x7fffffffffffffff) {
      uVar28 = uVar38;
    }
    if (0x80 < uVar38) {
      if ((uVar28 < 0x800000000000000) && (0 < (longlong)uVar28)) {
        do {
          local_1138 = (undefined1 *)FUN_1805f6194(uVar28 << 5,&DAT_1806898a0);
          if (local_1138 != (undefined1 *)0x0) {
            if (0x80 < uVar28) goto LAB_18025d1d5;
            goto LAB_18025d186;
          }
          uVar28 = uVar28 >> 1;
        } while (uVar28 != 0);
      }
      local_1138 = (undefined1 *)0x0;
LAB_18025d186:
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1238 = "tier0.dll:g_pMemAlloc";
        local_1230 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1238);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1138);
      uVar38 = 0x80;
    }
    uVar28 = uVar38;
    local_1138 = local_1128;
LAB_18025d1d5:
    local_1130 = uVar28;
    FUN_1802669a0(puVar14,puVar27,lVar37,local_1138);
    puVar10 = local_1138;
    if (0x80 < local_1130) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1238 = "tier0.dll:g_pMemAlloc";
        local_1230 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1238);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar10);
    }
  }
  local_100 = (undefined1  [16])0x0;
  local_f0 = (int *)0x0;
  lVar37 = (local_1268[1] - *local_1268) / 0x26 + (local_1268[1] - *local_1268 >> 0x3f);
  uVar28 = (lVar37 >> 2) - (lVar37 >> 0x3f);
  if (uVar28 != 0) {
    if (0x1555555555555555 < uVar28) {
                    /* WARNING: Subroutine does not return */
      FUN_1801baf80();
    }
    uVar15 = FUN_18015bca0(uVar28 * 0xc);
    FUN_18063aed0(uVar15,local_100._0_8_,local_100._8_8_ - local_100._0_8_);
    FUN_1802691b0(local_100,uVar15,0,uVar28);
  }
  iVar12 = FUN_180252cb0(lVar16);
  local_1260[1] = 100;
  local_1260[0] = 0;
  if (iVar12 < 1) {
    piVar32 = (int *)(lVar16 + 0x598);
    if (iVar12 != 0) {
      piVar32 = (int *)(lVar16 + 0x524);
    }
  }
  else {
    piVar32 = (int *)((longlong)(iVar12 + -1) * 0x70 + 0x1b8 + lVar16);
  }
  piVar23 = local_1260;
  if (-1 < *piVar32) {
    piVar23 = piVar32;
  }
  piVar19 = local_1260 + 1;
  if (*piVar32 < 0x65) {
    piVar19 = piVar23;
  }
  fVar33 = 100.0;
  local_1294 = (float)*piVar19 / 100.0;
  FUN_18017bf40(local_1288);
  lVar16 = local_1288[0];
  lVar37 = 0;
  local_1288[0] = 0;
  uVar28 = (longlong)(local_120._8_8_ - local_120._0_8_) >> 5;
  if (uVar28 < 2) {
    local_1250 = 0;
  }
  else {
    iVar12 = DAT_180cc935c;
    if (DAT_180cc935c < 0) {
      iVar12 = 0;
    }
    local_1250 = (ulonglong)(longlong)iVar12 % (uVar28 - 1);
  }
  local_1298 = 0;
  lVar35 = 0;
  auVar46 = ZEXT464(0x3f800000);
  auVar49 = ZEXT864(0);
  local_1254 = 0.0;
  auVar53 = ZEXT464(0x49742400);
  fVar48 = 10000.0;
  fVar51 = 100000.0;
  fVar45 = 5.0;
  auVar57 = ZEXT464(0x437a0000);
  local_1260[2] = 0x42480000;
  fVar50 = 0.1;
  piVar32 = (int *)local_100._8_8_;
  do {
    uVar28 = local_1250;
    iVar12 = local_1298;
    if (lVar37 != 0) {
      plVar20 = (longlong *)FUN_18017bf40();
      auVar52 = auVar49._0_16_;
      if (lVar16 + 1000000 <= *plVar20) break;
      piVar32 = (int *)local_100._8_8_;
    }
    uVar38 = 0;
    if ((longlong)(local_120._8_8_ - local_120._0_8_) >> 5 != 0) {
      do {
        if (lVar37 != 0) {
          plVar20 = (longlong *)FUN_18017bf40();
          piVar32 = (int *)local_100._8_8_;
          if (lVar16 + 1000000 <= *plVar20) break;
        }
        lVar24 = 0;
        if (uVar38 != 0) {
          lVar24 = ((uVar28 - 1) + uVar38) %
                   (((longlong)(local_120._8_8_ - local_120._0_8_) >> 5) - 1U) + 1;
        }
        lVar24 = lVar24 * 0x20;
        lVar30 = *(longlong *)(lVar24 + local_120._0_8_);
        if ((lVar30 != 0) && (*(char *)(lVar30 + 0x23b8) != '\0')) {
          lVar34 = *(longlong *)(lVar24 + 8 + local_120._0_8_);
          if (iVar12 < (int)(*(longlong *)(lVar24 + 0x10 + local_120._0_8_) - lVar34 >> 2)) {
            iVar12 = *(int *)(lVar34 + lVar35);
            lVar29 = (longlong)iVar12 * 0x98;
            lVar24 = *local_1268;
            lVar34 = *(longlong *)(lVar29 + 0x90 + lVar24);
            if ((lVar34 != 0) && (*(char *)(lVar34 + 0x23b8) != '\0')) {
              iVar5 = *(int *)(lVar29 + 0x2c + lVar24);
              if ((-1 < iVar5) && ((iVar5 < *(int *)(lVar34 + 0x36c) && (iVar5 < 0x80)))) {
                if (*(char *)(local_1290 + 0x318) == '\0') {
                  fVar42 = (float)FUN_1802757f0((longlong)iVar5 * 0x20 + lVar30 + 0x370,
                                                lVar24 + 0x60 + lVar29,lVar24 + 0xc + lVar29,
                                                lVar24 + 0x30 + lVar29);
                  piVar32 = (int *)local_100._8_8_;
                }
                else {
                  fVar42 = auVar46._0_4_;
                }
                lVar37 = lVar37 + 1;
                fVar4 = *(float *)(lVar29 + 0x18 + lVar24);
                if ((*(char *)(local_1290 + 0x318) != '\0') || (local_1294 <= fVar42)) {
                  uVar13 = 1;
                }
                else {
                  uVar13 = 0;
                }
                auVar52 = vpcmpeqd_avx(ZEXT416(uVar13),ZEXT416(0));
                auVar55 = auVar49._0_16_;
                auVar52 = vblendvps_avx(auVar53._0_16_,auVar55,auVar52);
                if (fVar4 < (float)*(int *)(lVar29 + 0x88 + lVar24)) {
                  fVar4 = fVar42 * fVar4 * fVar33 + fVar4 * fVar45;
                }
                else {
                  fVar4 = fVar42 * fVar48 + fVar51;
                }
                auVar6 = vpcmpeqd_avx(ZEXT116(*(byte *)(lVar29 + 0x59 + lVar24)),ZEXT416(0));
                auVar6 = vblendvps_avx(auVar55,auVar57._0_16_,auVar6);
                auVar7 = vpcmpeqd_avx(ZEXT116(*(byte *)(lVar29 + 0x58 + lVar24)),
                                      SUB6416(ZEXT464(0),0));
                auVar55 = vblendvps_avx(ZEXT416((uint)local_1260[2]),auVar55,auVar7);
                iVar5 = *(int *)(lVar29 + 0x24 + lVar24);
                if (iVar5 == 0) {
                  bVar22 = 4;
                }
                else if (iVar5 - 1U < 6) {
                  bVar22 = 3;
                }
                else if (iVar5 - 0xdU < 6) {
                  bVar22 = 2;
                }
                else {
                  bVar22 = iVar5 - 7U < 6;
                }
                fVar4 = ((float)bVar22 + (float)bVar22 +
                        auVar6._0_4_ + auVar52._0_4_ + fVar4 + auVar55._0_4_) -
                        fVar50 * *(float *)(lVar29 + 0x20 + lVar24);
                local_1278 = (undefined1 **)CONCAT44(fVar42,iVar12);
                local_1270 = (longlong *)CONCAT44(local_1270._4_4_,fVar4);
                local_1288[0] = lVar37;
                if (piVar32 != local_f0) {
                  *piVar32 = iVar12;
                  piVar32[1] = (int)fVar42;
                  piVar32[2] = (int)fVar4;
                  piVar32 = (int *)(local_100._8_8_ + 0xc);
                  local_100._8_8_ = piVar32;
                  iVar12 = local_1298;
                  goto LAB_18025d739;
                }
                FUN_1802684e0();
                piVar32 = (int *)local_100._8_8_;
              }
            }
            iVar12 = local_1298;
          }
        }
LAB_18025d739:
        uVar38 = uVar38 + 1;
        if ((ulonglong)((longlong)(local_120._8_8_ - local_120._0_8_) >> 5) <= uVar38) break;
        uVar28 = local_1250;
      } while( true );
    }
    auVar52 = auVar49._0_16_;
    local_1298 = iVar12 + 1;
    lVar35 = lVar35 + 4;
  } while (lVar35 < 0x20);
  auVar9 = local_11d8;
  local_1218 = ZEXT816(0);
  auStack_1208 = ZEXT816(0);
  _local_1158 = ZEXT1632(auVar52);
  local_11f8 = auVar52._0_4_;
  uStack_11f4 = 0;
  uStack_11f0 = 0;
  uStack_11ec = 0;
  uStack_11e8 = 0xffffffffffffffff;
  uStack_11e0 = CONCAT44(local_11f8,local_11f8);
  local_11d8._16_4_ = local_11f8;
  local_11d8._0_16_ = ZEXT816(0);
  local_11d8._22_10_ = auVar9._22_10_;
  local_11d8._20_2_ = 0;
  local_11d8._27_5_ = auVar9._27_5_;
  local_11d8._24_3_ = 0;
  local_11d8._28_4_ = 0;
  local_11b8 = CONCAT44(local_11f8,local_11f8);
  uStack_11b0 = (ulonglong)local_11f8;
  uStack_11a8 = (ulonglong)local_11f8;
  uStack_11a0 = (uint5)local_11f8;
  lVar37 = 0;
  local_1198._0_12_ = ZEXT812(0);
  lVar16 = 0;
  lStack_1188 = 0;
  bVar8 = false;
  local_1178 = 0;
  auVar49 = ZEXT1664(auVar52);
  auVar46 = ZEXT1664(SUB6416(ZEXT464(0x7f7fffff),0));
  auVar53 = ZEXT1664(auVar52);
  auVar57 = ZEXT1664(SUB6416(ZEXT464(0x7f7fffff),0));
  uStack_1180 = local_11f8;
  uStack_117c = local_11f8;
  UVar21 = GetTickCount64();
  if (DAT_180c64800 <= UVar21) {
    DAT_180c64800 = UVar21 + 2000;
    FUN_18017bf40(&local_1238);
    FUN_18017bf40(local_1160);
    FUN_18063ab10(&local_1138,0,0x600);
    FUN_18015ad60(&local_1138,0x600,0xffffffffffffffff,
                  "groups=%zu tested=%zu budget_us=1000 elapsed_us=%lld exhausted=%d samples=256 point_ranking=%s"
                 );
    FUN_1800f6900();
  }
  if (local_100._0_8_ != local_100._8_8_) {
    auVar54 = ZEXT464(DAT_180b8e138);
    auVar56 = ZEXT464(DAT_180b8e134);
    auVar58 = ZEXT464(DAT_180b8e130);
    uVar13 = 0x7fffffff;
    fVar33 = 0.01;
    cVar36 = '\0';
    pfVar26 = (float *)(local_100._0_8_ + 8);
    do {
      fVar48 = pfVar26[-2];
      if (-1 < (int)fVar48) {
        lVar35 = *local_1268;
        if ((int)fVar48 < (int)((local_1268[1] - lVar35) / 0x98)) {
          lVar30 = (longlong)(int)fVar48 * 0x98;
          lVar24 = *(longlong *)(lVar30 + 0x90 + lVar35);
          if ((lVar24 != 0) && (*(char *)(lVar24 + 0x23b8) != '\0')) {
            fVar48 = *(float *)(lVar24 + 0x2378) - auVar54._0_4_;
            fVar51 = *(float *)(lVar24 + 0x2374) - auVar56._0_4_;
            fVar45 = *(float *)(lVar24 + 0x2370) - auVar58._0_4_;
            auVar52 = vpcmpeqd_avx(ZEXT416(DAT_180c7e258),SUB6416(ZEXT464(0),0));
            auVar52 = vblendvps_avx(ZEXT416(*(uint *)(lVar30 + 0x20 + lVar35)),
                                    ZEXT416((uint)(fVar45 * fVar45 + fVar51 * fVar51 +
                                                  fVar48 * fVar48)),auVar52);
            auVar47 = ZEXT1664(auVar52);
            auVar49 = ZEXT1664(auVar49._0_16_);
            auVar46 = ZEXT1664(auVar46._0_16_);
            auVar53 = ZEXT1664(auVar53._0_16_);
            auVar57 = ZEXT1664(auVar57._0_16_);
            auVar54 = ZEXT1664(auVar54._0_16_);
            auVar56 = ZEXT1664(auVar56._0_16_);
            auVar58 = ZEXT1664(auVar58._0_16_);
            sVar11 = thunk_FUN_180624430();
            auVar52 = auVar47._0_16_;
            if ((0 < sVar11) || (auVar47._0_4_ < local_1254)) {
              auVar52 = auVar57._0_16_;
            }
            fVar48 = auVar49._0_4_;
            fVar51 = auVar53._0_4_;
            if (bVar8) {
              lVar24 = *(longlong *)(lVar30 + 0x80 + lVar35);
              fVar45 = auVar52._0_4_;
              fVar50 = auVar46._0_4_;
              if (*(char *)(local_1290 + 0x318) == '\0') {
                fVar42 = pfVar26[-1];
                bVar40 = local_1294 <= fVar42;
                if (bVar40 == local_1294 <= fVar48) {
                  if (lVar24 != lVar37) {
                    if (NAN(fVar45) || NAN(fVar50)) goto LAB_18025dab4;
                    if (fVar45 != fVar50) {
                      bVar40 = fVar50 == fVar45;
                      bVar39 = fVar50 < fVar45;
                      goto LAB_18025db00;
                    }
                  }
                  if (fVar42 == fVar48) goto LAB_18025daf1;
                  bVar40 = fVar42 == fVar48;
                  bVar39 = fVar42 < fVar48;
                  goto LAB_18025db00;
                }
              }
              else {
                if ((lVar24 == lVar37) || (fVar45 == fVar50)) {
LAB_18025daf1:
                  bVar40 = *pfVar26 == fVar51;
                  bVar39 = *pfVar26 < fVar51;
                }
                else {
LAB_18025dab4:
                  bVar40 = fVar50 == fVar45;
                  bVar39 = fVar50 < fVar45;
                }
LAB_18025db00:
                bVar40 = !bVar39 && !bVar40;
              }
              if (bVar40) goto LAB_18025db0b;
              cVar41 = '\0';
            }
            else {
LAB_18025db0b:
              cVar41 = '\x01';
            }
            if ((((bVar8) && (*(longlong *)(lVar30 + 0x80 + lVar35) == lVar37)) &&
                ((*(char *)(local_1290 + 0x318) != '\0' || (pfVar26[-1] == fVar48)))) &&
               ((float)((uint)(*pfVar26 - fVar51) & uVar13) < fVar33)) {
              lVar24 = *(longlong *)(lVar30 + 0x90 + lVar35);
              cVar41 = *(char *)(lVar24 + 0x23bb);
              if (cVar41 == *(char *)(lVar16 + 0x23bb)) {
                iVar12 = *(int *)(lVar24 + 0x23b4);
                if (iVar12 == *(int *)(lVar16 + 0x23b4)) {
                  cVar41 = *(char *)(lVar30 + 0x58 + lVar35);
                  if (cVar41 == cVar36) {
                    cVar41 = *(float *)(lVar30 + 0x20 + lVar35) < local_1158._0_4_;
                  }
                }
                else {
                  cVar41 = *(int *)(lVar16 + 0x23b4) <= iVar12;
                }
              }
              else {
                cVar41 = cVar41 == '\0';
              }
            }
            if (cVar41 != '\0') {
              local_1218 = *(undefined1 (*) [16])(lVar30 + lVar35);
              auStack_1208 = ((undefined1 (*) [16])(lVar30 + lVar35))[1];
              pauVar2 = (undefined1 (*) [32])(lVar30 + 0x20 + lVar35);
              uStack_11e8 = *(undefined8 *)(*pauVar2 + 0x10);
              uStack_11e0 = *(undefined8 *)(*pauVar2 + 0x18);
              _local_1158 = *pauVar2;
              local_11f8 = (uint)*(undefined8 *)*pauVar2;
              uStack_11f4 = (undefined4)((ulonglong)*(undefined8 *)*pauVar2 >> 0x20);
              uStack_11f0 = (undefined4)*(undefined8 *)(*pauVar2 + 8);
              uStack_11ec = (undefined4)((ulonglong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
              local_11d8 = *(undefined1 (*) [32])(lVar30 + 0x40 + lVar35);
              puVar3 = (undefined8 *)(lVar30 + 0x60 + lVar35);
              local_11b8 = *puVar3;
              uStack_11b0 = puVar3[1];
              uStack_11a8 = puVar3[2];
              _uStack_11a0 = puVar3[3];
              local_1198 = *(undefined1 (*) [16])(lVar30 + 0x80 + lVar35);
              lVar16 = *(longlong *)(lVar30 + 0x90 + lVar35);
              auVar49 = ZEXT464((uint)pfVar26[-1]);
              auVar53 = ZEXT464((uint)*pfVar26);
              auVar46 = ZEXT1664(auVar52);
              bVar8 = true;
              lVar37 = local_1198._0_8_;
              cVar36 = local_11d8[0x18];
              lStack_1188 = lVar16;
            }
          }
        }
      }
      pfVar18 = pfVar26 + 1;
      pfVar26 = pfVar26 + 3;
    } while (pfVar18 != (float *)local_100._8_8_);
    uStack_1180 = auVar49._0_4_;
    uStack_117c = auVar53._0_4_;
    local_1178 = bVar8;
  }
  *local_1248[0] = local_1218._0_8_;
  local_1248[0][1] = local_1218._8_8_;
  local_1248[0][2] = auStack_1208._0_8_;
  local_1248[0][3] = auStack_1208._8_8_;
  local_1248[0][4] = CONCAT44(uStack_11f4,local_11f8);
  local_1248[0][5] = CONCAT44(uStack_11ec,uStack_11f0);
  local_1248[0][6] = uStack_11e8;
  local_1248[0][7] = uStack_11e0;
  local_1248[0][8] = local_11d8._0_8_;
  local_1248[0][9] = local_11d8._8_8_;
  local_1248[0][10] = local_11d8._16_8_;
  local_1248[0][0xb] = local_11d8._24_8_;
  local_1248[0][0xc] = local_11b8;
  local_1248[0][0xd] = uStack_11b0;
  local_1248[0][0xe] = uStack_11a8;
  local_1248[0][0xf] = _uStack_11a0;
  local_1248[0][0x10] = local_1198._0_8_;
  local_1248[0][0x11] = local_1198._8_8_;
  local_1248[0][0x12] = lStack_1188;
  local_1248[0][0x13] = CONCAT44(uStack_117c,uStack_1180);
  local_1248[0][0x14] = CONCAT71(uStack_1177,local_1178);
  if (local_100._0_8_ != 0) {
    if ((0xfff < (ulonglong)((((longlong)local_f0 - local_100._0_8_) / 0xc) * 0xc)) &&
       (0x1f < (local_100._0_8_ - *(longlong *)(local_100._0_8_ + -8)) - 8U)) {
LAB_18025e00c:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
    local_100 = (undefined1  [16])0x0;
    local_f0 = (int *)0x0;
  }
  if (local_120._0_8_ != 0) {
    uVar15 = local_120._8_8_;
    lVar16 = local_120._0_8_;
    if (local_120._0_8_ != local_120._8_8_) {
      do {
        FUN_180159650();
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != uVar15);
    }
    lVar16 = local_120._0_8_;
    if ((0xfff < ((longlong)local_110 - local_120._0_8_ & 0xffffffffffffffe0U)) &&
       (lVar16 = *(longlong *)(local_120._0_8_ + -8), 0x1f < (local_120._0_8_ - lVar16) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar16);
    local_120 = (undefined1  [16])0x0;
    local_110 = (ulonglong *)0x0;
  }
  FUN_18017bf40(local_1248);
  puVar3 = local_1248[0];
  uVar25 = (longlong)local_1248[0] - local_1228._8_8_;
  puVar14 = (ulonglong *)FUN_180267230();
  uVar28 = *puVar14;
  *puVar14 = uVar28 + 1;
  uVar38 = puVar14[1];
  puVar14[1] = uVar38 + uVar25;
  puVar14[3] = puVar14[3] + (ulonglong)(999999 < uVar25);
  puVar14[4] = puVar14[4] + (ulonglong)(4999999 < uVar25);
  puVar14[5] = puVar14[5] + (ulonglong)(15999999 < uVar25);
  if (puVar14[2] < uVar25) {
    puVar14[2] = uVar25;
  }
  if ((puVar3 == (undefined8 *)puVar14[7]) || ((longlong)puVar14[7] <= (longlong)puVar3)) {
    dVar44 = (double)(uVar38 + uVar25) / (double)(uVar28 + 1);
    FUN_1801af8a0(dVar44,dVar44 / 1000.0,local_1228._0_8_);
    puVar14[2] = 0;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[3] = 0;
    puVar14[6] = (ulonglong)puVar3;
    puVar14[7] = (ulonglong)(puVar3 + 625000000);
  }
}



