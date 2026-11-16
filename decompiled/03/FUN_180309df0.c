// FUN_180309df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180309df0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180309df0(ulonglong param_1,undefined4 param_2,float param_3,float *param_4,
                  longlong param_5)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 extraout_var [56];
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  ulonglong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined4 local_res10 [2];
  undefined1 auStack_178 [32];
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 *local_140;
  float *local_138;
  float *local_130;
  undefined4 *local_128;
  float *local_120;
  undefined8 local_118;
  float local_110 [2];
  float local_108;
  float local_104;
  char local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  float local_e8 [10];
  ulonglong local_c0;
  
  local_c0 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_110[0] = param_4[4] * 0.125;
  uVar13 = 0;
  uVar14 = 0x4e6e6b28;
  auVar17 = ZEXT464(0x3f800000);
  fVar4 = 180.0;
  fVar15 = -360.0;
  auVar9 = ZEXT464(0xc3340000);
  fVar16 = 360.0;
  lVar2 = 0;
  local_118._0_4_ = (float)param_1;
  local_118._4_4_ = (float)(param_1 >> 0x20);
  auVar10 = ZEXT864(0);
  fVar5 = (float)local_118;
  fVar3 = local_118._4_4_;
  local_res10[0] = param_2;
  local_154 = param_3;
  local_118 = param_1;
  do {
    fVar7 = 90.0;
    fVar5 = fVar5 * fVar5 + fVar3 * fVar3;
    fVar3 = local_154;
    if (fVar5 < 0.0) {
      auVar11._0_8_ = FUN_18061e150();
      auVar11._8_56_ = extraout_var;
      auVar6 = auVar11._0_16_;
    }
    else {
      auVar6 = ZEXT416((uint)SQRT(fVar5));
    }
    auVar11 = ZEXT1664(auVar6);
    local_140 = &local_118;
    local_100 = '\x01';
    local_130 = local_110;
    local_128 = local_res10;
    local_120 = &local_108;
    local_108 = auVar10._0_4_;
    local_138 = param_4;
    local_104 = local_108;
    local_fc = uVar13;
    uStack_f4 = uVar14;
    FUN_18030a240(&local_140,auVar10._0_8_,auVar10._0_8_,1);
    if (10.0 <= auVar11._0_4_) {
      fVar5 = (float)FUN_180636c80(local_118._4_4_,local_118 & 0xffffffff);
      fVar3 = 57.29578;
      fVar5 = fVar5 * 57.29578;
      local_e8[0] = 1.0;
      local_e8[1] = 0.5;
      local_e8[2] = 0.25;
      local_e8[3] = 0.1;
      local_e8[4] = 0.05;
      local_e8[5] = 0.025;
      local_e8[6] = 0.012;
      local_e8[7] = 0.006;
      local_e8[8] = 0.003;
      local_150 = fVar5 + fVar7;
      auVar12 = ZEXT464((uint)local_150);
      auVar6 = vinsertps_avx(auVar9._0_16_,ZEXT416((uint)(fVar5 - fVar7)),0xe);
      auVar9 = ZEXT1664(auVar6);
      local_148 = auVar17._0_4_;
      local_14c = 0xbf800000;
      pfVar1 = local_e8;
      do {
        fVar4 = *pfVar1;
        auVar6 = vminss_avx(ZEXT416((uint)param_4[1]),ZEXT416((uint)(fVar4 * *param_4)));
        local_158 = (auVar6._0_4_ - fVar4 * param_4[2] * *param_4 * local_110[0] * param_4[3]) /
                    auVar11._0_4_;
        auVar8 = ZEXT464((uint)fVar4);
        auVar9 = ZEXT1664(auVar9._0_16_);
        auVar10 = ZEXT1664(auVar10._0_16_);
        auVar11 = ZEXT1664(auVar11._0_16_);
        auVar12 = ZEXT1664(auVar12._0_16_);
        auVar17 = ZEXT1664(auVar17._0_16_);
        fVar4 = (float)FUN_180636820();
        fVar4 = fVar4 * fVar3;
        FUN_18030a240(&local_140,fVar4 + fVar5,auVar8._0_8_,0);
        FUN_18030a240(&local_140,fVar5 - fVar4,auVar8._0_8_);
        FUN_18030a240(&local_140,auVar12._0_8_,auVar8._0_8_);
        FUN_18030a240(&local_140,auVar9._0_8_,auVar8._0_8_);
        pfVar1 = pfVar1 + 1;
      } while (pfVar1 != local_e8 + 9);
      FUN_18030a240(&local_140,local_res10[0],auVar17._0_8_,0);
      fVar4 = 180.0;
      auVar9 = ZEXT464(0xc3340000);
      fVar15 = -360.0;
      fVar16 = 360.0;
      uVar13 = 0;
      uVar14 = 0x4e6e6b28;
      fVar3 = local_154;
    }
    else {
      FUN_18030a240(&local_140,local_res10[0],auVar17._0_8_,0);
    }
    if (local_100 == '\0') {
      for (fVar3 = local_108 - fVar3; fVar4 < fVar3; fVar3 = fVar3 + fVar15) {
      }
      for (; fVar3 < auVar9._0_4_; fVar3 = fVar3 + fVar16) {
      }
      auVar11 = ZEXT464((uint)(fVar3 * 0.017453292));
      fVar5 = (float)FUN_180638e00(fVar3 * 0.017453292);
      auVar12 = ZEXT464((uint)(fVar5 * local_104));
      fVar5 = (float)FUN_180637540(auVar11._0_8_);
      fVar3 = auVar12._0_4_;
      fVar5 = fVar5 * local_104;
    }
    else {
      fVar5 = auVar10._0_4_;
      fVar3 = fVar5;
    }
    pfVar1 = (float *)(param_5 + lVar2 * 8);
    *pfVar1 = fVar5;
    lVar2 = lVar2 + 1;
    pfVar1[1] = fVar3;
    local_118 = local_fc;
    fVar5 = (float)local_fc;
    fVar3 = local_fc._4_4_;
  } while (lVar2 < 8);
}



