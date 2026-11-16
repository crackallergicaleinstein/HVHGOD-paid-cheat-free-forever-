// FUN_180502f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180502f50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180502f50(longlong param_1)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong lVar12;
  undefined4 *puVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  undefined *puVar19;
  ulonglong uVar20;
  int *piVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  int iVar25;
  undefined8 *puVar26;
  int *piVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 *puVar31;
  int iVar32;
  longlong lVar33;
  undefined4 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined4 uVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auStack_128 [32];
  char local_108;
  uint local_104;
  float local_100;
  ulonglong local_f8;
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [4];
  float afStack_b4 [3];
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  ulonglong local_88;
  
  lVar33 = DAT_180bb8ae8;
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  iVar8 = *(int *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x83) = 0;
  fVar42 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  local_108 = fVar42 < *(float *)(param_1 + 0x48);
  bVar2 = false;
  iVar25 = 0;
  iVar32 = 0;
  *(float *)(param_1 + 0x48) = fVar42;
  _local_b8 = (undefined1  [16])0x0;
  _local_a8 = (undefined1  [16])0x0;
  _local_98 = (undefined1  [16])0x0;
  if (0 < iVar8) {
    lVar30 = 0;
    do {
      lVar22 = *(longlong *)(param_1 + 0x10);
      if ((*(int *)(lVar30 + 8 + lVar22) < *(int *)(param_1 + 0x34)) ||
         (*(char *)(lVar30 + 0x28 + lVar22) != '\0')) {
        if (*(int *)(param_1 + 0x2c) == *(int *)(lVar30 + lVar22)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        if (*(int *)(param_1 + 0x20) == *(int *)(lVar30 + lVar22)) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        if (*(int *)(param_1 + 0x24) == *(int *)(lVar30 + lVar22)) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        if (iVar25 != iVar32) {
          puVar31 = (undefined8 *)(lVar30 + lVar22);
          uVar3 = puVar31[1];
          uVar4 = puVar31[2];
          uVar5 = puVar31[3];
          uVar10 = *(undefined8 *)(lVar30 + 0x20 + lVar22);
          uVar34 = *(undefined4 *)(lVar30 + 0x28 + lVar22);
          lVar17 = (longlong)iVar25 * 0x2c;
          puVar26 = (undefined8 *)(lVar17 + lVar22);
          *puVar26 = *puVar31;
          puVar26[1] = uVar3;
          puVar26[2] = uVar4;
          puVar26[3] = uVar5;
          *(undefined8 *)(lVar17 + 0x20 + lVar22) = uVar10;
          *(undefined4 *)(lVar17 + 0x28 + lVar22) = uVar34;
        }
        lVar22 = (longlong)iVar25 * 0x2c;
        uVar15 = *(uint *)(lVar22 + 4 + *(longlong *)(param_1 + 0x10));
        *(short *)(lVar22 + 0x26 + *(longlong *)(param_1 + 0x10)) = (short)iVar25;
        if ((uVar15 & 0x40) == 0) {
          uVar15 = ((uVar15 & 0x80) != 0) + 1;
        }
        else {
          uVar15 = 0;
        }
        if (0 < iVar25) {
          uVar9 = *(uint *)(lVar22 + -0x28 + *(longlong *)(param_1 + 0x10));
          cVar7 = '\0';
          if ((uVar9 & 0x40) == 0) {
            cVar7 = ((uVar9 & 0x80) != 0) + '\x01';
          }
          if (uVar15 == 0) {
            if (cVar7 == '\0') goto LAB_1805030b0;
            bVar2 = true;
          }
          if ((cVar7 == '\x02') && (uVar15 != 2)) {
            bVar2 = true;
          }
        }
LAB_1805030b0:
        *(int *)(local_b8 + (ulonglong)uVar15 * 0x10) =
             *(int *)(local_b8 + (ulonglong)uVar15 * 0x10) + 1;
        iVar25 = iVar25 + 1;
      }
      iVar8 = *(int *)(param_1 + 8);
      iVar32 = iVar32 + 1;
      lVar30 = lVar30 + 0x2c;
    } while (iVar32 < iVar8);
  }
  if (iVar8 != iVar25) {
    iVar8 = *(int *)(param_1 + 0xc);
    if (iVar8 < iVar25) {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      iVar32 = iVar25;
      if (iVar25 < iVar8) {
        iVar32 = iVar8;
      }
      FUN_180504740(param_1 + 8,iVar32);
    }
    *(int *)(param_1 + 8) = iVar25;
    iVar8 = iVar25;
  }
  if ((bVar2) && (1 < (ulonglong)(longlong)iVar8)) {
    FUN_1806192c0(*(undefined8 *)(param_1 + 0x10),(longlong)iVar8,0x2c);
  }
  uVar15 = *(uint *)(lVar33 + 0xcdc);
  auVar50 = ZEXT464(uVar15);
  auVar45 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (((int)local_b8 < 1) ||
     (afStack_b4[2] = (float)uVar15, (int)(local_98._0_4_ + local_a8._0_4_) < 1)) {
    afStack_b4[2] = (float)0;
  }
  if (((int)local_a8._0_4_ < 1) || (fStack_9c = (float)uVar15, (int)local_98._0_4_ < 1)) {
    fStack_9c = (float)0;
  }
  iVar8 = *(int *)(param_1 + 0x28);
  iVar25 = 0;
  if (iVar8 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar25 = iVar8;
  }
  iVar8 = *(int *)(param_1 + 0x24);
  if (iVar8 != 0) {
    *(int *)(param_1 + 0x20) = iVar8;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar25 = iVar8;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar8 = *(int *)(param_1 + 8);
    uVar20 = 0;
    if (0 < iVar8) {
      piVar18 = *(int **)(param_1 + 0x10);
      do {
        if (*piVar18 == *(int *)(param_1 + 0x7c)) {
          puVar31 = (undefined8 *)(uVar20 * 0x2c + *(longlong *)(param_1 + 0x10));
          if ((puVar31 != (undefined8 *)0x0) && ((*(uint *)((longlong)puVar31 + 4) & 0x20) == 0)) {
            sVar14 = *(short *)(param_1 + 0x80);
            iVar32 = (int)sVar14;
            iVar16 = (int)((uVar20 * 0x2c) / 0x2c) + iVar32;
            if ((-1 < iVar16) && (iVar16 < iVar8)) {
              puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar16 * 0x2c);
              if (((*(uint *)((longlong)puVar26 + 4) & 0x20) == 0) &&
                 (((*(uint *)((longlong)puVar31 + 4) ^ *(uint *)((longlong)puVar26 + 4)) & 0xc0) ==
                  0)) {
                uVar34 = *(undefined4 *)(puVar31 + 5);
                uStack_c8 = puVar31[3];
                uVar10 = puVar31[4];
                local_e0 = (undefined4)*puVar31;
                uStack_dc = (undefined4)((ulonglong)*puVar31 >> 0x20);
                uStack_d8 = (undefined4)puVar31[1];
                uStack_d4 = (undefined4)((ulonglong)puVar31[1] >> 0x20);
                uStack_d0 = (undefined4)puVar31[2];
                uStack_cc = (undefined4)((ulonglong)puVar31[2] >> 0x20);
                if (sVar14 < 1) {
                  puVar31 = (undefined8 *)((longlong)puVar26 + 0x2c);
                  puVar23 = puVar26;
                }
                else {
                  puVar23 = (undefined8 *)((longlong)puVar31 + 0x2c);
                }
                if (sVar14 < 1) {
                  iVar32 = -iVar32;
                }
                auVar45 = ZEXT1264(ZEXT812(0)) << 0x20;
                auVar50 = ZEXT464(uVar15);
                FUN_18063aed0(puVar31,puVar23,(longlong)iVar32 * 0x2c);
                *puVar26 = CONCAT44(uStack_dc,local_e0);
                puVar26[1] = CONCAT44(uStack_d4,uStack_d8);
                puVar26[2] = CONCAT44(uStack_cc,uStack_d0);
                puVar26[3] = uStack_c8;
                puVar26[4] = uVar10;
                *(undefined4 *)(puVar26 + 5) = uVar34;
                if (((*(uint *)(param_1 + 0x18) & 0x400000) != 0) &&
                   (*(float *)(DAT_180bb8ae8 + 0x277c) <= auVar45._0_4_)) {
                  *(undefined4 *)(DAT_180bb8ae8 + 0x277c) = *(undefined4 *)(DAT_180bb8ae8 + 0x44);
                }
                if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x20)) {
                  iVar25 = *(int *)(param_1 + 0x7c);
                }
              }
            }
          }
          break;
        }
        uVar9 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar9;
        piVar18 = piVar18 + 0xb;
      } while ((int)uVar9 < iVar8);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  lVar30 = DAT_180bb8ae8;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar34 = *(undefined4 *)(param_1 + 0x3c);
    uVar20 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    lVar22 = DAT_180bb8ae8 + 0x1f98;
    fVar42 = *(float *)(DAT_180bb8ae8 + 0xcc8);
    fVar43 = *(float *)(DAT_180bb8ae8 + 0x11e0);
    uVar46 = *(undefined4 *)(uVar20 + 0x118);
    uVar49 = *(undefined4 *)(uVar20 + 0x11c);
    *(float *)(uVar20 + 0x118) = *(float *)(param_1 + 0x38) - fVar42;
    *(undefined4 *)(uVar20 + 0x11c) = uVar34;
    *(float *)(param_1 + 0x38) = fVar42 + fVar43 + *(float *)(param_1 + 0x38);
    auVar44 = *(undefined1 (*) [16])(lVar30 + 0xdc8);
    auVar47 = vshufps_avx(auVar44,auVar44,0xff);
    local_f0._0_12_ = auVar44._0_12_;
    local_f0._12_4_ = auVar47._0_4_ * 0.5;
    uStack_dc = (undefined4)*(undefined8 *)(lVar30 + 0xdc8);
    uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xdc8) >> 0x20);
    uStack_d4 = (undefined4)*(undefined8 *)(lVar30 + 0xdd0);
    uStack_d0 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xdd0) >> 0x20);
    local_e0 = 0;
    auVar45 = ZEXT1664(auVar45._0_16_);
    auVar50 = ZEXT1664(auVar50._0_16_);
    local_f8 = uVar20;
    FUN_1804d0810(lVar22,&local_e0);
    if (*(int *)(lVar30 + 0x1f94) != 0) {
      *(undefined8 *)(lVar30 + 0xdc8) = local_f0._0_8_;
      *(undefined8 *)(lVar30 + 0xdd0) = local_f0._8_8_;
    }
    local_f0 = ZEXT816(0);
    FUN_1804b2af0(0x16,local_f0);
    cVar7 = FUN_1804f7f90();
    FUN_1804b2b70(2);
    piVar18 = (int *)0x0;
    if (cVar7 != '\0') {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        lVar30 = 0;
        do {
          piVar27 = (int *)(*(longlong *)(param_1 + 0x10) + lVar30);
          if ((piVar27[1] & 0x200000U) == 0) {
            if (piVar27[8] == -1) {
              puVar19 = &DAT_18085b248;
            }
            else {
              puVar19 = (undefined *)((longlong)piVar27[8] + *(longlong *)(param_1 + 0xa8));
            }
            local_104 = auVar45._0_4_;
            local_100 = (float)local_104;
            cVar7 = FUN_1804ff860(puVar19,*(int *)(param_1 + 0x20) == *piVar27,0);
            if (cVar7 != '\0') {
              piVar18 = piVar27;
            }
          }
          iVar8 = iVar8 + 1;
          lVar30 = lVar30 + 0x2c;
        } while (iVar8 < *(int *)(param_1 + 8));
        uVar20 = local_f8;
      }
      FUN_1804f8850();
    }
    *(undefined4 *)(uVar20 + 0x118) = uVar46;
    *(undefined4 *)(uVar20 + 0x11c) = uVar49;
    if (piVar18 != (int *)0x0) {
      iVar25 = *piVar18;
      *(int *)(param_1 + 0x20) = iVar25;
    }
  }
  auVar44 = local_f0;
  piVar18 = (int *)0x0;
  iVar32 = 8;
  iVar8 = *(int *)(param_1 + 8);
  auVar6._4_8_ = local_f0._8_8_;
  auVar6._0_4_ = local_98._0_4_ + (int)local_b8;
  uVar15 = *(uint *)(lVar33 + 0x23e4);
  uVar20 = (ulonglong)uVar15;
  local_f0._0_8_ = auVar6._0_8_ << 0x20;
  local_f0._12_4_ = auVar44._12_4_;
  local_f0._8_4_ = local_b8;
  if ((int)uVar15 < iVar8) {
    if (uVar15 != 0) {
      iVar32 = uVar15 + (int)uVar15 / 2;
    }
    iVar16 = iVar8;
    if (iVar8 < iVar32) {
      iVar16 = iVar32;
    }
    if ((int)uVar15 < iVar16) {
      uVar20 = (longlong)iVar16 * 0xc;
      auVar45 = ZEXT1664(auVar45._0_16_);
      auVar50 = ZEXT1664(auVar50._0_16_);
      uVar10 = FUN_1804b8110();
      if (*(longlong *)(lVar33 + 0x23e8) != 0) {
        FUN_18063aed0(uVar10,*(longlong *)(lVar33 + 0x23e8),
                      (longlong)*(int *)(lVar33 + 0x23e0) * 0xc);
        lVar30 = DAT_180bb8ae8;
        uVar20 = *(ulonglong *)(lVar33 + 0x23e8);
        if ((uVar20 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar27 = (int *)(DAT_180bb8ae8 + 4);
          piVar21 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar21 != *piVar27) {
            iVar32 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar14 = (short)iVar32 + (short)(iVar32 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar14;
            piVar21 = (int *)(lVar30 + ((longlong)sVar14 + 0x533) * 8);
            *piVar21 = *piVar27;
            piVar21[1] = 0;
          }
          *(short *)((longlong)piVar21 + 6) = *(short *)((longlong)piVar21 + 6) + 1;
          piVar27 = (int *)(lVar30 + 0x2990);
          *piVar27 = *piVar27 + 1;
        }
        thunk_FUN_180621380();
      }
      *(undefined8 *)(lVar33 + 0x23e8) = uVar10;
      *(int *)(lVar33 + 0x23e4) = iVar16;
    }
  }
  auVar44 = auVar45._0_16_;
  auVar48 = ZEXT464(0x3f800000);
  auVar47 = auVar48._0_16_;
  *(int *)(lVar33 + 0x23e0) = iVar8;
  if ((*(byte *)(param_1 + 0x18) & 0x80) == 0) {
    auVar51 = ZEXT1664(auVar47);
  }
  else {
    auVar51 = ZEXT464(*(uint *)(lVar33 + 0xd28));
  }
  iVar8 = *(int *)(param_1 + 8);
  uVar20 = uVar20 & 0xffffffffffffff00;
  local_f8 = CONCAT44(local_f8._4_4_,(int)uVar20);
  uVar28 = 0xffffffff;
  iVar32 = 0;
  local_104 = 0xffffffff;
  if (0 < iVar8) {
    lVar30 = 0;
    do {
      piVar27 = (int *)(*(longlong *)(param_1 + 0x10) + lVar30);
      if (((piVar18 == (int *)0x0) || (piVar18[3] < piVar27[3])) && ((piVar27[1] & 0x200000U) == 0))
      {
        piVar18 = piVar27;
      }
      iVar8 = *piVar27;
      uVar15 = (uint)uVar20 & 0xff;
      if (iVar8 == *(int *)(param_1 + 0x20)) {
        uVar15 = 1;
      }
      local_f8 = CONCAT44(local_f8._4_4_,uVar15);
      if ((iVar25 == 0) && (*(int *)(lVar33 + 0x220c) == iVar8)) {
        iVar25 = iVar8;
      }
      if (piVar27[8] == -1) {
        puVar19 = &DAT_18085b248;
      }
      else {
        puVar19 = (undefined *)((longlong)piVar27[8] + *(longlong *)(param_1 + 0xa8));
      }
      fVar42 = (float)piVar27[7];
      uVar15 = (uint)uVar28;
      if (fVar42 < auVar45._0_4_) {
        auVar45 = ZEXT1664(auVar45._0_16_);
        auVar48 = ZEXT1664(auVar48._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        auVar51 = ZEXT1664(auVar51._0_16_);
        pfVar11 = (float *)FUN_1805045e0(local_c0,puVar19,
                                         CONCAT71((int7)(uVar28 >> 8),
                                                  (piVar27[1] & 0x100001U) != 0x100000));
        fVar42 = *pfVar11;
        uVar15 = local_104;
      }
      auVar44 = auVar45._0_16_;
      auVar47 = auVar48._0_16_;
      uVar9 = piVar27[1];
      piVar27[6] = (int)fVar42;
      if ((uVar9 >> 0x15 & 1) == 0) {
        auVar36 = vmaxss_avx(ZEXT416((uint)fVar42),ZEXT416(*(uint *)(lVar33 + 0xd24)));
        fVar42 = auVar36._0_4_;
        piVar27[6] = (int)fVar42;
      }
      local_104 = 0;
      if ((uVar9 & 0x40) == 0) {
        local_104 = ((uVar9 & 0x80) != 0) + 1;
      }
      uVar20 = (ulonglong)local_104;
      lVar30 = lVar30 + 0x2c;
      auVar36 = vpcmpeqd_avx(ZEXT416(local_104),ZEXT416(uVar15));
      auVar36 = vblendvps_avx(auVar44,auVar50._0_16_,auVar36);
      afStack_b4[uVar20 * 4] = fVar42 + auVar36._0_4_ + afStack_b4[uVar20 * 4];
      auVar37 = vminss_avx(ZEXT416((uint)piVar27[6]),auVar51._0_16_);
      uVar28 = (ulonglong)local_104;
      iVar8 = *(int *)(local_f0 + (ulonglong)local_104 * 4);
      lVar17 = (longlong)iVar8;
      afStack_b4[uVar20 * 4 + 1] = auVar37._0_4_ + auVar36._0_4_ + afStack_b4[uVar20 * 4 + 1];
      *(int *)(local_f0 + (ulonglong)local_104 * 4) = iVar8 + 1;
      lVar22 = *(longlong *)(lVar33 + 0x23e8);
      *(int *)(lVar22 + lVar17 * 0xc) = iVar32;
      iVar32 = iVar32 + 1;
      iVar8 = piVar27[6];
      *(int *)(lVar22 + 8 + lVar17 * 0xc) = iVar8;
      *(int *)(lVar22 + 4 + lVar17 * 0xc) = iVar8;
      uVar20 = local_f8 & 0xffffffff;
      auVar36 = vmaxss_avx(ZEXT416((uint)piVar27[6]),auVar47);
      piVar27[5] = auVar36._0_4_;
      iVar8 = *(int *)(param_1 + 8);
    } while (iVar32 < iVar8);
  }
  uVar15 = *(uint *)(param_1 + 0x18);
  fVar42 = afStack_b4[2] + afStack_b4[1] + auVar44._0_4_ + fStack_9c + fStack_a0 +
           fStack_8c + fStack_90;
  *(float *)(param_1 + 0x58) =
       afStack_b4[2] + afStack_b4[0] + auVar44._0_4_ + fStack_9c + (float)local_a8._4_4_ +
       fStack_8c + (float)local_98._4_4_;
  if (((uVar15 & 0x200) == 0) && (-1 < (char)uVar15)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((uVar15 & 0x200) != 0) {
      fVar42 = *(float *)(param_1 + 0x54);
    }
  }
  if ((((fVar42 <= *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) || (iVar8 < 2)) ||
      ((uVar15 & 0x10) != 0)) || (!bVar2)) {
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x87) = 1;
    auVar45 = ZEXT1664(auVar44);
    auVar50 = ZEXT1664(auVar47);
    piVar27 = (int *)FUN_180504260(param_1);
    auVar44 = auVar45._0_16_;
    auVar47 = auVar50._0_16_;
    if (piVar27 != (int *)0x0) {
      if ((piVar27[1] & 0x200000U) == 0) {
        *(int *)(param_1 + 0x20) = *piVar27;
      }
      iVar25 = *piVar27;
    }
  }
  if ((iVar25 == 0) && (local_108 != '\0')) {
    iVar25 = *(int *)(param_1 + 0x20);
  }
  fVar43 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  fVar42 = (float)local_98._4_4_ + fStack_8c + afStack_b4[0] + afStack_b4[2];
  bVar2 = fVar42 < fVar43;
  if (bVar2) {
    auVar36 = vmaxss_avx(ZEXT416((uint)(((float)local_a8._4_4_ + fStack_9c) -
                                       ((fVar43 - (afStack_b4[0] + afStack_b4[2])) -
                                       ((float)local_98._4_4_ + fStack_8c)))),auVar44);
    fVar42 = auVar36._0_4_;
  }
  else {
    fVar42 = fVar42 - fVar43;
  }
  if (fVar42 < auVar47._0_4_) goto LAB_180503b70;
  if ((*(uint *)(param_1 + 0x18) & 0x180) == 0) {
    if (bVar2) goto LAB_180503b70;
LAB_1805038b1:
    iVar8 = local_98._0_4_ + (int)local_b8;
    if (bVar2) {
      local_104 = local_98._0_4_ + (int)local_b8;
    }
    else {
      local_104 = 0;
    }
  }
  else {
    if (!bVar2) goto LAB_1805038b1;
    local_104 = local_98._0_4_ + (int)local_b8;
    iVar8 = local_a8._0_4_;
  }
  lVar30 = (longlong)(int)local_104;
  lVar22 = lVar30 * 0xc;
  auVar45 = ZEXT1664(auVar44);
  auVar50 = ZEXT1664(auVar47);
  FUN_1804f7b10(*(longlong *)(lVar33 + 0x23e8) + lVar22,iVar8);
  auVar44 = auVar45._0_16_;
  lVar17 = (longlong)(int)(local_104 + iVar8);
  if (lVar30 < lVar17) {
    fVar42 = auVar45._0_4_;
    auVar47 = auVar50._0_16_;
    if (3 < lVar17 - lVar30) {
      lVar29 = ((lVar17 - lVar30) - 4U >> 2) + 1;
      lVar30 = lVar30 + lVar29 * 4;
      do {
        lVar24 = (longlong)*(int *)(*(longlong *)(lVar33 + 0x23e8) + lVar22) * 0x2c +
                 *(longlong *)(param_1 + 0x10);
        auVar36._0_4_ = (float)(int)*(float *)(*(longlong *)(lVar33 + 0x23e8) + 4 + lVar22);
        auVar36._4_12_ = SUB1612(ZEXT816(0),4);
        if (fVar42 <= auVar36._0_4_) {
          auVar36 = vmaxss_avx(auVar47,auVar36);
          if ((*(uint *)(lVar24 + 4) & 0x40) == 0) {
            lVar12 = (ulonglong)((*(uint *)(lVar24 + 4) & 0x80) != 0) + 1;
          }
          else {
            lVar12 = 0;
          }
          afStack_b4[lVar12 * 4] =
               afStack_b4[lVar12 * 4] - (*(float *)(lVar24 + 0x14) - auVar36._0_4_);
          *(float *)(lVar24 + 0x14) = auVar36._0_4_;
        }
        lVar24 = (longlong)*(int *)(*(longlong *)(lVar33 + 0x23e8) + 0xc + lVar22) * 0x2c +
                 *(longlong *)(param_1 + 0x10);
        auVar37._0_4_ = (float)(int)*(float *)(*(longlong *)(lVar33 + 0x23e8) + 0x10 + lVar22);
        auVar37._4_12_ = SUB1612(ZEXT816(0),4);
        if (fVar42 <= auVar37._0_4_) {
          auVar36 = vmaxss_avx(auVar47,auVar37);
          if ((*(uint *)(lVar24 + 4) & 0x40) == 0) {
            lVar12 = (ulonglong)((*(uint *)(lVar24 + 4) & 0x80) != 0) + 1;
          }
          else {
            lVar12 = 0;
          }
          afStack_b4[lVar12 * 4] =
               afStack_b4[lVar12 * 4] - (*(float *)(lVar24 + 0x14) - auVar36._0_4_);
          *(float *)(lVar24 + 0x14) = auVar36._0_4_;
        }
        lVar24 = (longlong)*(int *)(*(longlong *)(lVar33 + 0x23e8) + 0x18 + lVar22) * 0x2c +
                 *(longlong *)(param_1 + 0x10);
        auVar38._0_4_ = (float)(int)*(float *)(*(longlong *)(lVar33 + 0x23e8) + 0x1c + lVar22);
        auVar38._4_12_ = SUB1612(ZEXT816(0),4);
        if (fVar42 <= auVar38._0_4_) {
          auVar36 = vmaxss_avx(auVar47,auVar38);
          if ((*(uint *)(lVar24 + 4) & 0x40) == 0) {
            lVar12 = (ulonglong)((*(uint *)(lVar24 + 4) & 0x80) != 0) + 1;
          }
          else {
            lVar12 = 0;
          }
          afStack_b4[lVar12 * 4] =
               afStack_b4[lVar12 * 4] - (*(float *)(lVar24 + 0x14) - auVar36._0_4_);
          *(float *)(lVar24 + 0x14) = auVar36._0_4_;
        }
        lVar24 = (longlong)*(int *)(*(longlong *)(lVar33 + 0x23e8) + 0x24 + lVar22) * 0x2c +
                 *(longlong *)(param_1 + 0x10);
        auVar39._0_4_ = (float)(int)*(float *)(*(longlong *)(lVar33 + 0x23e8) + 0x28 + lVar22);
        auVar39._4_12_ = SUB1612(ZEXT816(0),4);
        if (fVar42 <= auVar39._0_4_) {
          auVar36 = vmaxss_avx(auVar47,auVar39);
          if ((*(uint *)(lVar24 + 4) & 0x40) == 0) {
            lVar12 = (ulonglong)((*(uint *)(lVar24 + 4) & 0x80) != 0) + 1;
          }
          else {
            lVar12 = 0;
          }
          afStack_b4[lVar12 * 4] =
               afStack_b4[lVar12 * 4] - (*(float *)(lVar24 + 0x14) - auVar36._0_4_);
          *(float *)(lVar24 + 0x14) = auVar36._0_4_;
        }
        lVar22 = lVar22 + 0x30;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      if (lVar17 <= lVar30) goto LAB_180503b70;
    }
    lVar22 = lVar30 * 0xc;
    lVar17 = lVar17 - lVar30;
    do {
      lVar30 = (longlong)*(int *)(lVar22 + *(longlong *)(lVar33 + 0x23e8)) * 0x2c +
               *(longlong *)(param_1 + 0x10);
      auVar40._0_4_ = (float)(int)*(float *)(lVar22 + 4 + *(longlong *)(lVar33 + 0x23e8));
      auVar40._4_12_ = SUB1612(ZEXT816(0),4);
      if (fVar42 <= auVar40._0_4_) {
        auVar36 = vmaxss_avx(auVar47,auVar40);
        if ((*(uint *)(lVar30 + 4) & 0x40) == 0) {
          lVar29 = (ulonglong)((*(uint *)(lVar30 + 4) & 0x80) != 0) + 1;
        }
        else {
          lVar29 = 0;
        }
        afStack_b4[lVar29 * 4] =
             afStack_b4[lVar29 * 4] - (*(float *)(lVar30 + 0x14) - auVar36._0_4_);
        *(float *)(lVar30 + 0x14) = auVar36._0_4_;
      }
      lVar22 = lVar22 + 0xc;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
LAB_180503b70:
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  auVar45 = ZEXT1664(auVar44);
  fVar43 = auVar44._0_4_;
  fVar42 = fVar43;
  if (0 < (int)local_b8) {
    lVar30 = 0;
    do {
      lVar22 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar30 + 0x10 + lVar22) = auVar45._0_4_;
      *(undefined4 *)(lVar30 + 0x20 + lVar22) = 0xffffffff;
      fVar42 = fVar43;
      if (iVar8 < (int)local_b8 + -1) {
        fVar42 = *(float *)(lVar33 + 0xcdc);
      }
      lVar17 = lVar30 + 0x14;
      lVar30 = lVar30 + 0x2c;
      iVar8 = iVar8 + 1;
      fVar42 = auVar45._0_4_ + fVar42 + *(float *)(lVar17 + lVar22);
      auVar45 = ZEXT464((uint)fVar42);
    } while (iVar8 < (int)local_b8);
  }
  iVar8 = 0;
  auVar47 = vmaxss_avx(ZEXT416((uint)(afStack_b4[2] + afStack_b4[0])),auVar44);
  *(float *)(param_1 + 0x54) = auVar47._0_4_ + *(float *)(param_1 + 0x54);
  fVar42 = fVar42 + afStack_b4[2];
  if (0 < (int)local_a8._0_4_) {
    lVar30 = (longlong)(int)local_b8 * 0x2c;
    do {
      lVar22 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar30 + 0x10 + lVar22) = fVar42;
      *(undefined4 *)(lVar30 + 0x20 + lVar22) = 0xffffffff;
      fVar35 = fVar43;
      if (iVar8 < local_a8._0_4_ + -1) {
        fVar35 = *(float *)(lVar33 + 0xcdc);
      }
      lVar17 = lVar30 + 0x14;
      lVar30 = lVar30 + 0x2c;
      iVar8 = iVar8 + 1;
      fVar42 = fVar42 + fVar35 + *(float *)(lVar17 + lVar22);
    } while (iVar8 < (int)local_a8._0_4_);
  }
  iVar8 = 0;
  auVar47 = vmaxss_avx(ZEXT416((uint)(fStack_9c + (float)local_a8._4_4_)),auVar44);
  *(float *)(param_1 + 0x54) = auVar47._0_4_ + *(float *)(param_1 + 0x54);
  auVar47 = vmaxss_avx(auVar44,ZEXT416((uint)((*(float *)(param_1 + 0x40) -
                                              *(float *)(param_1 + 0x38)) - (float)local_98._4_4_)))
  ;
  auVar47 = vminss_avx(auVar47,ZEXT416((uint)(fVar42 + fStack_9c)));
  auVar45 = ZEXT1664(auVar47);
  if (0 < (int)local_98._0_4_) {
    lVar30 = (longlong)((int)local_b8 + local_a8._0_4_) * 0x2c;
    do {
      lVar22 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar30 + 0x10 + lVar22) = auVar45._0_4_;
      *(undefined4 *)(lVar30 + 0x20 + lVar22) = 0xffffffff;
      fVar42 = fVar43;
      if (iVar8 < local_98._0_4_ + -1) {
        fVar42 = *(float *)(lVar33 + 0xcdc);
      }
      lVar17 = lVar30 + 0x14;
      lVar30 = lVar30 + 0x2c;
      iVar8 = iVar8 + 1;
      auVar45 = ZEXT464((uint)(auVar45._0_4_ + fVar42 + *(float *)(lVar17 + lVar22)));
    } while (iVar8 < (int)local_98._0_4_);
  }
  auVar47 = vmaxss_avx(ZEXT416((uint)((float)local_98._4_4_ + fStack_8c)),auVar44);
  *(float *)(param_1 + 0x54) = auVar47._0_4_ + *(float *)(param_1 + 0x54);
  iVar8 = *(int *)(param_1 + 0xa4);
  if (iVar8 < 0) {
    iVar8 = iVar8 + iVar8 / 2;
    iVar32 = 0;
    if (0 < iVar8) {
      iVar32 = iVar8;
    }
    auVar45 = ZEXT1664(auVar44);
    FUN_1804d0ea0(param_1 + 0xa0,iVar32);
    auVar44 = auVar45._0_16_;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (((char)local_f8 == '\0') && (*(int *)(lVar33 + 4) <= *(int *)(param_1 + 0x34) + 1)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar8 = *(int *)(param_1 + 0x20);
  if (((*(int *)(param_1 + 0x20) == 0) && (iVar8 = 0, *(int *)(param_1 + 0x24) == 0)) &&
     (piVar18 != (int *)0x0)) {
    iVar25 = *piVar18;
    *(int *)(param_1 + 0x20) = iVar25;
    iVar8 = iVar25;
  }
  *(int *)(param_1 + 0x2c) = iVar8;
  *(undefined2 *)(param_1 + 0x84) = 0;
  if (iVar25 == 0) {
    if (*(char *)(param_1 + 0x87) != '\0') {
      auVar45 = ZEXT1664(auVar44);
      cVar7 = FUN_1804c3600(param_1 + 0x38,param_1 + 0x40,1);
      auVar44 = auVar45._0_16_;
      if (cVar7 != '\0') {
        if (((((*(longlong *)(DAT_180bb8ae8 + 0x2040) == 0) ||
              (lVar30 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 0x3d8), lVar30 == 0))
             || ((*(char *)(lVar30 + 0xcd) == '\0' ||
                 (lVar22 = *(longlong *)(*(longlong *)(lVar33 + 0x14d0) + 0x3d8), lVar30 == lVar22))
                )) || (((*(uint *)(lVar30 + 0x14) >> 0x1b & 1) == 0 &&
                       ((*(uint *)(lVar30 + 0x14) >> 0x1a & 1) == 0)))) ||
           (*(longlong *)(lVar22 + 0x3d8) == lVar30)) {
LAB_180503e26:
          pfVar11 = (float *)(lVar33 + 0x120);
          if (*(char *)(lVar33 + 0xb9a) == '\0') {
            pfVar11 = (float *)(lVar33 + 0x124);
          }
          uVar34 = *(undefined4 *)(param_1 + 0x1c);
          uVar15 = (uint)(*(char *)(lVar33 + 0xb9a) != '\0');
          cVar7 = FUN_1804c5140(uVar15 + 0x295,uVar34);
          if ((cVar7 != '\0') && (fVar42 = *pfVar11, fVar42 != auVar45._0_4_)) {
            *(undefined4 *)(param_1 + 100) = 0;
            auVar44 = vminss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x60) -
                                               (((((*(float *)(param_1 + 0x40) -
                                                   *(float *)(param_1 + 0x38)) - afStack_b4[0]) -
                                                 (float)local_98._4_4_) - fStack_9c) * fVar42) / 3.0
                                               )),
                                 ZEXT416((uint)(*(float *)(param_1 + 0x54) -
                                               (*(float *)(param_1 + 0x40) -
                                               *(float *)(param_1 + 0x38)))));
            auVar44 = vmaxss_avx(auVar44,auVar45._0_16_);
            *(int *)(param_1 + 0x60) = auVar44._0_4_;
          }
          puVar13 = (undefined4 *)FUN_1804af210(DAT_180bb8ae8,uVar15 + 0x295);
          auVar44 = auVar45._0_16_;
          puVar13[1] = uVar34;
          *puVar13 = uVar34;
          *(undefined2 *)(puVar13 + 2) = 0;
        }
        else {
          do {
            if (lVar22 == lVar30) goto LAB_180503e26;
            lVar22 = *(longlong *)(lVar22 + 0x3d0);
          } while (lVar22 != 0);
        }
      }
    }
  }
  else {
    auVar45 = ZEXT1664(auVar44);
    FUN_180504090(param_1,iVar25,local_b8);
    auVar44 = auVar45._0_16_;
  }
  fVar42 = *(float *)(param_1 + 0x38);
  auVar47 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x5c)),
                       ZEXT416((uint)(*(float *)(param_1 + 0x54) -
                                     (*(float *)(param_1 + 0x40) - fVar42))));
  auVar47 = vmaxss_avx(auVar47,auVar44);
  fVar35 = auVar47._0_4_;
  *(float *)(param_1 + 0x5c) = fVar35;
  auVar47 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x60)),
                       ZEXT416((uint)(*(float *)(param_1 + 0x54) -
                                     (*(float *)(param_1 + 0x40) - fVar42))));
  auVar44 = vmaxss_avx(auVar47,auVar44);
  fVar43 = auVar44._0_4_;
  *(float *)(param_1 + 0x60) = fVar43;
  if (fVar35 == fVar43) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    auVar47 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x68)),
                         ZEXT416((uint)(*(float *)(lVar33 + 0x11e0) * 70.0)));
    auVar41._0_4_ = ABS(fVar43 - fVar35) / 0.3;
    auVar41._4_12_ = ZEXT412(0);
    auVar47 = vmaxss_avx(auVar47,auVar41);
    *(float *)(param_1 + 0x68) = auVar47._0_4_;
    if ((*(int *)(lVar33 + 4) <= *(int *)(param_1 + 0x34) + 1) &&
       (*(float *)(param_1 + 100) <= *(float *)(lVar33 + 0x11e0) * 10.0)) {
      fVar1 = auVar47._0_4_ * *(float *)(lVar33 + 0x40);
      if (fVar43 <= fVar35) {
        bVar2 = fVar43 < fVar35;
        fVar43 = fVar35;
        if (bVar2) {
          auVar44 = vmaxss_avx(ZEXT416((uint)(fVar35 - fVar1)),auVar44);
          fVar43 = auVar44._0_4_;
        }
      }
      else {
        auVar44 = vminss_avx(ZEXT416((uint)(fVar35 + fVar1)),auVar44);
        fVar43 = auVar44._0_4_;
      }
    }
    *(float *)(param_1 + 0x5c) = fVar43;
  }
  *(float *)(param_1 + 0x70) = (*(float *)(param_1 + 0x40) - (float)local_98._4_4_) - fStack_9c;
  *(float *)(param_1 + 0x6c) = fVar42 + afStack_b4[0] + afStack_b4[2];
  lVar33 = *(longlong *)(lVar33 + 0x14d0);
  *(undefined8 *)(lVar33 + 0x118) = *(undefined8 *)(param_1 + 0x38);
  local_104 = *(uint *)(param_1 + 0x54);
  local_100 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c);
  FUN_1804c6420(&local_104);
  auVar44 = vmaxss_avx(ZEXT416(*(uint *)(lVar33 + 0x138)),
                       ZEXT416((uint)(*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x38))));
  *(int *)(lVar33 + 0x138) = auVar44._0_4_;
}



