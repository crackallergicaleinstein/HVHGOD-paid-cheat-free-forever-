// FUN_1802dc9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802dc9c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802dc9c0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ULONGLONG UVar14;
  int *piVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  int iVar27;
  char cVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  undefined1 auVar41 [64];
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  uint local_198;
  undefined8 local_190;
  float local_188;
  int local_180;
  int local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  uint local_138 [2];
  undefined3 local_130;
  undefined1 uStack_12d;
  uint local_128 [2];
  uint local_120 [2];
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  auVar41 = ZEXT1664(in_ZMM2._0_16_);
  local_f0 = ZEXT816(0x1807d49f8);
  local_190 = param_2;
  FUN_18017bf40(local_f0 + 8);
  FUN_1802c9680(0x400);
  uVar23 = param_1 + 0x148;
  local_100._8_8_ = 0;
  local_100._0_8_ = uVar23;
  iVar11 = FUN_1805f68d8(uVar23);
  cVar28 = iVar11 == 0;
  local_100[8] = cVar28;
  if (iVar11 == 0) {
    if ((DAT_180b0c5c0 == '\0') || (DAT_180b0c628 == 0)) {
      if (*(longlong *)(param_1 + 0x90) != *(longlong *)(param_1 + 0x98)) {
        *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x90);
      }
    }
    else {
      fVar36 = 400.0;
      local_198 = 0x43c80000;
      local_128[0] = 0x43c80000;
      fVar29 = 25.0;
      _local_130 = 0x41c80000;
      auVar33 = ZEXT464(DAT_180b0c640);
      local_138[0] = DAT_180b0c640;
      sVar10 = thunk_FUN_180624430(DAT_180b0c640);
      if (sVar10 < 1) {
        puVar18 = (uint *)&stack0xfffffffffffffed0;
        if (fVar29 <= auVar33._0_4_) {
          puVar18 = local_138;
        }
        puVar13 = local_128;
        if (auVar33._0_4_ <= fVar36) {
          puVar13 = puVar18;
        }
        local_128[0] = *puVar13;
      }
      else {
        local_128[0] = 0x43160000;
      }
      fVar29 = 800.0;
      local_120[0] = 0x44480000;
      auVar33 = ZEXT864(0);
      _local_130 = 0;
      auVar34 = ZEXT464(DAT_180b0c644);
      local_138[0] = DAT_180b0c644;
      sVar10 = thunk_FUN_180624430(DAT_180b0c644);
      if (sVar10 < 1) {
        puVar18 = (uint *)&stack0xfffffffffffffed0;
        if (auVar33._0_4_ <= auVar34._0_4_) {
          puVar18 = local_138;
        }
        puVar13 = local_120;
        if (auVar34._0_4_ <= fVar29) {
          puVar13 = puVar18;
        }
        local_198 = *puVar13;
      }
      fVar29 = 3.0;
      local_138[0] = 0x40400000;
      fVar36 = 0.5;
      local_120[0] = 0x3f000000;
      auVar34 = ZEXT464(DAT_180b0c648);
      _local_130 = DAT_180b0c648;
      sVar10 = thunk_FUN_180624430(DAT_180b0c648);
      auVar32 = auVar41._0_16_;
      auVar31 = auVar33._0_16_;
      if (sVar10 < 1) {
        puVar18 = local_120;
        if (fVar36 <= auVar34._0_4_) {
          puVar18 = (uint *)&stack0xfffffffffffffed0;
        }
        puVar13 = local_138;
        if (auVar34._0_4_ <= fVar29) {
          puVar13 = puVar18;
        }
        local_138[0] = *puVar13;
      }
      else {
        local_138[0] = 0x3f800000;
      }
      uVar35 = 0x3f800000;
      iVar11 = 0x200;
      puVar25 = *(undefined8 **)(param_1 + 0x90);
      puVar2 = *(undefined8 **)(param_1 + 0x98);
      fVar29 = 0.001;
      fVar36 = 0.001;
      uVar9 = 0x3f800000;
      if (puVar25 != puVar2) {
        do {
          uVar35 = uVar9;
          fVar29 = fVar36;
          UVar14 = GetTickCount64();
          auVar32 = auVar41._0_16_;
          auVar31 = auVar33._0_16_;
          uVar23 = puVar25[3];
          if (uVar23 == 0) {
            auVar3 = vmaxss_avx(ZEXT416((uint)(auVar41._0_4_ - *(float *)((longlong)puVar25 + 0xc)))
                                ,auVar31);
            fVar36 = auVar3._0_4_;
          }
          else {
            uVar19 = UVar14 - uVar23;
            if (UVar14 < uVar23) {
              uVar19 = 0;
            }
            if ((longlong)uVar19 < 0) {
              fVar36 = (float)uVar19 * fVar29;
            }
            else {
              fVar36 = (float)(longlong)uVar19 * fVar29;
            }
          }
        } while ((fVar36 <= *(float *)(puVar25 + 2)) &&
                (puVar25 = puVar25 + 5, fVar36 = fVar29, uVar9 = uVar35, puVar25 != puVar2));
        puVar8 = puVar25;
        if (puVar25 != puVar2) {
          while (puVar7 = puVar8 + 5, puVar7 != puVar2) {
            auVar33 = ZEXT1664(auVar33._0_16_);
            auVar41 = ZEXT1664(auVar41._0_16_);
            UVar14 = GetTickCount64();
            auVar32 = auVar41._0_16_;
            auVar31 = auVar33._0_16_;
            uVar23 = puVar7[3];
            if (uVar23 == 0) {
              auVar3 = vmaxss_avx(ZEXT416((uint)(auVar41._0_4_ - *(float *)((longlong)puVar8 + 0x34)
                                                )),auVar31);
              fVar36 = auVar3._0_4_;
            }
            else {
              uVar19 = UVar14 - uVar23;
              if (UVar14 < uVar23) {
                uVar19 = 0;
              }
              if ((longlong)uVar19 < 0) {
                fVar36 = (float)uVar19 * fVar29;
              }
              else {
                fVar36 = (float)(longlong)uVar19 * fVar29;
              }
            }
            puVar8 = puVar7;
            if (fVar36 <= *(float *)(puVar7 + 2)) {
              uVar4 = puVar7[1];
              uVar5 = puVar7[2];
              uVar6 = puVar7[3];
              *puVar25 = *puVar7;
              puVar25[1] = uVar4;
              puVar25[2] = uVar5;
              puVar25[3] = uVar6;
              puVar25[4] = puVar7[4];
              puVar25 = puVar25 + 5;
            }
          }
          if (puVar25 != puVar2) {
            lVar26 = *(longlong *)(param_1 + 0x98) - (longlong)puVar2;
            auVar41 = ZEXT1664(auVar31);
            auVar33 = ZEXT1664(auVar32);
            FUN_18063aed0(puVar25,puVar2,lVar26);
            auVar32 = auVar33._0_16_;
            auVar31 = auVar41._0_16_;
            *(longlong *)(param_1 + 0x98) = (longlong)puVar25 + lVar26;
          }
        }
      }
      uVar23 = param_1 + 0x148;
      local_118 = (undefined1  [16])0x0;
      local_108 = 0;
      uVar19 = (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90)) / 0x28;
      if (uVar19 != 0) {
        if (0x666666666666666 < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        auVar41 = ZEXT1664(auVar31);
        auVar33 = ZEXT1664(auVar32);
        lVar26 = FUN_18015bca0(uVar19 * 0x28);
        local_118._8_8_ = lVar26;
        local_118._0_8_ = lVar26;
        local_108 = uVar19 * 0x28 + lVar26;
        lVar22 = *(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90);
        FUN_18063aed0(lVar26,*(longlong *)(param_1 + 0x90),lVar22);
        auVar32 = auVar33._0_16_;
        auVar31 = auVar41._0_16_;
        local_118._8_8_ = lVar26 + (lVar22 / 0x28) * 0x28;
      }
      if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      auVar41 = ZEXT1664(auVar31);
      auVar33 = ZEXT1664(auVar32);
      FUN_1805f68fc(uVar23);
      uVar19 = local_190;
      local_100[8] = 0;
      cVar28 = '\0';
      if (local_118._0_8_ != local_118._8_8_) {
        fVar36 = 16777215.0;
        fVar38 = 0.55;
        fVar39 = 0.45;
        puVar17 = (ulonglong *)(local_118._0_8_ + 0x18);
        do {
          uVar23 = 0;
          iVar27 = (int)puVar17[1];
          if (iVar27 == 0) {
            local_17c = 0x60;
            local_180 = 8;
            piVar20 = &local_180;
            if (7 < DAT_180b0c638) {
              piVar20 = &DAT_180b0c638;
            }
            piVar15 = &local_17c;
            if (DAT_180b0c638 < 0x61) {
              piVar15 = piVar20;
            }
            iVar27 = *piVar15;
          }
          UVar14 = GetTickCount64();
          uVar21 = *puVar17;
          if (uVar21 == 0) {
            auVar31 = vmaxss_avx(ZEXT416((uint)(auVar33._0_4_ - *(float *)((longlong)puVar17 + -0xc)
                                               )),auVar41._0_16_);
            auVar34 = ZEXT1664(auVar31);
          }
          else {
            uVar24 = UVar14 - uVar21;
            if (UVar14 < uVar21) {
              uVar24 = uVar23;
            }
            if ((longlong)uVar24 < 0) {
              auVar34 = ZEXT464((uint)((float)uVar24 * fVar29));
            }
            else {
              auVar34 = ZEXT464((uint)((float)(longlong)uVar24 * fVar29));
            }
          }
          if (0 < iVar27) {
            uVar21 = uVar23;
            uVar40 = local_198;
            do {
              if (iVar11 < 1) break;
              iVar1 = *(int *)((longlong)puVar17 + -4);
              uVar12 = iVar1 + (int)uVar21;
              uVar12 = (uVar12 >> 0x10 ^ uVar12) * 0x7feb352d;
              uVar12 = (uVar12 >> 0xf ^ uVar12) * -0x7b935975;
              fVar29 = (((float)((uVar12 ^ uVar12 >> 0x10) & 0xffffff) / fVar36) * fVar38 + fVar39)
                       * *(float *)(puVar17 + -1);
              if ((auVar41._0_4_ <= auVar34._0_4_) && (auVar34._0_4_ <= fVar29)) {
                iVar11 = iVar11 + -1;
                local_1e8._0_4_ = local_128[0];
                local_1d8._0_4_ = uVar40;
                local_1e0._0_4_ = uVar35;
                puVar16 = (ulonglong *)FUN_1802c9340(local_158,iVar1,uVar23,auVar34._0_8_);
                auVar31._8_8_ = 0;
                auVar31._0_8_ = *puVar16;
                fVar37 = *(float *)(puVar17 + -2);
                auVar31 = vshufps_avx(auVar31,auVar31,0x55);
                local_190 = CONCAT44(auVar31._0_4_ + *(float *)((longlong)puVar17 + -0x14),
                                     (float)*puVar16 + *(float *)(puVar17 + -3));
                local_188 = fVar37 + *(float *)(puVar16 + 1);
                auVar31 = vmaxss_avx(ZEXT416((uint)(auVar34._0_4_ - 0.025)),auVar41._0_16_);
                local_1e0 = (double)CONCAT44(local_1e0._4_4_,0x3f800000);
                local_1e8._0_4_ = local_128[0];
                local_1d8._0_4_ = uVar40;
                puVar16 = (ulonglong *)FUN_1802c9340(local_148,iVar1,uVar23,auVar31._0_8_);
                uVar12 = DAT_180b0c634;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = *puVar16;
                local_178 = (float)*puVar16 + *(float *)(puVar17 + -3);
                auVar31 = vshufps_avx(auVar32,auVar32,0x55);
                local_174 = auVar31._0_4_ + *(float *)((longlong)puVar17 + -0x14);
                local_170 = fVar37 + *(float *)(puVar16 + 1);
                _local_130 = DAT_180b0c634;
                uVar35 = 0x3f800000;
                fVar29 = (float)FUN_180637bd0(1.0 - auVar34._0_4_ / fVar29,0x3fc00000);
                _local_130 = CONCAT13((char)(int)(fVar29 * (float)(uVar12 >> 0x18)),local_130);
                local_1d8 = (double)CONCAT44(local_1d8._4_4_,DAT_180b0c650);
                local_1e0 = (double)CONCAT71(local_1e0._1_7_,DAT_180b0c658);
                local_1e8 = CONCAT44(local_1e8._4_4_,local_138[0]);
                FUN_1802dc7b0(uVar19,&local_178,&local_190,_local_130);
              }
              uVar12 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar12;
              uVar21 = (ulonglong)((int)uVar21 + 0x1f);
            } while ((int)uVar12 < iVar27);
            auVar33 = ZEXT464(in_ZMM2._0_4_);
            fVar29 = 0.001;
          }
          puVar16 = puVar17 + 2;
          puVar17 = puVar17 + 5;
        } while (puVar16 != (ulonglong *)local_118._8_8_);
        uVar23 = local_100._0_8_;
        cVar28 = local_100[8];
      }
      FUN_1801b3590(local_118);
    }
  }
  if (cVar28 != '\0') {
    FUN_1805f68fc(uVar23);
  }
  FUN_18017bf40(&local_190);
  uVar23 = local_190;
  uVar24 = local_190 - local_f0._8_8_;
  puVar17 = (ulonglong *)FUN_1802e8ef0();
  local_1e8 = *puVar17 + 1;
  *puVar17 = local_1e8;
  uVar21 = puVar17[1] + uVar24;
  puVar17[1] = uVar21;
  local_1b8 = puVar17[3] + (ulonglong)(999999 < uVar24);
  puVar17[3] = local_1b8;
  local_1b0 = puVar17[4] + (ulonglong)(4999999 < uVar24);
  puVar17[4] = local_1b0;
  local_1a8 = puVar17[5] + (ulonglong)(15999999 < uVar24);
  puVar17[5] = local_1a8;
  uVar19 = puVar17[2];
  if (puVar17[2] < uVar24) {
    puVar17[2] = uVar24;
    uVar19 = uVar24;
  }
  if ((uVar23 == puVar17[7]) || ((longlong)puVar17[7] <= (longlong)uVar23)) {
    local_1c8 = (double)(longlong)(uVar23 - puVar17[6]) / 1000000.0;
    local_1c0 = 0.0;
    if (0.0 < local_1c8) {
      local_1c0 = ((double)uVar21 / 1000.0) / local_1c8;
    }
    local_1d0 = (double)uVar21 / 1000000.0;
    local_1d8 = (double)uVar19 / 1000.0;
    dVar30 = (double)uVar21 / (double)local_1e8;
    local_1e0 = dVar30 / 1000.0;
    FUN_1801af8a0(dVar30,local_1e0,local_f0._0_8_);
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[6] = uVar23;
    puVar17[7] = uVar23 + 5000000000;
  }
}



