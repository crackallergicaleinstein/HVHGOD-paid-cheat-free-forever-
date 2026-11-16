// FUN_1804dcfb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dcfb0 */

void FUN_1804dcfb0(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,uint param_5
                  ,float param_6,uint param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  auVar11 = ZEXT1664(in_ZMM1._0_16_);
  auVar10 = ZEXT1664(in_ZMM2._0_16_);
  if ((param_5 & 0xff000000) == 0) {
    return;
  }
  param_7 = param_7 | *(uint *)(param_1 + 0x30);
  uVar6 = param_7 & 0xe0000;
  local_50 = in_ZMM2._0_4_;
  local_58 = in_ZMM1._0_4_;
  if (uVar6 == 0) {
    uVar6 = 0x20000;
    auVar9 = ZEXT1664(CONCAT124(in_register_000012c4,param_4));
  }
  else {
    if (uVar6 == 0xe0000) {
      fVar1 = local_50 + 0.5;
      local_4c = param_4 + 0.5;
      local_50 = local_58 + 0.5;
      pfVar7 = &local_58;
      pfVar5 = &local_50;
      local_58 = fVar1;
      goto LAB_1804dd19d;
    }
    if (uVar6 == 0x40000) {
      auVar9 = ZEXT464((uint)(param_4 - param_6 * 0.5));
    }
    else {
      auVar9 = ZEXT1664(CONCAT124(in_register_000012c4,param_4));
      if (uVar6 == 0x60000) {
        fVar1 = param_6 * *(float *)(param_1 + 0xe4);
        uVar3 = (uint)fVar1;
        auVar9 = ZEXT464((uint)(param_4 -
                               ((fVar1 - (float)(int)uVar3) * (float)(uVar3 & 1) +
                               (float)((int)uVar3 / 2)) * *(float *)(param_1 + 0xe0)));
      }
      else if (uVar6 == 0x80000) {
        auVar9 = ZEXT464((uint)(param_4 - param_6));
      }
    }
  }
  auVar8 = vinsertps_avx(ZEXT416((uint)param_6),auVar9._0_16_,0x10);
  auVar8 = vinsertps_avx(auVar8,in_ZMM2._0_16_,0x20);
  auVar2 = vinsertps_avx(auVar8,in_ZMM1._0_16_,0x30);
  auVar8._0_4_ = (int)auVar2._0_4_;
  auVar8._4_4_ = (int)auVar2._4_4_;
  auVar8._8_4_ = (int)auVar2._8_4_;
  auVar8._12_4_ = (int)auVar2._12_4_;
  auVar8 = vcvtdq2ps_avx(auVar8);
  auVar8 = vcmpps_avx(auVar8,auVar2,0);
  iVar4 = vmovmskps_avx(auVar8);
  if (((*(char *)(param_1 + 0xe8) != '\0') && (iVar4 == 0xf)) && ((param_7 >> 0xb & 1) == 0)) {
    fVar1 = *(float *)(param_1 + 0xe0);
    if (param_6 < fVar1) {
      if (param_6 < fVar1 * 0.003921569) {
        return;
      }
      param_5 = (int)(longlong)(param_6 * *(float *)(param_1 + 0xe4) * (float)(param_5 >> 0x18)) <<
                0x18 | param_5 & 0xffffff;
      param_6 = fVar1;
    }
    FUN_1804d9590(param_1,6,4);
    local_54 = auVar9._0_4_;
    local_4c = local_54 + param_6;
    local_50 = auVar10._0_4_;
    local_58 = auVar11._0_4_;
    FUN_1804d96b0(param_1,&local_58,&local_50,param_5);
    return;
  }
  pfVar5 = &local_58;
  param_7 = param_7 & 0xfff1ffff | uVar6;
  pfVar7 = &local_50;
  local_4c = param_4;
LAB_1804dd19d:
  local_54 = local_4c;
  FUN_1804dc7e0(param_1,pfVar5,pfVar7,param_5,param_6,param_7);
  return;
}



