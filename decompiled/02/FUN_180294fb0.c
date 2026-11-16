// FUN_180294fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180294fb0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180294fb0(undefined8 param_1,longlong param_2,longlong param_3,float param_4,float *param_5
                  )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float *pfVar7;
  undefined1 *puVar8;
  float *pfVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  float local_res20 [2];
  undefined1 auStack_1148 [32];
  float local_1128;
  float local_1124;
  uint local_1120;
  uint local_111c;
  uint local_1118;
  float local_1114;
  float local_1110;
  float local_110c;
  undefined1 *local_1108;
  undefined1 *local_1100;
  undefined8 local_10f8;
  float afStack_10ec [2];
  undefined1 local_10e4 [8];
  float local_10dc [3];
  undefined1 local_10d0 [4072];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1148;
  local_res20[0] = param_4;
  local_10f8 = param_1;
  FUN_18063aed0(afStack_10ec + 1,param_2,0x1000);
  local_1124 = 1.0;
  local_1128 = 0.0;
  local_1120 = 0x3f800000;
  local_111c = 0;
  pfVar9 = &local_1128;
  if (0.0 <= param_4) {
    pfVar9 = local_res20;
  }
  pfVar7 = &local_1124;
  if (param_4 <= 1.0) {
    pfVar7 = pfVar9;
  }
  fVar26 = *pfVar7;
  fVar25 = *param_5;
  fVar16 = param_5[1];
  fVar22 = param_5[2];
  fVar19 = (*(float *)(param_3 + 0x1004) - *(float *)(param_2 + 0x1004)) * fVar26 +
           *(float *)(param_2 + 0x1004);
  fVar23 = (*(float *)(param_3 + 0x1008) - *(float *)(param_2 + 0x1008)) * fVar26 +
           *(float *)(param_2 + 0x1008);
  fVar24 = (*(float *)(param_3 + 0x100c) - *(float *)(param_2 + 0x100c)) * fVar26 +
           *(float *)(param_2 + 0x100c);
  fVar20 = fVar23 - fVar16;
  fVar18 = fVar19 - fVar25;
  fVar21 = fVar24 - fVar22;
  fVar15 = fVar20 * fVar20 + fVar18 * fVar18 + fVar21 * fVar21;
  if (fVar15 < 0.0) {
    fVar15 = (float)FUN_18061e150(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  if (10.0 < fVar15) {
    fVar15 = 10.0 / fVar15;
    fVar18 = fVar18 * fVar15;
    fVar20 = fVar20 * fVar15;
    fVar21 = fVar21 * fVar15;
  }
  lVar11 = (longlong)*(int *)(param_2 + 0x1000);
  local_110c = (fVar21 + fVar22) - fVar24;
  local_1114 = (fVar18 + fVar25) - fVar19;
  local_1110 = (fVar20 + fVar16) - fVar23;
  if (0 < lVar11) {
    fVar25 = 0.001;
    auVar27 = ZEXT464(local_1120);
    auVar28 = ZEXT464(local_111c);
    puVar8 = local_10e4 + -param_3;
    puVar10 = local_10d0 + -param_3;
    local_1108 = puVar8;
    lVar14 = (longlong)local_10dc + (8 - param_3);
    local_1100 = puVar10;
    lVar13 = (longlong)local_10dc + (4 - param_3);
    pfVar9 = (float *)(param_3 + 4);
    param_2 = param_2 - param_3;
    lVar12 = (longlong)local_10dc - param_3;
    local_1118 = 0xbf800000;
    do {
      fVar16 = *pfVar9;
      fVar22 = *(float *)((longlong)pfVar9 + param_2);
      fVar19 = pfVar9[1];
      fVar23 = *(float *)((longlong)pfVar9 + param_2 + 4);
      fVar24 = *(float *)((longlong)pfVar9 + param_2);
      fVar15 = *(float *)((longlong)pfVar9 + param_2 + 4);
      *(float *)((longlong)pfVar9 + (longlong)(local_10e4 + (-4 - param_3) + -4)) =
           (pfVar9[-1] - *(float *)((longlong)pfVar9 + param_2 + -4)) * fVar26 +
           *(float *)((longlong)pfVar9 + param_2 + -4) + local_1114;
      *(float *)((longlong)pfVar9 + (longlong)(local_10e4 + (-4 - param_3))) =
           (fVar16 - fVar22) * fVar26 + fVar24 + local_1110;
      *(float *)((longlong)pfVar9 + (longlong)puVar8) =
           (fVar19 - fVar23) * fVar26 + fVar15 + local_110c;
      auVar17 = *(undefined1 (*) [16])((longlong)pfVar9 + param_2 + 0xc);
      auVar1 = *(undefined1 (*) [16])(pfVar9 + 3);
      auVar2 = vshufps_avx(auVar1,auVar1,0xff);
      auVar3 = vshufps_avx(auVar1,auVar1,0x55);
      fVar24 = auVar17._0_4_;
      auVar4 = vshufps_avx(auVar1,auVar1,0xaa);
      auVar5 = vshufps_avx(auVar17,auVar17,0x55);
      auVar6 = vshufps_avx(auVar17,auVar17,0xaa);
      auVar17 = vshufps_avx(auVar17,auVar17,0xff);
      fVar23 = auVar5._0_4_;
      fVar22 = auVar6._0_4_;
      fVar19 = auVar17._0_4_;
      auVar17 = vcmpss_avx(ZEXT416((uint)(auVar3._0_4_ * fVar23 + auVar1._0_4_ * fVar24 +
                                          auVar4._0_4_ * fVar22 + auVar2._0_4_ * fVar19)),
                           auVar28._0_16_,1);
      auVar17 = vblendvps_avx(auVar27._0_16_,ZEXT416(local_1118),auVar17);
      fVar16 = auVar17._0_4_;
      *(float *)((longlong)pfVar9 + lVar12) = (fVar16 * auVar1._0_4_ - fVar24) * fVar26 + fVar24;
      *(float *)((longlong)pfVar9 + lVar13) = (fVar16 * auVar3._0_4_ - fVar23) * fVar26 + fVar23;
      *(float *)((longlong)pfVar9 + lVar14) = (fVar16 * auVar4._0_4_ - fVar22) * fVar26 + fVar22;
      fVar19 = (fVar16 * auVar2._0_4_ - fVar19) * fVar26 + fVar19;
      *(float *)((longlong)pfVar9 + (longlong)puVar10) = fVar19;
      fVar16 = *(float *)((longlong)pfVar9 + lVar13);
      fVar22 = *(float *)((longlong)pfVar9 + lVar14);
      fVar16 = *(float *)((longlong)pfVar9 + lVar12) * *(float *)((longlong)pfVar9 + lVar12) +
               fVar16 * fVar16 + fVar22 * fVar22 + fVar19 * fVar19;
      if (fVar16 < 0.0) {
        fVar16 = (float)FUN_18061e150();
        puVar8 = local_1108;
        puVar10 = local_1100;
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      auVar17._4_4_ = fVar16;
      auVar17._0_4_ = fVar16;
      auVar17._8_4_ = fVar16;
      auVar17._12_4_ = fVar16;
      if (fVar25 < fVar16) {
        auVar17 = vdivps_avx(*(undefined1 (*) [16])((longlong)pfVar9 + lVar12),auVar17);
        *(undefined1 (*) [16])((longlong)pfVar9 + lVar12) = auVar17;
      }
      pfVar9 = pfVar9 + 8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    param_1 = local_10f8;
  }
  FUN_18063aed0(param_1,afStack_10ec + 1,0x1000);
}



