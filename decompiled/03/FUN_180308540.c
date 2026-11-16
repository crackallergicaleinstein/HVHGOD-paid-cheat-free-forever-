// FUN_180308540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308540 */

ulonglong *
FUN_180308540(ulonglong *param_1,ulonglong *param_2,char param_3,float param_4,float *param_5,
             uint param_6,float *param_7,longlong param_8)

{
  float fVar1;
  ulonglong uVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_140;
  float local_138;
  float local_130;
  ulonglong local_128;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  
  iVar3 = *(int *)(param_8 + 0x20);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  auVar16._12_4_ = 0;
  auVar16._0_12_ = ZEXT812(0);
  auVar22 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar16 = vmaxss_avx(auVar16 << 0x20,ZEXT416(param_6));
  auVar25 = ZEXT1664(auVar16);
  uVar23 = auVar16._0_4_;
  if (iVar3 < 2) {
    local_128 = *param_2;
    local_120 = (float)param_2[1];
    puVar8 = (ulonglong *)FUN_180308400(&local_140,&local_128,param_3,(longlong)iVar3,param_7);
    fVar17 = *param_7;
    uVar2 = *puVar8;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar2;
    fVar14 = *(float *)(puVar8 + 1);
    local_128._0_4_ = (float)uVar2;
    auVar15 = ZEXT416((uint)(float)local_128);
    auVar16 = vshufps_avx(auVar18,auVar18,0x55);
    fVar19 = *param_5;
    fVar1 = param_5[1];
    fVar20 = param_5[2];
    fVar10 = fVar1 * auVar16._0_4_ + fVar19 * (float)local_128 + fVar20 * fVar14;
    fVar11 = -fVar10 * fVar17;
    fVar12 = auVar22._0_4_;
    *(float *)(param_1 + 2) = fVar11;
    if ((fVar11 <= fVar12) || (fVar11 < auVar25._0_4_)) {
      *(undefined1 *)((longlong)param_1 + 0xc) = 0;
      fVar12 = auVar25._0_4_ - fVar11;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      if (fVar10 < fVar12) {
        fVar10 = fVar10 * param_7[9];
        local_128._0_4_ = (float)local_128 - fVar10 * fVar19;
        auVar15 = ZEXT416((uint)(float)local_128);
        fVar11 = auVar16._0_4_ - fVar10 * fVar1;
        auVar16 = ZEXT416((uint)fVar11);
        fVar14 = fVar14 - fVar10 * fVar20;
        fVar10 = fVar11 * fVar1 + (float)local_128 * fVar19 + fVar14 * fVar20;
        if (fVar10 < fVar12) {
          fVar14 = fVar14 - fVar20 * fVar10;
          auVar15 = ZEXT416((uint)((float)local_128 - fVar19 * fVar10));
          auVar16 = ZEXT416((uint)(fVar11 - fVar1 * fVar10));
        }
      }
      auVar16 = vunpcklps_avx(auVar15,auVar16);
      uVar2 = auVar16._0_8_;
    }
    *(float *)((longlong)param_1 + 0x14) = fVar12;
    fVar19 = param_7[7];
    fVar1 = param_7[1];
    *param_1 = uVar2;
    *(float *)(param_1 + 1) = fVar14 - (1.0 - fVar19) * fVar17 * fVar1;
  }
  else {
    local_118 = *(float *)(param_2 + 1);
    local_128 = *param_2;
    local_140 = local_128;
    if (0 < iVar3) {
      local_158 = param_4 * 0.017453292;
      local_10c = *param_7;
      local_140._4_4_ = (float)(local_128 >> 0x20);
      local_140._0_4_ = (float)local_128;
      lVar9 = 0;
      local_130 = 0.0;
      auVar26 = ZEXT464((uint)param_5[2]);
      auVar27 = ZEXT464((uint)*param_5);
      local_150 = local_140._4_4_;
      auVar28 = ZEXT464((uint)param_5[1]);
      local_14c = (float)local_140;
      fVar17 = local_140._4_4_;
      fVar19 = (float)local_140;
      local_154 = local_118;
      local_138 = local_118;
      local_120 = local_118;
      local_110 = local_158;
      do {
        uVar5 = *(undefined8 *)param_7;
        uStack_100 = *(undefined8 *)(param_7 + 2);
        uStack_f8 = *(undefined8 *)(param_7 + 4);
        uVar6 = *(undefined8 *)(param_7 + 6);
        fVar1 = local_10c * *(float *)(param_8 + lVar9 * 4);
        local_e8 = *(undefined8 *)(param_7 + 8);
        local_108._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        uStack_f0._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        local_114 = fVar1 * local_108._4_4_ * uStack_f0._4_4_;
        local_118 = local_118 - local_114;
        local_108 = uVar5;
        uStack_f0 = uVar6;
        if (param_3 == '\0') {
          local_140 = CONCAT44(fVar17,fVar19);
          local_158 = local_110;
          fVar20 = local_118;
        }
        else {
          auVar22 = ZEXT1664(auVar22._0_16_);
          auVar25 = ZEXT1664(auVar25._0_16_);
          auVar26 = ZEXT1664(auVar26._0_16_);
          auVar27 = ZEXT1664(auVar27._0_16_);
          auVar28 = ZEXT1664(auVar28._0_16_);
          fVar10 = (float)FUN_180637540();
          fVar11 = (float)FUN_180638e00(local_158);
          fVar14 = local_114;
          auVar16 = vminss_avx(ZEXT416(uStack_100._4_4_),ZEXT416((uint)(float)uStack_f8));
          fVar20 = auVar16._0_4_ - (fVar11 * fVar17 + fVar10 * fVar19);
          fVar12 = auVar22._0_4_;
          if (fVar12 < fVar20) {
            auVar16 = vminss_avx(ZEXT416((uint)((float)uStack_f8 * (float)uStack_100 * fVar1 *
                                               uStack_f8._4_4_)),ZEXT416((uint)fVar20));
            fVar12 = auVar16._0_4_;
          }
          fVar17 = fVar12 * (float)local_e8 * fVar11 + fVar17;
          fVar19 = fVar12 * (float)local_e8 * fVar10 + fVar19;
          local_140 = CONCAT44(fVar17,fVar19);
          fVar20 = local_118;
          fVar11 = (float)FUN_180637540(local_158);
          fVar12 = (float)FUN_180638e00(local_158);
          auVar16 = vminss_avx(ZEXT416(uStack_100._4_4_),ZEXT416((uint)(float)uStack_f8));
          fVar10 = auVar16._0_4_ - (fVar12 * local_150 + fVar11 * local_14c);
          fVar21 = auVar22._0_4_;
          if (fVar21 < fVar10) {
            auVar16 = vminss_avx(ZEXT416((uint)((float)uStack_f8 * (float)uStack_100 * fVar1 *
                                               uStack_f8._4_4_)),ZEXT416((uint)fVar10));
            fVar21 = auVar16._0_4_;
          }
          local_150 = fVar21 * (float)local_e8 * fVar12 + local_150;
          local_14c = fVar21 * (float)local_e8 * fVar11 + local_14c;
          local_114 = fVar14;
        }
        local_154 = local_154 - local_114;
        fVar12 = auVar28._0_4_;
        fVar11 = auVar27._0_4_;
        fVar10 = auVar26._0_4_;
        local_130 = local_130 -
                    (local_150 * fVar12 + fVar11 * local_14c + fVar10 * local_154) * fVar1;
        iVar7 = 0;
        fVar14 = fVar1;
        do {
          fVar21 = auVar22._0_4_;
          if (fVar14 <= fVar21) break;
          fVar4 = fVar17 * fVar12 + fVar19 * fVar11 + local_118 * fVar10;
          fVar13 = -fVar4;
          fVar24 = auVar25._0_4_;
          if ((fVar13 <= fVar21) || (fVar13 * fVar14 < fVar24)) {
            auVar25 = ZEXT464((uint)(fVar24 - fVar13 * fVar14));
            break;
          }
          fVar14 = fVar14 - fVar24 / fVar13;
          auVar25 = ZEXT1664(auVar22._0_16_);
          local_118 = fVar20;
          if (fVar4 < fVar21) {
            fVar4 = fVar4 * param_7[9];
            fVar17 = fVar17 - fVar4 * fVar12;
            fVar19 = fVar19 - fVar4 * fVar11;
            local_118 = fVar20 - fVar4 * fVar10;
            fVar20 = fVar17 * fVar12 + fVar19 * fVar11 + local_118 * fVar10;
            if (fVar20 < fVar21) {
              local_118 = local_118 - fVar10 * fVar20;
              fVar19 = fVar19 - fVar11 * fVar20;
              fVar17 = fVar17 - fVar12 * fVar20;
            }
          }
          iVar7 = iVar7 + 1;
          *(undefined1 *)((longlong)param_1 + 0xc) = 1;
          local_140 = CONCAT44(fVar17,fVar19);
          fVar20 = local_118;
        } while (iVar7 < 4);
        uVar23 = auVar25._0_4_;
        fVar1 = local_108._4_4_ * fVar1 * (1.0 - uStack_f0._4_4_);
        local_118 = fVar20 - fVar1;
        lVar9 = lVar9 + 1;
        local_154 = local_154 - fVar1;
      } while (lVar9 < iVar3);
      *(float *)(param_1 + 2) = local_130;
    }
    *param_1 = local_140;
    *(float *)(param_1 + 1) = local_118;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar23;
  }
  return param_1;
}



