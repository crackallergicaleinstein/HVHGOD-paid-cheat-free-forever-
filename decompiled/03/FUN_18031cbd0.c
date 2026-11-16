// FUN_18031cbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031cbd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031cbd0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  short sVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  uint uVar16;
  undefined1 auVar17 [64];
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined4 local_1e0;
  float local_1d8;
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 local_118 [24];
  float local_100;
  char local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  *param_2 = 0;
  local_130 = &param_6;
  *(undefined8 *)(param_2 + 8) = 0x7fc00000;
  *(undefined4 *)(param_2 + 0x18) = 0x4e6e6b28;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0x3f800000;
  local_1a8 = *param_1;
  local_190 = param_1[1];
  local_1a0 = &param_6;
  local_178 = param_1[3];
  local_188 = param_1[2];
  local_170 = param_8;
  local_168 = &param_9;
  auVar1 = vmaxss_avx(ZEXT416((uint)(*(float *)(local_188 + 0x54) * *(float *)(local_188 + 0x50) *
                                     0.5 * 0.16)),ZEXT416(0x3e800000));
  local_1d8 = auVar1._0_4_ * 0.2 * 0.5;
  local_1e8 = CONCAT44(local_1e8._4_4_,local_1d8);
  local_198 = param_2;
  local_180 = param_3;
  local_138 = local_1a8;
  local_128 = param_2;
  local_120 = local_190;
  pauVar5 = (undefined1 (*) [16])FUN_180332540(local_1d0,&local_138,param_4,param_5);
  local_1d0 = *pauVar5;
  auVar1 = vshufps_avx(local_1d0,local_1d0,0x55);
  auVar11 = ZEXT1664(auVar1);
  sVar4 = thunk_FUN_180624430(auVar1._0_8_);
  fVar10 = auVar11._0_4_;
  uVar16 = 0x7fffffff;
  if (sVar4 < 1) {
    uVar8 = local_1d0._0_4_;
    if (ABS(fVar10) <= *(float *)param_1[4]) {
      cVar3 = FUN_18031d040(&local_1a8,local_1d0._0_4_);
      fVar10 = auVar11._0_4_;
      if (cVar3 != '\0') {
        *param_2 = 1;
      }
    }
    *(undefined4 *)(param_2 + 4) = uVar8;
    *(float *)(param_2 + 8) = fVar10;
  }
  if ((param_7 != '\0') && (*(int *)(param_1[2] + 0x98) + 0x10 < 0x6f)) {
    auVar12 = ZEXT464(0x7f800000);
    fVar10 = 180.0;
    iVar6 = 0;
    auVar13 = ZEXT464(0x43b40000);
    fVar15 = 30.0;
    uVar8 = 0x3f800000;
    auVar17 = ZEXT464(0x42200000);
    auVar11 = ZEXT864(0);
    auVar14 = ZEXT864(0);
    do {
      fVar7 = (float)iVar6 * fVar15 - fVar10;
      sVar4 = thunk_FUN_180624430(fVar7);
      if (sVar4 < 1) {
        fVar7 = (float)FUN_180637760(fVar7 + fVar10,auVar13._0_8_);
        if (fVar7 < auVar11._0_4_) {
          fVar7 = fVar7 + auVar13._0_4_;
        }
        auVar9 = ZEXT464((uint)(fVar7 - fVar10));
      }
      else {
        auVar9 = ZEXT1664(auVar11._0_16_);
      }
      local_1e8 = CONCAT44(local_1e8._4_4_,param_6);
      FUN_18031a9e0(*param_1,local_118,1,auVar9._0_8_);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      if (local_e8 != '\0') {
        local_1e8 = param_1[3] + 4;
        local_1e0 = uVar8;
        pauVar5 = (undefined1 (*) [16])FUN_18030d8f0(local_158,param_1[2],param_3,local_118);
        local_1c0 = *(undefined8 *)pauVar5[1];
        local_1b8 = *(undefined4 *)(pauVar5[1] + 8);
        auVar1 = vpcmpeqd_avx(ZEXT116(SUB161(*pauVar5,2)),SUB6416(ZEXT464(0),0));
        auVar1 = vblendvps_avx(auVar11._0_16_,auVar17._0_16_,auVar1);
        auVar2 = vpcmpeqd_avx(ZEXT416(SUB164(*pauVar5,1) & 0xff),SUB6416(ZEXT464(0),0));
        auVar2 = vblendvps_avx(auVar11._0_16_,SUB6416(ZEXT464(0x43c80000),0),auVar2);
        fVar7 = (float)((uint)(local_100 - *(float *)param_1[1]) & uVar16) + auVar1._0_4_ +
                auVar2._0_4_;
        if (fVar7 < auVar12._0_4_) {
          auVar12 = ZEXT464((uint)fVar7);
          auVar14 = ZEXT1664(auVar9._0_16_);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xc);
    sVar4 = thunk_FUN_180624430(auVar12._0_8_);
    if ((sVar4 < 1) && (auVar12._0_4_ <= 60.0)) {
      local_1e8 = CONCAT44(local_1e8._4_4_,local_1d8);
      pauVar5 = (undefined1 (*) [16])FUN_180332540(local_1d0,&local_138,auVar14._0_8_,0x40000000);
      auVar1 = *pauVar5;
      auVar14 = ZEXT1664(auVar1);
      auVar1 = vshufps_avx(auVar1,auVar1,0x55);
      auVar11 = ZEXT1664(auVar1);
      sVar4 = thunk_FUN_180624430(auVar1._0_8_);
      if ((sVar4 < 1) &&
         (((float)(auVar11._0_4_ & uVar16) <= *(float *)param_1[4] &&
          (cVar3 = FUN_18031d040(&local_1a8,auVar14._0_8_), cVar3 != '\0')))) {
        *param_2 = 1;
        param_2[0x10] = 1;
      }
    }
  }
}



