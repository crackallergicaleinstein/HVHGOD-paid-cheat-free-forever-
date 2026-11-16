// FUN_1803d6f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6f30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d6f30(undefined8 *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  char param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  short sVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_130 = param_7;
  sVar9 = thunk_FUN_180624430(*param_3);
  if (((((sVar9 < 1) && (sVar9 = thunk_FUN_180624430(param_3[1]), sVar9 < 1)) &&
       (sVar9 = thunk_FUN_180624430(param_3[2]), sVar9 < 1)) &&
      (((sVar9 = thunk_FUN_180624430(*param_4), sVar9 < 1 &&
        (sVar9 = thunk_FUN_180624430(param_4[1]), sVar9 < 1)) &&
       ((sVar9 = thunk_FUN_180624430(param_4[2]), sVar9 < 1 &&
        ((fVar18 = param_5, sVar9 = thunk_FUN_180624430(param_5), sVar9 < 1 &&
         (fVar23 = 0.0, 0.0 <= fVar18)))))))) && (fVar18 <= 100.0)) {
    for (pfVar11 = param_2; pfVar11 != param_2 + 0xc; pfVar11 = pfVar11 + 1) {
      sVar9 = thunk_FUN_180624430(*pfVar11);
      if (0 < sVar9) goto LAB_1803d7490;
    }
    fVar20 = 0.001;
    fVar18 = 10.0;
    lVar12 = 0;
    pfVar11 = param_2 + 1;
    do {
      fVar13 = (float)FUN_1806052cc(pfVar11[-1],*pfVar11,pfVar11[1]);
      if ((fVar13 < fVar20) || (fVar18 < fVar13)) goto LAB_1803d7490;
      lVar12 = lVar12 + 4;
      pfVar11 = pfVar11 + 4;
    } while (lVar12 < 0xc);
    fVar18 = param_2[3];
    fVar20 = param_2[7];
    fVar13 = param_2[0xb];
    if (param_6 == '\0') {
      fVar14 = param_3[1];
      fVar1 = *param_3;
      fVar2 = param_3[2];
      fVar15 = fVar14 * param_2[1] + fVar1 * *param_2 + fVar2 * param_2[2];
      fVar24 = fVar1 * param_2[4] + fVar14 * param_2[5] + fVar2 * param_2[6];
      fVar14 = fVar14 * param_2[9] + fVar1 * param_2[8] + fVar2 * param_2[10];
    }
    else {
      fVar15 = *param_3;
      fVar14 = param_3[2];
      fVar24 = param_3[1];
    }
    auVar6 = vunpcklps_avx(ZEXT416((uint)(fVar18 + fVar15)),ZEXT416((uint)(fVar24 + fVar20)));
    local_e8 = auVar6._0_8_;
    local_e0 = fVar13 + fVar14;
    if (param_6 == '\0') {
      fVar3 = *param_4;
      fVar21 = param_4[1];
      fVar4 = param_4[2];
      fVar1 = fVar21 * param_2[1] + fVar3 * *param_2 + fVar4 * param_2[2];
      fVar2 = fVar21 * param_2[5] + fVar3 * param_2[4] + fVar4 * param_2[6];
      fVar3 = fVar3 * param_2[8] + fVar21 * param_2[9] + fVar4 * param_2[10];
    }
    else {
      fVar1 = *param_4;
      fVar2 = param_4[1];
      fVar3 = param_4[2];
    }
    auVar6 = vunpcklps_avx(ZEXT416((uint)(fVar18 + fVar1)),ZEXT416((uint)(fVar20 + fVar2)));
    local_f8 = auVar6._0_8_;
    fVar21 = 0.5;
    fVar18 = (fVar18 + fVar1 + fVar15 + fVar18) * 0.5;
    fVar20 = (fVar20 + fVar2 + fVar20 + fVar24) * 0.5;
    local_f0 = fVar13 + fVar3;
    fVar13 = (fVar13 + fVar3 + fVar13 + fVar14) * 0.5;
    if ((*(char *)(local_130 + 0x24) == '\0') || (param_6 != '\0')) {
      local_168 = (undefined1 *)0x3f800000;
      uStack_160._0_4_ = 0;
      uStack_160._4_4_ = 0;
      uStack_158._0_4_ = 0x3f800000;
      uStack_158._4_4_ = 0;
      puStack_150 = (undefined8 *)0x0;
      local_148._0_4_ = 0x3f800000;
      local_148._4_4_ = CONCAT31(local_148._5_3_,1);
      puVar10 = &local_168;
    }
    else {
      puVar10 = (undefined8 *)FUN_1803d6710(&local_168,param_2);
    }
    uStack_120 = puVar10[1];
    uStack_118 = puVar10[2];
    local_128 = *puVar10;
    uStack_110 = puVar10[3];
    local_d8 = *puVar10;
    uStack_d0 = (undefined4)uStack_120;
    uStack_cc = (undefined4)((ulonglong)uStack_120 >> 0x20);
    uStack_c8 = (undefined4)uStack_118;
    uStack_c4 = (undefined4)((ulonglong)uStack_118 >> 0x20);
    uStack_c0 = puVar10[3];
    local_b8._4_1_ = (char)((ulonglong)puVar10[4] >> 0x20);
    if (local_b8._4_1_ != '\0') {
      local_108 = (*param_4 - *param_3) * fVar21;
      local_104 = (param_4[1] - param_3[1]) * fVar21;
      local_168 = &param_6;
      uStack_140 = SUB84(param_2,0);
      uStack_13c = (undefined4)((ulonglong)param_2 >> 0x20);
      uStack_160 = &param_5;
      uStack_158 = &local_f8;
      puStack_150 = &local_e8;
      local_100 = (param_4[2] - param_3[2]) * fVar21;
      local_148 = &local_108;
      local_b8 = puVar10[4];
      auVar19._0_8_ = FUN_1803d7500(&local_168,&uStack_cc);
      auVar19._8_56_ = extraout_var;
      auVar19 = ZEXT1664(auVar19._0_16_);
      auVar16._0_8_ = FUN_1803d7500(&local_168,&local_d8);
      auVar16._8_56_ = extraout_var_00;
      auVar6 = vmaxss_avx(auVar19._0_16_,auVar16._0_16_);
      auVar22 = ZEXT1664(auVar6);
      fVar15 = (float)FUN_1803d7500(&local_168,&uStack_c0);
      auVar7._8_8_ = uStack_120;
      auVar7._0_8_ = local_128;
      auVar7._16_8_ = uStack_118;
      auVar7._24_8_ = uStack_110;
      auVar17 = auVar7._16_16_;
      fVar21 = (fVar15 + fVar15) * fVar21;
      auVar6 = vshufps_avx(auVar17,auVar17,0xaa);
      auVar17 = vshufps_avx(auVar17,auVar17,0xff);
      fVar18 = auVar6._0_4_ * fVar21 + fVar18;
      auVar19 = ZEXT464((uint)(fVar15 + fVar15));
      auVar16 = ZEXT464((uint)(auVar17._0_4_ * fVar21 + fVar20));
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar25 = ZEXT464((uint)((float)local_b8 * fVar21 + fVar13));
      fVar20 = (float)local_b8;
      sVar9 = thunk_FUN_180624430();
      if (sVar9 < 1) {
        sVar9 = thunk_FUN_180624430(auVar16._0_8_);
        if (sVar9 < 1) {
          sVar9 = thunk_FUN_180624430(auVar25._0_8_);
          if (((sVar9 < 1) && (fVar23 < auVar22._0_4_)) && (fVar23 < auVar19._0_4_)) {
            auVar8._8_8_ = uStack_120;
            auVar8._0_8_ = local_128;
            auVar8._16_8_ = uStack_118;
            auVar8._24_8_ = uStack_110;
            uVar5 = vmovhpd_avx(auVar8._16_16_);
            uStack_160._4_4_ = (undefined4)uVar5;
            uStack_158._0_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_168 = (undefined1 *)CONCAT44(auVar16._0_4_,fVar18);
            *param_1 = local_168;
            param_1[1] = CONCAT44(uStack_160._4_4_,auVar25._0_4_);
            param_1[2] = CONCAT44(fVar20,(undefined4)uStack_158);
            param_1[3] = local_128;
            auVar6 = vunpcklps_avx(auVar22._0_16_,auVar19._0_16_);
            param_1[4] = CONCAT44(uStack_cc,(int)uStack_120);
            param_1[5] = CONCAT44((int)((ulonglong)uStack_118 >> 0x20),uStack_c8);
            param_1[6] = auVar6._0_8_;
            *(undefined1 *)(param_1 + 7) = 1;
          }
        }
      }
    }
  }
LAB_1803d7490:
  *(undefined1 *)(param_1 + 7) = 0;
}



