// FUN_1804dd220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dd220 */

void FUN_1804dd220(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,uint param_5
                  ,float param_6,uint param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  auVar12 = ZEXT1664(in_ZMM2._0_16_);
  auVar2._4_12_ = in_register_000012c4;
  auVar2._0_4_ = param_4;
  auVar11 = ZEXT1664(auVar2);
  if ((param_5 & 0xff000000) == 0) {
    return;
  }
  param_7 = param_7 | *(uint *)(param_1 + 0x30);
  uVar7 = param_7 & 0xe0000;
  local_4c = in_ZMM2._0_4_;
  local_50 = in_ZMM1._0_4_;
  if (uVar7 == 0) {
    uVar7 = 0x20000;
    auVar10 = ZEXT1664(in_ZMM1._0_16_);
  }
  else {
    if (uVar7 == 0xe0000) {
      local_50 = local_50 + 0.5;
      local_4c = local_4c + 0.5;
      local_54 = param_4 + 0.5;
      pfVar8 = &local_58;
      pfVar6 = &local_50;
      goto LAB_1804dd411;
    }
    if (uVar7 == 0x40000) {
      auVar10 = ZEXT464((uint)(local_50 - param_6 * 0.5));
    }
    else {
      auVar10 = ZEXT1664(in_ZMM1._0_16_);
      if (uVar7 == 0x60000) {
        fVar1 = param_6 * *(float *)(param_1 + 0xe4);
        uVar4 = (uint)fVar1;
        auVar10 = ZEXT464((uint)(local_50 -
                                ((fVar1 - (float)(int)uVar4) * (float)(uVar4 & 1) +
                                (float)((int)uVar4 / 2)) * *(float *)(param_1 + 0xe0)));
      }
      else if (uVar7 == 0x80000) {
        auVar10 = ZEXT464((uint)(local_50 - param_6));
      }
    }
  }
  auVar2 = vinsertps_avx(ZEXT416((uint)param_6),auVar2,0x10);
  auVar2 = vinsertps_avx(auVar2,in_ZMM2._0_16_,0x20);
  auVar3 = vinsertps_avx(auVar2,auVar10._0_16_,0x30);
  auVar9._0_4_ = (int)auVar3._0_4_;
  auVar9._4_4_ = (int)auVar3._4_4_;
  auVar9._8_4_ = (int)auVar3._8_4_;
  auVar9._12_4_ = (int)auVar3._12_4_;
  auVar2 = vcvtdq2ps_avx(auVar9);
  auVar2 = vcmpps_avx(auVar2,auVar3,0);
  iVar5 = vmovmskps_avx(auVar2);
  if (((*(char *)(param_1 + 0xe8) != '\0') && (iVar5 == 0xf)) && ((param_7 >> 0xb & 1) == 0)) {
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
    local_58 = auVar10._0_4_;
    local_50 = local_58 + param_6;
    local_4c = auVar11._0_4_;
    local_54 = auVar12._0_4_;
    FUN_1804d96b0(param_1,&local_58,&local_50,param_5);
    return;
  }
  pfVar6 = &local_58;
  param_7 = param_7 & 0xfff1ffff | uVar7;
  pfVar8 = &local_50;
  local_54 = param_4;
LAB_1804dd411:
  local_58 = local_50;
  FUN_1804dc7e0(param_1,pfVar6,pfVar8,param_5,param_6,param_7);
  return;
}



