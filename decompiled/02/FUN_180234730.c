// FUN_180234730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180234730 */

float * FUN_180234730(longlong *param_1,float *param_2,longlong param_3,double param_4,float param_5
                     ,float param_6,float param_7,float param_8,float param_9,float param_10,
                     float param_11)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar24 [64];
  float fVar25;
  uint uVar26;
  undefined8 unaff_XMM11_Qa;
  undefined4 uVar27;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar28 [64];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar29 [64];
  float local_198;
  float local_194;
  float local_190;
  float local_18c [3];
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170 [10];
  undefined1 local_148 [16];
  ulonglong local_138;
  float local_130 [10];
  float local_108;
  float local_104;
  float local_100;
  float local_fc [3];
  float local_f0 [6];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  sVar5 = thunk_FUN_1806243d0(param_4);
  if (((((0 < sVar5) || (sVar5 = thunk_FUN_180624430(param_5), 0 < sVar5)) ||
       (sVar5 = thunk_FUN_180624430(param_6), 0 < sVar5)) ||
      ((sVar5 = thunk_FUN_180624430(param_7), 0 < sVar5 ||
       (sVar5 = thunk_FUN_180624430(param_8), 0 < sVar5)))) ||
     (((sVar5 = thunk_FUN_180624430(param_9), 0 < sVar5 ||
       ((sVar5 = thunk_FUN_180624430(param_10), 0 < sVar5 ||
        (fVar25 = param_11, sVar5 = thunk_FUN_180624430(param_11), 0 < sVar5)))) ||
      (fVar25 <= 1e-05)))) {
    *param_1 = -1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = local_148._8_8_;
    local_148 = auVar22 << 0x40;
    auVar22 = vinsertps_avx(local_148,ZEXT816(0),0x20);
    auVar22 = vinsertps_avx(auVar22,ZEXT816(0),0x30);
    *(undefined1 (*) [16])(param_1 + 4) = auVar22;
    param_1[6] = local_138 & 0xffffffff00000000;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    lVar1 = *param_1;
    local_68 = unaff_XMM8_Qa;
    uStack_60 = unaff_XMM8_Qb;
    if (param_3 != lVar1) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = ZEXT812(0);
      if ((-1 < lVar1) &&
         (((param_3 < lVar1 || (param_4 < (double)param_1[1])) ||
          (0.2 < param_4 - (double)param_1[1])))) {
        local_170[4] = 0.0;
        local_170[5] = 0.0;
        local_170[6] = 0.0;
        local_170[7] = 0.0;
        local_170[2] = -NAN;
        local_170[3] = -NAN;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_148._8_8_;
        local_148 = auVar2 << 0x40;
        local_170[8] = 0.0;
        local_170[9] = 0.0;
        *param_1 = -1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        local_138 = local_138 & 0xffffffff00000000;
        auVar22 = vinsertps_avx(local_148,auVar3 << 0x20,0x20);
        local_148 = vinsertps_avx(auVar22,auVar3 << 0x20,0x30);
        *(undefined1 (*) [16])(param_1 + 4) = local_148;
        param_1[6] = local_138;
      }
      lVar1 = *param_1;
      if ((lVar1 < 0) || (param_4 != (double)param_1[1])) {
        local_78 = unaff_XMM9_Qa;
        uStack_70 = unaff_XMM9_Qb;
        local_c8 = unaff_XMM14_Qa;
        uStack_c0 = unaff_XMM14_Qb;
        if (lVar1 < 0) {
          auVar22 = SUB6416(ZEXT464(0x3c800000),0);
        }
        else {
          local_130[1] = (float)(param_4 - (double)param_1[1]);
          pfVar7 = local_130;
          if (0.001 <= local_130[1]) {
            pfVar7 = local_130 + 1;
          }
          local_130[2] = 0.05;
          pfVar8 = local_130 + 2;
          if (local_130[1] <= 0.05) {
            pfVar8 = pfVar7;
          }
          local_130[0] = 0.001;
          auVar22 = ZEXT416((uint)*pfVar8);
        }
        auVar23 = ZEXT1264(ZEXT812(0)) << 0x20;
        auVar24 = ZEXT1664(auVar22);
        auVar28._0_8_ = FUN_180636420();
        auVar28._8_56_ = extraout_var;
        local_194 = (float)auVar28._0_8_;
        auVar28 = ZEXT1664(auVar28._0_16_);
        sVar5 = thunk_FUN_180624430();
        if (0 < sVar5) {
          *param_1 = -1;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_148._8_8_;
          local_148 = auVar4 << 0x40;
          auVar22 = vinsertps_avx(local_148,auVar23._0_16_,0x20);
          auVar22 = vinsertps_avx(auVar22,auVar23._0_16_,0x30);
          *(undefined1 (*) [16])(param_1 + 4) = auVar22;
          param_1[6] = CONCAT44((int)(local_138 >> 0x20),auVar23._0_4_);
          *(undefined1 *)(param_2 + 2) = 0;
          return param_2;
        }
        local_130[4] = param_10 * 0.2;
        fVar14 = 0.5;
        local_98 = unaff_XMM11_Qa;
        uStack_90 = unaff_XMM11_Qb;
        uVar26 = 0x80000000;
        uVar27 = 0;
        pfVar7 = local_130 + 3;
        if (0.35 <= local_130[4]) {
          pfVar7 = local_130 + 4;
        }
        local_a8 = unaff_XMM12_Qa;
        uStack_a0 = unaff_XMM12_Qb;
        fVar15 = 1.0;
        pfVar8 = local_130 + 5;
        if (local_130[4] <= 1.5) {
          pfVar8 = pfVar7;
        }
        local_d8 = unaff_XMM15_Qa;
        uStack_d0 = unaff_XMM15_Qb;
        local_130[5] = 1.5;
        local_130[3] = 0.35;
        if (-1 < lVar1) {
          auVar16._0_8_ = auVar24._0_8_ ^ 0x80000000;
          auVar16._8_4_ = auVar24._8_4_;
          auVar16._12_4_ = auVar24._12_4_;
          auVar17._0_4_ = (float)auVar16._0_8_ / 0.025;
          auVar17._4_12_ = auVar16._4_12_;
          fVar13 = param_10;
          uVar9 = FUN_180615460(auVar17._0_8_);
          local_198 = (float)(uVar9 ^ uVar26);
          auVar28 = ZEXT464((uint)(param_5 - *(float *)(param_1 + 2)));
          auVar18._0_8_ = FUN_180615070(param_6 - *(float *)((longlong)param_1 + 0x14),0x43b40000);
          auVar18._8_56_ = extraout_var_00;
          fVar13 = fVar13 * 0.5;
          fVar21 = 6.0;
          auVar29 = ZEXT1664(auVar18._0_16_);
          local_130[8] = 6.0;
          local_130[6] = fVar15;
          local_130[7] = fVar13;
          fVar10 = (float)FUN_180636420(auVar28._0_8_,auVar18._0_8_);
          pfVar7 = local_130 + 6;
          if (fVar15 <= fVar13) {
            pfVar7 = local_130 + 7;
          }
          fVar14 = 0.5;
          pfVar6 = local_130 + 8;
          if (fVar13 <= fVar21) {
            pfVar6 = pfVar7;
          }
          if (fVar10 <= *pfVar6) {
            fVar13 = *(float *)(param_1 + 3);
            uVar9 = 0x7fffffff;
            auVar19._0_4_ = auVar28._0_4_ / auVar24._0_4_;
            auVar19._4_12_ = auVar28._4_12_;
            if ((fVar13 * auVar19._0_4_ < auVar23._0_4_) && (fVar25 * 0.5 < ABS(auVar28._0_4_))) {
              fVar13 = 0.0;
              *(undefined4 *)(param_1 + 3) = 0;
            }
            auVar28 = ZEXT464((uint)local_198);
            uVar11 = FUN_180242260(fVar13,auVar19._0_8_,local_198);
            *(undefined4 *)(param_1 + 3) = uVar11;
            fVar13 = *(float *)((longlong)param_1 + 0x1c);
            auVar20._0_4_ = auVar29._0_4_ / auVar24._0_4_;
            auVar20._4_12_ = auVar29._4_12_;
            if ((fVar13 * auVar20._0_4_ < auVar23._0_4_) &&
               (fVar25 * fVar14 < (float)((uint)auVar29._0_4_ & uVar9))) {
              fVar13 = 0.0;
              *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
            }
            uVar11 = FUN_180242260(fVar13,auVar20._0_8_,auVar28._0_8_);
            *(undefined4 *)((longlong)param_1 + 0x1c) = uVar11;
          }
          else {
            local_170[0] = 0.0;
            local_170[1] = 0.0;
            param_1[3] = 0;
          }
          auVar28 = ZEXT464((uint)local_194);
        }
        uVar9 = 0x7fffffff;
        *(float *)(param_1 + 5) = auVar24._0_4_ + *(float *)(param_1 + 5);
        pfVar7 = local_130 + 9;
        if (auVar23._0_4_ <= param_9) {
          pfVar7 = &param_9;
        }
        local_108 = fVar15;
        pfVar6 = &local_108;
        if (param_9 <= fVar15) {
          pfVar6 = pfVar7;
        }
        local_130[9] = auVar23._0_4_;
        if (*pfVar6 < fVar15) {
          uVar12 = FUN_180615540(CONCAT44(uVar27,(uint)*pfVar6 ^ uVar26));
          local_194 = (float)(uVar12 ^ uVar26) * 64.0;
        }
        else {
          local_194 = 10000.0;
        }
        uVar12 = FUN_180615460((float)((uint)local_194 ^ uVar26) * auVar24._0_4_);
        local_174 = 0.3;
        local_198 = (float)(uVar12 ^ uVar26);
        if (((lVar1 < 0) || (auVar28._0_4_ <= fVar25)) ||
           ((*(float *)(param_1 + 6) * local_198 * 0.3 <= *(float *)(param_1 + 6) - auVar28._0_4_ &&
            (local_174 = 0.3,
            fVar13 = (float)FUN_180636420((int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c))
            , fVar13 * auVar24._0_4_ <= auVar28._0_4_ * local_198)))) {
          local_104 = (float)(auVar24._0_4_ ^ uVar26) * fVar14;
        }
        else {
          local_104 = auVar24._0_4_;
        }
        local_104 = local_104 + *(float *)((longlong)param_1 + 0x2c);
        local_178 = auVar23._0_4_;
        local_180 = fVar15;
        local_198 = local_178;
        pfVar7 = &local_178;
        if (local_178 <= local_104) {
          pfVar7 = &local_104;
        }
        fVar13 = 3.0;
        local_190 = fVar15 - auVar28._0_4_ / *pfVar8;
        local_17c = *(float *)(param_1 + 5) / 0.12;
        pfVar8 = &local_174;
        if (local_104 <= local_174) {
          pfVar8 = pfVar7;
        }
        local_170[0] = fVar15;
        local_100 = local_178;
        pfVar7 = &local_198;
        if (local_178 <= local_190) {
          pfVar7 = &local_190;
        }
        local_198 = (*pfVar8 - 0.05) / 0.15;
        pfVar6 = &local_180;
        if (local_190 <= fVar15) {
          pfVar6 = pfVar7;
        }
        *(float *)((longlong)param_1 + 0x2c) = *pfVar8;
        fVar10 = *pfVar6;
        local_190 = fVar15;
        local_180 = local_178;
        pfVar7 = &local_180;
        if (local_178 <= local_198) {
          pfVar7 = &local_198;
        }
        pfVar8 = &local_190;
        if (local_198 <= fVar15) {
          pfVar8 = pfVar7;
        }
        pfVar7 = &local_100;
        if (local_178 <= local_17c) {
          pfVar7 = &local_17c;
        }
        pfVar6 = local_170;
        if (local_17c <= fVar15) {
          pfVar6 = pfVar7;
        }
        auVar22 = vmaxss_avx(ZEXT416((uint)*pfVar8),
                             ZEXT416((uint)((3.0 - (fVar10 + fVar10)) * fVar10 * fVar10 * *pfVar6)))
        ;
        auVar22 = vmaxss_avx(ZEXT416((uint)(auVar22._0_4_ * 30.0)),ZEXT416((uint)local_194));
        uVar12 = FUN_180615460((float)(auVar22._0_4_ ^ uVar26) * auVar24._0_4_);
        local_198 = (float)(uVar12 ^ uVar26);
        local_190 = auVar24._0_4_ * *(float *)(param_1 + 3);
        local_170[0] = auVar24._0_4_ * *(float *)((longlong)param_1 + 0x1c);
        fVar10 = (float)FUN_180636420();
        local_fc[1] = fVar14 * param_10;
        pfVar7 = local_fc;
        if (0.25 <= local_fc[1]) {
          pfVar7 = local_fc + 1;
        }
        local_fc[2] = fVar13;
        local_fc[0] = 0.25;
        pfVar8 = local_fc + 2;
        if (local_fc[1] <= fVar13) {
          pfVar8 = pfVar7;
        }
        local_194 = fVar15;
        if (*pfVar8 < fVar10) {
          local_194 = *pfVar8 / fVar10;
        }
        local_f0[1] = *(float *)(param_1 + 5) / 0.1;
        local_f0[0] = auVar23._0_4_;
        local_f0[2] = fVar15;
        pfVar7 = local_f0;
        if (local_f0[0] <= local_f0[1]) {
          pfVar7 = local_f0 + 1;
        }
        pfVar8 = local_f0 + 2;
        if (local_f0[1] <= fVar15) {
          pfVar8 = pfVar7;
        }
        fVar13 = 0.0;
        fVar10 = 0.0;
        local_194 = local_194 * *pfVar8;
        fVar15 = local_194 * local_190 + param_7;
        local_17c = fVar25 * fVar14;
        auVar22 = auVar23._0_16_;
        if (local_17c < (float)((uint)fVar15 & uVar9)) {
          local_18c[1] = *(float *)(param_1 + 4);
          if (fVar15 * local_18c[1] < local_f0[0]) {
            local_18c[1] = 0.0;
            *(undefined4 *)(param_1 + 4) = 0;
          }
          auVar2 = vminss_avx(ZEXT416((uint)fVar15),auVar22);
          local_18c[0] = auVar2._0_4_;
          auVar3 = vmaxss_avx(ZEXT416((uint)fVar15),auVar22);
          local_18c[1] = param_7 * local_198 + local_194 * local_190 + local_18c[1];
          pfVar7 = local_18c;
          if (auVar2._0_4_ <= local_18c[1]) {
            pfVar7 = local_18c + 1;
          }
          pfVar8 = local_18c + 2;
          if (local_18c[1] <= auVar3._0_4_) {
            pfVar8 = pfVar7;
          }
          local_18c[2] = auVar3._0_4_;
          fVar14 = *pfVar8 / fVar25;
          fVar13 = (float)(~uVar26 & (uint)fVar14);
          auVar2 = vroundps_avx(ZEXT416((uint)fVar13),0);
          auVar3 = vcmpss_avx(ZEXT416((uint)(fVar13 - auVar2._0_4_)),ZEXT416(0x3f000000),0);
          fVar13 = (float)((uint)((float)(auVar3._0_4_ & 0x3f800000) + auVar2._0_4_) |
                          uVar26 & (uint)fVar14) * fVar25;
          if ((float)((uint)fVar13 & uVar9) < (float)((uint)fVar15 & uVar9)) {
            fVar14 = *pfVar8 - fVar13;
          }
          else {
            fVar14 = 0.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        *(float *)(param_1 + 4) = fVar14;
        fVar14 = local_194 * local_170[0] + param_8;
        if (local_17c < (float)((uint)fVar14 & uVar9)) {
          local_18c[1] = *(float *)((longlong)param_1 + 0x24);
          if (fVar14 * local_18c[1] < local_f0[0]) {
            local_18c[1] = 0.0;
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          auVar3 = vminss_avx(ZEXT416((uint)fVar14),auVar22);
          local_18c[0] = auVar3._0_4_;
          auVar22 = vmaxss_avx(ZEXT416((uint)fVar14),auVar22);
          local_18c[1] = param_8 * local_198 + local_194 * local_170[0] + local_18c[1];
          pfVar7 = local_18c;
          if (auVar3._0_4_ <= local_18c[1]) {
            pfVar7 = local_18c + 1;
          }
          pfVar8 = local_18c + 2;
          if (local_18c[1] <= auVar22._0_4_) {
            pfVar8 = pfVar7;
          }
          local_18c[2] = auVar22._0_4_;
          fVar15 = *pfVar8 / fVar25;
          fVar10 = (float)(~uVar26 & (uint)fVar15);
          auVar3 = vroundps_avx(ZEXT416((uint)fVar10),0);
          auVar22 = vcmpss_avx(ZEXT416((uint)(fVar10 - auVar3._0_4_)),ZEXT416(0x3f000000),0);
          fVar10 = (float)((uint)((float)(auVar22._0_4_ & 0x3f800000) + auVar3._0_4_) |
                          uVar26 & (uint)fVar15) * fVar25;
          if ((float)((uint)fVar10 & uVar9) < (float)((uint)fVar14 & uVar9)) {
            auVar23 = ZEXT464((uint)(*pfVar8 - fVar10));
          }
        }
        *(int *)((longlong)param_1 + 0x24) = auVar23._0_4_;
        *(float *)(param_1 + 2) = param_5;
        *(float *)((longlong)param_1 + 0x14) = param_6;
        param_1[1] = (longlong)param_4;
        *(int *)(param_1 + 6) = auVar28._0_4_;
        *param_1 = param_3;
        *param_2 = fVar13;
        param_2[1] = fVar10;
        *(undefined1 *)(param_2 + 2) = 1;
        return param_2;
      }
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return param_2;
}



