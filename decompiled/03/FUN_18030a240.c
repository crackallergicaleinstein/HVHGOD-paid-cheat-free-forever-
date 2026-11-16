// FUN_18030a240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030a240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030a240(undefined8 *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_ZMM2 [64];
  float fVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  ulonglong local_98;
  undefined8 local_90;
  undefined7 uStack_87;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  auVar14 = ZEXT1664(in_ZMM2._0_16_);
  if (param_4 == '\0') {
    local_a8 = *(undefined4 *)param_1[2];
    local_98 = FUN_180309d00(*(undefined8 *)*param_1);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_98;
    auVar5 = vshufps_avx(auVar5,auVar5,0x55);
    auVar11 = ZEXT1664(auVar5);
    fVar8 = (float)local_98;
  }
  else {
    auVar11 = ZEXT464((uint)((float *)*param_1)[1]);
    fVar8 = *(float *)*param_1;
  }
  auVar9 = ZEXT464((uint)fVar8);
  fVar8 = auVar11._0_4_ * auVar11._0_4_ + fVar8 * fVar8;
  if (fVar8 < 0.0) {
    fVar8 = (float)FUN_18061e150();
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  auVar10 = auVar11._0_16_;
  auVar5 = auVar9._0_16_;
  auVar13 = auVar14._0_16_;
  uVar12 = 0x7fffffff;
  if (1.0 <= fVar8) {
    pfVar1 = (float *)param_1[3];
    fVar4 = (float)FUN_180636c80(auVar11._0_8_,auVar9._0_8_);
    auVar10 = auVar11._0_16_;
    auVar5 = auVar9._0_16_;
    auVar13 = auVar14._0_16_;
    for (fVar4 = *pfVar1 - fVar4 * 57.29578; 180.0 < fVar4; fVar4 = fVar4 + -360.0) {
    }
    for (; fVar4 < -180.0; fVar4 = fVar4 + 360.0) {
    }
    auVar7 = ZEXT416((uint)fVar4 & uVar12);
  }
  else {
    auVar7 = SUB6416(ZEXT464(0x43340000),0);
  }
  pauVar2 = (undefined1 (*) [16])param_1[4];
  if ((auVar7._0_4_ < *(float *)(pauVar2[1] + 4) - 0.002) ||
     (((float)((uint)(auVar7._0_4_ - *(float *)(pauVar2[1] + 4)) & uVar12) <= 0.002 &&
      (*(float *)(pauVar2[1] + 8) < fVar8)))) {
    auVar3[8] = param_4;
    auVar3._0_8_ = local_90;
    auVar3._9_7_ = uStack_87;
    auVar6._4_12_ = auVar3._4_12_;
    auVar6._0_4_ = param_2;
    auVar13 = vinsertps_avx(auVar6,auVar13,0x10);
    auVar5 = vinsertps_avx(auVar13,auVar5,0x30);
    *pauVar2 = auVar5;
    auVar5 = vunpcklps_avx(auVar10,auVar7);
    *(longlong *)pauVar2[1] = auVar5._0_8_;
    *(float *)(pauVar2[1] + 8) = fVar8;
  }
}



